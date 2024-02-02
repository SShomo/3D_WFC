// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject/WFC_Tile.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWFC_Tile() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	MYPROJECT_API UClass* Z_Construct_UClass_AWFC_Tile();
	MYPROJECT_API UClass* Z_Construct_UClass_AWFC_Tile_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MyProject();
// End Cross Module References
	void AWFC_Tile::StaticRegisterNativesAWFC_Tile()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWFC_Tile);
	UClass* Z_Construct_UClass_AWFC_Tile_NoRegister()
	{
		return AWFC_Tile::StaticClass();
	}
	struct Z_Construct_UClass_AWFC_Tile_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWFC_Tile_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWFC_Tile_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWFC_Tile_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "WFC_Tile.h" },
		{ "ModuleRelativePath", "WFC_Tile.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWFC_Tile_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWFC_Tile>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AWFC_Tile_Statics::ClassParams = {
		&AWFC_Tile::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWFC_Tile_Statics::Class_MetaDataParams), Z_Construct_UClass_AWFC_Tile_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AWFC_Tile()
	{
		if (!Z_Registration_Info_UClass_AWFC_Tile.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWFC_Tile.OuterSingleton, Z_Construct_UClass_AWFC_Tile_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AWFC_Tile.OuterSingleton;
	}
	template<> MYPROJECT_API UClass* StaticClass<AWFC_Tile>()
	{
		return AWFC_Tile::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWFC_Tile);
	AWFC_Tile::~AWFC_Tile() {}
	struct Z_CompiledInDeferFile_FID_Users_Will_Code_GitHub_3D_WFC_MyProject_Source_MyProject_WFC_Tile_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Will_Code_GitHub_3D_WFC_MyProject_Source_MyProject_WFC_Tile_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AWFC_Tile, AWFC_Tile::StaticClass, TEXT("AWFC_Tile"), &Z_Registration_Info_UClass_AWFC_Tile, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWFC_Tile), 3413135121U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Will_Code_GitHub_3D_WFC_MyProject_Source_MyProject_WFC_Tile_h_3570363230(TEXT("/Script/MyProject"),
		Z_CompiledInDeferFile_FID_Users_Will_Code_GitHub_3D_WFC_MyProject_Source_MyProject_WFC_Tile_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Will_Code_GitHub_3D_WFC_MyProject_Source_MyProject_WFC_Tile_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
