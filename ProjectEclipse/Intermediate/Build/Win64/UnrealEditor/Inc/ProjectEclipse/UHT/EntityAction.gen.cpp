// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectEclipse/Public/EntityAction.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEntityAction() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
PROJECTECLIPSE_API UClass* Z_Construct_UClass_UEntityAction();
PROJECTECLIPSE_API UClass* Z_Construct_UClass_UEntityAction_NoRegister();
PROJECTECLIPSE_API UClass* Z_Construct_UClass_UEntityComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectEclipse();
// End Cross Module References

// Begin Class UEntityAction Function Execute
struct EntityAction_eventExecute_Parms
{
	UEntityComponent* Entity;
	UInputAction* Input;
	bool Pressed;
	float PressedTime;
};
static FName NAME_UEntityAction_Execute = FName(TEXT("Execute"));
void UEntityAction::Execute(UEntityComponent* Entity, UInputAction* Input, bool Pressed, const float PressedTime)
{
	EntityAction_eventExecute_Parms Parms;
	Parms.Entity=Entity;
	Parms.Input=Input;
	Parms.Pressed=Pressed ? true : false;
	Parms.PressedTime=PressedTime;
	ProcessEvent(FindFunctionChecked(NAME_UEntityAction_Execute),&Parms);
}
struct Z_Construct_UFunction_UEntityAction_Execute_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Entity Action" },
		{ "ModuleRelativePath", "Public/EntityAction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Entity_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Pressed_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PressedTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Entity;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Input;
	static void NewProp_Pressed_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Pressed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PressedTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEntityAction_Execute_Statics::NewProp_Entity = { "Entity", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EntityAction_eventExecute_Parms, Entity), Z_Construct_UClass_UEntityComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Entity_MetaData), NewProp_Entity_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEntityAction_Execute_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EntityAction_eventExecute_Parms, Input), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UEntityAction_Execute_Statics::NewProp_Pressed_SetBit(void* Obj)
{
	((EntityAction_eventExecute_Parms*)Obj)->Pressed = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEntityAction_Execute_Statics::NewProp_Pressed = { "Pressed", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EntityAction_eventExecute_Parms), &Z_Construct_UFunction_UEntityAction_Execute_Statics::NewProp_Pressed_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Pressed_MetaData), NewProp_Pressed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UEntityAction_Execute_Statics::NewProp_PressedTime = { "PressedTime", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EntityAction_eventExecute_Parms, PressedTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PressedTime_MetaData), NewProp_PressedTime_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEntityAction_Execute_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEntityAction_Execute_Statics::NewProp_Entity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEntityAction_Execute_Statics::NewProp_Input,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEntityAction_Execute_Statics::NewProp_Pressed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEntityAction_Execute_Statics::NewProp_PressedTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEntityAction_Execute_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEntityAction_Execute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEntityAction, nullptr, "Execute", nullptr, nullptr, Z_Construct_UFunction_UEntityAction_Execute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEntityAction_Execute_Statics::PropPointers), sizeof(EntityAction_eventExecute_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEntityAction_Execute_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEntityAction_Execute_Statics::Function_MetaDataParams) };
static_assert(sizeof(EntityAction_eventExecute_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEntityAction_Execute()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEntityAction_Execute_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEntityAction::execExecute)
{
	P_GET_OBJECT(UEntityComponent,Z_Param_Entity);
	P_GET_OBJECT(UInputAction,Z_Param_Input);
	P_GET_UBOOL(Z_Param_Pressed);
	P_GET_PROPERTY(FFloatProperty,Z_Param_PressedTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Execute_Implementation(Z_Param_Entity,Z_Param_Input,Z_Param_Pressed,Z_Param_PressedTime);
	P_NATIVE_END;
}
// End Class UEntityAction Function Execute

// Begin Class UEntityAction Function GetDisplayName
struct Z_Construct_UFunction_UEntityAction_GetDisplayName_Statics
{
	struct EntityAction_eventGetDisplayName_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EntityAction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEntityAction_GetDisplayName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EntityAction_eventGetDisplayName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEntityAction_GetDisplayName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEntityAction_GetDisplayName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEntityAction_GetDisplayName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEntityAction_GetDisplayName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEntityAction, nullptr, "GetDisplayName", nullptr, nullptr, Z_Construct_UFunction_UEntityAction_GetDisplayName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEntityAction_GetDisplayName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEntityAction_GetDisplayName_Statics::EntityAction_eventGetDisplayName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEntityAction_GetDisplayName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEntityAction_GetDisplayName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEntityAction_GetDisplayName_Statics::EntityAction_eventGetDisplayName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEntityAction_GetDisplayName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEntityAction_GetDisplayName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEntityAction::execGetDisplayName)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetDisplayName();
	P_NATIVE_END;
}
// End Class UEntityAction Function GetDisplayName

// Begin Class UEntityAction Function GetID
struct Z_Construct_UFunction_UEntityAction_GetID_Statics
{
	struct EntityAction_eventGetID_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EntityAction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEntityAction_GetID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EntityAction_eventGetID_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEntityAction_GetID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEntityAction_GetID_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEntityAction_GetID_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEntityAction_GetID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEntityAction, nullptr, "GetID", nullptr, nullptr, Z_Construct_UFunction_UEntityAction_GetID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEntityAction_GetID_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEntityAction_GetID_Statics::EntityAction_eventGetID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEntityAction_GetID_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEntityAction_GetID_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEntityAction_GetID_Statics::EntityAction_eventGetID_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEntityAction_GetID()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEntityAction_GetID_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEntityAction::execGetID)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetID();
	P_NATIVE_END;
}
// End Class UEntityAction Function GetID

// Begin Class UEntityAction Function GetTags
struct Z_Construct_UFunction_UEntityAction_GetTags_Statics
{
	struct EntityAction_eventGetTags_Parms
	{
		TArray<FString> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EntityAction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEntityAction_GetTags_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEntityAction_GetTags_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EntityAction_eventGetTags_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEntityAction_GetTags_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEntityAction_GetTags_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEntityAction_GetTags_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEntityAction_GetTags_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEntityAction_GetTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEntityAction, nullptr, "GetTags", nullptr, nullptr, Z_Construct_UFunction_UEntityAction_GetTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEntityAction_GetTags_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEntityAction_GetTags_Statics::EntityAction_eventGetTags_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEntityAction_GetTags_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEntityAction_GetTags_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEntityAction_GetTags_Statics::EntityAction_eventGetTags_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEntityAction_GetTags()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEntityAction_GetTags_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEntityAction::execGetTags)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FString>*)Z_Param__Result=P_THIS->GetTags();
	P_NATIVE_END;
}
// End Class UEntityAction Function GetTags

// Begin Class UEntityAction Function HasTag
struct Z_Construct_UFunction_UEntityAction_HasTag_Statics
{
	struct EntityAction_eventHasTag_Parms
	{
		FString Tag;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EntityAction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Tag;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEntityAction_HasTag_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EntityAction_eventHasTag_Parms, Tag), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UEntityAction_HasTag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((EntityAction_eventHasTag_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEntityAction_HasTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EntityAction_eventHasTag_Parms), &Z_Construct_UFunction_UEntityAction_HasTag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEntityAction_HasTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEntityAction_HasTag_Statics::NewProp_Tag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEntityAction_HasTag_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEntityAction_HasTag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEntityAction_HasTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEntityAction, nullptr, "HasTag", nullptr, nullptr, Z_Construct_UFunction_UEntityAction_HasTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEntityAction_HasTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEntityAction_HasTag_Statics::EntityAction_eventHasTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEntityAction_HasTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEntityAction_HasTag_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEntityAction_HasTag_Statics::EntityAction_eventHasTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEntityAction_HasTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEntityAction_HasTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEntityAction::execHasTag)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Tag);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasTag(Z_Param_Tag);
	P_NATIVE_END;
}
// End Class UEntityAction Function HasTag

// Begin Class UEntityAction Function IsID
struct Z_Construct_UFunction_UEntityAction_IsID_Statics
{
	struct EntityAction_eventIsID_Parms
	{
		FString Key;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EntityAction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEntityAction_IsID_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EntityAction_eventIsID_Parms, Key), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UEntityAction_IsID_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((EntityAction_eventIsID_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEntityAction_IsID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EntityAction_eventIsID_Parms), &Z_Construct_UFunction_UEntityAction_IsID_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEntityAction_IsID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEntityAction_IsID_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEntityAction_IsID_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEntityAction_IsID_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEntityAction_IsID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEntityAction, nullptr, "IsID", nullptr, nullptr, Z_Construct_UFunction_UEntityAction_IsID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEntityAction_IsID_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEntityAction_IsID_Statics::EntityAction_eventIsID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEntityAction_IsID_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEntityAction_IsID_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEntityAction_IsID_Statics::EntityAction_eventIsID_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEntityAction_IsID()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEntityAction_IsID_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEntityAction::execIsID)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsID(Z_Param_Key);
	P_NATIVE_END;
}
// End Class UEntityAction Function IsID

// Begin Class UEntityAction
void UEntityAction::StaticRegisterNativesUEntityAction()
{
	UClass* Class = UEntityAction::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Execute", &UEntityAction::execExecute },
		{ "GetDisplayName", &UEntityAction::execGetDisplayName },
		{ "GetID", &UEntityAction::execGetID },
		{ "GetTags", &UEntityAction::execGetTags },
		{ "HasTag", &UEntityAction::execHasTag },
		{ "IsID", &UEntityAction::execIsID },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEntityAction);
UClass* Z_Construct_UClass_UEntityAction_NoRegister()
{
	return UEntityAction::StaticClass();
}
struct Z_Construct_UClass_UEntityAction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "EntityAction.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/EntityAction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ForegroundIcon_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Icon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Main icon used to specify which action in UI */" },
#endif
		{ "ModuleRelativePath", "Public/EntityAction.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Main icon used to specify which action in UI" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackgroundColor_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Icon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Color used for action's icon background */" },
#endif
		{ "ModuleRelativePath", "Public/EntityAction.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Color used for action's icon background" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Names" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Name that will be used for game UI */" },
#endif
		{ "ModuleRelativePath", "Public/EntityAction.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Name that will be used for game UI" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Names" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Name used to help check for matches */" },
#endif
		{ "ModuleRelativePath", "Public/EntityAction.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Name used to help check for matches" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tags_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Names" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Tags used by the system to check for categories/types the trait might fall under */" },
#endif
		{ "ModuleRelativePath", "Public/EntityAction.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Tags used by the system to check for categories/types the trait might fall under" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ForegroundIcon;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BackgroundColor;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DisplayName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Tags_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Tags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UEntityAction_Execute, "Execute" }, // 989173558
		{ &Z_Construct_UFunction_UEntityAction_GetDisplayName, "GetDisplayName" }, // 886782381
		{ &Z_Construct_UFunction_UEntityAction_GetID, "GetID" }, // 1879701662
		{ &Z_Construct_UFunction_UEntityAction_GetTags, "GetTags" }, // 3069318771
		{ &Z_Construct_UFunction_UEntityAction_HasTag, "HasTag" }, // 1273310592
		{ &Z_Construct_UFunction_UEntityAction_IsID, "IsID" }, // 133801257
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEntityAction>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEntityAction_Statics::NewProp_ForegroundIcon = { "ForegroundIcon", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEntityAction, ForegroundIcon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ForegroundIcon_MetaData), NewProp_ForegroundIcon_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEntityAction_Statics::NewProp_BackgroundColor = { "BackgroundColor", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEntityAction, BackgroundColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackgroundColor_MetaData), NewProp_BackgroundColor_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEntityAction_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEntityAction, DisplayName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplayName_MetaData), NewProp_DisplayName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEntityAction_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEntityAction, ID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ID_MetaData), NewProp_ID_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEntityAction_Statics::NewProp_Tags_Inner = { "Tags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEntityAction_Statics::NewProp_Tags = { "Tags", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEntityAction, Tags), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tags_MetaData), NewProp_Tags_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEntityAction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEntityAction_Statics::NewProp_ForegroundIcon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEntityAction_Statics::NewProp_BackgroundColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEntityAction_Statics::NewProp_DisplayName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEntityAction_Statics::NewProp_ID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEntityAction_Statics::NewProp_Tags_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEntityAction_Statics::NewProp_Tags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEntityAction_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEntityAction_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectEclipse,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEntityAction_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEntityAction_Statics::ClassParams = {
	&UEntityAction::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UEntityAction_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UEntityAction_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEntityAction_Statics::Class_MetaDataParams), Z_Construct_UClass_UEntityAction_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEntityAction()
{
	if (!Z_Registration_Info_UClass_UEntityAction.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEntityAction.OuterSingleton, Z_Construct_UClass_UEntityAction_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEntityAction.OuterSingleton;
}
template<> PROJECTECLIPSE_API UClass* StaticClass<UEntityAction>()
{
	return UEntityAction::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEntityAction);
UEntityAction::~UEntityAction() {}
// End Class UEntityAction

// Begin Registration
struct Z_CompiledInDeferFile_FID_Github_ProjectEclipse_ProjectEclipse_Source_ProjectEclipse_Public_EntityAction_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEntityAction, UEntityAction::StaticClass, TEXT("UEntityAction"), &Z_Registration_Info_UClass_UEntityAction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEntityAction), 1523208696U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_ProjectEclipse_ProjectEclipse_Source_ProjectEclipse_Public_EntityAction_h_3088865776(TEXT("/Script/ProjectEclipse"),
	Z_CompiledInDeferFile_FID_Github_ProjectEclipse_ProjectEclipse_Source_ProjectEclipse_Public_EntityAction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_ProjectEclipse_ProjectEclipse_Source_ProjectEclipse_Public_EntityAction_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
