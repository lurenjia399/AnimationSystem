#pragma once

#include "CoreMinimal.h"
#include "Abilities/Skill/Core/GameplayAbility_Skill.h"
#include "GameplayAbility_NormalAttack.generated.h"

UCLASS()
class UGameplayAbility_NormalAttack : public UGameplayAbility_Skill
{
	GENERATED_BODY()

public:
	virtual void ActivateAbility(
		const FGameplayAbilitySpecHandle Handle, 
		const FGameplayAbilityActorInfo* ActorInfo, 
		const FGameplayAbilityActivationInfo ActivationInfo, 
		const FGameplayEventData* TriggerEventData);
};
