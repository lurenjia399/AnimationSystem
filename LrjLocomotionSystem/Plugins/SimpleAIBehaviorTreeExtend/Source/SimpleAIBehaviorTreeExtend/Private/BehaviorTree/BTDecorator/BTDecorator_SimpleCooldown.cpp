//Copyright (C) RenZhai.2022.All Rights Reserved.

#include "BehaviorTree/BTDecorator/BTDecorator_SimpleCooldown.h"

bool UBTDecorator_SimpleCooldown::CalculateRawConditionValue(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) const
{
	return Super::CalculateRawConditionValue(OwnerComp, NodeMemory);
}