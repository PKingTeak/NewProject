// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NewProject/NewPlayer_C.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNewPlayer_C() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
NEWPROJECT_API UClass* Z_Construct_UClass_ANewPlayer_C();
NEWPROJECT_API UClass* Z_Construct_UClass_ANewPlayer_C_NoRegister();
UPackage* Z_Construct_UPackage__Script_NewProject();
// End Cross Module References

// Begin Class ANewPlayer_C
void ANewPlayer_C::StaticRegisterNativesANewPlayer_C()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANewPlayer_C);
UClass* Z_Construct_UClass_ANewPlayer_C_NoRegister()
{
	return ANewPlayer_C::StaticClass();
}
struct Z_Construct_UClass_ANewPlayer_C_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "NewPlayer_C.h" },
		{ "ModuleRelativePath", "NewPlayer_C.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpringArm_MetaData[] = {
		{ "Category", "NewPlayer_C" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "NewPlayer_C.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraComp_MetaData[] = {
		{ "Category", "NewPlayer_C" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "NewPlayer_C.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[] = {
		{ "ModuleRelativePath", "NewPlayer_C.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpringArm;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Speed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANewPlayer_C>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANewPlayer_C_Statics::NewProp_SpringArm = { "SpringArm", nullptr, (EPropertyFlags)0x002008000009000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANewPlayer_C, SpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpringArm_MetaData), NewProp_SpringArm_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANewPlayer_C_Statics::NewProp_CameraComp = { "CameraComp", nullptr, (EPropertyFlags)0x002008000009000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANewPlayer_C, CameraComp), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraComp_MetaData), NewProp_CameraComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ANewPlayer_C_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANewPlayer_C, Speed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Speed_MetaData), NewProp_Speed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANewPlayer_C_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANewPlayer_C_Statics::NewProp_SpringArm,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANewPlayer_C_Statics::NewProp_CameraComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANewPlayer_C_Statics::NewProp_Speed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANewPlayer_C_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ANewPlayer_C_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_NewProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANewPlayer_C_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ANewPlayer_C_Statics::ClassParams = {
	&ANewPlayer_C::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ANewPlayer_C_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ANewPlayer_C_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANewPlayer_C_Statics::Class_MetaDataParams), Z_Construct_UClass_ANewPlayer_C_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ANewPlayer_C()
{
	if (!Z_Registration_Info_UClass_ANewPlayer_C.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANewPlayer_C.OuterSingleton, Z_Construct_UClass_ANewPlayer_C_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ANewPlayer_C.OuterSingleton;
}
template<> NEWPROJECT_API UClass* StaticClass<ANewPlayer_C>()
{
	return ANewPlayer_C::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ANewPlayer_C);
ANewPlayer_C::~ANewPlayer_C() {}
// End Class ANewPlayer_C

// Begin Registration
struct Z_CompiledInDeferFile_FID_code_NewProject_NewProject_Source_NewProject_NewPlayer_C_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ANewPlayer_C, ANewPlayer_C::StaticClass, TEXT("ANewPlayer_C"), &Z_Registration_Info_UClass_ANewPlayer_C, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANewPlayer_C), 229475998U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_code_NewProject_NewProject_Source_NewProject_NewPlayer_C_h_2338602628(TEXT("/Script/NewProject"),
	Z_CompiledInDeferFile_FID_code_NewProject_NewProject_Source_NewProject_NewPlayer_C_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_code_NewProject_NewProject_Source_NewProject_NewPlayer_C_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
