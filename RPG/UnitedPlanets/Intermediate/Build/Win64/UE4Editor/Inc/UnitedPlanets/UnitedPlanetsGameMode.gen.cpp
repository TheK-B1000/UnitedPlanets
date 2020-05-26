// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnitedPlanets/UnitedPlanetsGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUnitedPlanetsGameMode() {}
// Cross Module References
	UNITEDPLANETS_API UClass* Z_Construct_UClass_AUnitedPlanetsGameMode_NoRegister();
	UNITEDPLANETS_API UClass* Z_Construct_UClass_AUnitedPlanetsGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_UnitedPlanets();
// End Cross Module References
	void AUnitedPlanetsGameMode::StaticRegisterNativesAUnitedPlanetsGameMode()
	{
	}
	UClass* Z_Construct_UClass_AUnitedPlanetsGameMode_NoRegister()
	{
		return AUnitedPlanetsGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AUnitedPlanetsGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUnitedPlanetsGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_UnitedPlanets,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnitedPlanetsGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "UnitedPlanetsGameMode.h" },
		{ "ModuleRelativePath", "UnitedPlanetsGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUnitedPlanetsGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUnitedPlanetsGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AUnitedPlanetsGameMode_Statics::ClassParams = {
		&AUnitedPlanetsGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AUnitedPlanetsGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AUnitedPlanetsGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUnitedPlanetsGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AUnitedPlanetsGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AUnitedPlanetsGameMode, 3732072713);
	template<> UNITEDPLANETS_API UClass* StaticClass<AUnitedPlanetsGameMode>()
	{
		return AUnitedPlanetsGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AUnitedPlanetsGameMode(Z_Construct_UClass_AUnitedPlanetsGameMode, &AUnitedPlanetsGameMode::StaticClass, TEXT("/Script/UnitedPlanets"), TEXT("AUnitedPlanetsGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUnitedPlanetsGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
