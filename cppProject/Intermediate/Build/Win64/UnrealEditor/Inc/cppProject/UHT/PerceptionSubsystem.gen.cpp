// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "cppProject/PerceptionSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePerceptionSubsystem() {}

// Begin Cross Module References
CPPPROJECT_API UClass* Z_Construct_UClass_UPerceptionComponent_NoRegister();
CPPPROJECT_API UClass* Z_Construct_UClass_UPerceptionSubsystem();
CPPPROJECT_API UClass* Z_Construct_UClass_UPerceptionSubsystem_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UWorldSubsystem();
UPackage* Z_Construct_UPackage__Script_cppProject();
// End Cross Module References

// Begin Class UPerceptionSubsystem Function EnablePerceptionForActors
struct Z_Construct_UFunction_UPerceptionSubsystem_EnablePerceptionForActors_Statics
{
	struct PerceptionSubsystem_eventEnablePerceptionForActors_Parms
	{
		bool bEnable;
		TArray<AActor*> Actors;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Perception" },
		{ "ModuleRelativePath", "PerceptionSubsystem.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bEnable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnable;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Actors;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UPerceptionSubsystem_EnablePerceptionForActors_Statics::NewProp_bEnable_SetBit(void* Obj)
{
	((PerceptionSubsystem_eventEnablePerceptionForActors_Parms*)Obj)->bEnable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPerceptionSubsystem_EnablePerceptionForActors_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PerceptionSubsystem_eventEnablePerceptionForActors_Parms), &Z_Construct_UFunction_UPerceptionSubsystem_EnablePerceptionForActors_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPerceptionSubsystem_EnablePerceptionForActors_Statics::NewProp_Actors_Inner = { "Actors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPerceptionSubsystem_EnablePerceptionForActors_Statics::NewProp_Actors = { "Actors", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PerceptionSubsystem_eventEnablePerceptionForActors_Parms, Actors), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPerceptionSubsystem_EnablePerceptionForActors_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerceptionSubsystem_EnablePerceptionForActors_Statics::NewProp_bEnable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerceptionSubsystem_EnablePerceptionForActors_Statics::NewProp_Actors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerceptionSubsystem_EnablePerceptionForActors_Statics::NewProp_Actors,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPerceptionSubsystem_EnablePerceptionForActors_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPerceptionSubsystem_EnablePerceptionForActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPerceptionSubsystem, nullptr, "EnablePerceptionForActors", nullptr, nullptr, Z_Construct_UFunction_UPerceptionSubsystem_EnablePerceptionForActors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerceptionSubsystem_EnablePerceptionForActors_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPerceptionSubsystem_EnablePerceptionForActors_Statics::PerceptionSubsystem_eventEnablePerceptionForActors_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPerceptionSubsystem_EnablePerceptionForActors_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPerceptionSubsystem_EnablePerceptionForActors_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPerceptionSubsystem_EnablePerceptionForActors_Statics::PerceptionSubsystem_eventEnablePerceptionForActors_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPerceptionSubsystem_EnablePerceptionForActors()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPerceptionSubsystem_EnablePerceptionForActors_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPerceptionSubsystem::execEnablePerceptionForActors)
{
	P_GET_UBOOL(Z_Param_bEnable);
	P_GET_TARRAY(AActor*,Z_Param_Actors);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EnablePerceptionForActors(Z_Param_bEnable,Z_Param_Actors);
	P_NATIVE_END;
}
// End Class UPerceptionSubsystem Function EnablePerceptionForActors

// Begin Class UPerceptionSubsystem Function RegisterComponent
struct Z_Construct_UFunction_UPerceptionSubsystem_RegisterComponent_Statics
{
	struct PerceptionSubsystem_eventRegisterComponent_Parms
	{
		UPerceptionComponent* PerceptionComponent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Perception" },
		{ "ModuleRelativePath", "PerceptionSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PerceptionComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PerceptionComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPerceptionSubsystem_RegisterComponent_Statics::NewProp_PerceptionComponent = { "PerceptionComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PerceptionSubsystem_eventRegisterComponent_Parms, PerceptionComponent), Z_Construct_UClass_UPerceptionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PerceptionComponent_MetaData), NewProp_PerceptionComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPerceptionSubsystem_RegisterComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerceptionSubsystem_RegisterComponent_Statics::NewProp_PerceptionComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPerceptionSubsystem_RegisterComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPerceptionSubsystem_RegisterComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPerceptionSubsystem, nullptr, "RegisterComponent", nullptr, nullptr, Z_Construct_UFunction_UPerceptionSubsystem_RegisterComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerceptionSubsystem_RegisterComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPerceptionSubsystem_RegisterComponent_Statics::PerceptionSubsystem_eventRegisterComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPerceptionSubsystem_RegisterComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPerceptionSubsystem_RegisterComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPerceptionSubsystem_RegisterComponent_Statics::PerceptionSubsystem_eventRegisterComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPerceptionSubsystem_RegisterComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPerceptionSubsystem_RegisterComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPerceptionSubsystem::execRegisterComponent)
{
	P_GET_OBJECT(UPerceptionComponent,Z_Param_PerceptionComponent);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RegisterComponent(Z_Param_PerceptionComponent);
	P_NATIVE_END;
}
// End Class UPerceptionSubsystem Function RegisterComponent

// Begin Class UPerceptionSubsystem Function UnregisterComponent
struct Z_Construct_UFunction_UPerceptionSubsystem_UnregisterComponent_Statics
{
	struct PerceptionSubsystem_eventUnregisterComponent_Parms
	{
		UPerceptionComponent* PerceptionComponent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Perception" },
		{ "ModuleRelativePath", "PerceptionSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PerceptionComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PerceptionComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPerceptionSubsystem_UnregisterComponent_Statics::NewProp_PerceptionComponent = { "PerceptionComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PerceptionSubsystem_eventUnregisterComponent_Parms, PerceptionComponent), Z_Construct_UClass_UPerceptionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PerceptionComponent_MetaData), NewProp_PerceptionComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPerceptionSubsystem_UnregisterComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerceptionSubsystem_UnregisterComponent_Statics::NewProp_PerceptionComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPerceptionSubsystem_UnregisterComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPerceptionSubsystem_UnregisterComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPerceptionSubsystem, nullptr, "UnregisterComponent", nullptr, nullptr, Z_Construct_UFunction_UPerceptionSubsystem_UnregisterComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerceptionSubsystem_UnregisterComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPerceptionSubsystem_UnregisterComponent_Statics::PerceptionSubsystem_eventUnregisterComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPerceptionSubsystem_UnregisterComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPerceptionSubsystem_UnregisterComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPerceptionSubsystem_UnregisterComponent_Statics::PerceptionSubsystem_eventUnregisterComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPerceptionSubsystem_UnregisterComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPerceptionSubsystem_UnregisterComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPerceptionSubsystem::execUnregisterComponent)
{
	P_GET_OBJECT(UPerceptionComponent,Z_Param_PerceptionComponent);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UnregisterComponent(Z_Param_PerceptionComponent);
	P_NATIVE_END;
}
// End Class UPerceptionSubsystem Function UnregisterComponent

// Begin Class UPerceptionSubsystem
void UPerceptionSubsystem::StaticRegisterNativesUPerceptionSubsystem()
{
	UClass* Class = UPerceptionSubsystem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "EnablePerceptionForActors", &UPerceptionSubsystem::execEnablePerceptionForActors },
		{ "RegisterComponent", &UPerceptionSubsystem::execRegisterComponent },
		{ "UnregisterComponent", &UPerceptionSubsystem::execUnregisterComponent },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPerceptionSubsystem);
UClass* Z_Construct_UClass_UPerceptionSubsystem_NoRegister()
{
	return UPerceptionSubsystem::StaticClass();
}
struct Z_Construct_UClass_UPerceptionSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "PerceptionSubsystem.h" },
		{ "ModuleRelativePath", "PerceptionSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RegisteredComponents_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PerceptionSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RegisteredComponents_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RegisteredComponents;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPerceptionSubsystem_EnablePerceptionForActors, "EnablePerceptionForActors" }, // 2745816160
		{ &Z_Construct_UFunction_UPerceptionSubsystem_RegisterComponent, "RegisterComponent" }, // 1581842504
		{ &Z_Construct_UFunction_UPerceptionSubsystem_UnregisterComponent, "UnregisterComponent" }, // 3303455520
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPerceptionSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPerceptionSubsystem_Statics::NewProp_RegisteredComponents_Inner = { "RegisteredComponents", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPerceptionComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPerceptionSubsystem_Statics::NewProp_RegisteredComponents = { "RegisteredComponents", nullptr, (EPropertyFlags)0x0010008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPerceptionSubsystem, RegisteredComponents), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RegisteredComponents_MetaData), NewProp_RegisteredComponents_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPerceptionSubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPerceptionSubsystem_Statics::NewProp_RegisteredComponents_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPerceptionSubsystem_Statics::NewProp_RegisteredComponents,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPerceptionSubsystem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPerceptionSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWorldSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_cppProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPerceptionSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPerceptionSubsystem_Statics::ClassParams = {
	&UPerceptionSubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UPerceptionSubsystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UPerceptionSubsystem_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPerceptionSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UPerceptionSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPerceptionSubsystem()
{
	if (!Z_Registration_Info_UClass_UPerceptionSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPerceptionSubsystem.OuterSingleton, Z_Construct_UClass_UPerceptionSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPerceptionSubsystem.OuterSingleton;
}
template<> CPPPROJECT_API UClass* StaticClass<UPerceptionSubsystem>()
{
	return UPerceptionSubsystem::StaticClass();
}
UPerceptionSubsystem::UPerceptionSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPerceptionSubsystem);
UPerceptionSubsystem::~UPerceptionSubsystem() {}
// End Class UPerceptionSubsystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_cppProject_Source_cppProject_PerceptionSubsystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPerceptionSubsystem, UPerceptionSubsystem::StaticClass, TEXT("UPerceptionSubsystem"), &Z_Registration_Info_UClass_UPerceptionSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPerceptionSubsystem), 3246068653U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_cppProject_Source_cppProject_PerceptionSubsystem_h_1437101980(TEXT("/Script/cppProject"),
	Z_CompiledInDeferFile_FID_cppProject_Source_cppProject_PerceptionSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_cppProject_Source_cppProject_PerceptionSubsystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
