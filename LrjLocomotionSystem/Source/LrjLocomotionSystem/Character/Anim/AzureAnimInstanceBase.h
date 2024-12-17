// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "AzureAnimInstanceBase.generated.h"

class UCharacterTrajectoryComponent;
/**
 * 
 */
UCLASS()
class LRJLOCOMOTIONSYSTEM_API UAzureAnimInstanceBase : public UAnimInstance
{
	GENERATED_BODY()

public:
	UAzureAnimInstanceBase();
	virtual void NativeInitializeAnimation() override;
	virtual void NativeUpdateAnimation(float DeltaSeconds) override;
public:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly,  Category = "Trajectory")
	UCharacterTrajectoryComponent* CharacterTrajectory;
};
 