// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemComponent.h"
#include "Abilities/SimpleAbilitySystemComponent.h"
#include "Component/SimpleFightComponent.h"
#include "Components/ActorComponent.h"
#include "GameplayTags.h"
#include "SimpleCombat/Public/SimpleComboType.h"
#include "FightComponent.generated.h"


UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class LRJLOCOMOTIONSYSTEM_API UFightComponent : public USimpleFightComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UFightComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType,FActorComponentTickFunction* ThisTickFunction) override;
	
	virtual FSimpleComboCheck* GetSimpleComboInfo(const FGameplayTag& InKey);
public:
	bool IsComboAttackContains(const FGameplayTag& InTage);
	void RegisterComboAttack(const FGameplayTag& Key);
	void UnregisterComboAttack(const FGameplayTag& Key);
	
	void Press(const FGameplayTag &InTag);
	void Released(const FGameplayTag& InTag);
	void Reset();
public:
	UPROPERTY()
	int32 HitID;

	//连击
	UPROPERTY()
	TArray<FSimpleComboCheck> ComboAttack;
	
};
