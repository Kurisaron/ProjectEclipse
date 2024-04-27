// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Firearm.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROJECTECLIPSE_Firearm_generated_h
#error "Firearm.generated.h already included, missing '#pragma once' in Firearm.h"
#endif
#define PROJECTECLIPSE_Firearm_generated_h

#define FID_Github_ProjectEclipse_ProjectEclipse_Source_ProjectEclipse_Public_Firearm_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFirearm(); \
	friend struct Z_Construct_UClass_UFirearm_Statics; \
public: \
	DECLARE_CLASS(UFirearm, UWeapon, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProjectEclipse"), NO_API) \
	DECLARE_SERIALIZER(UFirearm)


#define FID_Github_ProjectEclipse_ProjectEclipse_Source_ProjectEclipse_Public_Firearm_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UFirearm(UFirearm&&); \
	UFirearm(const UFirearm&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFirearm); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFirearm); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFirearm) \
	NO_API virtual ~UFirearm();


#define FID_Github_ProjectEclipse_ProjectEclipse_Source_ProjectEclipse_Public_Firearm_h_17_PROLOG
#define FID_Github_ProjectEclipse_ProjectEclipse_Source_ProjectEclipse_Public_Firearm_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Github_ProjectEclipse_ProjectEclipse_Source_ProjectEclipse_Public_Firearm_h_20_INCLASS_NO_PURE_DECLS \
	FID_Github_ProjectEclipse_ProjectEclipse_Source_ProjectEclipse_Public_Firearm_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECTECLIPSE_API UClass* StaticClass<class UFirearm>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Github_ProjectEclipse_ProjectEclipse_Source_ProjectEclipse_Public_Firearm_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
