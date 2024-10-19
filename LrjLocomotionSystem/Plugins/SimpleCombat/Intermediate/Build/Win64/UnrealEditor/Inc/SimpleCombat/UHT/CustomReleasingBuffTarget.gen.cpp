// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleCombat/Public/Script/CustomReleasingBuffTarget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomReleasingBuffTarget() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
SIMPLECOMBAT_API UClass* Z_Construct_UClass_UCustomReleasingBuffTarget();
SIMPLECOMBAT_API UClass* Z_Construct_UClass_UCustomReleasingBuffTarget_NoRegister();
UPackage* Z_Construct_UPackage__Script_SimpleCombat();
// End Cross Module References

// Begin Class UCustomReleasingBuffTarget Function GetAllActorsOfClass
struct Z_Construct_UFunction_UCustomReleasingBuffTarget_GetAllActorsOfClass_Statics
{
	struct CustomReleasingBuffTarget_eventGetAllActorsOfClass_Parms
	{
		AActor* InOwner;
		TSubclassOf<AActor> ActorClass;
		TArray<AActor*> InArray;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CustomReleasing" },
		{ "ModuleRelativePath", "Public/Script/CustomReleasingBuffTarget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InOwner;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ActorClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InArray_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InArray;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCustomReleasingBuffTarget_GetAllActorsOfClass_Statics::NewProp_InOwner = { "InOwner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CustomReleasingBuffTarget_eventGetAllActorsOfClass_Parms, InOwner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UCustomReleasingBuffTarget_GetAllActorsOfClass_Statics::NewProp_ActorClass = { "ActorClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CustomReleasingBuffTarget_eventGetAllActorsOfClass_Parms, ActorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCustomReleasingBuffTarget_GetAllActorsOfClass_Statics::NewProp_InArray_Inner = { "InArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCustomReleasingBuffTarget_GetAllActorsOfClass_Statics::NewProp_InArray = { "InArray", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CustomReleasingBuffTarget_eventGetAllActorsOfClass_Parms, InArray), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UCustomReleasingBuffTarget_GetAllActorsOfClass_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((CustomReleasingBuffTarget_eventGetAllActorsOfClass_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCustomReleasingBuffTarget_GetAllActorsOfClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CustomReleasingBuffTarget_eventGetAllActorsOfClass_Parms), &Z_Construct_UFunction_UCustomReleasingBuffTarget_GetAllActorsOfClass_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomReleasingBuffTarget_GetAllActorsOfClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomReleasingBuffTarget_GetAllActorsOfClass_Statics::NewProp_InOwner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomReleasingBuffTarget_GetAllActorsOfClass_Statics::NewProp_ActorClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomReleasingBuffTarget_GetAllActorsOfClass_Statics::NewProp_InArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomReleasingBuffTarget_GetAllActorsOfClass_Statics::NewProp_InArray,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomReleasingBuffTarget_GetAllActorsOfClass_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomReleasingBuffTarget_GetAllActorsOfClass_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomReleasingBuffTarget_GetAllActorsOfClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomReleasingBuffTarget, nullptr, "GetAllActorsOfClass", nullptr, nullptr, Z_Construct_UFunction_UCustomReleasingBuffTarget_GetAllActorsOfClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomReleasingBuffTarget_GetAllActorsOfClass_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCustomReleasingBuffTarget_GetAllActorsOfClass_Statics::CustomReleasingBuffTarget_eventGetAllActorsOfClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomReleasingBuffTarget_GetAllActorsOfClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCustomReleasingBuffTarget_GetAllActorsOfClass_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCustomReleasingBuffTarget_GetAllActorsOfClass_Statics::CustomReleasingBuffTarget_eventGetAllActorsOfClass_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCustomReleasingBuffTarget_GetAllActorsOfClass()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomReleasingBuffTarget_GetAllActorsOfClass_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCustomReleasingBuffTarget::execGetAllActorsOfClass)
{
	P_GET_OBJECT(AActor,Z_Param_InOwner);
	P_GET_OBJECT(UClass,Z_Param_ActorClass);
	P_GET_TARRAY_REF(AActor*,Z_Param_Out_InArray);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetAllActorsOfClass(Z_Param_InOwner,Z_Param_ActorClass,Z_Param_Out_InArray);
	P_NATIVE_END;
}
// End Class UCustomReleasingBuffTarget Function GetAllActorsOfClass

// Begin Class UCustomReleasingBuffTarget Function K2_GetCustomReleasingBuffTarget
struct CustomReleasingBuffTarget_eventK2_GetCustomReleasingBuffTarget_Parms
{
	AActor* InOwner;
	TArray<AActor*> OutTarget;
};
static FName NAME_UCustomReleasingBuffTarget_K2_GetCustomReleasingBuffTarget = FName(TEXT("K2_GetCustomReleasingBuffTarget"));
void UCustomReleasingBuffTarget::K2_GetCustomReleasingBuffTarget(AActor* InOwner, TArray<AActor*>& OutTarget)
{
	CustomReleasingBuffTarget_eventK2_GetCustomReleasingBuffTarget_Parms Parms;
	Parms.InOwner=InOwner;
	Parms.OutTarget=OutTarget;
	ProcessEvent(FindFunctionChecked(NAME_UCustomReleasingBuffTarget_K2_GetCustomReleasingBuffTarget),&Parms);
	OutTarget=Parms.OutTarget;
}
struct Z_Construct_UFunction_UCustomReleasingBuffTarget_K2_GetCustomReleasingBuffTarget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CustomReleasing" },
		{ "DisplayName", "GetCustomReleasingBuffTarget" },
		{ "ModuleRelativePath", "Public/Script/CustomReleasingBuffTarget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InOwner;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OutTarget_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutTarget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCustomReleasingBuffTarget_K2_GetCustomReleasingBuffTarget_Statics::NewProp_InOwner = { "InOwner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CustomReleasingBuffTarget_eventK2_GetCustomReleasingBuffTarget_Parms, InOwner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCustomReleasingBuffTarget_K2_GetCustomReleasingBuffTarget_Statics::NewProp_OutTarget_Inner = { "OutTarget", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCustomReleasingBuffTarget_K2_GetCustomReleasingBuffTarget_Statics::NewProp_OutTarget = { "OutTarget", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CustomReleasingBuffTarget_eventK2_GetCustomReleasingBuffTarget_Parms, OutTarget), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomReleasingBuffTarget_K2_GetCustomReleasingBuffTarget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomReleasingBuffTarget_K2_GetCustomReleasingBuffTarget_Statics::NewProp_InOwner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomReleasingBuffTarget_K2_GetCustomReleasingBuffTarget_Statics::NewProp_OutTarget_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomReleasingBuffTarget_K2_GetCustomReleasingBuffTarget_Statics::NewProp_OutTarget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomReleasingBuffTarget_K2_GetCustomReleasingBuffTarget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomReleasingBuffTarget_K2_GetCustomReleasingBuffTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomReleasingBuffTarget, nullptr, "K2_GetCustomReleasingBuffTarget", nullptr, nullptr, Z_Construct_UFunction_UCustomReleasingBuffTarget_K2_GetCustomReleasingBuffTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomReleasingBuffTarget_K2_GetCustomReleasingBuffTarget_Statics::PropPointers), sizeof(CustomReleasingBuffTarget_eventK2_GetCustomReleasingBuffTarget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x1C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomReleasingBuffTarget_K2_GetCustomReleasingBuffTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCustomReleasingBuffTarget_K2_GetCustomReleasingBuffTarget_Statics::Function_MetaDataParams) };
static_assert(sizeof(CustomReleasingBuffTarget_eventK2_GetCustomReleasingBuffTarget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCustomReleasingBuffTarget_K2_GetCustomReleasingBuffTarget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomReleasingBuffTarget_K2_GetCustomReleasingBuffTarget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCustomReleasingBuffTarget::execK2_GetCustomReleasingBuffTarget)
{
	P_GET_OBJECT(AActor,Z_Param_InOwner);
	P_GET_TARRAY_REF(AActor*,Z_Param_Out_OutTarget);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->K2_GetCustomReleasingBuffTarget_Implementation(Z_Param_InOwner,Z_Param_Out_OutTarget);
	P_NATIVE_END;
}
// End Class UCustomReleasingBuffTarget Function K2_GetCustomReleasingBuffTarget

// Begin Class UCustomReleasingBuffTarget Function K2_GetWorld
struct Z_Construct_UFunction_UCustomReleasingBuffTarget_K2_GetWorld_Statics
{
	struct CustomReleasingBuffTarget_eventK2_GetWorld_Parms
	{
		AActor* InOwner;
		UWorld* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CustomReleasing" },
		{ "DisplayName", "GetWorld" },
		{ "ModuleRelativePath", "Public/Script/CustomReleasingBuffTarget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InOwner;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCustomReleasingBuffTarget_K2_GetWorld_Statics::NewProp_InOwner = { "InOwner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CustomReleasingBuffTarget_eventK2_GetWorld_Parms, InOwner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCustomReleasingBuffTarget_K2_GetWorld_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CustomReleasingBuffTarget_eventK2_GetWorld_Parms, ReturnValue), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomReleasingBuffTarget_K2_GetWorld_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomReleasingBuffTarget_K2_GetWorld_Statics::NewProp_InOwner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomReleasingBuffTarget_K2_GetWorld_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomReleasingBuffTarget_K2_GetWorld_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomReleasingBuffTarget_K2_GetWorld_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomReleasingBuffTarget, nullptr, "K2_GetWorld", nullptr, nullptr, Z_Construct_UFunction_UCustomReleasingBuffTarget_K2_GetWorld_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomReleasingBuffTarget_K2_GetWorld_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCustomReleasingBuffTarget_K2_GetWorld_Statics::CustomReleasingBuffTarget_eventK2_GetWorld_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomReleasingBuffTarget_K2_GetWorld_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCustomReleasingBuffTarget_K2_GetWorld_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCustomReleasingBuffTarget_K2_GetWorld_Statics::CustomReleasingBuffTarget_eventK2_GetWorld_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCustomReleasingBuffTarget_K2_GetWorld()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomReleasingBuffTarget_K2_GetWorld_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCustomReleasingBuffTarget::execK2_GetWorld)
{
	P_GET_OBJECT(AActor,Z_Param_InOwner);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UWorld**)Z_Param__Result=P_THIS->K2_GetWorld(Z_Param_InOwner);
	P_NATIVE_END;
}
// End Class UCustomReleasingBuffTarget Function K2_GetWorld

// Begin Class UCustomReleasingBuffTarget
void UCustomReleasingBuffTarget::StaticRegisterNativesUCustomReleasingBuffTarget()
{
	UClass* Class = UCustomReleasingBuffTarget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetAllActorsOfClass", &UCustomReleasingBuffTarget::execGetAllActorsOfClass },
		{ "K2_GetCustomReleasingBuffTarget", &UCustomReleasingBuffTarget::execK2_GetCustomReleasingBuffTarget },
		{ "K2_GetWorld", &UCustomReleasingBuffTarget::execK2_GetWorld },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCustomReleasingBuffTarget);
UClass* Z_Construct_UClass_UCustomReleasingBuffTarget_NoRegister()
{
	return UCustomReleasingBuffTarget::StaticClass();
}
struct Z_Construct_UClass_UCustomReleasingBuffTarget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Script/CustomReleasingBuffTarget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Script/CustomReleasingBuffTarget.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCustomReleasingBuffTarget_GetAllActorsOfClass, "GetAllActorsOfClass" }, // 1564510777
		{ &Z_Construct_UFunction_UCustomReleasingBuffTarget_K2_GetCustomReleasingBuffTarget, "K2_GetCustomReleasingBuffTarget" }, // 2328059439
		{ &Z_Construct_UFunction_UCustomReleasingBuffTarget_K2_GetWorld, "K2_GetWorld" }, // 3938844249
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCustomReleasingBuffTarget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCustomReleasingBuffTarget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_SimpleCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomReleasingBuffTarget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCustomReleasingBuffTarget_Statics::ClassParams = {
	&UCustomReleasingBuffTarget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomReleasingBuffTarget_Statics::Class_MetaDataParams), Z_Construct_UClass_UCustomReleasingBuffTarget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCustomReleasingBuffTarget()
{
	if (!Z_Registration_Info_UClass_UCustomReleasingBuffTarget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCustomReleasingBuffTarget.OuterSingleton, Z_Construct_UClass_UCustomReleasingBuffTarget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCustomReleasingBuffTarget.OuterSingleton;
}
template<> SIMPLECOMBAT_API UClass* StaticClass<UCustomReleasingBuffTarget>()
{
	return UCustomReleasingBuffTarget::StaticClass();
}
UCustomReleasingBuffTarget::UCustomReleasingBuffTarget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCustomReleasingBuffTarget);
UCustomReleasingBuffTarget::~UCustomReleasingBuffTarget() {}
// End Class UCustomReleasingBuffTarget

// Begin Registration
struct Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_Script_CustomReleasingBuffTarget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCustomReleasingBuffTarget, UCustomReleasingBuffTarget::StaticClass, TEXT("UCustomReleasingBuffTarget"), &Z_Registration_Info_UClass_UCustomReleasingBuffTarget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCustomReleasingBuffTarget), 3966775666U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_Script_CustomReleasingBuffTarget_h_2465507581(TEXT("/Script/SimpleCombat"),
	Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_Script_CustomReleasingBuffTarget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_Script_CustomReleasingBuffTarget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
