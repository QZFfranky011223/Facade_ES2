// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Facade_ES/Enemigo_Facade.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemigo_Facade() {}
// Cross Module References
	FACADE_ES_API UClass* Z_Construct_UClass_AEnemigo_Facade_NoRegister();
	FACADE_ES_API UClass* Z_Construct_UClass_AEnemigo_Facade();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Facade_ES();
	FACADE_ES_API UClass* Z_Construct_UClass_AFacade_level_NoRegister();
	FACADE_ES_API UClass* Z_Construct_UClass_AFACADE_UNITY_NoRegister();
// End Cross Module References
	void AEnemigo_Facade::StaticRegisterNativesAEnemigo_Facade()
	{
	}
	UClass* Z_Construct_UClass_AEnemigo_Facade_NoRegister()
	{
		return AEnemigo_Facade::StaticClass();
	}
	struct Z_Construct_UClass_AEnemigo_Facade_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NivelActual_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NivelActual;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Nivel_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Nivel_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Nivel;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Ordenado_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Ordenado_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Ordenado;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemigo_Facade_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Facade_ES,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemigo_Facade_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Enemigo_Facade.h" },
		{ "ModuleRelativePath", "Enemigo_Facade.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemigo_Facade_Statics::NewProp_NivelActual_MetaData[] = {
		{ "ModuleRelativePath", "Enemigo_Facade.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemigo_Facade_Statics::NewProp_NivelActual = { "NivelActual", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemigo_Facade, NivelActual), Z_Construct_UClass_AFacade_level_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEnemigo_Facade_Statics::NewProp_NivelActual_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigo_Facade_Statics::NewProp_NivelActual_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemigo_Facade_Statics::NewProp_Nivel_Inner = { "Nivel", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AFACADE_UNITY_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemigo_Facade_Statics::NewProp_Nivel_MetaData[] = {
		{ "ModuleRelativePath", "Enemigo_Facade.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AEnemigo_Facade_Statics::NewProp_Nivel = { "Nivel", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemigo_Facade, Nivel), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AEnemigo_Facade_Statics::NewProp_Nivel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigo_Facade_Statics::NewProp_Nivel_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_AEnemigo_Facade_Statics::NewProp_Ordenado_Inner = { "Ordenado", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemigo_Facade_Statics::NewProp_Ordenado_MetaData[] = {
		{ "ModuleRelativePath", "Enemigo_Facade.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AEnemigo_Facade_Statics::NewProp_Ordenado = { "Ordenado", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemigo_Facade, Ordenado), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AEnemigo_Facade_Statics::NewProp_Ordenado_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigo_Facade_Statics::NewProp_Ordenado_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEnemigo_Facade_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemigo_Facade_Statics::NewProp_NivelActual,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemigo_Facade_Statics::NewProp_Nivel_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemigo_Facade_Statics::NewProp_Nivel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemigo_Facade_Statics::NewProp_Ordenado_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemigo_Facade_Statics::NewProp_Ordenado,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemigo_Facade_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemigo_Facade>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEnemigo_Facade_Statics::ClassParams = {
		&AEnemigo_Facade::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AEnemigo_Facade_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigo_Facade_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEnemigo_Facade_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigo_Facade_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEnemigo_Facade()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEnemigo_Facade_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEnemigo_Facade, 3745192458);
	template<> FACADE_ES_API UClass* StaticClass<AEnemigo_Facade>()
	{
		return AEnemigo_Facade::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEnemigo_Facade(Z_Construct_UClass_AEnemigo_Facade, &AEnemigo_Facade::StaticClass, TEXT("/Script/Facade_ES"), TEXT("AEnemigo_Facade"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemigo_Facade);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
