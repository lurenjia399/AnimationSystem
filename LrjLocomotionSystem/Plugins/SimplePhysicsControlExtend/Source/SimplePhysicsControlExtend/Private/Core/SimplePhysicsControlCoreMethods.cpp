#include "Core/SimplePhysicsControlCoreMethods.h"

namespace SimplePhysicsControlCoreMethods
{
	USceneComponent* RecursiveSearchComponentsByTag(USceneComponent* InComponent, FName InTag)
	{
		if (InComponent)
		{
			TArray<TObjectPtr<USceneComponent>> SceneChildern = InComponent->GetAttachChildren();

			for (auto& Tmp : SceneChildern)
			{
				if (Tmp->ComponentHasTag(InTag))
				{
					return Tmp;
				}
				else
				{
					if (USceneComponent* InFindComponent = RecursiveSearchComponentsByTag(Tmp, InTag))
					{
						return InFindComponent;
					}
				}
			}
		}

		return nullptr;
	}

	void MakeTarget(USceneComponent* InComponent, FPhysicsControlTarget& OutControlTarget)
	{
		if (InComponent)
		{
			OutControlTarget.TargetPosition = InComponent->GetRelativeLocation() / InComponent->GetRelativeScale3D();
			OutControlTarget.TargetOrientation = InComponent->GetRelativeRotation();
		}	
	}
}