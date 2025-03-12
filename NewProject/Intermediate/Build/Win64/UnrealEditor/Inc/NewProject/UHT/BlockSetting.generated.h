// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BlockSetting.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef NEWPROJECT_BlockSetting_generated_h
#error "BlockSetting.generated.h already included, missing '#pragma once' in BlockSetting.h"
#endif
#define NEWPROJECT_BlockSetting_generated_h

#define FID_NewProject_NewProject_Source_NewProject_BlockSetting_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetBlock); \
	DECLARE_FUNCTION(execGetIndex); \
	DECLARE_FUNCTION(execSettingBlock); \
	DECLARE_FUNCTION(execCreateBlock);


#define FID_NewProject_NewProject_Source_NewProject_BlockSetting_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABlockSetting(); \
	friend struct Z_Construct_UClass_ABlockSetting_Statics; \
public: \
	DECLARE_CLASS(ABlockSetting, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NewProject"), NO_API) \
	DECLARE_SERIALIZER(ABlockSetting)


#define FID_NewProject_NewProject_Source_NewProject_BlockSetting_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ABlockSetting(ABlockSetting&&); \
	ABlockSetting(const ABlockSetting&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABlockSetting); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABlockSetting); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABlockSetting) \
	NO_API virtual ~ABlockSetting();


#define FID_NewProject_NewProject_Source_NewProject_BlockSetting_h_10_PROLOG
#define FID_NewProject_NewProject_Source_NewProject_BlockSetting_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_NewProject_NewProject_Source_NewProject_BlockSetting_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_NewProject_NewProject_Source_NewProject_BlockSetting_h_13_INCLASS_NO_PURE_DECLS \
	FID_NewProject_NewProject_Source_NewProject_BlockSetting_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NEWPROJECT_API UClass* StaticClass<class ABlockSetting>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_NewProject_NewProject_Source_NewProject_BlockSetting_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
