// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "SAIBTModularAIController.generated.h"

UCLASS()
class SIMPLEAIBEHAVIORTREEEXTEND_API ASAIBTModularAIController : public AAIController
{
	GENERATED_BODY()

public:

protected:
	// Called when the game starts or when spawned
	virtual void PreInitializeComponents() override;
	virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
};
