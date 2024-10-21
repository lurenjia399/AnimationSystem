#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "CharacterStyleTable.generated.h"

class AAzureCharacterBase;

USTRUCT(BlueprintType)
struct FCharacterStyleTable :public FTableRowBase
{
	GENERATED_USTRUCT_BODY()

	FCharacterStyleTable();

	// 角色自己id
	UPROPERTY(EditDefaultsOnly, Category = "CharacterStyle")
	int32 ID;

	// 
	UPROPERTY(EditDefaultsOnly, Category = "CharacterStyle")
	FText CharacterName;

	UPROPERTY(EditDefaultsOnly, Category = "CharacterStyle")
	TSubclassOf<AAzureCharacterBase> CharacterBaseClass;
};