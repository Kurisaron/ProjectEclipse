// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Equipment.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROJECTECLIPSE_Equipment_generated_h
#error "Equipment.generated.h already included, missing '#pragma once' in Equipment.h"
#endif
#define PROJECTECLIPSE_Equipment_generated_h

#define FID_ProjectEclipse_Source_ProjectEclipse_Public_Equipment_h_18_SPARSE_DATA
#define FID_ProjectEclipse_Source_ProjectEclipse_Public_Equipment_h_18_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_ProjectEclipse_Source_ProjectEclipse_Public_Equipment_h_18_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_ProjectEclipse_Source_ProjectEclipse_Public_Equipment_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAlternateUse); \
	DECLARE_FUNCTION(execSecondaryUse); \
	DECLARE_FUNCTION(execPrimaryUse);


#define FID_ProjectEclipse_Source_ProjectEclipse_Public_Equipment_h_18_ACCESSORS
#define FID_ProjectEclipse_Source_ProjectEclipse_Public_Equipment_h_18_CALLBACK_WRAPPERS
#define FID_ProjectEclipse_Source_ProjectEclipse_Public_Equipment_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEquipment(); \
	friend struct Z_Construct_UClass_UEquipment_Statics; \
public: \
	DECLARE_CLASS(UEquipment, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProjectEclipse"), NO_API) \
	DECLARE_SERIALIZER(UEquipment) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_ProjectEclipse_Source_ProjectEclipse_Public_Equipment_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEquipment(UEquipment&&); \
	NO_API UEquipment(const UEquipment&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEquipment); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEquipment); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UEquipment) \
	NO_API virtual ~UEquipment();


#define FID_ProjectEclipse_Source_ProjectEclipse_Public_Equipment_h_15_PROLOG
#define FID_ProjectEclipse_Source_ProjectEclipse_Public_Equipment_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectEclipse_Source_ProjectEclipse_Public_Equipment_h_18_SPARSE_DATA \
	FID_ProjectEclipse_Source_ProjectEclipse_Public_Equipment_h_18_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_ProjectEclipse_Source_ProjectEclipse_Public_Equipment_h_18_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_ProjectEclipse_Source_ProjectEclipse_Public_Equipment_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ProjectEclipse_Source_ProjectEclipse_Public_Equipment_h_18_ACCESSORS \
	FID_ProjectEclipse_Source_ProjectEclipse_Public_Equipment_h_18_CALLBACK_WRAPPERS \
	FID_ProjectEclipse_Source_ProjectEclipse_Public_Equipment_h_18_INCLASS_NO_PURE_DECLS \
	FID_ProjectEclipse_Source_ProjectEclipse_Public_Equipment_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECTECLIPSE_API UClass* StaticClass<class UEquipment>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectEclipse_Source_ProjectEclipse_Public_Equipment_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
