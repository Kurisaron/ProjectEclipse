// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectEclipse/Public/ProjectileActor.h"
#include "Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProjectileActor() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponent_NoRegister();
PROJECTECLIPSE_API UClass* Z_Construct_UClass_AProjectileActor();
PROJECTECLIPSE_API UClass* Z_Construct_UClass_AProjectileActor_NoRegister();
PROJECTECLIPSE_API UFunction* Z_Construct_UDelegateFunction_ProjectEclipse_ProjectileHit__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_ProjectEclipse();
// End Cross Module References

// Begin Delegate FProjectileHit
struct Z_Construct_UDelegateFunction_ProjectEclipse_ProjectileHit__DelegateSignature_Statics
{
	struct _Script_ProjectEclipse_eventProjectileHit_Parms
	{
		AProjectileActor* Projectile;
		UPrimitiveComponent* MyComp;
		AActor* Other;
		UPrimitiveComponent* OtherComp;
		bool bSelfMoved;
		FVector HitLocation;
		FVector HitNormal;
		FVector NormalImpulse;
		FHitResult Hit;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ProjectileActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MyComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Projectile;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MyComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Other;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static void NewProp_bSelfMoved_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSelfMoved;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HitLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HitNormal;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NormalImpulse;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Hit;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_ProjectEclipse_ProjectileHit__DelegateSignature_Statics::NewProp_Projectile = { "Projectile", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ProjectEclipse_eventProjectileHit_Parms, Projectile), Z_Construct_UClass_AProjectileActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_ProjectEclipse_ProjectileHit__DelegateSignature_Statics::NewProp_MyComp = { "MyComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ProjectEclipse_eventProjectileHit_Parms, MyComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MyComp_MetaData), NewProp_MyComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_ProjectEclipse_ProjectileHit__DelegateSignature_Statics::NewProp_Other = { "Other", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ProjectEclipse_eventProjectileHit_Parms, Other), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_ProjectEclipse_ProjectileHit__DelegateSignature_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ProjectEclipse_eventProjectileHit_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
void Z_Construct_UDelegateFunction_ProjectEclipse_ProjectileHit__DelegateSignature_Statics::NewProp_bSelfMoved_SetBit(void* Obj)
{
	((_Script_ProjectEclipse_eventProjectileHit_Parms*)Obj)->bSelfMoved = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_ProjectEclipse_ProjectileHit__DelegateSignature_Statics::NewProp_bSelfMoved = { "bSelfMoved", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_ProjectEclipse_eventProjectileHit_Parms), &Z_Construct_UDelegateFunction_ProjectEclipse_ProjectileHit__DelegateSignature_Statics::NewProp_bSelfMoved_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_ProjectEclipse_ProjectileHit__DelegateSignature_Statics::NewProp_HitLocation = { "HitLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ProjectEclipse_eventProjectileHit_Parms, HitLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_ProjectEclipse_ProjectileHit__DelegateSignature_Statics::NewProp_HitNormal = { "HitNormal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ProjectEclipse_eventProjectileHit_Parms, HitNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_ProjectEclipse_ProjectileHit__DelegateSignature_Statics::NewProp_NormalImpulse = { "NormalImpulse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ProjectEclipse_eventProjectileHit_Parms, NormalImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_ProjectEclipse_ProjectileHit__DelegateSignature_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ProjectEclipse_eventProjectileHit_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Hit_MetaData), NewProp_Hit_MetaData) }; // 4100991306
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ProjectEclipse_ProjectileHit__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProjectEclipse_ProjectileHit__DelegateSignature_Statics::NewProp_Projectile,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProjectEclipse_ProjectileHit__DelegateSignature_Statics::NewProp_MyComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProjectEclipse_ProjectileHit__DelegateSignature_Statics::NewProp_Other,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProjectEclipse_ProjectileHit__DelegateSignature_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProjectEclipse_ProjectileHit__DelegateSignature_Statics::NewProp_bSelfMoved,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProjectEclipse_ProjectileHit__DelegateSignature_Statics::NewProp_HitLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProjectEclipse_ProjectileHit__DelegateSignature_Statics::NewProp_HitNormal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProjectEclipse_ProjectileHit__DelegateSignature_Statics::NewProp_NormalImpulse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProjectEclipse_ProjectileHit__DelegateSignature_Statics::NewProp_Hit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectEclipse_ProjectileHit__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ProjectEclipse_ProjectileHit__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ProjectEclipse, nullptr, "ProjectileHit__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_ProjectEclipse_ProjectileHit__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectEclipse_ProjectileHit__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_ProjectEclipse_ProjectileHit__DelegateSignature_Statics::_Script_ProjectEclipse_eventProjectileHit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectEclipse_ProjectileHit__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ProjectEclipse_ProjectileHit__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_ProjectEclipse_ProjectileHit__DelegateSignature_Statics::_Script_ProjectEclipse_eventProjectileHit_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_ProjectEclipse_ProjectileHit__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ProjectEclipse_ProjectileHit__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FProjectileHit_DelegateWrapper(const FMulticastScriptDelegate& ProjectileHit, AProjectileActor* Projectile, UPrimitiveComponent* MyComp, AActor* Other, UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, FHitResult const& Hit)
{
	struct _Script_ProjectEclipse_eventProjectileHit_Parms
	{
		AProjectileActor* Projectile;
		UPrimitiveComponent* MyComp;
		AActor* Other;
		UPrimitiveComponent* OtherComp;
		bool bSelfMoved;
		FVector HitLocation;
		FVector HitNormal;
		FVector NormalImpulse;
		FHitResult Hit;
	};
	_Script_ProjectEclipse_eventProjectileHit_Parms Parms;
	Parms.Projectile=Projectile;
	Parms.MyComp=MyComp;
	Parms.Other=Other;
	Parms.OtherComp=OtherComp;
	Parms.bSelfMoved=bSelfMoved ? true : false;
	Parms.HitLocation=HitLocation;
	Parms.HitNormal=HitNormal;
	Parms.NormalImpulse=NormalImpulse;
	Parms.Hit=Hit;
	ProjectileHit.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FProjectileHit

// Begin Class AProjectileActor Function Fire
struct Z_Construct_UFunction_AProjectileActor_Fire_Statics
{
	struct ProjectileActor_eventFire_Parms
	{
		FVector Direction;
		float Force;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CPP_Default_Force", "1000.000000" },
		{ "ModuleRelativePath", "Public/ProjectileActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Direction;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Force;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AProjectileActor_Fire_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectileActor_eventFire_Parms, Direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AProjectileActor_Fire_Statics::NewProp_Force = { "Force", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectileActor_eventFire_Parms, Force), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AProjectileActor_Fire_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjectileActor_Fire_Statics::NewProp_Direction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjectileActor_Fire_Statics::NewProp_Force,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectileActor_Fire_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AProjectileActor_Fire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AProjectileActor, nullptr, "Fire", nullptr, nullptr, Z_Construct_UFunction_AProjectileActor_Fire_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectileActor_Fire_Statics::PropPointers), sizeof(Z_Construct_UFunction_AProjectileActor_Fire_Statics::ProjectileActor_eventFire_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectileActor_Fire_Statics::Function_MetaDataParams), Z_Construct_UFunction_AProjectileActor_Fire_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AProjectileActor_Fire_Statics::ProjectileActor_eventFire_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AProjectileActor_Fire()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AProjectileActor_Fire_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AProjectileActor::execFire)
{
	P_GET_STRUCT(FVector,Z_Param_Direction);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Force);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Fire(Z_Param_Direction,Z_Param_Force);
	P_NATIVE_END;
}
// End Class AProjectileActor Function Fire

// Begin Class AProjectileActor Function NotifyHit
struct Z_Construct_UFunction_AProjectileActor_NotifyHit_Statics
{
	struct ProjectileActor_eventNotifyHit_Parms
	{
		UPrimitiveComponent* MyComp;
		AActor* Other;
		UPrimitiveComponent* OtherComp;
		bool bSelfMoved;
		FVector HitLocation;
		FVector HitNormal;
		FVector NormalImpulse;
		FHitResult Hit;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ProjectileActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MyComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MyComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Other;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static void NewProp_bSelfMoved_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSelfMoved;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HitLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HitNormal;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NormalImpulse;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Hit;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AProjectileActor_NotifyHit_Statics::NewProp_MyComp = { "MyComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectileActor_eventNotifyHit_Parms, MyComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MyComp_MetaData), NewProp_MyComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AProjectileActor_NotifyHit_Statics::NewProp_Other = { "Other", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectileActor_eventNotifyHit_Parms, Other), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AProjectileActor_NotifyHit_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectileActor_eventNotifyHit_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
void Z_Construct_UFunction_AProjectileActor_NotifyHit_Statics::NewProp_bSelfMoved_SetBit(void* Obj)
{
	((ProjectileActor_eventNotifyHit_Parms*)Obj)->bSelfMoved = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AProjectileActor_NotifyHit_Statics::NewProp_bSelfMoved = { "bSelfMoved", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ProjectileActor_eventNotifyHit_Parms), &Z_Construct_UFunction_AProjectileActor_NotifyHit_Statics::NewProp_bSelfMoved_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AProjectileActor_NotifyHit_Statics::NewProp_HitLocation = { "HitLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectileActor_eventNotifyHit_Parms, HitLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AProjectileActor_NotifyHit_Statics::NewProp_HitNormal = { "HitNormal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectileActor_eventNotifyHit_Parms, HitNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AProjectileActor_NotifyHit_Statics::NewProp_NormalImpulse = { "NormalImpulse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectileActor_eventNotifyHit_Parms, NormalImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AProjectileActor_NotifyHit_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectileActor_eventNotifyHit_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Hit_MetaData), NewProp_Hit_MetaData) }; // 4100991306
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AProjectileActor_NotifyHit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjectileActor_NotifyHit_Statics::NewProp_MyComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjectileActor_NotifyHit_Statics::NewProp_Other,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjectileActor_NotifyHit_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjectileActor_NotifyHit_Statics::NewProp_bSelfMoved,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjectileActor_NotifyHit_Statics::NewProp_HitLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjectileActor_NotifyHit_Statics::NewProp_HitNormal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjectileActor_NotifyHit_Statics::NewProp_NormalImpulse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjectileActor_NotifyHit_Statics::NewProp_Hit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectileActor_NotifyHit_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AProjectileActor_NotifyHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AProjectileActor, nullptr, "NotifyHit", nullptr, nullptr, Z_Construct_UFunction_AProjectileActor_NotifyHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectileActor_NotifyHit_Statics::PropPointers), sizeof(Z_Construct_UFunction_AProjectileActor_NotifyHit_Statics::ProjectileActor_eventNotifyHit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C20400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectileActor_NotifyHit_Statics::Function_MetaDataParams), Z_Construct_UFunction_AProjectileActor_NotifyHit_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AProjectileActor_NotifyHit_Statics::ProjectileActor_eventNotifyHit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AProjectileActor_NotifyHit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AProjectileActor_NotifyHit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AProjectileActor::execNotifyHit)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_MyComp);
	P_GET_OBJECT(AActor,Z_Param_Other);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_UBOOL(Z_Param_bSelfMoved);
	P_GET_STRUCT(FVector,Z_Param_HitLocation);
	P_GET_STRUCT(FVector,Z_Param_HitNormal);
	P_GET_STRUCT(FVector,Z_Param_NormalImpulse);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->NotifyHit(Z_Param_MyComp,Z_Param_Other,Z_Param_OtherComp,Z_Param_bSelfMoved,Z_Param_HitLocation,Z_Param_HitNormal,Z_Param_NormalImpulse,Z_Param_Out_Hit);
	P_NATIVE_END;
}
// End Class AProjectileActor Function NotifyHit

// Begin Class AProjectileActor
void AProjectileActor::StaticRegisterNativesAProjectileActor()
{
	UClass* Class = AProjectileActor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Fire", &AProjectileActor::execFire },
		{ "NotifyHit", &AProjectileActor::execNotifyHit },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AProjectileActor);
UClass* Z_Construct_UClass_AProjectileActor_NoRegister()
{
	return AProjectileActor::StaticClass();
}
struct Z_Construct_UClass_AProjectileActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "ProjectileActor.h" },
		{ "ModuleRelativePath", "Public/ProjectileActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ProjectileActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VFX_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VFX" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ProjectileActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnHit_MetaData[] = {
		{ "ModuleRelativePath", "Public/ProjectileActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_VFX;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnHit;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AProjectileActor_Fire, "Fire" }, // 1428985862
		{ &Z_Construct_UFunction_AProjectileActor_NotifyHit, "NotifyHit" }, // 2974193068
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProjectileActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectileActor_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x004000000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectileActor, Mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mesh_MetaData), NewProp_Mesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectileActor_Statics::NewProp_VFX = { "VFX", nullptr, (EPropertyFlags)0x004000000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectileActor, VFX), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VFX_MetaData), NewProp_VFX_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AProjectileActor_Statics::NewProp_OnHit = { "OnHit", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectileActor, OnHit), Z_Construct_UDelegateFunction_ProjectEclipse_ProjectileHit__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnHit_MetaData), NewProp_OnHit_MetaData) }; // 3547092204
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AProjectileActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectileActor_Statics::NewProp_Mesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectileActor_Statics::NewProp_VFX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectileActor_Statics::NewProp_OnHit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectileActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AProjectileActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectEclipse,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectileActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AProjectileActor_Statics::ClassParams = {
	&AProjectileActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AProjectileActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AProjectileActor_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectileActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AProjectileActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AProjectileActor()
{
	if (!Z_Registration_Info_UClass_AProjectileActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AProjectileActor.OuterSingleton, Z_Construct_UClass_AProjectileActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AProjectileActor.OuterSingleton;
}
template<> PROJECTECLIPSE_API UClass* StaticClass<AProjectileActor>()
{
	return AProjectileActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AProjectileActor);
AProjectileActor::~AProjectileActor() {}
// End Class AProjectileActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Github_ProjectEclipse_ProjectEclipse_Source_ProjectEclipse_Public_ProjectileActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AProjectileActor, AProjectileActor::StaticClass, TEXT("AProjectileActor"), &Z_Registration_Info_UClass_AProjectileActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AProjectileActor), 2259306848U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_ProjectEclipse_ProjectEclipse_Source_ProjectEclipse_Public_ProjectileActor_h_3305459298(TEXT("/Script/ProjectEclipse"),
	Z_CompiledInDeferFile_FID_Github_ProjectEclipse_ProjectEclipse_Source_ProjectEclipse_Public_ProjectileActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_ProjectEclipse_ProjectEclipse_Source_ProjectEclipse_Public_ProjectileActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
