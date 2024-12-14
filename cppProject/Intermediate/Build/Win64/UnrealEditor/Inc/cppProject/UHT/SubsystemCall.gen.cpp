// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "cppProject/SubsystemCall.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSubsystemCall() {}

// Begin Cross Module References
CPPPROJECT_API UClass* Z_Construct_UClass_ASubsystemCall();
CPPPROJECT_API UClass* Z_Construct_UClass_ASubsystemCall_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_cppProject();
// End Cross Module References

// Begin Class ASubsystemCall
void ASubsystemCall::StaticRegisterNativesASubsystemCall()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASubsystemCall);
UClass* Z_Construct_UClass_ASubsystemCall_NoRegister()
{
	return ASubsystemCall::StaticClass();
}
struct Z_Construct_UClass_ASubsystemCall_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SubsystemCall.h" },
		{ "ModuleRelativePath", "SubsystemCall.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnablePerception_MetaData[] = {
		{ "Category", "Perception" },
		{ "ModuleRelativePath", "SubsystemCall.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisablePerception_MetaData[] = {
		{ "Category", "Perception" },
		{ "ModuleRelativePath", "SubsystemCall.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UpdateListToEnableOrDisable_MetaData[] = {
		{ "Category", "Perception" },
		{ "ModuleRelativePath", "SubsystemCall.h" },
	};
#endif // WITH_METADATA
	static void NewProp_EnablePerception_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_EnablePerception;
	static void NewProp_DisablePerception_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_DisablePerception;
	static void NewProp_UpdateListToEnableOrDisable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_UpdateListToEnableOrDisable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASubsystemCall>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_ASubsystemCall_Statics::NewProp_EnablePerception_SetBit(void* Obj)
{
	((ASubsystemCall*)Obj)->EnablePerception = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASubsystemCall_Statics::NewProp_EnablePerception = { "EnablePerception", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ASubsystemCall), &Z_Construct_UClass_ASubsystemCall_Statics::NewProp_EnablePerception_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnablePerception_MetaData), NewProp_EnablePerception_MetaData) };
void Z_Construct_UClass_ASubsystemCall_Statics::NewProp_DisablePerception_SetBit(void* Obj)
{
	((ASubsystemCall*)Obj)->DisablePerception = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASubsystemCall_Statics::NewProp_DisablePerception = { "DisablePerception", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ASubsystemCall), &Z_Construct_UClass_ASubsystemCall_Statics::NewProp_DisablePerception_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisablePerception_MetaData), NewProp_DisablePerception_MetaData) };
void Z_Construct_UClass_ASubsystemCall_Statics::NewProp_UpdateListToEnableOrDisable_SetBit(void* Obj)
{
	((ASubsystemCall*)Obj)->UpdateListToEnableOrDisable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASubsystemCall_Statics::NewProp_UpdateListToEnableOrDisable = { "UpdateListToEnableOrDisable", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ASubsystemCall), &Z_Construct_UClass_ASubsystemCall_Statics::NewProp_UpdateListToEnableOrDisable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UpdateListToEnableOrDisable_MetaData), NewProp_UpdateListToEnableOrDisable_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASubsystemCall_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASubsystemCall_Statics::NewProp_EnablePerception,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASubsystemCall_Statics::NewProp_DisablePerception,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASubsystemCall_Statics::NewProp_UpdateListToEnableOrDisable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASubsystemCall_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASubsystemCall_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_cppProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASubsystemCall_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASubsystemCall_Statics::ClassParams = {
	&ASubsystemCall::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ASubsystemCall_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ASubsystemCall_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASubsystemCall_Statics::Class_MetaDataParams), Z_Construct_UClass_ASubsystemCall_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASubsystemCall()
{
	if (!Z_Registration_Info_UClass_ASubsystemCall.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASubsystemCall.OuterSingleton, Z_Construct_UClass_ASubsystemCall_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASubsystemCall.OuterSingleton;
}
template<> CPPPROJECT_API UClass* StaticClass<ASubsystemCall>()
{
	return ASubsystemCall::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASubsystemCall);
ASubsystemCall::~ASubsystemCall() {}
// End Class ASubsystemCall

// Begin Registration
struct Z_CompiledInDeferFile_FID_cppProject_Source_cppProject_SubsystemCall_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASubsystemCall, ASubsystemCall::StaticClass, TEXT("ASubsystemCall"), &Z_Registration_Info_UClass_ASubsystemCall, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASubsystemCall), 1495073510U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_cppProject_Source_cppProject_SubsystemCall_h_3701762539(TEXT("/Script/cppProject"),
	Z_CompiledInDeferFile_FID_cppProject_Source_cppProject_SubsystemCall_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_cppProject_Source_cppProject_SubsystemCall_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
