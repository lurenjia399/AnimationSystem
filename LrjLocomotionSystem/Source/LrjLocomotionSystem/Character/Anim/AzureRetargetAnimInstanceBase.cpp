// Fill out your copyright notice in the Description page of Project Settings.


#include "AzureRetargetAnimInstanceBase.h"

#include "VectorTypes.h"

UAzureRetargetAnimInstanceBase::UAzureRetargetAnimInstanceBase()
{
}

void UAzureRetargetAnimInstanceBase::NativeInitializeAnimation()
{
	Super::NativeInitializeAnimation();

	UpdateChainSettings();
}

void UAzureRetargetAnimInstanceBase::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);

	UpdateChainSettings();
}

FRetargetProfile UAzureRetargetAnimInstanceBase::GetRetargetProfile() const
{
	FRetargetProfile Result;
	
	FTargetChainSettings Temp_LeftTargetChainSettings;
	float LeftAlpha = GetCurveValue(TEXT("Retarget_Hand_L_BlendToSource"));
	Temp_LeftTargetChainSettings.IK.BlendToSource = FMath::Lerp(ChainSetting_LeftArm.IK.BlendToSource, 1.0f, LeftAlpha);
	Temp_LeftTargetChainSettings.IK.StaticLocalOffset = FMath::Lerp(ChainSetting_LeftArm.IK.StaticLocalOffset, FVector::Zero(), LeftAlpha);

	FTargetChainSettings Temp_RightTargetChainSettings;
	float RightAlpha = GetCurveValue(TEXT("Retarget_Hand_R_BlendToSource"));
	Temp_RightTargetChainSettings.IK.BlendToSource = FMath::Lerp(ChainSetting_RightArm.IK.BlendToSource, 1.0f, RightAlpha);
	Temp_RightTargetChainSettings.IK.StaticLocalOffset = FMath::Lerp(ChainSetting_RightArm.IK.StaticLocalOffset, FVector::Zero(), LeftAlpha);

	Result.ChainSettings.Add(TEXT("LeftArm"),Temp_LeftTargetChainSettings);
	Result.ChainSettings.Add(TEXT("RightArm"),Temp_RightTargetChainSettings);
	
	return Result;
}

void UAzureRetargetAnimInstanceBase::UpdateChainSettings()
{
	if(!GetOwningComponent()->ComponentTags.IsEmpty())
	{
		FName RetargetTag = GetOwningComponent()->ComponentTags[0];
		
		if(UIKRetargeter** InTetarget = IKRetargeterMap.Find(RetargetTag))
		{
			IKRetargeter = *InTetarget;
			if(IsValid(IKRetargeter))
			{
				ChainSetting_LeftArm = UIKRetargeter::GetChainSettingsFromRetargetAsset(IKRetargeter, "LeftArm", NAME_None);
				ChainSetting_RightArm = UIKRetargeter::GetChainSettingsFromRetargetAsset(IKRetargeter, "RightArm", NAME_None);
			}
		}
	}
}
