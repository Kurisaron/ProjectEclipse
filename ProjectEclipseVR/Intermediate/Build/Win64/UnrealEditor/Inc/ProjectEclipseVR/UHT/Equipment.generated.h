// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Equipment.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UInputMappingContext;
#ifdef PROJECTECLIPSEVR_Equipment_generated_h
#error "Equipment.generated.h already included, missing '#pragma once' in Equipment.h"
#endif
#define PROJECTECLIPSEVR_Equipment_generated_h

#define FID_Github_ProjectEclipse_ProjectEclipseVR_Source_ProjectEclipseVR_Public_Equipment_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetInputs);


#define FID_Github_ProjectEclipse_ProjectEclipseVR_Source_ProjectEclipseVR_Public_Equipment_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEquipment(); \
	friend struct Z_Construct_UClass_AEquipment_Statics; \
public: \
	DECLARE_CLASS(AEquipment, AItem, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectEclipseVR"), NO_API) \
	DECLARE_SERIALIZER(AEquipment)


#define FID_Github_ProjectEclipse_ProjectEclipseVR_Source_ProjectEclipseVR_Public_Equipment_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AEquipment(AEquipment&&); \
	AEquipment(const AEquipment&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEquipment); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEquipment); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AEquipment) \
	NO_API virtual ~AEquipment();


#define FID_Github_ProjectEclipse_ProjectEclipseVR_Source_ProjectEclipseVR_Public_Equipment_h_13_PROLOG
#define FID_Github_ProjectEclipse_ProjectEclipseVR_Source_ProjectEclipseVR_Public_Equipment_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Github_ProjectEclipse_ProjectEclipseVR_Source_ProjectEclipseVR_Public_Equipment_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Github_ProjectEclipse_ProjectEclipseVR_Source_ProjectEclipseVR_Public_Equipment_h_16_INCLASS_NO_PURE_DECLS \
	FID_Github_ProjectEclipse_ProjectEclipseVR_Source_ProjectEclipseVR_Public_Equipment_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECTECLIPSEVR_API UClass* StaticClass<class AEquipment>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Github_ProjectEclipse_ProjectEclipseVR_Source_ProjectEclipseVR_Public_Equipment_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
