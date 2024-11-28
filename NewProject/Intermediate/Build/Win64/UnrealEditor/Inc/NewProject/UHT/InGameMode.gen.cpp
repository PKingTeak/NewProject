// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NewProject/InGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameMode();
NEWPROJECT_API UClass* Z_Construct_UClass_AInGameMode();
NEWPROJECT_API UClass* Z_Construct_UClass_AInGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_NewProject();
// End Cross Module References

// Begin Class AInGameMode
void AInGameMode::StaticRegisterNativesAInGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AInGameMode);
UClass* Z_Construct_UClass_AInGameMode_NoRegister()
{
	return AInGameMode::StaticClass();
}
struct Z_Construct_UClass_AInGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "InGameMode.h" },
		{ "ModuleRelativePath", "InGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AInGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AInGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameMode,
	(UObject* (*)())Z_Construct_UPackage__Script_NewProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AInGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AInGameMode_Statics::ClassParams = {
	&AInGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AInGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AInGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AInGameMode()
{
	if (!Z_Registration_Info_UClass_AInGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AInGameMode.OuterSingleton, Z_Construct_UClass_AInGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AInGameMode.OuterSingleton;
}
template<> NEWPROJECT_API UClass* StaticClass<AInGameMode>()
{
	return AInGameMode::StaticClass();
}
AInGameMode::AInGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AInGameMode);
AInGameMode::~AInGameMode() {}
// End Class AInGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_code_NewProject_NewProject_Source_NewProject_InGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AInGameMode, AInGameMode::StaticClass, TEXT("AInGameMode"), &Z_Registration_Info_UClass_AInGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AInGameMode), 3637396629U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_code_NewProject_NewProject_Source_NewProject_InGameMode_h_2453914480(TEXT("/Script/NewProject"),
	Z_CompiledInDeferFile_FID_code_NewProject_NewProject_Source_NewProject_InGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_code_NewProject_NewProject_Source_NewProject_InGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
