#include "Core/SimpleCombatCore.h"

namespace SimpleCombatCore
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

	UChildActorComponent *RecursiveSearchComponentsByTag(USceneComponent* InComponent, UClass* InClass, FName InTag)
	{
		if (InComponent)
		{
			TArray<TObjectPtr<USceneComponent>> SceneChildern = InComponent->GetAttachChildren();

			for (auto& Tmp : SceneChildern)
			{
				if (Tmp->ComponentHasTag(InTag))
				{
					if (UChildActorComponent *InChildActor = Cast<UChildActorComponent>(Tmp))
					{
						if (!InClass)
						{
							return InChildActor;
						}

						if (InChildActor->GetChildActorClass() == InClass)
						{
							return InChildActor;
						}
					}	
				}
				else
				{
					if (UChildActorComponent* InFindComponent = RecursiveSearchComponentsByTag(Tmp, InClass, InTag))
					{
						return InFindComponent;
					}
				}
			}
		}

		return nullptr;
	}
}