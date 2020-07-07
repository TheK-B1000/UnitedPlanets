// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnitedPlanets/Public/ShooterAIController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShooterAIController() {}
// Cross Module References
	UNITEDPLANETS_API UClass* Z_Construct_UClass_AShooterAIController_NoRegister();
	UNITEDPLANETS_API UClass* Z_Construct_UClass_AShooterAIController();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	UPackage* Z_Construct_UPackage__Script_UnitedPlanets();
// End Cross Module References
	void AShooterAIController::StaticRegisterNativesAShooterAIController()
	{
	}
	UClass* Z_Construct_UClass_AShooterAIController_NoRegister()
	{
		return AShooterAIController::StaticClass();
	}
	struct Z_Construct_UClass_AShooterAIController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AShooterAIController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_UnitedPlanets,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterAIController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "ShooterAIController.h" },
		{ "ModuleRelativePath", "Public/ShooterAIController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AShooterAIController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AShooterAIController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AShooterAIController_Statics::ClassParams = {
		&AShooterAIController::StaticClass,
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
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AShooterAIController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterAIController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AShooterAIController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AShooterAIController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AShooterAIController, 3769841584);
	template<> UNITEDPLANETS_API UClass* StaticClass<AShooterAIController>()
	{
		return AShooterAIController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AShooterAIController(Z_Construct_UClass_AShooterAIController, &AShooterAIController::StaticClass, TEXT("/Script/UnitedPlanets"), TEXT("AShooterAIController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AShooterAIController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
