// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Facade_ES/Facade_level.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFacade_level() {}
// Cross Module References
	FACADE_ES_API UClass* Z_Construct_UClass_AFacade_level_NoRegister();
	FACADE_ES_API UClass* Z_Construct_UClass_AFacade_level();
	FACADE_ES_API UClass* Z_Construct_UClass_AFACADE_UNITY();
	UPackage* Z_Construct_UPackage__Script_Facade_ES();
// End Cross Module References
	void AFacade_level::StaticRegisterNativesAFacade_level()
	{
	}
	UClass* Z_Construct_UClass_AFacade_level_NoRegister()
	{
		return AFacade_level::StaticClass();
	}
	struct Z_Construct_UClass_AFacade_level_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFacade_level_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFACADE_UNITY,
		(UObject* (*)())Z_Construct_UPackage__Script_Facade_ES,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFacade_level_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Facade_level.h" },
		{ "ModuleRelativePath", "Facade_level.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFacade_level_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFacade_level>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFacade_level_Statics::ClassParams = {
		&AFacade_level::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AFacade_level_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFacade_level_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFacade_level()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFacade_level_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFacade_level, 535484907);
	template<> FACADE_ES_API UClass* StaticClass<AFacade_level>()
	{
		return AFacade_level::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFacade_level(Z_Construct_UClass_AFacade_level, &AFacade_level::StaticClass, TEXT("/Script/Facade_ES"), TEXT("AFacade_level"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFacade_level);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
