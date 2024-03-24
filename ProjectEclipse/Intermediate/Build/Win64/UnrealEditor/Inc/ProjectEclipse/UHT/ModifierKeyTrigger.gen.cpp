// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectEclipse/Public/ModifierKeyTrigger.h"
#include "InputCoreTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeModifierKeyTrigger() {}
// Cross Module References
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputTrigger();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
	PROJECTECLIPSE_API UClass* Z_Construct_UClass_UModifierKeyTrigger();
	PROJECTECLIPSE_API UClass* Z_Construct_UClass_UModifierKeyTrigger_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ProjectEclipse();
// End Cross Module References
	void UModifierKeyTrigger::StaticRegisterNativesUModifierKeyTrigger()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UModifierKeyTrigger);
	UClass* Z_Construct_UClass_UModifierKeyTrigger_NoRegister()
	{
		return UModifierKeyTrigger::StaticClass();
	}
	struct Z_Construct_UClass_UModifierKeyTrigger_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ModifierKey_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ModifierKey;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UModifierKeyTrigger_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInputTrigger,
		(UObject* (*)())Z_Construct_UPackage__Script_ProjectEclipse,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UModifierKeyTrigger_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UModifierKeyTrigger_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "ModifierKeyTrigger.h" },
		{ "ModuleRelativePath", "Public/ModifierKeyTrigger.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UModifierKeyTrigger_Statics::NewProp_ModifierKey_MetaData[] = {
		{ "Category", "Trigger Settings" },
		{ "ModuleRelativePath", "Public/ModifierKeyTrigger.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UModifierKeyTrigger_Statics::NewProp_ModifierKey = { "ModifierKey", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UModifierKeyTrigger, ModifierKey), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UModifierKeyTrigger_Statics::NewProp_ModifierKey_MetaData), Z_Construct_UClass_UModifierKeyTrigger_Statics::NewProp_ModifierKey_MetaData) }; // 46000949
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UModifierKeyTrigger_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModifierKeyTrigger_Statics::NewProp_ModifierKey,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UModifierKeyTrigger_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UModifierKeyTrigger>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UModifierKeyTrigger_Statics::ClassParams = {
		&UModifierKeyTrigger::StaticClass,
		"Input",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UModifierKeyTrigger_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UModifierKeyTrigger_Statics::PropPointers),
		0,
		0x401030A6u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UModifierKeyTrigger_Statics::Class_MetaDataParams), Z_Construct_UClass_UModifierKeyTrigger_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UModifierKeyTrigger_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UModifierKeyTrigger()
	{
		if (!Z_Registration_Info_UClass_UModifierKeyTrigger.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UModifierKeyTrigger.OuterSingleton, Z_Construct_UClass_UModifierKeyTrigger_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UModifierKeyTrigger.OuterSingleton;
	}
	template<> PROJECTECLIPSE_API UClass* StaticClass<UModifierKeyTrigger>()
	{
		return UModifierKeyTrigger::StaticClass();
	}
	UModifierKeyTrigger::UModifierKeyTrigger(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UModifierKeyTrigger);
	UModifierKeyTrigger::~UModifierKeyTrigger() {}
	struct Z_CompiledInDeferFile_FID_ProjectEclipse_Source_ProjectEclipse_Public_ModifierKeyTrigger_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEclipse_Source_ProjectEclipse_Public_ModifierKeyTrigger_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UModifierKeyTrigger, UModifierKeyTrigger::StaticClass, TEXT("UModifierKeyTrigger"), &Z_Registration_Info_UClass_UModifierKeyTrigger, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UModifierKeyTrigger), 3642552199U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEclipse_Source_ProjectEclipse_Public_ModifierKeyTrigger_h_4236176960(TEXT("/Script/ProjectEclipse"),
		Z_CompiledInDeferFile_FID_ProjectEclipse_Source_ProjectEclipse_Public_ModifierKeyTrigger_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEclipse_Source_ProjectEclipse_Public_ModifierKeyTrigger_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
