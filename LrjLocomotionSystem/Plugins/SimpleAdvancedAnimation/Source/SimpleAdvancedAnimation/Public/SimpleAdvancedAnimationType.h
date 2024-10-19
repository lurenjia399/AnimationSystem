// Copyright (C) RenZhai.2020.All Rights Reserved.
#pragma once

#include "CoreMinimal.h"
#include "SimpleAdvancedAnimationType.generated.h"

typedef int32 FSAAHandle;

//平面
UENUM(BlueprintType)
namespace EAdvancedAnimationPlaneAxis
{
	enum Type
	{
		XY,//XY
		XZ,//XZ
		YZ //YZ
	};
}

USTRUCT(BlueprintType)
struct SIMPLEADVANCEDANIMATION_API FFootIKInfo
{
	GENERATED_USTRUCT_BODY()

	FFootIKInfo();

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "SimpleAdvancedAnimation|FootIKInfo")
	float Offset;
};

USTRUCT(BlueprintType)
struct SIMPLEADVANCEDANIMATION_API FFootStepInfo
{
	GENERATED_USTRUCT_BODY()

	FFootStepInfo()
		:bUpdateAlpha(false)
		, Alpha(0.f)
	{}

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "SimpleAdvancedAnimation|FootStep")
	FVector Location;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "SimpleAdvancedAnimation|FootStep")
	FVector LocalLocation;

	//针对更新的Alpha
	UPROPERTY()
	bool bUpdateAlpha;

	//取向Alpha
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "SimpleAdvancedAnimation|FootStep")
	float Alpha;

public:
	void Tick(float Deltaseconds);
};