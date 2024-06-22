// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GripMotionControllerComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROJECTECLIPSEVR_GripMotionControllerComponent_generated_h
#error "GripMotionControllerComponent.generated.h already included, missing '#pragma once' in GripMotionControllerComponent.h"
#endif
#define PROJECTECLIPSEVR_GripMotionControllerComponent_generated_h

#define FID_Github_ProjectEclipse_ProjectEclipseVR_Source_ProjectEclipseVR_Public_GripMotionControllerComponent_h_24_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGrabStatus_Statics; \
	PROJECTECLIPSEVR_API static class UScriptStruct* StaticStruct();


template<> PROJECTECLIPSEVR_API UScriptStruct* StaticStruct<struct FGrabStatus>();

#define FID_Github_ProjectEclipse_ProjectEclipseVR_Source_ProjectEclipseVR_Public_GripMotionControllerComponent_h_39_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGripMotionControllerComponent(); \
	friend struct Z_Construct_UClass_UGripMotionControllerComponent_Statics; \
public: \
	DECLARE_CLASS(UGripMotionControllerComponent, UMotionControllerComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectEclipseVR"), NO_API) \
	DECLARE_SERIALIZER(UGripMotionControllerComponent)


#define FID_Github_ProjectEclipse_ProjectEclipseVR_Source_ProjectEclipseVR_Public_GripMotionControllerComponent_h_39_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGripMotionControllerComponent(UGripMotionControllerComponent&&); \
	UGripMotionControllerComponent(const UGripMotionControllerComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGripMotionControllerComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGripMotionControllerComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGripMotionControllerComponent) \
	NO_API virtual ~UGripMotionControllerComponent();


#define FID_Github_ProjectEclipse_ProjectEclipseVR_Source_ProjectEclipseVR_Public_GripMotionControllerComponent_h_36_PROLOG
#define FID_Github_ProjectEclipse_ProjectEclipseVR_Source_ProjectEclipseVR_Public_GripMotionControllerComponent_h_39_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Github_ProjectEclipse_ProjectEclipseVR_Source_ProjectEclipseVR_Public_GripMotionControllerComponent_h_39_INCLASS_NO_PURE_DECLS \
	FID_Github_ProjectEclipse_ProjectEclipseVR_Source_ProjectEclipseVR_Public_GripMotionControllerComponent_h_39_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECTECLIPSEVR_API UClass* StaticClass<class UGripMotionControllerComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Github_ProjectEclipse_ProjectEclipseVR_Source_ProjectEclipseVR_Public_GripMotionControllerComponent_h


#define FOREACH_ENUM_EHANDSIDE(op) \
	op(EHandSide::HSE_Left) \
	op(EHandSide::HSE_Right) 

enum class EHandSide : uint8;
template<> struct TIsUEnumClass<EHandSide> { enum { Value = true }; };
template<> PROJECTECLIPSEVR_API UEnum* StaticEnum<EHandSide>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
