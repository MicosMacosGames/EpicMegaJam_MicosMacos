// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MM_EMJGameProject/EmptyActor2.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEmptyActor2() {}
// Cross Module References
	MM_EMJGAMEPROJECT_API UClass* Z_Construct_UClass_AEmptyActor2_NoRegister();
	MM_EMJGAMEPROJECT_API UClass* Z_Construct_UClass_AEmptyActor2();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_MM_EMJGameProject();
// End Cross Module References
	void AEmptyActor2::StaticRegisterNativesAEmptyActor2()
	{
	}
	UClass* Z_Construct_UClass_AEmptyActor2_NoRegister()
	{
		return AEmptyActor2::StaticClass();
	}
	struct Z_Construct_UClass_AEmptyActor2_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEmptyActor2_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MM_EMJGameProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEmptyActor2_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EmptyActor2.h" },
		{ "ModuleRelativePath", "EmptyActor2.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEmptyActor2_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEmptyActor2>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEmptyActor2_Statics::ClassParams = {
		&AEmptyActor2::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AEmptyActor2_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEmptyActor2_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEmptyActor2()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEmptyActor2_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEmptyActor2, 2191607486);
	template<> MM_EMJGAMEPROJECT_API UClass* StaticClass<AEmptyActor2>()
	{
		return AEmptyActor2::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEmptyActor2(Z_Construct_UClass_AEmptyActor2, &AEmptyActor2::StaticClass, TEXT("/Script/MM_EMJGameProject"), TEXT("AEmptyActor2"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEmptyActor2);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
