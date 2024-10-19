// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleCombat/Public/Actor/ResidualShadowActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeResidualShadowActor() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UPoseableMeshComponent_NoRegister();
SIMPLECOMBAT_API UClass* Z_Construct_UClass_AResidualShadowActor();
SIMPLECOMBAT_API UClass* Z_Construct_UClass_AResidualShadowActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_SimpleCombat();
// End Cross Module References

// Begin Class AResidualShadowActor
void AResidualShadowActor::StaticRegisterNativesAResidualShadowActor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AResidualShadowActor);
UClass* Z_Construct_UClass_AResidualShadowActor_NoRegister()
{
	return AResidualShadowActor::StaticClass();
}
struct Z_Construct_UClass_AResidualShadowActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Actor/ResidualShadowActor.h" },
		{ "ModuleRelativePath", "Public/Actor/ResidualShadowActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResidualShadowComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "ResidualShadow" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actor/ResidualShadowActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ResidualShadowComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AResidualShadowActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AResidualShadowActor_Statics::NewProp_ResidualShadowComponent = { "ResidualShadowComponent", nullptr, (EPropertyFlags)0x01440000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AResidualShadowActor, ResidualShadowComponent), Z_Construct_UClass_UPoseableMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResidualShadowComponent_MetaData), NewProp_ResidualShadowComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AResidualShadowActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AResidualShadowActor_Statics::NewProp_ResidualShadowComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AResidualShadowActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AResidualShadowActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_SimpleCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AResidualShadowActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AResidualShadowActor_Statics::ClassParams = {
	&AResidualShadowActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AResidualShadowActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AResidualShadowActor_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AResidualShadowActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AResidualShadowActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AResidualShadowActor()
{
	if (!Z_Registration_Info_UClass_AResidualShadowActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AResidualShadowActor.OuterSingleton, Z_Construct_UClass_AResidualShadowActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AResidualShadowActor.OuterSingleton;
}
template<> SIMPLECOMBAT_API UClass* StaticClass<AResidualShadowActor>()
{
	return AResidualShadowActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AResidualShadowActor);
AResidualShadowActor::~AResidualShadowActor() {}
// End Class AResidualShadowActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_Actor_ResidualShadowActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AResidualShadowActor, AResidualShadowActor::StaticClass, TEXT("AResidualShadowActor"), &Z_Registration_Info_UClass_AResidualShadowActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AResidualShadowActor), 1428282016U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_Actor_ResidualShadowActor_h_1071402022(TEXT("/Script/SimpleCombat"),
	Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_Actor_ResidualShadowActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_Actor_ResidualShadowActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
