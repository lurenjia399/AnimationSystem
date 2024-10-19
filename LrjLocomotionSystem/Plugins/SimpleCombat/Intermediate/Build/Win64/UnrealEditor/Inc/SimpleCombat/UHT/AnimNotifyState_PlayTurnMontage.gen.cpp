// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleCombat/Public/AnimNotifyState/AnimNotifyState_PlayTurnMontage.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNotifyState_PlayTurnMontage() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState();
SIMPLECOMBAT_API UClass* Z_Construct_UClass_UAnimNotifyState_PlayTurnMontage();
SIMPLECOMBAT_API UClass* Z_Construct_UClass_UAnimNotifyState_PlayTurnMontage_NoRegister();
UPackage* Z_Construct_UPackage__Script_SimpleCombat();
// End Cross Module References

// Begin Class UAnimNotifyState_PlayTurnMontage
void UAnimNotifyState_PlayTurnMontage::StaticRegisterNativesUAnimNotifyState_PlayTurnMontage()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimNotifyState_PlayTurnMontage);
UClass* Z_Construct_UClass_UAnimNotifyState_PlayTurnMontage_NoRegister()
{
	return UAnimNotifyState_PlayTurnMontage::StaticClass();
}
struct Z_Construct_UClass_UAnimNotifyState_PlayTurnMontage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "DisplayName", "PlayTurnMontage" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "AnimNotifyState/AnimNotifyState_PlayTurnMontage.h" },
		{ "ModuleRelativePath", "Public/AnimNotifyState/AnimNotifyState_PlayTurnMontage.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TurnMontage_MetaData[] = {
		{ "Category", "AnimNotify" },
		{ "ModuleRelativePath", "Public/AnimNotifyState/AnimNotifyState_PlayTurnMontage.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastInputVector_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimNotifyState/AnimNotifyState_PlayTurnMontage.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPlayTurnMontage_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimNotifyState/AnimNotifyState_PlayTurnMontage.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TurnMontage;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LastInputVector;
	static void NewProp_bPlayTurnMontage_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPlayTurnMontage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimNotifyState_PlayTurnMontage>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAnimNotifyState_PlayTurnMontage_Statics::NewProp_TurnMontage = { "TurnMontage", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNotifyState_PlayTurnMontage, TurnMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TurnMontage_MetaData), NewProp_TurnMontage_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimNotifyState_PlayTurnMontage_Statics::NewProp_LastInputVector = { "LastInputVector", nullptr, (EPropertyFlags)0x0040000000000010, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNotifyState_PlayTurnMontage, LastInputVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastInputVector_MetaData), NewProp_LastInputVector_MetaData) };
void Z_Construct_UClass_UAnimNotifyState_PlayTurnMontage_Statics::NewProp_bPlayTurnMontage_SetBit(void* Obj)
{
	((UAnimNotifyState_PlayTurnMontage*)Obj)->bPlayTurnMontage = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimNotifyState_PlayTurnMontage_Statics::NewProp_bPlayTurnMontage = { "bPlayTurnMontage", nullptr, (EPropertyFlags)0x0040000000000010, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAnimNotifyState_PlayTurnMontage), &Z_Construct_UClass_UAnimNotifyState_PlayTurnMontage_Statics::NewProp_bPlayTurnMontage_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPlayTurnMontage_MetaData), NewProp_bPlayTurnMontage_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimNotifyState_PlayTurnMontage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_PlayTurnMontage_Statics::NewProp_TurnMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_PlayTurnMontage_Statics::NewProp_LastInputVector,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_PlayTurnMontage_Statics::NewProp_bPlayTurnMontage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_PlayTurnMontage_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAnimNotifyState_PlayTurnMontage_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimNotifyState,
	(UObject* (*)())Z_Construct_UPackage__Script_SimpleCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_PlayTurnMontage_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimNotifyState_PlayTurnMontage_Statics::ClassParams = {
	&UAnimNotifyState_PlayTurnMontage::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAnimNotifyState_PlayTurnMontage_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_PlayTurnMontage_Statics::PropPointers),
	0,
	0x001130A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_PlayTurnMontage_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimNotifyState_PlayTurnMontage_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAnimNotifyState_PlayTurnMontage()
{
	if (!Z_Registration_Info_UClass_UAnimNotifyState_PlayTurnMontage.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimNotifyState_PlayTurnMontage.OuterSingleton, Z_Construct_UClass_UAnimNotifyState_PlayTurnMontage_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAnimNotifyState_PlayTurnMontage.OuterSingleton;
}
template<> SIMPLECOMBAT_API UClass* StaticClass<UAnimNotifyState_PlayTurnMontage>()
{
	return UAnimNotifyState_PlayTurnMontage::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimNotifyState_PlayTurnMontage);
UAnimNotifyState_PlayTurnMontage::~UAnimNotifyState_PlayTurnMontage() {}
// End Class UAnimNotifyState_PlayTurnMontage

// Begin Registration
struct Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_AnimNotifyState_AnimNotifyState_PlayTurnMontage_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAnimNotifyState_PlayTurnMontage, UAnimNotifyState_PlayTurnMontage::StaticClass, TEXT("UAnimNotifyState_PlayTurnMontage"), &Z_Registration_Info_UClass_UAnimNotifyState_PlayTurnMontage, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimNotifyState_PlayTurnMontage), 3806792465U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_AnimNotifyState_AnimNotifyState_PlayTurnMontage_h_2408392320(TEXT("/Script/SimpleCombat"),
	Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_AnimNotifyState_AnimNotifyState_PlayTurnMontage_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_AnimNotifyState_AnimNotifyState_PlayTurnMontage_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
