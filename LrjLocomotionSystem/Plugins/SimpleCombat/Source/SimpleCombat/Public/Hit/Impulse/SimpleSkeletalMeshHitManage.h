// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "SimpleSkeletalMeshHitObject.h"
#include "SimpleSkeletalMeshHitManage.generated.h"

class USkeletalMeshComponent;

USTRUCT(BlueprintType)
struct SIMPLECOMBAT_API FSimpleSkeletalMeshHitManage
{
	GENERATED_USTRUCT_BODY()

	void Tick(float DeltaTime);

	void SubmitCommand(
		USkeletalMeshComponent* InMeshComponent,
		float InTime,
		const FName& InBoneName,
		float InImpulse,
		const FVector& InImpactNormal,
		const TArray<FName>& InExcludeBoneName);

private:
	UPROPERTY()
	TArray<FSimpleSkeletalMeshHitObject> HitObjects;
};