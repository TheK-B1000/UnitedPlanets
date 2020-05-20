// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNITEDPLANETS_GunActor_generated_h
#error "GunActor.generated.h already included, missing '#pragma once' in GunActor.h"
#endif
#define UNITEDPLANETS_GunActor_generated_h

#define UnitedPlanets_Source_UnitedPlanets_Public_GunActor_h_12_SPARSE_DATA
#define UnitedPlanets_Source_UnitedPlanets_Public_GunActor_h_12_RPC_WRAPPERS
#define UnitedPlanets_Source_UnitedPlanets_Public_GunActor_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define UnitedPlanets_Source_UnitedPlanets_Public_GunActor_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGunActor(); \
	friend struct Z_Construct_UClass_AGunActor_Statics; \
public: \
	DECLARE_CLASS(AGunActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnitedPlanets"), NO_API) \
	DECLARE_SERIALIZER(AGunActor)


#define UnitedPlanets_Source_UnitedPlanets_Public_GunActor_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAGunActor(); \
	friend struct Z_Construct_UClass_AGunActor_Statics; \
public: \
	DECLARE_CLASS(AGunActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnitedPlanets"), NO_API) \
	DECLARE_SERIALIZER(AGunActor)


#define UnitedPlanets_Source_UnitedPlanets_Public_GunActor_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGunActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGunActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGunActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGunActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGunActor(AGunActor&&); \
	NO_API AGunActor(const AGunActor&); \
public:


#define UnitedPlanets_Source_UnitedPlanets_Public_GunActor_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGunActor(AGunActor&&); \
	NO_API AGunActor(const AGunActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGunActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGunActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGunActor)


#define UnitedPlanets_Source_UnitedPlanets_Public_GunActor_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Root() { return STRUCT_OFFSET(AGunActor, Root); } \
	FORCEINLINE static uint32 __PPO__Mesh() { return STRUCT_OFFSET(AGunActor, Mesh); } \
	FORCEINLINE static uint32 __PPO__MuzzleFlash() { return STRUCT_OFFSET(AGunActor, MuzzleFlash); } \
	FORCEINLINE static uint32 __PPO__ImpactEffect() { return STRUCT_OFFSET(AGunActor, ImpactEffect); } \
	FORCEINLINE static uint32 __PPO__MaxRange() { return STRUCT_OFFSET(AGunActor, MaxRange); } \
	FORCEINLINE static uint32 __PPO__Damage() { return STRUCT_OFFSET(AGunActor, Damage); }


#define UnitedPlanets_Source_UnitedPlanets_Public_GunActor_h_9_PROLOG
#define UnitedPlanets_Source_UnitedPlanets_Public_GunActor_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnitedPlanets_Source_UnitedPlanets_Public_GunActor_h_12_PRIVATE_PROPERTY_OFFSET \
	UnitedPlanets_Source_UnitedPlanets_Public_GunActor_h_12_SPARSE_DATA \
	UnitedPlanets_Source_UnitedPlanets_Public_GunActor_h_12_RPC_WRAPPERS \
	UnitedPlanets_Source_UnitedPlanets_Public_GunActor_h_12_INCLASS \
	UnitedPlanets_Source_UnitedPlanets_Public_GunActor_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnitedPlanets_Source_UnitedPlanets_Public_GunActor_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnitedPlanets_Source_UnitedPlanets_Public_GunActor_h_12_PRIVATE_PROPERTY_OFFSET \
	UnitedPlanets_Source_UnitedPlanets_Public_GunActor_h_12_SPARSE_DATA \
	UnitedPlanets_Source_UnitedPlanets_Public_GunActor_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	UnitedPlanets_Source_UnitedPlanets_Public_GunActor_h_12_INCLASS_NO_PURE_DECLS \
	UnitedPlanets_Source_UnitedPlanets_Public_GunActor_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNITEDPLANETS_API UClass* StaticClass<class AGunActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UnitedPlanets_Source_UnitedPlanets_Public_GunActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
