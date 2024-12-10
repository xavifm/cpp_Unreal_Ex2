// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Teleporter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef CPPPROJECT_Teleporter_generated_h
#error "Teleporter.generated.h already included, missing '#pragma once' in Teleporter.h"
#endif
#define CPPPROJECT_Teleporter_generated_h

#define FID_cppProject_Source_cppProject_Teleporter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define FID_cppProject_Source_cppProject_Teleporter_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATeleporter(); \
	friend struct Z_Construct_UClass_ATeleporter_Statics; \
public: \
	DECLARE_CLASS(ATeleporter, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/cppProject"), NO_API) \
	DECLARE_SERIALIZER(ATeleporter)


#define FID_cppProject_Source_cppProject_Teleporter_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ATeleporter(ATeleporter&&); \
	ATeleporter(const ATeleporter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATeleporter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATeleporter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATeleporter) \
	NO_API virtual ~ATeleporter();


#define FID_cppProject_Source_cppProject_Teleporter_h_11_PROLOG
#define FID_cppProject_Source_cppProject_Teleporter_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_cppProject_Source_cppProject_Teleporter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_cppProject_Source_cppProject_Teleporter_h_14_INCLASS_NO_PURE_DECLS \
	FID_cppProject_Source_cppProject_Teleporter_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CPPPROJECT_API UClass* StaticClass<class ATeleporter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_cppProject_Source_cppProject_Teleporter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
