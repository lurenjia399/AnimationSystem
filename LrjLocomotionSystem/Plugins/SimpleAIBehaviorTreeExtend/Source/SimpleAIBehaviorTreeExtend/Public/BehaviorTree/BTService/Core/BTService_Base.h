//Copyright (C) RenZhai.2022.All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "BTService_Base.generated.h"

/**
 * 
 */
UCLASS()
class SIMPLEAIBEHAVIORTREEEXTEND_API UBTService_Base : public UBTService
{
	GENERATED_BODY()
	
public:
	UBTService_Base();

	virtual void TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds) override;

	virtual void InitializeFromAsset(UBehaviorTree& Asset) override;

	UPROPERTY(EditAnywhere, Category = "BlackBoard")
	struct FBlackboardKeySelector BlackBoardKey_Target;

	UPROPERTY(EditAnywhere, Category = "BlackBoard")
	struct FBlackboardKeySelector BlackBoardKey_Distance;

	UPROPERTY(EditAnywhere, Category = "BlackBoard")
	struct FBlackboardKeySelector BlackBoardKey_Location;

	UPROPERTY(EditAnywhere, Category = "BlackBoard")
	struct FBlackboardKeySelector BlackBoardKey_Death;

	//受击
	UPROPERTY(EditAnywhere, Category = "BlackBoard")
	struct FBlackboardKeySelector BlackBoardKey_Hit;
	
	//僵直 boss虚弱状态
	UPROPERTY(EditAnywhere, Category = "BlackBoard")
	struct FBlackboardKeySelector BlackBoardKey_bStiff;

	//可处决
	UPROPERTY(EditAnywhere, Category = "BlackBoard")
	struct FBlackboardKeySelector BlackBoardKey_bExecution;

	//boss状态
	UPROPERTY(EditAnywhere, Category = "BlackBoard")
	struct FBlackboardKeySelector BlackBoardKey_State;

	//停止一切
	UPROPERTY(EditAnywhere, Category = "BlackBoard")
	struct FBlackboardKeySelector BlackBoardKey_StopMovement;

	UPROPERTY(EditAnywhere, Category = "Value")
	float SearchScope;

	/** Notify called after GameplayTask finishes initialization (not active yet) */
	virtual void OnGameplayTaskInitialized(UGameplayTask& Task) {}

	/** Notify called after GameplayTask changes state to Active (initial activation or resuming) */
	virtual void OnGameplayTaskActivated(UGameplayTask& Task) {}

	/** Notify called after GameplayTask changes state from Active (finishing or pausing) */
	virtual void OnGameplayTaskDeactivated(UGameplayTask& Task) {}
};
