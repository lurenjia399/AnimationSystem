// Fill out your copyright notice in the Description page of Project Settings.


#include "AzureAICharacterBase.h"


void AAzureAICharacterBase::BeginPlay()
{
	Super::BeginPlay();
	
	SpawnDefaultController();
}

const FSAIBTAttribute& AAzureAICharacterBase::GetAIAttribute() const
{
	return Attribute;
}

void AAzureAICharacterBase::SetWalkingState(const ESAIBTLocomotionState& NewLocomotionState)
{
	LocomotionState = NewLocomotionState;
}
