// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Facade_ES/NaveEnemiga.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNaveEnemiga() {}
// Cross Module References
	FACADE_ES_API UClass* Z_Construct_UClass_ANaveEnemiga_NoRegister();
	FACADE_ES_API UClass* Z_Construct_UClass_ANaveEnemiga();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Facade_ES();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void ANaveEnemiga::StaticRegisterNativesANaveEnemiga()
	{
	}
	UClass* Z_Construct_UClass_ANaveEnemiga_NoRegister()
	{
		return ANaveEnemiga::StaticClass();
	}
	struct Z_Construct_UClass_ANaveEnemiga_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_malla_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_malla;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANaveEnemiga_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Facade_ES,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveEnemiga_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NaveEnemiga.h" },
		{ "ModuleRelativePath", "NaveEnemiga.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveEnemiga_Statics::NewProp_malla_MetaData[] = {
		{ "Category", "Nave Enemiga" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "NaveEnemiga.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANaveEnemiga_Statics::NewProp_malla = { "malla", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANaveEnemiga, malla), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANaveEnemiga_Statics::NewProp_malla_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveEnemiga_Statics::NewProp_malla_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANaveEnemiga_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANaveEnemiga_Statics::NewProp_malla,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANaveEnemiga_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANaveEnemiga>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANaveEnemiga_Statics::ClassParams = {
		&ANaveEnemiga::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ANaveEnemiga_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ANaveEnemiga_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ANaveEnemiga_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveEnemiga_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANaveEnemiga()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANaveEnemiga_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANaveEnemiga, 3490381264);
	template<> FACADE_ES_API UClass* StaticClass<ANaveEnemiga>()
	{
		return ANaveEnemiga::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANaveEnemiga(Z_Construct_UClass_ANaveEnemiga, &ANaveEnemiga::StaticClass, TEXT("/Script/Facade_ES"), TEXT("ANaveEnemiga"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANaveEnemiga);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
