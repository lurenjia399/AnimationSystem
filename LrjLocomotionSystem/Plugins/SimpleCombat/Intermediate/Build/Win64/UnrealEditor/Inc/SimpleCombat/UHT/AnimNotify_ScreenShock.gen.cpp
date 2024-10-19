// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleCombat/Public/AnimNotify/AnimNotify_ScreenShock.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNotify_ScreenShock() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
ENGINE_API UClass* Z_Construct_UClass_UCameraShakeBase_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCameraShakePattern_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECameraShakePlaySpace();
SIMPLECOMBAT_API UClass* Z_Construct_UClass_UAnimNotify_ScreenShock();
SIMPLECOMBAT_API UClass* Z_Construct_UClass_UAnimNotify_ScreenShock_NoRegister();
UPackage* Z_Construct_UPackage__Script_SimpleCombat();
// End Cross Module References

// Begin Class UAnimNotify_ScreenShock
void UAnimNotify_ScreenShock::StaticRegisterNativesUAnimNotify_ScreenShock()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimNotify_ScreenShock);
UClass* Z_Construct_UClass_UAnimNotify_ScreenShock_NoRegister()
{
	return UAnimNotify_ScreenShock::StaticClass();
}
struct Z_Construct_UClass_UAnimNotify_ScreenShock_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "DisplayName", "ScreenShock" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "AnimNotify/AnimNotify_ScreenShock.h" },
		{ "ModuleRelativePath", "Public/AnimNotify/AnimNotify_ScreenShock.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCustomShockClass_MetaData[] = {
		{ "Category", "Screen Shock" },
		{ "ModuleRelativePath", "Public/AnimNotify/AnimNotify_ScreenShock.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RootShakePattern_MetaData[] = {
		{ "Category", "Screen Shock" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The root pattern for this camera shake */" },
#endif
		{ "EditCondition", "!bCustomShockClass" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AnimNotify/AnimNotify_ScreenShock.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The root pattern for this camera shake" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShakeClass_MetaData[] = {
		{ "Category", "Screen Shock" },
		{ "EditCondition", "bCustomShockClass" },
		{ "ModuleRelativePath", "Public/AnimNotify/AnimNotify_ScreenShock.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[] = {
		{ "Category", "Screen Shock" },
		{ "EditCondition", "bCustomShockClass" },
		{ "ModuleRelativePath", "Public/AnimNotify/AnimNotify_ScreenShock.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlaySpace_MetaData[] = {
		{ "Category", "Screen Shock" },
		{ "EditCondition", "bCustomShockClass" },
		{ "ModuleRelativePath", "Public/AnimNotify/AnimNotify_ScreenShock.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserPlaySpaceRot_MetaData[] = {
		{ "Category", "Screen Shock" },
		{ "EditCondition", "bCustomShockClass" },
		{ "ModuleRelativePath", "Public/AnimNotify/AnimNotify_ScreenShock.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bCustomShockClass_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCustomShockClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RootShakePattern;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ShakeClass;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Scale;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PlaySpace_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PlaySpace;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UserPlaySpaceRot;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimNotify_ScreenShock>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UAnimNotify_ScreenShock_Statics::NewProp_bCustomShockClass_SetBit(void* Obj)
{
	((UAnimNotify_ScreenShock*)Obj)->bCustomShockClass = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimNotify_ScreenShock_Statics::NewProp_bCustomShockClass = { "bCustomShockClass", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAnimNotify_ScreenShock), &Z_Construct_UClass_UAnimNotify_ScreenShock_Statics::NewProp_bCustomShockClass_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCustomShockClass_MetaData), NewProp_bCustomShockClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAnimNotify_ScreenShock_Statics::NewProp_RootShakePattern = { "RootShakePattern", nullptr, (EPropertyFlags)0x0116000000080019, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNotify_ScreenShock, RootShakePattern), Z_Construct_UClass_UCameraShakePattern_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RootShakePattern_MetaData), NewProp_RootShakePattern_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UAnimNotify_ScreenShock_Statics::NewProp_ShakeClass = { "ShakeClass", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNotify_ScreenShock, ShakeClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UCameraShakeBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShakeClass_MetaData), NewProp_ShakeClass_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimNotify_ScreenShock_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNotify_ScreenShock, Scale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Scale_MetaData), NewProp_Scale_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAnimNotify_ScreenShock_Statics::NewProp_PlaySpace_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAnimNotify_ScreenShock_Statics::NewProp_PlaySpace = { "PlaySpace", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNotify_ScreenShock, PlaySpace), Z_Construct_UEnum_Engine_ECameraShakePlaySpace, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlaySpace_MetaData), NewProp_PlaySpace_MetaData) }; // 2661961121
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimNotify_ScreenShock_Statics::NewProp_UserPlaySpaceRot = { "UserPlaySpaceRot", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNotify_ScreenShock, UserPlaySpaceRot), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserPlaySpaceRot_MetaData), NewProp_UserPlaySpaceRot_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimNotify_ScreenShock_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_ScreenShock_Statics::NewProp_bCustomShockClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_ScreenShock_Statics::NewProp_RootShakePattern,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_ScreenShock_Statics::NewProp_ShakeClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_ScreenShock_Statics::NewProp_Scale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_ScreenShock_Statics::NewProp_PlaySpace_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_ScreenShock_Statics::NewProp_PlaySpace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_ScreenShock_Statics::NewProp_UserPlaySpaceRot,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_ScreenShock_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAnimNotify_ScreenShock_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimNotify,
	(UObject* (*)())Z_Construct_UPackage__Script_SimpleCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_ScreenShock_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimNotify_ScreenShock_Statics::ClassParams = {
	&UAnimNotify_ScreenShock::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAnimNotify_ScreenShock_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_ScreenShock_Statics::PropPointers),
	0,
	0x009120A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_ScreenShock_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimNotify_ScreenShock_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAnimNotify_ScreenShock()
{
	if (!Z_Registration_Info_UClass_UAnimNotify_ScreenShock.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimNotify_ScreenShock.OuterSingleton, Z_Construct_UClass_UAnimNotify_ScreenShock_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAnimNotify_ScreenShock.OuterSingleton;
}
template<> SIMPLECOMBAT_API UClass* StaticClass<UAnimNotify_ScreenShock>()
{
	return UAnimNotify_ScreenShock::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimNotify_ScreenShock);
UAnimNotify_ScreenShock::~UAnimNotify_ScreenShock() {}
// End Class UAnimNotify_ScreenShock

// Begin Registration
struct Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_AnimNotify_AnimNotify_ScreenShock_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAnimNotify_ScreenShock, UAnimNotify_ScreenShock::StaticClass, TEXT("UAnimNotify_ScreenShock"), &Z_Registration_Info_UClass_UAnimNotify_ScreenShock, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimNotify_ScreenShock), 1363882574U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_AnimNotify_AnimNotify_ScreenShock_h_1819158428(TEXT("/Script/SimpleCombat"),
	Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_AnimNotify_AnimNotify_ScreenShock_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_AnimNotify_AnimNotify_ScreenShock_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
