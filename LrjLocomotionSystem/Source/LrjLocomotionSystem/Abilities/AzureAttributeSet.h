// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "Abilities/SimpleGameplayAbilityMacros.h"
#include "AzureAttributeSet.generated.h"

/**
 * 
 */
UCLASS()
class UAzureAttributeSet : public UAttributeSet
{
	GENERATED_BODY()
public:
	UAzureAttributeSet();


public:
	// GE对属性生效前执行
	virtual bool PreGameplayEffectExecute(FGameplayEffectModCallbackData& Data) override;
	// GE对属性生效后执行
	virtual void PostGameplayEffectExecute(const FGameplayEffectModCallbackData& Data) override;
	// 有同步的属性需要重写
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
public:
	UFUNCTION()
	void OnRep_Health(const FGameplayAttributeData& OldValue);
	UFUNCTION()
	void OnRep_MaxHealth(const FGameplayAttributeData& OldValue);
	UFUNCTION()
	void OnRep_PhysicsAttack(const FGameplayAttributeData& OldValue);
	UFUNCTION()
	void OnRep_PhysicsDefense(const FGameplayAttributeData& OldValue);
	UFUNCTION()
	void OnRep_Damage(const FGameplayAttributeData& OldValue);
public:
	UPROPERTY(BlueprintReadOnly, Category="Attribute", ReplicatedUsing=OnRep_Health)
	FGameplayAttributeData Health;
	PROPERTY_FUNCTION_REGISTRATION(UAzureAttributeSet, Health)

	UPROPERTY(BlueprintReadOnly, Category="Attribute", ReplicatedUsing=OnRep_MaxHealth)
	FGameplayAttributeData MaxHealth;
	PROPERTY_FUNCTION_REGISTRATION(UAzureAttributeSet, MaxHealth)

	UPROPERTY(BlueprintReadOnly, Category="Attribute", ReplicatedUsing=OnRep_PhysicsAttack)
	FGameplayAttributeData PhysicsAttack;
	PROPERTY_FUNCTION_REGISTRATION(UAzureAttributeSet, PhysicsAttack)

	UPROPERTY(BlueprintReadOnly, Category="Attribute", ReplicatedUsing=OnRep_PhysicsDefense)
	FGameplayAttributeData PhysicsDefense;
	PROPERTY_FUNCTION_REGISTRATION(UAzureAttributeSet, PhysicsDefense)

	UPROPERTY(BlueprintReadOnly, Category="Attribute", ReplicatedUsing=OnRep_Damage)
	FGameplayAttributeData Damage;
	PROPERTY_FUNCTION_REGISTRATION(UAzureAttributeSet, Damage)

	
};
