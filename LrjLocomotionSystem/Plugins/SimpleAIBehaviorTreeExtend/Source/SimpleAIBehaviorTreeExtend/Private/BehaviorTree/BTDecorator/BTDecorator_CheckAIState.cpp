//Copyright (C) RenZhai.2022.All Rights Reserved.

#include "BehaviorTree/BTDecorator/BTDecorator_CheckAIState.h"
#include "AIController/SAIBTController.h"
#include "BehaviorTree/BlackboardComponent.h"

UBTDecorator_CheckAIState::UBTDecorator_CheckAIState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	NodeName = "Check AI State";
	bNotifyBecomeRelevant = true;
	bNotifyCeaseRelevant = true;
}

void UBTDecorator_CheckAIState::OnBecomeRelevant(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	Super::OnBecomeRelevant(OwnerComp, NodeMemory);

	if (ASAIBTController* AIControllerPtr = Cast<ASAIBTController>(OwnerComp.GetOwner()))
	{
		if (!AIControllerPtr->OnSAIBTAIStateChanged.IsBoundToObject(this))
		{
			FDelegateHandle* InstancedNodeMemory = CastInstanceNodeMemory<FDelegateHandle>(NodeMemory);
			*InstancedNodeMemory = AIControllerPtr->OnSAIBTAIStateChanged.AddUFunction(this, TEXT("OnAIStateChanged"));
		}
	}
}

void UBTDecorator_CheckAIState::OnCeaseRelevant(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	Super::OnCeaseRelevant(OwnerComp, NodeMemory);

	if (ASAIBTController* AIControllerPtr = Cast<ASAIBTController>(OwnerComp.GetOwner()))
	{
		if (AIControllerPtr->OnSAIBTAIStateChanged.IsBoundToObject(this))
		{
			FDelegateHandle* InstancedNodeMemory = CastInstanceNodeMemory<FDelegateHandle>(NodeMemory);
			bool RemoveSuccess = AIControllerPtr->OnSAIBTAIStateChanged.Remove(*InstancedNodeMemory);
			FString SuccessStr = RemoveSuccess ? "Success" : "Failed";
			UE_LOG(LogBehaviorTree, Log, TEXT("%s: OnCeaseRelevant, Remove Delegate %s"), *this->GetName(), *SuccessStr);
		}
	}
}

uint16 UBTDecorator_CheckAIState::GetInstanceMemorySize() const
{
	return sizeof(FDelegateHandle);
}

bool UBTDecorator_CheckAIState::CalculateRawConditionValue(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) const
{
	if (ASAIBTController* AIControllerPtr = Cast<ASAIBTController>(OwnerComp.GetOwner()))
	{
		return AIControllerPtr->GetMonsterState() == AIState;
	}
	return false;
}

FString UBTDecorator_CheckAIState::GetStaticDescription() const
{
	return FString::Printf(TEXT("AI State: %s\n"), *StaticEnum<ESAIBTState>()->GetNameStringByValue((uint8)AIState)) + Super::GetStaticDescription();
}

void UBTDecorator_CheckAIState::OnAIStateChanged(const ASAIBTController* AIControllerPtr)
{
	if (AIControllerPtr && AIControllerPtr->GetMonsterState() != AIState)
	{
		UBehaviorTreeComponent* BTComponentPtr = Cast<UBehaviorTreeComponent>(AIControllerPtr->GetBrainComponent());
		if (BTComponentPtr != nullptr)
		{
			UE_LOG(LogBehaviorTree, Log, TEXT("%s: Execute OnAIStateChanged!"), *this->GetName());
			ConditionalFlowAbort(*BTComponentPtr, EBTDecoratorAbortRequest::ConditionResultChanged);
		}
	}
}