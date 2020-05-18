// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnitedPlanets/TP_ThirdPerson/TP_ThirdPersonCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTP_ThirdPersonCharacter() {}
// Cross Module References
	UNITEDPLANETS_API UClass* Z_Construct_UClass_ATP_ThirdPersonCharacter_NoRegister();
	UNITEDPLANETS_API UClass* Z_Construct_UClass_ATP_ThirdPersonCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_UnitedPlanets();
	UNITEDPLANETS_API UFunction* Z_Construct_UFunction_ATP_ThirdPersonCharacter_InteractCheck();
	UNITEDPLANETS_API UFunction* Z_Construct_UFunction_ATP_ThirdPersonCharacter_TraceForward();
	UNITEDPLANETS_API UClass* Z_Construct_UClass_AGunActor_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
// End Cross Module References
	static FName NAME_ATP_ThirdPersonCharacter_InteractCheck = FName(TEXT("InteractCheck"));
	void ATP_ThirdPersonCharacter::InteractCheck()
	{
		ProcessEvent(FindFunctionChecked(NAME_ATP_ThirdPersonCharacter_InteractCheck),NULL);
	}
	static FName NAME_ATP_ThirdPersonCharacter_TraceForward = FName(TEXT("TraceForward"));
	void ATP_ThirdPersonCharacter::TraceForward()
	{
		ProcessEvent(FindFunctionChecked(NAME_ATP_ThirdPersonCharacter_TraceForward),NULL);
	}
	void ATP_ThirdPersonCharacter::StaticRegisterNativesATP_ThirdPersonCharacter()
	{
		UClass* Class = ATP_ThirdPersonCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "TraceForward", &ATP_ThirdPersonCharacter::execTraceForward },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATP_ThirdPersonCharacter_InteractCheck_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATP_ThirdPersonCharacter_InteractCheck_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "ModuleRelativePath", "TP_ThirdPerson/TP_ThirdPersonCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATP_ThirdPersonCharacter_InteractCheck_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATP_ThirdPersonCharacter, nullptr, "InteractCheck", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATP_ThirdPersonCharacter_InteractCheck_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATP_ThirdPersonCharacter_InteractCheck_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATP_ThirdPersonCharacter_InteractCheck()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATP_ThirdPersonCharacter_InteractCheck_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATP_ThirdPersonCharacter_TraceForward_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATP_ThirdPersonCharacter_TraceForward_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TP_ThirdPerson/TP_ThirdPersonCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATP_ThirdPersonCharacter_TraceForward_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATP_ThirdPersonCharacter, nullptr, "TraceForward", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATP_ThirdPersonCharacter_TraceForward_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATP_ThirdPersonCharacter_TraceForward_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATP_ThirdPersonCharacter_TraceForward()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATP_ThirdPersonCharacter_TraceForward_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ATP_ThirdPersonCharacter_NoRegister()
	{
		return ATP_ThirdPersonCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ATP_ThirdPersonCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Gun_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Gun;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GunClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_GunClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotationRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RotationRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Reach_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Reach;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SphereTraceEnd_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SphereTraceEnd;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SphereTraceDirection_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SphereTraceDirection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerStartLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayerStartLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseLookUpRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseLookUpRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseTurnRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseTurnRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATP_ThirdPersonCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_UnitedPlanets,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATP_ThirdPersonCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATP_ThirdPersonCharacter_InteractCheck, "InteractCheck" }, // 304020567
		{ &Z_Construct_UFunction_ATP_ThirdPersonCharacter_TraceForward, "TraceForward" }, // 1487411271
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_ThirdPersonCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "TP_ThirdPerson/TP_ThirdPersonCharacter.h" },
		{ "ModuleRelativePath", "TP_ThirdPerson/TP_ThirdPersonCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_ThirdPersonCharacter_Statics::NewProp_Gun_MetaData[] = {
		{ "ModuleRelativePath", "TP_ThirdPerson/TP_ThirdPersonCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATP_ThirdPersonCharacter_Statics::NewProp_Gun = { "Gun", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATP_ThirdPersonCharacter, Gun), Z_Construct_UClass_AGunActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATP_ThirdPersonCharacter_Statics::NewProp_Gun_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATP_ThirdPersonCharacter_Statics::NewProp_Gun_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_ThirdPersonCharacter_Statics::NewProp_GunClass_MetaData[] = {
		{ "Category", "TP_ThirdPersonCharacter" },
		{ "ModuleRelativePath", "TP_ThirdPerson/TP_ThirdPersonCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ATP_ThirdPersonCharacter_Statics::NewProp_GunClass = { "GunClass", nullptr, (EPropertyFlags)0x0044000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATP_ThirdPersonCharacter, GunClass), Z_Construct_UClass_AGunActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ATP_ThirdPersonCharacter_Statics::NewProp_GunClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATP_ThirdPersonCharacter_Statics::NewProp_GunClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_ThirdPersonCharacter_Statics::NewProp_RotationRate_MetaData[] = {
		{ "Category", "TP_ThirdPersonCharacter" },
		{ "ModuleRelativePath", "TP_ThirdPerson/TP_ThirdPersonCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATP_ThirdPersonCharacter_Statics::NewProp_RotationRate = { "RotationRate", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATP_ThirdPersonCharacter, RotationRate), METADATA_PARAMS(Z_Construct_UClass_ATP_ThirdPersonCharacter_Statics::NewProp_RotationRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATP_ThirdPersonCharacter_Statics::NewProp_RotationRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_ThirdPersonCharacter_Statics::NewProp_Reach_MetaData[] = {
		{ "Category", "InteractCheck" },
		{ "ModuleRelativePath", "TP_ThirdPerson/TP_ThirdPersonCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATP_ThirdPersonCharacter_Statics::NewProp_Reach = { "Reach", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATP_ThirdPersonCharacter, Reach), METADATA_PARAMS(Z_Construct_UClass_ATP_ThirdPersonCharacter_Statics::NewProp_Reach_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATP_ThirdPersonCharacter_Statics::NewProp_Reach_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_ThirdPersonCharacter_Statics::NewProp_SphereTraceEnd_MetaData[] = {
		{ "Category", "InteractCheck" },
		{ "ModuleRelativePath", "TP_ThirdPerson/TP_ThirdPersonCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATP_ThirdPersonCharacter_Statics::NewProp_SphereTraceEnd = { "SphereTraceEnd", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATP_ThirdPersonCharacter, SphereTraceEnd), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ATP_ThirdPersonCharacter_Statics::NewProp_SphereTraceEnd_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATP_ThirdPersonCharacter_Statics::NewProp_SphereTraceEnd_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_ThirdPersonCharacter_Statics::NewProp_SphereTraceDirection_MetaData[] = {
		{ "Category", "InteractCheck" },
		{ "ModuleRelativePath", "TP_ThirdPerson/TP_ThirdPersonCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATP_ThirdPersonCharacter_Statics::NewProp_SphereTraceDirection = { "SphereTraceDirection", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATP_ThirdPersonCharacter, SphereTraceDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ATP_ThirdPersonCharacter_Statics::NewProp_SphereTraceDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATP_ThirdPersonCharacter_Statics::NewProp_SphereTraceDirection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_ThirdPersonCharacter_Statics::NewProp_PlayerStartLocation_MetaData[] = {
		{ "Category", "InteractCheck" },
		{ "ModuleRelativePath", "TP_ThirdPerson/TP_ThirdPersonCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATP_ThirdPersonCharacter_Statics::NewProp_PlayerStartLocation = { "PlayerStartLocation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATP_ThirdPersonCharacter, PlayerStartLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ATP_ThirdPersonCharacter_Statics::NewProp_PlayerStartLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATP_ThirdPersonCharacter_Statics::NewProp_PlayerStartLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_ThirdPersonCharacter_Statics::NewProp_BaseLookUpRate_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Base look up/down rate, in deg/sec. Other scaling may affect final rate. */" },
		{ "ModuleRelativePath", "TP_ThirdPerson/TP_ThirdPersonCharacter.h" },
		{ "ToolTip", "Base look up/down rate, in deg/sec. Other scaling may affect final rate." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATP_ThirdPersonCharacter_Statics::NewProp_BaseLookUpRate = { "BaseLookUpRate", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATP_ThirdPersonCharacter, BaseLookUpRate), METADATA_PARAMS(Z_Construct_UClass_ATP_ThirdPersonCharacter_Statics::NewProp_BaseLookUpRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATP_ThirdPersonCharacter_Statics::NewProp_BaseLookUpRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_ThirdPersonCharacter_Statics::NewProp_BaseTurnRate_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Base turn rate, in deg/sec. Other scaling may affect final turn rate. */" },
		{ "ModuleRelativePath", "TP_ThirdPerson/TP_ThirdPersonCharacter.h" },
		{ "ToolTip", "Base turn rate, in deg/sec. Other scaling may affect final turn rate." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATP_ThirdPersonCharacter_Statics::NewProp_BaseTurnRate = { "BaseTurnRate", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATP_ThirdPersonCharacter, BaseTurnRate), METADATA_PARAMS(Z_Construct_UClass_ATP_ThirdPersonCharacter_Statics::NewProp_BaseTurnRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATP_ThirdPersonCharacter_Statics::NewProp_BaseTurnRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_ThirdPersonCharacter_Statics::NewProp_FollowCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Follow camera */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TP_ThirdPerson/TP_ThirdPersonCharacter.h" },
		{ "ToolTip", "Follow camera" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATP_ThirdPersonCharacter_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATP_ThirdPersonCharacter, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATP_ThirdPersonCharacter_Statics::NewProp_FollowCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATP_ThirdPersonCharacter_Statics::NewProp_FollowCamera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_ThirdPersonCharacter_Statics::NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Camera boom positioning the camera behind the character */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TP_ThirdPerson/TP_ThirdPersonCharacter.h" },
		{ "ToolTip", "Camera boom positioning the camera behind the character" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATP_ThirdPersonCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATP_ThirdPersonCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATP_ThirdPersonCharacter_Statics::NewProp_CameraBoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATP_ThirdPersonCharacter_Statics::NewProp_CameraBoom_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATP_ThirdPersonCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_ThirdPersonCharacter_Statics::NewProp_Gun,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_ThirdPersonCharacter_Statics::NewProp_GunClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_ThirdPersonCharacter_Statics::NewProp_RotationRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_ThirdPersonCharacter_Statics::NewProp_Reach,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_ThirdPersonCharacter_Statics::NewProp_SphereTraceEnd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_ThirdPersonCharacter_Statics::NewProp_SphereTraceDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_ThirdPersonCharacter_Statics::NewProp_PlayerStartLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_ThirdPersonCharacter_Statics::NewProp_BaseLookUpRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_ThirdPersonCharacter_Statics::NewProp_BaseTurnRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_ThirdPersonCharacter_Statics::NewProp_FollowCamera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_ThirdPersonCharacter_Statics::NewProp_CameraBoom,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATP_ThirdPersonCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATP_ThirdPersonCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATP_ThirdPersonCharacter_Statics::ClassParams = {
		&ATP_ThirdPersonCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATP_ThirdPersonCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ATP_ThirdPersonCharacter_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATP_ThirdPersonCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATP_ThirdPersonCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATP_ThirdPersonCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATP_ThirdPersonCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATP_ThirdPersonCharacter, 1332833322);
	template<> UNITEDPLANETS_API UClass* StaticClass<ATP_ThirdPersonCharacter>()
	{
		return ATP_ThirdPersonCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATP_ThirdPersonCharacter(Z_Construct_UClass_ATP_ThirdPersonCharacter, &ATP_ThirdPersonCharacter::StaticClass, TEXT("/Script/UnitedPlanets"), TEXT("ATP_ThirdPersonCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATP_ThirdPersonCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
