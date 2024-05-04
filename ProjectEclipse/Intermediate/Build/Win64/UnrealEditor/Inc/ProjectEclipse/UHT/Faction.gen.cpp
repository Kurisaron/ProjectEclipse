// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectEclipse/Public/Faction.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFaction() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
PROJECTECLIPSE_API UClass* Z_Construct_UClass_UFaction();
PROJECTECLIPSE_API UClass* Z_Construct_UClass_UFaction_NoRegister();
PROJECTECLIPSE_API UScriptStruct* Z_Construct_UScriptStruct_FFactionRank();
UPackage* Z_Construct_UPackage__Script_ProjectEclipse();
// End Cross Module References

// Begin ScriptStruct FFactionRank
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FactionRank;
class UScriptStruct* FFactionRank::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FactionRank.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FactionRank.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFactionRank, (UObject*)Z_Construct_UPackage__Script_ProjectEclipse(), TEXT("FactionRank"));
	}
	return Z_Registration_Info_UScriptStruct_FactionRank.OuterSingleton;
}
template<> PROJECTECLIPSE_API UScriptStruct* StaticStruct<FFactionRank>()
{
	return FFactionRank::StaticStruct();
}
struct Z_Construct_UScriptStruct_FFactionRank_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Faction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Title_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "FactionRank" },
		{ "ModuleRelativePath", "Public/Faction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Requirement_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "FactionRank" },
		{ "ModuleRelativePath", "Public/Faction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Title;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Requirement;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFactionRank>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFactionRank_Statics::NewProp_Title = { "Title", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFactionRank, Title), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Title_MetaData), NewProp_Title_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFactionRank_Statics::NewProp_Requirement = { "Requirement", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFactionRank, Requirement), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Requirement_MetaData), NewProp_Requirement_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFactionRank_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFactionRank_Statics::NewProp_Title,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFactionRank_Statics::NewProp_Requirement,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFactionRank_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFactionRank_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectEclipse,
	nullptr,
	&NewStructOps,
	"FactionRank",
	Z_Construct_UScriptStruct_FFactionRank_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFactionRank_Statics::PropPointers),
	sizeof(FFactionRank),
	alignof(FFactionRank),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFactionRank_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFactionRank_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FFactionRank()
{
	if (!Z_Registration_Info_UScriptStruct_FactionRank.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FactionRank.InnerSingleton, Z_Construct_UScriptStruct_FFactionRank_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FactionRank.InnerSingleton;
}
// End ScriptStruct FFactionRank

// Begin Class UFaction Function GetDisplayName
struct Z_Construct_UFunction_UFaction_GetDisplayName_Statics
{
	struct Faction_eventGetDisplayName_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Faction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFaction_GetDisplayName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Faction_eventGetDisplayName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFaction_GetDisplayName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFaction_GetDisplayName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFaction_GetDisplayName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFaction_GetDisplayName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFaction, nullptr, "GetDisplayName", nullptr, nullptr, Z_Construct_UFunction_UFaction_GetDisplayName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFaction_GetDisplayName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFaction_GetDisplayName_Statics::Faction_eventGetDisplayName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFaction_GetDisplayName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFaction_GetDisplayName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFaction_GetDisplayName_Statics::Faction_eventGetDisplayName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFaction_GetDisplayName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFaction_GetDisplayName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFaction::execGetDisplayName)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetDisplayName();
	P_NATIVE_END;
}
// End Class UFaction Function GetDisplayName

// Begin Class UFaction Function GetIcon
struct Z_Construct_UFunction_UFaction_GetIcon_Statics
{
	struct Faction_eventGetIcon_Parms
	{
		UTexture2D* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Faction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFaction_GetIcon_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Faction_eventGetIcon_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFaction_GetIcon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFaction_GetIcon_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFaction_GetIcon_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFaction_GetIcon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFaction, nullptr, "GetIcon", nullptr, nullptr, Z_Construct_UFunction_UFaction_GetIcon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFaction_GetIcon_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFaction_GetIcon_Statics::Faction_eventGetIcon_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFaction_GetIcon_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFaction_GetIcon_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFaction_GetIcon_Statics::Faction_eventGetIcon_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFaction_GetIcon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFaction_GetIcon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFaction::execGetIcon)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UTexture2D**)Z_Param__Result=P_THIS->GetIcon();
	P_NATIVE_END;
}
// End Class UFaction Function GetIcon

// Begin Class UFaction Function GetID
struct Z_Construct_UFunction_UFaction_GetID_Statics
{
	struct Faction_eventGetID_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Faction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFaction_GetID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Faction_eventGetID_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFaction_GetID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFaction_GetID_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFaction_GetID_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFaction_GetID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFaction, nullptr, "GetID", nullptr, nullptr, Z_Construct_UFunction_UFaction_GetID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFaction_GetID_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFaction_GetID_Statics::Faction_eventGetID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFaction_GetID_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFaction_GetID_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFaction_GetID_Statics::Faction_eventGetID_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFaction_GetID()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFaction_GetID_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFaction::execGetID)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetID();
	P_NATIVE_END;
}
// End Class UFaction Function GetID

// Begin Class UFaction Function GetRank
struct Z_Construct_UFunction_UFaction_GetRank_Statics
{
	struct Faction_eventGetRank_Parms
	{
		int32 Level;
		FFactionRank ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Faction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Level;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFaction_GetRank_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Faction_eventGetRank_Parms, Level), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFaction_GetRank_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Faction_eventGetRank_Parms, ReturnValue), Z_Construct_UScriptStruct_FFactionRank, METADATA_PARAMS(0, nullptr) }; // 2884047688
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFaction_GetRank_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFaction_GetRank_Statics::NewProp_Level,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFaction_GetRank_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFaction_GetRank_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFaction_GetRank_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFaction, nullptr, "GetRank", nullptr, nullptr, Z_Construct_UFunction_UFaction_GetRank_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFaction_GetRank_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFaction_GetRank_Statics::Faction_eventGetRank_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFaction_GetRank_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFaction_GetRank_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFaction_GetRank_Statics::Faction_eventGetRank_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFaction_GetRank()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFaction_GetRank_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFaction::execGetRank)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Level);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FFactionRank*)Z_Param__Result=P_THIS->GetRank(Z_Param_Level);
	P_NATIVE_END;
}
// End Class UFaction Function GetRank

// Begin Class UFaction Function GetTags
struct Z_Construct_UFunction_UFaction_GetTags_Statics
{
	struct Faction_eventGetTags_Parms
	{
		TArray<FString> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Faction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFaction_GetTags_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFaction_GetTags_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Faction_eventGetTags_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFaction_GetTags_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFaction_GetTags_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFaction_GetTags_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFaction_GetTags_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFaction_GetTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFaction, nullptr, "GetTags", nullptr, nullptr, Z_Construct_UFunction_UFaction_GetTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFaction_GetTags_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFaction_GetTags_Statics::Faction_eventGetTags_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFaction_GetTags_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFaction_GetTags_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFaction_GetTags_Statics::Faction_eventGetTags_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFaction_GetTags()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFaction_GetTags_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFaction::execGetTags)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FString>*)Z_Param__Result=P_THIS->GetTags();
	P_NATIVE_END;
}
// End Class UFaction Function GetTags

// Begin Class UFaction Function HasRank
struct Z_Construct_UFunction_UFaction_HasRank_Statics
{
	struct Faction_eventHasRank_Parms
	{
		int32 Level;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Faction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Level;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFaction_HasRank_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Faction_eventHasRank_Parms, Level), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UFaction_HasRank_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Faction_eventHasRank_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFaction_HasRank_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Faction_eventHasRank_Parms), &Z_Construct_UFunction_UFaction_HasRank_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFaction_HasRank_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFaction_HasRank_Statics::NewProp_Level,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFaction_HasRank_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFaction_HasRank_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFaction_HasRank_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFaction, nullptr, "HasRank", nullptr, nullptr, Z_Construct_UFunction_UFaction_HasRank_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFaction_HasRank_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFaction_HasRank_Statics::Faction_eventHasRank_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFaction_HasRank_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFaction_HasRank_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFaction_HasRank_Statics::Faction_eventHasRank_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFaction_HasRank()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFaction_HasRank_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFaction::execHasRank)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Level);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasRank(Z_Param_Level);
	P_NATIVE_END;
}
// End Class UFaction Function HasRank

// Begin Class UFaction Function HasTag
struct Z_Construct_UFunction_UFaction_HasTag_Statics
{
	struct Faction_eventHasTag_Parms
	{
		FString Tag;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Faction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Tag;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFaction_HasTag_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Faction_eventHasTag_Parms, Tag), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UFaction_HasTag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Faction_eventHasTag_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFaction_HasTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Faction_eventHasTag_Parms), &Z_Construct_UFunction_UFaction_HasTag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFaction_HasTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFaction_HasTag_Statics::NewProp_Tag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFaction_HasTag_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFaction_HasTag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFaction_HasTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFaction, nullptr, "HasTag", nullptr, nullptr, Z_Construct_UFunction_UFaction_HasTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFaction_HasTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFaction_HasTag_Statics::Faction_eventHasTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFaction_HasTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFaction_HasTag_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFaction_HasTag_Statics::Faction_eventHasTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFaction_HasTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFaction_HasTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFaction::execHasTag)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Tag);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasTag(Z_Param_Tag);
	P_NATIVE_END;
}
// End Class UFaction Function HasTag

// Begin Class UFaction Function IsID
struct Z_Construct_UFunction_UFaction_IsID_Statics
{
	struct Faction_eventIsID_Parms
	{
		FString Check;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Faction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Check;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFaction_IsID_Statics::NewProp_Check = { "Check", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Faction_eventIsID_Parms, Check), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UFaction_IsID_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Faction_eventIsID_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFaction_IsID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Faction_eventIsID_Parms), &Z_Construct_UFunction_UFaction_IsID_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFaction_IsID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFaction_IsID_Statics::NewProp_Check,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFaction_IsID_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFaction_IsID_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFaction_IsID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFaction, nullptr, "IsID", nullptr, nullptr, Z_Construct_UFunction_UFaction_IsID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFaction_IsID_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFaction_IsID_Statics::Faction_eventIsID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFaction_IsID_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFaction_IsID_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFaction_IsID_Statics::Faction_eventIsID_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFaction_IsID()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFaction_IsID_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFaction::execIsID)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Check);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsID(Z_Param_Check);
	P_NATIVE_END;
}
// End Class UFaction Function IsID

// Begin Class UFaction
void UFaction::StaticRegisterNativesUFaction()
{
	UClass* Class = UFaction::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetDisplayName", &UFaction::execGetDisplayName },
		{ "GetIcon", &UFaction::execGetIcon },
		{ "GetID", &UFaction::execGetID },
		{ "GetRank", &UFaction::execGetRank },
		{ "GetTags", &UFaction::execGetTags },
		{ "HasRank", &UFaction::execHasRank },
		{ "HasTag", &UFaction::execHasTag },
		{ "IsID", &UFaction::execIsID },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFaction);
UClass* Z_Construct_UClass_UFaction_NoRegister()
{
	return UFaction::StaticClass();
}
struct Z_Construct_UClass_UFaction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Faction.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Faction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Icon_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Icon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Icon to be used to represent the faction (at least most often) */" },
#endif
		{ "ModuleRelativePath", "Public/Faction.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Icon to be used to represent the faction (at least most often)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Names" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Name used to represent the faction to the player (via UI) */" },
#endif
		{ "ModuleRelativePath", "Public/Faction.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Name used to represent the faction to the player (via UI)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Names" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** ID used by the system/code to perform operations such as check for matches */" },
#endif
		{ "ModuleRelativePath", "Public/Faction.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ID used by the system/code to perform operations such as check for matches" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tags_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Names" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Tags used by the system to check for categories/types the faction might fall under */" },
#endif
		{ "ModuleRelativePath", "Public/Faction.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Tags used by the system to check for categories/types the faction might fall under" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RankLevels_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Ranks" },
		{ "ModuleRelativePath", "Public/Faction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Icon;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DisplayName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Tags_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Tags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RankLevels_ValueProp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RankLevels_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_RankLevels;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UFaction_GetDisplayName, "GetDisplayName" }, // 136885632
		{ &Z_Construct_UFunction_UFaction_GetIcon, "GetIcon" }, // 2250909551
		{ &Z_Construct_UFunction_UFaction_GetID, "GetID" }, // 2405239218
		{ &Z_Construct_UFunction_UFaction_GetRank, "GetRank" }, // 3471179438
		{ &Z_Construct_UFunction_UFaction_GetTags, "GetTags" }, // 2358390317
		{ &Z_Construct_UFunction_UFaction_HasRank, "HasRank" }, // 152681062
		{ &Z_Construct_UFunction_UFaction_HasTag, "HasTag" }, // 2680931948
		{ &Z_Construct_UFunction_UFaction_IsID, "IsID" }, // 2087835289
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFaction>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFaction_Statics::NewProp_Icon = { "Icon", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFaction, Icon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Icon_MetaData), NewProp_Icon_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UFaction_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFaction, DisplayName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplayName_MetaData), NewProp_DisplayName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UFaction_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFaction, ID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ID_MetaData), NewProp_ID_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UFaction_Statics::NewProp_Tags_Inner = { "Tags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFaction_Statics::NewProp_Tags = { "Tags", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFaction, Tags), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tags_MetaData), NewProp_Tags_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFaction_Statics::NewProp_RankLevels_ValueProp = { "RankLevels", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FFactionRank, METADATA_PARAMS(0, nullptr) }; // 2884047688
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFaction_Statics::NewProp_RankLevels_Key_KeyProp = { "RankLevels_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UFaction_Statics::NewProp_RankLevels = { "RankLevels", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFaction, RankLevels), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RankLevels_MetaData), NewProp_RankLevels_MetaData) }; // 2884047688
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFaction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFaction_Statics::NewProp_Icon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFaction_Statics::NewProp_DisplayName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFaction_Statics::NewProp_ID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFaction_Statics::NewProp_Tags_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFaction_Statics::NewProp_Tags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFaction_Statics::NewProp_RankLevels_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFaction_Statics::NewProp_RankLevels_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFaction_Statics::NewProp_RankLevels,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFaction_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UFaction_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectEclipse,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFaction_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFaction_Statics::ClassParams = {
	&UFaction::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UFaction_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UFaction_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFaction_Statics::Class_MetaDataParams), Z_Construct_UClass_UFaction_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFaction()
{
	if (!Z_Registration_Info_UClass_UFaction.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFaction.OuterSingleton, Z_Construct_UClass_UFaction_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFaction.OuterSingleton;
}
template<> PROJECTECLIPSE_API UClass* StaticClass<UFaction>()
{
	return UFaction::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFaction);
UFaction::~UFaction() {}
// End Class UFaction

// Begin Registration
struct Z_CompiledInDeferFile_FID_Github_ProjectEclipse_ProjectEclipse_Source_ProjectEclipse_Public_Faction_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FFactionRank::StaticStruct, Z_Construct_UScriptStruct_FFactionRank_Statics::NewStructOps, TEXT("FactionRank"), &Z_Registration_Info_UScriptStruct_FactionRank, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFactionRank), 2884047688U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFaction, UFaction::StaticClass, TEXT("UFaction"), &Z_Registration_Info_UClass_UFaction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFaction), 883222182U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_ProjectEclipse_ProjectEclipse_Source_ProjectEclipse_Public_Faction_h_2871697883(TEXT("/Script/ProjectEclipse"),
	Z_CompiledInDeferFile_FID_Github_ProjectEclipse_ProjectEclipse_Source_ProjectEclipse_Public_Faction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_ProjectEclipse_ProjectEclipse_Source_ProjectEclipse_Public_Faction_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Github_ProjectEclipse_ProjectEclipse_Source_ProjectEclipse_Public_Faction_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_ProjectEclipse_ProjectEclipse_Source_ProjectEclipse_Public_Faction_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
