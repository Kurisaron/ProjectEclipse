// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectEclipse/Public/EntityAttribute.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEntityAttribute() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
PROJECTECLIPSE_API UClass* Z_Construct_UClass_UEntityAttribute();
PROJECTECLIPSE_API UClass* Z_Construct_UClass_UEntityAttribute_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectEclipse();
// End Cross Module References

// Begin Class UEntityAttribute Function GetDefault
struct Z_Construct_UFunction_UEntityAttribute_GetDefault_Statics
{
	struct EntityAttribute_eventGetDefault_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EntityAttribute.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEntityAttribute_GetDefault_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EntityAttribute_eventGetDefault_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEntityAttribute_GetDefault_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEntityAttribute_GetDefault_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEntityAttribute_GetDefault_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEntityAttribute_GetDefault_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEntityAttribute, nullptr, "GetDefault", nullptr, nullptr, Z_Construct_UFunction_UEntityAttribute_GetDefault_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEntityAttribute_GetDefault_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEntityAttribute_GetDefault_Statics::EntityAttribute_eventGetDefault_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEntityAttribute_GetDefault_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEntityAttribute_GetDefault_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEntityAttribute_GetDefault_Statics::EntityAttribute_eventGetDefault_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEntityAttribute_GetDefault()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEntityAttribute_GetDefault_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEntityAttribute::execGetDefault)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetDefault();
	P_NATIVE_END;
}
// End Class UEntityAttribute Function GetDefault

// Begin Class UEntityAttribute Function GetDisplayName
struct Z_Construct_UFunction_UEntityAttribute_GetDisplayName_Statics
{
	struct EntityAttribute_eventGetDisplayName_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EntityAttribute.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEntityAttribute_GetDisplayName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EntityAttribute_eventGetDisplayName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEntityAttribute_GetDisplayName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEntityAttribute_GetDisplayName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEntityAttribute_GetDisplayName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEntityAttribute_GetDisplayName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEntityAttribute, nullptr, "GetDisplayName", nullptr, nullptr, Z_Construct_UFunction_UEntityAttribute_GetDisplayName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEntityAttribute_GetDisplayName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEntityAttribute_GetDisplayName_Statics::EntityAttribute_eventGetDisplayName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEntityAttribute_GetDisplayName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEntityAttribute_GetDisplayName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEntityAttribute_GetDisplayName_Statics::EntityAttribute_eventGetDisplayName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEntityAttribute_GetDisplayName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEntityAttribute_GetDisplayName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEntityAttribute::execGetDisplayName)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetDisplayName();
	P_NATIVE_END;
}
// End Class UEntityAttribute Function GetDisplayName

// Begin Class UEntityAttribute Function GetKeyName
struct Z_Construct_UFunction_UEntityAttribute_GetKeyName_Statics
{
	struct EntityAttribute_eventGetKeyName_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EntityAttribute.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEntityAttribute_GetKeyName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EntityAttribute_eventGetKeyName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEntityAttribute_GetKeyName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEntityAttribute_GetKeyName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEntityAttribute_GetKeyName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEntityAttribute_GetKeyName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEntityAttribute, nullptr, "GetKeyName", nullptr, nullptr, Z_Construct_UFunction_UEntityAttribute_GetKeyName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEntityAttribute_GetKeyName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEntityAttribute_GetKeyName_Statics::EntityAttribute_eventGetKeyName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEntityAttribute_GetKeyName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEntityAttribute_GetKeyName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEntityAttribute_GetKeyName_Statics::EntityAttribute_eventGetKeyName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEntityAttribute_GetKeyName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEntityAttribute_GetKeyName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEntityAttribute::execGetKeyName)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetKeyName();
	P_NATIVE_END;
}
// End Class UEntityAttribute Function GetKeyName

// Begin Class UEntityAttribute Function GetMaximum
struct Z_Construct_UFunction_UEntityAttribute_GetMaximum_Statics
{
	struct EntityAttribute_eventGetMaximum_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EntityAttribute.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEntityAttribute_GetMaximum_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EntityAttribute_eventGetMaximum_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEntityAttribute_GetMaximum_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEntityAttribute_GetMaximum_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEntityAttribute_GetMaximum_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEntityAttribute_GetMaximum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEntityAttribute, nullptr, "GetMaximum", nullptr, nullptr, Z_Construct_UFunction_UEntityAttribute_GetMaximum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEntityAttribute_GetMaximum_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEntityAttribute_GetMaximum_Statics::EntityAttribute_eventGetMaximum_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEntityAttribute_GetMaximum_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEntityAttribute_GetMaximum_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEntityAttribute_GetMaximum_Statics::EntityAttribute_eventGetMaximum_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEntityAttribute_GetMaximum()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEntityAttribute_GetMaximum_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEntityAttribute::execGetMaximum)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetMaximum();
	P_NATIVE_END;
}
// End Class UEntityAttribute Function GetMaximum

// Begin Class UEntityAttribute Function GetMinimum
struct Z_Construct_UFunction_UEntityAttribute_GetMinimum_Statics
{
	struct EntityAttribute_eventGetMinimum_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EntityAttribute.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEntityAttribute_GetMinimum_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EntityAttribute_eventGetMinimum_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEntityAttribute_GetMinimum_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEntityAttribute_GetMinimum_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEntityAttribute_GetMinimum_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEntityAttribute_GetMinimum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEntityAttribute, nullptr, "GetMinimum", nullptr, nullptr, Z_Construct_UFunction_UEntityAttribute_GetMinimum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEntityAttribute_GetMinimum_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEntityAttribute_GetMinimum_Statics::EntityAttribute_eventGetMinimum_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEntityAttribute_GetMinimum_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEntityAttribute_GetMinimum_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEntityAttribute_GetMinimum_Statics::EntityAttribute_eventGetMinimum_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEntityAttribute_GetMinimum()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEntityAttribute_GetMinimum_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEntityAttribute::execGetMinimum)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetMinimum();
	P_NATIVE_END;
}
// End Class UEntityAttribute Function GetMinimum

// Begin Class UEntityAttribute Function IsKeyName
struct Z_Construct_UFunction_UEntityAttribute_IsKeyName_Statics
{
	struct EntityAttribute_eventIsKeyName_Parms
	{
		FString Value;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EntityAttribute.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEntityAttribute_IsKeyName_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EntityAttribute_eventIsKeyName_Parms, Value), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UEntityAttribute_IsKeyName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((EntityAttribute_eventIsKeyName_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEntityAttribute_IsKeyName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EntityAttribute_eventIsKeyName_Parms), &Z_Construct_UFunction_UEntityAttribute_IsKeyName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEntityAttribute_IsKeyName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEntityAttribute_IsKeyName_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEntityAttribute_IsKeyName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEntityAttribute_IsKeyName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEntityAttribute_IsKeyName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEntityAttribute, nullptr, "IsKeyName", nullptr, nullptr, Z_Construct_UFunction_UEntityAttribute_IsKeyName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEntityAttribute_IsKeyName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEntityAttribute_IsKeyName_Statics::EntityAttribute_eventIsKeyName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEntityAttribute_IsKeyName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEntityAttribute_IsKeyName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEntityAttribute_IsKeyName_Statics::EntityAttribute_eventIsKeyName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEntityAttribute_IsKeyName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEntityAttribute_IsKeyName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEntityAttribute::execIsKeyName)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsKeyName(Z_Param_Value);
	P_NATIVE_END;
}
// End Class UEntityAttribute Function IsKeyName

// Begin Class UEntityAttribute
void UEntityAttribute::StaticRegisterNativesUEntityAttribute()
{
	UClass* Class = UEntityAttribute::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetDefault", &UEntityAttribute::execGetDefault },
		{ "GetDisplayName", &UEntityAttribute::execGetDisplayName },
		{ "GetKeyName", &UEntityAttribute::execGetKeyName },
		{ "GetMaximum", &UEntityAttribute::execGetMaximum },
		{ "GetMinimum", &UEntityAttribute::execGetMinimum },
		{ "IsKeyName", &UEntityAttribute::execIsKeyName },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEntityAttribute);
UClass* Z_Construct_UClass_UEntityAttribute_NoRegister()
{
	return UEntityAttribute::StaticClass();
}
struct Z_Construct_UClass_UEntityAttribute_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Entity Attributes are core stats that influence an entity's proficiency at performing at task\n */" },
#endif
		{ "IncludePath", "EntityAttribute.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/EntityAttribute.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Entity Attributes are core stats that influence an entity's proficiency at performing at task" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Names" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Name that will be used for game UI */" },
#endif
		{ "ModuleRelativePath", "Public/EntityAttribute.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Name that will be used for game UI" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KeyName_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Names" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Name used to help check for matches */" },
#endif
		{ "ModuleRelativePath", "Public/EntityAttribute.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Name used to help check for matches" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinimumValue_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Values" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Minimum value that the attribute can be */" },
#endif
		{ "ModuleRelativePath", "Public/EntityAttribute.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Minimum value that the attribute can be" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaximumValue_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Values" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Maximum value that the attribute can be */" },
#endif
		{ "ModuleRelativePath", "Public/EntityAttribute.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maximum value that the attribute can be" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Values" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Default value that the attribute is */" },
#endif
		{ "ModuleRelativePath", "Public/EntityAttribute.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Default value that the attribute is" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_DisplayName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_KeyName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MinimumValue;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaximumValue;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DefaultValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UEntityAttribute_GetDefault, "GetDefault" }, // 4233672842
		{ &Z_Construct_UFunction_UEntityAttribute_GetDisplayName, "GetDisplayName" }, // 4071095664
		{ &Z_Construct_UFunction_UEntityAttribute_GetKeyName, "GetKeyName" }, // 1538470369
		{ &Z_Construct_UFunction_UEntityAttribute_GetMaximum, "GetMaximum" }, // 2105019764
		{ &Z_Construct_UFunction_UEntityAttribute_GetMinimum, "GetMinimum" }, // 1014148492
		{ &Z_Construct_UFunction_UEntityAttribute_IsKeyName, "IsKeyName" }, // 4171405198
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEntityAttribute>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEntityAttribute_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEntityAttribute, DisplayName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplayName_MetaData), NewProp_DisplayName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEntityAttribute_Statics::NewProp_KeyName = { "KeyName", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEntityAttribute, KeyName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KeyName_MetaData), NewProp_KeyName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UEntityAttribute_Statics::NewProp_MinimumValue = { "MinimumValue", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEntityAttribute, MinimumValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinimumValue_MetaData), NewProp_MinimumValue_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UEntityAttribute_Statics::NewProp_MaximumValue = { "MaximumValue", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEntityAttribute, MaximumValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaximumValue_MetaData), NewProp_MaximumValue_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UEntityAttribute_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEntityAttribute, DefaultValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultValue_MetaData), NewProp_DefaultValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEntityAttribute_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEntityAttribute_Statics::NewProp_DisplayName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEntityAttribute_Statics::NewProp_KeyName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEntityAttribute_Statics::NewProp_MinimumValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEntityAttribute_Statics::NewProp_MaximumValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEntityAttribute_Statics::NewProp_DefaultValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEntityAttribute_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEntityAttribute_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectEclipse,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEntityAttribute_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEntityAttribute_Statics::ClassParams = {
	&UEntityAttribute::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UEntityAttribute_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UEntityAttribute_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEntityAttribute_Statics::Class_MetaDataParams), Z_Construct_UClass_UEntityAttribute_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEntityAttribute()
{
	if (!Z_Registration_Info_UClass_UEntityAttribute.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEntityAttribute.OuterSingleton, Z_Construct_UClass_UEntityAttribute_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEntityAttribute.OuterSingleton;
}
template<> PROJECTECLIPSE_API UClass* StaticClass<UEntityAttribute>()
{
	return UEntityAttribute::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEntityAttribute);
UEntityAttribute::~UEntityAttribute() {}
// End Class UEntityAttribute

// Begin Registration
struct Z_CompiledInDeferFile_FID_Github_ProjectEclipse_ProjectEclipse_Source_ProjectEclipse_Public_EntityAttribute_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEntityAttribute, UEntityAttribute::StaticClass, TEXT("UEntityAttribute"), &Z_Registration_Info_UClass_UEntityAttribute, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEntityAttribute), 657158770U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_ProjectEclipse_ProjectEclipse_Source_ProjectEclipse_Public_EntityAttribute_h_2175641248(TEXT("/Script/ProjectEclipse"),
	Z_CompiledInDeferFile_FID_Github_ProjectEclipse_ProjectEclipse_Source_ProjectEclipse_Public_EntityAttribute_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_ProjectEclipse_ProjectEclipse_Source_ProjectEclipse_Public_EntityAttribute_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
