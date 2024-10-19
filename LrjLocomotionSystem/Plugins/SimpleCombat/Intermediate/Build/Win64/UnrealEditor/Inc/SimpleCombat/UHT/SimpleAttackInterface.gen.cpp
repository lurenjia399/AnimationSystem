// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleCombat/Public/CombatInterface/SimpleAttackInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimpleAttackInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
SIMPLECOMBAT_API UClass* Z_Construct_UClass_USimpleAttackInterface();
SIMPLECOMBAT_API UClass* Z_Construct_UClass_USimpleAttackInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_SimpleCombat();
// End Cross Module References

// Begin Interface USimpleAttackInterface
void USimpleAttackInterface::StaticRegisterNativesUSimpleAttackInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USimpleAttackInterface);
UClass* Z_Construct_UClass_USimpleAttackInterface_NoRegister()
{
	return USimpleAttackInterface::StaticClass();
}
struct Z_Construct_UClass_USimpleAttackInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CombatInterface/SimpleAttackInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ISimpleAttackInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USimpleAttackInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_SimpleCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleAttackInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USimpleAttackInterface_Statics::ClassParams = {
	&USimpleAttackInterface::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleAttackInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_USimpleAttackInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USimpleAttackInterface()
{
	if (!Z_Registration_Info_UClass_USimpleAttackInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USimpleAttackInterface.OuterSingleton, Z_Construct_UClass_USimpleAttackInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USimpleAttackInterface.OuterSingleton;
}
template<> SIMPLECOMBAT_API UClass* StaticClass<USimpleAttackInterface>()
{
	return USimpleAttackInterface::StaticClass();
}
USimpleAttackInterface::USimpleAttackInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USimpleAttackInterface);
USimpleAttackInterface::~USimpleAttackInterface() {}
// End Interface USimpleAttackInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_CombatInterface_SimpleAttackInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USimpleAttackInterface, USimpleAttackInterface::StaticClass, TEXT("USimpleAttackInterface"), &Z_Registration_Info_UClass_USimpleAttackInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USimpleAttackInterface), 2035664588U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_CombatInterface_SimpleAttackInterface_h_1120250058(TEXT("/Script/SimpleCombat"),
	Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_CombatInterface_SimpleAttackInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_CombatInterface_SimpleAttackInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
