// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "firstFPSProjectile.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef FIRSTFPS_firstFPSProjectile_generated_h
#error "firstFPSProjectile.generated.h already included, missing '#pragma once' in firstFPSProjectile.h"
#endif
#define FIRSTFPS_firstFPSProjectile_generated_h

#define FID_firstFPS_Source_firstFPS_firstFPSProjectile_h_15_SPARSE_DATA
#define FID_firstFPS_Source_firstFPS_firstFPSProjectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define FID_firstFPS_Source_firstFPS_firstFPSProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define FID_firstFPS_Source_firstFPS_firstFPSProjectile_h_15_ACCESSORS
#define FID_firstFPS_Source_firstFPS_firstFPSProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAfirstFPSProjectile(); \
	friend struct Z_Construct_UClass_AfirstFPSProjectile_Statics; \
public: \
	DECLARE_CLASS(AfirstFPSProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/firstFPS"), NO_API) \
	DECLARE_SERIALIZER(AfirstFPSProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_firstFPS_Source_firstFPS_firstFPSProjectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAfirstFPSProjectile(); \
	friend struct Z_Construct_UClass_AfirstFPSProjectile_Statics; \
public: \
	DECLARE_CLASS(AfirstFPSProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/firstFPS"), NO_API) \
	DECLARE_SERIALIZER(AfirstFPSProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_firstFPS_Source_firstFPS_firstFPSProjectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AfirstFPSProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AfirstFPSProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AfirstFPSProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AfirstFPSProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AfirstFPSProjectile(AfirstFPSProjectile&&); \
	NO_API AfirstFPSProjectile(const AfirstFPSProjectile&); \
public: \
	NO_API virtual ~AfirstFPSProjectile();


#define FID_firstFPS_Source_firstFPS_firstFPSProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AfirstFPSProjectile(AfirstFPSProjectile&&); \
	NO_API AfirstFPSProjectile(const AfirstFPSProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AfirstFPSProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AfirstFPSProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AfirstFPSProjectile) \
	NO_API virtual ~AfirstFPSProjectile();


#define FID_firstFPS_Source_firstFPS_firstFPSProjectile_h_12_PROLOG
#define FID_firstFPS_Source_firstFPS_firstFPSProjectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_firstFPS_Source_firstFPS_firstFPSProjectile_h_15_SPARSE_DATA \
	FID_firstFPS_Source_firstFPS_firstFPSProjectile_h_15_RPC_WRAPPERS \
	FID_firstFPS_Source_firstFPS_firstFPSProjectile_h_15_ACCESSORS \
	FID_firstFPS_Source_firstFPS_firstFPSProjectile_h_15_INCLASS \
	FID_firstFPS_Source_firstFPS_firstFPSProjectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_firstFPS_Source_firstFPS_firstFPSProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_firstFPS_Source_firstFPS_firstFPSProjectile_h_15_SPARSE_DATA \
	FID_firstFPS_Source_firstFPS_firstFPSProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_firstFPS_Source_firstFPS_firstFPSProjectile_h_15_ACCESSORS \
	FID_firstFPS_Source_firstFPS_firstFPSProjectile_h_15_INCLASS_NO_PURE_DECLS \
	FID_firstFPS_Source_firstFPS_firstFPSProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIRSTFPS_API UClass* StaticClass<class AfirstFPSProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_firstFPS_Source_firstFPS_firstFPSProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
