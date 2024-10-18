//Copyright (C) RenZhai.2022.All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "SimpleAIBehaviorTreeExtendType.h"
#include "BTDecorator_CheckAIRange.generated.h"

/**
 * 
 */
UCLASS()
class SIMPLEAIBEHAVIORTREEEXTEND_API UBTDecorator_CheckAIRange : public UBTDecorator
{
	GENERATED_UCLASS_BODY()
	
protected:
	virtual bool CalculateRawConditionValue(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) const override;
	virtual FString GetStaticDescription() const override;

protected:
	UPROPERTY(EditAnywhere, Category = "AI Range")
	ESAIBTDistanceType RangeType = ESAIBTDistanceType::DT_EffectiveRange;
};
