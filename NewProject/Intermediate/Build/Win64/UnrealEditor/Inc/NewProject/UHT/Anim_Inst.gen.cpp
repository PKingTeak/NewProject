// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NewProject/Anim_Inst.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnim_Inst() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
NEWPROJECT_API UClass* Z_Construct_UClass_UAnim_Inst();
NEWPROJECT_API UClass* Z_Construct_UClass_UAnim_Inst_NoRegister();
NEWPROJECT_API UEnum* Z_Construct_UEnum_NewProject_EPlayer_State();
UPackage* Z_Construct_UPackage__Script_NewProject();
// End Cross Module References

// Begin Enum EPlayer_State
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPlayer_State;
static UEnum* EPlayer_State_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPlayer_State.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPlayer_State.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_NewProject_EPlayer_State, (UObject*)Z_Construct_UPackage__Script_NewProject(), TEXT("EPlayer_State"));
	}
	return Z_Registration_Info_UEnum_EPlayer_State.OuterSingleton;
}
template<> NEWPROJECT_API UEnum* StaticEnum<EPlayer_State>()
{
	return EPlayer_State_StaticEnum();
}
struct Z_Construct_UEnum_NewProject_EPlayer_State_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Attack.Comment", "/**\n *\n */" },
		{ "Attack.Name", "EPlayer_State::Attack" },
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "IDLE.Comment", "/**\n *\n */" },
		{ "IDLE.Name", "EPlayer_State::IDLE" },
		{ "ModuleRelativePath", "Anim_Inst.h" },
		{ "Move.Comment", "/**\n *\n */" },
		{ "Move.Name", "EPlayer_State::Move" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPlayer_State::IDLE", (int64)EPlayer_State::IDLE },
		{ "EPlayer_State::Move", (int64)EPlayer_State::Move },
		{ "EPlayer_State::Attack", (int64)EPlayer_State::Attack },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_NewProject_EPlayer_State_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_NewProject,
	nullptr,
	"EPlayer_State",
	"EPlayer_State",
	Z_Construct_UEnum_NewProject_EPlayer_State_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_NewProject_EPlayer_State_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_NewProject_EPlayer_State_Statics::Enum_MetaDataParams), Z_Construct_UEnum_NewProject_EPlayer_State_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_NewProject_EPlayer_State()
{
	if (!Z_Registration_Info_UEnum_EPlayer_State.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPlayer_State.InnerSingleton, Z_Construct_UEnum_NewProject_EPlayer_State_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPlayer_State.InnerSingleton;
}
// End Enum EPlayer_State

// Begin Class UAnim_Inst
void UAnim_Inst::StaticRegisterNativesUAnim_Inst()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnim_Inst);
UClass* Z_Construct_UClass_UAnim_Inst_NoRegister()
{
	return UAnim_Inst::StaticClass();
}
struct Z_Construct_UClass_UAnim_Inst_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "Anim_Inst.h" },
		{ "ModuleRelativePath", "Anim_Inst.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnim_Inst>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAnim_Inst_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_NewProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnim_Inst_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnim_Inst_Statics::ClassParams = {
	&UAnim_Inst::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnim_Inst_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnim_Inst_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAnim_Inst()
{
	if (!Z_Registration_Info_UClass_UAnim_Inst.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnim_Inst.OuterSingleton, Z_Construct_UClass_UAnim_Inst_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAnim_Inst.OuterSingleton;
}
template<> NEWPROJECT_API UClass* StaticClass<UAnim_Inst>()
{
	return UAnim_Inst::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAnim_Inst);
UAnim_Inst::~UAnim_Inst() {}
// End Class UAnim_Inst

// Begin Registration
struct Z_CompiledInDeferFile_FID_NewProject_NewProject_Source_NewProject_Anim_Inst_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPlayer_State_StaticEnum, TEXT("EPlayer_State"), &Z_Registration_Info_UEnum_EPlayer_State, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 887459786U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAnim_Inst, UAnim_Inst::StaticClass, TEXT("UAnim_Inst"), &Z_Registration_Info_UClass_UAnim_Inst, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnim_Inst), 423012740U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NewProject_NewProject_Source_NewProject_Anim_Inst_h_3172780836(TEXT("/Script/NewProject"),
	Z_CompiledInDeferFile_FID_NewProject_NewProject_Source_NewProject_Anim_Inst_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NewProject_NewProject_Source_NewProject_Anim_Inst_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_NewProject_NewProject_Source_NewProject_Anim_Inst_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NewProject_NewProject_Source_NewProject_Anim_Inst_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
