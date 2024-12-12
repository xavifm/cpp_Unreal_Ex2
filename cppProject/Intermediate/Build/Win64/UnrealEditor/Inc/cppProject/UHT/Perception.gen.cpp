// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "cppProject/Perception.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePerception() {}

// Begin Cross Module References
CPPPROJECT_API UClass* Z_Construct_UClass_UPerception();
CPPPROJECT_API UClass* Z_Construct_UClass_UPerception_NoRegister();
CPPPROJECT_API UClass* Z_Construct_UClass_UPerceptionComponent();
UPackage* Z_Construct_UPackage__Script_cppProject();
// End Cross Module References

// Begin Class UPerception
void UPerception::StaticRegisterNativesUPerception()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPerception);
UClass* Z_Construct_UClass_UPerception_NoRegister()
{
	return UPerception::StaticClass();
}
struct Z_Construct_UClass_UPerception_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Perception.h" },
		{ "ModuleRelativePath", "Perception.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPerception>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPerception_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPerceptionComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_cppProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPerception_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPerception_Statics::ClassParams = {
	&UPerception::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPerception_Statics::Class_MetaDataParams), Z_Construct_UClass_UPerception_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPerception()
{
	if (!Z_Registration_Info_UClass_UPerception.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPerception.OuterSingleton, Z_Construct_UClass_UPerception_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPerception.OuterSingleton;
}
template<> CPPPROJECT_API UClass* StaticClass<UPerception>()
{
	return UPerception::StaticClass();
}
UPerception::UPerception() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPerception);
UPerception::~UPerception() {}
// End Class UPerception

// Begin Registration
struct Z_CompiledInDeferFile_FID_cppProject_Source_cppProject_Perception_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPerception, UPerception::StaticClass, TEXT("UPerception"), &Z_Registration_Info_UClass_UPerception, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPerception), 2999920267U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_cppProject_Source_cppProject_Perception_h_3379479053(TEXT("/Script/cppProject"),
	Z_CompiledInDeferFile_FID_cppProject_Source_cppProject_Perception_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_cppProject_Source_cppProject_Perception_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
