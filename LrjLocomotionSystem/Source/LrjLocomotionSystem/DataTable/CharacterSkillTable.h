#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "CharacterSkillTable.generated.h"

class UGameplayAbility;

USTRUCT(BlueprintType)
struct FCharacterSkillTable :public FTableRowBase
{
	GENERATED_USTRUCT_BODY()

	FCharacterSkillTable();

	UPROPERTY(EditDefaultsOnly, Category = "CharacterStyle")
	int32 ID;

	UPROPERTY(EditDefaultsOnly, Category = "CharacterStyle")
	TSubclassOf<UGameplayAbility> LeftMouseSkill;

	UPROPERTY(EditDefaultsOnly, Category = "CharacterStyle")
	TSubclassOf<UGameplayAbility> RightMouseSkill;
};