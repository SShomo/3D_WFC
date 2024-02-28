// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject/WFC_Region.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWFC_Region() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	MYPROJECT_API UClass* Z_Construct_UClass_AWFC_Node_NoRegister();
	MYPROJECT_API UClass* Z_Construct_UClass_AWFC_Region();
	MYPROJECT_API UClass* Z_Construct_UClass_AWFC_Region_NoRegister();
	MYPROJECT_API UClass* Z_Construct_UClass_AWFC_Tile_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MyProject();
// End Cross Module References
	void AWFC_Region::StaticRegisterNativesAWFC_Region()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWFC_Region);
	UClass* Z_Construct_UClass_AWFC_Region_NoRegister()
	{
		return AWFC_Region::StaticClass();
	}
	struct Z_Construct_UClass_AWFC_Region_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RootScene_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RootScene;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mDimensions_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_mDimensions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mOffset_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_mOffset;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_mTiles_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mTiles_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_mTiles;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_mNodes_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mNodes_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_mNodes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWFC_Region_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWFC_Region_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWFC_Region_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "Wave_Function_Collapse" },
		{ "IncludePath", "WFC_Region.h" },
		{ "ModuleRelativePath", "WFC_Region.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWFC_Region_Statics::NewProp_RootScene_MetaData[] = {
		{ "Category", "WaveFunctionCollapseRegion" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Member Variables\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "WFC_Region.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Member Variables" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWFC_Region_Statics::NewProp_RootScene = { "RootScene", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWFC_Region, RootScene), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWFC_Region_Statics::NewProp_RootScene_MetaData), Z_Construct_UClass_AWFC_Region_Statics::NewProp_RootScene_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWFC_Region_Statics::NewProp_Mesh_MetaData[] = {
		{ "Category", "WaveFunctionCollapseRegion" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "WFC_Region.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWFC_Region_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWFC_Region, Mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWFC_Region_Statics::NewProp_Mesh_MetaData), Z_Construct_UClass_AWFC_Region_Statics::NewProp_Mesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWFC_Region_Statics::NewProp_mDimensions_MetaData[] = {
		{ "ModuleRelativePath", "WFC_Region.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AWFC_Region_Statics::NewProp_mDimensions = { "mDimensions", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWFC_Region, mDimensions), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWFC_Region_Statics::NewProp_mDimensions_MetaData), Z_Construct_UClass_AWFC_Region_Statics::NewProp_mDimensions_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWFC_Region_Statics::NewProp_mOffset_MetaData[] = {
		{ "ModuleRelativePath", "WFC_Region.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AWFC_Region_Statics::NewProp_mOffset = { "mOffset", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWFC_Region, mOffset), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWFC_Region_Statics::NewProp_mOffset_MetaData), Z_Construct_UClass_AWFC_Region_Statics::NewProp_mOffset_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWFC_Region_Statics::NewProp_mTiles_ElementProp = { "mTiles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AWFC_Tile_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWFC_Region_Statics::NewProp_mTiles_MetaData[] = {
		{ "ModuleRelativePath", "WFC_Region.h" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_AWFC_Region_Statics::NewProp_mTiles = { "mTiles", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWFC_Region, mTiles), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWFC_Region_Statics::NewProp_mTiles_MetaData), Z_Construct_UClass_AWFC_Region_Statics::NewProp_mTiles_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWFC_Region_Statics::NewProp_mNodes_ElementProp = { "mNodes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AWFC_Node_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWFC_Region_Statics::NewProp_mNodes_MetaData[] = {
		{ "ModuleRelativePath", "WFC_Region.h" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_AWFC_Region_Statics::NewProp_mNodes = { "mNodes", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWFC_Region, mNodes), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWFC_Region_Statics::NewProp_mNodes_MetaData), Z_Construct_UClass_AWFC_Region_Statics::NewProp_mNodes_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWFC_Region_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWFC_Region_Statics::NewProp_RootScene,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWFC_Region_Statics::NewProp_Mesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWFC_Region_Statics::NewProp_mDimensions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWFC_Region_Statics::NewProp_mOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWFC_Region_Statics::NewProp_mTiles_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWFC_Region_Statics::NewProp_mTiles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWFC_Region_Statics::NewProp_mNodes_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWFC_Region_Statics::NewProp_mNodes,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWFC_Region_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWFC_Region>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AWFC_Region_Statics::ClassParams = {
		&AWFC_Region::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AWFC_Region_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AWFC_Region_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWFC_Region_Statics::Class_MetaDataParams), Z_Construct_UClass_AWFC_Region_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWFC_Region_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AWFC_Region()
	{
		if (!Z_Registration_Info_UClass_AWFC_Region.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWFC_Region.OuterSingleton, Z_Construct_UClass_AWFC_Region_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AWFC_Region.OuterSingleton;
	}
	template<> MYPROJECT_API UClass* StaticClass<AWFC_Region>()
	{
		return AWFC_Region::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWFC_Region);
	AWFC_Region::~AWFC_Region() {}
	struct Z_CompiledInDeferFile_FID_Users_Will_Code_GitHub_3D_WFC_MyProject_Source_MyProject_WFC_Region_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Will_Code_GitHub_3D_WFC_MyProject_Source_MyProject_WFC_Region_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AWFC_Region, AWFC_Region::StaticClass, TEXT("AWFC_Region"), &Z_Registration_Info_UClass_AWFC_Region, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWFC_Region), 3518150387U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Will_Code_GitHub_3D_WFC_MyProject_Source_MyProject_WFC_Region_h_2682524366(TEXT("/Script/MyProject"),
		Z_CompiledInDeferFile_FID_Users_Will_Code_GitHub_3D_WFC_MyProject_Source_MyProject_WFC_Region_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Will_Code_GitHub_3D_WFC_MyProject_Source_MyProject_WFC_Region_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
