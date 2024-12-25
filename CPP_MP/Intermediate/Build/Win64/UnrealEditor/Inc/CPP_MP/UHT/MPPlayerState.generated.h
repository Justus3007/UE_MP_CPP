// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Game/PlayerState/MPPlayerState.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMPAbilitySystemComponent;
class UMPAttributeSet;
#ifdef CPP_MP_MPPlayerState_generated_h
#error "MPPlayerState.generated.h already included, missing '#pragma once' in MPPlayerState.h"
#endif
#define CPP_MP_MPPlayerState_generated_h

#define FID_UE5Projects_UE_MP_CPP_CPP_MP_Source_CPP_MP_Public_Game_PlayerState_MPPlayerState_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetMPAttributeSet); \
	DECLARE_FUNCTION(execGetMPAbilitySystemComponent);


#define FID_UE5Projects_UE_MP_CPP_CPP_MP_Source_CPP_MP_Public_Game_PlayerState_MPPlayerState_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMPPlayerState(); \
	friend struct Z_Construct_UClass_AMPPlayerState_Statics; \
public: \
	DECLARE_CLASS(AMPPlayerState, APlayerState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CPP_MP"), NO_API) \
	DECLARE_SERIALIZER(AMPPlayerState) \
	virtual UObject* _getUObject() const override { return const_cast<AMPPlayerState*>(this); }


#define FID_UE5Projects_UE_MP_CPP_CPP_MP_Source_CPP_MP_Public_Game_PlayerState_MPPlayerState_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AMPPlayerState(AMPPlayerState&&); \
	AMPPlayerState(const AMPPlayerState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMPPlayerState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMPPlayerState); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMPPlayerState) \
	NO_API virtual ~AMPPlayerState();


#define FID_UE5Projects_UE_MP_CPP_CPP_MP_Source_CPP_MP_Public_Game_PlayerState_MPPlayerState_h_15_PROLOG
#define FID_UE5Projects_UE_MP_CPP_CPP_MP_Source_CPP_MP_Public_Game_PlayerState_MPPlayerState_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5Projects_UE_MP_CPP_CPP_MP_Source_CPP_MP_Public_Game_PlayerState_MPPlayerState_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE5Projects_UE_MP_CPP_CPP_MP_Source_CPP_MP_Public_Game_PlayerState_MPPlayerState_h_18_INCLASS_NO_PURE_DECLS \
	FID_UE5Projects_UE_MP_CPP_CPP_MP_Source_CPP_MP_Public_Game_PlayerState_MPPlayerState_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CPP_MP_API UClass* StaticClass<class AMPPlayerState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5Projects_UE_MP_CPP_CPP_MP_Source_CPP_MP_Public_Game_PlayerState_MPPlayerState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
