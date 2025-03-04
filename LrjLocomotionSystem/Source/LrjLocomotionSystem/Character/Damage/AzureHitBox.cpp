// Fill out your copyright notice in the Description page of Project Settings.


#include "AzureHitBox.h"

#include "AbilitySystemBlueprintLibrary.h"
#include "LrjLocomotionSystem/Character/Core/AzureCharacterBase.h"


AAzureHitBox::AAzureHitBox(const FObjectInitializer& ObjectInitializer)
		:Super(ObjectInitializer)
{
	if(GetHitDamage())
	{
		GetHitDamage()->SetHiddenInGame(true);
	}
}

void AAzureHitBox::HandleDamage(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	
	if(GetInstigator() != OtherActor)
	{
		// 不是自己打自己
		if(AAzureCharacterBase* attacker = Cast<AAzureCharacterBase>(GetInstigator()))
		{
			if(AAzureCharacterBase* target = Cast<AAzureCharacterBase>(OtherActor))
			{
				if(attacker->GetCharacterType() != target->GetCharacterType())
				{
					if(!attacker->GetWorld()->IsNetMode(ENetMode::NM_Client))
					{
						// 目标死亡
						if(target->IsDie())
						{
							return;
						}
						// 已经造成过伤害
						if(IsExist(target))
						{
							return;
						}

						target->SetBeHurtID(GetHitID());

						FGameplayEventData EventData;
						EventData.Instigator = attacker;
						EventData.Target = target;
						if(!Buffs.IsEmpty())
						{
							for(const FName& BuffName : Buffs)
							{
								UAbilitySystemBlueprintLibrary::SendGameplayEventToActor(attacker, FGameplayTag::RequestGameplayTag(BuffName), EventData);
							}
						}else if(!BuffTags.IsEmpty())
						{
							for(const FGameplayTag& Tag : BuffTags)
							{
								UAbilitySystemBlueprintLibrary::SendGameplayEventToActor(attacker, Tag, EventData);
							}
						}
						Destroy();
					}
					Super::HandleDamage(OverlappedComponent, OtherActor, OtherComp, OtherBodyIndex, bFromSweep, SweepResult);
				}
			}
		}
	}
}

void AAzureHitBox::BeginPlay()
{
	Super::BeginPlay();
	
}

void AAzureHitBox::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

