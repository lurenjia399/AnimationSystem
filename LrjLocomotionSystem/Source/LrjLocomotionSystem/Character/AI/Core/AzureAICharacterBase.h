// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Interface/SAIBTAIInterface.h"
#include "LrjLocomotionSystem/LrjLocomotionSystemCharacter.h"
#include "LrjLocomotionSystem/Character/Core/AzureCharacterBase.h"
#include "AzureAICharacterBase.generated.h"

UCLASS()
class LRJLOCOMOTIONSYSTEM_API AAzureAICharacterBase : public AAzureCharacterBase, public ISAIBTAIInterface
{
	GENERATED_BODY()

public:
	virtual void BeginPlay() override;
public:
	virtual  const FSAIBTAttribute& GetAIAttribute() const override;
	virtual  void SetWalkingState(const ESAIBTLocomotionState& NewLocomotionState) override;

public:
	UPROPERTY(EditDefaultsOnly, Category = "AI Controller|Defaults")
	FSAIBTAttribute Attribute;

	UPROPERTY(EditDefaultsOnly, Category = "AI Controller|Defaults")
	ESAIBTLocomotionState LocomotionState;
};
