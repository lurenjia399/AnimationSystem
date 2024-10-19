// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleGameplayAbilitiesExtend/Public/Interface/ISimpleGameplayAbilitiesExtendInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeISimpleGameplayAbilitiesExtendInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
SIMPLEGAMEPLAYABILITIESEXTEND_API UClass* Z_Construct_UClass_USimpleGameplayAbilitiesExtendInterface();
SIMPLEGAMEPLAYABILITIESEXTEND_API UClass* Z_Construct_UClass_USimpleGameplayAbilitiesExtendInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_SimpleGameplayAbilitiesExtend();
// End Cross Module References

// Begin Interface USimpleGameplayAbilitiesExtendInterface
void USimpleGameplayAbilitiesExtendInterface::StaticRegisterNativesUSimpleGameplayAbilitiesExtendInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USimpleGameplayAbilitiesExtendInterface);
UClass* Z_Construct_UClass_USimpleGameplayAbilitiesExtendInterface_NoRegister()
{
	return USimpleGameplayAbilitiesExtendInterface::StaticClass();
}
struct Z_Construct_UClass_USimpleGameplayAbilitiesExtendInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Interface/ISimpleGameplayAbilitiesExtendInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ISimpleGameplayAbilitiesExtendInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USimpleGameplayAbilitiesExtendInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_SimpleGameplayAbilitiesExtend,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleGameplayAbilitiesExtendInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USimpleGameplayAbilitiesExtendInterface_Statics::ClassParams = {
	&USimpleGameplayAbilitiesExtendInterface::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleGameplayAbilitiesExtendInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_USimpleGameplayAbilitiesExtendInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USimpleGameplayAbilitiesExtendInterface()
{
	if (!Z_Registration_Info_UClass_USimpleGameplayAbilitiesExtendInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USimpleGameplayAbilitiesExtendInterface.OuterSingleton, Z_Construct_UClass_USimpleGameplayAbilitiesExtendInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USimpleGameplayAbilitiesExtendInterface.OuterSingleton;
}
template<> SIMPLEGAMEPLAYABILITIESEXTEND_API UClass* StaticClass<USimpleGameplayAbilitiesExtendInterface>()
{
	return USimpleGameplayAbilitiesExtendInterface::StaticClass();
}
USimpleGameplayAbilitiesExtendInterface::USimpleGameplayAbilitiesExtendInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USimpleGameplayAbilitiesExtendInterface);
USimpleGameplayAbilitiesExtendInterface::~USimpleGameplayAbilitiesExtendInterface() {}
// End Interface USimpleGameplayAbilitiesExtendInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleGameplayAbilitiesExtend_Source_SimpleGameplayAbilitiesExtend_Public_Interface_ISimpleGameplayAbilitiesExtendInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USimpleGameplayAbilitiesExtendInterface, USimpleGameplayAbilitiesExtendInterface::StaticClass, TEXT("USimpleGameplayAbilitiesExtendInterface"), &Z_Registration_Info_UClass_USimpleGameplayAbilitiesExtendInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USimpleGameplayAbilitiesExtendInterface), 2340008704U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleGameplayAbilitiesExtend_Source_SimpleGameplayAbilitiesExtend_Public_Interface_ISimpleGameplayAbilitiesExtendInterface_h_1646871759(TEXT("/Script/SimpleGameplayAbilitiesExtend"),
	Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleGameplayAbilitiesExtend_Source_SimpleGameplayAbilitiesExtend_Public_Interface_ISimpleGameplayAbilitiesExtendInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleGameplayAbilitiesExtend_Source_SimpleGameplayAbilitiesExtend_Public_Interface_ISimpleGameplayAbilitiesExtendInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
