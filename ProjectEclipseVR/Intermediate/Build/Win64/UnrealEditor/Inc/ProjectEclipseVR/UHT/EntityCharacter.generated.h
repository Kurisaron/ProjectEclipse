// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EntityCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UEntityComponent;
#ifdef PROJECTECLIPSEVR_EntityCharacter_generated_h
#error "EntityCharacter.generated.h already included, missing '#pragma once' in EntityCharacter.h"
#endif
#define PROJECTECLIPSEVR_EntityCharacter_generated_h

#define FID_Github_ProjectEclipse_ProjectEclipseVR_Source_ProjectEclipseVR_Public_EntityCharacter_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetEntity);


#define FID_Github_ProjectEclipse_ProjectEclipseVR_Source_ProjectEclipseVR_Public_EntityCharacter_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEntityCharacter(); \
	friend struct Z_Construct_UClass_AEntityCharacter_Statics; \
public: \
	DECLARE_CLASS(AEntityCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectEclipseVR"), NO_API) \
	DECLARE_SERIALIZER(AEntityCharacter)


#define FID_Github_ProjectEclipse_ProjectEclipseVR_Source_ProjectEclipseVR_Public_EntityCharacter_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AEntityCharacter(AEntityCharacter&&); \
	AEntityCharacter(const AEntityCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEntityCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEntityCharacter); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AEntityCharacter) \
	NO_API virtual ~AEntityCharacter();


#define FID_Github_ProjectEclipse_ProjectEclipseVR_Source_ProjectEclipseVR_Public_EntityCharacter_h_10_PROLOG
#define FID_Github_ProjectEclipse_ProjectEclipseVR_Source_ProjectEclipseVR_Public_EntityCharacter_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Github_ProjectEclipse_ProjectEclipseVR_Source_ProjectEclipseVR_Public_EntityCharacter_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Github_ProjectEclipse_ProjectEclipseVR_Source_ProjectEclipseVR_Public_EntityCharacter_h_13_INCLASS_NO_PURE_DECLS \
	FID_Github_ProjectEclipse_ProjectEclipseVR_Source_ProjectEclipseVR_Public_EntityCharacter_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECTECLIPSEVR_API UClass* StaticClass<class AEntityCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Github_ProjectEclipse_ProjectEclipseVR_Source_ProjectEclipseVR_Public_EntityCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
