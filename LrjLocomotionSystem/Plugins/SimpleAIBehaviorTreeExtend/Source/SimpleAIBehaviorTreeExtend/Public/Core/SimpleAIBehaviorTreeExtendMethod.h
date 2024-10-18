//Copyright (C) RenZhai.2022.All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "SimpleAIBehaviorTreeExtendType.h"

namespace SimpleAIBehaviorTreeExtendMethod
{
	SIMPLEAIBEHAVIORTREEEXTEND_API AActor* FindTarget(AActor* InThis, const TArray<ECharacterType>& InIgnoreType, float InRange = 520.f);
}