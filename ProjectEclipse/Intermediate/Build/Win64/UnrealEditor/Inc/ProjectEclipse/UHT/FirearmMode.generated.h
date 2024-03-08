// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FirearmMode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APawn;
class AProjectileActor;
class UEquipmentComponent;
#ifdef PROJECTECLIPSE_FirearmMode_generated_h
#error "FirearmMode.generated.h already included, missing '#pragma once' in FirearmMode.h"
#endif
#define PROJECTECLIPSE_FirearmMode_generated_h

#define FID_ProjectEclipse_Source_ProjectEclipse_Public_FirearmMode_h_18_SPARSE_DATA
#define FID_ProjectEclipse_Source_ProjectEclipse_Public_FirearmMode_h_18_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_ProjectEclipse_Source_ProjectEclipse_Public_FirearmMode_h_18_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_ProjectEclipse_Source_ProjectEclipse_Public_FirearmMode_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execTickMode); \
	DECLARE_FUNCTION(execSpawnProjectile); \
	DECLARE_FUNCTION(execFire);


#define FID_ProjectEclipse_Source_ProjectEclipse_Public_FirearmMode_h_18_ACCESSORS
#define FID_ProjectEclipse_Source_ProjectEclipse_Public_FirearmMode_h_18_CALLBACK_WRAPPERS
#define FID_ProjectEclipse_Source_ProjectEclipse_Public_FirearmMode_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFirearmMode(); \
	friend struct Z_Construct_UClass_UFirearmMode_Statics; \
public: \
	DECLARE_CLASS(UFirearmMode, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProjectEclipse"), NO_API) \
	DECLARE_SERIALIZER(UFirearmMode) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_ProjectEclipse_Source_ProjectEclipse_Public_FirearmMode_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFirearmMode(UFirearmMode&&); \
	NO_API UFirearmMode(const UFirearmMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFirearmMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFirearmMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFirearmMode) \
	NO_API virtual ~UFirearmMode();


#define FID_ProjectEclipse_Source_ProjectEclipse_Public_FirearmMode_h_15_PROLOG
#define FID_ProjectEclipse_Source_ProjectEclipse_Public_FirearmMode_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectEclipse_Source_ProjectEclipse_Public_FirearmMode_h_18_SPARSE_DATA \
	FID_ProjectEclipse_Source_ProjectEclipse_Public_FirearmMode_h_18_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_ProjectEclipse_Source_ProjectEclipse_Public_FirearmMode_h_18_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_ProjectEclipse_Source_ProjectEclipse_Public_FirearmMode_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ProjectEclipse_Source_ProjectEclipse_Public_FirearmMode_h_18_ACCESSORS \
	FID_ProjectEclipse_Source_ProjectEclipse_Public_FirearmMode_h_18_CALLBACK_WRAPPERS \
	FID_ProjectEclipse_Source_ProjectEclipse_Public_FirearmMode_h_18_INCLASS_NO_PURE_DECLS \
	FID_ProjectEclipse_Source_ProjectEclipse_Public_FirearmMode_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECTECLIPSE_API UClass* StaticClass<class UFirearmMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectEclipse_Source_ProjectEclipse_Public_FirearmMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS