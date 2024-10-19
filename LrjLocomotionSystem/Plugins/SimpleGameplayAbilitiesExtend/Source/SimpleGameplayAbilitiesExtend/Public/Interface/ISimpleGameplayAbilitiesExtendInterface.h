//Copyright (C) RenZhai.2022.All Rights Reserved.
#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "GameplayTags.h"
#include "ISimpleGameplayAbilitiesExtendInterface.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI, Blueprintable, BlueprintType, meta = (CannotImplementInterfaceInBlueprint))
class USimpleGameplayAbilitiesExtendInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 *
 */
class SIMPLEGAMEPLAYABILITIESEXTEND_API ISimpleGameplayAbilitiesExtendInterface
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	virtual int32 GetGameplayAbilitiesMontageSections(const FGameplayTag &InTag) const { return INDEX_NONE; }
};
