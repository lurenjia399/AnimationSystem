//Copyright (C) RenZhai.2022.All Rights Reserved.

#include "BehaviorTree/BTTask/BTTask_SetLocomotionState.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/Character.h"
#include "AIController/SAIBTController.h"
#include "Interface/SAIBTCharacterInterface.h"
#include "Interface/SAIBTAIInterface.h"
#include "SimpleAIBehaviorTreeExtendType.h"

EBTNodeResult::Type UBTTask_SetLocomotionState::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	Super::ExecuteTask(OwnerComp, NodeMemory);

	ASAIBTController* AIControllerPtr = Cast<ASAIBTController>(OwnerComp.GetOwner());
	if (AIControllerPtr == nullptr)
	{
		return EBTNodeResult::Failed;
	}

	ISAIBTAIInterface* AICharacterPtr = Cast<ISAIBTAIInterface>(AIControllerPtr->GetPawn());
	if (AICharacterPtr == nullptr)
	{
		return EBTNodeResult::Failed;
	}

	if (ACharacter *InCharacter = Cast<ACharacter>(AIControllerPtr->GetPawn()))
	{
		//if (UCharacterMovementComponent* MovementCompPtr = Cast<UCharacterMovementComponent>(InCharacter->GetMovementComponent()))
		{
			AICharacterPtr->SetWalkingState(WalkingState);
			return EBTNodeResult::Succeeded;
		}
	}

	return EBTNodeResult::Failed;
}

FString UBTTask_SetLocomotionState::GetStaticDescription() const
{
	return FString::Printf(TEXT("Walking State: %s"), *StaticEnum<ESAIBTLocomotionState>()->GetNameStringByValue((uint8)WalkingState));
}