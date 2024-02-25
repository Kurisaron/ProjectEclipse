// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ProjectileActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef PROJECTECLIPSE_ProjectileActor_generated_h
#error "ProjectileActor.generated.h already included, missing '#pragma once' in ProjectileActor.h"
#endif
#define PROJECTECLIPSE_ProjectileActor_generated_h

#define FID_ProjectEclipse_Source_ProjectEclipse_Public_ProjectileActor_h_14_SPARSE_DATA
#define FID_ProjectEclipse_Source_ProjectEclipse_Public_ProjectileActor_h_14_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_ProjectEclipse_Source_ProjectEclipse_Public_ProjectileActor_h_14_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_ProjectEclipse_Source_ProjectEclipse_Public_ProjectileActor_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execNotifyHit);


#define FID_ProjectEclipse_Source_ProjectEclipse_Public_ProjectileActor_h_14_ACCESSORS
#define FID_ProjectEclipse_Source_ProjectEclipse_Public_ProjectileActor_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAProjectileActor(); \
	friend struct Z_Construct_UClass_AProjectileActor_Statics; \
public: \
	DECLARE_CLASS(AProjectileActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectEclipse"), NO_API) \
	DECLARE_SERIALIZER(AProjectileActor)


#define FID_ProjectEclipse_Source_ProjectEclipse_Public_ProjectileActor_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AProjectileActor(AProjectileActor&&); \
	NO_API AProjectileActor(const AProjectileActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProjectileActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProjectileActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AProjectileActor) \
	NO_API virtual ~AProjectileActor();


#define FID_ProjectEclipse_Source_ProjectEclipse_Public_ProjectileActor_h_11_PROLOG
#define FID_ProjectEclipse_Source_ProjectEclipse_Public_ProjectileActor_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectEclipse_Source_ProjectEclipse_Public_ProjectileActor_h_14_SPARSE_DATA \
	FID_ProjectEclipse_Source_ProjectEclipse_Public_ProjectileActor_h_14_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_ProjectEclipse_Source_ProjectEclipse_Public_ProjectileActor_h_14_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_ProjectEclipse_Source_ProjectEclipse_Public_ProjectileActor_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ProjectEclipse_Source_ProjectEclipse_Public_ProjectileActor_h_14_ACCESSORS \
	FID_ProjectEclipse_Source_ProjectEclipse_Public_ProjectileActor_h_14_INCLASS_NO_PURE_DECLS \
	FID_ProjectEclipse_Source_ProjectEclipse_Public_ProjectileActor_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECTECLIPSE_API UClass* StaticClass<class AProjectileActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectEclipse_Source_ProjectEclipse_Public_ProjectileActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
