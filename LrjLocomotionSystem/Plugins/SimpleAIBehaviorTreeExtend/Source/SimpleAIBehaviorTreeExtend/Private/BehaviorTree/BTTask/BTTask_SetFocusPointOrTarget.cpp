//Copyright (C) RenZhai.2022.All Rights Reserved.

#include "BehaviorTree/BTTask/BTTask_SetFocusPointOrTarget.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "BehaviorTree/Blackboard/BlackboardKeyType_Object.h"
#include "AIController.h"
#include "BehaviorTree/Blackboard/BlackboardKeyType_Vector.h"

UBTTask_SetFocusPointOrTarget::UBTTask_SetFocusPointOrTarget()
{
	NodeName = "Set Focus Point Or Target";
}

EBTNodeResult::Type UBTTask_SetFocusPointOrTarget::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	AAIController* AIControllerPtr = OwnerComp.GetAIOwner();
	if (AIControllerPtr == nullptr)
	{
		return EBTNodeResult::Type::Failed;
	}
	if (IsClearFocusTarget)
	{
		AIControllerPtr->ClearFocus(EAIFocusPriority::Gameplay);
	}
	else
	{
		UBlackboardComponent* BBPtr = OwnerComp.GetBlackboardComponent();
		if (BBPtr == nullptr)
		{
			return EBTNodeResult::Type::Failed;
		}
		if (IsFocusActor)
		{
			AActor* ActorPtr = Cast<AActor>(BBPtr->GetValue<UBlackboardKeyType_Object>(FocusActor.GetSelectedKeyID()));
			if (ActorPtr)
			{
				AIControllerPtr->SetFocus(ActorPtr);
				return EBTNodeResult::Succeeded;
			}
		}
		else
		{
			FVector TargetLocation = BBPtr->GetValue<UBlackboardKeyType_Vector>(FocusLocation.GetSelectedKeyID());
			if (TargetLocation != FVector::ZeroVector)
			{
				AIControllerPtr->SetFocalPoint(TargetLocation);
				return EBTNodeResult::Type::Succeeded;
			}
		}
	}
	return EBTNodeResult::Type::Failed;
}

void UBTTask_SetFocusPointOrTarget::InitializeFromAsset(UBehaviorTree& Asset)
{
	Super::InitializeFromAsset(Asset);

	if (UBlackboardData* BBAsset = GetBlackboardAsset())
	{
		FocusActor.AddObjectFilter(this, GET_MEMBER_NAME_CHECKED(UBTTask_SetFocusPointOrTarget, FocusActor), AActor::StaticClass());
		FocusActor.ResolveSelectedKey(*BBAsset);
		FocusLocation.AddVectorFilter(this, GET_MEMBER_NAME_CHECKED(UBTTask_SetFocusPointOrTarget, FocusLocation));
		FocusLocation.ResolveSelectedKey(*BBAsset);
	}
}

FString UBTTask_SetFocusPointOrTarget::GetStaticDescription() const
{
	FString TargetStr = IsFocusActor ? FString::Printf(TEXT("FocusActor: %s"), *FocusActor.SelectedKeyName.ToString()) : FString::Printf(TEXT("FocusLocation: %s"), *FocusLocation.SelectedKeyName.ToString());
	FString DesStr = IsClearFocusTarget ? TEXT("Clear Focus Target") : TargetStr;
	return DesStr;
}