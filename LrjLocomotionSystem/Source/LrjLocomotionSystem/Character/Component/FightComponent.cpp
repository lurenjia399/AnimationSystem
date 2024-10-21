// Fill out your copyright notice in the Description page of Project Settings.


#include "FightComponent.h"

#include "SimpleComboType.h"
#include "Abilities/SimpleGameplayAbilityMontage.h"
#include "CombatInterface/SimpleCombatInterface.h"


// Sets default values for this component's properties
UFightComponent::UFightComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UFightComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UFightComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	for (auto &Tmp : ComboAttack)
	{
		Tmp.Tick(DeltaTime);
	}
}

FSimpleComboCheck* UFightComponent::GetSimpleComboInfo(const FGameplayTag& InKey)
{
	return ComboAttack.FindByPredicate([&](const FSimpleComboCheck& InComboAttack)
	{
		return InComboAttack.ComboGameplayTag == InKey;
	});
}

bool UFightComponent::IsComboAttackContains(const FGameplayTag& InTage)
{
	if (GetSimpleComboInfo(InTage))
	{
		return true;
	}

	return false;
}

void UFightComponent::RegisterComboAttack(const FGameplayTag& Key)
{
	if (!IsComboAttackContains(Key))
	{
		FSimpleComboCheck& InComboAttack = ComboAttack.AddDefaulted_GetRef();

		InComboAttack.Character = Cast<ISimpleComboInterface>(GetOwner());
		InComboAttack.ComboGameplayTag = Key;
		InComboAttack.ComboKey = Key.GetTagName();

		if (USimpleGameplayAbilityMontage* GameplayAbility = Cast<USimpleGameplayAbilityMontage>(GetGameplayAbility(Key)))
		{
			InComboAttack.MaxIndex = GameplayAbility->GetCompositeSectionsNumber();
		}
		else
		{
			InComboAttack.MaxIndex = 4;
		}

		//技能注册
		//AddGameplayAbility();
	}
}

void UFightComponent::UnregisterComboAttack(const FGameplayTag& Key)
{
	if (IsComboAttackContains(Key))
	{
		FSimpleComboCheck RemoveKey;
		RemoveKey.ComboGameplayTag = Key;
		RemoveKey.ComboKey = Key.GetTagName();

		ComboAttack.Remove(RemoveKey);

		//移除技能
		RemoveGameplayAbility(Key);
	}
}

void UFightComponent::Press(const FGameplayTag& InTag)
{
	for (auto& Tmp : ComboAttack)
	{
		if (Tmp.ComboGameplayTag == InTag)
		{
			Tmp.Press();
			break;
		}
	}
}

void UFightComponent::Released(const FGameplayTag& InTag)
{
	for (auto& Tmp : ComboAttack)
	{
		if (Tmp.ComboGameplayTag == InTag)
		{
			Tmp.Released();
			break;
		}
	}
}

void UFightComponent::Reset()
{
	for (auto& Tmp : ComboAttack)
	{
		Tmp.Reset();
	}
}

