// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EquipmentComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UEquipment;
#ifdef PROJECTECLIPSE_EquipmentComponent_generated_h
#error "EquipmentComponent.generated.h already included, missing '#pragma once' in EquipmentComponent.h"
#endif
#define PROJECTECLIPSE_EquipmentComponent_generated_h

#define FID_ProjectEclipse_Source_ProjectEclipse_Public_EquipmentComponent_h_16_SPARSE_DATA
#define FID_ProjectEclipse_Source_ProjectEclipse_Public_EquipmentComponent_h_16_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_ProjectEclipse_Source_ProjectEclipse_Public_EquipmentComponent_h_16_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_ProjectEclipse_Source_ProjectEclipse_Public_EquipmentComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execPrimaryUse); \
	DECLARE_FUNCTION(execCycleEquipment); \
	DECLARE_FUNCTION(execSwitchEquipment);


#define FID_ProjectEclipse_Source_ProjectEclipse_Public_EquipmentComponent_h_16_ACCESSORS
#define FID_ProjectEclipse_Source_ProjectEclipse_Public_EquipmentComponent_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEquipmentComponent(); \
	friend struct Z_Construct_UClass_UEquipmentComponent_Statics; \
public: \
	DECLARE_CLASS(UEquipmentComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectEclipse"), NO_API) \
	DECLARE_SERIALIZER(UEquipmentComponent) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_ProjectEclipse_Source_ProjectEclipse_Public_EquipmentComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEquipmentComponent(UEquipmentComponent&&); \
	NO_API UEquipmentComponent(const UEquipmentComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEquipmentComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEquipmentComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UEquipmentComponent) \
	NO_API virtual ~UEquipmentComponent();


#define FID_ProjectEclipse_Source_ProjectEclipse_Public_EquipmentComponent_h_13_PROLOG
#define FID_ProjectEclipse_Source_ProjectEclipse_Public_EquipmentComponent_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectEclipse_Source_ProjectEclipse_Public_EquipmentComponent_h_16_SPARSE_DATA \
	FID_ProjectEclipse_Source_ProjectEclipse_Public_EquipmentComponent_h_16_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_ProjectEclipse_Source_ProjectEclipse_Public_EquipmentComponent_h_16_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_ProjectEclipse_Source_ProjectEclipse_Public_EquipmentComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ProjectEclipse_Source_ProjectEclipse_Public_EquipmentComponent_h_16_ACCESSORS \
	FID_ProjectEclipse_Source_ProjectEclipse_Public_EquipmentComponent_h_16_INCLASS_NO_PURE_DECLS \
	FID_ProjectEclipse_Source_ProjectEclipse_Public_EquipmentComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECTECLIPSE_API UClass* StaticClass<class UEquipmentComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectEclipse_Source_ProjectEclipse_Public_EquipmentComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
