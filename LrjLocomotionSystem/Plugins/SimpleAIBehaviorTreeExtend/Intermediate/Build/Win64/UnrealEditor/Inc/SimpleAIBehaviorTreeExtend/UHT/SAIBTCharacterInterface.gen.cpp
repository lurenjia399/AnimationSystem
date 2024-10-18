// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleAIBehaviorTreeExtend/Public/Interface/SAIBTCharacterInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSAIBTCharacterInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
SIMPLEAIBEHAVIORTREEEXTEND_API UClass* Z_Construct_UClass_USAIBTCharacterInterface();
SIMPLEAIBEHAVIORTREEEXTEND_API UClass* Z_Construct_UClass_USAIBTCharacterInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_SimpleAIBehaviorTreeExtend();
// End Cross Module References

// Begin Interface USAIBTCharacterInterface
void USAIBTCharacterInterface::StaticRegisterNativesUSAIBTCharacterInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USAIBTCharacterInterface);
UClass* Z_Construct_UClass_USAIBTCharacterInterface_NoRegister()
{
	return USAIBTCharacterInterface::StaticClass();
}
struct Z_Construct_UClass_USAIBTCharacterInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Interface/SAIBTCharacterInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ISAIBTCharacterInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USAIBTCharacterInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_SimpleAIBehaviorTreeExtend,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USAIBTCharacterInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USAIBTCharacterInterface_Statics::ClassParams = {
	&USAIBTCharacterInterface::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USAIBTCharacterInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_USAIBTCharacterInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USAIBTCharacterInterface()
{
	if (!Z_Registration_Info_UClass_USAIBTCharacterInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USAIBTCharacterInterface.OuterSingleton, Z_Construct_UClass_USAIBTCharacterInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USAIBTCharacterInterface.OuterSingleton;
}
template<> SIMPLEAIBEHAVIORTREEEXTEND_API UClass* StaticClass<USAIBTCharacterInterface>()
{
	return USAIBTCharacterInterface::StaticClass();
}
USAIBTCharacterInterface::USAIBTCharacterInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USAIBTCharacterInterface);
USAIBTCharacterInterface::~USAIBTCharacterInterface() {}
// End Interface USAIBTCharacterInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleAIBehaviorTreeExtend_Source_SimpleAIBehaviorTreeExtend_Public_Interface_SAIBTCharacterInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USAIBTCharacterInterface, USAIBTCharacterInterface::StaticClass, TEXT("USAIBTCharacterInterface"), &Z_Registration_Info_UClass_USAIBTCharacterInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USAIBTCharacterInterface), 1192734751U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleAIBehaviorTreeExtend_Source_SimpleAIBehaviorTreeExtend_Public_Interface_SAIBTCharacterInterface_h_886707532(TEXT("/Script/SimpleAIBehaviorTreeExtend"),
	Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleAIBehaviorTreeExtend_Source_SimpleAIBehaviorTreeExtend_Public_Interface_SAIBTCharacterInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleAIBehaviorTreeExtend_Source_SimpleAIBehaviorTreeExtend_Public_Interface_SAIBTCharacterInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
