// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ProjectEclipseCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROJECTECLIPSE_ProjectEclipseCharacter_generated_h
#error "ProjectEclipseCharacter.generated.h already included, missing '#pragma once' in ProjectEclipseCharacter.h"
#endif
#define PROJECTECLIPSE_ProjectEclipseCharacter_generated_h

#define FID_Github_ProjectEclipse_ProjectEclipse_Source_ProjectEclipse_ProjectEclipseCharacter_h_24_DELEGATE \
PROJECTECLIPSE_API void FPlayerCharacterInputEvent_DelegateWrapper(const FMulticastScriptDelegate& PlayerCharacterInputEvent, bool Pressed, const float PressedTime);


#define FID_Github_ProjectEclipse_ProjectEclipse_Source_ProjectEclipse_ProjectEclipseCharacter_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAProjectEclipseCharacter(); \
	friend struct Z_Construct_UClass_AProjectEclipseCharacter_Statics; \
public: \
	DECLARE_CLASS(AProjectEclipseCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectEclipse"), NO_API) \
	DECLARE_SERIALIZER(AProjectEclipseCharacter)


#define FID_Github_ProjectEclipse_ProjectEclipse_Source_ProjectEclipse_ProjectEclipseCharacter_h_29_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AProjectEclipseCharacter(AProjectEclipseCharacter&&); \
	AProjectEclipseCharacter(const AProjectEclipseCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProjectEclipseCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProjectEclipseCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AProjectEclipseCharacter) \
	NO_API virtual ~AProjectEclipseCharacter();


#define FID_Github_ProjectEclipse_ProjectEclipse_Source_ProjectEclipse_ProjectEclipseCharacter_h_26_PROLOG
#define FID_Github_ProjectEclipse_ProjectEclipse_Source_ProjectEclipse_ProjectEclipseCharacter_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Github_ProjectEclipse_ProjectEclipse_Source_ProjectEclipse_ProjectEclipseCharacter_h_29_INCLASS_NO_PURE_DECLS \
	FID_Github_ProjectEclipse_ProjectEclipse_Source_ProjectEclipse_ProjectEclipseCharacter_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECTECLIPSE_API UClass* StaticClass<class AProjectEclipseCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Github_ProjectEclipse_ProjectEclipse_Source_ProjectEclipse_ProjectEclipseCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
