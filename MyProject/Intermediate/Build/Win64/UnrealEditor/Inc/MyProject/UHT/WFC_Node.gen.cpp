// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject/WFC_Node.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWFC_Node() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	MYPROJECT_API UClass* Z_Construct_UClass_AWFC_Node();
	MYPROJECT_API UClass* Z_Construct_UClass_AWFC_Node_NoRegister();
	MYPROJECT_API UClass* Z_Construct_UClass_AWFC_Tile_NoRegister();
	MYPROJECT_API UEnum* Z_Construct_UEnum_MyProject_Direction();
	UPackage* Z_Construct_UPackage__Script_MyProject();
// End Cross Module References
	void AWFC_Node::StaticRegisterNativesAWFC_Node()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWFC_Node);
	UClass* Z_Construct_UClass_AWFC_Node_NoRegister()
	{
		return AWFC_Node::StaticClass();
	}
	struct Z_Construct_UClass_AWFC_Node_Statics
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
		static const UECodeGen_Private::FObjectPropertyParams NewProp_mTiles_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mTiles_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_mTiles;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_mNeighbors_ValueProp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_mNeighbors_Key_KeyProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_mNeighbors_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mNeighbors_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_mNeighbors;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWFC_Node_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWFC_Node_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWFC_Node_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "Wave_Function_Collapse" },
		{ "IncludePath", "WFC_Node.h" },
		{ "ModuleRelativePath", "WFC_Node.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWFC_Node_Statics::NewProp_RootScene_MetaData[] = {
		{ "Category", "WaveFunctionCollapseNode" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "WFC_Node.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWFC_Node_Statics::NewProp_RootScene = { "RootScene", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWFC_Node, RootScene), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWFC_Node_Statics::NewProp_RootScene_MetaData), Z_Construct_UClass_AWFC_Node_Statics::NewProp_RootScene_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWFC_Node_Statics::NewProp_Mesh_MetaData[] = {
		{ "Category", "WaveFunctionCollapseNode" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "WFC_Node.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWFC_Node_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWFC_Node, Mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWFC_Node_Statics::NewProp_Mesh_MetaData), Z_Construct_UClass_AWFC_Node_Statics::NewProp_Mesh_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWFC_Node_Statics::NewProp_mTiles_ElementProp = { "mTiles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AWFC_Tile_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWFC_Node_Statics::NewProp_mTiles_MetaData[] = {
		{ "ModuleRelativePath", "WFC_Node.h" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_AWFC_Node_Statics::NewProp_mTiles = { "mTiles", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWFC_Node, mTiles), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWFC_Node_Statics::NewProp_mTiles_MetaData), Z_Construct_UClass_AWFC_Node_Statics::NewProp_mTiles_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWFC_Node_Statics::NewProp_mNeighbors_ValueProp = { "mNeighbors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_AWFC_Node_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AWFC_Node_Statics::NewProp_mNeighbors_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AWFC_Node_Statics::NewProp_mNeighbors_Key_KeyProp = { "mNeighbors_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_MyProject_Direction, METADATA_PARAMS(0, nullptr) }; // 3573020113
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWFC_Node_Statics::NewProp_mNeighbors_MetaData[] = {
		{ "ModuleRelativePath", "WFC_Node.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AWFC_Node_Statics::NewProp_mNeighbors = { "mNeighbors", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWFC_Node, mNeighbors), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWFC_Node_Statics::NewProp_mNeighbors_MetaData), Z_Construct_UClass_AWFC_Node_Statics::NewProp_mNeighbors_MetaData) }; // 3573020113
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWFC_Node_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWFC_Node_Statics::NewProp_RootScene,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWFC_Node_Statics::NewProp_Mesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWFC_Node_Statics::NewProp_mTiles_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWFC_Node_Statics::NewProp_mTiles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWFC_Node_Statics::NewProp_mNeighbors_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWFC_Node_Statics::NewProp_mNeighbors_Key_KeyProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWFC_Node_Statics::NewProp_mNeighbors_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWFC_Node_Statics::NewProp_mNeighbors,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWFC_Node_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWFC_Node>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AWFC_Node_Statics::ClassParams = {
		&AWFC_Node::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AWFC_Node_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AWFC_Node_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWFC_Node_Statics::Class_MetaDataParams), Z_Construct_UClass_AWFC_Node_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWFC_Node_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AWFC_Node()
	{
		if (!Z_Registration_Info_UClass_AWFC_Node.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWFC_Node.OuterSingleton, Z_Construct_UClass_AWFC_Node_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AWFC_Node.OuterSingleton;
	}
	template<> MYPROJECT_API UClass* StaticClass<AWFC_Node>()
	{
		return AWFC_Node::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWFC_Node);
	AWFC_Node::~AWFC_Node() {}
	struct Z_CompiledInDeferFile_FID_Users_Will_Code_GitHub_3D_WFC_MyProject_Source_MyProject_WFC_Node_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Will_Code_GitHub_3D_WFC_MyProject_Source_MyProject_WFC_Node_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AWFC_Node, AWFC_Node::StaticClass, TEXT("AWFC_Node"), &Z_Registration_Info_UClass_AWFC_Node, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWFC_Node), 3987102965U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Will_Code_GitHub_3D_WFC_MyProject_Source_MyProject_WFC_Node_h_620098451(TEXT("/Script/MyProject"),
		Z_CompiledInDeferFile_FID_Users_Will_Code_GitHub_3D_WFC_MyProject_Source_MyProject_WFC_Node_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Will_Code_GitHub_3D_WFC_MyProject_Source_MyProject_WFC_Node_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
