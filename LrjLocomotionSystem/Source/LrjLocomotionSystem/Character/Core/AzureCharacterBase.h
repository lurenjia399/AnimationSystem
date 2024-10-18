// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Interface/SAIBTCharacterInterface.h"
#include "AzureCharacterBase.generated.h"

/**
 * 
 */
UCLASS()
class LRJLOCOMOTIONSYSTEM_API AAzureCharacterBase : public ACharacter, public ISAIBTCharacterInterface
{
	GENERATED_BODY()
public:
	AAzureCharacterBase();
	
public:
	UPROPERTY(EditDefaultsOnly, Category = "Character|Defaults")
	bool bDie;

	UPROPERTY(EditDefaultsOnly, Category = "Character|Defaults")
	ECharacterType CharacterType;

public:
	virtual bool IsDie() const override;
	virtual ECharacterType GetCharacterType() const override;
	virtual void SAIBT_Attack(FName Tag) override;
	virtual void SAIBT_Attack(int32 Tag) override;
	virtual void SAIBT_Attack(AActor *Tag) override;
	virtual void SAIBT_AttackByGameplayTag(const FGameplayTag& InTag) override;
	
};
