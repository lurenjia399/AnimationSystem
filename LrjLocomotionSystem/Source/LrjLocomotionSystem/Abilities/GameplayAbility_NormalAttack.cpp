#include "GameplayAbility_NormalAttack.h"

#include "LrjLocomotionSystem/Character/Core/AzureCharacterBase.h"

void UGameplayAbility_NormalAttack::ActivateAbility(
	const FGameplayAbilitySpecHandle Handle, 
	const FGameplayAbilityActorInfo* ActorInfo, 
	const FGameplayAbilityActivationInfo ActivationInfo,
	const FGameplayEventData* TriggerEventData)
{
	Super::ActivateAbility(Handle, ActorInfo, ActivationInfo, TriggerEventData);

	if (!CommitAbility(Handle, ActorInfo, ActivationInfo))
	{
		return;
	}

	if (AAzureCharacterBase* InCharacterBase = Cast<AAzureCharacterBase>(ActorInfo->OwnerActor))
	{
		if (auto SimpleComboInfo = InCharacterBase->GetSimpleComboInfo(AbilityTags.First()))
		{
			if (PlayMontage(*FString::FromInt(SimpleComboInfo->ComboIndex)))
			{
				RegisterActiveSkillTag();
			}
		}
	}
}
