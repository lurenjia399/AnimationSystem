//Copyright (C) RenZhai.2022.All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTService/Core/BTService_Base.h"
#include "BTService_Boss.generated.h"

/**
 * 
 */
UCLASS()
class SIMPLEAIBEHAVIORTREEEXTEND_API UBTService_Boss : public UBTService_Base
{
	GENERATED_BODY()
public:

	virtual void TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds) override;

	virtual void InitializeFromAsset(UBehaviorTree& Asset) override;
};
