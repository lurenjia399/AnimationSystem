// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleCombat/Public/Timer/SimpleTimerObject.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimpleTimerObject() {}

// Begin Cross Module References
SIMPLECOMBAT_API UScriptStruct* Z_Construct_UScriptStruct_FSimpleTimerObject();
UPackage* Z_Construct_UPackage__Script_SimpleCombat();
// End Cross Module References

// Begin ScriptStruct FSimpleTimerObject
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SimpleTimerObject;
class UScriptStruct* FSimpleTimerObject::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SimpleTimerObject.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SimpleTimerObject.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSimpleTimerObject, (UObject*)Z_Construct_UPackage__Script_SimpleCombat(), TEXT("SimpleTimerObject"));
	}
	return Z_Registration_Info_UScriptStruct_SimpleTimerObject.OuterSingleton;
}
template<> SIMPLECOMBAT_API UScriptStruct* StaticStruct<FSimpleTimerObject>()
{
	return FSimpleTimerObject::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSimpleTimerObject_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Timer/SimpleTimerObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDebug_MetaData[] = {
		{ "ModuleRelativePath", "Public/Timer/SimpleTimerObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[] = {
		{ "ModuleRelativePath", "Public/Timer/SimpleTimerObject.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bDebug_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDebug;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Time;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSimpleTimerObject>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FSimpleTimerObject_Statics::NewProp_bDebug_SetBit(void* Obj)
{
	((FSimpleTimerObject*)Obj)->bDebug = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSimpleTimerObject_Statics::NewProp_bDebug = { "bDebug", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSimpleTimerObject), &Z_Construct_UScriptStruct_FSimpleTimerObject_Statics::NewProp_bDebug_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDebug_MetaData), NewProp_bDebug_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSimpleTimerObject_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSimpleTimerObject, Time), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Time_MetaData), NewProp_Time_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSimpleTimerObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleTimerObject_Statics::NewProp_bDebug,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleTimerObject_Statics::NewProp_Time,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleTimerObject_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSimpleTimerObject_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SimpleCombat,
	nullptr,
	&NewStructOps,
	"SimpleTimerObject",
	Z_Construct_UScriptStruct_FSimpleTimerObject_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleTimerObject_Statics::PropPointers),
	sizeof(FSimpleTimerObject),
	alignof(FSimpleTimerObject),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleTimerObject_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSimpleTimerObject_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSimpleTimerObject()
{
	if (!Z_Registration_Info_UScriptStruct_SimpleTimerObject.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SimpleTimerObject.InnerSingleton, Z_Construct_UScriptStruct_FSimpleTimerObject_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SimpleTimerObject.InnerSingleton;
}
// End ScriptStruct FSimpleTimerObject

// Begin Registration
struct Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_Timer_SimpleTimerObject_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSimpleTimerObject::StaticStruct, Z_Construct_UScriptStruct_FSimpleTimerObject_Statics::NewStructOps, TEXT("SimpleTimerObject"), &Z_Registration_Info_UScriptStruct_SimpleTimerObject, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSimpleTimerObject), 2089474521U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_Timer_SimpleTimerObject_h_91913743(TEXT("/Script/SimpleCombat"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_Timer_SimpleTimerObject_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_Timer_SimpleTimerObject_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
