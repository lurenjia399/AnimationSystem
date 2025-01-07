// Fill out your copyright notice in the Description page of Project Settings.


#include "AzureAnimInstanceBase.h"

#include "CharacterTrajectoryComponent.h"

UAzureAnimInstanceBase::UAzureAnimInstanceBase()
{
	CharacterTrajectory = nullptr;
	bEnablePredictIK = false;
}

void UAzureAnimInstanceBase::NativeInitializeAnimation()
{
	Super::NativeInitializeAnimation();

	if(APawn* Pawn = TryGetPawnOwner())
	{
		CharacterTrajectory = Pawn->FindComponentByClass<UCharacterTrajectoryComponent>();
	}
}

void UAzureAnimInstanceBase::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);

	if(APawn* Pawn = TryGetPawnOwner())
	{
		ALrjLocomotionSystemCharacter* Character = Cast<ALrjLocomotionSystemCharacter>(Pawn);
		MovementData = Character->MovementData;
	}
}
