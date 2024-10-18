//Copyright (C) RenZhai.2022.All Rights Reserved.

#include "BehaviorTree/BTTask/BTTask_ResetState.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "AIController/SAIBTController.h"
#include "Interface/SAIBTCharacterInterface.h"

UBTTask_ResetState::UBTTask_ResetState()
{
	NewState = INDEX_NONE;
}

EBTNodeResult::Type UBTTask_ResetState::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	Super::ExecuteTask(OwnerComp, NodeMemory);

	if (UBlackboardComponent* MyBlackBoard = OwnerComp.GetBlackboardComponent())
	{
		if (ASAIBTController* AIConrollerBase = Cast<ASAIBTController>(OwnerComp.GetOwner()))
		{
			if (ISAIBTCharacterInterface *InCharacterInterface = Cast<ISAIBTCharacterInterface>(AIConrollerBase->GetPawn()))
			{
				InCharacterInterface->SetSAIBState(NewState);

				return EBTNodeResult::Succeeded;
			}
		}
	}

	return EBTNodeResult::Failed;
}

void UBTTask_ResetState::InitializeFromAsset(UBehaviorTree& Asset)
{
	Super::InitializeFromAsset(Asset);
}

void UBTTask_ResetState::OnTaskFinished(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, EBTNodeResult::Type TaskResult)
{

}