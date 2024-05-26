// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef FACADE_ES_Facade_ESProjectile_generated_h
#error "Facade_ESProjectile.generated.h already included, missing '#pragma once' in Facade_ESProjectile.h"
#endif
#define FACADE_ES_Facade_ESProjectile_generated_h

#define Facade_ES_Source_Facade_ES_Facade_ESProjectile_h_15_SPARSE_DATA
#define Facade_ES_Source_Facade_ES_Facade_ESProjectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define Facade_ES_Source_Facade_ES_Facade_ESProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define Facade_ES_Source_Facade_ES_Facade_ESProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFacade_ESProjectile(); \
	friend struct Z_Construct_UClass_AFacade_ESProjectile_Statics; \
public: \
	DECLARE_CLASS(AFacade_ESProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Facade_ES"), NO_API) \
	DECLARE_SERIALIZER(AFacade_ESProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Facade_ES_Source_Facade_ES_Facade_ESProjectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAFacade_ESProjectile(); \
	friend struct Z_Construct_UClass_AFacade_ESProjectile_Statics; \
public: \
	DECLARE_CLASS(AFacade_ESProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Facade_ES"), NO_API) \
	DECLARE_SERIALIZER(AFacade_ESProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Facade_ES_Source_Facade_ES_Facade_ESProjectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFacade_ESProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFacade_ESProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFacade_ESProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFacade_ESProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFacade_ESProjectile(AFacade_ESProjectile&&); \
	NO_API AFacade_ESProjectile(const AFacade_ESProjectile&); \
public:


#define Facade_ES_Source_Facade_ES_Facade_ESProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFacade_ESProjectile(AFacade_ESProjectile&&); \
	NO_API AFacade_ESProjectile(const AFacade_ESProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFacade_ESProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFacade_ESProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFacade_ESProjectile)


#define Facade_ES_Source_Facade_ES_Facade_ESProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ProjectileMesh() { return STRUCT_OFFSET(AFacade_ESProjectile, ProjectileMesh); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AFacade_ESProjectile, ProjectileMovement); }


#define Facade_ES_Source_Facade_ES_Facade_ESProjectile_h_12_PROLOG
#define Facade_ES_Source_Facade_ES_Facade_ESProjectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Facade_ES_Source_Facade_ES_Facade_ESProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	Facade_ES_Source_Facade_ES_Facade_ESProjectile_h_15_SPARSE_DATA \
	Facade_ES_Source_Facade_ES_Facade_ESProjectile_h_15_RPC_WRAPPERS \
	Facade_ES_Source_Facade_ES_Facade_ESProjectile_h_15_INCLASS \
	Facade_ES_Source_Facade_ES_Facade_ESProjectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Facade_ES_Source_Facade_ES_Facade_ESProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Facade_ES_Source_Facade_ES_Facade_ESProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	Facade_ES_Source_Facade_ES_Facade_ESProjectile_h_15_SPARSE_DATA \
	Facade_ES_Source_Facade_ES_Facade_ESProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Facade_ES_Source_Facade_ES_Facade_ESProjectile_h_15_INCLASS_NO_PURE_DECLS \
	Facade_ES_Source_Facade_ES_Facade_ESProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACADE_ES_API UClass* StaticClass<class AFacade_ESProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Facade_ES_Source_Facade_ES_Facade_ESProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
