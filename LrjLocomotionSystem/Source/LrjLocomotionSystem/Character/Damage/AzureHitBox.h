// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Hit/ComboSkillHitBox.h"
#include "AzureHitBox.generated.h"

UCLASS()
class LRJLOCOMOTIONSYSTEM_API AAzureHitBox : public AHitBoxCollision
{
	GENERATED_BODY()

public:
	AAzureHitBox(const FObjectInitializer& ObjectInitializer);
	virtual void HandleDamage(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) override;

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;
};
