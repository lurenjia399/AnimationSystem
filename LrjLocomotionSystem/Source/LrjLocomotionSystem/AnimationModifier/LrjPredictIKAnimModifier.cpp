// Fill out your copyright notice in the Description page of Project Settings.


#include "LrjPredictIKAnimModifier.h"

#include "AnimPose.h"

ULrjPredictIKAnimModifier::ULrjPredictIKAnimModifier()
{
	// 曲线名称
	// for(auto& CurveSetting : Setting)
	// {
	// 	CurveSetting.CurveName = FName(FString::Printf(TEXT("%s_%s"), *CurveSetting.BoneName.ToString(), *CurveSetting.CurveName.ToString()));
	// }
}

void ULrjPredictIKAnimModifier::OnApply_Implementation(UAnimSequence* AnimationSequence)
{
	Super::OnApply_Implementation(AnimationSequence);

	RemoveAllCurve(AnimationSequence);
	
	for(auto& CurveSetting : Setting)
	{
		CurveSetting.CurveName = FName(FString::Printf(TEXT("%s_%s"), *CurveSetting.BoneName.ToString(), *CurveSetting.CurveName.ToString()));
		// 添加曲线
		UAnimationBlueprintLibrary::AddCurve(AnimationSequence, CurveSetting.CurveName, ERawCurveTrackTypes::RCT_Float);

		FString test = FString::Printf(TEXT("%s_%s"), *CurveSetting.BoneName.ToString(), TEXT("Test"));
		UAnimationBlueprintLibrary::AddCurve(AnimationSequence, FName(test), ERawCurveTrackTypes::RCT_Float);

		const int32 AnimFrameNums = AnimationSequence->GetNumberOfSampledKeys();
		TArray<int> keys = {};
		keys.Add(0);
		for(int32 i = 0; i < AnimFrameNums; ++i)
		{
			const float CurAnimTime = AnimationSequence->GetTimeAtFrame(i);
		
			FAnimPose CurPose;
			const FAnimPoseEvaluationOptions CurPoseOptions;
			UAnimPoseExtensions::GetAnimPoseAtTime(AnimationSequence, CurAnimTime, CurPoseOptions, CurPose);
			FTransform RootBoneTransformCS = UAnimPoseExtensions::GetBonePose(CurPose, CurveSetting.RootBoneName, EAnimPoseSpaces::World);
			// RootBone的平面
			const FPlane RootPlane = FPlane(RootBoneTransformCS.GetLocation(), FVector::UpVector);
			// FTransform FootLBoneTransformCS = UAnimPoseExtensions::GetBonePose(CurPose, "ik_foot_l", EAnimPoseSpaces::World);
			FTransform BallLBoneTransformCS = UAnimPoseExtensions::GetBonePose(CurPose, CurveSetting.BoneName, EAnimPoseSpaces::World);
			const float BallLHeight = RootPlane.PlaneDot(BallLBoneTransformCS.GetLocation());
			
			UAnimationBlueprintLibrary::AddFloatCurveKey(AnimationSequence, FName(test), CurAnimTime, BallLHeight);
			
			if(i == AnimFrameNums - 1)
			{
				// 最后一帧,倒数第二个key
				const float PreAnimTime = AnimationSequence->GetTimeAtFrame(keys.Last());
				keys.Add(i);
				// UAnimationBlueprintLibrary::AddFloatCurveKey(AnimationSequence, CurveSetting.CurveName, PreAnimTime, CurAnimTime - PreAnimTime);

				// 最后一个key
				float StartTime = UAnimationBlueprintLibrary::GetFloatValueAtTime(AnimationSequence, CurveSetting.CurveName, 0);
				// UAnimationBlueprintLibrary::AddFloatCurveKey(AnimationSequence, CurveSetting.CurveName, CurAnimTime, StartTime);
			}
			else
			{
				int keyNum = keys.Num();
				if((keyNum % 2 == 1 && CurveSetting.FirstKeyUp) || (keyNum % 2 == 0 && !CurveSetting.FirstKeyUp))
				{
					// 奇数第一次抬脚 or 偶数第一次放脚 = 抬脚判定
					if(BallLHeight >= CurveSetting.UpThreshold.X && BallLHeight < CurveSetting.UpThreshold.Y)
					{
						// 抬起点
						const float PreAnimTime = AnimationSequence->GetTimeAtFrame(keys.Last());
						keys.Add(i);
						// UAnimationBlueprintLibrary::AddFloatCurveKey(AnimationSequence, CurveSetting.CurveName, PreAnimTime, CurAnimTime - PreAnimTime);
					}
				}else
				{
					if(BallLHeight >= CurveSetting.DownThreshold.X && BallLHeight < CurveSetting.DownThreshold.Y)
					{
						// 放下点
						const float PreAnimTime = AnimationSequence->GetTimeAtFrame(keys.Last());
						keys.Add(i);
						UAnimationBlueprintLibrary::AddFloatCurveKey(AnimationSequence, CurveSetting.CurveName, PreAnimTime, CurAnimTime - PreAnimTime);
						
						UAnimationBlueprintLibrary::AddFloatCurveKey(AnimationSequence, CurveSetting.CurveName, CurAnimTime, 0);
					}
				}
			}
		}
	}
}

void ULrjPredictIKAnimModifier::OnRevert_Implementation(UAnimSequence* AnimationSequence)
{
	Super::OnRevert_Implementation(AnimationSequence);
	RemoveAllCurve(AnimationSequence);
}

void ULrjPredictIKAnimModifier::RemoveAllCurve(UAnimSequence* AnimationSequence)
{
	for(auto& CurveSetting : Setting)
	{
		CurveSetting.CurveName = FName(FString::Printf(TEXT("%s_%s"), *CurveSetting.BoneName.ToString(), *CurveSetting.CurveName.ToString()));
		
		if(AnimationSequence->HasCurveData(CurveSetting.CurveName, false))
		{
			UAnimationBlueprintLibrary::RemoveCurve(AnimationSequence, CurveSetting.CurveName);
		}
	}
}
