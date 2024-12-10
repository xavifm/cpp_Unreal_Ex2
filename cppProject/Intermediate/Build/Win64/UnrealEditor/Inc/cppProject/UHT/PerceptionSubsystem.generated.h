// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PerceptionSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPerceptionComponent;
#ifdef CPPPROJECT_PerceptionSubsystem_generated_h
#error "PerceptionSubsystem.generated.h already included, missing '#pragma once' in PerceptionSubsystem.h"
#endif
#define CPPPROJECT_PerceptionSubsystem_generated_h

#define FID_cppProject_Source_cppProject_PerceptionSubsystem_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execEnablePerceptionForActors); \
	DECLARE_FUNCTION(execUnregisterComponent); \
	DECLARE_FUNCTION(execRegisterComponent);


#define FID_cppProject_Source_cppProject_PerceptionSubsystem_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPerceptionSubsystem(); \
	friend struct Z_Construct_UClass_UPerceptionSubsystem_Statics; \
public: \
	DECLARE_CLASS(UPerceptionSubsystem, UWorldSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/cppProject"), NO_API) \
	DECLARE_SERIALIZER(UPerceptionSubsystem)


#define FID_cppProject_Source_cppProject_PerceptionSubsystem_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPerceptionSubsystem(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPerceptionSubsystem(UPerceptionSubsystem&&); \
	UPerceptionSubsystem(const UPerceptionSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPerceptionSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPerceptionSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPerceptionSubsystem) \
	NO_API virtual ~UPerceptionSubsystem();


#define FID_cppProject_Source_cppProject_PerceptionSubsystem_h_12_PROLOG
#define FID_cppProject_Source_cppProject_PerceptionSubsystem_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_cppProject_Source_cppProject_PerceptionSubsystem_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_cppProject_Source_cppProject_PerceptionSubsystem_h_15_INCLASS_NO_PURE_DECLS \
	FID_cppProject_Source_cppProject_PerceptionSubsystem_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CPPPROJECT_API UClass* StaticClass<class UPerceptionSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_cppProject_Source_cppProject_PerceptionSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
