// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Facade_ES/FACADE_UNITY.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFACADE_UNITY() {}
// Cross Module References
	FACADE_ES_API UClass* Z_Construct_UClass_AFACADE_UNITY_NoRegister();
	FACADE_ES_API UClass* Z_Construct_UClass_AFACADE_UNITY();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Facade_ES();
// End Cross Module References
	void AFACADE_UNITY::StaticRegisterNativesAFACADE_UNITY()
	{
	}
	UClass* Z_Construct_UClass_AFACADE_UNITY_NoRegister()
	{
		return AFACADE_UNITY::StaticClass();
	}
	struct Z_Construct_UClass_AFACADE_UNITY_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFACADE_UNITY_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Facade_ES,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFACADE_UNITY_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FACADE_UNITY.h" },
		{ "ModuleRelativePath", "FACADE_UNITY.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFACADE_UNITY_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFACADE_UNITY>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFACADE_UNITY_Statics::ClassParams = {
		&AFACADE_UNITY::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AFACADE_UNITY_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFACADE_UNITY_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFACADE_UNITY()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFACADE_UNITY_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFACADE_UNITY, 3177875437);
	template<> FACADE_ES_API UClass* StaticClass<AFACADE_UNITY>()
	{
		return AFACADE_UNITY::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFACADE_UNITY(Z_Construct_UClass_AFACADE_UNITY, &AFACADE_UNITY::StaticClass, TEXT("/Script/Facade_ES"), TEXT("AFACADE_UNITY"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFACADE_UNITY);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
