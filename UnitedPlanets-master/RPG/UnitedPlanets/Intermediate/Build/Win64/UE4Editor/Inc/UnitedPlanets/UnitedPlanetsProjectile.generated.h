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
#ifdef UNITEDPLANETS_UnitedPlanetsProjectile_generated_h
#error "UnitedPlanetsProjectile.generated.h already included, missing '#pragma once' in UnitedPlanetsProjectile.h"
#endif
#define UNITEDPLANETS_UnitedPlanetsProjectile_generated_h

#define UnitedPlanets_Source_UnitedPlanets_UnitedPlanetsProjectile_h_12_SPARSE_DATA
#define UnitedPlanets_Source_UnitedPlanets_UnitedPlanetsProjectile_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define UnitedPlanets_Source_UnitedPlanets_UnitedPlanetsProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define UnitedPlanets_Source_UnitedPlanets_UnitedPlanetsProjectile_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAUnitedPlanetsProjectile(); \
	friend struct Z_Construct_UClass_AUnitedPlanetsProjectile_Statics; \
public: \
	DECLARE_CLASS(AUnitedPlanetsProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnitedPlanets"), NO_API) \
	DECLARE_SERIALIZER(AUnitedPlanetsProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define UnitedPlanets_Source_UnitedPlanets_UnitedPlanetsProjectile_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAUnitedPlanetsProjectile(); \
	friend struct Z_Construct_UClass_AUnitedPlanetsProjectile_Statics; \
public: \
	DECLARE_CLASS(AUnitedPlanetsProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnitedPlanets"), NO_API) \
	DECLARE_SERIALIZER(AUnitedPlanetsProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define UnitedPlanets_Source_UnitedPlanets_UnitedPlanetsProjectile_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AUnitedPlanetsProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AUnitedPlanetsProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUnitedPlanetsProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUnitedPlanetsProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AUnitedPlanetsProjectile(AUnitedPlanetsProjectile&&); \
	NO_API AUnitedPlanetsProjectile(const AUnitedPlanetsProjectile&); \
public:


#define UnitedPlanets_Source_UnitedPlanets_UnitedPlanetsProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AUnitedPlanetsProjectile(AUnitedPlanetsProjectile&&); \
	NO_API AUnitedPlanetsProjectile(const AUnitedPlanetsProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUnitedPlanetsProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUnitedPlanetsProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AUnitedPlanetsProjectile)


#define UnitedPlanets_Source_UnitedPlanets_UnitedPlanetsProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(AUnitedPlanetsProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AUnitedPlanetsProjectile, ProjectileMovement); }


#define UnitedPlanets_Source_UnitedPlanets_UnitedPlanetsProjectile_h_9_PROLOG
#define UnitedPlanets_Source_UnitedPlanets_UnitedPlanetsProjectile_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnitedPlanets_Source_UnitedPlanets_UnitedPlanetsProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	UnitedPlanets_Source_UnitedPlanets_UnitedPlanetsProjectile_h_12_SPARSE_DATA \
	UnitedPlanets_Source_UnitedPlanets_UnitedPlanetsProjectile_h_12_RPC_WRAPPERS \
	UnitedPlanets_Source_UnitedPlanets_UnitedPlanetsProjectile_h_12_INCLASS \
	UnitedPlanets_Source_UnitedPlanets_UnitedPlanetsProjectile_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnitedPlanets_Source_UnitedPlanets_UnitedPlanetsProjectile_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnitedPlanets_Source_UnitedPlanets_UnitedPlanetsProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	UnitedPlanets_Source_UnitedPlanets_UnitedPlanetsProjectile_h_12_SPARSE_DATA \
	UnitedPlanets_Source_UnitedPlanets_UnitedPlanetsProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	UnitedPlanets_Source_UnitedPlanets_UnitedPlanetsProjectile_h_12_INCLASS_NO_PURE_DECLS \
	UnitedPlanets_Source_UnitedPlanets_UnitedPlanetsProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNITEDPLANETS_API UClass* StaticClass<class AUnitedPlanetsProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UnitedPlanets_Source_UnitedPlanets_UnitedPlanetsProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
