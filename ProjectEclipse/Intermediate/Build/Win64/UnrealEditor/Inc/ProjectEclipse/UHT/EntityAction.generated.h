// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EntityAction.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UEntityComponent;
class UInputAction;
#ifdef PROJECTECLIPSE_EntityAction_generated_h
#error "EntityAction.generated.h already included, missing '#pragma once' in EntityAction.h"
#endif
#define PROJECTECLIPSE_EntityAction_generated_h

#define FID_Github_ProjectEclipse_ProjectEclipse_Source_ProjectEclipse_Public_EntityAction_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Execute_Implementation(UEntityComponent* Entity, UInputAction* Input, bool Pressed, const float PressedTime); \
	DECLARE_FUNCTION(execHasTag); \
	DECLARE_FUNCTION(execGetTags); \
	DECLARE_FUNCTION(execIsID); \
	DECLARE_FUNCTION(execGetID); \
	DECLARE_FUNCTION(execGetDisplayName); \
	DECLARE_FUNCTION(execExecute);


#define FID_Github_ProjectEclipse_ProjectEclipse_Source_ProjectEclipse_Public_EntityAction_h_18_CALLBACK_WRAPPERS
#define FID_Github_ProjectEclipse_ProjectEclipse_Source_ProjectEclipse_Public_EntityAction_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEntityAction(); \
	friend struct Z_Construct_UClass_UEntityAction_Statics; \
public: \
	DECLARE_CLASS(UEntityAction, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProjectEclipse"), NO_API) \
	DECLARE_SERIALIZER(UEntityAction) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Github_ProjectEclipse_ProjectEclipse_Source_ProjectEclipse_Public_EntityAction_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UEntityAction(UEntityAction&&); \
	UEntityAction(const UEntityAction&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEntityAction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEntityAction); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UEntityAction) \
	NO_API virtual ~UEntityAction();


#define FID_Github_ProjectEclipse_ProjectEclipse_Source_ProjectEclipse_Public_EntityAction_h_15_PROLOG
#define FID_Github_ProjectEclipse_ProjectEclipse_Source_ProjectEclipse_Public_EntityAction_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Github_ProjectEclipse_ProjectEclipse_Source_ProjectEclipse_Public_EntityAction_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Github_ProjectEclipse_ProjectEclipse_Source_ProjectEclipse_Public_EntityAction_h_18_CALLBACK_WRAPPERS \
	FID_Github_ProjectEclipse_ProjectEclipse_Source_ProjectEclipse_Public_EntityAction_h_18_INCLASS_NO_PURE_DECLS \
	FID_Github_ProjectEclipse_ProjectEclipse_Source_ProjectEclipse_Public_EntityAction_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECTECLIPSE_API UClass* StaticClass<class UEntityAction>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Github_ProjectEclipse_ProjectEclipse_Source_ProjectEclipse_Public_EntityAction_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
