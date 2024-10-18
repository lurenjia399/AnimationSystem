//Copyright (C) RenZhai.2022.All Rights Reserved.

#include "BehaviorTree/BTService/BTService_Monster.h"

void UBTService_Monster::TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	Super::TickNode(OwnerComp, NodeMemory, DeltaSeconds);
}

void UBTService_Monster::InitializeFromAsset(UBehaviorTree& Asset)
{
	Super::InitializeFromAsset(Asset);
}
