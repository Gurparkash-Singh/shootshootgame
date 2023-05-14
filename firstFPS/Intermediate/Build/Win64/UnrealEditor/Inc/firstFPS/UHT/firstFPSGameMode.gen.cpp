// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "firstFPS/firstFPSGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodefirstFPSGameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	FIRSTFPS_API UClass* Z_Construct_UClass_AfirstFPSGameMode();
	FIRSTFPS_API UClass* Z_Construct_UClass_AfirstFPSGameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_firstFPS();
// End Cross Module References
	void AfirstFPSGameMode::StaticRegisterNativesAfirstFPSGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AfirstFPSGameMode);
	UClass* Z_Construct_UClass_AfirstFPSGameMode_NoRegister()
	{
		return AfirstFPSGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AfirstFPSGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AfirstFPSGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_firstFPS,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AfirstFPSGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "firstFPSGameMode.h" },
		{ "ModuleRelativePath", "firstFPSGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AfirstFPSGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AfirstFPSGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AfirstFPSGameMode_Statics::ClassParams = {
		&AfirstFPSGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AfirstFPSGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AfirstFPSGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AfirstFPSGameMode()
	{
		if (!Z_Registration_Info_UClass_AfirstFPSGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AfirstFPSGameMode.OuterSingleton, Z_Construct_UClass_AfirstFPSGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AfirstFPSGameMode.OuterSingleton;
	}
	template<> FIRSTFPS_API UClass* StaticClass<AfirstFPSGameMode>()
	{
		return AfirstFPSGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AfirstFPSGameMode);
	AfirstFPSGameMode::~AfirstFPSGameMode() {}
	struct Z_CompiledInDeferFile_FID_firstFPS_Source_firstFPS_firstFPSGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_firstFPS_Source_firstFPS_firstFPSGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AfirstFPSGameMode, AfirstFPSGameMode::StaticClass, TEXT("AfirstFPSGameMode"), &Z_Registration_Info_UClass_AfirstFPSGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AfirstFPSGameMode), 3711577529U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_firstFPS_Source_firstFPS_firstFPSGameMode_h_358488050(TEXT("/Script/firstFPS"),
		Z_CompiledInDeferFile_FID_firstFPS_Source_firstFPS_firstFPSGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_firstFPS_Source_firstFPS_firstFPSGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
