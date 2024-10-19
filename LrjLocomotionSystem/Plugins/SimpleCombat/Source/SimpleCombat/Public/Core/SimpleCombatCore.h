#pragma once

#include "CoreMinimal.h"

namespace SimpleCombatCore
{
	USceneComponent* RecursiveSearchComponentsByTag(USceneComponent* InComponent, FName InTag);
	UChildActorComponent *RecursiveSearchComponentsByTag(USceneComponent* InComponent,UClass *InClass, FName InTag);
}