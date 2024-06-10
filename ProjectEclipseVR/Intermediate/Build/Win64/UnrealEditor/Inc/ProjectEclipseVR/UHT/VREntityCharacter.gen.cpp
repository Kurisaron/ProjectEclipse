// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectEclipseVR/Public/VREntityCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVREntityCharacter() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
ENGINE_API UClass* Z_Construct_UClass_UPhysicsConstraintComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
HEADMOUNTEDDISPLAY_API UClass* Z_Construct_UClass_UMotionControllerComponent_NoRegister();
PROJECTECLIPSEVR_API UClass* Z_Construct_UClass_AEntityCharacter();
PROJECTECLIPSEVR_API UClass* Z_Construct_UClass_AVREntityCharacter();
PROJECTECLIPSEVR_API UClass* Z_Construct_UClass_AVREntityCharacter_NoRegister();
PROJECTECLIPSEVR_API UClass* Z_Construct_UClass_UGripMotionControllerComponent_NoRegister();
PROJECTECLIPSEVR_API UClass* Z_Construct_UClass_UInputActionPool();
PROJECTECLIPSEVR_API UClass* Z_Construct_UClass_UInputActionPool_NoRegister();
PROJECTECLIPSEVR_API UFunction* Z_Construct_UDelegateFunction_ProjectEclipseVR_PlayerInputEvent__DelegateSignature();
PROJECTECLIPSEVR_API UScriptStruct* Z_Construct_UScriptStruct_FHandPoseData();
PROJECTECLIPSEVR_API UScriptStruct* Z_Construct_UScriptStruct_FInputCounterTracker();
UPackage* Z_Construct_UPackage__Script_ProjectEclipseVR();
// End Cross Module References

// Begin Delegate FPlayerInputEvent
struct Z_Construct_UDelegateFunction_ProjectEclipseVR_PlayerInputEvent__DelegateSignature_Statics
{
	struct _Script_ProjectEclipseVR_eventPlayerInputEvent_Parms
	{
		AVREntityCharacter* PlayerCharacter;
		bool Pressed;
		float PressedTime;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VREntityCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerCharacter;
	static void NewProp_Pressed_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Pressed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PressedTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_ProjectEclipseVR_PlayerInputEvent__DelegateSignature_Statics::NewProp_PlayerCharacter = { "PlayerCharacter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ProjectEclipseVR_eventPlayerInputEvent_Parms, PlayerCharacter), Z_Construct_UClass_AVREntityCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UDelegateFunction_ProjectEclipseVR_PlayerInputEvent__DelegateSignature_Statics::NewProp_Pressed_SetBit(void* Obj)
{
	((_Script_ProjectEclipseVR_eventPlayerInputEvent_Parms*)Obj)->Pressed = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_ProjectEclipseVR_PlayerInputEvent__DelegateSignature_Statics::NewProp_Pressed = { "Pressed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_ProjectEclipseVR_eventPlayerInputEvent_Parms), &Z_Construct_UDelegateFunction_ProjectEclipseVR_PlayerInputEvent__DelegateSignature_Statics::NewProp_Pressed_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_ProjectEclipseVR_PlayerInputEvent__DelegateSignature_Statics::NewProp_PressedTime = { "PressedTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ProjectEclipseVR_eventPlayerInputEvent_Parms, PressedTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ProjectEclipseVR_PlayerInputEvent__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProjectEclipseVR_PlayerInputEvent__DelegateSignature_Statics::NewProp_PlayerCharacter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProjectEclipseVR_PlayerInputEvent__DelegateSignature_Statics::NewProp_Pressed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProjectEclipseVR_PlayerInputEvent__DelegateSignature_Statics::NewProp_PressedTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectEclipseVR_PlayerInputEvent__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ProjectEclipseVR_PlayerInputEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ProjectEclipseVR, nullptr, "PlayerInputEvent__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_ProjectEclipseVR_PlayerInputEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectEclipseVR_PlayerInputEvent__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_ProjectEclipseVR_PlayerInputEvent__DelegateSignature_Statics::_Script_ProjectEclipseVR_eventPlayerInputEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectEclipseVR_PlayerInputEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ProjectEclipseVR_PlayerInputEvent__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_ProjectEclipseVR_PlayerInputEvent__DelegateSignature_Statics::_Script_ProjectEclipseVR_eventPlayerInputEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_ProjectEclipseVR_PlayerInputEvent__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ProjectEclipseVR_PlayerInputEvent__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FPlayerInputEvent_DelegateWrapper(const FMulticastScriptDelegate& PlayerInputEvent, AVREntityCharacter* PlayerCharacter, bool Pressed, float PressedTime)
{
	struct _Script_ProjectEclipseVR_eventPlayerInputEvent_Parms
	{
		AVREntityCharacter* PlayerCharacter;
		bool Pressed;
		float PressedTime;
	};
	_Script_ProjectEclipseVR_eventPlayerInputEvent_Parms Parms;
	Parms.PlayerCharacter=PlayerCharacter;
	Parms.Pressed=Pressed ? true : false;
	Parms.PressedTime=PressedTime;
	PlayerInputEvent.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FPlayerInputEvent

// Begin ScriptStruct FInputCounterTracker
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InputCounterTracker;
class UScriptStruct* FInputCounterTracker::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InputCounterTracker.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InputCounterTracker.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInputCounterTracker, (UObject*)Z_Construct_UPackage__Script_ProjectEclipseVR(), TEXT("InputCounterTracker"));
	}
	return Z_Registration_Info_UScriptStruct_InputCounterTracker.OuterSingleton;
}
template<> PROJECTECLIPSEVR_API UScriptStruct* StaticStruct<FInputCounterTracker>()
{
	return FInputCounterTracker::StaticStruct();
}
struct Z_Construct_UScriptStruct_FInputCounterTracker_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VREntityCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Counters_MetaData[] = {
		{ "Category", "InputCounterTracker" },
		{ "ModuleRelativePath", "Public/VREntityCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Counters_ValueProp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Counters_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Counters;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInputCounterTracker>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInputCounterTracker_Statics::NewProp_Counters_ValueProp = { "Counters", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FInputCounterTracker_Statics::NewProp_Counters_Key_KeyProp = { "Counters_Key", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FInputCounterTracker_Statics::NewProp_Counters = { "Counters", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInputCounterTracker, Counters), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Counters_MetaData), NewProp_Counters_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInputCounterTracker_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputCounterTracker_Statics::NewProp_Counters_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputCounterTracker_Statics::NewProp_Counters_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputCounterTracker_Statics::NewProp_Counters,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputCounterTracker_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInputCounterTracker_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectEclipseVR,
	nullptr,
	&NewStructOps,
	"InputCounterTracker",
	Z_Construct_UScriptStruct_FInputCounterTracker_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputCounterTracker_Statics::PropPointers),
	sizeof(FInputCounterTracker),
	alignof(FInputCounterTracker),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputCounterTracker_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInputCounterTracker_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInputCounterTracker()
{
	if (!Z_Registration_Info_UScriptStruct_InputCounterTracker.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InputCounterTracker.InnerSingleton, Z_Construct_UScriptStruct_FInputCounterTracker_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_InputCounterTracker.InnerSingleton;
}
// End ScriptStruct FInputCounterTracker

// Begin Class UInputActionPool
void UInputActionPool::StaticRegisterNativesUInputActionPool()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInputActionPool);
UClass* Z_Construct_UClass_UInputActionPool_NoRegister()
{
	return UInputActionPool::StaticClass();
}
struct Z_Construct_UClass_UInputActionPool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Input Action Pools are utilized to facilitate modularity for input actions on player-controlled actors\n" },
#endif
		{ "IncludePath", "VREntityCharacter.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/VREntityCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Input Action Pools are utilized to facilitate modularity for input actions on player-controlled actors" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MappingContext_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "InputActionPool" },
		{ "ModuleRelativePath", "Public/VREntityCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputActions_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "InputActionPool" },
		{ "ModuleRelativePath", "Public/VREntityCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MappingContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputActions_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_InputActions_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_InputActions;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInputActionPool>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInputActionPool_Statics::NewProp_MappingContext = { "MappingContext", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputActionPool, MappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MappingContext_MetaData), NewProp_MappingContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInputActionPool_Statics::NewProp_InputActions_ValueProp = { "InputActions", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UInputActionPool_Statics::NewProp_InputActions_Key_KeyProp = { "InputActions_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UInputActionPool_Statics::NewProp_InputActions = { "InputActions", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputActionPool, InputActions), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputActions_MetaData), NewProp_InputActions_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInputActionPool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputActionPool_Statics::NewProp_MappingContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputActionPool_Statics::NewProp_InputActions_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputActionPool_Statics::NewProp_InputActions_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputActionPool_Statics::NewProp_InputActions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInputActionPool_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInputActionPool_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectEclipseVR,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInputActionPool_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInputActionPool_Statics::ClassParams = {
	&UInputActionPool::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UInputActionPool_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UInputActionPool_Statics::PropPointers),
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInputActionPool_Statics::Class_MetaDataParams), Z_Construct_UClass_UInputActionPool_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInputActionPool()
{
	if (!Z_Registration_Info_UClass_UInputActionPool.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInputActionPool.OuterSingleton, Z_Construct_UClass_UInputActionPool_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInputActionPool.OuterSingleton;
}
template<> PROJECTECLIPSEVR_API UClass* StaticClass<UInputActionPool>()
{
	return UInputActionPool::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInputActionPool);
UInputActionPool::~UInputActionPool() {}
// End Class UInputActionPool

// Begin ScriptStruct FHandPoseData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HandPoseData;
class UScriptStruct* FHandPoseData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HandPoseData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HandPoseData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHandPoseData, (UObject*)Z_Construct_UPackage__Script_ProjectEclipseVR(), TEXT("HandPoseData"));
	}
	return Z_Registration_Info_UScriptStruct_HandPoseData.OuterSingleton;
}
template<> PROJECTECLIPSEVR_API UScriptStruct* StaticStruct<FHandPoseData>()
{
	return FHandPoseData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FHandPoseData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VREntityCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Point_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "HandPoseData" },
		{ "ModuleRelativePath", "Public/VREntityCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThumbUp_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "HandPoseData" },
		{ "ModuleRelativePath", "Public/VREntityCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Grasp_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "HandPoseData" },
		{ "ModuleRelativePath", "Public/VREntityCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IndexCurl_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "HandPoseData" },
		{ "ModuleRelativePath", "Public/VREntityCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Point;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ThumbUp;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Grasp;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_IndexCurl;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHandPoseData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHandPoseData_Statics::NewProp_Point = { "Point", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHandPoseData, Point), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Point_MetaData), NewProp_Point_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHandPoseData_Statics::NewProp_ThumbUp = { "ThumbUp", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHandPoseData, ThumbUp), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThumbUp_MetaData), NewProp_ThumbUp_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHandPoseData_Statics::NewProp_Grasp = { "Grasp", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHandPoseData, Grasp), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Grasp_MetaData), NewProp_Grasp_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHandPoseData_Statics::NewProp_IndexCurl = { "IndexCurl", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHandPoseData, IndexCurl), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IndexCurl_MetaData), NewProp_IndexCurl_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHandPoseData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHandPoseData_Statics::NewProp_Point,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHandPoseData_Statics::NewProp_ThumbUp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHandPoseData_Statics::NewProp_Grasp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHandPoseData_Statics::NewProp_IndexCurl,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHandPoseData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHandPoseData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectEclipseVR,
	nullptr,
	&NewStructOps,
	"HandPoseData",
	Z_Construct_UScriptStruct_FHandPoseData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHandPoseData_Statics::PropPointers),
	sizeof(FHandPoseData),
	alignof(FHandPoseData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHandPoseData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FHandPoseData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FHandPoseData()
{
	if (!Z_Registration_Info_UScriptStruct_HandPoseData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HandPoseData.InnerSingleton, Z_Construct_UScriptStruct_FHandPoseData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_HandPoseData.InnerSingleton;
}
// End ScriptStruct FHandPoseData

// Begin Class AVREntityCharacter
void AVREntityCharacter::StaticRegisterNativesAVREntityCharacter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AVREntityCharacter);
UClass* Z_Construct_UClass_AVREntityCharacter_NoRegister()
{
	return AVREntityCharacter::StaticClass();
}
struct Z_Construct_UClass_AVREntityCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Character class that facilitates VR gameplay\n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "VREntityCharacter.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/VREntityCharacter.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Character class that facilitates VR gameplay" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VROrigin_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VR|Origin" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VREntityCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VR|Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VREntityCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MotionController_Head_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VR|Motion Controllers" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "////////////////////////\n// MOTION CONTROLLERS //\n////////////////////////\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VREntityCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "MOTION CONTROLLERS" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MotionController_LeftGrip_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VR|Motion Controllers" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VREntityCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MotionController_RightGrip_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VR|Motion Controllers" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VREntityCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MotionController_LeftAim_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VR|Motion Controllers" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VREntityCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MotionController_RightAim_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VR|Motion Controllers" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VREntityCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDrawMotionControllerDebug_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VR|Motion Controllers" },
		{ "ModuleRelativePath", "Public/VREntityCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StableMeshL_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VR|Motion Controllers" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VREntityCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StableMeshR_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VR|Motion Controllers" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VREntityCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HandConstraintL_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VR|Motion Controllers" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VREntityCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HandConstraintR_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VR|Motion Controllers" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VREntityCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConstrainedMeshL_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VR|Motion Controllers" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VREntityCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConstrainedMeshR_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VR|Motion Controllers" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VREntityCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputPools_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "///////////\n// INPUT //\n///////////\n" },
#endif
		{ "ModuleRelativePath", "Public/VREntityCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "INPUT" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputCounters_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/VREntityCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveInput_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/VREntityCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeftHandPose_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/VREntityCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RightHandPose_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/VREntityCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SprintEvent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VREntityCharacter" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//////////////////////\n// DELEGATES/EVENTS //\n//////////////////////\n" },
#endif
		{ "ModuleRelativePath", "Public/VREntityCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "/\n DELEGATES/EVENTS\n/" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JumpEvent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VREntityCharacter" },
		{ "ModuleRelativePath", "Public/VREntityCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DodgeEvent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VREntityCharacter" },
		{ "ModuleRelativePath", "Public/VREntityCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_VROrigin;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Camera;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MotionController_Head;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MotionController_LeftGrip;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MotionController_RightGrip;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MotionController_LeftAim;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MotionController_RightAim;
	static void NewProp_bDrawMotionControllerDebug_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawMotionControllerDebug;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StableMeshL;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StableMeshR;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HandConstraintL;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HandConstraintR;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ConstrainedMeshL;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ConstrainedMeshR;
	static const UECodeGen_Private::FClassPropertyParams NewProp_InputPools_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_InputPools_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_InputPools;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InputCounters;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MoveInput;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LeftHandPose;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RightHandPose;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_SprintEvent;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_JumpEvent;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_DodgeEvent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVREntityCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVREntityCharacter_Statics::NewProp_VROrigin = { "VROrigin", nullptr, (EPropertyFlags)0x004000000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVREntityCharacter, VROrigin), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VROrigin_MetaData), NewProp_VROrigin_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVREntityCharacter_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x004000000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVREntityCharacter, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Camera_MetaData), NewProp_Camera_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVREntityCharacter_Statics::NewProp_MotionController_Head = { "MotionController_Head", nullptr, (EPropertyFlags)0x004000000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVREntityCharacter, MotionController_Head), Z_Construct_UClass_UMotionControllerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MotionController_Head_MetaData), NewProp_MotionController_Head_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVREntityCharacter_Statics::NewProp_MotionController_LeftGrip = { "MotionController_LeftGrip", nullptr, (EPropertyFlags)0x004000000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVREntityCharacter, MotionController_LeftGrip), Z_Construct_UClass_UGripMotionControllerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MotionController_LeftGrip_MetaData), NewProp_MotionController_LeftGrip_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVREntityCharacter_Statics::NewProp_MotionController_RightGrip = { "MotionController_RightGrip", nullptr, (EPropertyFlags)0x004000000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVREntityCharacter, MotionController_RightGrip), Z_Construct_UClass_UGripMotionControllerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MotionController_RightGrip_MetaData), NewProp_MotionController_RightGrip_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVREntityCharacter_Statics::NewProp_MotionController_LeftAim = { "MotionController_LeftAim", nullptr, (EPropertyFlags)0x004000000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVREntityCharacter, MotionController_LeftAim), Z_Construct_UClass_UMotionControllerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MotionController_LeftAim_MetaData), NewProp_MotionController_LeftAim_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVREntityCharacter_Statics::NewProp_MotionController_RightAim = { "MotionController_RightAim", nullptr, (EPropertyFlags)0x004000000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVREntityCharacter, MotionController_RightAim), Z_Construct_UClass_UMotionControllerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MotionController_RightAim_MetaData), NewProp_MotionController_RightAim_MetaData) };
void Z_Construct_UClass_AVREntityCharacter_Statics::NewProp_bDrawMotionControllerDebug_SetBit(void* Obj)
{
	((AVREntityCharacter*)Obj)->bDrawMotionControllerDebug = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AVREntityCharacter_Statics::NewProp_bDrawMotionControllerDebug = { "bDrawMotionControllerDebug", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AVREntityCharacter), &Z_Construct_UClass_AVREntityCharacter_Statics::NewProp_bDrawMotionControllerDebug_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDrawMotionControllerDebug_MetaData), NewProp_bDrawMotionControllerDebug_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVREntityCharacter_Statics::NewProp_StableMeshL = { "StableMeshL", nullptr, (EPropertyFlags)0x004000000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVREntityCharacter, StableMeshL), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StableMeshL_MetaData), NewProp_StableMeshL_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVREntityCharacter_Statics::NewProp_StableMeshR = { "StableMeshR", nullptr, (EPropertyFlags)0x004000000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVREntityCharacter, StableMeshR), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StableMeshR_MetaData), NewProp_StableMeshR_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVREntityCharacter_Statics::NewProp_HandConstraintL = { "HandConstraintL", nullptr, (EPropertyFlags)0x004000000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVREntityCharacter, HandConstraintL), Z_Construct_UClass_UPhysicsConstraintComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HandConstraintL_MetaData), NewProp_HandConstraintL_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVREntityCharacter_Statics::NewProp_HandConstraintR = { "HandConstraintR", nullptr, (EPropertyFlags)0x004000000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVREntityCharacter, HandConstraintR), Z_Construct_UClass_UPhysicsConstraintComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HandConstraintR_MetaData), NewProp_HandConstraintR_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVREntityCharacter_Statics::NewProp_ConstrainedMeshL = { "ConstrainedMeshL", nullptr, (EPropertyFlags)0x004000000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVREntityCharacter, ConstrainedMeshL), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConstrainedMeshL_MetaData), NewProp_ConstrainedMeshL_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVREntityCharacter_Statics::NewProp_ConstrainedMeshR = { "ConstrainedMeshR", nullptr, (EPropertyFlags)0x004000000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVREntityCharacter, ConstrainedMeshR), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConstrainedMeshR_MetaData), NewProp_ConstrainedMeshR_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AVREntityCharacter_Statics::NewProp_InputPools_ValueProp = { "InputPools", nullptr, (EPropertyFlags)0x0004000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UClass, Z_Construct_UClass_UInputActionPool_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AVREntityCharacter_Statics::NewProp_InputPools_Key_KeyProp = { "InputPools_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AVREntityCharacter_Statics::NewProp_InputPools = { "InputPools", nullptr, (EPropertyFlags)0x0044000000000015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVREntityCharacter, InputPools), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputPools_MetaData), NewProp_InputPools_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AVREntityCharacter_Statics::NewProp_InputCounters = { "InputCounters", nullptr, (EPropertyFlags)0x0040040000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVREntityCharacter, InputCounters), Z_Construct_UScriptStruct_FInputCounterTracker, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputCounters_MetaData), NewProp_InputCounters_MetaData) }; // 3030304300
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AVREntityCharacter_Statics::NewProp_MoveInput = { "MoveInput", nullptr, (EPropertyFlags)0x0040040000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVREntityCharacter, MoveInput), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveInput_MetaData), NewProp_MoveInput_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AVREntityCharacter_Statics::NewProp_LeftHandPose = { "LeftHandPose", nullptr, (EPropertyFlags)0x0040040000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVREntityCharacter, LeftHandPose), Z_Construct_UScriptStruct_FHandPoseData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeftHandPose_MetaData), NewProp_LeftHandPose_MetaData) }; // 1650407348
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AVREntityCharacter_Statics::NewProp_RightHandPose = { "RightHandPose", nullptr, (EPropertyFlags)0x0040040000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVREntityCharacter, RightHandPose), Z_Construct_UScriptStruct_FHandPoseData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RightHandPose_MetaData), NewProp_RightHandPose_MetaData) }; // 1650407348
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AVREntityCharacter_Statics::NewProp_SprintEvent = { "SprintEvent", nullptr, (EPropertyFlags)0x00401000100a0001, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVREntityCharacter, SprintEvent), Z_Construct_UDelegateFunction_ProjectEclipseVR_PlayerInputEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SprintEvent_MetaData), NewProp_SprintEvent_MetaData) }; // 3250303426
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AVREntityCharacter_Statics::NewProp_JumpEvent = { "JumpEvent", nullptr, (EPropertyFlags)0x00401000100a0001, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVREntityCharacter, JumpEvent), Z_Construct_UDelegateFunction_ProjectEclipseVR_PlayerInputEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JumpEvent_MetaData), NewProp_JumpEvent_MetaData) }; // 3250303426
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AVREntityCharacter_Statics::NewProp_DodgeEvent = { "DodgeEvent", nullptr, (EPropertyFlags)0x00401000100a0001, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVREntityCharacter, DodgeEvent), Z_Construct_UDelegateFunction_ProjectEclipseVR_PlayerInputEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DodgeEvent_MetaData), NewProp_DodgeEvent_MetaData) }; // 3250303426
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AVREntityCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVREntityCharacter_Statics::NewProp_VROrigin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVREntityCharacter_Statics::NewProp_Camera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVREntityCharacter_Statics::NewProp_MotionController_Head,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVREntityCharacter_Statics::NewProp_MotionController_LeftGrip,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVREntityCharacter_Statics::NewProp_MotionController_RightGrip,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVREntityCharacter_Statics::NewProp_MotionController_LeftAim,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVREntityCharacter_Statics::NewProp_MotionController_RightAim,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVREntityCharacter_Statics::NewProp_bDrawMotionControllerDebug,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVREntityCharacter_Statics::NewProp_StableMeshL,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVREntityCharacter_Statics::NewProp_StableMeshR,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVREntityCharacter_Statics::NewProp_HandConstraintL,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVREntityCharacter_Statics::NewProp_HandConstraintR,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVREntityCharacter_Statics::NewProp_ConstrainedMeshL,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVREntityCharacter_Statics::NewProp_ConstrainedMeshR,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVREntityCharacter_Statics::NewProp_InputPools_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVREntityCharacter_Statics::NewProp_InputPools_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVREntityCharacter_Statics::NewProp_InputPools,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVREntityCharacter_Statics::NewProp_InputCounters,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVREntityCharacter_Statics::NewProp_MoveInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVREntityCharacter_Statics::NewProp_LeftHandPose,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVREntityCharacter_Statics::NewProp_RightHandPose,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVREntityCharacter_Statics::NewProp_SprintEvent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVREntityCharacter_Statics::NewProp_JumpEvent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVREntityCharacter_Statics::NewProp_DodgeEvent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AVREntityCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AVREntityCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AEntityCharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectEclipseVR,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AVREntityCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AVREntityCharacter_Statics::ClassParams = {
	&AVREntityCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AVREntityCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AVREntityCharacter_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AVREntityCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AVREntityCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AVREntityCharacter()
{
	if (!Z_Registration_Info_UClass_AVREntityCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AVREntityCharacter.OuterSingleton, Z_Construct_UClass_AVREntityCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AVREntityCharacter.OuterSingleton;
}
template<> PROJECTECLIPSEVR_API UClass* StaticClass<AVREntityCharacter>()
{
	return AVREntityCharacter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AVREntityCharacter);
AVREntityCharacter::~AVREntityCharacter() {}
// End Class AVREntityCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Github_ProjectEclipse_ProjectEclipseVR_Source_ProjectEclipseVR_Public_VREntityCharacter_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FInputCounterTracker::StaticStruct, Z_Construct_UScriptStruct_FInputCounterTracker_Statics::NewStructOps, TEXT("InputCounterTracker"), &Z_Registration_Info_UScriptStruct_InputCounterTracker, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInputCounterTracker), 3030304300U) },
		{ FHandPoseData::StaticStruct, Z_Construct_UScriptStruct_FHandPoseData_Statics::NewStructOps, TEXT("HandPoseData"), &Z_Registration_Info_UScriptStruct_HandPoseData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHandPoseData), 1650407348U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInputActionPool, UInputActionPool::StaticClass, TEXT("UInputActionPool"), &Z_Registration_Info_UClass_UInputActionPool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInputActionPool), 2482296072U) },
		{ Z_Construct_UClass_AVREntityCharacter, AVREntityCharacter::StaticClass, TEXT("AVREntityCharacter"), &Z_Registration_Info_UClass_AVREntityCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AVREntityCharacter), 1147054953U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_ProjectEclipse_ProjectEclipseVR_Source_ProjectEclipseVR_Public_VREntityCharacter_h_2690814933(TEXT("/Script/ProjectEclipseVR"),
	Z_CompiledInDeferFile_FID_Github_ProjectEclipse_ProjectEclipseVR_Source_ProjectEclipseVR_Public_VREntityCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_ProjectEclipse_ProjectEclipseVR_Source_ProjectEclipseVR_Public_VREntityCharacter_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Github_ProjectEclipse_ProjectEclipseVR_Source_ProjectEclipseVR_Public_VREntityCharacter_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_ProjectEclipse_ProjectEclipseVR_Source_ProjectEclipseVR_Public_VREntityCharacter_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
