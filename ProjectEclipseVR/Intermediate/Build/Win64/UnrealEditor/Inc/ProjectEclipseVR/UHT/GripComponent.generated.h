// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GripComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROJECTECLIPSEVR_GripComponent_generated_h
#error "GripComponent.generated.h already included, missing '#pragma once' in GripComponent.h"
#endif
#define PROJECTECLIPSEVR_GripComponent_generated_h

#define FID_Github_ProjectEclipse_ProjectEclipseVR_Source_ProjectEclipseVR_Public_GripComponent_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGripComponent(); \
	friend struct Z_Construct_UClass_UGripComponent_Statics; \
public: \
	DECLARE_CLASS(UGripComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectEclipseVR"), NO_API) \
	DECLARE_SERIALIZER(UGripComponent)


#define FID_Github_ProjectEclipse_ProjectEclipseVR_Source_ProjectEclipseVR_Public_GripComponent_h_25_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGripComponent(UGripComponent&&); \
	UGripComponent(const UGripComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGripComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGripComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGripComponent) \
	NO_API virtual ~UGripComponent();


#define FID_Github_ProjectEclipse_ProjectEclipseVR_Source_ProjectEclipseVR_Public_GripComponent_h_22_PROLOG
#define FID_Github_ProjectEclipse_ProjectEclipseVR_Source_ProjectEclipseVR_Public_GripComponent_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Github_ProjectEclipse_ProjectEclipseVR_Source_ProjectEclipseVR_Public_GripComponent_h_25_INCLASS_NO_PURE_DECLS \
	FID_Github_ProjectEclipse_ProjectEclipseVR_Source_ProjectEclipseVR_Public_GripComponent_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECTECLIPSEVR_API UClass* StaticClass<class UGripComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Github_ProjectEclipse_ProjectEclipseVR_Source_ProjectEclipseVR_Public_GripComponent_h


#define FOREACH_ENUM_EGRIPTYPE(op) \
	op(EGripType::GTE_None) \
	op(EGripType::GTE_Free) \
	op(EGripType::GTE_Snap) \
	op(EGripType::GTE_Custom) 

enum class EGripType : uint8;
template<> struct TIsUEnumClass<EGripType> { enum { Value = true }; };
template<> PROJECTECLIPSEVR_API UEnum* StaticEnum<EGripType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
