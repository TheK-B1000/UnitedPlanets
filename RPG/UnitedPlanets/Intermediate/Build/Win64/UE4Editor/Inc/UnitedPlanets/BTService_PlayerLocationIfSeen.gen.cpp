// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnitedPlanets/Public/BTService_PlayerLocationIfSeen.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTService_PlayerLocationIfSeen() {}
// Cross Module References
	UNITEDPLANETS_API UClass* Z_Construct_UClass_UBTService_PlayerLocationIfSeen_NoRegister();
	UNITEDPLANETS_API UClass* Z_Construct_UClass_UBTService_PlayerLocationIfSeen();
	AIMODULE_API UClass* Z_Construct_UClass_UBTService_BlackboardBase();
	UPackage* Z_Construct_UPackage__Script_UnitedPlanets();
// End Cross Module References
	void UBTService_PlayerLocationIfSeen::StaticRegisterNativesUBTService_PlayerLocationIfSeen()
	{
	}
	UClass* Z_Construct_UClass_UBTService_PlayerLocationIfSeen_NoRegister()
	{
		return UBTService_PlayerLocationIfSeen::StaticClass();
	}
	struct Z_Construct_UClass_UBTService_PlayerLocationIfSeen_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTService_PlayerLocationIfSeen_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTService_BlackboardBase,
		(UObject* (*)())Z_Construct_UPackage__Script_UnitedPlanets,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTService_PlayerLocationIfSeen_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "BTService_PlayerLocationIfSeen.h" },
		{ "ModuleRelativePath", "Public/BTService_PlayerLocationIfSeen.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTService_PlayerLocationIfSeen_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTService_PlayerLocationIfSeen>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBTService_PlayerLocationIfSeen_Statics::ClassParams = {
		&UBTService_PlayerLocationIfSeen::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBTService_PlayerLocationIfSeen_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_PlayerLocationIfSeen_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTService_PlayerLocationIfSeen()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBTService_PlayerLocationIfSeen_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBTService_PlayerLocationIfSeen, 809537815);
	template<> UNITEDPLANETS_API UClass* StaticClass<UBTService_PlayerLocationIfSeen>()
	{
		return UBTService_PlayerLocationIfSeen::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTService_PlayerLocationIfSeen(Z_Construct_UClass_UBTService_PlayerLocationIfSeen, &UBTService_PlayerLocationIfSeen::StaticClass, TEXT("/Script/UnitedPlanets"), TEXT("UBTService_PlayerLocationIfSeen"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTService_PlayerLocationIfSeen);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
