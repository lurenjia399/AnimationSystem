// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleAIBehaviorTreeExtend/Public/Interface/SAIBTAIInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSAIBTAIInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
SIMPLEAIBEHAVIORTREEEXTEND_API UClass* Z_Construct_UClass_USAIBTAIInterface();
SIMPLEAIBEHAVIORTREEEXTEND_API UClass* Z_Construct_UClass_USAIBTAIInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_SimpleAIBehaviorTreeExtend();
// End Cross Module References

// Begin Interface USAIBTAIInterface
void USAIBTAIInterface::StaticRegisterNativesUSAIBTAIInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USAIBTAIInterface);
UClass* Z_Construct_UClass_USAIBTAIInterface_NoRegister()
{
	return USAIBTAIInterface::StaticClass();
}
struct Z_Construct_UClass_USAIBTAIInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Interface/SAIBTAIInterface.h" },
		{ "NotBlueprintable", "" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ISAIBTAIInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USAIBTAIInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_SimpleAIBehaviorTreeExtend,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USAIBTAIInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USAIBTAIInterface_Statics::ClassParams = {
	&USAIBTAIInterface::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USAIBTAIInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_USAIBTAIInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USAIBTAIInterface()
{
	if (!Z_Registration_Info_UClass_USAIBTAIInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USAIBTAIInterface.OuterSingleton, Z_Construct_UClass_USAIBTAIInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USAIBTAIInterface.OuterSingleton;
}
template<> SIMPLEAIBEHAVIORTREEEXTEND_API UClass* StaticClass<USAIBTAIInterface>()
{
	return USAIBTAIInterface::StaticClass();
}
USAIBTAIInterface::USAIBTAIInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USAIBTAIInterface);
USAIBTAIInterface::~USAIBTAIInterface() {}
// End Interface USAIBTAIInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleAIBehaviorTreeExtend_Source_SimpleAIBehaviorTreeExtend_Public_Interface_SAIBTAIInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USAIBTAIInterface, USAIBTAIInterface::StaticClass, TEXT("USAIBTAIInterface"), &Z_Registration_Info_UClass_USAIBTAIInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USAIBTAIInterface), 511627398U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleAIBehaviorTreeExtend_Source_SimpleAIBehaviorTreeExtend_Public_Interface_SAIBTAIInterface_h_3511814661(TEXT("/Script/SimpleAIBehaviorTreeExtend"),
	Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleAIBehaviorTreeExtend_Source_SimpleAIBehaviorTreeExtend_Public_Interface_SAIBTAIInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleAIBehaviorTreeExtend_Source_SimpleAIBehaviorTreeExtend_Public_Interface_SAIBTAIInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
