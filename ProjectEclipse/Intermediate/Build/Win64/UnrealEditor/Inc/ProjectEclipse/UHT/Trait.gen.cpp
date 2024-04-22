// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectEclipse/Public/Trait.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTrait() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	PROJECTECLIPSE_API UClass* Z_Construct_UClass_UEntityAttribute_NoRegister();
	PROJECTECLIPSE_API UClass* Z_Construct_UClass_UTrait();
	PROJECTECLIPSE_API UClass* Z_Construct_UClass_UTrait_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ProjectEclipse();
// End Cross Module References
	DEFINE_FUNCTION(UTrait::execRemoveTrait)
	{
		P_GET_OBJECT(AActor,Z_Param_Recipient);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveTrait_Implementation(Z_Param_Recipient);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTrait::execApplyTrait)
	{
		P_GET_OBJECT(AActor,Z_Param_Recipient);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyTrait_Implementation(Z_Param_Recipient);
		P_NATIVE_END;
	}
	struct Trait_eventApplyTrait_Parms
	{
		AActor* Recipient;
	};
	struct Trait_eventRemoveTrait_Parms
	{
		AActor* Recipient;
	};
	static FName NAME_UTrait_ApplyTrait = FName(TEXT("ApplyTrait"));
	void UTrait::ApplyTrait(AActor* Recipient)
	{
		Trait_eventApplyTrait_Parms Parms;
		Parms.Recipient=Recipient;
		ProcessEvent(FindFunctionChecked(NAME_UTrait_ApplyTrait),&Parms);
	}
	static FName NAME_UTrait_RemoveTrait = FName(TEXT("RemoveTrait"));
	void UTrait::RemoveTrait(AActor* Recipient)
	{
		Trait_eventRemoveTrait_Parms Parms;
		Parms.Recipient=Recipient;
		ProcessEvent(FindFunctionChecked(NAME_UTrait_RemoveTrait),&Parms);
	}
	void UTrait::StaticRegisterNativesUTrait()
	{
		UClass* Class = UTrait::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ApplyTrait", &UTrait::execApplyTrait },
			{ "RemoveTrait", &UTrait::execRemoveTrait },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTrait_ApplyTrait_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Recipient;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTrait_ApplyTrait_Statics::NewProp_Recipient = { "Recipient", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Trait_eventApplyTrait_Parms, Recipient), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTrait_ApplyTrait_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTrait_ApplyTrait_Statics::NewProp_Recipient,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTrait_ApplyTrait_Statics::Function_MetaDataParams[] = {
		{ "Category", "Traits" },
		{ "ModuleRelativePath", "Public/Trait.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTrait_ApplyTrait_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTrait, nullptr, "ApplyTrait", nullptr, nullptr, Z_Construct_UFunction_UTrait_ApplyTrait_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTrait_ApplyTrait_Statics::PropPointers), sizeof(Trait_eventApplyTrait_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTrait_ApplyTrait_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTrait_ApplyTrait_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTrait_ApplyTrait_Statics::PropPointers) < 2048);
	static_assert(sizeof(Trait_eventApplyTrait_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UTrait_ApplyTrait()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTrait_ApplyTrait_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTrait_RemoveTrait_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Recipient;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTrait_RemoveTrait_Statics::NewProp_Recipient = { "Recipient", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Trait_eventRemoveTrait_Parms, Recipient), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTrait_RemoveTrait_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTrait_RemoveTrait_Statics::NewProp_Recipient,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTrait_RemoveTrait_Statics::Function_MetaDataParams[] = {
		{ "Category", "Traits" },
		{ "ModuleRelativePath", "Public/Trait.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTrait_RemoveTrait_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTrait, nullptr, "RemoveTrait", nullptr, nullptr, Z_Construct_UFunction_UTrait_RemoveTrait_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTrait_RemoveTrait_Statics::PropPointers), sizeof(Trait_eventRemoveTrait_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTrait_RemoveTrait_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTrait_RemoveTrait_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTrait_RemoveTrait_Statics::PropPointers) < 2048);
	static_assert(sizeof(Trait_eventRemoveTrait_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UTrait_RemoveTrait()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTrait_RemoveTrait_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTrait);
	UClass* Z_Construct_UClass_UTrait_NoRegister()
	{
		return UTrait::StaticClass();
	}
	struct Z_Construct_UClass_UTrait_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Modifiers_ValueProp;
		static const UECodeGen_Private::FClassPropertyParams NewProp_Modifiers_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Modifiers_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Modifiers;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTrait_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ProjectEclipse,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTrait_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UTrait_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTrait_ApplyTrait, "ApplyTrait" }, // 1084652668
		{ &Z_Construct_UFunction_UTrait_RemoveTrait, "RemoveTrait" }, // 3109577593
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTrait_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTrait_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Traits are features that are held by an entity within the game. Traits extend the entities' core functionality, either modifying existing abilities or supplying new ones\n */" },
#endif
		{ "IncludePath", "Trait.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Trait.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Traits are features that are held by an entity within the game. Traits extend the entities' core functionality, either modifying existing abilities or supplying new ones" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTrait_Statics::NewProp_Modifiers_ValueProp = { "Modifiers", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UTrait_Statics::NewProp_Modifiers_Key_KeyProp = { "Modifiers_Key", nullptr, (EPropertyFlags)0x0004000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UEntityAttribute_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTrait_Statics::NewProp_Modifiers_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Stat Modifiers" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Modifiers meant to add/subtract flat values from the total */" },
#endif
		{ "ModuleRelativePath", "Public/Trait.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Modifiers meant to add/subtract flat values from the total" },
#endif
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UTrait_Statics::NewProp_Modifiers = { "Modifiers", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTrait, Modifiers), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTrait_Statics::NewProp_Modifiers_MetaData), Z_Construct_UClass_UTrait_Statics::NewProp_Modifiers_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTrait_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTrait_Statics::NewProp_Modifiers_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTrait_Statics::NewProp_Modifiers_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTrait_Statics::NewProp_Modifiers,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTrait_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTrait>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTrait_Statics::ClassParams = {
		&UTrait::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTrait_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTrait_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTrait_Statics::Class_MetaDataParams), Z_Construct_UClass_UTrait_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTrait_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UTrait()
	{
		if (!Z_Registration_Info_UClass_UTrait.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTrait.OuterSingleton, Z_Construct_UClass_UTrait_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTrait.OuterSingleton;
	}
	template<> PROJECTECLIPSE_API UClass* StaticClass<UTrait>()
	{
		return UTrait::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTrait);
	UTrait::~UTrait() {}
	struct Z_CompiledInDeferFile_FID_ProjectEclipse_Source_ProjectEclipse_Public_Trait_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEclipse_Source_ProjectEclipse_Public_Trait_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTrait, UTrait::StaticClass, TEXT("UTrait"), &Z_Registration_Info_UClass_UTrait, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTrait), 775229542U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEclipse_Source_ProjectEclipse_Public_Trait_h_2238693821(TEXT("/Script/ProjectEclipse"),
		Z_CompiledInDeferFile_FID_ProjectEclipse_Source_ProjectEclipse_Public_Trait_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEclipse_Source_ProjectEclipse_Public_Trait_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
