// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleCombat/Public/AnimNotify/AnimNotify_Detach.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNotify_Detach() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
SIMPLECOMBAT_API UClass* Z_Construct_UClass_UAnimNotify_Detach();
SIMPLECOMBAT_API UClass* Z_Construct_UClass_UAnimNotify_Detach_NoRegister();
UPackage* Z_Construct_UPackage__Script_SimpleCombat();
// End Cross Module References

// Begin Class UAnimNotify_Detach
void UAnimNotify_Detach::StaticRegisterNativesUAnimNotify_Detach()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimNotify_Detach);
UClass* Z_Construct_UClass_UAnimNotify_Detach_NoRegister()
{
	return UAnimNotify_Detach::StaticClass();
}
struct Z_Construct_UClass_UAnimNotify_Detach_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Detach" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "AnimNotify/AnimNotify_Detach.h" },
		{ "ModuleRelativePath", "Public/AnimNotify/AnimNotify_Detach.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bReverseAddition_MetaData[] = {
		{ "Category", "Attach" },
		{ "ModuleRelativePath", "Public/AnimNotify/AnimNotify_Detach.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorClass_MetaData[] = {
		{ "Category", "Throw" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe7\xb1\xbb\xe5\x9e\x8b\n" },
#endif
		{ "ModuleRelativePath", "Public/AnimNotify/AnimNotify_Detach.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\xb1\xbb\xe5\x9e\x8b" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SubTag_MetaData[] = {
		{ "Category", "Detach" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\x9f\xa5\xe6\x89\xbe\xe6\x96\xb9\xe5\xbc\x8f\n" },
#endif
		{ "ModuleRelativePath", "Public/AnimNotify/AnimNotify_Detach.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x9f\xa5\xe6\x89\xbe\xe6\x96\xb9\xe5\xbc\x8f" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bResetRotation_MetaData[] = {
		{ "Category", "Detach" },
		{ "ModuleRelativePath", "Public/AnimNotify/AnimNotify_Detach.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bResetLocation_MetaData[] = {
		{ "Category", "Detach" },
		{ "ModuleRelativePath", "Public/AnimNotify/AnimNotify_Detach.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DetachRotation_MetaData[] = {
		{ "Category", "ComputerGraphics" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe7\x9b\xb8\xe5\xaf\xb9\n" },
#endif
		{ "EditCondition", "bResetRotation" },
		{ "ModuleRelativePath", "Public/AnimNotify/AnimNotify_Detach.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\x9b\xb8\xe5\xaf\xb9" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DetachLocation_MetaData[] = {
		{ "Category", "ComputerGraphics" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe7\x9b\xb8\xe5\xaf\xb9\n" },
#endif
		{ "EditCondition", "bResetLocation" },
		{ "ModuleRelativePath", "Public/AnimNotify/AnimNotify_Detach.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\x9b\xb8\xe5\xaf\xb9" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bReverseAddition_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReverseAddition;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ActorClass;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SubTag;
	static void NewProp_bResetRotation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bResetRotation;
	static void NewProp_bResetLocation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bResetLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DetachRotation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DetachLocation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimNotify_Detach>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UAnimNotify_Detach_Statics::NewProp_bReverseAddition_SetBit(void* Obj)
{
	((UAnimNotify_Detach*)Obj)->bReverseAddition = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimNotify_Detach_Statics::NewProp_bReverseAddition = { "bReverseAddition", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAnimNotify_Detach), &Z_Construct_UClass_UAnimNotify_Detach_Statics::NewProp_bReverseAddition_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bReverseAddition_MetaData), NewProp_bReverseAddition_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UAnimNotify_Detach_Statics::NewProp_ActorClass = { "ActorClass", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNotify_Detach, ActorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorClass_MetaData), NewProp_ActorClass_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAnimNotify_Detach_Statics::NewProp_SubTag = { "SubTag", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNotify_Detach, SubTag), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SubTag_MetaData), NewProp_SubTag_MetaData) };
void Z_Construct_UClass_UAnimNotify_Detach_Statics::NewProp_bResetRotation_SetBit(void* Obj)
{
	((UAnimNotify_Detach*)Obj)->bResetRotation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimNotify_Detach_Statics::NewProp_bResetRotation = { "bResetRotation", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAnimNotify_Detach), &Z_Construct_UClass_UAnimNotify_Detach_Statics::NewProp_bResetRotation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bResetRotation_MetaData), NewProp_bResetRotation_MetaData) };
void Z_Construct_UClass_UAnimNotify_Detach_Statics::NewProp_bResetLocation_SetBit(void* Obj)
{
	((UAnimNotify_Detach*)Obj)->bResetLocation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimNotify_Detach_Statics::NewProp_bResetLocation = { "bResetLocation", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAnimNotify_Detach), &Z_Construct_UClass_UAnimNotify_Detach_Statics::NewProp_bResetLocation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bResetLocation_MetaData), NewProp_bResetLocation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimNotify_Detach_Statics::NewProp_DetachRotation = { "DetachRotation", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNotify_Detach, DetachRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DetachRotation_MetaData), NewProp_DetachRotation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimNotify_Detach_Statics::NewProp_DetachLocation = { "DetachLocation", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNotify_Detach, DetachLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DetachLocation_MetaData), NewProp_DetachLocation_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimNotify_Detach_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_Detach_Statics::NewProp_bReverseAddition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_Detach_Statics::NewProp_ActorClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_Detach_Statics::NewProp_SubTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_Detach_Statics::NewProp_bResetRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_Detach_Statics::NewProp_bResetLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_Detach_Statics::NewProp_DetachRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_Detach_Statics::NewProp_DetachLocation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_Detach_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAnimNotify_Detach_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimNotify,
	(UObject* (*)())Z_Construct_UPackage__Script_SimpleCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_Detach_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimNotify_Detach_Statics::ClassParams = {
	&UAnimNotify_Detach::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAnimNotify_Detach_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_Detach_Statics::PropPointers),
	0,
	0x001120A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_Detach_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimNotify_Detach_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAnimNotify_Detach()
{
	if (!Z_Registration_Info_UClass_UAnimNotify_Detach.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimNotify_Detach.OuterSingleton, Z_Construct_UClass_UAnimNotify_Detach_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAnimNotify_Detach.OuterSingleton;
}
template<> SIMPLECOMBAT_API UClass* StaticClass<UAnimNotify_Detach>()
{
	return UAnimNotify_Detach::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimNotify_Detach);
UAnimNotify_Detach::~UAnimNotify_Detach() {}
// End Class UAnimNotify_Detach

// Begin Registration
struct Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_AnimNotify_AnimNotify_Detach_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAnimNotify_Detach, UAnimNotify_Detach::StaticClass, TEXT("UAnimNotify_Detach"), &Z_Registration_Info_UClass_UAnimNotify_Detach, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimNotify_Detach), 2292873460U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_AnimNotify_AnimNotify_Detach_h_3187624676(TEXT("/Script/SimpleCombat"),
	Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_AnimNotify_AnimNotify_Detach_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_AnimNotify_AnimNotify_Detach_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
