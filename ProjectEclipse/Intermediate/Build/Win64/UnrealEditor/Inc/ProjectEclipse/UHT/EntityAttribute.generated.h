// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EntityAttribute.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROJECTECLIPSE_EntityAttribute_generated_h
#error "EntityAttribute.generated.h already included, missing '#pragma once' in EntityAttribute.h"
#endif
#define PROJECTECLIPSE_EntityAttribute_generated_h

#define FID_ProjectEclipse_Source_ProjectEclipse_Public_EntityAttribute_h_15_SPARSE_DATA
#define FID_ProjectEclipse_Source_ProjectEclipse_Public_EntityAttribute_h_15_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_ProjectEclipse_Source_ProjectEclipse_Public_EntityAttribute_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_ProjectEclipse_Source_ProjectEclipse_Public_EntityAttribute_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetMaximum); \
	DECLARE_FUNCTION(execGetMinimum); \
	DECLARE_FUNCTION(execIsKeyName); \
	DECLARE_FUNCTION(execGetKeyName); \
	DECLARE_FUNCTION(execGetDisplayName);


#define FID_ProjectEclipse_Source_ProjectEclipse_Public_EntityAttribute_h_15_ACCESSORS
#define FID_ProjectEclipse_Source_ProjectEclipse_Public_EntityAttribute_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEntityAttribute(); \
	friend struct Z_Construct_UClass_UEntityAttribute_Statics; \
public: \
	DECLARE_CLASS(UEntityAttribute, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProjectEclipse"), NO_API) \
	DECLARE_SERIALIZER(UEntityAttribute) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_ProjectEclipse_Source_ProjectEclipse_Public_EntityAttribute_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEntityAttribute(UEntityAttribute&&); \
	NO_API UEntityAttribute(const UEntityAttribute&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEntityAttribute); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEntityAttribute); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UEntityAttribute) \
	NO_API virtual ~UEntityAttribute();


#define FID_ProjectEclipse_Source_ProjectEclipse_Public_EntityAttribute_h_12_PROLOG
#define FID_ProjectEclipse_Source_ProjectEclipse_Public_EntityAttribute_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectEclipse_Source_ProjectEclipse_Public_EntityAttribute_h_15_SPARSE_DATA \
	FID_ProjectEclipse_Source_ProjectEclipse_Public_EntityAttribute_h_15_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_ProjectEclipse_Source_ProjectEclipse_Public_EntityAttribute_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_ProjectEclipse_Source_ProjectEclipse_Public_EntityAttribute_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ProjectEclipse_Source_ProjectEclipse_Public_EntityAttribute_h_15_ACCESSORS \
	FID_ProjectEclipse_Source_ProjectEclipse_Public_EntityAttribute_h_15_INCLASS_NO_PURE_DECLS \
	FID_ProjectEclipse_Source_ProjectEclipse_Public_EntityAttribute_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECTECLIPSE_API UClass* StaticClass<class UEntityAttribute>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectEclipse_Source_ProjectEclipse_Public_EntityAttribute_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
