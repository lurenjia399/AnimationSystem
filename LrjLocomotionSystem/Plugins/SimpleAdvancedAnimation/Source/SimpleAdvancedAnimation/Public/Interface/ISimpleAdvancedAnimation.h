//Copyright (C) RenZhai.2022.All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Engine/EngineTypes.h"
#include "ISimpleAdvancedAnimation.generated.h"

class APawn;

// This class does not need to be modified.
UINTERFACE(MinimalAPI, Blueprintable, BlueprintType, meta = (CannotImplementInterfaceInBlueprint))
class USimpleAdvancedAnimation : public UInterface
{
	GENERATED_BODY()
};

/**
 *
 */
class SIMPLEADVANCEDANIMATION_API ISimpleAdvancedAnimation
{
	GENERATED_BODY()

	friend class UAnimNotifyState_StepMatchingSpeed;

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	ISimpleAdvancedAnimation();

public:
	virtual void UpdateFixedValue(int32 InIndex,const FHitResult &InHitResult){}
	virtual void EndFixedValue(int32 InIndex) {}

	virtual void UpdateAdvSpeed(TEnumAsByte<EMovementMode> InMovementMode, float MaxSpeed) { }

private:
	void UpdateAdvSpeedTime(float InDeltaTime) { CurrentSpeedTime += InDeltaTime; }
	float GetCurrentAdvSpeedTime() const {return CurrentSpeedTime;}

	void ResetAdvSpeedTime() { CurrentSpeedTime = 0.f; }

	//步伐匹配
private:
	float CurrentSpeedTime;
	int32 SampleCount;
};
