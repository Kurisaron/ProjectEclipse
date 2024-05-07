// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectEclipseVR/Public/Item.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItem() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
PROJECTECLIPSEVR_API UClass* Z_Construct_UClass_AItem();
PROJECTECLIPSEVR_API UClass* Z_Construct_UClass_AItem_NoRegister();
PROJECTECLIPSEVR_API UClass* Z_Construct_UClass_UEntityComponent_NoRegister();
PROJECTECLIPSEVR_API UClass* Z_Construct_UClass_UGripComponent_NoRegister();
PROJECTECLIPSEVR_API UScriptStruct* Z_Construct_UScriptStruct_FItemData();
PROJECTECLIPSEVR_API UScriptStruct* Z_Construct_UScriptStruct_FItemWielderStatus();
UPackage* Z_Construct_UPackage__Script_ProjectEclipseVR();
// End Cross Module References

// Begin ScriptStruct FItemData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ItemData;
class UScriptStruct* FItemData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ItemData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ItemData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FItemData, (UObject*)Z_Construct_UPackage__Script_ProjectEclipseVR(), TEXT("ItemData"));
	}
	return Z_Registration_Info_UScriptStruct_ItemData.OuterSingleton;
}
template<> PROJECTECLIPSEVR_API UScriptStruct* StaticStruct<FItemData>()
{
	return FItemData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FItemData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Item.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "ItemData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Name used to represent the item to the player in UI\n" },
#endif
		{ "ModuleRelativePath", "Public/Item.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Name used to represent the item to the player in UI" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "ItemData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ID used by the system/code to locate an item or check for matches\n" },
#endif
		{ "ModuleRelativePath", "Public/Item.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ID used by the system/code to locate an item or check for matches" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_DisplayName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FItemData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FItemData_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemData, DisplayName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplayName_MetaData), NewProp_DisplayName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FItemData_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemData, ID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ID_MetaData), NewProp_ID_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FItemData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemData_Statics::NewProp_DisplayName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemData_Statics::NewProp_ID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FItemData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectEclipseVR,
	nullptr,
	&NewStructOps,
	"ItemData",
	Z_Construct_UScriptStruct_FItemData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemData_Statics::PropPointers),
	sizeof(FItemData),
	alignof(FItemData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FItemData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FItemData()
{
	if (!Z_Registration_Info_UScriptStruct_ItemData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ItemData.InnerSingleton, Z_Construct_UScriptStruct_FItemData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ItemData.InnerSingleton;
}
// End ScriptStruct FItemData

// Begin ScriptStruct FItemWielderStatus
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ItemWielderStatus;
class UScriptStruct* FItemWielderStatus::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ItemWielderStatus.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ItemWielderStatus.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FItemWielderStatus, (UObject*)Z_Construct_UPackage__Script_ProjectEclipseVR(), TEXT("ItemWielderStatus"));
	}
	return Z_Registration_Info_UScriptStruct_ItemWielderStatus.OuterSingleton;
}
template<> PROJECTECLIPSEVR_API UScriptStruct* StaticStruct<FItemWielderStatus>()
{
	return FItemWielderStatus::StaticStruct();
}
struct Z_Construct_UScriptStruct_FItemWielderStatus_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Item.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Actor_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "ItemWielderStatus" },
		{ "ModuleRelativePath", "Public/Item.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Entity_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "ItemWielderStatus" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Item.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Entity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FItemWielderStatus>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FItemWielderStatus_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemWielderStatus, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Actor_MetaData), NewProp_Actor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FItemWielderStatus_Statics::NewProp_Entity = { "Entity", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemWielderStatus, Entity), Z_Construct_UClass_UEntityComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Entity_MetaData), NewProp_Entity_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FItemWielderStatus_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemWielderStatus_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemWielderStatus_Statics::NewProp_Entity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemWielderStatus_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FItemWielderStatus_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectEclipseVR,
	nullptr,
	&NewStructOps,
	"ItemWielderStatus",
	Z_Construct_UScriptStruct_FItemWielderStatus_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemWielderStatus_Statics::PropPointers),
	sizeof(FItemWielderStatus),
	alignof(FItemWielderStatus),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemWielderStatus_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FItemWielderStatus_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FItemWielderStatus()
{
	if (!Z_Registration_Info_UScriptStruct_ItemWielderStatus.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ItemWielderStatus.InnerSingleton, Z_Construct_UScriptStruct_FItemWielderStatus_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ItemWielderStatus.InnerSingleton;
}
// End ScriptStruct FItemWielderStatus

// Begin Class AItem Function GetItemData
struct Z_Construct_UFunction_AItem_GetItemData_Statics
{
	struct Item_eventGetItemData_Parms
	{
		FItemData ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Item|Data" },
		{ "ModuleRelativePath", "Public/Item.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AItem_GetItemData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Item_eventGetItemData_Parms, ReturnValue), Z_Construct_UScriptStruct_FItemData, METADATA_PARAMS(0, nullptr) }; // 2393644858
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AItem_GetItemData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AItem_GetItemData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AItem_GetItemData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AItem_GetItemData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AItem, nullptr, "GetItemData", nullptr, nullptr, Z_Construct_UFunction_AItem_GetItemData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AItem_GetItemData_Statics::PropPointers), sizeof(Z_Construct_UFunction_AItem_GetItemData_Statics::Item_eventGetItemData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AItem_GetItemData_Statics::Function_MetaDataParams), Z_Construct_UFunction_AItem_GetItemData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AItem_GetItemData_Statics::Item_eventGetItemData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AItem_GetItemData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AItem_GetItemData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AItem::execGetItemData)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FItemData*)Z_Param__Result=P_THIS->GetItemData();
	P_NATIVE_END;
}
// End Class AItem Function GetItemData

// Begin Class AItem
void AItem::StaticRegisterNativesAItem()
{
	UClass* Class = AItem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetItemData", &AItem::execGetItemData },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AItem);
UClass* Z_Construct_UClass_AItem_NoRegister()
{
	return AItem::StaticClass();
}
struct Z_Construct_UClass_AItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Items are any object that can be held\n */" },
#endif
		{ "IncludePath", "Item.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Item.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Items are any object that can be held" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemData_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Item|Data" },
		{ "ModuleRelativePath", "Public/Item.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Wielder_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Item|Wielder" },
		{ "ModuleRelativePath", "Public/Item.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MainGrip_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Item|Grips" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Item.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AdditionalGrips_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Item|Grips" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Item.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ItemData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Wielder;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MainGrip;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AdditionalGrips_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_AdditionalGrips_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_AdditionalGrips;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AItem_GetItemData, "GetItemData" }, // 314097991
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AItem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AItem_Statics::NewProp_ItemData = { "ItemData", nullptr, (EPropertyFlags)0x0040000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AItem, ItemData), Z_Construct_UScriptStruct_FItemData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemData_MetaData), NewProp_ItemData_MetaData) }; // 2393644858
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AItem_Statics::NewProp_Wielder = { "Wielder", nullptr, (EPropertyFlags)0x0040008000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AItem, Wielder), Z_Construct_UScriptStruct_FItemWielderStatus, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Wielder_MetaData), NewProp_Wielder_MetaData) }; // 1377347903
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AItem_Statics::NewProp_MainGrip = { "MainGrip", nullptr, (EPropertyFlags)0x004000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AItem, MainGrip), Z_Construct_UClass_UGripComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MainGrip_MetaData), NewProp_MainGrip_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AItem_Statics::NewProp_AdditionalGrips_ValueProp = { "AdditionalGrips", nullptr, (EPropertyFlags)0x0000000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UGripComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AItem_Statics::NewProp_AdditionalGrips_Key_KeyProp = { "AdditionalGrips_Key", nullptr, (EPropertyFlags)0x0000000000080009, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AItem_Statics::NewProp_AdditionalGrips = { "AdditionalGrips", nullptr, (EPropertyFlags)0x004000800000000d, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AItem, AdditionalGrips), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AdditionalGrips_MetaData), NewProp_AdditionalGrips_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItem_Statics::NewProp_ItemData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItem_Statics::NewProp_Wielder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItem_Statics::NewProp_MainGrip,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItem_Statics::NewProp_AdditionalGrips_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItem_Statics::NewProp_AdditionalGrips_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItem_Statics::NewProp_AdditionalGrips,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AItem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AItem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectEclipseVR,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AItem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AItem_Statics::ClassParams = {
	&AItem::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AItem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AItem_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AItem_Statics::Class_MetaDataParams), Z_Construct_UClass_AItem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AItem()
{
	if (!Z_Registration_Info_UClass_AItem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AItem.OuterSingleton, Z_Construct_UClass_AItem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AItem.OuterSingleton;
}
template<> PROJECTECLIPSEVR_API UClass* StaticClass<AItem>()
{
	return AItem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AItem);
AItem::~AItem() {}
// End Class AItem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Github_ProjectEclipse_ProjectEclipseVR_Source_ProjectEclipseVR_Public_Item_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FItemData::StaticStruct, Z_Construct_UScriptStruct_FItemData_Statics::NewStructOps, TEXT("ItemData"), &Z_Registration_Info_UScriptStruct_ItemData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FItemData), 2393644858U) },
		{ FItemWielderStatus::StaticStruct, Z_Construct_UScriptStruct_FItemWielderStatus_Statics::NewStructOps, TEXT("ItemWielderStatus"), &Z_Registration_Info_UScriptStruct_ItemWielderStatus, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FItemWielderStatus), 1377347903U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AItem, AItem::StaticClass, TEXT("AItem"), &Z_Registration_Info_UClass_AItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AItem), 877698518U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_ProjectEclipse_ProjectEclipseVR_Source_ProjectEclipseVR_Public_Item_h_994536612(TEXT("/Script/ProjectEclipseVR"),
	Z_CompiledInDeferFile_FID_Github_ProjectEclipse_ProjectEclipseVR_Source_ProjectEclipseVR_Public_Item_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_ProjectEclipse_ProjectEclipseVR_Source_ProjectEclipseVR_Public_Item_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Github_ProjectEclipse_ProjectEclipseVR_Source_ProjectEclipseVR_Public_Item_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_ProjectEclipse_ProjectEclipseVR_Source_ProjectEclipseVR_Public_Item_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
