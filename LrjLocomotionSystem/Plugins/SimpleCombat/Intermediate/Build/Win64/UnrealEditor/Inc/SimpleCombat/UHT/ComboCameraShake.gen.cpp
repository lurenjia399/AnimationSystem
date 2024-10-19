// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleCombat/Public/Object/Camera/ComboCameraShake.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeComboCameraShake() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UCameraShakeBase();
SIMPLECOMBAT_API UClass* Z_Construct_UClass_UComboCameraShake();
SIMPLECOMBAT_API UClass* Z_Construct_UClass_UComboCameraShake_NoRegister();
UPackage* Z_Construct_UPackage__Script_SimpleCombat();
// End Cross Module References

// Begin Class UComboCameraShake
void UComboCameraShake::StaticRegisterNativesUComboCameraShake()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UComboCameraShake);
UClass* Z_Construct_UClass_UComboCameraShake_NoRegister()
{
	return UComboCameraShake::StaticClass();
}
struct Z_Construct_UClass_UComboCameraShake_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Object/Camera/ComboCameraShake.h" },
		{ "ModuleRelativePath", "Public/Object/Camera/ComboCameraShake.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UComboCameraShake>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UComboCameraShake_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCameraShakeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_SimpleCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UComboCameraShake_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UComboCameraShake_Statics::ClassParams = {
	&UComboCameraShake::StaticClass,
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
	0x009010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UComboCameraShake_Statics::Class_MetaDataParams), Z_Construct_UClass_UComboCameraShake_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UComboCameraShake()
{
	if (!Z_Registration_Info_UClass_UComboCameraShake.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UComboCameraShake.OuterSingleton, Z_Construct_UClass_UComboCameraShake_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UComboCameraShake.OuterSingleton;
}
template<> SIMPLECOMBAT_API UClass* StaticClass<UComboCameraShake>()
{
	return UComboCameraShake::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UComboCameraShake);
UComboCameraShake::~UComboCameraShake() {}
// End Class UComboCameraShake

// Begin Registration
struct Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_Object_Camera_ComboCameraShake_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UComboCameraShake, UComboCameraShake::StaticClass, TEXT("UComboCameraShake"), &Z_Registration_Info_UClass_UComboCameraShake, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UComboCameraShake), 1288872340U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_Object_Camera_ComboCameraShake_h_1910162062(TEXT("/Script/SimpleCombat"),
	Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_Object_Camera_ComboCameraShake_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_Object_Camera_ComboCameraShake_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
