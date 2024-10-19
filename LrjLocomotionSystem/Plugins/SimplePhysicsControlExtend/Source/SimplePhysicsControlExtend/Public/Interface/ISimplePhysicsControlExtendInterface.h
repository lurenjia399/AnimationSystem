#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ISimplePhysicsControlExtendInterface.generated.h"

class FSimplePhysicsControlBindHumanBase;

// This class does not need to be modified.
UINTERFACE(MinimalAPI, Blueprintable, BlueprintType, meta = (CannotImplementInterfaceInBlueprint))
class USimplePhysicsControlExtendInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 *
 */
class SIMPLEPHYSICSCONTROLEXTEND_API ISimplePhysicsControlExtendInterface
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	virtual TSharedPtr<FSimplePhysicsControlBindHumanBase> GetPhysicsControlBindHuman() = 0;
};
