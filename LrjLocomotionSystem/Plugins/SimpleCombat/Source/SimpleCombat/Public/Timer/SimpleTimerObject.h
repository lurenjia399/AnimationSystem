// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "SimpleTimerType.h"
#include "SimpleTimerObject.generated.h"

class UWorld;

USTRUCT(BlueprintType)
struct SIMPLECOMBAT_API FSimpleTimerObject
{
	GENERATED_USTRUCT_BODY()

	FSimpleTimerObject();

	TWeakObjectPtr<UWorld> World;

	UPROPERTY()
	bool bDebug;

	UPROPERTY()
	float Time;

	FSimpleTimerDelegate Delegate;

private:
	FTimerHandle HanleTime;

public:
	bool IsFree() const;

	void Tick(float DeltaTime);

	void Init(UWorld* InWorld, float InTime, const FSimpleTimerDelegate& InDelegate, bool bNewDebug = false);

public:
	void Start();
	void OnGoing(float DeltaTime);
	void End();
};