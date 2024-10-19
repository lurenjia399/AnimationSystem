// Fill out your copyright notice in the Description page of Project Settings.


#include "LrjLocomotionSystem/Character/Core/AzureCharacterBase.h"


AAzureCharacterBase::AAzureCharacterBase()
{
	AttributeSet = CreateDefaultSubobject<UAzureAttributeSet>(TEXT("UAzureAttributeSet"));
	AbilityAbilitySystemComponent = CreateDefaultSubobject<USimpleAbilitySystemComponent>(TEXT("USimpleAbilitySystemComponent"));
	AbilityAbilitySystemComponent->SetIsReplicated(true);
	
	CharacterType = ECharacterType::CHARACTER_NONE;
}

void AAzureCharacterBase::BeginPlay()
{
	Super::BeginPlay();

	TArray<UAttributeSet*> AttributeArray;
	AttributeArray.Add(AttributeSet);

	AbilityAbilitySystemComponent->SetSpawnedAttributes(AttributeArray);
}

bool AAzureCharacterBase::IsDie() const
{
	if (IsValid(AttributeSet))
	{
		return AttributeSet->Health.GetCurrentValue() <= 0.f;
	}
	return false;
}

ECharacterType AAzureCharacterBase::GetCharacterType() const
{
	return CharacterType;
}

void AAzureCharacterBase::SAIBT_Attack(FName Tag)
{
	GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Red, TEXT("SAIBT_AttackByName"));
}

void AAzureCharacterBase::SAIBT_Attack(int32 Tag)
{
	GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Red, TEXT("SAIBT_AttackByTag"));
}

void AAzureCharacterBase::SAIBT_Attack(AActor* Tag)
{
	GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Red, TEXT("SAIBT_AttackByUObject"));
}

void AAzureCharacterBase::HandleDamage(float DamageAmount, const FGameplayTagContainer& DamageTags,
	AAzureCharacterBase* ActtackerPawn, AActor* ActtackerActor)
{
}

void AAzureCharacterBase::HandleHealth(AAzureCharacterBase* ActtackerPawn, AActor* ActtackerActor,
	const FGameplayTagContainer& InTags, float HealthAmount, bool bPlayHit)
{
}
