// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Editor/AnimationModifiers/Public/AnimationModifier.h"
#include "LrjPredictIKAnimModifier.generated.h"

USTRUCT(Blueprintable)
struct FUUOdinPredictIKAnimModifier_CurveSetting
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Odin")
	FName RootBoneName;//root
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Odin")
	FName BoneName;//ball_l
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Odin")
	FName CurveName = "FootDownTime";
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Odin")
	FVector2D UpThreshold = FVector2D(8.2, 10);// 8,10

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Odin")
	FVector2D DownThreshold = FVector2D(4.5, 4.21);//4.5

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Odin")
	bool FirstKeyUp = false;
};

UCLASS()
class LRJLOCOMOTIONSYSTEM_API ULrjPredictIKAnimModifier : public UAnimationModifier
{
	GENERATED_BODY()
public:
	ULrjPredictIKAnimModifier();
	
	virtual void OnApply_Implementation(UAnimSequence* AnimationSequence) override;
	virtual void OnRevert_Implementation(UAnimSequence* AnimationSequence) override;

	void AddAllCurve(UAnimSequence* AnimationSequence);
	void RemoveAllCurve(UAnimSequence* AnimationSequence);
	void MakeCurveName();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Odin")
	TArray<FUUOdinPredictIKAnimModifier_CurveSetting> Setting;
};
