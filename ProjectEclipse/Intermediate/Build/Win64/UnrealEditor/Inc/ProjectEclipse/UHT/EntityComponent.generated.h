// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EntityComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTrait;
struct FFactionStatus;
#ifdef PROJECTECLIPSE_EntityComponent_generated_h
#error "EntityComponent.generated.h already included, missing '#pragma once' in EntityComponent.h"
#endif
#define PROJECTECLIPSE_EntityComponent_generated_h

#define FID_Github_ProjectEclipse_ProjectEclipse_Source_ProjectEclipse_Public_EntityComponent_h_16_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFactionStatus_Statics; \
	PROJECTECLIPSE_API static class UScriptStruct* StaticStruct();


template<> PROJECTECLIPSE_API UScriptStruct* StaticStruct<struct FFactionStatus>();

#define FID_Github_ProjectEclipse_ProjectEclipse_Source_ProjectEclipse_Public_EntityComponent_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetReputation); \
	DECLARE_FUNCTION(execGetTrait); \
	DECLARE_FUNCTION(execHasTrait); \
	DECLARE_FUNCTION(execGetAttributeValue); \
	DECLARE_FUNCTION(execHasAttribute);


#define FID_Github_ProjectEclipse_ProjectEclipse_Source_ProjectEclipse_Public_EntityComponent_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEntityComponent(); \
	friend struct Z_Construct_UClass_UEntityComponent_Statics; \
public: \
	DECLARE_CLASS(UEntityComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectEclipse"), NO_API) \
	DECLARE_SERIALIZER(UEntityComponent)


#define FID_Github_ProjectEclipse_ProjectEclipse_Source_ProjectEclipse_Public_EntityComponent_h_32_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UEntityComponent(UEntityComponent&&); \
	UEntityComponent(const UEntityComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEntityComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEntityComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UEntityComponent) \
	NO_API virtual ~UEntityComponent();


#define FID_Github_ProjectEclipse_ProjectEclipse_Source_ProjectEclipse_Public_EntityComponent_h_29_PROLOG
#define FID_Github_ProjectEclipse_ProjectEclipse_Source_ProjectEclipse_Public_EntityComponent_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Github_ProjectEclipse_ProjectEclipse_Source_ProjectEclipse_Public_EntityComponent_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Github_ProjectEclipse_ProjectEclipse_Source_ProjectEclipse_Public_EntityComponent_h_32_INCLASS_NO_PURE_DECLS \
	FID_Github_ProjectEclipse_ProjectEclipse_Source_ProjectEclipse_Public_EntityComponent_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECTECLIPSE_API UClass* StaticClass<class UEntityComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Github_ProjectEclipse_ProjectEclipse_Source_ProjectEclipse_Public_EntityComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
