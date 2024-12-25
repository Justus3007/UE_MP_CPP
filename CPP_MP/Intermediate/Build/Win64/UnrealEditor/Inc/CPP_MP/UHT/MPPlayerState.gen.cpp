// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CPP_MP/Public/Game/PlayerState/MPPlayerState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMPPlayerState() {}

// Begin Cross Module References
CPP_MP_API UClass* Z_Construct_UClass_AMPPlayerState();
CPP_MP_API UClass* Z_Construct_UClass_AMPPlayerState_NoRegister();
CPP_MP_API UClass* Z_Construct_UClass_UMPAbilitySystemComponent_NoRegister();
CPP_MP_API UClass* Z_Construct_UClass_UMPAttributeSet_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerState();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_CPP_MP();
// End Cross Module References

// Begin Class AMPPlayerState Function GetMPAbilitySystemComponent
struct Z_Construct_UFunction_AMPPlayerState_GetMPAbilitySystemComponent_Statics
{
	struct MPPlayerState_eventGetMPAbilitySystemComponent_Parms
	{
		UMPAbilitySystemComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Game/PlayerState/MPPlayerState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMPPlayerState_GetMPAbilitySystemComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MPPlayerState_eventGetMPAbilitySystemComponent_Parms, ReturnValue), Z_Construct_UClass_UMPAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMPPlayerState_GetMPAbilitySystemComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMPPlayerState_GetMPAbilitySystemComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMPPlayerState_GetMPAbilitySystemComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMPPlayerState_GetMPAbilitySystemComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMPPlayerState, nullptr, "GetMPAbilitySystemComponent", nullptr, nullptr, Z_Construct_UFunction_AMPPlayerState_GetMPAbilitySystemComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMPPlayerState_GetMPAbilitySystemComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMPPlayerState_GetMPAbilitySystemComponent_Statics::MPPlayerState_eventGetMPAbilitySystemComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMPPlayerState_GetMPAbilitySystemComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMPPlayerState_GetMPAbilitySystemComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMPPlayerState_GetMPAbilitySystemComponent_Statics::MPPlayerState_eventGetMPAbilitySystemComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMPPlayerState_GetMPAbilitySystemComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMPPlayerState_GetMPAbilitySystemComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMPPlayerState::execGetMPAbilitySystemComponent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UMPAbilitySystemComponent**)Z_Param__Result=P_THIS->GetMPAbilitySystemComponent();
	P_NATIVE_END;
}
// End Class AMPPlayerState Function GetMPAbilitySystemComponent

// Begin Class AMPPlayerState Function GetMPAttributeSet
struct Z_Construct_UFunction_AMPPlayerState_GetMPAttributeSet_Statics
{
	struct MPPlayerState_eventGetMPAttributeSet_Parms
	{
		UMPAttributeSet* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Game/PlayerState/MPPlayerState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMPPlayerState_GetMPAttributeSet_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MPPlayerState_eventGetMPAttributeSet_Parms, ReturnValue), Z_Construct_UClass_UMPAttributeSet_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMPPlayerState_GetMPAttributeSet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMPPlayerState_GetMPAttributeSet_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMPPlayerState_GetMPAttributeSet_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMPPlayerState_GetMPAttributeSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMPPlayerState, nullptr, "GetMPAttributeSet", nullptr, nullptr, Z_Construct_UFunction_AMPPlayerState_GetMPAttributeSet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMPPlayerState_GetMPAttributeSet_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMPPlayerState_GetMPAttributeSet_Statics::MPPlayerState_eventGetMPAttributeSet_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMPPlayerState_GetMPAttributeSet_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMPPlayerState_GetMPAttributeSet_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMPPlayerState_GetMPAttributeSet_Statics::MPPlayerState_eventGetMPAttributeSet_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMPPlayerState_GetMPAttributeSet()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMPPlayerState_GetMPAttributeSet_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMPPlayerState::execGetMPAttributeSet)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UMPAttributeSet**)Z_Param__Result=P_THIS->GetMPAttributeSet();
	P_NATIVE_END;
}
// End Class AMPPlayerState Function GetMPAttributeSet

// Begin Class AMPPlayerState
void AMPPlayerState::StaticRegisterNativesAMPPlayerState()
{
	UClass* Class = AMPPlayerState::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetMPAbilitySystemComponent", &AMPPlayerState::execGetMPAbilitySystemComponent },
		{ "GetMPAttributeSet", &AMPPlayerState::execGetMPAttributeSet },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMPPlayerState);
UClass* Z_Construct_UClass_AMPPlayerState_NoRegister()
{
	return AMPPlayerState::StaticClass();
}
struct Z_Construct_UClass_AMPPlayerState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Game/PlayerState/MPPlayerState.h" },
		{ "ModuleRelativePath", "Public/Game/PlayerState/MPPlayerState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MPAbilitySystemComp_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MPPlayerState" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Game/PlayerState/MPPlayerState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MPAttributeSet_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MPPlayerState" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Game/PlayerState/MPPlayerState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MPAbilitySystemComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MPAttributeSet;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AMPPlayerState_GetMPAbilitySystemComponent, "GetMPAbilitySystemComponent" }, // 2293870999
		{ &Z_Construct_UFunction_AMPPlayerState_GetMPAttributeSet, "GetMPAttributeSet" }, // 3363057699
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMPPlayerState>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMPPlayerState_Statics::NewProp_MPAbilitySystemComp = { "MPAbilitySystemComp", nullptr, (EPropertyFlags)0x014400000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMPPlayerState, MPAbilitySystemComp), Z_Construct_UClass_UMPAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MPAbilitySystemComp_MetaData), NewProp_MPAbilitySystemComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMPPlayerState_Statics::NewProp_MPAttributeSet = { "MPAttributeSet", nullptr, (EPropertyFlags)0x014400000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMPPlayerState, MPAttributeSet), Z_Construct_UClass_UMPAttributeSet_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MPAttributeSet_MetaData), NewProp_MPAttributeSet_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMPPlayerState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMPPlayerState_Statics::NewProp_MPAbilitySystemComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMPPlayerState_Statics::NewProp_MPAttributeSet,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMPPlayerState_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMPPlayerState_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerState,
	(UObject* (*)())Z_Construct_UPackage__Script_CPP_MP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMPPlayerState_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AMPPlayerState_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UAbilitySystemInterface_NoRegister, (int32)VTABLE_OFFSET(AMPPlayerState, IAbilitySystemInterface), false },  // 2272790346
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMPPlayerState_Statics::ClassParams = {
	&AMPPlayerState::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AMPPlayerState_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AMPPlayerState_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMPPlayerState_Statics::Class_MetaDataParams), Z_Construct_UClass_AMPPlayerState_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMPPlayerState()
{
	if (!Z_Registration_Info_UClass_AMPPlayerState.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMPPlayerState.OuterSingleton, Z_Construct_UClass_AMPPlayerState_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMPPlayerState.OuterSingleton;
}
template<> CPP_MP_API UClass* StaticClass<AMPPlayerState>()
{
	return AMPPlayerState::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMPPlayerState);
AMPPlayerState::~AMPPlayerState() {}
// End Class AMPPlayerState

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5Projects_UE_MP_CPP_CPP_MP_Source_CPP_MP_Public_Game_PlayerState_MPPlayerState_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMPPlayerState, AMPPlayerState::StaticClass, TEXT("AMPPlayerState"), &Z_Registration_Info_UClass_AMPPlayerState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMPPlayerState), 2048175388U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5Projects_UE_MP_CPP_CPP_MP_Source_CPP_MP_Public_Game_PlayerState_MPPlayerState_h_2655007001(TEXT("/Script/CPP_MP"),
	Z_CompiledInDeferFile_FID_UE5Projects_UE_MP_CPP_CPP_MP_Source_CPP_MP_Public_Game_PlayerState_MPPlayerState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5Projects_UE_MP_CPP_CPP_MP_Source_CPP_MP_Public_Game_PlayerState_MPPlayerState_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
