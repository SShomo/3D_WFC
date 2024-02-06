// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject/WFC_Rectangular_Region.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWFC_Rectangular_Region() {}
// Cross Module References
	MYPROJECT_API UClass* Z_Construct_UClass_AWFC_Rectangular_Region();
	MYPROJECT_API UClass* Z_Construct_UClass_AWFC_Rectangular_Region_NoRegister();
	MYPROJECT_API UClass* Z_Construct_UClass_AWFC_Region();
	UPackage* Z_Construct_UPackage__Script_MyProject();
// End Cross Module References
	void AWFC_Rectangular_Region::StaticRegisterNativesAWFC_Rectangular_Region()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWFC_Rectangular_Region);
	UClass* Z_Construct_UClass_AWFC_Rectangular_Region_NoRegister()
	{
		return AWFC_Rectangular_Region::StaticClass();
	}
	struct Z_Construct_UClass_AWFC_Rectangular_Region_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWFC_Rectangular_Region_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AWFC_Region,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWFC_Rectangular_Region_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWFC_Rectangular_Region_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "WFC_Rectangular_Region.h" },
		{ "ModuleRelativePath", "WFC_Rectangular_Region.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWFC_Rectangular_Region_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWFC_Rectangular_Region>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AWFC_Rectangular_Region_Statics::ClassParams = {
		&AWFC_Rectangular_Region::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWFC_Rectangular_Region_Statics::Class_MetaDataParams), Z_Construct_UClass_AWFC_Rectangular_Region_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AWFC_Rectangular_Region()
	{
		if (!Z_Registration_Info_UClass_AWFC_Rectangular_Region.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWFC_Rectangular_Region.OuterSingleton, Z_Construct_UClass_AWFC_Rectangular_Region_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AWFC_Rectangular_Region.OuterSingleton;
	}
	template<> MYPROJECT_API UClass* StaticClass<AWFC_Rectangular_Region>()
	{
		return AWFC_Rectangular_Region::StaticClass();
	}
	AWFC_Rectangular_Region::AWFC_Rectangular_Region() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWFC_Rectangular_Region);
	AWFC_Rectangular_Region::~AWFC_Rectangular_Region() {}
	struct Z_CompiledInDeferFile_FID_Users_samantha_shomo_Documents_repo_3D_WFC_MyProject_Source_MyProject_WFC_Rectangular_Region_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_samantha_shomo_Documents_repo_3D_WFC_MyProject_Source_MyProject_WFC_Rectangular_Region_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AWFC_Rectangular_Region, AWFC_Rectangular_Region::StaticClass, TEXT("AWFC_Rectangular_Region"), &Z_Registration_Info_UClass_AWFC_Rectangular_Region, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWFC_Rectangular_Region), 3686979527U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_samantha_shomo_Documents_repo_3D_WFC_MyProject_Source_MyProject_WFC_Rectangular_Region_h_4276921176(TEXT("/Script/MyProject"),
		Z_CompiledInDeferFile_FID_Users_samantha_shomo_Documents_repo_3D_WFC_MyProject_Source_MyProject_WFC_Rectangular_Region_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_samantha_shomo_Documents_repo_3D_WFC_MyProject_Source_MyProject_WFC_Rectangular_Region_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
