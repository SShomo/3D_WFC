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
	MYPROJECT_API UClass* Z_Construct_UClass_AWFC_Node();
	MYPROJECT_API UClass* Z_Construct_UClass_AWFC_Node_NoRegister();
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
		{ "IncludePath", "WFC_Node.h" },
		{ "ModuleRelativePath", "WFC_Node.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWFC_Node_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWFC_Node>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AWFC_Node_Statics::ClassParams = {
		&AWFC_Node::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWFC_Node_Statics::Class_MetaDataParams), Z_Construct_UClass_AWFC_Node_Statics::Class_MetaDataParams)
	};
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
		{ Z_Construct_UClass_AWFC_Node, AWFC_Node::StaticClass, TEXT("AWFC_Node"), &Z_Registration_Info_UClass_AWFC_Node, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWFC_Node), 476755742U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Will_Code_GitHub_3D_WFC_MyProject_Source_MyProject_WFC_Node_h_1520663704(TEXT("/Script/MyProject"),
		Z_CompiledInDeferFile_FID_Users_Will_Code_GitHub_3D_WFC_MyProject_Source_MyProject_WFC_Node_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Will_Code_GitHub_3D_WFC_MyProject_Source_MyProject_WFC_Node_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
