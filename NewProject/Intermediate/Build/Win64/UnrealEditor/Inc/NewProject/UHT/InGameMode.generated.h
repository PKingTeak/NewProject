// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InGameMode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NEWPROJECT_InGameMode_generated_h
#error "InGameMode.generated.h already included, missing '#pragma once' in InGameMode.h"
#endif
#define NEWPROJECT_InGameMode_generated_h

#define FID_NewProject_NewProject_Source_NewProject_InGameMode_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAInGameMode(); \
	friend struct Z_Construct_UClass_AInGameMode_Statics; \
public: \
	DECLARE_CLASS(AInGameMode, AGameMode, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/NewProject"), NO_API) \
	DECLARE_SERIALIZER(AInGameMode)


#define FID_NewProject_NewProject_Source_NewProject_InGameMode_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AInGameMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AInGameMode(AInGameMode&&); \
	AInGameMode(const AInGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AInGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AInGameMode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AInGameMode) \
	NO_API virtual ~AInGameMode();


#define FID_NewProject_NewProject_Source_NewProject_InGameMode_h_12_PROLOG
#define FID_NewProject_NewProject_Source_NewProject_InGameMode_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_NewProject_NewProject_Source_NewProject_InGameMode_h_15_INCLASS_NO_PURE_DECLS \
	FID_NewProject_NewProject_Source_NewProject_InGameMode_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NEWPROJECT_API UClass* StaticClass<class AInGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_NewProject_NewProject_Source_NewProject_InGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
