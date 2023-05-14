// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodefirstFPS_init() {}
	FIRSTFPS_API UFunction* Z_Construct_UDelegateFunction_firstFPS_OnPickUp__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_firstFPS;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_firstFPS()
	{
		if (!Z_Registration_Info_UPackage__Script_firstFPS.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_firstFPS_OnPickUp__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/firstFPS",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x472E0C9F,
				0x7D8B3DBC,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_firstFPS.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_firstFPS.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_firstFPS(Z_Construct_UPackage__Script_firstFPS, TEXT("/Script/firstFPS"), Z_Registration_Info_UPackage__Script_firstFPS, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x472E0C9F, 0x7D8B3DBC));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
