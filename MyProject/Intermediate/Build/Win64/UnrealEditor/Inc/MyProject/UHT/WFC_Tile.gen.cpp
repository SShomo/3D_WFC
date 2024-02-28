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
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	MYPROJECT_API UClass* Z_Construct_UClass_AWFC_Tile();
	MYPROJECT_API UClass* Z_Construct_UClass_AWFC_Tile_NoRegister();
	MYPROJECT_API UEnum* Z_Construct_UEnum_MyProject_Direction();
	UPackage* Z_Construct_UPackage__Script_MyProject();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_Direction;
	static UEnum* Direction_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_Direction.OuterSingleton)
		{
			Z_Registration_Info_UEnum_Direction.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MyProject_Direction, (UObject*)Z_Construct_UPackage__Script_MyProject(), TEXT("Direction"));
		}
		return Z_Registration_Info_UEnum_Direction.OuterSingleton;
	}
	template<> MYPROJECT_API UEnum* StaticEnum<Direction>()
	{
		return Direction_StaticEnum();
	}
	struct Z_Construct_UEnum_MyProject_Direction_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MyProject_Direction_Statics::Enumerators[] = {
		{ "Direction::Up", (int64)Direction::Up },
		{ "Direction::Down", (int64)Direction::Down },
		{ "Direction::Left", (int64)Direction::Left },
		{ "Direction::Right", (int64)Direction::Right },
		{ "Direction::Front", (int64)Direction::Front },
		{ "Direction::Back", (int64)Direction::Back },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MyProject_Direction_Statics::Enum_MetaDataParams[] = {
		{ "Back.DisplayName", "Back" },
		{ "Back.Name", "Direction::Back" },
		{ "Down.DisplayName", "Down" },
		{ "Down.Name", "Direction::Down" },
		{ "Front.DisplayName", "Front" },
		{ "Front.Name", "Direction::Front" },
		{ "Left.DisplayName", "Left" },
		{ "Left.Name", "Direction::Left" },
		{ "ModuleRelativePath", "WFC_Tile.h" },
		{ "Right.DisplayName", "Right" },
		{ "Right.Name", "Direction::Right" },
		{ "Up.DisplayName", "Up" },
		{ "Up.Name", "Direction::Up" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MyProject_Direction_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MyProject,
		nullptr,
		"Direction",
		"Direction",
		Z_Construct_UEnum_MyProject_Direction_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MyProject_Direction_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MyProject_Direction_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MyProject_Direction_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_MyProject_Direction()
	{
		if (!Z_Registration_Info_UEnum_Direction.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_Direction.InnerSingleton, Z_Construct_UEnum_MyProject_Direction_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_Direction.InnerSingleton;
	}
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RootScene_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RootScene;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UpSocket_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_UpSocket;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DownSocket_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_DownSocket;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeftSocket_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LeftSocket;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RightSocket_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_RightSocket;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FrontSocket_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_FrontSocket;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BackSocket_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_BackSocket;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
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
		{ "ClassGroupNames", "Wave_Function_Collapse" },
		{ "IncludePath", "WFC_Tile.h" },
		{ "ModuleRelativePath", "WFC_Tile.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWFC_Tile_Statics::NewProp_RootScene_MetaData[] = {
		{ "Category", "WaveFunctionCollapseTile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "WFC_Tile.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWFC_Tile_Statics::NewProp_RootScene = { "RootScene", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWFC_Tile, RootScene), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWFC_Tile_Statics::NewProp_RootScene_MetaData), Z_Construct_UClass_AWFC_Tile_Statics::NewProp_RootScene_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWFC_Tile_Statics::NewProp_Mesh_MetaData[] = {
		{ "Category", "WaveFunctionCollapseTile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "WFC_Tile.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWFC_Tile_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWFC_Tile, Mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWFC_Tile_Statics::NewProp_Mesh_MetaData), Z_Construct_UClass_AWFC_Tile_Statics::NewProp_Mesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWFC_Tile_Statics::NewProp_UpSocket_MetaData[] = {
		{ "Category", "WFC_Tile" },
		{ "ModuleRelativePath", "WFC_Tile.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AWFC_Tile_Statics::NewProp_UpSocket = { "UpSocket", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWFC_Tile, UpSocket), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWFC_Tile_Statics::NewProp_UpSocket_MetaData), Z_Construct_UClass_AWFC_Tile_Statics::NewProp_UpSocket_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWFC_Tile_Statics::NewProp_DownSocket_MetaData[] = {
		{ "Category", "WFC_Tile" },
		{ "ModuleRelativePath", "WFC_Tile.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AWFC_Tile_Statics::NewProp_DownSocket = { "DownSocket", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWFC_Tile, DownSocket), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWFC_Tile_Statics::NewProp_DownSocket_MetaData), Z_Construct_UClass_AWFC_Tile_Statics::NewProp_DownSocket_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWFC_Tile_Statics::NewProp_LeftSocket_MetaData[] = {
		{ "Category", "WFC_Tile" },
		{ "ModuleRelativePath", "WFC_Tile.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AWFC_Tile_Statics::NewProp_LeftSocket = { "LeftSocket", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWFC_Tile, LeftSocket), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWFC_Tile_Statics::NewProp_LeftSocket_MetaData), Z_Construct_UClass_AWFC_Tile_Statics::NewProp_LeftSocket_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWFC_Tile_Statics::NewProp_RightSocket_MetaData[] = {
		{ "Category", "WFC_Tile" },
		{ "ModuleRelativePath", "WFC_Tile.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AWFC_Tile_Statics::NewProp_RightSocket = { "RightSocket", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWFC_Tile, RightSocket), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWFC_Tile_Statics::NewProp_RightSocket_MetaData), Z_Construct_UClass_AWFC_Tile_Statics::NewProp_RightSocket_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWFC_Tile_Statics::NewProp_FrontSocket_MetaData[] = {
		{ "Category", "WFC_Tile" },
		{ "ModuleRelativePath", "WFC_Tile.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AWFC_Tile_Statics::NewProp_FrontSocket = { "FrontSocket", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWFC_Tile, FrontSocket), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWFC_Tile_Statics::NewProp_FrontSocket_MetaData), Z_Construct_UClass_AWFC_Tile_Statics::NewProp_FrontSocket_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWFC_Tile_Statics::NewProp_BackSocket_MetaData[] = {
		{ "Category", "WFC_Tile" },
		{ "ModuleRelativePath", "WFC_Tile.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AWFC_Tile_Statics::NewProp_BackSocket = { "BackSocket", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWFC_Tile, BackSocket), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWFC_Tile_Statics::NewProp_BackSocket_MetaData), Z_Construct_UClass_AWFC_Tile_Statics::NewProp_BackSocket_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWFC_Tile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWFC_Tile_Statics::NewProp_RootScene,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWFC_Tile_Statics::NewProp_Mesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWFC_Tile_Statics::NewProp_UpSocket,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWFC_Tile_Statics::NewProp_DownSocket,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWFC_Tile_Statics::NewProp_LeftSocket,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWFC_Tile_Statics::NewProp_RightSocket,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWFC_Tile_Statics::NewProp_FrontSocket,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWFC_Tile_Statics::NewProp_BackSocket,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWFC_Tile_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWFC_Tile>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AWFC_Tile_Statics::ClassParams = {
		&AWFC_Tile::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AWFC_Tile_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AWFC_Tile_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWFC_Tile_Statics::Class_MetaDataParams), Z_Construct_UClass_AWFC_Tile_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWFC_Tile_Statics::PropPointers) < 2048);
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
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Will_Code_GitHub_3D_WFC_MyProject_Source_MyProject_WFC_Tile_h_Statics::EnumInfo[] = {
		{ Direction_StaticEnum, TEXT("Direction"), &Z_Registration_Info_UEnum_Direction, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3573020113U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Will_Code_GitHub_3D_WFC_MyProject_Source_MyProject_WFC_Tile_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AWFC_Tile, AWFC_Tile::StaticClass, TEXT("AWFC_Tile"), &Z_Registration_Info_UClass_AWFC_Tile, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWFC_Tile), 3972524723U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Will_Code_GitHub_3D_WFC_MyProject_Source_MyProject_WFC_Tile_h_3225881685(TEXT("/Script/MyProject"),
		Z_CompiledInDeferFile_FID_Users_Will_Code_GitHub_3D_WFC_MyProject_Source_MyProject_WFC_Tile_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Will_Code_GitHub_3D_WFC_MyProject_Source_MyProject_WFC_Tile_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_Will_Code_GitHub_3D_WFC_MyProject_Source_MyProject_WFC_Tile_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Will_Code_GitHub_3D_WFC_MyProject_Source_MyProject_WFC_Tile_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
