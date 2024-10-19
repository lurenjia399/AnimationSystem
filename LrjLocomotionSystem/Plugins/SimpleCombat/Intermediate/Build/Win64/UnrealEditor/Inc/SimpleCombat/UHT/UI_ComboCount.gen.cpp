// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleCombat/Public/UMG/UI_ComboCount.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUI_ComboCount() {}

// Begin Cross Module References
SIMPLECOMBAT_API UClass* Z_Construct_UClass_UUI_ComboCount();
SIMPLECOMBAT_API UClass* Z_Construct_UClass_UUI_ComboCount_NoRegister();
UMG_API UClass* Z_Construct_UClass_UProgressBar_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_SimpleCombat();
// End Cross Module References

// Begin Class UUI_ComboCount
void UUI_ComboCount::StaticRegisterNativesUUI_ComboCount()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUI_ComboCount);
UClass* Z_Construct_UClass_UUI_ComboCount_NoRegister()
{
	return UUI_ComboCount::StaticClass();
}
struct Z_Construct_UClass_UUI_ComboCount_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "IncludePath", "UMG/UI_ComboCount.h" },
		{ "ModuleRelativePath", "Public/UMG/UI_ComboCount.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComboText_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMG/UI_ComboCount.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComboAttackBar_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMG/UI_ComboCount.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ComboText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ComboAttackBar;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUI_ComboCount>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUI_ComboCount_Statics::NewProp_ComboText = { "ComboText", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUI_ComboCount, ComboText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComboText_MetaData), NewProp_ComboText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUI_ComboCount_Statics::NewProp_ComboAttackBar = { "ComboAttackBar", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUI_ComboCount, ComboAttackBar), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComboAttackBar_MetaData), NewProp_ComboAttackBar_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUI_ComboCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUI_ComboCount_Statics::NewProp_ComboText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUI_ComboCount_Statics::NewProp_ComboAttackBar,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUI_ComboCount_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UUI_ComboCount_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_SimpleCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUI_ComboCount_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UUI_ComboCount_Statics::ClassParams = {
	&UUI_ComboCount::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UUI_ComboCount_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UUI_ComboCount_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUI_ComboCount_Statics::Class_MetaDataParams), Z_Construct_UClass_UUI_ComboCount_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UUI_ComboCount()
{
	if (!Z_Registration_Info_UClass_UUI_ComboCount.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUI_ComboCount.OuterSingleton, Z_Construct_UClass_UUI_ComboCount_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UUI_ComboCount.OuterSingleton;
}
template<> SIMPLECOMBAT_API UClass* StaticClass<UUI_ComboCount>()
{
	return UUI_ComboCount::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UUI_ComboCount);
UUI_ComboCount::~UUI_ComboCount() {}
// End Class UUI_ComboCount

// Begin Registration
struct Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_UMG_UI_ComboCount_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UUI_ComboCount, UUI_ComboCount::StaticClass, TEXT("UUI_ComboCount"), &Z_Registration_Info_UClass_UUI_ComboCount, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUI_ComboCount), 3100731317U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_UMG_UI_ComboCount_h_1230222987(TEXT("/Script/SimpleCombat"),
	Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_UMG_UI_ComboCount_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_UMG_UI_ComboCount_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
