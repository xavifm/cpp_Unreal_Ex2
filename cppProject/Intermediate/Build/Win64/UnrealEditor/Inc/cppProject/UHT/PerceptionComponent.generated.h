// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PerceptionComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef CPPPROJECT_PerceptionComponent_generated_h
#error "PerceptionComponent.generated.h already included, missing '#pragma once' in PerceptionComponent.h"
#endif
#define CPPPROJECT_PerceptionComponent_generated_h

#define FID_cppProject_Source_cppProject_PerceptionComponent_h_11_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPerceptionInfo_Statics; \
	CPPPROJECT_API static class UScriptStruct* StaticStruct();


template<> CPPPROJECT_API UScriptStruct* StaticStruct<struct FPerceptionInfo>();

#define FID_cppProject_Source_cppProject_PerceptionComponent_h_25_DELEGATE \
CPPPROJECT_API void FOnActorDetected_DelegateWrapper(const FMulticastScriptDelegate& OnActorDetected, AActor* DetectedActor);


#define FID_cppProject_Source_cppProject_PerceptionComponent_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleActorDetected); \
	DECLARE_FUNCTION(execUpdatePerception); \
	DECLARE_FUNCTION(execEnablePerception);


#define FID_cppProject_Source_cppProject_PerceptionComponent_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPerceptionComponent(); \
	friend struct Z_Construct_UClass_UPerceptionComponent_Statics; \
public: \
	DECLARE_CLASS(UPerceptionComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/cppProject"), NO_API) \
	DECLARE_SERIALIZER(UPerceptionComponent)


#define FID_cppProject_Source_cppProject_PerceptionComponent_h_30_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPerceptionComponent(UPerceptionComponent&&); \
	UPerceptionComponent(const UPerceptionComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPerceptionComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPerceptionComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPerceptionComponent) \
	NO_API virtual ~UPerceptionComponent();


#define FID_cppProject_Source_cppProject_PerceptionComponent_h_27_PROLOG
#define FID_cppProject_Source_cppProject_PerceptionComponent_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_cppProject_Source_cppProject_PerceptionComponent_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_cppProject_Source_cppProject_PerceptionComponent_h_30_INCLASS_NO_PURE_DECLS \
	FID_cppProject_Source_cppProject_PerceptionComponent_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CPPPROJECT_API UClass* StaticClass<class UPerceptionComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_cppProject_Source_cppProject_PerceptionComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
