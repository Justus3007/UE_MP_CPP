// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CPP_MP/Public/AbilitySystem/Attributes/MPAttributeSet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMPAttributeSet() {}

// Begin Cross Module References
CPP_MP_API UClass* Z_Construct_UClass_UMPAttributeSet();
CPP_MP_API UClass* Z_Construct_UClass_UMPAttributeSet_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAttributeSet();
UPackage* Z_Construct_UPackage__Script_CPP_MP();
// End Cross Module References

// Begin Class UMPAttributeSet
void UMPAttributeSet::StaticRegisterNativesUMPAttributeSet()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMPAttributeSet);
UClass* Z_Construct_UClass_UMPAttributeSet_NoRegister()
{
	return UMPAttributeSet::StaticClass();
}
struct Z_Construct_UClass_UMPAttributeSet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AbilitySystem/Attributes/MPAttributeSet.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Attributes/MPAttributeSet.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMPAttributeSet>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMPAttributeSet_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAttributeSet,
	(UObject* (*)())Z_Construct_UPackage__Script_CPP_MP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMPAttributeSet_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMPAttributeSet_Statics::ClassParams = {
	&UMPAttributeSet::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x003000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMPAttributeSet_Statics::Class_MetaDataParams), Z_Construct_UClass_UMPAttributeSet_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMPAttributeSet()
{
	if (!Z_Registration_Info_UClass_UMPAttributeSet.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMPAttributeSet.OuterSingleton, Z_Construct_UClass_UMPAttributeSet_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMPAttributeSet.OuterSingleton;
}
template<> CPP_MP_API UClass* StaticClass<UMPAttributeSet>()
{
	return UMPAttributeSet::StaticClass();
}
UMPAttributeSet::UMPAttributeSet(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMPAttributeSet);
UMPAttributeSet::~UMPAttributeSet() {}
// End Class UMPAttributeSet

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5Projects_UE_MP_CPP_CPP_MP_Source_CPP_MP_Public_AbilitySystem_Attributes_MPAttributeSet_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMPAttributeSet, UMPAttributeSet::StaticClass, TEXT("UMPAttributeSet"), &Z_Registration_Info_UClass_UMPAttributeSet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMPAttributeSet), 2678535598U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5Projects_UE_MP_CPP_CPP_MP_Source_CPP_MP_Public_AbilitySystem_Attributes_MPAttributeSet_h_13760806(TEXT("/Script/CPP_MP"),
	Z_CompiledInDeferFile_FID_UE5Projects_UE_MP_CPP_CPP_MP_Source_CPP_MP_Public_AbilitySystem_Attributes_MPAttributeSet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5Projects_UE_MP_CPP_CPP_MP_Source_CPP_MP_Public_AbilitySystem_Attributes_MPAttributeSet_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
