// Fill out your copyright notice in the Description page of Project Settings.


#include "LrjPredictIKAnimModifier.h"

#include "AnimPose.h"

ULrjPredictIKAnimModifier::ULrjPredictIKAnimModifier()
{
}

void ULrjPredictIKAnimModifier::OnApply_Implementation(UAnimSequence* AnimationSequence)
{
	Super::OnApply_Implementation(AnimationSequence);
	
	AddAllCurve(AnimationSequence);
	
	for(auto& CurveSetting : Setting)
	{
		const int32 AnimFrameNums = AnimationSequence->GetNumberOfSampledKeys();
		TArray<int> keys = {};
		keys.Add(0);
		for(int32 i = 0; i < AnimFrameNums; ++i)
		{
			const float CurKeyAnimTime = AnimationSequence->GetTimeAtFrame(i);
			FAnimPose CurPose;
			const FAnimPoseEvaluationOptions CurPoseOptions;
			UAnimPoseExtensions::GetAnimPoseAtTime(AnimationSequence, CurKeyAnimTime, CurPoseOptions, CurPose);
			FTransform RootBoneTransformCS = UAnimPoseExtensions::GetBonePose(CurPose, CurveSetting.RootBoneName, EAnimPoseSpaces::World);
			// RootBone的平面
			const FPlane RootPlane = FPlane(RootBoneTransformCS.GetLocation(), FVector::UpVector);
			FTransform BallLBoneTransformCS = UAnimPoseExtensions::GetBonePose(CurPose, CurveSetting.BoneName, EAnimPoseSpaces::World);
			// BoneName到RootBone平面的距离
			const float BallLHeight = RootPlane.PlaneDot(BallLBoneTransformCS.GetLocation());
			
			int keyNum = keys.Num();
			if(i == AnimFrameNums - 1)
			{
				// 最后节点判断抬脚
				if((keyNum % 2 == 1 && CurveSetting.FirstKeyUp) || (keyNum % 2 == 0 && !CurveSetting.FirstKeyUp))
				{
					float FirstKeyCurveTime = AnimationSequence->GetTimeAtFrame(keys[0]);
					float SecondKeyCurveTime = AnimationSequence->GetTimeAtFrame(keys[1]);
					float SecondKey2FirstKeyBetweenTime = SecondKeyCurveTime - FirstKeyCurveTime;
					float CurveValue = UAnimationBlueprintLibrary::GetFloatValueAtTime(AnimationSequence, CurveSetting.CurveName, SecondKeyCurveTime + SecondKey2FirstKeyBetweenTime);
					UAnimationBlueprintLibrary::AddFloatCurveKey(AnimationSequence, CurveSetting.CurveName, CurKeyAnimTime, CurveValue);
					UAnimationBlueprintLibrary::AddFloatCurveKey(AnimationSequence, CurveSetting.CurveName, FirstKeyCurveTime, CurveValue);
				}
				// 最后节点判断落脚
				else
				{
					float FirstKeyCurveTime = AnimationSequence->GetTimeAtFrame(keys[0]);
					float SecondKeyCurveTime = AnimationSequence->GetTimeAtFrame(keys[1]);
					float PreKeyAnimTime = AnimationSequence->GetTimeAtFrame(keys.Last());
					float PreKey2FirstKeyBetweenTime = (CurKeyAnimTime - PreKeyAnimTime) + (SecondKeyCurveTime - FirstKeyCurveTime);
					UAnimationBlueprintLibrary::AddFloatCurveKey(AnimationSequence, CurveSetting.CurveName, PreKeyAnimTime, PreKey2FirstKeyBetweenTime);
					
					float FirstCurveValue = UAnimationBlueprintLibrary::GetFloatValueAtTime(AnimationSequence, CurveSetting.CurveName, FirstKeyCurveTime);
					UAnimationBlueprintLibrary::AddFloatCurveKey(AnimationSequence, CurveSetting.CurveName, CurKeyAnimTime, FirstCurveValue);
				}
			}else
			{
				// 抬脚判定
				if((keyNum % 2 == 1 && CurveSetting.FirstKeyUp) || (keyNum % 2 == 0 && !CurveSetting.FirstKeyUp))
				{
					// 奇数第一次抬脚 or 偶数第一次落脚 = 确定抬脚
					if(BallLHeight >= CurveSetting.UpThreshold.X && BallLHeight < CurveSetting.UpThreshold.Y)
					{
						keys.Add(i);
					}
				}
				// 落脚判定
				else
				{
					// 确定落脚
					if(BallLHeight < CurveSetting.DownThreshold.X && BallLHeight >= CurveSetting.DownThreshold.Y)
					{
						const float PreKeyAnimTime = AnimationSequence->GetTimeAtFrame(keys.Last());
						keys.Add(i);
						UAnimationBlueprintLibrary::AddFloatCurveKey(AnimationSequence, CurveSetting.CurveName, PreKeyAnimTime, CurKeyAnimTime - PreKeyAnimTime);
						UAnimationBlueprintLibrary::AddFloatCurveKey(AnimationSequence, CurveSetting.CurveName, CurKeyAnimTime, 0);
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

void ULrjPredictIKAnimModifier::AddAllCurve(UAnimSequence* AnimationSequence)
{
	MakeCurveName();
	RemoveAllCurve(AnimationSequence);

	for(const auto& CurveSetting : Setting)
	{
		UAnimationBlueprintLibrary::AddCurve(AnimationSequence, CurveSetting.CurveName, ERawCurveTrackTypes::RCT_Float);
	}
}

void ULrjPredictIKAnimModifier::RemoveAllCurve(UAnimSequence* AnimationSequence)
{
	for(auto& CurveSetting : Setting)
	{
		if(AnimationSequence->HasCurveData(CurveSetting.CurveName, false))
		{
			UAnimationBlueprintLibrary::RemoveCurve(AnimationSequence, CurveSetting.CurveName);
		}
	}
}

void ULrjPredictIKAnimModifier::MakeCurveName()
{
	for(auto& CurveSetting : Setting)
	{
		CurveSetting.CurveName = FName(FString::Printf(TEXT("%s_%s"), *CurveSetting.BoneName.ToString(), *CurveSetting.CurveName.ToString()));
	}
}