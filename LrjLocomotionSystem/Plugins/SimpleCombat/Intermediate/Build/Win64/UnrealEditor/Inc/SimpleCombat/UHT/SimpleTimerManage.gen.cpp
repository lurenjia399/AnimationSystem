// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleCombat/Public/Timer/SimpleTimerManage.h"
#include "SimpleCombat/Public/Timer/SimpleTimerObject.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimpleTimerManage() {}

// Begin Cross Module References
SIMPLECOMBAT_API UScriptStruct* Z_Construct_UScriptStruct_FSimpleTimerManage();
SIMPLECOMBAT_API UScriptStruct* Z_Construct_UScriptStruct_FSimpleTimerObject();
UPackage* Z_Construct_UPackage__Script_SimpleCombat();
// End Cross Module References

// Begin ScriptStruct FSimpleTimerManage
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SimpleTimerManage;
class UScriptStruct* FSimpleTimerManage::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SimpleTimerManage.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SimpleTimerManage.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSimpleTimerManage, (UObject*)Z_Construct_UPackage__Script_SimpleCombat(), TEXT("SimpleTimerManage"));
	}
	return Z_Registration_Info_UScriptStruct_SimpleTimerManage.OuterSingleton;
}
template<> SIMPLECOMBAT_API UScriptStruct* StaticStruct<FSimpleTimerManage>()
{
	return FSimpleTimerManage::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSimpleTimerManage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Timer/SimpleTimerManage.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimerObjects_MetaData[] = {
		{ "ModuleRelativePath", "Public/Timer/SimpleTimerManage.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TimerObjects_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TimerObjects;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSimpleTimerManage>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSimpleTimerManage_Statics::NewProp_TimerObjects_Inner = { "TimerObjects", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSimpleTimerObject, METADATA_PARAMS(0, nullptr) }; // 2089474521
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSimpleTimerManage_Statics::NewProp_TimerObjects = { "TimerObjects", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSimpleTimerManage, TimerObjects), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimerObjects_MetaData), NewProp_TimerObjects_MetaData) }; // 2089474521
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSimpleTimerManage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleTimerManage_Statics::NewProp_TimerObjects_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleTimerManage_Statics::NewProp_TimerObjects,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleTimerManage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSimpleTimerManage_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SimpleCombat,
	nullptr,
	&NewStructOps,
	"SimpleTimerManage",
	Z_Construct_UScriptStruct_FSimpleTimerManage_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleTimerManage_Statics::PropPointers),
	sizeof(FSimpleTimerManage),
	alignof(FSimpleTimerManage),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleTimerManage_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSimpleTimerManage_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSimpleTimerManage()
{
	if (!Z_Registration_Info_UScriptStruct_SimpleTimerManage.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SimpleTimerManage.InnerSingleton, Z_Construct_UScriptStruct_FSimpleTimerManage_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SimpleTimerManage.InnerSingleton;
}
// End ScriptStruct FSimpleTimerManage

// Begin Registration
struct Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_Timer_SimpleTimerManage_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSimpleTimerManage::StaticStruct, Z_Construct_UScriptStruct_FSimpleTimerManage_Statics::NewStructOps, TEXT("SimpleTimerManage"), &Z_Registration_Info_UScriptStruct_SimpleTimerManage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSimpleTimerManage), 2184403455U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_Timer_SimpleTimerManage_h_616696941(TEXT("/Script/SimpleCombat"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_Timer_SimpleTimerManage_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_Timer_SimpleTimerManage_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
