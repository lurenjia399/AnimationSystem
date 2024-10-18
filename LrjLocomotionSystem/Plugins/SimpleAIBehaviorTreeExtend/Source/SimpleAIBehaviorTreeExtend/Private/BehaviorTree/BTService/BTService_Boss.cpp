//Copyright (C) RenZhai.2022.All Rights Reserved.

#include "BehaviorTree/BTService/BTService_Boss.h"

void UBTService_Boss::TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	Super::TickNode(OwnerComp, NodeMemory, DeltaSeconds);
}

void UBTService_Boss::InitializeFromAsset(UBehaviorTree& Asset)
{
	Super::InitializeFromAsset(Asset);
}
