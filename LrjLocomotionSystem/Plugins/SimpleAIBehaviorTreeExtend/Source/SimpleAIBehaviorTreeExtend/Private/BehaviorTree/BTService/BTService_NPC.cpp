//Copyright (C) RenZhai.2022.All Rights Reserved.

#include "BehaviorTree/BTService/BTService_NPC.h"

void UBTService_NPC::TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	Super::TickNode(OwnerComp, NodeMemory, DeltaSeconds);
}

void UBTService_NPC::InitializeFromAsset(UBehaviorTree& Asset)
{
	Super::InitializeFromAsset(Asset);
}
