// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleCombat/Public/SimpleCombatBPLibrary.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
#include "SimpleCombat/Public/SimpleComboType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimpleCombatBPLibrary() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
SIMPLECOMBAT_API UClass* Z_Construct_UClass_AHitCollision_NoRegister();
SIMPLECOMBAT_API UClass* Z_Construct_UClass_AResidualShadowActor_NoRegister();
SIMPLECOMBAT_API UClass* Z_Construct_UClass_USimpleCombatBPLibrary();
SIMPLECOMBAT_API UClass* Z_Construct_UClass_USimpleCombatBPLibrary_NoRegister();
SIMPLECOMBAT_API UClass* Z_Construct_UClass_UUI_ComboCount_NoRegister();
SIMPLECOMBAT_API UScriptStruct* Z_Construct_UScriptStruct_FSimpleHitCollisionParam();
UPackage* Z_Construct_UPackage__Script_SimpleCombat();
// End Cross Module References

// Begin Class USimpleCombatBPLibrary Function ComboPlay
struct Z_Construct_UFunction_USimpleCombatBPLibrary_ComboPlay_Statics
{
	struct SimpleCombatBPLibrary_eventComboPlay_Parms
	{
		UObject* WorldContextObject;
		TSubclassOf<UUI_ComboCount> InClass;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combat" },
		{ "DisplayName", "CombatText" },
		{ "ModuleRelativePath", "Public/SimpleCombatBPLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FClassPropertyParams NewProp_InClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USimpleCombatBPLibrary_ComboPlay_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleCombatBPLibrary_eventComboPlay_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_USimpleCombatBPLibrary_ComboPlay_Statics::NewProp_InClass = { "InClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleCombatBPLibrary_eventComboPlay_Parms, InClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUI_ComboCount_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleCombatBPLibrary_ComboPlay_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleCombatBPLibrary_ComboPlay_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleCombatBPLibrary_ComboPlay_Statics::NewProp_InClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleCombatBPLibrary_ComboPlay_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleCombatBPLibrary_ComboPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleCombatBPLibrary, nullptr, "ComboPlay", nullptr, nullptr, Z_Construct_UFunction_USimpleCombatBPLibrary_ComboPlay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleCombatBPLibrary_ComboPlay_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleCombatBPLibrary_ComboPlay_Statics::SimpleCombatBPLibrary_eventComboPlay_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleCombatBPLibrary_ComboPlay_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleCombatBPLibrary_ComboPlay_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USimpleCombatBPLibrary_ComboPlay_Statics::SimpleCombatBPLibrary_eventComboPlay_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USimpleCombatBPLibrary_ComboPlay()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleCombatBPLibrary_ComboPlay_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USimpleCombatBPLibrary::execComboPlay)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(UClass,Z_Param_InClass);
	P_FINISH;
	P_NATIVE_BEGIN;
	USimpleCombatBPLibrary::ComboPlay(Z_Param_WorldContextObject,Z_Param_InClass);
	P_NATIVE_END;
}
// End Class USimpleCombatBPLibrary Function ComboPlay

// Begin Class USimpleCombatBPLibrary Function ComboTextDestroy
struct Z_Construct_UFunction_USimpleCombatBPLibrary_ComboTextDestroy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combat" },
		{ "DisplayName", "CombatText" },
		{ "ModuleRelativePath", "Public/SimpleCombatBPLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleCombatBPLibrary_ComboTextDestroy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleCombatBPLibrary, nullptr, "ComboTextDestroy", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleCombatBPLibrary_ComboTextDestroy_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleCombatBPLibrary_ComboTextDestroy_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_USimpleCombatBPLibrary_ComboTextDestroy()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleCombatBPLibrary_ComboTextDestroy_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USimpleCombatBPLibrary::execComboTextDestroy)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	USimpleCombatBPLibrary::ComboTextDestroy();
	P_NATIVE_END;
}
// End Class USimpleCombatBPLibrary Function ComboTextDestroy

// Begin Class USimpleCombatBPLibrary Function GetCaster
struct Z_Construct_UFunction_USimpleCombatBPLibrary_GetCaster_Statics
{
	struct SimpleCombatBPLibrary_eventGetCaster_Parms
	{
		AActor* InCharacter;
		APawn* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Public/SimpleCombatBPLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InCharacter;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USimpleCombatBPLibrary_GetCaster_Statics::NewProp_InCharacter = { "InCharacter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleCombatBPLibrary_eventGetCaster_Parms, InCharacter), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USimpleCombatBPLibrary_GetCaster_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleCombatBPLibrary_eventGetCaster_Parms, ReturnValue), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleCombatBPLibrary_GetCaster_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleCombatBPLibrary_GetCaster_Statics::NewProp_InCharacter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleCombatBPLibrary_GetCaster_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleCombatBPLibrary_GetCaster_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleCombatBPLibrary_GetCaster_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleCombatBPLibrary, nullptr, "GetCaster", nullptr, nullptr, Z_Construct_UFunction_USimpleCombatBPLibrary_GetCaster_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleCombatBPLibrary_GetCaster_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleCombatBPLibrary_GetCaster_Statics::SimpleCombatBPLibrary_eventGetCaster_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleCombatBPLibrary_GetCaster_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleCombatBPLibrary_GetCaster_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USimpleCombatBPLibrary_GetCaster_Statics::SimpleCombatBPLibrary_eventGetCaster_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USimpleCombatBPLibrary_GetCaster()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleCombatBPLibrary_GetCaster_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USimpleCombatBPLibrary::execGetCaster)
{
	P_GET_OBJECT(AActor,Z_Param_InCharacter);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(APawn**)Z_Param__Result=USimpleCombatBPLibrary::GetCaster(Z_Param_InCharacter);
	P_NATIVE_END;
}
// End Class USimpleCombatBPLibrary Function GetCaster

// Begin Class USimpleCombatBPLibrary Function PlayMontage
struct Z_Construct_UFunction_USimpleCombatBPLibrary_PlayMontage_Statics
{
	struct SimpleCombatBPLibrary_eventPlayMontage_Parms
	{
		USkeletalMeshComponent* InMesh;
		UAnimMontage* InAnimMontage;
		float InPlayRate;
		FName StartSectionName;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Anim" },
		{ "DisplayName", "Play Montage" },
		{ "ModuleRelativePath", "Public/SimpleCombatBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InMesh_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InAnimMontage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InPlayRate;
	static const UECodeGen_Private::FNamePropertyParams NewProp_StartSectionName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USimpleCombatBPLibrary_PlayMontage_Statics::NewProp_InMesh = { "InMesh", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleCombatBPLibrary_eventPlayMontage_Parms, InMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InMesh_MetaData), NewProp_InMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USimpleCombatBPLibrary_PlayMontage_Statics::NewProp_InAnimMontage = { "InAnimMontage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleCombatBPLibrary_eventPlayMontage_Parms, InAnimMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleCombatBPLibrary_PlayMontage_Statics::NewProp_InPlayRate = { "InPlayRate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleCombatBPLibrary_eventPlayMontage_Parms, InPlayRate), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USimpleCombatBPLibrary_PlayMontage_Statics::NewProp_StartSectionName = { "StartSectionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleCombatBPLibrary_eventPlayMontage_Parms, StartSectionName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleCombatBPLibrary_PlayMontage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleCombatBPLibrary_eventPlayMontage_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleCombatBPLibrary_PlayMontage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleCombatBPLibrary_PlayMontage_Statics::NewProp_InMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleCombatBPLibrary_PlayMontage_Statics::NewProp_InAnimMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleCombatBPLibrary_PlayMontage_Statics::NewProp_InPlayRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleCombatBPLibrary_PlayMontage_Statics::NewProp_StartSectionName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleCombatBPLibrary_PlayMontage_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleCombatBPLibrary_PlayMontage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleCombatBPLibrary_PlayMontage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleCombatBPLibrary, nullptr, "PlayMontage", nullptr, nullptr, Z_Construct_UFunction_USimpleCombatBPLibrary_PlayMontage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleCombatBPLibrary_PlayMontage_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleCombatBPLibrary_PlayMontage_Statics::SimpleCombatBPLibrary_eventPlayMontage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleCombatBPLibrary_PlayMontage_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleCombatBPLibrary_PlayMontage_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USimpleCombatBPLibrary_PlayMontage_Statics::SimpleCombatBPLibrary_eventPlayMontage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USimpleCombatBPLibrary_PlayMontage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleCombatBPLibrary_PlayMontage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USimpleCombatBPLibrary::execPlayMontage)
{
	P_GET_OBJECT(USkeletalMeshComponent,Z_Param_InMesh);
	P_GET_OBJECT(UAnimMontage,Z_Param_InAnimMontage);
	P_GET_PROPERTY(FFloatProperty,Z_Param_InPlayRate);
	P_GET_PROPERTY(FNameProperty,Z_Param_StartSectionName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=USimpleCombatBPLibrary::PlayMontage(Z_Param_InMesh,Z_Param_InAnimMontage,Z_Param_InPlayRate,Z_Param_StartSectionName);
	P_NATIVE_END;
}
// End Class USimpleCombatBPLibrary Function PlayMontage

// Begin Class USimpleCombatBPLibrary Function SpawnCollision
struct Z_Construct_UFunction_USimpleCombatBPLibrary_SpawnCollision_Statics
{
	struct SimpleCombatBPLibrary_eventSpawnCollision_Parms
	{
		FSimpleHitCollisionParam InParam;
		AHitCollision* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\xa4\x8d\xe6\x9d\x82\xe7\x94\x9f\xe6\x88\x90\n" },
#endif
		{ "ModuleRelativePath", "Public/SimpleCombatBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xa4\x8d\xe6\x9d\x82\xe7\x94\x9f\xe6\x88\x90" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InParam_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InParam;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleCombatBPLibrary_SpawnCollision_Statics::NewProp_InParam = { "InParam", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleCombatBPLibrary_eventSpawnCollision_Parms, InParam), Z_Construct_UScriptStruct_FSimpleHitCollisionParam, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InParam_MetaData), NewProp_InParam_MetaData) }; // 1628828425
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USimpleCombatBPLibrary_SpawnCollision_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleCombatBPLibrary_eventSpawnCollision_Parms, ReturnValue), Z_Construct_UClass_AHitCollision_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleCombatBPLibrary_SpawnCollision_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleCombatBPLibrary_SpawnCollision_Statics::NewProp_InParam,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleCombatBPLibrary_SpawnCollision_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleCombatBPLibrary_SpawnCollision_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleCombatBPLibrary_SpawnCollision_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleCombatBPLibrary, nullptr, "SpawnCollision", nullptr, nullptr, Z_Construct_UFunction_USimpleCombatBPLibrary_SpawnCollision_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleCombatBPLibrary_SpawnCollision_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleCombatBPLibrary_SpawnCollision_Statics::SimpleCombatBPLibrary_eventSpawnCollision_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleCombatBPLibrary_SpawnCollision_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleCombatBPLibrary_SpawnCollision_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USimpleCombatBPLibrary_SpawnCollision_Statics::SimpleCombatBPLibrary_eventSpawnCollision_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USimpleCombatBPLibrary_SpawnCollision()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleCombatBPLibrary_SpawnCollision_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USimpleCombatBPLibrary::execSpawnCollision)
{
	P_GET_STRUCT_REF(FSimpleHitCollisionParam,Z_Param_Out_InParam);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AHitCollision**)Z_Param__Result=USimpleCombatBPLibrary::SpawnCollision(Z_Param_Out_InParam);
	P_NATIVE_END;
}
// End Class USimpleCombatBPLibrary Function SpawnCollision

// Begin Class USimpleCombatBPLibrary Function SpawnResidualShadow
struct Z_Construct_UFunction_USimpleCombatBPLibrary_SpawnResidualShadow_Statics
{
	struct SimpleCombatBPLibrary_eventSpawnResidualShadow_Parms
	{
		UObject* WorldContextObject;
		TSubclassOf<AResidualShadowActor> ResidualShadowActorClass;
		USkeletalMeshComponent* InComponentToCopy;
		float InZOffset;
		FVector Location;
		FRotator InRot;
		float InLiftTime;
		AResidualShadowActor* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combat" },
		{ "CPP_Default_InLiftTime", "1.000000" },
		{ "DisplayName", "ResidualShadow" },
		{ "ModuleRelativePath", "Public/SimpleCombatBPLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InComponentToCopy_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InRot_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ResidualShadowActorClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InComponentToCopy;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InZOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InRot;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InLiftTime;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USimpleCombatBPLibrary_SpawnResidualShadow_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleCombatBPLibrary_eventSpawnResidualShadow_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_USimpleCombatBPLibrary_SpawnResidualShadow_Statics::NewProp_ResidualShadowActorClass = { "ResidualShadowActorClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleCombatBPLibrary_eventSpawnResidualShadow_Parms, ResidualShadowActorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AResidualShadowActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USimpleCombatBPLibrary_SpawnResidualShadow_Statics::NewProp_InComponentToCopy = { "InComponentToCopy", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleCombatBPLibrary_eventSpawnResidualShadow_Parms, InComponentToCopy), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InComponentToCopy_MetaData), NewProp_InComponentToCopy_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleCombatBPLibrary_SpawnResidualShadow_Statics::NewProp_InZOffset = { "InZOffset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleCombatBPLibrary_eventSpawnResidualShadow_Parms, InZOffset), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleCombatBPLibrary_SpawnResidualShadow_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleCombatBPLibrary_eventSpawnResidualShadow_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Location_MetaData), NewProp_Location_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleCombatBPLibrary_SpawnResidualShadow_Statics::NewProp_InRot = { "InRot", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleCombatBPLibrary_eventSpawnResidualShadow_Parms, InRot), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InRot_MetaData), NewProp_InRot_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleCombatBPLibrary_SpawnResidualShadow_Statics::NewProp_InLiftTime = { "InLiftTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleCombatBPLibrary_eventSpawnResidualShadow_Parms, InLiftTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USimpleCombatBPLibrary_SpawnResidualShadow_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleCombatBPLibrary_eventSpawnResidualShadow_Parms, ReturnValue), Z_Construct_UClass_AResidualShadowActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleCombatBPLibrary_SpawnResidualShadow_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleCombatBPLibrary_SpawnResidualShadow_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleCombatBPLibrary_SpawnResidualShadow_Statics::NewProp_ResidualShadowActorClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleCombatBPLibrary_SpawnResidualShadow_Statics::NewProp_InComponentToCopy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleCombatBPLibrary_SpawnResidualShadow_Statics::NewProp_InZOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleCombatBPLibrary_SpawnResidualShadow_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleCombatBPLibrary_SpawnResidualShadow_Statics::NewProp_InRot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleCombatBPLibrary_SpawnResidualShadow_Statics::NewProp_InLiftTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleCombatBPLibrary_SpawnResidualShadow_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleCombatBPLibrary_SpawnResidualShadow_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleCombatBPLibrary_SpawnResidualShadow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleCombatBPLibrary, nullptr, "SpawnResidualShadow", nullptr, nullptr, Z_Construct_UFunction_USimpleCombatBPLibrary_SpawnResidualShadow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleCombatBPLibrary_SpawnResidualShadow_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleCombatBPLibrary_SpawnResidualShadow_Statics::SimpleCombatBPLibrary_eventSpawnResidualShadow_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleCombatBPLibrary_SpawnResidualShadow_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleCombatBPLibrary_SpawnResidualShadow_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USimpleCombatBPLibrary_SpawnResidualShadow_Statics::SimpleCombatBPLibrary_eventSpawnResidualShadow_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USimpleCombatBPLibrary_SpawnResidualShadow()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleCombatBPLibrary_SpawnResidualShadow_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USimpleCombatBPLibrary::execSpawnResidualShadow)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(UClass,Z_Param_ResidualShadowActorClass);
	P_GET_OBJECT(USkeletalMeshComponent,Z_Param_InComponentToCopy);
	P_GET_PROPERTY(FFloatProperty,Z_Param_InZOffset);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Location);
	P_GET_STRUCT_REF(FRotator,Z_Param_Out_InRot);
	P_GET_PROPERTY(FFloatProperty,Z_Param_InLiftTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AResidualShadowActor**)Z_Param__Result=USimpleCombatBPLibrary::SpawnResidualShadow(Z_Param_WorldContextObject,Z_Param_ResidualShadowActorClass,Z_Param_InComponentToCopy,Z_Param_InZOffset,Z_Param_Out_Location,Z_Param_Out_InRot,Z_Param_InLiftTime);
	P_NATIVE_END;
}
// End Class USimpleCombatBPLibrary Function SpawnResidualShadow

// Begin Class USimpleCombatBPLibrary Function SpawnSimpleCollision
struct Z_Construct_UFunction_USimpleCombatBPLibrary_SpawnSimpleCollision_Statics
{
	struct SimpleCombatBPLibrary_eventSpawnSimpleCollision_Parms
	{
		AActor* InSimpleCombatCharacter;
		UClass* HitObjectClass;
		FVector InLocation;
		FRotator InRotation;
		FGameplayTag GASTag;
		int32 HitID;
		float HitCollisionLiftTime;
		AHitCollision* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe7\xae\x80\xe5\x8d\x95\xe7\x94\x9f\xe6\x88\x90\n" },
#endif
		{ "CPP_Default_HitCollisionLiftTime", "4.000000" },
		{ "CPP_Default_HitID", "-1" },
		{ "ModuleRelativePath", "Public/SimpleCombatBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\xae\x80\xe5\x8d\x95\xe7\x94\x9f\xe6\x88\x90" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InRotation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InSimpleCombatCharacter;
	static const UECodeGen_Private::FClassPropertyParams NewProp_HitObjectClass;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InRotation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GASTag;
	static const UECodeGen_Private::FIntPropertyParams NewProp_HitID;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HitCollisionLiftTime;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USimpleCombatBPLibrary_SpawnSimpleCollision_Statics::NewProp_InSimpleCombatCharacter = { "InSimpleCombatCharacter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleCombatBPLibrary_eventSpawnSimpleCollision_Parms, InSimpleCombatCharacter), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_USimpleCombatBPLibrary_SpawnSimpleCollision_Statics::NewProp_HitObjectClass = { "HitObjectClass", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleCombatBPLibrary_eventSpawnSimpleCollision_Parms, HitObjectClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleCombatBPLibrary_SpawnSimpleCollision_Statics::NewProp_InLocation = { "InLocation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleCombatBPLibrary_eventSpawnSimpleCollision_Parms, InLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InLocation_MetaData), NewProp_InLocation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleCombatBPLibrary_SpawnSimpleCollision_Statics::NewProp_InRotation = { "InRotation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleCombatBPLibrary_eventSpawnSimpleCollision_Parms, InRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InRotation_MetaData), NewProp_InRotation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleCombatBPLibrary_SpawnSimpleCollision_Statics::NewProp_GASTag = { "GASTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleCombatBPLibrary_eventSpawnSimpleCollision_Parms, GASTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleCombatBPLibrary_SpawnSimpleCollision_Statics::NewProp_HitID = { "HitID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleCombatBPLibrary_eventSpawnSimpleCollision_Parms, HitID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleCombatBPLibrary_SpawnSimpleCollision_Statics::NewProp_HitCollisionLiftTime = { "HitCollisionLiftTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleCombatBPLibrary_eventSpawnSimpleCollision_Parms, HitCollisionLiftTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USimpleCombatBPLibrary_SpawnSimpleCollision_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleCombatBPLibrary_eventSpawnSimpleCollision_Parms, ReturnValue), Z_Construct_UClass_AHitCollision_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleCombatBPLibrary_SpawnSimpleCollision_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleCombatBPLibrary_SpawnSimpleCollision_Statics::NewProp_InSimpleCombatCharacter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleCombatBPLibrary_SpawnSimpleCollision_Statics::NewProp_HitObjectClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleCombatBPLibrary_SpawnSimpleCollision_Statics::NewProp_InLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleCombatBPLibrary_SpawnSimpleCollision_Statics::NewProp_InRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleCombatBPLibrary_SpawnSimpleCollision_Statics::NewProp_GASTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleCombatBPLibrary_SpawnSimpleCollision_Statics::NewProp_HitID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleCombatBPLibrary_SpawnSimpleCollision_Statics::NewProp_HitCollisionLiftTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleCombatBPLibrary_SpawnSimpleCollision_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleCombatBPLibrary_SpawnSimpleCollision_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleCombatBPLibrary_SpawnSimpleCollision_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleCombatBPLibrary, nullptr, "SpawnSimpleCollision", nullptr, nullptr, Z_Construct_UFunction_USimpleCombatBPLibrary_SpawnSimpleCollision_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleCombatBPLibrary_SpawnSimpleCollision_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleCombatBPLibrary_SpawnSimpleCollision_Statics::SimpleCombatBPLibrary_eventSpawnSimpleCollision_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleCombatBPLibrary_SpawnSimpleCollision_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleCombatBPLibrary_SpawnSimpleCollision_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USimpleCombatBPLibrary_SpawnSimpleCollision_Statics::SimpleCombatBPLibrary_eventSpawnSimpleCollision_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USimpleCombatBPLibrary_SpawnSimpleCollision()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleCombatBPLibrary_SpawnSimpleCollision_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USimpleCombatBPLibrary::execSpawnSimpleCollision)
{
	P_GET_OBJECT(AActor,Z_Param_InSimpleCombatCharacter);
	P_GET_OBJECT(UClass,Z_Param_HitObjectClass);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_InLocation);
	P_GET_STRUCT_REF(FRotator,Z_Param_Out_InRotation);
	P_GET_STRUCT(FGameplayTag,Z_Param_GASTag);
	P_GET_PROPERTY(FIntProperty,Z_Param_HitID);
	P_GET_PROPERTY(FFloatProperty,Z_Param_HitCollisionLiftTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AHitCollision**)Z_Param__Result=USimpleCombatBPLibrary::SpawnSimpleCollision(Z_Param_InSimpleCombatCharacter,Z_Param_HitObjectClass,Z_Param_Out_InLocation,Z_Param_Out_InRotation,Z_Param_GASTag,Z_Param_HitID,Z_Param_HitCollisionLiftTime);
	P_NATIVE_END;
}
// End Class USimpleCombatBPLibrary Function SpawnSimpleCollision

// Begin Class USimpleCombatBPLibrary Function SpawnSimpleCollisionByTags
struct Z_Construct_UFunction_USimpleCombatBPLibrary_SpawnSimpleCollisionByTags_Statics
{
	struct SimpleCombatBPLibrary_eventSpawnSimpleCollisionByTags_Parms
	{
		AActor* InSimpleCombatCharacter;
		UClass* HitObjectClass;
		FVector InLocation;
		FRotator InRotation;
		TArray<FGameplayTag> BuffTags;
		FGameplayTag GASTag;
		int32 HitID;
		float HitCollisionLiftTime;
		AHitCollision* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\xb8\xa6\xe6\x9c\x89\xe6\xa0\x87\xe7\xad\xbe\xe7\x9a\x84\xe7\x94\x9f\xe6\x88\x90\n" },
#endif
		{ "CPP_Default_HitCollisionLiftTime", "4.000000" },
		{ "CPP_Default_HitID", "-1" },
		{ "ModuleRelativePath", "Public/SimpleCombatBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xb8\xa6\xe6\x9c\x89\xe6\xa0\x87\xe7\xad\xbe\xe7\x9a\x84\xe7\x94\x9f\xe6\x88\x90" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InRotation_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BuffTags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InSimpleCombatCharacter;
	static const UECodeGen_Private::FClassPropertyParams NewProp_HitObjectClass;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InRotation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BuffTags_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BuffTags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GASTag;
	static const UECodeGen_Private::FIntPropertyParams NewProp_HitID;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HitCollisionLiftTime;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USimpleCombatBPLibrary_SpawnSimpleCollisionByTags_Statics::NewProp_InSimpleCombatCharacter = { "InSimpleCombatCharacter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleCombatBPLibrary_eventSpawnSimpleCollisionByTags_Parms, InSimpleCombatCharacter), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_USimpleCombatBPLibrary_SpawnSimpleCollisionByTags_Statics::NewProp_HitObjectClass = { "HitObjectClass", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleCombatBPLibrary_eventSpawnSimpleCollisionByTags_Parms, HitObjectClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleCombatBPLibrary_SpawnSimpleCollisionByTags_Statics::NewProp_InLocation = { "InLocation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleCombatBPLibrary_eventSpawnSimpleCollisionByTags_Parms, InLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InLocation_MetaData), NewProp_InLocation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleCombatBPLibrary_SpawnSimpleCollisionByTags_Statics::NewProp_InRotation = { "InRotation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleCombatBPLibrary_eventSpawnSimpleCollisionByTags_Parms, InRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InRotation_MetaData), NewProp_InRotation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleCombatBPLibrary_SpawnSimpleCollisionByTags_Statics::NewProp_BuffTags_Inner = { "BuffTags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USimpleCombatBPLibrary_SpawnSimpleCollisionByTags_Statics::NewProp_BuffTags = { "BuffTags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleCombatBPLibrary_eventSpawnSimpleCollisionByTags_Parms, BuffTags), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BuffTags_MetaData), NewProp_BuffTags_MetaData) }; // 1298103297
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleCombatBPLibrary_SpawnSimpleCollisionByTags_Statics::NewProp_GASTag = { "GASTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleCombatBPLibrary_eventSpawnSimpleCollisionByTags_Parms, GASTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleCombatBPLibrary_SpawnSimpleCollisionByTags_Statics::NewProp_HitID = { "HitID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleCombatBPLibrary_eventSpawnSimpleCollisionByTags_Parms, HitID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleCombatBPLibrary_SpawnSimpleCollisionByTags_Statics::NewProp_HitCollisionLiftTime = { "HitCollisionLiftTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleCombatBPLibrary_eventSpawnSimpleCollisionByTags_Parms, HitCollisionLiftTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USimpleCombatBPLibrary_SpawnSimpleCollisionByTags_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleCombatBPLibrary_eventSpawnSimpleCollisionByTags_Parms, ReturnValue), Z_Construct_UClass_AHitCollision_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleCombatBPLibrary_SpawnSimpleCollisionByTags_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleCombatBPLibrary_SpawnSimpleCollisionByTags_Statics::NewProp_InSimpleCombatCharacter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleCombatBPLibrary_SpawnSimpleCollisionByTags_Statics::NewProp_HitObjectClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleCombatBPLibrary_SpawnSimpleCollisionByTags_Statics::NewProp_InLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleCombatBPLibrary_SpawnSimpleCollisionByTags_Statics::NewProp_InRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleCombatBPLibrary_SpawnSimpleCollisionByTags_Statics::NewProp_BuffTags_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleCombatBPLibrary_SpawnSimpleCollisionByTags_Statics::NewProp_BuffTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleCombatBPLibrary_SpawnSimpleCollisionByTags_Statics::NewProp_GASTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleCombatBPLibrary_SpawnSimpleCollisionByTags_Statics::NewProp_HitID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleCombatBPLibrary_SpawnSimpleCollisionByTags_Statics::NewProp_HitCollisionLiftTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleCombatBPLibrary_SpawnSimpleCollisionByTags_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleCombatBPLibrary_SpawnSimpleCollisionByTags_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleCombatBPLibrary_SpawnSimpleCollisionByTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleCombatBPLibrary, nullptr, "SpawnSimpleCollisionByTags", nullptr, nullptr, Z_Construct_UFunction_USimpleCombatBPLibrary_SpawnSimpleCollisionByTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleCombatBPLibrary_SpawnSimpleCollisionByTags_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleCombatBPLibrary_SpawnSimpleCollisionByTags_Statics::SimpleCombatBPLibrary_eventSpawnSimpleCollisionByTags_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleCombatBPLibrary_SpawnSimpleCollisionByTags_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleCombatBPLibrary_SpawnSimpleCollisionByTags_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USimpleCombatBPLibrary_SpawnSimpleCollisionByTags_Statics::SimpleCombatBPLibrary_eventSpawnSimpleCollisionByTags_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USimpleCombatBPLibrary_SpawnSimpleCollisionByTags()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleCombatBPLibrary_SpawnSimpleCollisionByTags_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USimpleCombatBPLibrary::execSpawnSimpleCollisionByTags)
{
	P_GET_OBJECT(AActor,Z_Param_InSimpleCombatCharacter);
	P_GET_OBJECT(UClass,Z_Param_HitObjectClass);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_InLocation);
	P_GET_STRUCT_REF(FRotator,Z_Param_Out_InRotation);
	P_GET_TARRAY_REF(FGameplayTag,Z_Param_Out_BuffTags);
	P_GET_STRUCT(FGameplayTag,Z_Param_GASTag);
	P_GET_PROPERTY(FIntProperty,Z_Param_HitID);
	P_GET_PROPERTY(FFloatProperty,Z_Param_HitCollisionLiftTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AHitCollision**)Z_Param__Result=USimpleCombatBPLibrary::SpawnSimpleCollisionByTags(Z_Param_InSimpleCombatCharacter,Z_Param_HitObjectClass,Z_Param_Out_InLocation,Z_Param_Out_InRotation,Z_Param_Out_BuffTags,Z_Param_GASTag,Z_Param_HitID,Z_Param_HitCollisionLiftTime);
	P_NATIVE_END;
}
// End Class USimpleCombatBPLibrary Function SpawnSimpleCollisionByTags

// Begin Class USimpleCombatBPLibrary
void USimpleCombatBPLibrary::StaticRegisterNativesUSimpleCombatBPLibrary()
{
	UClass* Class = USimpleCombatBPLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ComboPlay", &USimpleCombatBPLibrary::execComboPlay },
		{ "ComboTextDestroy", &USimpleCombatBPLibrary::execComboTextDestroy },
		{ "GetCaster", &USimpleCombatBPLibrary::execGetCaster },
		{ "PlayMontage", &USimpleCombatBPLibrary::execPlayMontage },
		{ "SpawnCollision", &USimpleCombatBPLibrary::execSpawnCollision },
		{ "SpawnResidualShadow", &USimpleCombatBPLibrary::execSpawnResidualShadow },
		{ "SpawnSimpleCollision", &USimpleCombatBPLibrary::execSpawnSimpleCollision },
		{ "SpawnSimpleCollisionByTags", &USimpleCombatBPLibrary::execSpawnSimpleCollisionByTags },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USimpleCombatBPLibrary);
UClass* Z_Construct_UClass_USimpleCombatBPLibrary_NoRegister()
{
	return USimpleCombatBPLibrary::StaticClass();
}
struct Z_Construct_UClass_USimpleCombatBPLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SimpleCombatBPLibrary.h" },
		{ "ModuleRelativePath", "Public/SimpleCombatBPLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USimpleCombatBPLibrary_ComboPlay, "ComboPlay" }, // 3365301115
		{ &Z_Construct_UFunction_USimpleCombatBPLibrary_ComboTextDestroy, "ComboTextDestroy" }, // 2097977977
		{ &Z_Construct_UFunction_USimpleCombatBPLibrary_GetCaster, "GetCaster" }, // 3885744793
		{ &Z_Construct_UFunction_USimpleCombatBPLibrary_PlayMontage, "PlayMontage" }, // 2049539361
		{ &Z_Construct_UFunction_USimpleCombatBPLibrary_SpawnCollision, "SpawnCollision" }, // 2317789526
		{ &Z_Construct_UFunction_USimpleCombatBPLibrary_SpawnResidualShadow, "SpawnResidualShadow" }, // 3849711161
		{ &Z_Construct_UFunction_USimpleCombatBPLibrary_SpawnSimpleCollision, "SpawnSimpleCollision" }, // 1750135952
		{ &Z_Construct_UFunction_USimpleCombatBPLibrary_SpawnSimpleCollisionByTags, "SpawnSimpleCollisionByTags" }, // 2874426162
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USimpleCombatBPLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USimpleCombatBPLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_SimpleCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleCombatBPLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USimpleCombatBPLibrary_Statics::ClassParams = {
	&USimpleCombatBPLibrary::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleCombatBPLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_USimpleCombatBPLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USimpleCombatBPLibrary()
{
	if (!Z_Registration_Info_UClass_USimpleCombatBPLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USimpleCombatBPLibrary.OuterSingleton, Z_Construct_UClass_USimpleCombatBPLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USimpleCombatBPLibrary.OuterSingleton;
}
template<> SIMPLECOMBAT_API UClass* StaticClass<USimpleCombatBPLibrary>()
{
	return USimpleCombatBPLibrary::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USimpleCombatBPLibrary);
USimpleCombatBPLibrary::~USimpleCombatBPLibrary() {}
// End Class USimpleCombatBPLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_SimpleCombatBPLibrary_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USimpleCombatBPLibrary, USimpleCombatBPLibrary::StaticClass, TEXT("USimpleCombatBPLibrary"), &Z_Registration_Info_UClass_USimpleCombatBPLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USimpleCombatBPLibrary), 3965127080U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_SimpleCombatBPLibrary_h_2917756547(TEXT("/Script/SimpleCombat"),
	Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_SimpleCombatBPLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_SimpleCombatBPLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
