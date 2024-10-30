// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "Retargeter/IKRetargeter.h"
#include "AzureRetargetAnimInstanceBase.generated.h"

/**
 * 
 */
UCLASS()
class LRJLOCOMOTIONSYSTEM_API UAzureRetargetAnimInstanceBase : public UAnimInstance
{
	GENERATED_BODY()
public:
	UAzureRetargetAnimInstanceBase();
public:
	virtual void NativeInitializeAnimation() override;
	virtual void NativeUpdateAnimation(float DeltaSeconds) override;
public:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="AnimAttribute")
	UIKRetargeter* IKRetargeter;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="AnimAttribute")
	TMap<FName, UIKRetargeter*> IKRetargeterMap;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="AnimAttribute")
	FTargetChainSettings ChainSetting_LeftArm;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="AnimAttribute")
	FTargetChainSettings ChainSetting_RightArm;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="AnimAttribute")
	FRetargetProfile RetargetProfile;

	UFUNCTION(BlueprintPure, Category="AnimAttribute", meta=(BlueprintThreadSafe))
	FRetargetProfile GetRetargetProfile() const;
protected:
	void UpdateChainSettings();
};
