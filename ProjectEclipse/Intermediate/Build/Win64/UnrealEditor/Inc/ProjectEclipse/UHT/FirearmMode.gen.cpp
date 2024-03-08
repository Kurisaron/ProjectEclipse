// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectEclipse/Public/FirearmMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFirearmMode() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	PROJECTECLIPSE_API UClass* Z_Construct_UClass_AProjectileActor_NoRegister();
	PROJECTECLIPSE_API UClass* Z_Construct_UClass_UEquipmentComponent_NoRegister();
	PROJECTECLIPSE_API UClass* Z_Construct_UClass_UFirearmMode();
	PROJECTECLIPSE_API UClass* Z_Construct_UClass_UFirearmMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ProjectEclipse();
// End Cross Module References
	DEFINE_FUNCTION(UFirearmMode::execTickMode)
	{
		P_GET_OBJECT(APawn,Z_Param_Wielder);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TickMode_Implementation(Z_Param_Wielder,Z_Param_DeltaTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFirearmMode::execSpawnProjectile)
	{
		P_GET_STRUCT(FVector,Z_Param_Location);
		P_GET_STRUCT(FVector,Z_Param_Direction);
		P_GET_UBOOL_REF(Z_Param_Out_Spawned);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AProjectileActor**)Z_Param__Result=P_THIS->SpawnProjectile(Z_Param_Location,Z_Param_Direction,Z_Param_Out_Spawned);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFirearmMode::execFire)
	{
		P_GET_OBJECT(UEquipmentComponent,Z_Param_Wielder);
		P_GET_UBOOL(Z_Param_Pressed);
		P_GET_PROPERTY(FFloatProperty,Z_Param_PressedTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Fire_Implementation(Z_Param_Wielder,Z_Param_Pressed,Z_Param_PressedTime);
		P_NATIVE_END;
	}
	struct FirearmMode_eventFire_Parms
	{
		UEquipmentComponent* Wielder;
		bool Pressed;
		float PressedTime;
	};
	struct FirearmMode_eventTickMode_Parms
	{
		APawn* Wielder;
		float DeltaTime;
	};
	static FName NAME_UFirearmMode_Fire = FName(TEXT("Fire"));
	void UFirearmMode::Fire(UEquipmentComponent* Wielder, bool Pressed, float PressedTime)
	{
		FirearmMode_eventFire_Parms Parms;
		Parms.Wielder=Wielder;
		Parms.Pressed=Pressed ? true : false;
		Parms.PressedTime=PressedTime;
		ProcessEvent(FindFunctionChecked(NAME_UFirearmMode_Fire),&Parms);
	}
	static FName NAME_UFirearmMode_TickMode = FName(TEXT("TickMode"));
	void UFirearmMode::TickMode(APawn* Wielder, float DeltaTime)
	{
		FirearmMode_eventTickMode_Parms Parms;
		Parms.Wielder=Wielder;
		Parms.DeltaTime=DeltaTime;
		ProcessEvent(FindFunctionChecked(NAME_UFirearmMode_TickMode),&Parms);
	}
	void UFirearmMode::StaticRegisterNativesUFirearmMode()
	{
		UClass* Class = UFirearmMode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Fire", &UFirearmMode::execFire },
			{ "SpawnProjectile", &UFirearmMode::execSpawnProjectile },
			{ "TickMode", &UFirearmMode::execTickMode },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFirearmMode_Fire_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Wielder_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Wielder;
		static void NewProp_Pressed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Pressed;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PressedTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirearmMode_Fire_Statics::NewProp_Wielder_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFirearmMode_Fire_Statics::NewProp_Wielder = { "Wielder", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FirearmMode_eventFire_Parms, Wielder), Z_Construct_UClass_UEquipmentComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFirearmMode_Fire_Statics::NewProp_Wielder_MetaData), Z_Construct_UFunction_UFirearmMode_Fire_Statics::NewProp_Wielder_MetaData) };
	void Z_Construct_UFunction_UFirearmMode_Fire_Statics::NewProp_Pressed_SetBit(void* Obj)
	{
		((FirearmMode_eventFire_Parms*)Obj)->Pressed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFirearmMode_Fire_Statics::NewProp_Pressed = { "Pressed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FirearmMode_eventFire_Parms), &Z_Construct_UFunction_UFirearmMode_Fire_Statics::NewProp_Pressed_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFirearmMode_Fire_Statics::NewProp_PressedTime = { "PressedTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FirearmMode_eventFire_Parms, PressedTime), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirearmMode_Fire_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirearmMode_Fire_Statics::NewProp_Wielder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirearmMode_Fire_Statics::NewProp_Pressed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirearmMode_Fire_Statics::NewProp_PressedTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirearmMode_Fire_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firearm Mode" },
		{ "ModuleRelativePath", "Public/FirearmMode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirearmMode_Fire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirearmMode, nullptr, "Fire", nullptr, nullptr, Z_Construct_UFunction_UFirearmMode_Fire_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirearmMode_Fire_Statics::PropPointers), sizeof(FirearmMode_eventFire_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFirearmMode_Fire_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFirearmMode_Fire_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFirearmMode_Fire_Statics::PropPointers) < 2048);
	static_assert(sizeof(FirearmMode_eventFire_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UFirearmMode_Fire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFirearmMode_Fire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirearmMode_SpawnProjectile_Statics
	{
		struct FirearmMode_eventSpawnProjectile_Parms
		{
			FVector Location;
			FVector Direction;
			bool Spawned;
			AProjectileActor* ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Direction;
		static void NewProp_Spawned_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Spawned;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFirearmMode_SpawnProjectile_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FirearmMode_eventSpawnProjectile_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFirearmMode_SpawnProjectile_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FirearmMode_eventSpawnProjectile_Parms, Direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UFirearmMode_SpawnProjectile_Statics::NewProp_Spawned_SetBit(void* Obj)
	{
		((FirearmMode_eventSpawnProjectile_Parms*)Obj)->Spawned = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFirearmMode_SpawnProjectile_Statics::NewProp_Spawned = { "Spawned", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FirearmMode_eventSpawnProjectile_Parms), &Z_Construct_UFunction_UFirearmMode_SpawnProjectile_Statics::NewProp_Spawned_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFirearmMode_SpawnProjectile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FirearmMode_eventSpawnProjectile_Parms, ReturnValue), Z_Construct_UClass_AProjectileActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirearmMode_SpawnProjectile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirearmMode_SpawnProjectile_Statics::NewProp_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirearmMode_SpawnProjectile_Statics::NewProp_Direction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirearmMode_SpawnProjectile_Statics::NewProp_Spawned,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirearmMode_SpawnProjectile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirearmMode_SpawnProjectile_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firearm Mode" },
		{ "ModuleRelativePath", "Public/FirearmMode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirearmMode_SpawnProjectile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirearmMode, nullptr, "SpawnProjectile", nullptr, nullptr, Z_Construct_UFunction_UFirearmMode_SpawnProjectile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirearmMode_SpawnProjectile_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFirearmMode_SpawnProjectile_Statics::FirearmMode_eventSpawnProjectile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFirearmMode_SpawnProjectile_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFirearmMode_SpawnProjectile_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFirearmMode_SpawnProjectile_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UFirearmMode_SpawnProjectile_Statics::FirearmMode_eventSpawnProjectile_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UFirearmMode_SpawnProjectile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFirearmMode_SpawnProjectile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirearmMode_TickMode_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Wielder;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFirearmMode_TickMode_Statics::NewProp_Wielder = { "Wielder", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FirearmMode_eventTickMode_Parms, Wielder), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFirearmMode_TickMode_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FirearmMode_eventTickMode_Parms, DeltaTime), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirearmMode_TickMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirearmMode_TickMode_Statics::NewProp_Wielder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirearmMode_TickMode_Statics::NewProp_DeltaTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirearmMode_TickMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firearm Mode" },
		{ "ModuleRelativePath", "Public/FirearmMode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirearmMode_TickMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirearmMode, nullptr, "TickMode", nullptr, nullptr, Z_Construct_UFunction_UFirearmMode_TickMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirearmMode_TickMode_Statics::PropPointers), sizeof(FirearmMode_eventTickMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFirearmMode_TickMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFirearmMode_TickMode_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFirearmMode_TickMode_Statics::PropPointers) < 2048);
	static_assert(sizeof(FirearmMode_eventTickMode_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UFirearmMode_TickMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFirearmMode_TickMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFirearmMode);
	UClass* Z_Construct_UClass_UFirearmMode_NoRegister()
	{
		return UFirearmMode::StaticClass();
	}
	struct Z_Construct_UClass_UFirearmMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Projectile_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_Projectile;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFirearmMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ProjectEclipse,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFirearmMode_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UFirearmMode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFirearmMode_Fire, "Fire" }, // 2672997865
		{ &Z_Construct_UFunction_UFirearmMode_SpawnProjectile, "SpawnProjectile" }, // 1816650005
		{ &Z_Construct_UFunction_UFirearmMode_TickMode, "TickMode" }, // 2118060733
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFirearmMode_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirearmMode_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "FirearmMode.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/FirearmMode.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirearmMode_Statics::NewProp_Projectile_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Projectiles" },
		{ "ModuleRelativePath", "Public/FirearmMode.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UFirearmMode_Statics::NewProp_Projectile = { "Projectile", nullptr, (EPropertyFlags)0x0044000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFirearmMode, Projectile), Z_Construct_UClass_UClass, Z_Construct_UClass_AProjectileActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFirearmMode_Statics::NewProp_Projectile_MetaData), Z_Construct_UClass_UFirearmMode_Statics::NewProp_Projectile_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFirearmMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirearmMode_Statics::NewProp_Projectile,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFirearmMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFirearmMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFirearmMode_Statics::ClassParams = {
		&UFirearmMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UFirearmMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UFirearmMode_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFirearmMode_Statics::Class_MetaDataParams), Z_Construct_UClass_UFirearmMode_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFirearmMode_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UFirearmMode()
	{
		if (!Z_Registration_Info_UClass_UFirearmMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFirearmMode.OuterSingleton, Z_Construct_UClass_UFirearmMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFirearmMode.OuterSingleton;
	}
	template<> PROJECTECLIPSE_API UClass* StaticClass<UFirearmMode>()
	{
		return UFirearmMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFirearmMode);
	UFirearmMode::~UFirearmMode() {}
	struct Z_CompiledInDeferFile_FID_ProjectEclipse_Source_ProjectEclipse_Public_FirearmMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEclipse_Source_ProjectEclipse_Public_FirearmMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFirearmMode, UFirearmMode::StaticClass, TEXT("UFirearmMode"), &Z_Registration_Info_UClass_UFirearmMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFirearmMode), 2676021932U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEclipse_Source_ProjectEclipse_Public_FirearmMode_h_919182583(TEXT("/Script/ProjectEclipse"),
		Z_CompiledInDeferFile_FID_ProjectEclipse_Source_ProjectEclipse_Public_FirearmMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEclipse_Source_ProjectEclipse_Public_FirearmMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
