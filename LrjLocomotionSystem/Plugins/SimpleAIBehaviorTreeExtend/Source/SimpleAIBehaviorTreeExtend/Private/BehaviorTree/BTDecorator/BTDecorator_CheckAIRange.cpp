//Copyright (C) RenZhai.2022.All Rights Reserved.

#include "BehaviorTree/BTDecorator/BTDecorator_CheckAIRange.h"
#include "AIController/SAIBTController.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Interface/SAIBTAIInterface.h"

UBTDecorator_CheckAIRange::UBTDecorator_CheckAIRange(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	NodeName = "Check AI Range";
	FlowAbortMode = EBTFlowAbortMode::None;

	// 不允许进行打断
	bAllowAbortChildNodes = false;
	bAllowAbortLowerPri = false;
}

bool UBTDecorator_CheckAIRange::CalculateRawConditionValue(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) const
{
	if (ASAIBTController* AIControllerPtr = Cast<ASAIBTController>(OwnerComp.GetOwner()))
	{
		if (ISAIBTAIInterface* AICharacterPtr = Cast<ISAIBTAIInterface>(AIControllerPtr->GetPawn()))
		{
			const FSAIBTAttribute& AIAttribute = AICharacterPtr->GetAIAttribute();
			UBlackboardComponent* BBPtr = OwnerComp.GetBlackboardComponent();
			if (BBPtr == nullptr)
			{
				return false;
			}
			const float& TargetDistance = BBPtr->GetValueAsFloat(TEXT("Distance"));
			switch (RangeType)
			{
			case ESAIBTDistanceType::DT_SightRange:
				return TargetDistance <= AIAttribute.BattleAttribute.SightDistance;
			case ESAIBTDistanceType::DT_AttackRange:
				return TargetDistance <= AIAttribute.BattleAttribute.AttackRange;
			case ESAIBTDistanceType::DT_EffectiveRange:
			{
				AActor* TargetPtr = Cast<AActor>(BBPtr->GetValueAsObject(TEXT("Target")));
				if (TargetPtr == nullptr)
				{
					return false;
				}
				const FVector& OriginalLocation = BBPtr->GetValueAsVector(TEXT("OriginalLocation"));
				return (TargetPtr->GetActorLocation() - OriginalLocation).Length() <= AIAttribute.BattleAttribute.EffectiveRadius;
			}
			case ESAIBTDistanceType::DT_ChaseRange:
				return TargetDistance <= AIAttribute.BattleAttribute.ChaseDistance;
			default:
				return false;
			}
		}
	}
	return false;
}

FString UBTDecorator_CheckAIRange::GetStaticDescription() const
{
	return FString::Printf(TEXT("AI State: %s\n"), *StaticEnum<ESAIBTDistanceType>()->GetNameStringByValue((uint8)RangeType)) + Super::GetStaticDescription();
}