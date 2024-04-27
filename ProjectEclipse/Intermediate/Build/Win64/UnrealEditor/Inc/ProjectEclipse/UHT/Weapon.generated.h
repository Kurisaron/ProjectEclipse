// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Weapon.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROJECTECLIPSE_Weapon_generated_h
#error "Weapon.generated.h already included, missing '#pragma once' in Weapon.h"
#endif
#define PROJECTECLIPSE_Weapon_generated_h

#define FID_Github_ProjectEclipse_ProjectEclipse_Source_ProjectEclipse_Public_Weapon_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWeapon(); \
	friend struct Z_Construct_UClass_UWeapon_Statics; \
public: \
	DECLARE_CLASS(UWeapon, UEquipment, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProjectEclipse"), NO_API) \
	DECLARE_SERIALIZER(UWeapon)


#define FID_Github_ProjectEclipse_ProjectEclipse_Source_ProjectEclipse_Public_Weapon_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UWeapon(UWeapon&&); \
	UWeapon(const UWeapon&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWeapon); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWeapon); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UWeapon) \
	NO_API virtual ~UWeapon();


#define FID_Github_ProjectEclipse_ProjectEclipse_Source_ProjectEclipse_Public_Weapon_h_13_PROLOG
#define FID_Github_ProjectEclipse_ProjectEclipse_Source_ProjectEclipse_Public_Weapon_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Github_ProjectEclipse_ProjectEclipse_Source_ProjectEclipse_Public_Weapon_h_16_INCLASS_NO_PURE_DECLS \
	FID_Github_ProjectEclipse_ProjectEclipse_Source_ProjectEclipse_Public_Weapon_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECTECLIPSE_API UClass* StaticClass<class UWeapon>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Github_ProjectEclipse_ProjectEclipse_Source_ProjectEclipse_Public_Weapon_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
