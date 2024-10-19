// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleCombat/Public/CombatInterface/SimpleHitCollisionInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimpleHitCollisionInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
SIMPLECOMBAT_API UClass* Z_Construct_UClass_USimpleHitCollisionInterface();
SIMPLECOMBAT_API UClass* Z_Construct_UClass_USimpleHitCollisionInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_SimpleCombat();
// End Cross Module References

// Begin Interface USimpleHitCollisionInterface
void USimpleHitCollisionInterface::StaticRegisterNativesUSimpleHitCollisionInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USimpleHitCollisionInterface);
UClass* Z_Construct_UClass_USimpleHitCollisionInterface_NoRegister()
{
	return USimpleHitCollisionInterface::StaticClass();
}
struct Z_Construct_UClass_USimpleHitCollisionInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CombatInterface/SimpleHitCollisionInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ISimpleHitCollisionInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USimpleHitCollisionInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_SimpleCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleHitCollisionInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USimpleHitCollisionInterface_Statics::ClassParams = {
	&USimpleHitCollisionInterface::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleHitCollisionInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_USimpleHitCollisionInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USimpleHitCollisionInterface()
{
	if (!Z_Registration_Info_UClass_USimpleHitCollisionInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USimpleHitCollisionInterface.OuterSingleton, Z_Construct_UClass_USimpleHitCollisionInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USimpleHitCollisionInterface.OuterSingleton;
}
template<> SIMPLECOMBAT_API UClass* StaticClass<USimpleHitCollisionInterface>()
{
	return USimpleHitCollisionInterface::StaticClass();
}
USimpleHitCollisionInterface::USimpleHitCollisionInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USimpleHitCollisionInterface);
USimpleHitCollisionInterface::~USimpleHitCollisionInterface() {}
// End Interface USimpleHitCollisionInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_CombatInterface_SimpleHitCollisionInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USimpleHitCollisionInterface, USimpleHitCollisionInterface::StaticClass, TEXT("USimpleHitCollisionInterface"), &Z_Registration_Info_UClass_USimpleHitCollisionInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USimpleHitCollisionInterface), 142140339U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_CombatInterface_SimpleHitCollisionInterface_h_411194797(TEXT("/Script/SimpleCombat"),
	Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_CombatInterface_SimpleHitCollisionInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_CombatInterface_SimpleHitCollisionInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
