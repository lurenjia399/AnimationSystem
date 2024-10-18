//Copyright (C) RenZhai.2022.All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "SimpleAIBehaviorTreeExtendType.h"
#include "SAIBTAIInterface.generated.h"

class APawn;

/*
主要针对AI设计的结构
*/
// This class does not need to be modified.
UINTERFACE(MinimalAPI, Blueprintable, BlueprintType, meta = (NotBlueprintable))
class USAIBTAIInterface : public UInterface
{
	GENERATED_BODY()
};

class SIMPLEAIBEHAVIORTREEEXTEND_API ISAIBTAIInterface
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	
	virtual const FSAIBTAttribute& GetAIAttribute() const = 0;
	virtual void SetWalkingState(const ESAIBTLocomotionState& NewLocomotionState) = 0;
};
