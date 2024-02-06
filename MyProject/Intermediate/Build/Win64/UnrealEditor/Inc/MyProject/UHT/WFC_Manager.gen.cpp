// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject/WFC_Manager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWFC_Manager() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	MYPROJECT_API UClass* Z_Construct_UClass_AWFC_Manager();
	MYPROJECT_API UClass* Z_Construct_UClass_AWFC_Manager_NoRegister();
	MYPROJECT_API UClass* Z_Construct_UClass_AWFC_Region_NoRegister();
	MYPROJECT_API UClass* Z_Construct_UClass_AWFC_Tile_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MyProject();
// End Cross Module References
	DEFINE_FUNCTION(AWFC_Manager::execSetTiles)
	{
		P_GET_TARRAY(TSubclassOf<AWFC_Tile> ,Z_Param_tiles);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTiles(Z_Param_tiles);
		P_NATIVE_END;
	}
	void AWFC_Manager::StaticRegisterNativesAWFC_Manager()
	{
		UClass* Class = AWFC_Manager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetTiles", &AWFC_Manager::execSetTiles },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AWFC_Manager_SetTiles_Statics
	{
		struct WFC_Manager_eventSetTiles_Parms
		{
			TArray<TSubclassOf<AWFC_Tile> > tiles;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_tiles_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_tiles;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AWFC_Manager_SetTiles_Statics::NewProp_tiles_Inner = { "tiles", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_AWFC_Tile_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AWFC_Manager_SetTiles_Statics::NewProp_tiles = { "tiles", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WFC_Manager_eventSetTiles_Parms, tiles), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWFC_Manager_SetTiles_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWFC_Manager_SetTiles_Statics::NewProp_tiles_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWFC_Manager_SetTiles_Statics::NewProp_tiles,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWFC_Manager_SetTiles_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "WFC_Manager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWFC_Manager_SetTiles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWFC_Manager, nullptr, "SetTiles", nullptr, nullptr, Z_Construct_UFunction_AWFC_Manager_SetTiles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWFC_Manager_SetTiles_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWFC_Manager_SetTiles_Statics::WFC_Manager_eventSetTiles_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWFC_Manager_SetTiles_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWFC_Manager_SetTiles_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWFC_Manager_SetTiles_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AWFC_Manager_SetTiles_Statics::WFC_Manager_eventSetTiles_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AWFC_Manager_SetTiles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWFC_Manager_SetTiles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWFC_Manager);
	UClass* Z_Construct_UClass_AWFC_Manager_NoRegister()
	{
		return AWFC_Manager::StaticClass();
	}
	struct Z_Construct_UClass_AWFC_Manager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mWFCRegion_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_mWFCRegion;
		static const UECodeGen_Private::FClassPropertyParams NewProp_mWFCTiles_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mWFCTiles_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_mWFCTiles;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWFC_Manager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWFC_Manager_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AWFC_Manager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AWFC_Manager_SetTiles, "SetTiles" }, // 3940824244
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWFC_Manager_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWFC_Manager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "WFC_Manager.h" },
		{ "ModuleRelativePath", "WFC_Manager.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWFC_Manager_Statics::NewProp_mWFCRegion_MetaData[] = {
		{ "Category", "WaveFunctionCollapseManager" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Member Variables\n" },
#endif
		{ "ModuleRelativePath", "WFC_Manager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Member Variables" },
#endif
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AWFC_Manager_Statics::NewProp_mWFCRegion = { "mWFCRegion", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWFC_Manager, mWFCRegion), Z_Construct_UClass_UClass, Z_Construct_UClass_AWFC_Region_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWFC_Manager_Statics::NewProp_mWFCRegion_MetaData), Z_Construct_UClass_AWFC_Manager_Statics::NewProp_mWFCRegion_MetaData) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AWFC_Manager_Statics::NewProp_mWFCTiles_Inner = { "mWFCTiles", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_AWFC_Tile_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWFC_Manager_Statics::NewProp_mWFCTiles_MetaData[] = {
		{ "Category", "WaveFunctionCollapseManager" },
		{ "ModuleRelativePath", "WFC_Manager.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AWFC_Manager_Statics::NewProp_mWFCTiles = { "mWFCTiles", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWFC_Manager, mWFCTiles), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWFC_Manager_Statics::NewProp_mWFCTiles_MetaData), Z_Construct_UClass_AWFC_Manager_Statics::NewProp_mWFCTiles_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWFC_Manager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWFC_Manager_Statics::NewProp_mWFCRegion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWFC_Manager_Statics::NewProp_mWFCTiles_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWFC_Manager_Statics::NewProp_mWFCTiles,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWFC_Manager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWFC_Manager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AWFC_Manager_Statics::ClassParams = {
		&AWFC_Manager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AWFC_Manager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AWFC_Manager_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWFC_Manager_Statics::Class_MetaDataParams), Z_Construct_UClass_AWFC_Manager_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWFC_Manager_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AWFC_Manager()
	{
		if (!Z_Registration_Info_UClass_AWFC_Manager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWFC_Manager.OuterSingleton, Z_Construct_UClass_AWFC_Manager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AWFC_Manager.OuterSingleton;
	}
	template<> MYPROJECT_API UClass* StaticClass<AWFC_Manager>()
	{
		return AWFC_Manager::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWFC_Manager);
	AWFC_Manager::~AWFC_Manager() {}
	struct Z_CompiledInDeferFile_FID_Users_samantha_shomo_Documents_repo_3D_WFC_MyProject_Source_MyProject_WFC_Manager_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_samantha_shomo_Documents_repo_3D_WFC_MyProject_Source_MyProject_WFC_Manager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AWFC_Manager, AWFC_Manager::StaticClass, TEXT("AWFC_Manager"), &Z_Registration_Info_UClass_AWFC_Manager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWFC_Manager), 1580890290U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_samantha_shomo_Documents_repo_3D_WFC_MyProject_Source_MyProject_WFC_Manager_h_2510083051(TEXT("/Script/MyProject"),
		Z_CompiledInDeferFile_FID_Users_samantha_shomo_Documents_repo_3D_WFC_MyProject_Source_MyProject_WFC_Manager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_samantha_shomo_Documents_repo_3D_WFC_MyProject_Source_MyProject_WFC_Manager_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
