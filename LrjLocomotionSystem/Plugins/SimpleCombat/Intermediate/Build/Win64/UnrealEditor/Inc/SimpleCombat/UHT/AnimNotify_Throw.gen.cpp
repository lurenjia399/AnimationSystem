// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleCombat/Public/AnimNotify/AnimNotify_Throw.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNotify_Throw() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
SIMPLECOMBAT_API UClass* Z_Construct_UClass_UAnimNotify_Throw();
SIMPLECOMBAT_API UClass* Z_Construct_UClass_UAnimNotify_Throw_NoRegister();
UPackage* Z_Construct_UPackage__Script_SimpleCombat();
// End Cross Module References

// Begin Class UAnimNotify_Throw
void UAnimNotify_Throw::StaticRegisterNativesUAnimNotify_Throw()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimNotify_Throw);
UClass* Z_Construct_UClass_UAnimNotify_Throw_NoRegister()
{
	return UAnimNotify_Throw::StaticClass();
}
struct Z_Construct_UClass_UAnimNotify_Throw_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Throw Character" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "AnimNotify/AnimNotify_Throw.h" },
		{ "ModuleRelativePath", "Public/AnimNotify/AnimNotify_Throw.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImpulseValue_MetaData[] = {
		{ "Category", "Throw" },
		{ "ModuleRelativePath", "Public/AnimNotify/AnimNotify_Throw.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SubMeshTagName_MetaData[] = {
		{ "Category", "Throw" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\xac\xa1\xe7\xba\xa7\xe6\xa8\xa1\xe5\x9e\x8b\xe5\x90\x8d\xe5\xad\x97\n" },
#endif
		{ "ModuleRelativePath", "Public/AnimNotify/AnimNotify_Throw.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\xac\xa1\xe7\xba\xa7\xe6\xa8\xa1\xe5\x9e\x8b\xe5\x90\x8d\xe5\xad\x97" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ImpulseValue;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SubMeshTagName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimNotify_Throw>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimNotify_Throw_Statics::NewProp_ImpulseValue = { "ImpulseValue", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNotify_Throw, ImpulseValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImpulseValue_MetaData), NewProp_ImpulseValue_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAnimNotify_Throw_Statics::NewProp_SubMeshTagName = { "SubMeshTagName", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNotify_Throw, SubMeshTagName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SubMeshTagName_MetaData), NewProp_SubMeshTagName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimNotify_Throw_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_Throw_Statics::NewProp_ImpulseValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_Throw_Statics::NewProp_SubMeshTagName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_Throw_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAnimNotify_Throw_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimNotify,
	(UObject* (*)())Z_Construct_UPackage__Script_SimpleCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_Throw_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimNotify_Throw_Statics::ClassParams = {
	&UAnimNotify_Throw::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAnimNotify_Throw_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_Throw_Statics::PropPointers),
	0,
	0x001120A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_Throw_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimNotify_Throw_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAnimNotify_Throw()
{
	if (!Z_Registration_Info_UClass_UAnimNotify_Throw.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimNotify_Throw.OuterSingleton, Z_Construct_UClass_UAnimNotify_Throw_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAnimNotify_Throw.OuterSingleton;
}
template<> SIMPLECOMBAT_API UClass* StaticClass<UAnimNotify_Throw>()
{
	return UAnimNotify_Throw::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimNotify_Throw);
UAnimNotify_Throw::~UAnimNotify_Throw() {}
// End Class UAnimNotify_Throw

// Begin Registration
struct Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_AnimNotify_AnimNotify_Throw_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAnimNotify_Throw, UAnimNotify_Throw::StaticClass, TEXT("UAnimNotify_Throw"), &Z_Registration_Info_UClass_UAnimNotify_Throw, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimNotify_Throw), 2902934726U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_AnimNotify_AnimNotify_Throw_h_261834888(TEXT("/Script/SimpleCombat"),
	Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_AnimNotify_AnimNotify_Throw_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_AnimNotify_AnimNotify_Throw_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
