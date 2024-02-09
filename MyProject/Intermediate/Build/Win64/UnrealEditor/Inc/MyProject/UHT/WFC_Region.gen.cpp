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
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	MYPROJECT_API UClass* Z_Construct_UClass_AWFC_Region();
	MYPROJECT_API UClass* Z_Construct_UClass_AWFC_Region_NoRegister();
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_x_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_x;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_y_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_y;
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
		{ "IncludePath", "WFC_Region.h" },
		{ "ModuleRelativePath", "WFC_Region.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWFC_Region_Statics::NewProp_RootScene_MetaData[] = {
		{ "Category", "WaveFunctionCollapseRegion" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "WFC_Region.h" },
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWFC_Region_Statics::NewProp_x_MetaData[] = {
		{ "Category", "WaveFunctionCollapseRegion" },
		{ "ModuleRelativePath", "WFC_Region.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AWFC_Region_Statics::NewProp_x = { "x", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWFC_Region, x), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWFC_Region_Statics::NewProp_x_MetaData), Z_Construct_UClass_AWFC_Region_Statics::NewProp_x_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWFC_Region_Statics::NewProp_y_MetaData[] = {
		{ "Category", "WaveFunctionCollapseRegion" },
		{ "ModuleRelativePath", "WFC_Region.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AWFC_Region_Statics::NewProp_y = { "y", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWFC_Region, y), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWFC_Region_Statics::NewProp_y_MetaData), Z_Construct_UClass_AWFC_Region_Statics::NewProp_y_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWFC_Region_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWFC_Region_Statics::NewProp_RootScene,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWFC_Region_Statics::NewProp_Mesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWFC_Region_Statics::NewProp_x,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWFC_Region_Statics::NewProp_y,
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
	struct Z_CompiledInDeferFile_FID_Users_samantha_shomo_Documents_repo_3D_WFC_MyProject_Source_MyProject_WFC_Region_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_samantha_shomo_Documents_repo_3D_WFC_MyProject_Source_MyProject_WFC_Region_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AWFC_Region, AWFC_Region::StaticClass, TEXT("AWFC_Region"), &Z_Registration_Info_UClass_AWFC_Region, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWFC_Region), 2874080926U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_samantha_shomo_Documents_repo_3D_WFC_MyProject_Source_MyProject_WFC_Region_h_1386127236(TEXT("/Script/MyProject"),
		Z_CompiledInDeferFile_FID_Users_samantha_shomo_Documents_repo_3D_WFC_MyProject_Source_MyProject_WFC_Region_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_samantha_shomo_Documents_repo_3D_WFC_MyProject_Source_MyProject_WFC_Region_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
