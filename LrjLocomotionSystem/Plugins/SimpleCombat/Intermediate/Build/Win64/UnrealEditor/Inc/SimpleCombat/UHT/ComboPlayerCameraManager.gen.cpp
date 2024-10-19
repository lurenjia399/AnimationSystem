// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleCombat/Public/Object/Camera/ComboPlayerCameraManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeComboPlayerCameraManager() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APlayerCameraManager();
SIMPLECOMBAT_API UClass* Z_Construct_UClass_AComboPlayerCameraManager();
SIMPLECOMBAT_API UClass* Z_Construct_UClass_AComboPlayerCameraManager_NoRegister();
UPackage* Z_Construct_UPackage__Script_SimpleCombat();
// End Cross Module References

// Begin Class AComboPlayerCameraManager
void AComboPlayerCameraManager::StaticRegisterNativesAComboPlayerCameraManager()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AComboPlayerCameraManager);
UClass* Z_Construct_UClass_AComboPlayerCameraManager_NoRegister()
{
	return AComboPlayerCameraManager::StaticClass();
}
struct Z_Construct_UClass_AComboPlayerCameraManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Object/Camera/ComboPlayerCameraManager.h" },
		{ "ModuleRelativePath", "Public/Object/Camera/ComboPlayerCameraManager.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AComboPlayerCameraManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AComboPlayerCameraManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerCameraManager,
	(UObject* (*)())Z_Construct_UPackage__Script_SimpleCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AComboPlayerCameraManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AComboPlayerCameraManager_Statics::ClassParams = {
	&AComboPlayerCameraManager::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AComboPlayerCameraManager_Statics::Class_MetaDataParams), Z_Construct_UClass_AComboPlayerCameraManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AComboPlayerCameraManager()
{
	if (!Z_Registration_Info_UClass_AComboPlayerCameraManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AComboPlayerCameraManager.OuterSingleton, Z_Construct_UClass_AComboPlayerCameraManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AComboPlayerCameraManager.OuterSingleton;
}
template<> SIMPLECOMBAT_API UClass* StaticClass<AComboPlayerCameraManager>()
{
	return AComboPlayerCameraManager::StaticClass();
}
AComboPlayerCameraManager::AComboPlayerCameraManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AComboPlayerCameraManager);
AComboPlayerCameraManager::~AComboPlayerCameraManager() {}
// End Class AComboPlayerCameraManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_Object_Camera_ComboPlayerCameraManager_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AComboPlayerCameraManager, AComboPlayerCameraManager::StaticClass, TEXT("AComboPlayerCameraManager"), &Z_Registration_Info_UClass_AComboPlayerCameraManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AComboPlayerCameraManager), 2636575720U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_Object_Camera_ComboPlayerCameraManager_h_1907362301(TEXT("/Script/SimpleCombat"),
	Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_Object_Camera_ComboPlayerCameraManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_Object_Camera_ComboPlayerCameraManager_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
