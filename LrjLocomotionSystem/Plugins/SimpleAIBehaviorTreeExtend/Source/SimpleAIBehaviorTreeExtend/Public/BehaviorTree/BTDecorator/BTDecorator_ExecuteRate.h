//Copyright (C) RenZhai.2022.All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BTDecorator_ExecuteRate.generated.h"

/**
 * 
 */
UCLASS()
class SIMPLEAIBEHAVIORTREEEXTEND_API UBTDecorator_ExecuteRate : public UBTDecorator
{
	GENERATED_BODY()

	UBTDecorator_ExecuteRate();
	
protected:
	virtual bool CalculateRawConditionValue(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) const override;
	virtual FString GetStaticDescription() const override;

protected:
	// 触发几率
	UPROPERTY(EditAnywhere, Category = "Execute Rate", meta = (ClampMin = 0.f, ClampMax = 1.f))
	float ExecuteRate = 0.f;
};