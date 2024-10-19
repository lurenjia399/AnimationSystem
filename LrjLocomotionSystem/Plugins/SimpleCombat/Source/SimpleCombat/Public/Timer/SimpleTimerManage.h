// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Timer/SimpleTimerObject.h"
#include "SimpleTimerManage.generated.h"

USTRUCT(BlueprintType)
struct SIMPLECOMBAT_API FSimpleTimerManage
{
	GENERATED_USTRUCT_BODY()

	void Tick(float DeltaTime);

	void SubmitCommand(
		UWorld* InWorld,
		float InTime,
		const FSimpleTimerDelegate& InTimerDelegate, 
		bool bNewDebug = false);

private:
	UPROPERTY()
	TArray<FSimpleTimerObject> TimerObjects;
};