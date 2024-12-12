// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Perception.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CPPPROJECT_Perception_generated_h
#error "Perception.generated.h already included, missing '#pragma once' in Perception.h"
#endif
#define CPPPROJECT_Perception_generated_h

#define FID_cppProject_Source_cppProject_Perception_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPerception(); \
	friend struct Z_Construct_UClass_UPerception_Statics; \
public: \
	DECLARE_CLASS(UPerception, UPerceptionComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/cppProject"), NO_API) \
	DECLARE_SERIALIZER(UPerception)


#define FID_cppProject_Source_cppProject_Perception_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPerception(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPerception(UPerception&&); \
	UPerception(const UPerception&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPerception); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPerception); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPerception) \
	NO_API virtual ~UPerception();


#define FID_cppProject_Source_cppProject_Perception_h_12_PROLOG
#define FID_cppProject_Source_cppProject_Perception_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_cppProject_Source_cppProject_Perception_h_15_INCLASS_NO_PURE_DECLS \
	FID_cppProject_Source_cppProject_Perception_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CPPPROJECT_API UClass* StaticClass<class UPerception>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_cppProject_Source_cppProject_Perception_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
