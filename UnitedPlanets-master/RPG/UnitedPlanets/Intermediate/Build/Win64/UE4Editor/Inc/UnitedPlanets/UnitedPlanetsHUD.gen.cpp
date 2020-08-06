// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnitedPlanets/UnitedPlanetsHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUnitedPlanetsHUD() {}
// Cross Module References
	UNITEDPLANETS_API UClass* Z_Construct_UClass_AUnitedPlanetsHUD_NoRegister();
	UNITEDPLANETS_API UClass* Z_Construct_UClass_AUnitedPlanetsHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_UnitedPlanets();
// End Cross Module References
	void AUnitedPlanetsHUD::StaticRegisterNativesAUnitedPlanetsHUD()
	{
	}
	UClass* Z_Construct_UClass_AUnitedPlanetsHUD_NoRegister()
	{
		return AUnitedPlanetsHUD::StaticClass();
	}
	struct Z_Construct_UClass_AUnitedPlanetsHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUnitedPlanetsHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_UnitedPlanets,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnitedPlanetsHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "UnitedPlanetsHUD.h" },
		{ "ModuleRelativePath", "UnitedPlanetsHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUnitedPlanetsHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUnitedPlanetsHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AUnitedPlanetsHUD_Statics::ClassParams = {
		&AUnitedPlanetsHUD::StaticClass,
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
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AUnitedPlanetsHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AUnitedPlanetsHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUnitedPlanetsHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AUnitedPlanetsHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AUnitedPlanetsHUD, 1872341999);
	template<> UNITEDPLANETS_API UClass* StaticClass<AUnitedPlanetsHUD>()
	{
		return AUnitedPlanetsHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AUnitedPlanetsHUD(Z_Construct_UClass_AUnitedPlanetsHUD, &AUnitedPlanetsHUD::StaticClass, TEXT("/Script/UnitedPlanets"), TEXT("AUnitedPlanetsHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUnitedPlanetsHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
