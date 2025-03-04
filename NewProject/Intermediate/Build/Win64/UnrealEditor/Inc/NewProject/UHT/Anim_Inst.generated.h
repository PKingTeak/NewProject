// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Anim_Inst.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NEWPROJECT_Anim_Inst_generated_h
#error "Anim_Inst.generated.h already included, missing '#pragma once' in Anim_Inst.h"
#endif
#define NEWPROJECT_Anim_Inst_generated_h

#define FID_NewProject_NewProject_Source_NewProject_Anim_Inst_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnim_Inst(); \
	friend struct Z_Construct_UClass_UAnim_Inst_Statics; \
public: \
	DECLARE_CLASS(UAnim_Inst, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/NewProject"), NO_API) \
	DECLARE_SERIALIZER(UAnim_Inst)


#define FID_NewProject_NewProject_Source_NewProject_Anim_Inst_h_26_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAnim_Inst(UAnim_Inst&&); \
	UAnim_Inst(const UAnim_Inst&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnim_Inst); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnim_Inst); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAnim_Inst) \
	NO_API virtual ~UAnim_Inst();


#define FID_NewProject_NewProject_Source_NewProject_Anim_Inst_h_23_PROLOG
#define FID_NewProject_NewProject_Source_NewProject_Anim_Inst_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_NewProject_NewProject_Source_NewProject_Anim_Inst_h_26_INCLASS_NO_PURE_DECLS \
	FID_NewProject_NewProject_Source_NewProject_Anim_Inst_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NEWPROJECT_API UClass* StaticClass<class UAnim_Inst>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_NewProject_NewProject_Source_NewProject_Anim_Inst_h


#define FOREACH_ENUM_EPLAYER_STATE(op) \
	op(EPlayer_State::IDLE) \
	op(EPlayer_State::Move) \
	op(EPlayer_State::Attack) 

enum class EPlayer_State : uint8;
template<> struct TIsUEnumClass<EPlayer_State> { enum { Value = true }; };
template<> NEWPROJECT_API UEnum* StaticEnum<EPlayer_State>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
