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
PROJECTECLIPSEVR_API UEnum* Z_Construct_UEnum_ProjectEclipseVR_EGripType();
PROJECTECLIPSEVR_API UFunction* Z_Construct_UDelegateFunction_ProjectEclipseVR_GripGrabEvent__DelegateSignature();
PROJECTECLIPSEVR_API UFunction* Z_Construct_UDelegateFunction_ProjectEclipseVR_GripReleaseEvent__DelegateSignature();
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

// Begin Enum EGripType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGripType;
static UEnum* EGripType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EGripType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EGripType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ProjectEclipseVR_EGripType, (UObject*)Z_Construct_UPackage__Script_ProjectEclipseVR(), TEXT("EGripType"));
	}
	return Z_Registration_Info_UEnum_EGripType.OuterSingleton;
}
template<> PROJECTECLIPSEVR_API UEnum* StaticEnum<EGripType>()
{
	return EGripType_StaticEnum();
}
struct Z_Construct_UEnum_ProjectEclipseVR_EGripType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "GTE_Custom.DisplayName", "Custom" },
		{ "GTE_Custom.Name", "EGripType::GTE_Custom" },
		{ "GTE_Free.DisplayName", "Free" },
		{ "GTE_Free.Name", "EGripType::GTE_Free" },
		{ "GTE_None.DisplayName", "None" },
		{ "GTE_None.Name", "EGripType::GTE_None" },
		{ "GTE_Snap.DisplayName", "Snap" },
		{ "GTE_Snap.Name", "EGripType::GTE_Snap" },
		{ "ModuleRelativePath", "Public/GripComponent.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EGripType::GTE_None", (int64)EGripType::GTE_None },
		{ "EGripType::GTE_Free", (int64)EGripType::GTE_Free },
		{ "EGripType::GTE_Snap", (int64)EGripType::GTE_Snap },
		{ "EGripType::GTE_Custom", (int64)EGripType::GTE_Custom },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ProjectEclipseVR_EGripType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ProjectEclipseVR,
	nullptr,
	"EGripType",
	"EGripType",
	Z_Construct_UEnum_ProjectEclipseVR_EGripType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ProjectEclipseVR_EGripType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ProjectEclipseVR_EGripType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ProjectEclipseVR_EGripType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ProjectEclipseVR_EGripType()
{
	if (!Z_Registration_Info_UEnum_EGripType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGripType.InnerSingleton, Z_Construct_UEnum_ProjectEclipseVR_EGripType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EGripType.InnerSingleton;
}
// End Enum EGripType

// Begin Class UGripComponent Function GetHeldByHand
struct Z_Construct_UFunction_UGripComponent_GetHeldByHand_Statics
{
	struct GripComponent_eventGetHeldByHand_Parms
	{
		EControllerHand ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
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

// Begin Class UGripComponent Function TryGrab
struct Z_Construct_UFunction_UGripComponent_TryGrab_Statics
{
	struct GripComponent_eventTryGrab_Parms
	{
		UMotionControllerComponent* NewMotionController;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GripComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewMotionController_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewMotionController;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGripComponent_TryGrab_Statics::NewProp_NewMotionController = { "NewMotionController", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GripComponent_eventTryGrab_Parms, NewMotionController), Z_Construct_UClass_UMotionControllerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewMotionController_MetaData), NewProp_NewMotionController_MetaData) };
void Z_Construct_UFunction_UGripComponent_TryGrab_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((GripComponent_eventTryGrab_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGripComponent_TryGrab_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GripComponent_eventTryGrab_Parms), &Z_Construct_UFunction_UGripComponent_TryGrab_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGripComponent_TryGrab_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripComponent_TryGrab_Statics::NewProp_NewMotionController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripComponent_TryGrab_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGripComponent_TryGrab_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGripComponent_TryGrab_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGripComponent, nullptr, "TryGrab", nullptr, nullptr, Z_Construct_UFunction_UGripComponent_TryGrab_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripComponent_TryGrab_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGripComponent_TryGrab_Statics::GripComponent_eventTryGrab_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGripComponent_TryGrab_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGripComponent_TryGrab_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGripComponent_TryGrab_Statics::GripComponent_eventTryGrab_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGripComponent_TryGrab()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGripComponent_TryGrab_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGripComponent::execTryGrab)
{
	P_GET_OBJECT(UMotionControllerComponent,Z_Param_NewMotionController);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->TryGrab(Z_Param_NewMotionController);
	P_NATIVE_END;
}
// End Class UGripComponent Function TryGrab

// Begin Class UGripComponent Function TryRelease
struct Z_Construct_UFunction_UGripComponent_TryRelease_Statics
{
	struct GripComponent_eventTryRelease_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GripComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UGripComponent_TryRelease_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((GripComponent_eventTryRelease_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGripComponent_TryRelease_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GripComponent_eventTryRelease_Parms), &Z_Construct_UFunction_UGripComponent_TryRelease_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGripComponent_TryRelease_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripComponent_TryRelease_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGripComponent_TryRelease_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGripComponent_TryRelease_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGripComponent, nullptr, "TryRelease", nullptr, nullptr, Z_Construct_UFunction_UGripComponent_TryRelease_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripComponent_TryRelease_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGripComponent_TryRelease_Statics::GripComponent_eventTryRelease_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGripComponent_TryRelease_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGripComponent_TryRelease_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGripComponent_TryRelease_Statics::GripComponent_eventTryRelease_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGripComponent_TryRelease()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGripComponent_TryRelease_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGripComponent::execTryRelease)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->TryRelease();
	P_NATIVE_END;
}
// End Class UGripComponent Function TryRelease

// Begin Class UGripComponent
void UGripComponent::StaticRegisterNativesUGripComponent()
{
	UClass* Class = UGripComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetHeldByHand", &UGripComponent::execGetHeldByHand },
		{ "SetPrimitiveCompPhysics", &UGripComponent::execSetPrimitiveCompPhysics },
		{ "SetShouldSimulateOnDrop", &UGripComponent::execSetShouldSimulateOnDrop },
		{ "TryGrab", &UGripComponent::execTryGrab },
		{ "TryRelease", &UGripComponent::execTryRelease },
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
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/GripComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnDropped_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
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
	static const UECodeGen_Private::FBytePropertyParams NewProp_GripType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_GripType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OnGrabHapticEffect;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnGrabbed;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDropped;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGripComponent_GetHeldByHand, "GetHeldByHand" }, // 1900393522
		{ &Z_Construct_UFunction_UGripComponent_SetPrimitiveCompPhysics, "SetPrimitiveCompPhysics" }, // 2225277913
		{ &Z_Construct_UFunction_UGripComponent_SetShouldSimulateOnDrop, "SetShouldSimulateOnDrop" }, // 1313512097
		{ &Z_Construct_UFunction_UGripComponent_TryGrab, "TryGrab" }, // 1192918956
		{ &Z_Construct_UFunction_UGripComponent_TryRelease, "TryRelease" }, // 2619850597
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
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGripComponent_Statics::NewProp_GripType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UGripComponent_Statics::NewProp_GripType = { "GripType", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGripComponent, GripType), Z_Construct_UEnum_ProjectEclipseVR_EGripType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GripType_MetaData), NewProp_GripType_MetaData) }; // 2996865120
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGripComponent_Statics::NewProp_OnGrabHapticEffect = { "OnGrabHapticEffect", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGripComponent, OnGrabHapticEffect), Z_Construct_UClass_UHapticFeedbackEffect_Base_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnGrabHapticEffect_MetaData), NewProp_OnGrabHapticEffect_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGripComponent_Statics::NewProp_OnGrabbed = { "OnGrabbed", nullptr, (EPropertyFlags)0x00401000100a0015, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGripComponent, OnGrabbed), Z_Construct_UDelegateFunction_ProjectEclipseVR_GripGrabEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnGrabbed_MetaData), NewProp_OnGrabbed_MetaData) }; // 1124112056
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGripComponent_Statics::NewProp_OnDropped = { "OnDropped", nullptr, (EPropertyFlags)0x00401000100a0015, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGripComponent, OnDropped), Z_Construct_UDelegateFunction_ProjectEclipseVR_GripReleaseEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnDropped_MetaData), NewProp_OnDropped_MetaData) }; // 1929307175
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGripComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGripComponent_Statics::NewProp_MotionController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGripComponent_Statics::NewProp_PrimaryGrip,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGripComponent_Statics::NewProp_bIsHeld,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGripComponent_Statics::NewProp_PrimaryGrabRelativeRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGripComponent_Statics::NewProp_bSimulateOnDrop,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGripComponent_Statics::NewProp_GripType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGripComponent_Statics::NewProp_GripType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGripComponent_Statics::NewProp_OnGrabHapticEffect,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGripComponent_Statics::NewProp_OnGrabbed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGripComponent_Statics::NewProp_OnDropped,
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
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EGripType_StaticEnum, TEXT("EGripType"), &Z_Registration_Info_UEnum_EGripType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2996865120U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGripComponent, UGripComponent::StaticClass, TEXT("UGripComponent"), &Z_Registration_Info_UClass_UGripComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGripComponent), 328862038U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_ProjectEclipse_ProjectEclipseVR_Source_ProjectEclipseVR_Public_GripComponent_h_2077842778(TEXT("/Script/ProjectEclipseVR"),
	Z_CompiledInDeferFile_FID_Github_ProjectEclipse_ProjectEclipseVR_Source_ProjectEclipseVR_Public_GripComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_ProjectEclipse_ProjectEclipseVR_Source_ProjectEclipseVR_Public_GripComponent_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Github_ProjectEclipse_ProjectEclipseVR_Source_ProjectEclipseVR_Public_GripComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_ProjectEclipse_ProjectEclipseVR_Source_ProjectEclipseVR_Public_GripComponent_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
