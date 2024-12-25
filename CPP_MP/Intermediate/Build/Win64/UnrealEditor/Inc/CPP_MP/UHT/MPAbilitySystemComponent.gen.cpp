// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CPP_MP/Public/AbilitySystem/MPAbilitySystemComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMPAbilitySystemComponent() {}

// Begin Cross Module References
CPP_MP_API UClass* Z_Construct_UClass_UMPAbilitySystemComponent();
CPP_MP_API UClass* Z_Construct_UClass_UMPAbilitySystemComponent_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent();
UPackage* Z_Construct_UPackage__Script_CPP_MP();
// End Cross Module References

// Begin Class UMPAbilitySystemComponent
void UMPAbilitySystemComponent::StaticRegisterNativesUMPAbilitySystemComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMPAbilitySystemComponent);
UClass* Z_Construct_UClass_UMPAbilitySystemComponent_NoRegister()
{
	return UMPAbilitySystemComponent::StaticClass();
}
struct Z_Construct_UClass_UMPAbilitySystemComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Object LOD Lighting Transform Sockets TextureStreaming Object LOD Lighting Transform Sockets TextureStreaming" },
		{ "IncludePath", "AbilitySystem/MPAbilitySystemComponent.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/MPAbilitySystemComponent.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMPAbilitySystemComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMPAbilitySystemComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAbilitySystemComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_CPP_MP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMPAbilitySystemComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMPAbilitySystemComponent_Statics::ClassParams = {
	&UMPAbilitySystemComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x00B010A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMPAbilitySystemComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UMPAbilitySystemComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMPAbilitySystemComponent()
{
	if (!Z_Registration_Info_UClass_UMPAbilitySystemComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMPAbilitySystemComponent.OuterSingleton, Z_Construct_UClass_UMPAbilitySystemComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMPAbilitySystemComponent.OuterSingleton;
}
template<> CPP_MP_API UClass* StaticClass<UMPAbilitySystemComponent>()
{
	return UMPAbilitySystemComponent::StaticClass();
}
UMPAbilitySystemComponent::UMPAbilitySystemComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMPAbilitySystemComponent);
UMPAbilitySystemComponent::~UMPAbilitySystemComponent() {}
// End Class UMPAbilitySystemComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5Projects_UE_MP_CPP_CPP_MP_Source_CPP_MP_Public_AbilitySystem_MPAbilitySystemComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMPAbilitySystemComponent, UMPAbilitySystemComponent::StaticClass, TEXT("UMPAbilitySystemComponent"), &Z_Registration_Info_UClass_UMPAbilitySystemComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMPAbilitySystemComponent), 564644378U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5Projects_UE_MP_CPP_CPP_MP_Source_CPP_MP_Public_AbilitySystem_MPAbilitySystemComponent_h_4284849688(TEXT("/Script/CPP_MP"),
	Z_CompiledInDeferFile_FID_UE5Projects_UE_MP_CPP_CPP_MP_Source_CPP_MP_Public_AbilitySystem_MPAbilitySystemComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5Projects_UE_MP_CPP_CPP_MP_Source_CPP_MP_Public_AbilitySystem_MPAbilitySystemComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
