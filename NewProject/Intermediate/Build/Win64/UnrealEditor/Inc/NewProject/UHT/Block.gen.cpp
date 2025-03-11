// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NewProject/Block.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlock() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
NEWPROJECT_API UClass* Z_Construct_UClass_ABlock();
NEWPROJECT_API UClass* Z_Construct_UClass_ABlock_NoRegister();
UPackage* Z_Construct_UPackage__Script_NewProject();
// End Cross Module References

// Begin Class ABlock
void ABlock::StaticRegisterNativesABlock()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABlock);
UClass* Z_Construct_UClass_ABlock_NoRegister()
{
	return ABlock::StaticClass();
}
struct Z_Construct_UClass_ABlock_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Block.h" },
		{ "ModuleRelativePath", "Block.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Block.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABlock>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlock_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlock, StaticMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticMesh_MetaData), NewProp_StaticMesh_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABlock_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlock_Statics::NewProp_StaticMesh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABlock_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABlock_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_NewProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABlock_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABlock_Statics::ClassParams = {
	&ABlock::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ABlock_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ABlock_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABlock_Statics::Class_MetaDataParams), Z_Construct_UClass_ABlock_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABlock()
{
	if (!Z_Registration_Info_UClass_ABlock.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABlock.OuterSingleton, Z_Construct_UClass_ABlock_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABlock.OuterSingleton;
}
template<> NEWPROJECT_API UClass* StaticClass<ABlock>()
{
	return ABlock::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABlock);
ABlock::~ABlock() {}
// End Class ABlock

// Begin Registration
struct Z_CompiledInDeferFile_FID_NewProject_NewProject_Source_NewProject_Block_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABlock, ABlock::StaticClass, TEXT("ABlock"), &Z_Registration_Info_UClass_ABlock, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABlock), 1904440784U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NewProject_NewProject_Source_NewProject_Block_h_1921804507(TEXT("/Script/NewProject"),
	Z_CompiledInDeferFile_FID_NewProject_NewProject_Source_NewProject_Block_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NewProject_NewProject_Source_NewProject_Block_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
