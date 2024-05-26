// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TPTestGameMode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TPTEST_TPTestGameMode_generated_h
#error "TPTestGameMode.generated.h already included, missing '#pragma once' in TPTestGameMode.h"
#endif
#define TPTEST_TPTestGameMode_generated_h

#define FID_Github_ProjectEclipse_TPTest_Source_TPTest_TPTestGameMode_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATPTestGameMode(); \
	friend struct Z_Construct_UClass_ATPTestGameMode_Statics; \
public: \
	DECLARE_CLASS(ATPTestGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/TPTest"), TPTEST_API) \
	DECLARE_SERIALIZER(ATPTestGameMode)


#define FID_Github_ProjectEclipse_TPTest_Source_TPTest_TPTestGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ATPTestGameMode(ATPTestGameMode&&); \
	ATPTestGameMode(const ATPTestGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TPTEST_API, ATPTestGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATPTestGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATPTestGameMode) \
	TPTEST_API virtual ~ATPTestGameMode();


#define FID_Github_ProjectEclipse_TPTest_Source_TPTest_TPTestGameMode_h_9_PROLOG
#define FID_Github_ProjectEclipse_TPTest_Source_TPTest_TPTestGameMode_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Github_ProjectEclipse_TPTest_Source_TPTest_TPTestGameMode_h_12_INCLASS_NO_PURE_DECLS \
	FID_Github_ProjectEclipse_TPTest_Source_TPTest_TPTestGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TPTEST_API UClass* StaticClass<class ATPTestGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Github_ProjectEclipse_TPTest_Source_TPTest_TPTestGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
