// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleGameplayAbilitiesExtend/Public/Abilities/Cue/GameplayCueNotify_Static_Effects.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayCueNotify_Static_Effects() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAttachLocation();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayCueNotify_Static();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
SIMPLEGAMEPLAYABILITIESEXTEND_API UClass* Z_Construct_UClass_UGameplayCueNotify_Static_Effects();
SIMPLEGAMEPLAYABILITIESEXTEND_API UClass* Z_Construct_UClass_UGameplayCueNotify_Static_Effects_NoRegister();
UPackage* Z_Construct_UPackage__Script_SimpleGameplayAbilitiesExtend();
// End Cross Module References

// Begin Class UGameplayCueNotify_Static_Effects
void UGameplayCueNotify_Static_Effects::StaticRegisterNativesUGameplayCueNotify_Static_Effects()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameplayCueNotify_Static_Effects);
UClass* Z_Construct_UClass_UGameplayCueNotify_Static_Effects_NoRegister()
{
	return UGameplayCueNotify_Static_Effects::StaticClass();
}
struct Z_Construct_UClass_UGameplayCueNotify_Static_Effects_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Replication" },
		{ "IncludePath", "Abilities/Cue/GameplayCueNotify_Static_Effects.h" },
		{ "ModuleRelativePath", "Public/Abilities/Cue/GameplayCueNotify_Static_Effects.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EmitterTemplate_MetaData[] = {
		{ "Category", "GA" },
		{ "ModuleRelativePath", "Public/Abilities/Cue/GameplayCueNotify_Static_Effects.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NiagaraTemplate_MetaData[] = {
		{ "Category", "GA" },
		{ "ModuleRelativePath", "Public/Abilities/Cue/GameplayCueNotify_Static_Effects.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DurationName_MetaData[] = {
		{ "Category", "GA" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xd2\xaa\xef\xbf\xbd\xef\xbf\xbd\xd0\xa7\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd6\xb5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/Abilities/Cue/GameplayCueNotify_Static_Effects.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xd2\xaa\xef\xbf\xbd\xef\xbf\xbd\xd0\xa7\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd6\xb5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAttach_MetaData[] = {
		{ "Category", "GA" },
		{ "ModuleRelativePath", "Public/Abilities/Cue/GameplayCueNotify_Static_Effects.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttachPointName_MetaData[] = {
		{ "Category", "GA" },
		{ "EditCondition", "bAttach" },
		{ "ModuleRelativePath", "Public/Abilities/Cue/GameplayCueNotify_Static_Effects.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttachLocation_MetaData[] = {
		{ "Category", "GA" },
		{ "EditCondition", "bAttach" },
		{ "ModuleRelativePath", "Public/Abilities/Cue/GameplayCueNotify_Static_Effects.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PositionOffset_MetaData[] = {
		{ "Category", "GA" },
		{ "ModuleRelativePath", "Public/Abilities/Cue/GameplayCueNotify_Static_Effects.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotatorOffset_MetaData[] = {
		{ "Category", "GA" },
		{ "ModuleRelativePath", "Public/Abilities/Cue/GameplayCueNotify_Static_Effects.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitCollisionClass_MetaData[] = {
		{ "Category", "GA" },
		{ "ModuleRelativePath", "Public/Abilities/Cue/GameplayCueNotify_Static_Effects.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionPositionOffset_MetaData[] = {
		{ "Category", "GA" },
		{ "ModuleRelativePath", "Public/Abilities/Cue/GameplayCueNotify_Static_Effects.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionRotatorOffset_MetaData[] = {
		{ "Category", "GA" },
		{ "ModuleRelativePath", "Public/Abilities/Cue/GameplayCueNotify_Static_Effects.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EmitterTemplate;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NiagaraTemplate;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DurationName;
	static void NewProp_bAttach_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAttach;
	static const UECodeGen_Private::FNamePropertyParams NewProp_AttachPointName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AttachLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PositionOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RotatorOffset;
	static const UECodeGen_Private::FClassPropertyParams NewProp_HitCollisionClass;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CollisionPositionOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CollisionRotatorOffset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameplayCueNotify_Static_Effects>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameplayCueNotify_Static_Effects_Statics::NewProp_EmitterTemplate = { "EmitterTemplate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameplayCueNotify_Static_Effects, EmitterTemplate), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EmitterTemplate_MetaData), NewProp_EmitterTemplate_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameplayCueNotify_Static_Effects_Statics::NewProp_NiagaraTemplate = { "NiagaraTemplate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameplayCueNotify_Static_Effects, NiagaraTemplate), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NiagaraTemplate_MetaData), NewProp_NiagaraTemplate_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UGameplayCueNotify_Static_Effects_Statics::NewProp_DurationName = { "DurationName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameplayCueNotify_Static_Effects, DurationName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DurationName_MetaData), NewProp_DurationName_MetaData) };
void Z_Construct_UClass_UGameplayCueNotify_Static_Effects_Statics::NewProp_bAttach_SetBit(void* Obj)
{
	((UGameplayCueNotify_Static_Effects*)Obj)->bAttach = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGameplayCueNotify_Static_Effects_Statics::NewProp_bAttach = { "bAttach", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGameplayCueNotify_Static_Effects), &Z_Construct_UClass_UGameplayCueNotify_Static_Effects_Statics::NewProp_bAttach_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAttach_MetaData), NewProp_bAttach_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UGameplayCueNotify_Static_Effects_Statics::NewProp_AttachPointName = { "AttachPointName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameplayCueNotify_Static_Effects, AttachPointName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttachPointName_MetaData), NewProp_AttachPointName_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGameplayCueNotify_Static_Effects_Statics::NewProp_AttachLocation = { "AttachLocation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameplayCueNotify_Static_Effects, AttachLocation), Z_Construct_UEnum_Engine_EAttachLocation, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttachLocation_MetaData), NewProp_AttachLocation_MetaData) }; // 2784615398
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameplayCueNotify_Static_Effects_Statics::NewProp_PositionOffset = { "PositionOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameplayCueNotify_Static_Effects, PositionOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PositionOffset_MetaData), NewProp_PositionOffset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameplayCueNotify_Static_Effects_Statics::NewProp_RotatorOffset = { "RotatorOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameplayCueNotify_Static_Effects, RotatorOffset), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotatorOffset_MetaData), NewProp_RotatorOffset_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UGameplayCueNotify_Static_Effects_Statics::NewProp_HitCollisionClass = { "HitCollisionClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameplayCueNotify_Static_Effects, HitCollisionClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitCollisionClass_MetaData), NewProp_HitCollisionClass_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameplayCueNotify_Static_Effects_Statics::NewProp_CollisionPositionOffset = { "CollisionPositionOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameplayCueNotify_Static_Effects, CollisionPositionOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionPositionOffset_MetaData), NewProp_CollisionPositionOffset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameplayCueNotify_Static_Effects_Statics::NewProp_CollisionRotatorOffset = { "CollisionRotatorOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameplayCueNotify_Static_Effects, CollisionRotatorOffset), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionRotatorOffset_MetaData), NewProp_CollisionRotatorOffset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameplayCueNotify_Static_Effects_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayCueNotify_Static_Effects_Statics::NewProp_EmitterTemplate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayCueNotify_Static_Effects_Statics::NewProp_NiagaraTemplate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayCueNotify_Static_Effects_Statics::NewProp_DurationName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayCueNotify_Static_Effects_Statics::NewProp_bAttach,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayCueNotify_Static_Effects_Statics::NewProp_AttachPointName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayCueNotify_Static_Effects_Statics::NewProp_AttachLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayCueNotify_Static_Effects_Statics::NewProp_PositionOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayCueNotify_Static_Effects_Statics::NewProp_RotatorOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayCueNotify_Static_Effects_Statics::NewProp_HitCollisionClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayCueNotify_Static_Effects_Statics::NewProp_CollisionPositionOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayCueNotify_Static_Effects_Statics::NewProp_CollisionRotatorOffset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayCueNotify_Static_Effects_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGameplayCueNotify_Static_Effects_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameplayCueNotify_Static,
	(UObject* (*)())Z_Construct_UPackage__Script_SimpleGameplayAbilitiesExtend,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayCueNotify_Static_Effects_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameplayCueNotify_Static_Effects_Statics::ClassParams = {
	&UGameplayCueNotify_Static_Effects::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGameplayCueNotify_Static_Effects_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayCueNotify_Static_Effects_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayCueNotify_Static_Effects_Statics::Class_MetaDataParams), Z_Construct_UClass_UGameplayCueNotify_Static_Effects_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGameplayCueNotify_Static_Effects()
{
	if (!Z_Registration_Info_UClass_UGameplayCueNotify_Static_Effects.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameplayCueNotify_Static_Effects.OuterSingleton, Z_Construct_UClass_UGameplayCueNotify_Static_Effects_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGameplayCueNotify_Static_Effects.OuterSingleton;
}
template<> SIMPLEGAMEPLAYABILITIESEXTEND_API UClass* StaticClass<UGameplayCueNotify_Static_Effects>()
{
	return UGameplayCueNotify_Static_Effects::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGameplayCueNotify_Static_Effects);
UGameplayCueNotify_Static_Effects::~UGameplayCueNotify_Static_Effects() {}
// End Class UGameplayCueNotify_Static_Effects

// Begin Registration
struct Z_CompiledInDeferFile_FID_AdvancedAnimation_Plugins_SimpleGameplayAbilitiesExtend_Source_SimpleGameplayAbilitiesExtend_Public_Abilities_Cue_GameplayCueNotify_Static_Effects_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGameplayCueNotify_Static_Effects, UGameplayCueNotify_Static_Effects::StaticClass, TEXT("UGameplayCueNotify_Static_Effects"), &Z_Registration_Info_UClass_UGameplayCueNotify_Static_Effects, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameplayCueNotify_Static_Effects), 4178741557U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AdvancedAnimation_Plugins_SimpleGameplayAbilitiesExtend_Source_SimpleGameplayAbilitiesExtend_Public_Abilities_Cue_GameplayCueNotify_Static_Effects_h_1525346866(TEXT("/Script/SimpleGameplayAbilitiesExtend"),
	Z_CompiledInDeferFile_FID_AdvancedAnimation_Plugins_SimpleGameplayAbilitiesExtend_Source_SimpleGameplayAbilitiesExtend_Public_Abilities_Cue_GameplayCueNotify_Static_Effects_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AdvancedAnimation_Plugins_SimpleGameplayAbilitiesExtend_Source_SimpleGameplayAbilitiesExtend_Public_Abilities_Cue_GameplayCueNotify_Static_Effects_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
