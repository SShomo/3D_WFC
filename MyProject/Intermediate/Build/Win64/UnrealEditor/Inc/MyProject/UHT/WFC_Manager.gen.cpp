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
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	MYPROJECT_API UClass* Z_Construct_UClass_AWFC_Manager();
	MYPROJECT_API UClass* Z_Construct_UClass_AWFC_Manager_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MyProject();
// End Cross Module References
	void AWFC_Manager::StaticRegisterNativesAWFC_Manager()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWFC_Manager);
	UClass* Z_Construct_UClass_AWFC_Manager_NoRegister()
	{
		return AWFC_Manager::StaticClass();
	}
	struct Z_Construct_UClass_AWFC_Manager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWFC_Manager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWFC_Manager_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWFC_Manager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "WFC_Manager.h" },
		{ "ModuleRelativePath", "WFC_Manager.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWFC_Manager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWFC_Manager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AWFC_Manager_Statics::ClassParams = {
		&AWFC_Manager::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWFC_Manager_Statics::Class_MetaDataParams), Z_Construct_UClass_AWFC_Manager_Statics::Class_MetaDataParams)
	};
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
	struct Z_CompiledInDeferFile_FID_Users_Will_Code_GitHub_3D_WFC_MyProject_Source_MyProject_WFC_Manager_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Will_Code_GitHub_3D_WFC_MyProject_Source_MyProject_WFC_Manager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AWFC_Manager, AWFC_Manager::StaticClass, TEXT("AWFC_Manager"), &Z_Registration_Info_UClass_AWFC_Manager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWFC_Manager), 1731774091U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Will_Code_GitHub_3D_WFC_MyProject_Source_MyProject_WFC_Manager_h_2395935275(TEXT("/Script/MyProject"),
		Z_CompiledInDeferFile_FID_Users_Will_Code_GitHub_3D_WFC_MyProject_Source_MyProject_WFC_Manager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Will_Code_GitHub_3D_WFC_MyProject_Source_MyProject_WFC_Manager_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
