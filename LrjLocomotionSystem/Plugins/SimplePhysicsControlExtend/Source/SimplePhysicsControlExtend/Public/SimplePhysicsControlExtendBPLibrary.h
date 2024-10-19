// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "SimplePhysicsControlExtendBPLibrary.generated.h"

UCLASS()
class USimplePhysicsControlExtendBPLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_UCLASS_BODY()

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Execute Sample function", Keywords = "SimplePhysicsControlExtend sample test testing"), Category = "SimplePhysicsControlExtendTesting")
	static float SimplePhysicsControlExtendSampleFunction(float Param);


};
