// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectEclipseVR/Public/EntityComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEntityComponent() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
PROJECTECLIPSEVR_API UClass* Z_Construct_UClass_UEntityAttribute_NoRegister();
PROJECTECLIPSEVR_API UClass* Z_Construct_UClass_UEntityComponent();
PROJECTECLIPSEVR_API UClass* Z_Construct_UClass_UEntityComponent_NoRegister();
PROJECTECLIPSEVR_API UClass* Z_Construct_UClass_UFaction_NoRegister();
PROJECTECLIPSEVR_API UClass* Z_Construct_UClass_UTrait_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectEclipseVR();
// End Cross Module References

// Begin Class UEntityComponent Function GetAttributes
struct Z_Construct_UFunction_UEntityComponent_GetAttributes_Statics
{
	struct EntityComponent_eventGetAttributes_Parms
	{
		TMap<TSubclassOf<UEntityAttribute> ,int32> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Entity Component|Stats|Attributes" },
		{ "ModuleRelativePath", "Public/EntityComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue_ValueProp;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ReturnValue_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEntityComponent_GetAttributes_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UEntityComponent_GetAttributes_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UEntityAttribute_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UEntityComponent_GetAttributes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EntityComponent_eventGetAttributes_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEntityComponent_GetAttributes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEntityComponent_GetAttributes_Statics::NewProp_ReturnValue_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEntityComponent_GetAttributes_Statics::NewProp_ReturnValue_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEntityComponent_GetAttributes_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEntityComponent_GetAttributes_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEntityComponent_GetAttributes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEntityComponent, nullptr, "GetAttributes", nullptr, nullptr, Z_Construct_UFunction_UEntityComponent_GetAttributes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEntityComponent_GetAttributes_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEntityComponent_GetAttributes_Statics::EntityComponent_eventGetAttributes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEntityComponent_GetAttributes_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEntityComponent_GetAttributes_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEntityComponent_GetAttributes_Statics::EntityComponent_eventGetAttributes_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEntityComponent_GetAttributes()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEntityComponent_GetAttributes_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEntityComponent::execGetAttributes)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TMap<TSubclassOf<UEntityAttribute> ,int32>*)Z_Param__Result=P_THIS->GetAttributes();
	P_NATIVE_END;
}
// End Class UEntityComponent Function GetAttributes

// Begin Class UEntityComponent Function GetAttributeTypes
struct Z_Construct_UFunction_UEntityComponent_GetAttributeTypes_Statics
{
	struct EntityComponent_eventGetAttributeTypes_Parms
	{
		TArray<TSubclassOf<UEntityAttribute> > ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Entity Component|Stats|Attributes" },
		{ "ModuleRelativePath", "Public/EntityComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UEntityComponent_GetAttributeTypes_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UEntityAttribute_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEntityComponent_GetAttributeTypes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EntityComponent_eventGetAttributeTypes_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEntityComponent_GetAttributeTypes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEntityComponent_GetAttributeTypes_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEntityComponent_GetAttributeTypes_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEntityComponent_GetAttributeTypes_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEntityComponent_GetAttributeTypes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEntityComponent, nullptr, "GetAttributeTypes", nullptr, nullptr, Z_Construct_UFunction_UEntityComponent_GetAttributeTypes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEntityComponent_GetAttributeTypes_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEntityComponent_GetAttributeTypes_Statics::EntityComponent_eventGetAttributeTypes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEntityComponent_GetAttributeTypes_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEntityComponent_GetAttributeTypes_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEntityComponent_GetAttributeTypes_Statics::EntityComponent_eventGetAttributeTypes_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEntityComponent_GetAttributeTypes()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEntityComponent_GetAttributeTypes_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEntityComponent::execGetAttributeTypes)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<TSubclassOf<UEntityAttribute> >*)Z_Param__Result=P_THIS->GetAttributeTypes();
	P_NATIVE_END;
}
// End Class UEntityComponent Function GetAttributeTypes

// Begin Class UEntityComponent
void UEntityComponent::StaticRegisterNativesUEntityComponent()
{
	UClass* Class = UEntityComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetAttributes", &UEntityComponent::execGetAttributes },
		{ "GetAttributeTypes", &UEntityComponent::execGetAttributeTypes },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEntityComponent);
UClass* Z_Construct_UClass_UEntityComponent_NoRegister()
{
	return UEntityComponent::StaticClass();
}
struct Z_Construct_UClass_UEntityComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "EntityComponent.h" },
		{ "ModuleRelativePath", "Public/EntityComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Attributes_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Stats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Key-value map storing entity's current values for its classes of attributes */" },
#endif
		{ "ModuleRelativePath", "Public/EntityComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Key-value map storing entity's current values for its classes of attributes" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Traits_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Stats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** List storing entity's currently held traits */" },
#endif
		{ "ModuleRelativePath", "Public/EntityComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "List storing entity's currently held traits" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Reputation_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Stats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Key-value map storing entity's current reputation with the different factions */" },
#endif
		{ "ModuleRelativePath", "Public/EntityComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Key-value map storing entity's current reputation with the different factions" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Attributes_ValueProp;
	static const UECodeGen_Private::FClassPropertyParams NewProp_Attributes_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Attributes;
	static const UECodeGen_Private::FClassPropertyParams NewProp_Traits_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Traits;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Reputation_ValueProp;
	static const UECodeGen_Private::FClassPropertyParams NewProp_Reputation_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Reputation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UEntityComponent_GetAttributes, "GetAttributes" }, // 3006433760
		{ &Z_Construct_UFunction_UEntityComponent_GetAttributeTypes, "GetAttributeTypes" }, // 3165948204
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEntityComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UEntityComponent_Statics::NewProp_Attributes_ValueProp = { "Attributes", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UEntityComponent_Statics::NewProp_Attributes_Key_KeyProp = { "Attributes_Key", nullptr, (EPropertyFlags)0x0004000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UEntityAttribute_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UEntityComponent_Statics::NewProp_Attributes = { "Attributes", nullptr, (EPropertyFlags)0x0040000000010015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEntityComponent, Attributes), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Attributes_MetaData), NewProp_Attributes_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UEntityComponent_Statics::NewProp_Traits_Inner = { "Traits", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UTrait_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEntityComponent_Statics::NewProp_Traits = { "Traits", nullptr, (EPropertyFlags)0x0044000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEntityComponent, Traits), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Traits_MetaData), NewProp_Traits_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEntityComponent_Statics::NewProp_Reputation_ValueProp = { "Reputation", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UEntityComponent_Statics::NewProp_Reputation_Key_KeyProp = { "Reputation_Key", nullptr, (EPropertyFlags)0x0004000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UFaction_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UEntityComponent_Statics::NewProp_Reputation = { "Reputation", nullptr, (EPropertyFlags)0x0040000000010015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEntityComponent, Reputation), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Reputation_MetaData), NewProp_Reputation_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEntityComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEntityComponent_Statics::NewProp_Attributes_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEntityComponent_Statics::NewProp_Attributes_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEntityComponent_Statics::NewProp_Attributes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEntityComponent_Statics::NewProp_Traits_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEntityComponent_Statics::NewProp_Traits,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEntityComponent_Statics::NewProp_Reputation_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEntityComponent_Statics::NewProp_Reputation_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEntityComponent_Statics::NewProp_Reputation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEntityComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEntityComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectEclipseVR,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEntityComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEntityComponent_Statics::ClassParams = {
	&UEntityComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UEntityComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UEntityComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEntityComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UEntityComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEntityComponent()
{
	if (!Z_Registration_Info_UClass_UEntityComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEntityComponent.OuterSingleton, Z_Construct_UClass_UEntityComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEntityComponent.OuterSingleton;
}
template<> PROJECTECLIPSEVR_API UClass* StaticClass<UEntityComponent>()
{
	return UEntityComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEntityComponent);
UEntityComponent::~UEntityComponent() {}
// End Class UEntityComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Github_ProjectEclipse_ProjectEclipseVR_Source_ProjectEclipseVR_Public_EntityComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEntityComponent, UEntityComponent::StaticClass, TEXT("UEntityComponent"), &Z_Registration_Info_UClass_UEntityComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEntityComponent), 1328752656U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_ProjectEclipse_ProjectEclipseVR_Source_ProjectEclipseVR_Public_EntityComponent_h_2253220793(TEXT("/Script/ProjectEclipseVR"),
	Z_CompiledInDeferFile_FID_Github_ProjectEclipse_ProjectEclipseVR_Source_ProjectEclipseVR_Public_EntityComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_ProjectEclipse_ProjectEclipseVR_Source_ProjectEclipseVR_Public_EntityComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
