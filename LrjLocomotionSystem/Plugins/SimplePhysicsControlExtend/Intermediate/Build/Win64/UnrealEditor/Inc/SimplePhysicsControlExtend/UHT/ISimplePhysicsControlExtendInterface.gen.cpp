// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimplePhysicsControlExtend/Public/Interface/ISimplePhysicsControlExtendInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeISimplePhysicsControlExtendInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
SIMPLEPHYSICSCONTROLEXTEND_API UClass* Z_Construct_UClass_USimplePhysicsControlExtendInterface();
SIMPLEPHYSICSCONTROLEXTEND_API UClass* Z_Construct_UClass_USimplePhysicsControlExtendInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_SimplePhysicsControlExtend();
// End Cross Module References

// Begin Interface USimplePhysicsControlExtendInterface
void USimplePhysicsControlExtendInterface::StaticRegisterNativesUSimplePhysicsControlExtendInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USimplePhysicsControlExtendInterface);
UClass* Z_Construct_UClass_USimplePhysicsControlExtendInterface_NoRegister()
{
	return USimplePhysicsControlExtendInterface::StaticClass();
}
struct Z_Construct_UClass_USimplePhysicsControlExtendInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Interface/ISimplePhysicsControlExtendInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ISimplePhysicsControlExtendInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USimplePhysicsControlExtendInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_SimplePhysicsControlExtend,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USimplePhysicsControlExtendInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USimplePhysicsControlExtendInterface_Statics::ClassParams = {
	&USimplePhysicsControlExtendInterface::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimplePhysicsControlExtendInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_USimplePhysicsControlExtendInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USimplePhysicsControlExtendInterface()
{
	if (!Z_Registration_Info_UClass_USimplePhysicsControlExtendInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USimplePhysicsControlExtendInterface.OuterSingleton, Z_Construct_UClass_USimplePhysicsControlExtendInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USimplePhysicsControlExtendInterface.OuterSingleton;
}
template<> SIMPLEPHYSICSCONTROLEXTEND_API UClass* StaticClass<USimplePhysicsControlExtendInterface>()
{
	return USimplePhysicsControlExtendInterface::StaticClass();
}
USimplePhysicsControlExtendInterface::USimplePhysicsControlExtendInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USimplePhysicsControlExtendInterface);
USimplePhysicsControlExtendInterface::~USimplePhysicsControlExtendInterface() {}
// End Interface USimplePhysicsControlExtendInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimplePhysicsControlExtend_Source_SimplePhysicsControlExtend_Public_Interface_ISimplePhysicsControlExtendInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USimplePhysicsControlExtendInterface, USimplePhysicsControlExtendInterface::StaticClass, TEXT("USimplePhysicsControlExtendInterface"), &Z_Registration_Info_UClass_USimplePhysicsControlExtendInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USimplePhysicsControlExtendInterface), 3026983189U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimplePhysicsControlExtend_Source_SimplePhysicsControlExtend_Public_Interface_ISimplePhysicsControlExtendInterface_h_2603089275(TEXT("/Script/SimplePhysicsControlExtend"),
	Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimplePhysicsControlExtend_Source_SimplePhysicsControlExtend_Public_Interface_ISimplePhysicsControlExtendInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimplePhysicsControlExtend_Source_SimplePhysicsControlExtend_Public_Interface_ISimplePhysicsControlExtendInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
