// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Facade_ES/NaveEnemiga_Basic.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNaveEnemiga_Basic() {}
// Cross Module References
	FACADE_ES_API UClass* Z_Construct_UClass_ANaveEnemiga_Basic_NoRegister();
	FACADE_ES_API UClass* Z_Construct_UClass_ANaveEnemiga_Basic();
	FACADE_ES_API UClass* Z_Construct_UClass_ANaveEnemiga();
	UPackage* Z_Construct_UPackage__Script_Facade_ES();
// End Cross Module References
	void ANaveEnemiga_Basic::StaticRegisterNativesANaveEnemiga_Basic()
	{
	}
	UClass* Z_Construct_UClass_ANaveEnemiga_Basic_NoRegister()
	{
		return ANaveEnemiga_Basic::StaticClass();
	}
	struct Z_Construct_UClass_ANaveEnemiga_Basic_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANaveEnemiga_Basic_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ANaveEnemiga,
		(UObject* (*)())Z_Construct_UPackage__Script_Facade_ES,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveEnemiga_Basic_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "NaveEnemiga_Basic.h" },
		{ "ModuleRelativePath", "NaveEnemiga_Basic.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANaveEnemiga_Basic_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANaveEnemiga_Basic>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANaveEnemiga_Basic_Statics::ClassParams = {
		&ANaveEnemiga_Basic::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ANaveEnemiga_Basic_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveEnemiga_Basic_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANaveEnemiga_Basic()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANaveEnemiga_Basic_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANaveEnemiga_Basic, 3129386671);
	template<> FACADE_ES_API UClass* StaticClass<ANaveEnemiga_Basic>()
	{
		return ANaveEnemiga_Basic::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANaveEnemiga_Basic(Z_Construct_UClass_ANaveEnemiga_Basic, &ANaveEnemiga_Basic::StaticClass, TEXT("/Script/Facade_ES"), TEXT("ANaveEnemiga_Basic"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANaveEnemiga_Basic);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
