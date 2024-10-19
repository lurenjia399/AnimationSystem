// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleCombat/Public/Hit/ComboSkillHitBox.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeComboSkillHitBox() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
SIMPLECOMBAT_API UClass* Z_Construct_UClass_AHitBoxCollision();
SIMPLECOMBAT_API UClass* Z_Construct_UClass_AHitBoxCollision_NoRegister();
SIMPLECOMBAT_API UClass* Z_Construct_UClass_AHitCollision();
UPackage* Z_Construct_UPackage__Script_SimpleCombat();
// End Cross Module References

// Begin Class AHitBoxCollision
void AHitBoxCollision::StaticRegisterNativesAHitBoxCollision()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AHitBoxCollision);
UClass* Z_Construct_UClass_AHitBoxCollision_NoRegister()
{
	return AHitBoxCollision::StaticClass();
}
struct Z_Construct_UClass_AHitBoxCollision_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Hit/ComboSkillHitBox.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Hit/ComboSkillHitBox.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitDamage_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "BaseAttrubute" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe7\xa2\xb0\xe6\x92\x9e\xe7\x9b\x92\xe5\xad\x90\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Hit/ComboSkillHitBox.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\xa2\xb0\xe6\x92\x9e\xe7\x9b\x92\xe5\xad\x90" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HitDamage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHitBoxCollision>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHitBoxCollision_Statics::NewProp_HitDamage = { "HitDamage", nullptr, (EPropertyFlags)0x01440000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHitBoxCollision, HitDamage), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitDamage_MetaData), NewProp_HitDamage_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHitBoxCollision_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHitBoxCollision_Statics::NewProp_HitDamage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHitBoxCollision_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AHitBoxCollision_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AHitCollision,
	(UObject* (*)())Z_Construct_UPackage__Script_SimpleCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHitBoxCollision_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AHitBoxCollision_Statics::ClassParams = {
	&AHitBoxCollision::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AHitBoxCollision_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AHitBoxCollision_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHitBoxCollision_Statics::Class_MetaDataParams), Z_Construct_UClass_AHitBoxCollision_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AHitBoxCollision()
{
	if (!Z_Registration_Info_UClass_AHitBoxCollision.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AHitBoxCollision.OuterSingleton, Z_Construct_UClass_AHitBoxCollision_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AHitBoxCollision.OuterSingleton;
}
template<> SIMPLECOMBAT_API UClass* StaticClass<AHitBoxCollision>()
{
	return AHitBoxCollision::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AHitBoxCollision);
AHitBoxCollision::~AHitBoxCollision() {}
// End Class AHitBoxCollision

// Begin Registration
struct Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_Hit_ComboSkillHitBox_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AHitBoxCollision, AHitBoxCollision::StaticClass, TEXT("AHitBoxCollision"), &Z_Registration_Info_UClass_AHitBoxCollision, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHitBoxCollision), 741500059U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_Hit_ComboSkillHitBox_h_3446716700(TEXT("/Script/SimpleCombat"),
	Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_Hit_ComboSkillHitBox_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_Hit_ComboSkillHitBox_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
