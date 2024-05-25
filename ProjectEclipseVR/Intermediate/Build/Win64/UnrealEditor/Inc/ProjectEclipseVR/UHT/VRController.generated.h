// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VRController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROJECTECLIPSEVR_VRController_generated_h
#error "VRController.generated.h already included, missing '#pragma once' in VRController.h"
#endif
#define PROJECTECLIPSEVR_VRController_generated_h

#define FID_Github_ProjectEclipse_ProjectEclipseVR_Source_ProjectEclipseVR_Public_VRController_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetGravityWorldRotation); \
	DECLARE_FUNCTION(execGetGravityRelativeRotation);


#define FID_Github_ProjectEclipse_ProjectEclipseVR_Source_ProjectEclipseVR_Public_VRController_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAVRController(); \
	friend struct Z_Construct_UClass_AVRController_Statics; \
public: \
	DECLARE_CLASS(AVRController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectEclipseVR"), NO_API) \
	DECLARE_SERIALIZER(AVRController)


#define FID_Github_ProjectEclipse_ProjectEclipseVR_Source_ProjectEclipseVR_Public_VRController_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AVRController(AVRController&&); \
	AVRController(const AVRController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVRController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVRController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AVRController) \
	NO_API virtual ~AVRController();


#define FID_Github_ProjectEclipse_ProjectEclipseVR_Source_ProjectEclipseVR_Public_VRController_h_13_PROLOG
#define FID_Github_ProjectEclipse_ProjectEclipseVR_Source_ProjectEclipseVR_Public_VRController_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Github_ProjectEclipse_ProjectEclipseVR_Source_ProjectEclipseVR_Public_VRController_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Github_ProjectEclipse_ProjectEclipseVR_Source_ProjectEclipseVR_Public_VRController_h_16_INCLASS_NO_PURE_DECLS \
	FID_Github_ProjectEclipse_ProjectEclipseVR_Source_ProjectEclipseVR_Public_VRController_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECTECLIPSEVR_API UClass* StaticClass<class AVRController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Github_ProjectEclipse_ProjectEclipseVR_Source_ProjectEclipseVR_Public_VRController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
