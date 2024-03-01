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
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	PROJECTECLIPSE_API UClass* Z_Construct_UClass_AProjectileActor_NoRegister();
	PROJECTECLIPSE_API UClass* Z_Construct_UClass_UFirearmMode();
	PROJECTECLIPSE_API UClass* Z_Construct_UClass_UFirearmMode_NoRegister();
	PROJECTECLIPSE_API UFunction* Z_Construct_UDelegateFunction_ProjectEclipse_FirearmFireEvent__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_ProjectEclipse();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_ProjectEclipse_FirearmFireEvent__DelegateSignature_Statics
	{
		struct _Script_ProjectEclipse_eventFirearmFireEvent_Parms
		{
			APawn* Wielder;
			bool Pressed;
			float PressedTime;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Wielder;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Pressed_MetaData[];
#endif
		static void NewProp_Pressed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Pressed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PressedTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PressedTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_ProjectEclipse_FirearmFireEvent__DelegateSignature_Statics::NewProp_Wielder = { "Wielder", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ProjectEclipse_eventFirearmFireEvent_Parms, Wielder), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ProjectEclipse_FirearmFireEvent__DelegateSignature_Statics::NewProp_Pressed_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UDelegateFunction_ProjectEclipse_FirearmFireEvent__DelegateSignature_Statics::NewProp_Pressed_SetBit(void* Obj)
	{
		((_Script_ProjectEclipse_eventFirearmFireEvent_Parms*)Obj)->Pressed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_ProjectEclipse_FirearmFireEvent__DelegateSignature_Statics::NewProp_Pressed = { "Pressed", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_ProjectEclipse_eventFirearmFireEvent_Parms), &Z_Construct_UDelegateFunction_ProjectEclipse_FirearmFireEvent__DelegateSignature_Statics::NewProp_Pressed_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectEclipse_FirearmFireEvent__DelegateSignature_Statics::NewProp_Pressed_MetaData), Z_Construct_UDelegateFunction_ProjectEclipse_FirearmFireEvent__DelegateSignature_Statics::NewProp_Pressed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ProjectEclipse_FirearmFireEvent__DelegateSignature_Statics::NewProp_PressedTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_ProjectEclipse_FirearmFireEvent__DelegateSignature_Statics::NewProp_PressedTime = { "PressedTime", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ProjectEclipse_eventFirearmFireEvent_Parms, PressedTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectEclipse_FirearmFireEvent__DelegateSignature_Statics::NewProp_PressedTime_MetaData), Z_Construct_UDelegateFunction_ProjectEclipse_FirearmFireEvent__DelegateSignature_Statics::NewProp_PressedTime_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ProjectEclipse_FirearmFireEvent__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProjectEclipse_FirearmFireEvent__DelegateSignature_Statics::NewProp_Wielder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProjectEclipse_FirearmFireEvent__DelegateSignature_Statics::NewProp_Pressed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProjectEclipse_FirearmFireEvent__DelegateSignature_Statics::NewProp_PressedTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ProjectEclipse_FirearmFireEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FirearmMode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ProjectEclipse_FirearmFireEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ProjectEclipse, nullptr, "FirearmFireEvent__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_ProjectEclipse_FirearmFireEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectEclipse_FirearmFireEvent__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_ProjectEclipse_FirearmFireEvent__DelegateSignature_Statics::_Script_ProjectEclipse_eventFirearmFireEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectEclipse_FirearmFireEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ProjectEclipse_FirearmFireEvent__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectEclipse_FirearmFireEvent__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_ProjectEclipse_FirearmFireEvent__DelegateSignature_Statics::_Script_ProjectEclipse_eventFirearmFireEvent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_ProjectEclipse_FirearmFireEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ProjectEclipse_FirearmFireEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FFirearmFireEvent_DelegateWrapper(const FMulticastScriptDelegate& FirearmFireEvent, APawn* Wielder, bool Pressed, const float PressedTime)
{
	struct _Script_ProjectEclipse_eventFirearmFireEvent_Parms
	{
		APawn* Wielder;
		bool Pressed;
		float PressedTime;
	};
	_Script_ProjectEclipse_eventFirearmFireEvent_Parms Parms;
	Parms.Wielder=Wielder;
	Parms.Pressed=Pressed ? true : false;
	Parms.PressedTime=PressedTime;
	FirearmFireEvent.ProcessMulticastDelegate<UObject>(&Parms);
}
	void UFirearmMode::StaticRegisterNativesUFirearmMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFirearmMode);
	UClass* Z_Construct_UClass_UFirearmMode_NoRegister()
	{
		return UFirearmMode::StaticClass();
	}
	struct Z_Construct_UClass_UFirearmMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Projectile_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_Projectile;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FireEvent_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_FireEvent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFirearmMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ProjectEclipse,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFirearmMode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirearmMode_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "FirearmMode.h" },
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
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirearmMode_Statics::NewProp_FireEvent_MetaData[] = {
		{ "ModuleRelativePath", "Public/FirearmMode.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFirearmMode_Statics::NewProp_FireEvent = { "FireEvent", nullptr, (EPropertyFlags)0x0040000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFirearmMode, FireEvent), Z_Construct_UDelegateFunction_ProjectEclipse_FirearmFireEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFirearmMode_Statics::NewProp_FireEvent_MetaData), Z_Construct_UClass_UFirearmMode_Statics::NewProp_FireEvent_MetaData) }; // 1000291793
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFirearmMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirearmMode_Statics::NewProp_Projectile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirearmMode_Statics::NewProp_FireEvent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFirearmMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFirearmMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFirearmMode_Statics::ClassParams = {
		&UFirearmMode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFirearmMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFirearmMode_Statics::PropPointers),
		0,
		0x009000A0u,
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
	UFirearmMode::UFirearmMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFirearmMode);
	UFirearmMode::~UFirearmMode() {}
	struct Z_CompiledInDeferFile_FID_ProjectEclipse_Source_ProjectEclipse_Public_FirearmMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEclipse_Source_ProjectEclipse_Public_FirearmMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFirearmMode, UFirearmMode::StaticClass, TEXT("UFirearmMode"), &Z_Registration_Info_UClass_UFirearmMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFirearmMode), 1933822494U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEclipse_Source_ProjectEclipse_Public_FirearmMode_h_1661090389(TEXT("/Script/ProjectEclipse"),
		Z_CompiledInDeferFile_FID_ProjectEclipse_Source_ProjectEclipse_Public_FirearmMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEclipse_Source_ProjectEclipse_Public_FirearmMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
