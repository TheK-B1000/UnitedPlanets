// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNITEDPLANETS_TP_ThirdPersonCharacter_generated_h
#error "TP_ThirdPersonCharacter.generated.h already included, missing '#pragma once' in TP_ThirdPersonCharacter.h"
#endif
#define UNITEDPLANETS_TP_ThirdPersonCharacter_generated_h

#define UnitedPlanets_Source_UnitedPlanets_TP_ThirdPerson_TP_ThirdPersonCharacter_h_14_SPARSE_DATA
#define UnitedPlanets_Source_UnitedPlanets_TP_ThirdPerson_TP_ThirdPersonCharacter_h_14_RPC_WRAPPERS \
	virtual void TraceForward_Implementation(); \
 \
	DECLARE_FUNCTION(execTraceForward) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->TraceForward_Implementation(); \
		P_NATIVE_END; \
	}


#define UnitedPlanets_Source_UnitedPlanets_TP_ThirdPerson_TP_ThirdPersonCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execTraceForward) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->TraceForward_Implementation(); \
		P_NATIVE_END; \
	}


#define UnitedPlanets_Source_UnitedPlanets_TP_ThirdPerson_TP_ThirdPersonCharacter_h_14_EVENT_PARMS
#define UnitedPlanets_Source_UnitedPlanets_TP_ThirdPerson_TP_ThirdPersonCharacter_h_14_CALLBACK_WRAPPERS
#define UnitedPlanets_Source_UnitedPlanets_TP_ThirdPerson_TP_ThirdPersonCharacter_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATP_ThirdPersonCharacter(); \
	friend struct Z_Construct_UClass_ATP_ThirdPersonCharacter_Statics; \
public: \
	DECLARE_CLASS(ATP_ThirdPersonCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnitedPlanets"), NO_API) \
	DECLARE_SERIALIZER(ATP_ThirdPersonCharacter)


#define UnitedPlanets_Source_UnitedPlanets_TP_ThirdPerson_TP_ThirdPersonCharacter_h_14_INCLASS \
private: \
	static void StaticRegisterNativesATP_ThirdPersonCharacter(); \
	friend struct Z_Construct_UClass_ATP_ThirdPersonCharacter_Statics; \
public: \
	DECLARE_CLASS(ATP_ThirdPersonCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnitedPlanets"), NO_API) \
	DECLARE_SERIALIZER(ATP_ThirdPersonCharacter)


#define UnitedPlanets_Source_UnitedPlanets_TP_ThirdPerson_TP_ThirdPersonCharacter_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATP_ThirdPersonCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATP_ThirdPersonCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATP_ThirdPersonCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATP_ThirdPersonCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATP_ThirdPersonCharacter(ATP_ThirdPersonCharacter&&); \
	NO_API ATP_ThirdPersonCharacter(const ATP_ThirdPersonCharacter&); \
public:


#define UnitedPlanets_Source_UnitedPlanets_TP_ThirdPerson_TP_ThirdPersonCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATP_ThirdPersonCharacter(ATP_ThirdPersonCharacter&&); \
	NO_API ATP_ThirdPersonCharacter(const ATP_ThirdPersonCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATP_ThirdPersonCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATP_ThirdPersonCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATP_ThirdPersonCharacter)


#define UnitedPlanets_Source_UnitedPlanets_TP_ThirdPerson_TP_ThirdPersonCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(ATP_ThirdPersonCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(ATP_ThirdPersonCharacter, FollowCamera); } \
	FORCEINLINE static uint32 __PPO__RotationRate() { return STRUCT_OFFSET(ATP_ThirdPersonCharacter, RotationRate); } \
	FORCEINLINE static uint32 __PPO__GunClass() { return STRUCT_OFFSET(ATP_ThirdPersonCharacter, GunClass); } \
	FORCEINLINE static uint32 __PPO__Gun() { return STRUCT_OFFSET(ATP_ThirdPersonCharacter, Gun); }


#define UnitedPlanets_Source_UnitedPlanets_TP_ThirdPerson_TP_ThirdPersonCharacter_h_11_PROLOG \
	UnitedPlanets_Source_UnitedPlanets_TP_ThirdPerson_TP_ThirdPersonCharacter_h_14_EVENT_PARMS


#define UnitedPlanets_Source_UnitedPlanets_TP_ThirdPerson_TP_ThirdPersonCharacter_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnitedPlanets_Source_UnitedPlanets_TP_ThirdPerson_TP_ThirdPersonCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	UnitedPlanets_Source_UnitedPlanets_TP_ThirdPerson_TP_ThirdPersonCharacter_h_14_SPARSE_DATA \
	UnitedPlanets_Source_UnitedPlanets_TP_ThirdPerson_TP_ThirdPersonCharacter_h_14_RPC_WRAPPERS \
	UnitedPlanets_Source_UnitedPlanets_TP_ThirdPerson_TP_ThirdPersonCharacter_h_14_CALLBACK_WRAPPERS \
	UnitedPlanets_Source_UnitedPlanets_TP_ThirdPerson_TP_ThirdPersonCharacter_h_14_INCLASS \
	UnitedPlanets_Source_UnitedPlanets_TP_ThirdPerson_TP_ThirdPersonCharacter_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnitedPlanets_Source_UnitedPlanets_TP_ThirdPerson_TP_ThirdPersonCharacter_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnitedPlanets_Source_UnitedPlanets_TP_ThirdPerson_TP_ThirdPersonCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	UnitedPlanets_Source_UnitedPlanets_TP_ThirdPerson_TP_ThirdPersonCharacter_h_14_SPARSE_DATA \
	UnitedPlanets_Source_UnitedPlanets_TP_ThirdPerson_TP_ThirdPersonCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	UnitedPlanets_Source_UnitedPlanets_TP_ThirdPerson_TP_ThirdPersonCharacter_h_14_CALLBACK_WRAPPERS \
	UnitedPlanets_Source_UnitedPlanets_TP_ThirdPerson_TP_ThirdPersonCharacter_h_14_INCLASS_NO_PURE_DECLS \
	UnitedPlanets_Source_UnitedPlanets_TP_ThirdPerson_TP_ThirdPersonCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNITEDPLANETS_API UClass* StaticClass<class ATP_ThirdPersonCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UnitedPlanets_Source_UnitedPlanets_TP_ThirdPerson_TP_ThirdPersonCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
