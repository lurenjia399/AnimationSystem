#pragma once

#include "CoreMinimal.h"
#include "PhysicsControlData.h"

namespace SimplePhysicsControlCoreMethods
{
	SIMPLEPHYSICSCONTROLEXTEND_API USceneComponent* RecursiveSearchComponentsByTag(USceneComponent* InComponent, FName InTag);
	SIMPLEPHYSICSCONTROLEXTEND_API void MakeTarget(USceneComponent* InComponent,FPhysicsControlTarget &OutControlTarget);	
}