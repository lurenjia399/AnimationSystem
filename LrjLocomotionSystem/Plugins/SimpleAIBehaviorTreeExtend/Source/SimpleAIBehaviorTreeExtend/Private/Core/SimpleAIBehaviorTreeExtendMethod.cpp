#include "Core/SimpleAIBehaviorTreeExtendMethod.h"
#include "Interface/SAIBTCharacterInterface.h"
#include "GameFramework/Character.h"
#include "EngineUtils.h"

namespace SimpleAIBehaviorTreeExtendMethod
{
	AActor* FindTarget(AActor* InThis, const TArray<ECharacterType>& InIgnoreType, float InRange)
	{
		AActor* Target = NULL;

		if (ISAIBTCharacterInterface* InThisCharacterInface = Cast<ISAIBTCharacterInterface>(InThis))
		{
			auto IsExistIgnoreType = [&](AActor* InNewTarget)->bool
			{
				for (auto& Tmp : InIgnoreType)
				{
					if (ISAIBTCharacterInterface* InCharacterInface = Cast<ISAIBTCharacterInterface>(InNewTarget))
					{
						if (InCharacterInface->GetCharacterType() == Tmp)
						{
							return true;
						}
					}
				}

				return false;
			};

			if (!InThisCharacterInface->IsDie() && InThis->GetWorld())
			{
				float TmpDistance = InRange;
				for (TActorIterator<AActor> It(InThis->GetWorld(), AActor::StaticClass()); It; ++It)
				{
					if (AActor* NewTarget = *It)
					{
						if (ISAIBTCharacterInterface* InNewCharacterInface = Cast<ISAIBTCharacterInterface>(NewTarget))
						{
							if (!InNewCharacterInface->IsDie() && InThis != NewTarget && !IsExistIgnoreType(NewTarget))
							{
								float Distance = FVector::Dist(InThis->GetActorLocation(), NewTarget->GetActorLocation());

								if (Distance <= InRange)
								{
									if (Distance <= TmpDistance)
									{
										TmpDistance = Distance;
										Target = NewTarget;
									}
								}
							}
						}
					}
				}
			}
		}

		return Target;
	}
}