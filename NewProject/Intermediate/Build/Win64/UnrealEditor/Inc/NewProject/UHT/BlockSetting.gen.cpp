// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NewProject/BlockSetting.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlockSetting() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
NEWPROJECT_API UClass* Z_Construct_UClass_ABlockSetting();
NEWPROJECT_API UClass* Z_Construct_UClass_ABlockSetting_NoRegister();
UPackage* Z_Construct_UPackage__Script_NewProject();
// End Cross Module References

// Begin Class ABlockSetting Function CreateBlock
struct Z_Construct_UFunction_ABlockSetting_CreateBlock_Statics
{
	struct BlockSetting_eventCreateBlock_Parms
	{
		FVector Location;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BlockSetting.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABlockSetting_CreateBlock_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlockSetting_eventCreateBlock_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABlockSetting_CreateBlock_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABlockSetting_CreateBlock_Statics::NewProp_Location,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABlockSetting_CreateBlock_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABlockSetting_CreateBlock_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABlockSetting, nullptr, "CreateBlock", nullptr, nullptr, Z_Construct_UFunction_ABlockSetting_CreateBlock_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABlockSetting_CreateBlock_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABlockSetting_CreateBlock_Statics::BlockSetting_eventCreateBlock_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABlockSetting_CreateBlock_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABlockSetting_CreateBlock_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ABlockSetting_CreateBlock_Statics::BlockSetting_eventCreateBlock_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABlockSetting_CreateBlock()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABlockSetting_CreateBlock_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABlockSetting::execCreateBlock)
{
	P_GET_STRUCT(FVector,Z_Param_Location);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CreateBlock(Z_Param_Location);
	P_NATIVE_END;
}
// End Class ABlockSetting Function CreateBlock

// Begin Class ABlockSetting Function SettingBlock
struct Z_Construct_UFunction_ABlockSetting_SettingBlock_Statics
{
	struct BlockSetting_eventSettingBlock_Parms
	{
		int32 Width;
		int32 Height;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BlockSetting.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Width;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Height;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ABlockSetting_SettingBlock_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlockSetting_eventSettingBlock_Parms, Width), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ABlockSetting_SettingBlock_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlockSetting_eventSettingBlock_Parms, Height), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABlockSetting_SettingBlock_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABlockSetting_SettingBlock_Statics::NewProp_Width,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABlockSetting_SettingBlock_Statics::NewProp_Height,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABlockSetting_SettingBlock_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABlockSetting_SettingBlock_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABlockSetting, nullptr, "SettingBlock", nullptr, nullptr, Z_Construct_UFunction_ABlockSetting_SettingBlock_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABlockSetting_SettingBlock_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABlockSetting_SettingBlock_Statics::BlockSetting_eventSettingBlock_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABlockSetting_SettingBlock_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABlockSetting_SettingBlock_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ABlockSetting_SettingBlock_Statics::BlockSetting_eventSettingBlock_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABlockSetting_SettingBlock()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABlockSetting_SettingBlock_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABlockSetting::execSettingBlock)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Width);
	P_GET_PROPERTY(FIntProperty,Z_Param_Height);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SettingBlock(Z_Param_Width,Z_Param_Height);
	P_NATIVE_END;
}
// End Class ABlockSetting Function SettingBlock

// Begin Class ABlockSetting
void ABlockSetting::StaticRegisterNativesABlockSetting()
{
	UClass* Class = ABlockSetting::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CreateBlock", &ABlockSetting::execCreateBlock },
		{ "SettingBlock", &ABlockSetting::execSettingBlock },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABlockSetting);
UClass* Z_Construct_UClass_ABlockSetting_NoRegister()
{
	return ABlockSetting::StaticClass();
}
struct Z_Construct_UClass_ABlockSetting_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "BlockSetting.h" },
		{ "ModuleRelativePath", "BlockSetting.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Blocks_MetaData[] = {
		{ "ModuleRelativePath", "BlockSetting.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Height_MetaData[] = {
		{ "ModuleRelativePath", "BlockSetting.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Width_MetaData[] = {
		{ "ModuleRelativePath", "BlockSetting.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Blocks_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Blocks;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Height;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Width;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ABlockSetting_CreateBlock, "CreateBlock" }, // 3627905388
		{ &Z_Construct_UFunction_ABlockSetting_SettingBlock, "SettingBlock" }, // 1653297209
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABlockSetting>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlockSetting_Statics::NewProp_Blocks_Inner = { "Blocks", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABlockSetting_Statics::NewProp_Blocks = { "Blocks", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlockSetting, Blocks), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Blocks_MetaData), NewProp_Blocks_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABlockSetting_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlockSetting, Height), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Height_MetaData), NewProp_Height_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABlockSetting_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlockSetting, Width), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Width_MetaData), NewProp_Width_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABlockSetting_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlockSetting_Statics::NewProp_Blocks_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlockSetting_Statics::NewProp_Blocks,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlockSetting_Statics::NewProp_Height,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlockSetting_Statics::NewProp_Width,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABlockSetting_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABlockSetting_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_NewProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABlockSetting_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABlockSetting_Statics::ClassParams = {
	&ABlockSetting::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ABlockSetting_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ABlockSetting_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABlockSetting_Statics::Class_MetaDataParams), Z_Construct_UClass_ABlockSetting_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABlockSetting()
{
	if (!Z_Registration_Info_UClass_ABlockSetting.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABlockSetting.OuterSingleton, Z_Construct_UClass_ABlockSetting_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABlockSetting.OuterSingleton;
}
template<> NEWPROJECT_API UClass* StaticClass<ABlockSetting>()
{
	return ABlockSetting::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABlockSetting);
ABlockSetting::~ABlockSetting() {}
// End Class ABlockSetting

// Begin Registration
struct Z_CompiledInDeferFile_FID_NewProject_NewProject_Source_NewProject_BlockSetting_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABlockSetting, ABlockSetting::StaticClass, TEXT("ABlockSetting"), &Z_Registration_Info_UClass_ABlockSetting, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABlockSetting), 1254016149U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NewProject_NewProject_Source_NewProject_BlockSetting_h_724911267(TEXT("/Script/NewProject"),
	Z_CompiledInDeferFile_FID_NewProject_NewProject_Source_NewProject_BlockSetting_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NewProject_NewProject_Source_NewProject_BlockSetting_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
