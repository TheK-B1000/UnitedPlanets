// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef UNITEDPLANETS_InteractInterface_generated_h
#error "InteractInterface.generated.h already included, missing '#pragma once' in InteractInterface.h"
#endif
#define UNITEDPLANETS_InteractInterface_generated_h

#define UnitedPlanets_Source_UnitedPlanets_Public_Interact_InteractInterface_h_13_SPARSE_DATA
#define UnitedPlanets_Source_UnitedPlanets_Public_Interact_InteractInterface_h_13_RPC_WRAPPERS \
	virtual void EndFocus_Implementation() {}; \
	virtual void StartFocus_Implementation() {}; \
	virtual void OnInteract_Implementation(AActor* Caller) {}; \
 \
	DECLARE_FUNCTION(execEndFocus) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EndFocus_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartFocus) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartFocus_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnInteract) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Caller); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnInteract_Implementation(Z_Param_Caller); \
		P_NATIVE_END; \
	}


#define UnitedPlanets_Source_UnitedPlanets_Public_Interact_InteractInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void EndFocus_Implementation() {}; \
	virtual void StartFocus_Implementation() {}; \
	virtual void OnInteract_Implementation(AActor* Caller) {}; \
 \
	DECLARE_FUNCTION(execEndFocus) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EndFocus_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartFocus) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartFocus_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnInteract) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Caller); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnInteract_Implementation(Z_Param_Caller); \
		P_NATIVE_END; \
	}


#define UnitedPlanets_Source_UnitedPlanets_Public_Interact_InteractInterface_h_13_EVENT_PARMS \
	struct InteractInterface_eventOnInteract_Parms \
	{ \
		AActor* Caller; \
	};


#define UnitedPlanets_Source_UnitedPlanets_Public_Interact_InteractInterface_h_13_CALLBACK_WRAPPERS
#define UnitedPlanets_Source_UnitedPlanets_Public_Interact_InteractInterface_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNITEDPLANETS_API UInteractInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteractInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNITEDPLANETS_API, UInteractInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNITEDPLANETS_API UInteractInterface(UInteractInterface&&); \
	UNITEDPLANETS_API UInteractInterface(const UInteractInterface&); \
public:


#define UnitedPlanets_Source_UnitedPlanets_Public_Interact_InteractInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNITEDPLANETS_API UInteractInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNITEDPLANETS_API UInteractInterface(UInteractInterface&&); \
	UNITEDPLANETS_API UInteractInterface(const UInteractInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNITEDPLANETS_API, UInteractInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteractInterface)


#define UnitedPlanets_Source_UnitedPlanets_Public_Interact_InteractInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUInteractInterface(); \
	friend struct Z_Construct_UClass_UInteractInterface_Statics; \
public: \
	DECLARE_CLASS(UInteractInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/UnitedPlanets"), UNITEDPLANETS_API) \
	DECLARE_SERIALIZER(UInteractInterface)


#define UnitedPlanets_Source_UnitedPlanets_Public_Interact_InteractInterface_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	UnitedPlanets_Source_UnitedPlanets_Public_Interact_InteractInterface_h_13_GENERATED_UINTERFACE_BODY() \
	UnitedPlanets_Source_UnitedPlanets_Public_Interact_InteractInterface_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnitedPlanets_Source_UnitedPlanets_Public_Interact_InteractInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	UnitedPlanets_Source_UnitedPlanets_Public_Interact_InteractInterface_h_13_GENERATED_UINTERFACE_BODY() \
	UnitedPlanets_Source_UnitedPlanets_Public_Interact_InteractInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnitedPlanets_Source_UnitedPlanets_Public_Interact_InteractInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IInteractInterface() {} \
public: \
	typedef UInteractInterface UClassType; \
	typedef IInteractInterface ThisClass; \
	static void Execute_EndFocus(UObject* O); \
	static void Execute_OnInteract(UObject* O, AActor* Caller); \
	static void Execute_StartFocus(UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define UnitedPlanets_Source_UnitedPlanets_Public_Interact_InteractInterface_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IInteractInterface() {} \
public: \
	typedef UInteractInterface UClassType; \
	typedef IInteractInterface ThisClass; \
	static void Execute_EndFocus(UObject* O); \
	static void Execute_OnInteract(UObject* O, AActor* Caller); \
	static void Execute_StartFocus(UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define UnitedPlanets_Source_UnitedPlanets_Public_Interact_InteractInterface_h_10_PROLOG \
	UnitedPlanets_Source_UnitedPlanets_Public_Interact_InteractInterface_h_13_EVENT_PARMS


#define UnitedPlanets_Source_UnitedPlanets_Public_Interact_InteractInterface_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnitedPlanets_Source_UnitedPlanets_Public_Interact_InteractInterface_h_13_SPARSE_DATA \
	UnitedPlanets_Source_UnitedPlanets_Public_Interact_InteractInterface_h_13_RPC_WRAPPERS \
	UnitedPlanets_Source_UnitedPlanets_Public_Interact_InteractInterface_h_13_CALLBACK_WRAPPERS \
	UnitedPlanets_Source_UnitedPlanets_Public_Interact_InteractInterface_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnitedPlanets_Source_UnitedPlanets_Public_Interact_InteractInterface_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnitedPlanets_Source_UnitedPlanets_Public_Interact_InteractInterface_h_13_SPARSE_DATA \
	UnitedPlanets_Source_UnitedPlanets_Public_Interact_InteractInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	UnitedPlanets_Source_UnitedPlanets_Public_Interact_InteractInterface_h_13_CALLBACK_WRAPPERS \
	UnitedPlanets_Source_UnitedPlanets_Public_Interact_InteractInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNITEDPLANETS_API UClass* StaticClass<class UInteractInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UnitedPlanets_Source_UnitedPlanets_Public_Interact_InteractInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
