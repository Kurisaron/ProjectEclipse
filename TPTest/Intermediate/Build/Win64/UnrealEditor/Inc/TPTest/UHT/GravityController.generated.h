// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GravityController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TPTEST_GravityController_generated_h
#error "GravityController.generated.h already included, missing '#pragma once' in GravityController.h"
#endif
#define TPTEST_GravityController_generated_h

#define FID_Github_ProjectEclipse_TPTest_Source_TPTest_GravityController_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetGravityWorldRotation); \
	DECLARE_FUNCTION(execGetGravityRelativeRotation);


#define FID_Github_ProjectEclipse_TPTest_Source_TPTest_GravityController_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGravityController(); \
	friend struct Z_Construct_UClass_AGravityController_Statics; \
public: \
	DECLARE_CLASS(AGravityController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TPTest"), NO_API) \
	DECLARE_SERIALIZER(AGravityController)


#define FID_Github_ProjectEclipse_TPTest_Source_TPTest_GravityController_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGravityController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AGravityController(AGravityController&&); \
	AGravityController(const AGravityController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGravityController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGravityController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGravityController) \
	NO_API virtual ~AGravityController();


#define FID_Github_ProjectEclipse_TPTest_Source_TPTest_GravityController_h_12_PROLOG
#define FID_Github_ProjectEclipse_TPTest_Source_TPTest_GravityController_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Github_ProjectEclipse_TPTest_Source_TPTest_GravityController_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Github_ProjectEclipse_TPTest_Source_TPTest_GravityController_h_15_INCLASS_NO_PURE_DECLS \
	FID_Github_ProjectEclipse_TPTest_Source_TPTest_GravityController_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TPTEST_API UClass* StaticClass<class AGravityController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Github_ProjectEclipse_TPTest_Source_TPTest_GravityController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
