// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemInterface.h"
#include "Abilities/SimpleAbilitySystemComponent.h"
#include "CombatInterface/SimpleCombatInterface.h"
#include "GameFramework/Character.h"
#include "Interface/SAIBTCharacterInterface.h"
#include "LrjLocomotionSystem/Abilities/AzureAttributeSet.h"
#include "LrjLocomotionSystem/Character/Component/FightComponent.h"
#include "LrjLocomotionSystem/DataTable/CharacterDataTableHead.h"
#include "AzureCharacterBase.generated.h"

/**
 * 
 */
UCLASS()
class LRJLOCOMOTIONSYSTEM_API AAzureCharacterBase
	: public ACharacter
	, public ISAIBTCharacterInterface
	, public IAbilitySystemInterface
	, public ISimpleComboInterface
{
	GENERATED_BODY()
public:
	AAzureCharacterBase();
public:
	virtual void BeginPlay() override;
public:
	UPROPERTY(EditDefaultsOnly, Category = "Character|Defaults")
	ECharacterType CharacterType;
	
	UPROPERTY(EditDefaultsOnly, Category = "Character|Defaults")
	TObjectPtr<USkeletalMeshComponent> AnimBPMesh; 

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Character|Ability")
	TObjectPtr<UAzureAttributeSet> AttributeSet;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly,  Category = "Character|Ability")
	TObjectPtr<USimpleAbilitySystemComponent> AbilitySystemComponent;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly,  Category = "Character|Ability")
	TObjectPtr<UFightComponent> FightComponent;

	

	// 使用DataTable的索引。monster是2，hostplayer是1
	UPROPERTY(EditDefaultsOnly,  Category = "Character")
	int32 DataTableIndex;

	const FCharacterAttributeTable* GetAttributeTable() const;
	const FCharacterSkillTable* GetSkillTable() const;
	const FCharacterStyleTable* GetStyleTable() const;

public:
	virtual bool IsDie() const override;
	virtual ECharacterType GetCharacterType() const override;
	virtual void SAIBT_Attack(FName Tag) override;
	virtual void SAIBT_Attack(int32 Tag) override;
	virtual void SAIBT_Attack(AActor *Tag) override;

	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override;
	virtual FSimpleComboCheck* GetSimpleComboInfo(const FGameplayTag& InKey) override;
	virtual bool ComboAttackByGameplayTag(const FGameplayTag& InKey) override;
	FORCEINLINE UFightComponent *GetFightComponent() const { return FightComponent; }
public:
	FORCEINLINE TObjectPtr<UAzureAttributeSet> GetAttribute()const { return AttributeSet; }
	/* 伤害数值，伤害Tag，造成伤害的角色，造成伤害的具体Actor（枪，刀，剑）*/
	virtual void HandleDamage(float DamageAmount,const struct FGameplayTagContainer& DamageTags,AAzureCharacterBase* ActtackerPawn,AActor* ActtackerActor);

	/* 造成伤害的角色, 造成伤害的具体Actor（枪，刀，剑），伤害Tag，血量值，是否播放受击动画*/
	virtual void HandleHealth(AAzureCharacterBase* ActtackerPawn,AActor* ActtackerActor, const struct FGameplayTagContainer& InTags,float HealthAmount, bool bPlayHit = true);
};
