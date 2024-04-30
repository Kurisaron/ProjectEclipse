// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Faction.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTexture2D;
struct FFactionRank;
#ifdef PROJECTECLIPSE_Faction_generated_h
#error "Faction.generated.h already included, missing '#pragma once' in Faction.h"
#endif
#define PROJECTECLIPSE_Faction_generated_h

#define FID_Github_ProjectEclipse_ProjectEclipse_Source_ProjectEclipse_Public_Faction_h_12_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFactionRank_Statics; \
	PROJECTECLIPSE_API static class UScriptStruct* StaticStruct();


template<> PROJECTECLIPSE_API UScriptStruct* StaticStruct<struct FFactionRank>();

#define FID_Github_ProjectEclipse_ProjectEclipse_Source_ProjectEclipse_Public_Faction_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHasRank); \
	DECLARE_FUNCTION(execGetRank); \
	DECLARE_FUNCTION(execIsID); \
	DECLARE_FUNCTION(execGetID); \
	DECLARE_FUNCTION(execGetDisplayName); \
	DECLARE_FUNCTION(execGetCategory); \
	DECLARE_FUNCTION(execGetIcon);


#define FID_Github_ProjectEclipse_ProjectEclipse_Source_ProjectEclipse_Public_Faction_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFaction(); \
	friend struct Z_Construct_UClass_UFaction_Statics; \
public: \
	DECLARE_CLASS(UFaction, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProjectEclipse"), NO_API) \
	DECLARE_SERIALIZER(UFaction) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Github_ProjectEclipse_ProjectEclipse_Source_ProjectEclipse_Public_Faction_h_28_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UFaction(UFaction&&); \
	UFaction(const UFaction&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFaction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFaction); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFaction) \
	NO_API virtual ~UFaction();


#define FID_Github_ProjectEclipse_ProjectEclipse_Source_ProjectEclipse_Public_Faction_h_25_PROLOG
#define FID_Github_ProjectEclipse_ProjectEclipse_Source_ProjectEclipse_Public_Faction_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Github_ProjectEclipse_ProjectEclipse_Source_ProjectEclipse_Public_Faction_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Github_ProjectEclipse_ProjectEclipse_Source_ProjectEclipse_Public_Faction_h_28_INCLASS_NO_PURE_DECLS \
	FID_Github_ProjectEclipse_ProjectEclipse_Source_ProjectEclipse_Public_Faction_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECTECLIPSE_API UClass* StaticClass<class UFaction>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Github_ProjectEclipse_ProjectEclipse_Source_ProjectEclipse_Public_Faction_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
