// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "cppProject/PerceptionComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePerceptionComponent() {}

// Begin Cross Module References
CPPPROJECT_API UClass* Z_Construct_UClass_UPerceptionComponent();
CPPPROJECT_API UClass* Z_Construct_UClass_UPerceptionComponent_NoRegister();
CPPPROJECT_API UFunction* Z_Construct_UDelegateFunction_cppProject_OnActorDetected__DelegateSignature();
CPPPROJECT_API UScriptStruct* Z_Construct_UScriptStruct_FPerceptionInfo();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
UPackage* Z_Construct_UPackage__Script_cppProject();
// End Cross Module References

// Begin ScriptStruct FPerceptionInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PerceptionInfo;
class UScriptStruct* FPerceptionInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PerceptionInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PerceptionInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPerceptionInfo, (UObject*)Z_Construct_UPackage__Script_cppProject(), TEXT("PerceptionInfo"));
	}
	return Z_Registration_Info_UScriptStruct_PerceptionInfo.OuterSingleton;
}
template<> CPPPROJECT_API UScriptStruct* StaticStruct<FPerceptionInfo>()
{
	return FPerceptionInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPerceptionInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "PerceptionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DetectionRadius_MetaData[] = {
		{ "Category", "Perception" },
		{ "ModuleRelativePath", "PerceptionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCanDetectActors_MetaData[] = {
		{ "Category", "Perception" },
		{ "ModuleRelativePath", "PerceptionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrackTime_MetaData[] = {
		{ "Category", "Perception" },
		{ "ModuleRelativePath", "PerceptionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentTime_MetaData[] = {
		{ "Category", "Perception" },
		{ "ModuleRelativePath", "PerceptionComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DetectionRadius;
	static void NewProp_bCanDetectActors_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanDetectActors;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TrackTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPerceptionInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPerceptionInfo_Statics::NewProp_DetectionRadius = { "DetectionRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPerceptionInfo, DetectionRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DetectionRadius_MetaData), NewProp_DetectionRadius_MetaData) };
void Z_Construct_UScriptStruct_FPerceptionInfo_Statics::NewProp_bCanDetectActors_SetBit(void* Obj)
{
	((FPerceptionInfo*)Obj)->bCanDetectActors = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPerceptionInfo_Statics::NewProp_bCanDetectActors = { "bCanDetectActors", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPerceptionInfo), &Z_Construct_UScriptStruct_FPerceptionInfo_Statics::NewProp_bCanDetectActors_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCanDetectActors_MetaData), NewProp_bCanDetectActors_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPerceptionInfo_Statics::NewProp_TrackTime = { "TrackTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPerceptionInfo, TrackTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrackTime_MetaData), NewProp_TrackTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPerceptionInfo_Statics::NewProp_CurrentTime = { "CurrentTime", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPerceptionInfo, CurrentTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentTime_MetaData), NewProp_CurrentTime_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPerceptionInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerceptionInfo_Statics::NewProp_DetectionRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerceptionInfo_Statics::NewProp_bCanDetectActors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerceptionInfo_Statics::NewProp_TrackTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerceptionInfo_Statics::NewProp_CurrentTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerceptionInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPerceptionInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_cppProject,
	nullptr,
	&NewStructOps,
	"PerceptionInfo",
	Z_Construct_UScriptStruct_FPerceptionInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerceptionInfo_Statics::PropPointers),
	sizeof(FPerceptionInfo),
	alignof(FPerceptionInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerceptionInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPerceptionInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPerceptionInfo()
{
	if (!Z_Registration_Info_UScriptStruct_PerceptionInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PerceptionInfo.InnerSingleton, Z_Construct_UScriptStruct_FPerceptionInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PerceptionInfo.InnerSingleton;
}
// End ScriptStruct FPerceptionInfo

// Begin Delegate FOnActorDetected
struct Z_Construct_UDelegateFunction_cppProject_OnActorDetected__DelegateSignature_Statics
{
	struct _Script_cppProject_eventOnActorDetected_Parms
	{
		AActor* DetectedActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PerceptionComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DetectedActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_cppProject_OnActorDetected__DelegateSignature_Statics::NewProp_DetectedActor = { "DetectedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_cppProject_eventOnActorDetected_Parms, DetectedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_cppProject_OnActorDetected__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_cppProject_OnActorDetected__DelegateSignature_Statics::NewProp_DetectedActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_cppProject_OnActorDetected__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_cppProject_OnActorDetected__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_cppProject, nullptr, "OnActorDetected__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_cppProject_OnActorDetected__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_cppProject_OnActorDetected__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_cppProject_OnActorDetected__DelegateSignature_Statics::_Script_cppProject_eventOnActorDetected_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_cppProject_OnActorDetected__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_cppProject_OnActorDetected__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_cppProject_OnActorDetected__DelegateSignature_Statics::_Script_cppProject_eventOnActorDetected_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_cppProject_OnActorDetected__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_cppProject_OnActorDetected__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnActorDetected_DelegateWrapper(const FMulticastScriptDelegate& OnActorDetected, AActor* DetectedActor)
{
	struct _Script_cppProject_eventOnActorDetected_Parms
	{
		AActor* DetectedActor;
	};
	_Script_cppProject_eventOnActorDetected_Parms Parms;
	Parms.DetectedActor=DetectedActor;
	OnActorDetected.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnActorDetected

// Begin Class UPerceptionComponent Function EnablePerception
struct Z_Construct_UFunction_UPerceptionComponent_EnablePerception_Statics
{
	struct PerceptionComponent_eventEnablePerception_Parms
	{
		bool bEnable;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Perception" },
		{ "ModuleRelativePath", "PerceptionComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bEnable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UPerceptionComponent_EnablePerception_Statics::NewProp_bEnable_SetBit(void* Obj)
{
	((PerceptionComponent_eventEnablePerception_Parms*)Obj)->bEnable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPerceptionComponent_EnablePerception_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PerceptionComponent_eventEnablePerception_Parms), &Z_Construct_UFunction_UPerceptionComponent_EnablePerception_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPerceptionComponent_EnablePerception_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerceptionComponent_EnablePerception_Statics::NewProp_bEnable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPerceptionComponent_EnablePerception_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPerceptionComponent_EnablePerception_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPerceptionComponent, nullptr, "EnablePerception", nullptr, nullptr, Z_Construct_UFunction_UPerceptionComponent_EnablePerception_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerceptionComponent_EnablePerception_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPerceptionComponent_EnablePerception_Statics::PerceptionComponent_eventEnablePerception_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPerceptionComponent_EnablePerception_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPerceptionComponent_EnablePerception_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPerceptionComponent_EnablePerception_Statics::PerceptionComponent_eventEnablePerception_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPerceptionComponent_EnablePerception()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPerceptionComponent_EnablePerception_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPerceptionComponent::execEnablePerception)
{
	P_GET_UBOOL(Z_Param_bEnable);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EnablePerception(Z_Param_bEnable);
	P_NATIVE_END;
}
// End Class UPerceptionComponent Function EnablePerception

// Begin Class UPerceptionComponent Function HandleActorDetected
struct Z_Construct_UFunction_UPerceptionComponent_HandleActorDetected_Statics
{
	struct PerceptionComponent_eventHandleActorDetected_Parms
	{
		AActor* DetectedActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PerceptionComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DetectedActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPerceptionComponent_HandleActorDetected_Statics::NewProp_DetectedActor = { "DetectedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PerceptionComponent_eventHandleActorDetected_Parms, DetectedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPerceptionComponent_HandleActorDetected_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerceptionComponent_HandleActorDetected_Statics::NewProp_DetectedActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPerceptionComponent_HandleActorDetected_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPerceptionComponent_HandleActorDetected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPerceptionComponent, nullptr, "HandleActorDetected", nullptr, nullptr, Z_Construct_UFunction_UPerceptionComponent_HandleActorDetected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerceptionComponent_HandleActorDetected_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPerceptionComponent_HandleActorDetected_Statics::PerceptionComponent_eventHandleActorDetected_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPerceptionComponent_HandleActorDetected_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPerceptionComponent_HandleActorDetected_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPerceptionComponent_HandleActorDetected_Statics::PerceptionComponent_eventHandleActorDetected_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPerceptionComponent_HandleActorDetected()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPerceptionComponent_HandleActorDetected_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPerceptionComponent::execHandleActorDetected)
{
	P_GET_OBJECT(AActor,Z_Param_DetectedActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleActorDetected(Z_Param_DetectedActor);
	P_NATIVE_END;
}
// End Class UPerceptionComponent Function HandleActorDetected

// Begin Class UPerceptionComponent Function UpdatePerception
struct Z_Construct_UFunction_UPerceptionComponent_UpdatePerception_Statics
{
	struct PerceptionComponent_eventUpdatePerception_Parms
	{
		float DeltaTime;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Perception" },
		{ "ModuleRelativePath", "PerceptionComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPerceptionComponent_UpdatePerception_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PerceptionComponent_eventUpdatePerception_Parms, DeltaTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPerceptionComponent_UpdatePerception_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerceptionComponent_UpdatePerception_Statics::NewProp_DeltaTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPerceptionComponent_UpdatePerception_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPerceptionComponent_UpdatePerception_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPerceptionComponent, nullptr, "UpdatePerception", nullptr, nullptr, Z_Construct_UFunction_UPerceptionComponent_UpdatePerception_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerceptionComponent_UpdatePerception_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPerceptionComponent_UpdatePerception_Statics::PerceptionComponent_eventUpdatePerception_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPerceptionComponent_UpdatePerception_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPerceptionComponent_UpdatePerception_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPerceptionComponent_UpdatePerception_Statics::PerceptionComponent_eventUpdatePerception_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPerceptionComponent_UpdatePerception()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPerceptionComponent_UpdatePerception_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPerceptionComponent::execUpdatePerception)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdatePerception(Z_Param_DeltaTime);
	P_NATIVE_END;
}
// End Class UPerceptionComponent Function UpdatePerception

// Begin Class UPerceptionComponent
void UPerceptionComponent::StaticRegisterNativesUPerceptionComponent()
{
	UClass* Class = UPerceptionComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "EnablePerception", &UPerceptionComponent::execEnablePerception },
		{ "HandleActorDetected", &UPerceptionComponent::execHandleActorDetected },
		{ "UpdatePerception", &UPerceptionComponent::execUpdatePerception },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPerceptionComponent);
UClass* Z_Construct_UClass_UPerceptionComponent_NoRegister()
{
	return UPerceptionComponent::StaticClass();
}
struct Z_Construct_UClass_UPerceptionComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "PerceptionComponent.h" },
		{ "ModuleRelativePath", "PerceptionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PerceptionInfo_MetaData[] = {
		{ "Category", "Perception" },
		{ "ModuleRelativePath", "PerceptionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnActorDetected_MetaData[] = {
		{ "Category", "Perception" },
		{ "ModuleRelativePath", "PerceptionComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PerceptionInfo;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnActorDetected;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPerceptionComponent_EnablePerception, "EnablePerception" }, // 1539891120
		{ &Z_Construct_UFunction_UPerceptionComponent_HandleActorDetected, "HandleActorDetected" }, // 2388588970
		{ &Z_Construct_UFunction_UPerceptionComponent_UpdatePerception, "UpdatePerception" }, // 3681267674
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPerceptionComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPerceptionComponent_Statics::NewProp_PerceptionInfo = { "PerceptionInfo", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPerceptionComponent, PerceptionInfo), Z_Construct_UScriptStruct_FPerceptionInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PerceptionInfo_MetaData), NewProp_PerceptionInfo_MetaData) }; // 2372532331
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPerceptionComponent_Statics::NewProp_OnActorDetected = { "OnActorDetected", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPerceptionComponent, OnActorDetected), Z_Construct_UDelegateFunction_cppProject_OnActorDetected__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnActorDetected_MetaData), NewProp_OnActorDetected_MetaData) }; // 267924689
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPerceptionComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPerceptionComponent_Statics::NewProp_PerceptionInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPerceptionComponent_Statics::NewProp_OnActorDetected,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPerceptionComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPerceptionComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_cppProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPerceptionComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPerceptionComponent_Statics::ClassParams = {
	&UPerceptionComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UPerceptionComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UPerceptionComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPerceptionComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UPerceptionComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPerceptionComponent()
{
	if (!Z_Registration_Info_UClass_UPerceptionComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPerceptionComponent.OuterSingleton, Z_Construct_UClass_UPerceptionComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPerceptionComponent.OuterSingleton;
}
template<> CPPPROJECT_API UClass* StaticClass<UPerceptionComponent>()
{
	return UPerceptionComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPerceptionComponent);
UPerceptionComponent::~UPerceptionComponent() {}
// End Class UPerceptionComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_cppProject_Source_cppProject_PerceptionComponent_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPerceptionInfo::StaticStruct, Z_Construct_UScriptStruct_FPerceptionInfo_Statics::NewStructOps, TEXT("PerceptionInfo"), &Z_Registration_Info_UScriptStruct_PerceptionInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPerceptionInfo), 2372532331U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPerceptionComponent, UPerceptionComponent::StaticClass, TEXT("UPerceptionComponent"), &Z_Registration_Info_UClass_UPerceptionComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPerceptionComponent), 258643431U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_cppProject_Source_cppProject_PerceptionComponent_h_3829263944(TEXT("/Script/cppProject"),
	Z_CompiledInDeferFile_FID_cppProject_Source_cppProject_PerceptionComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_cppProject_Source_cppProject_PerceptionComponent_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_cppProject_Source_cppProject_PerceptionComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_cppProject_Source_cppProject_PerceptionComponent_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
