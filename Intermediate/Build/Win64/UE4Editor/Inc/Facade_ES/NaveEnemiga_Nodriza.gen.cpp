// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Facade_ES/NaveEnemiga_Nodriza.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNaveEnemiga_Nodriza() {}
// Cross Module References
	FACADE_ES_API UClass* Z_Construct_UClass_ANaveEnemiga_Nodriza_NoRegister();
	FACADE_ES_API UClass* Z_Construct_UClass_ANaveEnemiga_Nodriza();
	FACADE_ES_API UClass* Z_Construct_UClass_ANaveEnemiga();
	UPackage* Z_Construct_UPackage__Script_Facade_ES();
// End Cross Module References
	void ANaveEnemiga_Nodriza::StaticRegisterNativesANaveEnemiga_Nodriza()
	{
	}
	UClass* Z_Construct_UClass_ANaveEnemiga_Nodriza_NoRegister()
	{
		return ANaveEnemiga_Nodriza::StaticClass();
	}
	struct Z_Construct_UClass_ANaveEnemiga_Nodriza_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANaveEnemiga_Nodriza_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ANaveEnemiga,
		(UObject* (*)())Z_Construct_UPackage__Script_Facade_ES,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveEnemiga_Nodriza_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "NaveEnemiga_Nodriza.h" },
		{ "ModuleRelativePath", "NaveEnemiga_Nodriza.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANaveEnemiga_Nodriza_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANaveEnemiga_Nodriza>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANaveEnemiga_Nodriza_Statics::ClassParams = {
		&ANaveEnemiga_Nodriza::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ANaveEnemiga_Nodriza_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveEnemiga_Nodriza_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANaveEnemiga_Nodriza()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANaveEnemiga_Nodriza_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANaveEnemiga_Nodriza, 2037813023);
	template<> FACADE_ES_API UClass* StaticClass<ANaveEnemiga_Nodriza>()
	{
		return ANaveEnemiga_Nodriza::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANaveEnemiga_Nodriza(Z_Construct_UClass_ANaveEnemiga_Nodriza, &ANaveEnemiga_Nodriza::StaticClass, TEXT("/Script/Facade_ES"), TEXT("ANaveEnemiga_Nodriza"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANaveEnemiga_Nodriza);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
