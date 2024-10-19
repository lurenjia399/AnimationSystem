// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameplayEffect.h"
#include "SimpleAbilityGameplayEffect.generated.h"

UCLASS()
class SIMPLEGAMEPLAYABILITIESEXTEND_API USimpleAbilityGameplayEffect : public UGameplayEffect
{
	GENERATED_BODY()

	//用于UI查找数值
	UPROPERTY(EditDefaultsOnly, Category = Tip)
	FName GETag;

public:
	USimpleAbilityGameplayEffect();

public:

	FORCEINLINE FName GetGameplayEffectTag() const { return GETag; }
};
