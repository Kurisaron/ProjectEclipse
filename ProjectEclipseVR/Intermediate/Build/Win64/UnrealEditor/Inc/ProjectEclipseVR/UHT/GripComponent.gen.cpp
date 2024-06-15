// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectEclipseVR/Public/GripComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGripComponent() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
ENGINE_API UClass* Z_Construct_UClass_UHapticFeedbackEffect_Base_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
HEADMOUNTEDDISPLAY_API UClass* Z_Construct_UClass_UMotionControllerComponent_NoRegister();
INPUTCORE_API UEnum* Z_Construct_UEnum_InputCore_EControllerHand();
PROJECTECLIPSEVR_API UClass* Z_Construct_UClass_UGripComponent();
PROJECTECLIPSEVR_API UClass* Z_Construct_UClass_UGripComponent_NoRegister();
PROJECTECLIPSEVR_API UFunction* Z_Construct_UDelegateFunction_ProjectEclipseVR_GripFireEvent__DelegateSignature();
PROJECTECLIPSEVR_API UFunction* Z_Construct_UDelegateFunction_ProjectEclipseVR_GripGrabEvent__DelegateSignature();
PROJECTECLIPSEVR_API UFunction* Z_Construct_UDelegateFunction_ProjectEclipseVR_GripReleaseEvent__DelegateSignature();
PROJECTECLIPSEVR_API UFunction* Z_Construct_UDelegateFunction_ProjectEclipseVR_GripUseEvent__DelegateSignature();
PROJECTECLIPSEVR_API UScriptStruct* Z_Construct_UScriptStruct_FGripType();
UPackage* Z_Construct_UPackage__Script_ProjectEclipseVR();
// End Cross Module References

// Begin Delegate FGripGrabEvent
struct Z_Construct_UDelegateFunction_ProjectEclipseVR_GripGrabEvent__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GripComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ProjectEclipseVR_GripGrabEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ProjectEclipseVR, nullptr, "GripGrabEvent__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectEclipseVR_GripGrabEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ProjectEclipseVR_GripGrabEvent__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_ProjectEclipseVR_GripGrabEvent__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ProjectEclipseVR_GripGrabEvent__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FGripGrabEvent_DelegateWrapper(const FMulticastScriptDelegate& GripGrabEvent)
{
	GripGrabEvent.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FGripGrabEvent

// Begin Delegate FGripReleaseEvent
struct Z_Construct_UDelegateFunction_ProjectEclipseVR_GripReleaseEvent__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GripComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ProjectEclipseVR_GripReleaseEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ProjectEclipseVR, nullptr, "GripReleaseEvent__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectEclipseVR_GripReleaseEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ProjectEclipseVR_GripReleaseEvent__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_ProjectEclipseVR_GripReleaseEvent__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ProjectEclipseVR_GripReleaseEvent__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FGripReleaseEvent_DelegateWrapper(const FMulticastScriptDelegate& GripReleaseEvent)
{
	GripReleaseEvent.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FGripReleaseEvent

// Begin Delegate FGripFireEvent
struct Z_Construct_UDelegateFunction_ProjectEclipseVR_GripFireEvent__DelegateSignature_Statics
{
	struct _Script_ProjectEclipseVR_eventGripFireEvent_Parms
	{
		bool Pressed;
		float PressedTime;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GripComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_Pressed_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Pressed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PressedTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UDelegateFunction_ProjectEclipseVR_GripFireEvent__DelegateSignature_Statics::NewProp_Pressed_SetBit(void* Obj)
{
	((_Script_ProjectEclipseVR_eventGripFireEvent_Parms*)Obj)->Pressed = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_ProjectEclipseVR_GripFireEvent__DelegateSignature_Statics::NewProp_Pressed = { "Pressed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_ProjectEclipseVR_eventGripFireEvent_Parms), &Z_Construct_UDelegateFunction_ProjectEclipseVR_GripFireEvent__DelegateSignature_Statics::NewProp_Pressed_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_ProjectEclipseVR_GripFireEvent__DelegateSignature_Statics::NewProp_PressedTime = { "PressedTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ProjectEclipseVR_eventGripFireEvent_Parms, PressedTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ProjectEclipseVR_GripFireEvent__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProjectEclipseVR_GripFireEvent__DelegateSignature_Statics::NewProp_Pressed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProjectEclipseVR_GripFireEvent__DelegateSignature_Statics::NewProp_PressedTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectEclipseVR_GripFireEvent__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ProjectEclipseVR_GripFireEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ProjectEclipseVR, nullptr, "GripFireEvent__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_ProjectEclipseVR_GripFireEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectEclipseVR_GripFireEvent__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_ProjectEclipseVR_GripFireEvent__DelegateSignature_Statics::_Script_ProjectEclipseVR_eventGripFireEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectEclipseVR_GripFireEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ProjectEclipseVR_GripFireEvent__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_ProjectEclipseVR_GripFireEvent__DelegateSignature_Statics::_Script_ProjectEclipseVR_eventGripFireEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_ProjectEclipseVR_GripFireEvent__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ProjectEclipseVR_GripFireEvent__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FGripFireEvent_DelegateWrapper(const FMulticastScriptDelegate& GripFireEvent, bool Pressed, float PressedTime)
{
	struct _Script_ProjectEclipseVR_eventGripFireEvent_Parms
	{
		bool Pressed;
		float PressedTime;
	};
	_Script_ProjectEclipseVR_eventGripFireEvent_Parms Parms;
	Parms.Pressed=Pressed ? true : false;
	Parms.PressedTime=PressedTime;
	GripFireEvent.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FGripFireEvent

// Begin Delegate FGripUseEvent
struct Z_Construct_UDelegateFunction_ProjectEclipseVR_GripUseEvent__DelegateSignature_Statics
{
	struct _Script_ProjectEclipseVR_eventGripUseEvent_Parms
	{
		bool Pressed;
		float PressedTime;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GripComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_Pressed_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Pressed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PressedTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UDelegateFunction_ProjectEclipseVR_GripUseEvent__DelegateSignature_Statics::NewProp_Pressed_SetBit(void* Obj)
{
	((_Script_ProjectEclipseVR_eventGripUseEvent_Parms*)Obj)->Pressed = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_ProjectEclipseVR_GripUseEvent__DelegateSignature_Statics::NewProp_Pressed = { "Pressed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_ProjectEclipseVR_eventGripUseEvent_Parms), &Z_Construct_UDelegateFunction_ProjectEclipseVR_GripUseEvent__DelegateSignature_Statics::NewProp_Pressed_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_ProjectEclipseVR_GripUseEvent__DelegateSignature_Statics::NewProp_PressedTime = { "PressedTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ProjectEclipseVR_eventGripUseEvent_Parms, PressedTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ProjectEclipseVR_GripUseEvent__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProjectEclipseVR_GripUseEvent__DelegateSignature_Statics::NewProp_Pressed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProjectEclipseVR_GripUseEvent__DelegateSignature_Statics::NewProp_PressedTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectEclipseVR_GripUseEvent__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ProjectEclipseVR_GripUseEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ProjectEclipseVR, nullptr, "GripUseEvent__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_ProjectEclipseVR_GripUseEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectEclipseVR_GripUseEvent__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_ProjectEclipseVR_GripUseEvent__DelegateSignature_Statics::_Script_ProjectEclipseVR_eventGripUseEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectEclipseVR_GripUseEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ProjectEclipseVR_GripUseEvent__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_ProjectEclipseVR_GripUseEvent__DelegateSignature_Statics::_Script_ProjectEclipseVR_eventGripUseEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_ProjectEclipseVR_GripUseEvent__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ProjectEclipseVR_GripUseEvent__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FGripUseEvent_DelegateWrapper(const FMulticastScriptDelegate& GripUseEvent, bool Pressed, float PressedTime)
{
	struct _Script_ProjectEclipseVR_eventGripUseEvent_Parms
	{
		bool Pressed;
		float PressedTime;
	};
	_Script_ProjectEclipseVR_eventGripUseEvent_Parms Parms;
	Parms.Pressed=Pressed ? true : false;
	Parms.PressedTime=PressedTime;
	GripUseEvent.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FGripUseEvent

// Begin ScriptStruct FGripType
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GripType;
class UScriptStruct* FGripType::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GripType.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GripType.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGripType, (UObject*)Z_Construct_UPackage__Script_ProjectEclipseVR(), TEXT("GripType"));
	}
	return Z_Registration_Info_UScriptStruct_GripType.OuterSingleton;
}
template<> PROJECTECLIPSEVR_API UScriptStruct* StaticStruct<FGripType>()
{
	return FGripType::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGripType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\nUENUM(BlueprintType)\nenum class EGripType : uint8\n{\n\x09GTE_None\x09UMETA(DisplayName = \"None\"),\n\x09GTE_Free\x09UMETA(DisplayName = \"Free\"),\n\x09GTE_Snap\x09UMETA(DisplayName = \"Snap\"),\n\x09GTE_Custom\x09UMETA(DisplayName = \"Custom\"),\n};\n*/" },
#endif
		{ "ModuleRelativePath", "Public/GripComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UENUM(BlueprintType)\nenum class EGripType : uint8\n{\n       GTE_None        UMETA(DisplayName = \"None\"),\n       GTE_Free        UMETA(DisplayName = \"Free\"),\n       GTE_Snap        UMETA(DisplayName = \"Snap\"),\n       GTE_Custom      UMETA(DisplayName = \"Custom\"),\n};" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCanGrab_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "GripType" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// True = grip can be held in hand\n" },
#endif
		{ "ModuleRelativePath", "Public/GripComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "True = grip can be held in hand" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSnapHandToGrip_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "GripType" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// True = hand will snap to the grip (or its axis)\n" },
#endif
		{ "EditCondition", "bCanGrab" },
		{ "ModuleRelativePath", "Public/GripComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "True = hand will snap to the grip (or its axis)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AxisLength_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "GripType" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Length of the axis for the grip. Any values greater than zero allows for sliding and two-handed holding\n" },
#endif
		{ "EditCondition", "bCanGrab && bSnapHandToGrip" },
		{ "ModuleRelativePath", "Public/GripComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Length of the axis for the grip. Any values greater than zero allows for sliding and two-handed holding" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCanTK_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "GripType" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// True = grip can be moved with telekinesis\n" },
#endif
		{ "ModuleRelativePath", "Public/GripComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "True = grip can be moved with telekinesis" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bCanGrab_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanGrab;
	static void NewProp_bSnapHandToGrip_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSnapHandToGrip;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AxisLength;
	static void NewProp_bCanTK_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanTK;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGripType>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FGripType_Statics::NewProp_bCanGrab_SetBit(void* Obj)
{
	((FGripType*)Obj)->bCanGrab = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGripType_Statics::NewProp_bCanGrab = { "bCanGrab", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGripType), &Z_Construct_UScriptStruct_FGripType_Statics::NewProp_bCanGrab_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCanGrab_MetaData), NewProp_bCanGrab_MetaData) };
void Z_Construct_UScriptStruct_FGripType_Statics::NewProp_bSnapHandToGrip_SetBit(void* Obj)
{
	((FGripType*)Obj)->bSnapHandToGrip = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGripType_Statics::NewProp_bSnapHandToGrip = { "bSnapHandToGrip", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGripType), &Z_Construct_UScriptStruct_FGripType_Statics::NewProp_bSnapHandToGrip_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSnapHandToGrip_MetaData), NewProp_bSnapHandToGrip_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGripType_Statics::NewProp_AxisLength = { "AxisLength", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGripType, AxisLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AxisLength_MetaData), NewProp_AxisLength_MetaData) };
void Z_Construct_UScriptStruct_FGripType_Statics::NewProp_bCanTK_SetBit(void* Obj)
{
	((FGripType*)Obj)->bCanTK = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGripType_Statics::NewProp_bCanTK = { "bCanTK", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGripType), &Z_Construct_UScriptStruct_FGripType_Statics::NewProp_bCanTK_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCanTK_MetaData), NewProp_bCanTK_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGripType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGripType_Statics::NewProp_bCanGrab,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGripType_Statics::NewProp_bSnapHandToGrip,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGripType_Statics::NewProp_AxisLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGripType_Statics::NewProp_bCanTK,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGripType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGripType_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectEclipseVR,
	nullptr,
	&NewStructOps,
	"GripType",
	Z_Construct_UScriptStruct_FGripType_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGripType_Statics::PropPointers),
	sizeof(FGripType),
	alignof(FGripType),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGripType_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGripType_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGripType()
{
	if (!Z_Registration_Info_UScriptStruct_GripType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GripType.InnerSingleton, Z_Construct_UScriptStruct_FGripType_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GripType.InnerSingleton;
}
// End ScriptStruct FGripType

// Begin Class UGripComponent Function GetHeldByHand
struct Z_Construct_UFunction_UGripComponent_GetHeldByHand_Statics
{
	struct GripComponent_eventGetHeldByHand_Parms
	{
		EControllerHand ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Grip Component" },
		{ "ModuleRelativePath", "Public/GripComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGripComponent_GetHeldByHand_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGripComponent_GetHeldByHand_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GripComponent_eventGetHeldByHand_Parms, ReturnValue), Z_Construct_UEnum_InputCore_EControllerHand, METADATA_PARAMS(0, nullptr) }; // 775183092
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGripComponent_GetHeldByHand_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripComponent_GetHeldByHand_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripComponent_GetHeldByHand_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGripComponent_GetHeldByHand_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGripComponent_GetHeldByHand_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGripComponent, nullptr, "GetHeldByHand", nullptr, nullptr, Z_Construct_UFunction_UGripComponent_GetHeldByHand_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripComponent_GetHeldByHand_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGripComponent_GetHeldByHand_Statics::GripComponent_eventGetHeldByHand_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGripComponent_GetHeldByHand_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGripComponent_GetHeldByHand_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGripComponent_GetHeldByHand_Statics::GripComponent_eventGetHeldByHand_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGripComponent_GetHeldByHand()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGripComponent_GetHeldByHand_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGripComponent::execGetHeldByHand)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EControllerHand*)Z_Param__Result=P_THIS->GetHeldByHand();
	P_NATIVE_END;
}
// End Class UGripComponent Function GetHeldByHand

// Begin Class UGripComponent Function SetPrimitiveCompPhysics
struct Z_Construct_UFunction_UGripComponent_SetPrimitiveCompPhysics_Statics
{
	struct GripComponent_eventSetPrimitiveCompPhysics_Parms
	{
		bool bSimulate;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Grip Component" },
		{ "ModuleRelativePath", "Public/GripComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bSimulate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSimulate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UGripComponent_SetPrimitiveCompPhysics_Statics::NewProp_bSimulate_SetBit(void* Obj)
{
	((GripComponent_eventSetPrimitiveCompPhysics_Parms*)Obj)->bSimulate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGripComponent_SetPrimitiveCompPhysics_Statics::NewProp_bSimulate = { "bSimulate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GripComponent_eventSetPrimitiveCompPhysics_Parms), &Z_Construct_UFunction_UGripComponent_SetPrimitiveCompPhysics_Statics::NewProp_bSimulate_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGripComponent_SetPrimitiveCompPhysics_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripComponent_SetPrimitiveCompPhysics_Statics::NewProp_bSimulate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGripComponent_SetPrimitiveCompPhysics_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGripComponent_SetPrimitiveCompPhysics_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGripComponent, nullptr, "SetPrimitiveCompPhysics", nullptr, nullptr, Z_Construct_UFunction_UGripComponent_SetPrimitiveCompPhysics_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripComponent_SetPrimitiveCompPhysics_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGripComponent_SetPrimitiveCompPhysics_Statics::GripComponent_eventSetPrimitiveCompPhysics_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGripComponent_SetPrimitiveCompPhysics_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGripComponent_SetPrimitiveCompPhysics_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGripComponent_SetPrimitiveCompPhysics_Statics::GripComponent_eventSetPrimitiveCompPhysics_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGripComponent_SetPrimitiveCompPhysics()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGripComponent_SetPrimitiveCompPhysics_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGripComponent::execSetPrimitiveCompPhysics)
{
	P_GET_UBOOL(Z_Param_bSimulate);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPrimitiveCompPhysics(Z_Param_bSimulate);
	P_NATIVE_END;
}
// End Class UGripComponent Function SetPrimitiveCompPhysics

// Begin Class UGripComponent Function SetShouldSimulateOnDrop
struct Z_Construct_UFunction_UGripComponent_SetShouldSimulateOnDrop_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Grip Component" },
		{ "ModuleRelativePath", "Public/GripComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGripComponent_SetShouldSimulateOnDrop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGripComponent, nullptr, "SetShouldSimulateOnDrop", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGripComponent_SetShouldSimulateOnDrop_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGripComponent_SetShouldSimulateOnDrop_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UGripComponent_SetShouldSimulateOnDrop()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGripComponent_SetShouldSimulateOnDrop_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGripComponent::execSetShouldSimulateOnDrop)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetShouldSimulateOnDrop();
	P_NATIVE_END;
}
// End Class UGripComponent Function SetShouldSimulateOnDrop

// Begin Class UGripComponent
void UGripComponent::StaticRegisterNativesUGripComponent()
{
	UClass* Class = UGripComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetHeldByHand", &UGripComponent::execGetHeldByHand },
		{ "SetPrimitiveCompPhysics", &UGripComponent::execSetPrimitiveCompPhysics },
		{ "SetShouldSimulateOnDrop", &UGripComponent::execSetShouldSimulateOnDrop },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGripComponent);
UClass* Z_Construct_UClass_UGripComponent_NoRegister()
{
	return UGripComponent::StaticClass();
}
struct Z_Construct_UClass_UGripComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "GripComponent.h" },
		{ "ModuleRelativePath", "Public/GripComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MotionController_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GripComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrimaryGrip_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GripComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsHeld_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "GripComponent" },
		{ "ModuleRelativePath", "Public/GripComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrimaryGrabRelativeRotation_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "GripComponent" },
		{ "ModuleRelativePath", "Public/GripComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSimulateOnDrop_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "GripComponent" },
		{ "ModuleRelativePath", "Public/GripComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GripType_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "GripComponent" },
		{ "ModuleRelativePath", "Public/GripComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnGrabHapticEffect_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "GripComponent" },
		{ "ModuleRelativePath", "Public/GripComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnGrabbed_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/GripComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnDropped_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/GripComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFired_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/GripComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnUsed_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/GripComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MotionController;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PrimaryGrip;
	static void NewProp_bIsHeld_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsHeld;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PrimaryGrabRelativeRotation;
	static void NewProp_bSimulateOnDrop_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSimulateOnDrop;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GripType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OnGrabHapticEffect;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnGrabbed;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDropped;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFired;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnUsed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGripComponent_GetHeldByHand, "GetHeldByHand" }, // 2629515336
		{ &Z_Construct_UFunction_UGripComponent_SetPrimitiveCompPhysics, "SetPrimitiveCompPhysics" }, // 3047807755
		{ &Z_Construct_UFunction_UGripComponent_SetShouldSimulateOnDrop, "SetShouldSimulateOnDrop" }, // 3312881808
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGripComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGripComponent_Statics::NewProp_MotionController = { "MotionController", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGripComponent, MotionController), Z_Construct_UClass_UMotionControllerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MotionController_MetaData), NewProp_MotionController_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGripComponent_Statics::NewProp_PrimaryGrip = { "PrimaryGrip", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGripComponent, PrimaryGrip), Z_Construct_UClass_UGripComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrimaryGrip_MetaData), NewProp_PrimaryGrip_MetaData) };
void Z_Construct_UClass_UGripComponent_Statics::NewProp_bIsHeld_SetBit(void* Obj)
{
	((UGripComponent*)Obj)->bIsHeld = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGripComponent_Statics::NewProp_bIsHeld = { "bIsHeld", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGripComponent), &Z_Construct_UClass_UGripComponent_Statics::NewProp_bIsHeld_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsHeld_MetaData), NewProp_bIsHeld_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGripComponent_Statics::NewProp_PrimaryGrabRelativeRotation = { "PrimaryGrabRelativeRotation", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGripComponent, PrimaryGrabRelativeRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrimaryGrabRelativeRotation_MetaData), NewProp_PrimaryGrabRelativeRotation_MetaData) };
void Z_Construct_UClass_UGripComponent_Statics::NewProp_bSimulateOnDrop_SetBit(void* Obj)
{
	((UGripComponent*)Obj)->bSimulateOnDrop = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGripComponent_Statics::NewProp_bSimulateOnDrop = { "bSimulateOnDrop", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGripComponent), &Z_Construct_UClass_UGripComponent_Statics::NewProp_bSimulateOnDrop_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSimulateOnDrop_MetaData), NewProp_bSimulateOnDrop_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGripComponent_Statics::NewProp_GripType = { "GripType", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGripComponent, GripType), Z_Construct_UScriptStruct_FGripType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GripType_MetaData), NewProp_GripType_MetaData) }; // 3162174194
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGripComponent_Statics::NewProp_OnGrabHapticEffect = { "OnGrabHapticEffect", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGripComponent, OnGrabHapticEffect), Z_Construct_UClass_UHapticFeedbackEffect_Base_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnGrabHapticEffect_MetaData), NewProp_OnGrabHapticEffect_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGripComponent_Statics::NewProp_OnGrabbed = { "OnGrabbed", nullptr, (EPropertyFlags)0x0040100010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGripComponent, OnGrabbed), Z_Construct_UDelegateFunction_ProjectEclipseVR_GripGrabEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnGrabbed_MetaData), NewProp_OnGrabbed_MetaData) }; // 1124112056
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGripComponent_Statics::NewProp_OnDropped = { "OnDropped", nullptr, (EPropertyFlags)0x0040100010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGripComponent, OnDropped), Z_Construct_UDelegateFunction_ProjectEclipseVR_GripReleaseEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnDropped_MetaData), NewProp_OnDropped_MetaData) }; // 1929307175
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGripComponent_Statics::NewProp_OnFired = { "OnFired", nullptr, (EPropertyFlags)0x0040100010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGripComponent, OnFired), Z_Construct_UDelegateFunction_ProjectEclipseVR_GripFireEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFired_MetaData), NewProp_OnFired_MetaData) }; // 3465948698
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGripComponent_Statics::NewProp_OnUsed = { "OnUsed", nullptr, (EPropertyFlags)0x0040100010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGripComponent, OnUsed), Z_Construct_UDelegateFunction_ProjectEclipseVR_GripUseEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnUsed_MetaData), NewProp_OnUsed_MetaData) }; // 1161422935
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGripComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGripComponent_Statics::NewProp_MotionController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGripComponent_Statics::NewProp_PrimaryGrip,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGripComponent_Statics::NewProp_bIsHeld,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGripComponent_Statics::NewProp_PrimaryGrabRelativeRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGripComponent_Statics::NewProp_bSimulateOnDrop,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGripComponent_Statics::NewProp_GripType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGripComponent_Statics::NewProp_OnGrabHapticEffect,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGripComponent_Statics::NewProp_OnGrabbed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGripComponent_Statics::NewProp_OnDropped,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGripComponent_Statics::NewProp_OnFired,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGripComponent_Statics::NewProp_OnUsed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGripComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGripComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USceneComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectEclipseVR,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGripComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGripComponent_Statics::ClassParams = {
	&UGripComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UGripComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UGripComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGripComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UGripComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGripComponent()
{
	if (!Z_Registration_Info_UClass_UGripComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGripComponent.OuterSingleton, Z_Construct_UClass_UGripComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGripComponent.OuterSingleton;
}
template<> PROJECTECLIPSEVR_API UClass* StaticClass<UGripComponent>()
{
	return UGripComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGripComponent);
UGripComponent::~UGripComponent() {}
// End Class UGripComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Github_ProjectEclipse_ProjectEclipseVR_Source_ProjectEclipseVR_Public_GripComponent_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FGripType::StaticStruct, Z_Construct_UScriptStruct_FGripType_Statics::NewStructOps, TEXT("GripType"), &Z_Registration_Info_UScriptStruct_GripType, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGripType), 3162174194U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGripComponent, UGripComponent::StaticClass, TEXT("UGripComponent"), &Z_Registration_Info_UClass_UGripComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGripComponent), 4284967179U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_ProjectEclipse_ProjectEclipseVR_Source_ProjectEclipseVR_Public_GripComponent_h_2603167790(TEXT("/Script/ProjectEclipseVR"),
	Z_CompiledInDeferFile_FID_Github_ProjectEclipse_ProjectEclipseVR_Source_ProjectEclipseVR_Public_GripComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_ProjectEclipse_ProjectEclipseVR_Source_ProjectEclipseVR_Public_GripComponent_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Github_ProjectEclipse_ProjectEclipseVR_Source_ProjectEclipseVR_Public_GripComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_ProjectEclipse_ProjectEclipseVR_Source_ProjectEclipseVR_Public_GripComponent_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
