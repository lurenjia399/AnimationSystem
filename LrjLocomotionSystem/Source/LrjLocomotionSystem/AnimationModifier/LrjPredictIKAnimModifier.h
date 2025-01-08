// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Editor/AnimationModifiers/Public/AnimationModifier.h"
#include "LrjPredictIKAnimModifier.generated.h"

USTRUCT(Blueprintable)
struct FUUOdinPredictIKAnimModifier_CurveSetting
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "setting")
	FName RootBoneName;//根骨骼
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "setting")
	FName BoneName;//判定放脚的骨骼
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "setting")
	FName CurveName = "FootDownTime";//曲线名称的后缀
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "setting")
	FVector2D UpThreshold = FVector2D(0, 0);// 抬脚的判定范围

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "setting")
	FVector2D DownThreshold = FVector2D(0, 0);//放脚的判定范围

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "setting")
	bool FirstKeyUp = false;//动画中是不是先抬脚
};

UCLASS()
class LRJLOCOMOTIONSYSTEM_API ULrjPredictIKAnimModifier : public UAnimationModifier
{
	GENERATED_BODY()
public:
	ULrjPredictIKAnimModifier();
	
	virtual void OnApply_Implementation(UAnimSequence* AnimationSequence) override;
	virtual void OnRevert_Implementation(UAnimSequence* AnimationSequence) override;

	void RemoveAllCurve(UAnimSequence* AnimationSequence);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Odin")
	TArray<FUUOdinPredictIKAnimModifier_CurveSetting> Setting;
};
