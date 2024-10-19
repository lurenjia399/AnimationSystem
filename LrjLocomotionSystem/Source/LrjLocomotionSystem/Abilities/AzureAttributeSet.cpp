// Fill out your copyright notice in the Description page of Project Settings.


#include "AzureAttributeSet.h"

#include "GameplayEffectExtension.h"
#include "LrjLocomotionSystem/Character/Core/AzureCharacterBase.h"
#include "LrjLocomotionSystem/Character/Damage/AzureNumericalCalculation.h"
#include "Net/UnrealNetwork.h"

#if PLATFORM_WINDOWS
#pragma optimize("", off)
#endif


UAzureAttributeSet::UAzureAttributeSet()
	: Health(100.f)
	, MaxHealth(100.f)
	, Damage(0.f)
	, PhysicsAttack(51.f)
	, PhysicsDefense(20.f)
{
}

bool UAzureAttributeSet::PreGameplayEffectExecute(FGameplayEffectModCallbackData& Data)
{
	return Super::PreGameplayEffectExecute(Data);
}

void UAzureAttributeSet::PostGameplayEffectExecute(const FGameplayEffectModCallbackData& Data)
{
	Super::PostGameplayEffectExecute(Data);

	FGameplayEffectContextHandle Context = Data.EffectSpec.GetContext();
	UAbilitySystemComponent* SourceAbilitySystemComponent = Context.GetOriginalInstigatorAbilitySystemComponent();

	const FGameplayTagContainer& SourceTagContainer = *Data.EffectSpec.CapturedSourceTags.GetAggregatedTags();

	AAzureCharacterBase* TargetPawn =  Data.Target.AbilityActorInfo.IsValid() ? Cast<AAzureCharacterBase>(Data.Target.AbilityActorInfo->AvatarActor) : nullptr;

	float Magnitude = 0.f;
	if(Data.EvaluatedData.ModifierOp == EGameplayModOp::Type::Additive)
	{
		Magnitude = Data.EvaluatedData.Magnitude;
	}
	auto GetSourceCharacterAndSourceActor = [&](AActor*& InSourceActor, AAzureCharacterBase*& InSourceCharacter)
	{
		if (TargetPawn)
		{
			InSourceActor = SourceAbilitySystemComponent->AbilityActorInfo->AvatarActor.Get();
			AController* SourceController = SourceAbilitySystemComponent->AbilityActorInfo->PlayerController.Get();
			// 如果ownactor的controller不存在，就将controller设置成AvatarActor的controller
			if (SourceController == NULL && InSourceActor != NULL)
			{
				if (APawn* InPawn = Cast<APawn>(InSourceActor))
				{
					SourceController = InPawn->GetController();
				}
			}

			if (SourceController)
			{
				InSourceCharacter = Cast<AAzureCharacterBase>(SourceController->GetPawn());
			}
			else
			{
				InSourceCharacter = Cast<AAzureCharacterBase>(InSourceActor);
			}
		}
	};
	
	if (Data.EvaluatedData.Attribute == GetHealthAttribute())
	{
		if (TargetPawn && Magnitude < 0.f)
		{
			AAzureCharacterBase* SourceCharacter = NULL;//施法者
			AActor* SourceActor = NULL;//用了什么伤害了我
			GetSourceCharacterAndSourceActor(SourceActor, SourceCharacter);

			TargetPawn->HandleHealth(SourceCharacter, SourceActor, SourceTagContainer, Magnitude);
		}
	}
	else if (Data.EvaluatedData.Attribute == GetDamageAttribute())
	{
		//伤害公式
		float InPhysicsAttack = 0.f;

		AAzureCharacterBase* SourceCharacter = NULL;//施法者
		AActor* SourceActor = NULL;//用了什么伤害了我
		GetSourceCharacterAndSourceActor(SourceActor, SourceCharacter);

		if (UAzureAttributeSet* InAttribute = SourceCharacter->GetAttribute())
		{
			InPhysicsAttack = InAttribute->GetPhysicsAttack();
		}

		float InPhysicsDefense = GetPhysicsDefense();
		float InDamage = GetDamage();
		
		const float TmpDamage = AzureNumericalCalculation::GetDamage(InPhysicsAttack,InPhysicsDefense,InDamage);

		SetDamage(0.f);

		const float OldHealth = GetHealth();
		SetHealth(FMath::Clamp(OldHealth - TmpDamage, 0.f, GetMaxHealth()));

		if (TargetPawn)
		{
			bool bPlayHit = true;
			{

			}

			TargetPawn->HandleDamage(TmpDamage, SourceTagContainer, SourceCharacter, SourceActor);
			TargetPawn->HandleHealth(SourceCharacter, SourceActor, SourceTagContainer, -TmpDamage, bPlayHit);
		}
	}
}

void UAzureAttributeSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UAzureAttributeSet, Health);
	DOREPLIFETIME(UAzureAttributeSet, MaxHealth);
	DOREPLIFETIME(UAzureAttributeSet, PhysicsAttack);
	DOREPLIFETIME(UAzureAttributeSet, PhysicsDefense);
}

void UAzureAttributeSet::OnRep_Health(const FGameplayAttributeData& OldValue)
{
	CHECK_OWNING_ASC_GAMEPLAYATTRIBUTE_REPNOTIFY(UAzureAttributeSet, Health, OldValue, TEXT("OnRep_Health Error"));
}

void UAzureAttributeSet::OnRep_MaxHealth(const FGameplayAttributeData& OldValue)
{
	CHECK_OWNING_ASC_GAMEPLAYATTRIBUTE_REPNOTIFY(UAzureAttributeSet, MaxHealth, OldValue, TEXT("OnRep_Health Error"));
}

void UAzureAttributeSet::OnRep_PhysicsAttack(const FGameplayAttributeData& OldValue)
{
	CHECK_OWNING_ASC_GAMEPLAYATTRIBUTE_REPNOTIFY(UAzureAttributeSet, PhysicsAttack, OldValue, TEXT("OnRep_Health Error"));
}

void UAzureAttributeSet::OnRep_PhysicsDefense(const FGameplayAttributeData& OldValue)
{
	CHECK_OWNING_ASC_GAMEPLAYATTRIBUTE_REPNOTIFY(UAzureAttributeSet, PhysicsDefense, OldValue, TEXT("OnRep_Health Error"));
}

void UAzureAttributeSet::OnRep_Damage(const FGameplayAttributeData& OldValue)
{
	CHECK_OWNING_ASC_GAMEPLAYATTRIBUTE_REPNOTIFY(UAzureAttributeSet, Damage, OldValue, TEXT("OnRep_Health Error"));
}

#if PLATFORM_WINDOWS
#pragma optimize("", on)
#endif

