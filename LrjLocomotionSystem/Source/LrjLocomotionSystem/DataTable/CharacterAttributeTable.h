#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "CharacterAttributeTable.generated.h"

USTRUCT(BlueprintType)
struct FCharacterAttributeTable :public FTableRowBase
{
	GENERATED_USTRUCT_BODY()

	FCharacterAttributeTable();

	UPROPERTY(EditDefaultsOnly, Category = "CharacterAttribute")
	int32 ID;

	UPROPERTY(EditDefaultsOnly, Category = "CharacterAttribute")
	float Health;

	UPROPERTY(EditDefaultsOnly, Category = "CharacterAttribute")
	float PhysicsAttack;

	UPROPERTY(EditDefaultsOnly, Category = "CharacterAttribute")
	float PhysicsDefense;
};