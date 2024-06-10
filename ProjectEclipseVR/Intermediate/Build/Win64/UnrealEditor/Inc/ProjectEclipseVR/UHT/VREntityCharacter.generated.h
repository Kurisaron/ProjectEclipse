// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VREntityCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AVREntityCharacter;
#ifdef PROJECTECLIPSEVR_VREntityCharacter_generated_h
#error "VREntityCharacter.generated.h already included, missing '#pragma once' in VREntityCharacter.h"
#endif
#define PROJECTECLIPSEVR_VREntityCharacter_generated_h

#define FID_Github_ProjectEclipse_ProjectEclipseVR_Source_ProjectEclipseVR_Public_VREntityCharacter_h_24_DELEGATE \
PROJECTECLIPSEVR_API void FPlayerInputEvent_DelegateWrapper(const FMulticastScriptDelegate& PlayerInputEvent, AVREntityCharacter* PlayerCharacter, bool Pressed, float PressedTime);


#define FID_Github_ProjectEclipse_ProjectEclipseVR_Source_ProjectEclipseVR_Public_VREntityCharacter_h_29_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInputCounterTracker_Statics; \
	PROJECTECLIPSEVR_API static class UScriptStruct* StaticStruct();


template<> PROJECTECLIPSEVR_API UScriptStruct* StaticStruct<struct FInputCounterTracker>();

#define FID_Github_ProjectEclipse_ProjectEclipseVR_Source_ProjectEclipseVR_Public_VREntityCharacter_h_78_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInputActionPool(); \
	friend struct Z_Construct_UClass_UInputActionPool_Statics; \
public: \
	DECLARE_CLASS(UInputActionPool, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProjectEclipseVR"), NO_API) \
	DECLARE_SERIALIZER(UInputActionPool)


#define FID_Github_ProjectEclipse_ProjectEclipseVR_Source_ProjectEclipseVR_Public_VREntityCharacter_h_78_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInputActionPool(UInputActionPool&&); \
	UInputActionPool(const UInputActionPool&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInputActionPool); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputActionPool); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInputActionPool) \
	NO_API virtual ~UInputActionPool();


#define FID_Github_ProjectEclipse_ProjectEclipseVR_Source_ProjectEclipseVR_Public_VREntityCharacter_h_75_PROLOG
#define FID_Github_ProjectEclipse_ProjectEclipseVR_Source_ProjectEclipseVR_Public_VREntityCharacter_h_78_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Github_ProjectEclipse_ProjectEclipseVR_Source_ProjectEclipseVR_Public_VREntityCharacter_h_78_INCLASS_NO_PURE_DECLS \
	FID_Github_ProjectEclipse_ProjectEclipseVR_Source_ProjectEclipseVR_Public_VREntityCharacter_h_78_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECTECLIPSEVR_API UClass* StaticClass<class UInputActionPool>();

#define FID_Github_ProjectEclipse_ProjectEclipseVR_Source_ProjectEclipseVR_Public_VREntityCharacter_h_102_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHandPoseData_Statics; \
	PROJECTECLIPSEVR_API static class UScriptStruct* StaticStruct();


template<> PROJECTECLIPSEVR_API UScriptStruct* StaticStruct<struct FHandPoseData>();

#define FID_Github_ProjectEclipse_ProjectEclipseVR_Source_ProjectEclipseVR_Public_VREntityCharacter_h_124_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAVREntityCharacter(); \
	friend struct Z_Construct_UClass_AVREntityCharacter_Statics; \
public: \
	DECLARE_CLASS(AVREntityCharacter, AEntityCharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectEclipseVR"), NO_API) \
	DECLARE_SERIALIZER(AVREntityCharacter)


#define FID_Github_ProjectEclipse_ProjectEclipseVR_Source_ProjectEclipseVR_Public_VREntityCharacter_h_124_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AVREntityCharacter(AVREntityCharacter&&); \
	AVREntityCharacter(const AVREntityCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVREntityCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVREntityCharacter); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AVREntityCharacter) \
	NO_API virtual ~AVREntityCharacter();


#define FID_Github_ProjectEclipse_ProjectEclipseVR_Source_ProjectEclipseVR_Public_VREntityCharacter_h_121_PROLOG
#define FID_Github_ProjectEclipse_ProjectEclipseVR_Source_ProjectEclipseVR_Public_VREntityCharacter_h_124_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Github_ProjectEclipse_ProjectEclipseVR_Source_ProjectEclipseVR_Public_VREntityCharacter_h_124_INCLASS_NO_PURE_DECLS \
	FID_Github_ProjectEclipse_ProjectEclipseVR_Source_ProjectEclipseVR_Public_VREntityCharacter_h_124_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECTECLIPSEVR_API UClass* StaticClass<class AVREntityCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Github_ProjectEclipse_ProjectEclipseVR_Source_ProjectEclipseVR_Public_VREntityCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
