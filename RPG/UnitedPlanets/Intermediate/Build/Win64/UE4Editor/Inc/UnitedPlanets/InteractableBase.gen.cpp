// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnitedPlanets/Public/Interact/InteractableBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractableBase() {}
// Cross Module References
	UNITEDPLANETS_API UClass* Z_Construct_UClass_AInteractableBase_NoRegister();
	UNITEDPLANETS_API UClass* Z_Construct_UClass_AInteractableBase();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_UnitedPlanets();
// End Cross Module References
	void AInteractableBase::StaticRegisterNativesAInteractableBase()
	{
	}
	UClass* Z_Construct_UClass_AInteractableBase_NoRegister()
	{
		return AInteractableBase::StaticClass();
	}
	struct Z_Construct_UClass_AInteractableBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AInteractableBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_UnitedPlanets,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInteractableBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Interact/InteractableBase.h" },
		{ "ModuleRelativePath", "Public/Interact/InteractableBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AInteractableBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AInteractableBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AInteractableBase_Statics::ClassParams = {
		&AInteractableBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AInteractableBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AInteractableBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AInteractableBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AInteractableBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AInteractableBase, 2635310643);
	template<> UNITEDPLANETS_API UClass* StaticClass<AInteractableBase>()
	{
		return AInteractableBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AInteractableBase(Z_Construct_UClass_AInteractableBase, &AInteractableBase::StaticClass, TEXT("/Script/UnitedPlanets"), TEXT("AInteractableBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AInteractableBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
