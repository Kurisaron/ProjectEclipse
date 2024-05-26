// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TPTestCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TPTEST_TPTestCharacter_generated_h
#error "TPTestCharacter.generated.h already included, missing '#pragma once' in TPTestCharacter.h"
#endif
#define TPTEST_TPTestCharacter_generated_h

#define FID_Github_ProjectEclipse_TPTest_Source_TPTest_TPTestCharacter_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATPTestCharacter(); \
	friend struct Z_Construct_UClass_ATPTestCharacter_Statics; \
public: \
	DECLARE_CLASS(ATPTestCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TPTest"), NO_API) \
	DECLARE_SERIALIZER(ATPTestCharacter)


#define FID_Github_ProjectEclipse_TPTest_Source_TPTest_TPTestCharacter_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ATPTestCharacter(ATPTestCharacter&&); \
	ATPTestCharacter(const ATPTestCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATPTestCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATPTestCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATPTestCharacter) \
	NO_API virtual ~ATPTestCharacter();


#define FID_Github_ProjectEclipse_TPTest_Source_TPTest_TPTestCharacter_h_18_PROLOG
#define FID_Github_ProjectEclipse_TPTest_Source_TPTest_TPTestCharacter_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Github_ProjectEclipse_TPTest_Source_TPTest_TPTestCharacter_h_21_INCLASS_NO_PURE_DECLS \
	FID_Github_ProjectEclipse_TPTest_Source_TPTest_TPTestCharacter_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TPTEST_API UClass* StaticClass<class ATPTestCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Github_ProjectEclipse_TPTest_Source_TPTest_TPTestCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
