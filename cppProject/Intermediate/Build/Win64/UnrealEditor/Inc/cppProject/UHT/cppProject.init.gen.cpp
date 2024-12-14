// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodecppProject_init() {}
	CPPPROJECT_API UFunction* Z_Construct_UDelegateFunction_cppProject_OnActorDetected__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_cppProject;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_cppProject()
	{
		if (!Z_Registration_Info_UPackage__Script_cppProject.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_cppProject_OnActorDetected__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/cppProject",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x76F399B5,
				0x1C742DBB,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_cppProject.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_cppProject.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_cppProject(Z_Construct_UPackage__Script_cppProject, TEXT("/Script/cppProject"), Z_Registration_Info_UPackage__Script_cppProject, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x76F399B5, 0x1C742DBB));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
