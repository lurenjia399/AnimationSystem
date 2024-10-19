// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameplayCueNotify_Actor.h"
#include "GameplayCueNotify_PlaySound.generated.h"

/**
 * 
 */
UCLASS()
class SIMPLEGAMEPLAYABILITIESEXTEND_API AGameplayCueNotify_PlaySound : public AGameplayCueNotify_Actor
{
	GENERATED_BODY()

public:


public:
	virtual void HandleGameplayCue(AActor* MyTarget, EGameplayCueEvent::Type EventType, const FGameplayCueParameters& Parameters);
};
