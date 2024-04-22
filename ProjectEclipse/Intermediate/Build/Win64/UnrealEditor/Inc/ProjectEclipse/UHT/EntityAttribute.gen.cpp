// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectEclipse/Public/EntityAttribute.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEntityAttribute() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	PROJECTECLIPSE_API UClass* Z_Construct_UClass_UEntityAttribute();
	PROJECTECLIPSE_API UClass* Z_Construct_UClass_UEntityAttribute_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ProjectEclipse();
// End Cross Module References
	DEFINE_FUNCTION(UEntityAttribute::execGetMaximum)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetMaximum();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEntityAttribute::execGetMinimum)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetMinimum();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEntityAttribute::execIsKeyName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsKeyName(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEntityAttribute::execGetKeyName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetKeyName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEntityAttribute::execGetDisplayName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetDisplayName();
		P_NATIVE_END;
	}
	void UEntityAttribute::StaticRegisterNativesUEntityAttribute()
	{
		UClass* Class = UEntityAttribute::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDisplayName", &UEntityAttribute::execGetDisplayName },
			{ "GetKeyName", &UEntityAttribute::execGetKeyName },
			{ "GetMaximum", &UEntityAttribute::execGetMaximum },
			{ "GetMinimum", &UEntityAttribute::execGetMinimum },
			{ "IsKeyName", &UEntityAttribute::execIsKeyName },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEntityAttribute_GetDisplayName_Statics
	{
		struct EntityAttribute_eventGetDisplayName_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEntityAttribute_GetDisplayName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EntityAttribute_eventGetDisplayName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEntityAttribute_GetDisplayName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEntityAttribute_GetDisplayName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEntityAttribute_GetDisplayName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EntityAttribute.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEntityAttribute_GetDisplayName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEntityAttribute, nullptr, "GetDisplayName", nullptr, nullptr, Z_Construct_UFunction_UEntityAttribute_GetDisplayName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEntityAttribute_GetDisplayName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEntityAttribute_GetDisplayName_Statics::EntityAttribute_eventGetDisplayName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEntityAttribute_GetDisplayName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEntityAttribute_GetDisplayName_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEntityAttribute_GetDisplayName_Statics::PropPointers) < 2048);
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
	struct Z_Construct_UFunction_UEntityAttribute_GetKeyName_Statics
	{
		struct EntityAttribute_eventGetKeyName_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEntityAttribute_GetKeyName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EntityAttribute_eventGetKeyName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEntityAttribute_GetKeyName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEntityAttribute_GetKeyName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEntityAttribute_GetKeyName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EntityAttribute.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEntityAttribute_GetKeyName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEntityAttribute, nullptr, "GetKeyName", nullptr, nullptr, Z_Construct_UFunction_UEntityAttribute_GetKeyName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEntityAttribute_GetKeyName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEntityAttribute_GetKeyName_Statics::EntityAttribute_eventGetKeyName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEntityAttribute_GetKeyName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEntityAttribute_GetKeyName_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEntityAttribute_GetKeyName_Statics::PropPointers) < 2048);
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
	struct Z_Construct_UFunction_UEntityAttribute_GetMaximum_Statics
	{
		struct EntityAttribute_eventGetMaximum_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEntityAttribute_GetMaximum_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EntityAttribute_eventGetMaximum_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEntityAttribute_GetMaximum_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEntityAttribute_GetMaximum_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEntityAttribute_GetMaximum_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EntityAttribute.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEntityAttribute_GetMaximum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEntityAttribute, nullptr, "GetMaximum", nullptr, nullptr, Z_Construct_UFunction_UEntityAttribute_GetMaximum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEntityAttribute_GetMaximum_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEntityAttribute_GetMaximum_Statics::EntityAttribute_eventGetMaximum_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEntityAttribute_GetMaximum_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEntityAttribute_GetMaximum_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEntityAttribute_GetMaximum_Statics::PropPointers) < 2048);
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
	struct Z_Construct_UFunction_UEntityAttribute_GetMinimum_Statics
	{
		struct EntityAttribute_eventGetMinimum_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEntityAttribute_GetMinimum_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EntityAttribute_eventGetMinimum_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEntityAttribute_GetMinimum_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEntityAttribute_GetMinimum_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEntityAttribute_GetMinimum_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EntityAttribute.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEntityAttribute_GetMinimum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEntityAttribute, nullptr, "GetMinimum", nullptr, nullptr, Z_Construct_UFunction_UEntityAttribute_GetMinimum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEntityAttribute_GetMinimum_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEntityAttribute_GetMinimum_Statics::EntityAttribute_eventGetMinimum_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEntityAttribute_GetMinimum_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEntityAttribute_GetMinimum_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEntityAttribute_GetMinimum_Statics::PropPointers) < 2048);
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
	struct Z_Construct_UFunction_UEntityAttribute_IsKeyName_Statics
	{
		struct EntityAttribute_eventIsKeyName_Parms
		{
			FString Value;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
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
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEntityAttribute_IsKeyName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EntityAttribute.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEntityAttribute_IsKeyName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEntityAttribute, nullptr, "IsKeyName", nullptr, nullptr, Z_Construct_UFunction_UEntityAttribute_IsKeyName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEntityAttribute_IsKeyName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEntityAttribute_IsKeyName_Statics::EntityAttribute_eventIsKeyName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEntityAttribute_IsKeyName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEntityAttribute_IsKeyName_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEntityAttribute_IsKeyName_Statics::PropPointers) < 2048);
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
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEntityAttribute);
	UClass* Z_Construct_UClass_UEntityAttribute_NoRegister()
	{
		return UEntityAttribute::StaticClass();
	}
	struct Z_Construct_UClass_UEntityAttribute_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DisplayName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KeyName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_KeyName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinimumValue_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MinimumValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaximumValue_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaximumValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEntityAttribute_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ProjectEclipse,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEntityAttribute_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UEntityAttribute_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEntityAttribute_GetDisplayName, "GetDisplayName" }, // 3917643116
		{ &Z_Construct_UFunction_UEntityAttribute_GetKeyName, "GetKeyName" }, // 4167198127
		{ &Z_Construct_UFunction_UEntityAttribute_GetMaximum, "GetMaximum" }, // 3887691130
		{ &Z_Construct_UFunction_UEntityAttribute_GetMinimum, "GetMinimum" }, // 1616423767
		{ &Z_Construct_UFunction_UEntityAttribute_IsKeyName, "IsKeyName" }, // 3551994841
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEntityAttribute_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEntityAttribute_Statics::Class_MetaDataParams[] = {
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
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEntityAttribute_Statics::NewProp_DisplayName_MetaData[] = {
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
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEntityAttribute_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEntityAttribute, DisplayName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEntityAttribute_Statics::NewProp_DisplayName_MetaData), Z_Construct_UClass_UEntityAttribute_Statics::NewProp_DisplayName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEntityAttribute_Statics::NewProp_KeyName_MetaData[] = {
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
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEntityAttribute_Statics::NewProp_KeyName = { "KeyName", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEntityAttribute, KeyName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEntityAttribute_Statics::NewProp_KeyName_MetaData), Z_Construct_UClass_UEntityAttribute_Statics::NewProp_KeyName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEntityAttribute_Statics::NewProp_MinimumValue_MetaData[] = {
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
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UEntityAttribute_Statics::NewProp_MinimumValue = { "MinimumValue", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEntityAttribute, MinimumValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEntityAttribute_Statics::NewProp_MinimumValue_MetaData), Z_Construct_UClass_UEntityAttribute_Statics::NewProp_MinimumValue_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEntityAttribute_Statics::NewProp_MaximumValue_MetaData[] = {
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
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UEntityAttribute_Statics::NewProp_MaximumValue = { "MaximumValue", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEntityAttribute, MaximumValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEntityAttribute_Statics::NewProp_MaximumValue_MetaData), Z_Construct_UClass_UEntityAttribute_Statics::NewProp_MaximumValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEntityAttribute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEntityAttribute_Statics::NewProp_DisplayName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEntityAttribute_Statics::NewProp_KeyName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEntityAttribute_Statics::NewProp_MinimumValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEntityAttribute_Statics::NewProp_MaximumValue,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEntityAttribute_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEntityAttribute>::IsAbstract,
	};
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
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEntityAttribute_Statics::PropPointers) < 2048);
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
	struct Z_CompiledInDeferFile_FID_ProjectEclipse_Source_ProjectEclipse_Public_EntityAttribute_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEclipse_Source_ProjectEclipse_Public_EntityAttribute_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEntityAttribute, UEntityAttribute::StaticClass, TEXT("UEntityAttribute"), &Z_Registration_Info_UClass_UEntityAttribute, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEntityAttribute), 3545477847U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEclipse_Source_ProjectEclipse_Public_EntityAttribute_h_591472264(TEXT("/Script/ProjectEclipse"),
		Z_CompiledInDeferFile_FID_ProjectEclipse_Source_ProjectEclipse_Public_EntityAttribute_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEclipse_Source_ProjectEclipse_Public_EntityAttribute_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
