// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CPP_MP/CPP_MPGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCPP_MPGameMode() {}

// Begin Cross Module References
CPP_MP_API UClass* Z_Construct_UClass_ACPP_MPGameMode();
CPP_MP_API UClass* Z_Construct_UClass_ACPP_MPGameMode_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_CPP_MP();
// End Cross Module References

// Begin Class ACPP_MPGameMode
void ACPP_MPGameMode::StaticRegisterNativesACPP_MPGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACPP_MPGameMode);
UClass* Z_Construct_UClass_ACPP_MPGameMode_NoRegister()
{
	return ACPP_MPGameMode::StaticClass();
}
struct Z_Construct_UClass_ACPP_MPGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "CPP_MPGameMode.h" },
		{ "ModuleRelativePath", "CPP_MPGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACPP_MPGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ACPP_MPGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_CPP_MP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_MPGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACPP_MPGameMode_Statics::ClassParams = {
	&ACPP_MPGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_MPGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ACPP_MPGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACPP_MPGameMode()
{
	if (!Z_Registration_Info_UClass_ACPP_MPGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACPP_MPGameMode.OuterSingleton, Z_Construct_UClass_ACPP_MPGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACPP_MPGameMode.OuterSingleton;
}
template<> CPP_MP_API UClass* StaticClass<ACPP_MPGameMode>()
{
	return ACPP_MPGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACPP_MPGameMode);
ACPP_MPGameMode::~ACPP_MPGameMode() {}
// End Class ACPP_MPGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5Projects_UE_MP_CPP_CPP_MP_Source_CPP_MP_CPP_MPGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACPP_MPGameMode, ACPP_MPGameMode::StaticClass, TEXT("ACPP_MPGameMode"), &Z_Registration_Info_UClass_ACPP_MPGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACPP_MPGameMode), 1962003382U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5Projects_UE_MP_CPP_CPP_MP_Source_CPP_MP_CPP_MPGameMode_h_3000662568(TEXT("/Script/CPP_MP"),
	Z_CompiledInDeferFile_FID_UE5Projects_UE_MP_CPP_CPP_MP_Source_CPP_MP_CPP_MPGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5Projects_UE_MP_CPP_CPP_MP_Source_CPP_MP_CPP_MPGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
