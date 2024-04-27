// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Trait.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef PROJECTECLIPSE_Trait_generated_h
#error "Trait.generated.h already included, missing '#pragma once' in Trait.h"
#endif
#define PROJECTECLIPSE_Trait_generated_h

#define FID_Github_ProjectEclipse_ProjectEclipse_Source_ProjectEclipse_Public_Trait_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIsKeyName); \
	DECLARE_FUNCTION(execGetKeyName); \
	DECLARE_FUNCTION(execGetDisplayName); \
	DECLARE_FUNCTION(execRemoveTrait); \
	DECLARE_FUNCTION(execApplyTrait);


#define FID_Github_ProjectEclipse_ProjectEclipse_Source_ProjectEclipse_Public_Trait_h_16_CALLBACK_WRAPPERS
#define FID_Github_ProjectEclipse_ProjectEclipse_Source_ProjectEclipse_Public_Trait_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTrait(); \
	friend struct Z_Construct_UClass_UTrait_Statics; \
public: \
	DECLARE_CLASS(UTrait, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProjectEclipse"), NO_API) \
	DECLARE_SERIALIZER(UTrait) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Github_ProjectEclipse_ProjectEclipse_Source_ProjectEclipse_Public_Trait_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UTrait(UTrait&&); \
	UTrait(const UTrait&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTrait); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTrait); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UTrait) \
	NO_API virtual ~UTrait();


#define FID_Github_ProjectEclipse_ProjectEclipse_Source_ProjectEclipse_Public_Trait_h_13_PROLOG
#define FID_Github_ProjectEclipse_ProjectEclipse_Source_ProjectEclipse_Public_Trait_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Github_ProjectEclipse_ProjectEclipse_Source_ProjectEclipse_Public_Trait_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Github_ProjectEclipse_ProjectEclipse_Source_ProjectEclipse_Public_Trait_h_16_CALLBACK_WRAPPERS \
	FID_Github_ProjectEclipse_ProjectEclipse_Source_ProjectEclipse_Public_Trait_h_16_INCLASS_NO_PURE_DECLS \
	FID_Github_ProjectEclipse_ProjectEclipse_Source_ProjectEclipse_Public_Trait_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECTECLIPSE_API UClass* StaticClass<class UTrait>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Github_ProjectEclipse_ProjectEclipse_Source_ProjectEclipse_Public_Trait_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
