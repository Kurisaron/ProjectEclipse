// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectEclipse/Public/Equipment.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEquipment() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	PROJECTECLIPSE_API UClass* Z_Construct_UClass_UEquipment();
	PROJECTECLIPSE_API UClass* Z_Construct_UClass_UEquipment_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ProjectEclipse();
// End Cross Module References
	DEFINE_FUNCTION(UEquipment::execAlternateUse)
	{
		P_GET_UBOOL(Z_Param_Pressed);
		P_GET_PROPERTY(FFloatProperty,Z_Param_PressedTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AlternateUse_Implementation(Z_Param_Pressed,Z_Param_PressedTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEquipment::execSecondaryUse)
	{
		P_GET_UBOOL(Z_Param_Pressed);
		P_GET_PROPERTY(FFloatProperty,Z_Param_PressedTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SecondaryUse_Implementation(Z_Param_Pressed,Z_Param_PressedTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEquipment::execPrimaryUse)
	{
		P_GET_UBOOL(Z_Param_Pressed);
		P_GET_PROPERTY(FFloatProperty,Z_Param_PressedTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PrimaryUse_Implementation(Z_Param_Pressed,Z_Param_PressedTime);
		P_NATIVE_END;
	}
	struct Equipment_eventAlternateUse_Parms
	{
		bool Pressed;
		float PressedTime;
	};
	struct Equipment_eventPrimaryUse_Parms
	{
		bool Pressed;
		float PressedTime;
	};
	struct Equipment_eventSecondaryUse_Parms
	{
		bool Pressed;
		float PressedTime;
	};
	static FName NAME_UEquipment_AlternateUse = FName(TEXT("AlternateUse"));
	void UEquipment::AlternateUse(bool Pressed, float PressedTime)
	{
		Equipment_eventAlternateUse_Parms Parms;
		Parms.Pressed=Pressed ? true : false;
		Parms.PressedTime=PressedTime;
		ProcessEvent(FindFunctionChecked(NAME_UEquipment_AlternateUse),&Parms);
	}
	static FName NAME_UEquipment_PrimaryUse = FName(TEXT("PrimaryUse"));
	void UEquipment::PrimaryUse(bool Pressed, float PressedTime)
	{
		Equipment_eventPrimaryUse_Parms Parms;
		Parms.Pressed=Pressed ? true : false;
		Parms.PressedTime=PressedTime;
		ProcessEvent(FindFunctionChecked(NAME_UEquipment_PrimaryUse),&Parms);
	}
	static FName NAME_UEquipment_SecondaryUse = FName(TEXT("SecondaryUse"));
	void UEquipment::SecondaryUse(bool Pressed, float PressedTime)
	{
		Equipment_eventSecondaryUse_Parms Parms;
		Parms.Pressed=Pressed ? true : false;
		Parms.PressedTime=PressedTime;
		ProcessEvent(FindFunctionChecked(NAME_UEquipment_SecondaryUse),&Parms);
	}
	void UEquipment::StaticRegisterNativesUEquipment()
	{
		UClass* Class = UEquipment::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AlternateUse", &UEquipment::execAlternateUse },
			{ "PrimaryUse", &UEquipment::execPrimaryUse },
			{ "SecondaryUse", &UEquipment::execSecondaryUse },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEquipment_AlternateUse_Statics
	{
		static void NewProp_Pressed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Pressed;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PressedTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UEquipment_AlternateUse_Statics::NewProp_Pressed_SetBit(void* Obj)
	{
		((Equipment_eventAlternateUse_Parms*)Obj)->Pressed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEquipment_AlternateUse_Statics::NewProp_Pressed = { "Pressed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Equipment_eventAlternateUse_Parms), &Z_Construct_UFunction_UEquipment_AlternateUse_Statics::NewProp_Pressed_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UEquipment_AlternateUse_Statics::NewProp_PressedTime = { "PressedTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Equipment_eventAlternateUse_Parms, PressedTime), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEquipment_AlternateUse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEquipment_AlternateUse_Statics::NewProp_Pressed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEquipment_AlternateUse_Statics::NewProp_PressedTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEquipment_AlternateUse_Statics::Function_MetaDataParams[] = {
		{ "Category", "Equipment Actions" },
		{ "ModuleRelativePath", "Public/Equipment.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEquipment_AlternateUse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEquipment, nullptr, "AlternateUse", nullptr, nullptr, Z_Construct_UFunction_UEquipment_AlternateUse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipment_AlternateUse_Statics::PropPointers), sizeof(Equipment_eventAlternateUse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipment_AlternateUse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEquipment_AlternateUse_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipment_AlternateUse_Statics::PropPointers) < 2048);
	static_assert(sizeof(Equipment_eventAlternateUse_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UEquipment_AlternateUse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEquipment_AlternateUse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEquipment_PrimaryUse_Statics
	{
		static void NewProp_Pressed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Pressed;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PressedTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UEquipment_PrimaryUse_Statics::NewProp_Pressed_SetBit(void* Obj)
	{
		((Equipment_eventPrimaryUse_Parms*)Obj)->Pressed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEquipment_PrimaryUse_Statics::NewProp_Pressed = { "Pressed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Equipment_eventPrimaryUse_Parms), &Z_Construct_UFunction_UEquipment_PrimaryUse_Statics::NewProp_Pressed_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UEquipment_PrimaryUse_Statics::NewProp_PressedTime = { "PressedTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Equipment_eventPrimaryUse_Parms, PressedTime), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEquipment_PrimaryUse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEquipment_PrimaryUse_Statics::NewProp_Pressed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEquipment_PrimaryUse_Statics::NewProp_PressedTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEquipment_PrimaryUse_Statics::Function_MetaDataParams[] = {
		{ "Category", "Equipment Actions" },
		{ "ModuleRelativePath", "Public/Equipment.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEquipment_PrimaryUse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEquipment, nullptr, "PrimaryUse", nullptr, nullptr, Z_Construct_UFunction_UEquipment_PrimaryUse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipment_PrimaryUse_Statics::PropPointers), sizeof(Equipment_eventPrimaryUse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipment_PrimaryUse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEquipment_PrimaryUse_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipment_PrimaryUse_Statics::PropPointers) < 2048);
	static_assert(sizeof(Equipment_eventPrimaryUse_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UEquipment_PrimaryUse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEquipment_PrimaryUse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEquipment_SecondaryUse_Statics
	{
		static void NewProp_Pressed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Pressed;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PressedTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UEquipment_SecondaryUse_Statics::NewProp_Pressed_SetBit(void* Obj)
	{
		((Equipment_eventSecondaryUse_Parms*)Obj)->Pressed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEquipment_SecondaryUse_Statics::NewProp_Pressed = { "Pressed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Equipment_eventSecondaryUse_Parms), &Z_Construct_UFunction_UEquipment_SecondaryUse_Statics::NewProp_Pressed_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UEquipment_SecondaryUse_Statics::NewProp_PressedTime = { "PressedTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Equipment_eventSecondaryUse_Parms, PressedTime), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEquipment_SecondaryUse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEquipment_SecondaryUse_Statics::NewProp_Pressed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEquipment_SecondaryUse_Statics::NewProp_PressedTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEquipment_SecondaryUse_Statics::Function_MetaDataParams[] = {
		{ "Category", "Equipment Actions" },
		{ "ModuleRelativePath", "Public/Equipment.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEquipment_SecondaryUse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEquipment, nullptr, "SecondaryUse", nullptr, nullptr, Z_Construct_UFunction_UEquipment_SecondaryUse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipment_SecondaryUse_Statics::PropPointers), sizeof(Equipment_eventSecondaryUse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipment_SecondaryUse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEquipment_SecondaryUse_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipment_SecondaryUse_Statics::PropPointers) < 2048);
	static_assert(sizeof(Equipment_eventSecondaryUse_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UEquipment_SecondaryUse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEquipment_SecondaryUse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEquipment);
	UClass* Z_Construct_UClass_UEquipment_NoRegister()
	{
		return UEquipment::StaticClass();
	}
	struct Z_Construct_UClass_UEquipment_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EquipmentMappingContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_EquipmentMappingContext;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEquipment_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ProjectEclipse,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEquipment_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UEquipment_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEquipment_AlternateUse, "AlternateUse" }, // 3924152989
		{ &Z_Construct_UFunction_UEquipment_PrimaryUse, "PrimaryUse" }, // 610046483
		{ &Z_Construct_UFunction_UEquipment_SecondaryUse, "SecondaryUse" }, // 547808113
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEquipment_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEquipment_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Equipment.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Equipment.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEquipment_Statics::NewProp_Mesh_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Mesh" },
		{ "ModuleRelativePath", "Public/Equipment.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEquipment_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEquipment, Mesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEquipment_Statics::NewProp_Mesh_MetaData), Z_Construct_UClass_UEquipment_Statics::NewProp_Mesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEquipment_Statics::NewProp_EquipmentMappingContext_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** MappingContext */" },
#endif
		{ "ModuleRelativePath", "Public/Equipment.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "MappingContext" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEquipment_Statics::NewProp_EquipmentMappingContext = { "EquipmentMappingContext", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEquipment, EquipmentMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEquipment_Statics::NewProp_EquipmentMappingContext_MetaData), Z_Construct_UClass_UEquipment_Statics::NewProp_EquipmentMappingContext_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEquipment_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipment_Statics::NewProp_Mesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipment_Statics::NewProp_EquipmentMappingContext,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEquipment_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEquipment>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEquipment_Statics::ClassParams = {
		&UEquipment::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEquipment_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEquipment_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEquipment_Statics::Class_MetaDataParams), Z_Construct_UClass_UEquipment_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEquipment_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UEquipment()
	{
		if (!Z_Registration_Info_UClass_UEquipment.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEquipment.OuterSingleton, Z_Construct_UClass_UEquipment_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEquipment.OuterSingleton;
	}
	template<> PROJECTECLIPSE_API UClass* StaticClass<UEquipment>()
	{
		return UEquipment::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEquipment);
	UEquipment::~UEquipment() {}
	struct Z_CompiledInDeferFile_FID_ProjectEclipse_Source_ProjectEclipse_Public_Equipment_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEclipse_Source_ProjectEclipse_Public_Equipment_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEquipment, UEquipment::StaticClass, TEXT("UEquipment"), &Z_Registration_Info_UClass_UEquipment, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEquipment), 1517926584U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEclipse_Source_ProjectEclipse_Public_Equipment_h_1128561553(TEXT("/Script/ProjectEclipse"),
		Z_CompiledInDeferFile_FID_ProjectEclipse_Source_ProjectEclipse_Public_Equipment_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEclipse_Source_ProjectEclipse_Public_Equipment_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
