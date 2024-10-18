// Fill out your copyright notice in the Description page of Project Settings.


#include "LrjLocomotionSystem/Character/Core/AzureCharacterBase.h"


AAzureCharacterBase::AAzureCharacterBase()
{
	bDie = false;
	CharacterType = ECharacterType::CHARACTER_NONE;
}

bool AAzureCharacterBase::IsDie() const
{
	return bDie;
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

void AAzureCharacterBase::SAIBT_AttackByGameplayTag(const FGameplayTag& InTag)
{
	GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Red, TEXT("SAIBT_AttackByGameplayTag"));
}
