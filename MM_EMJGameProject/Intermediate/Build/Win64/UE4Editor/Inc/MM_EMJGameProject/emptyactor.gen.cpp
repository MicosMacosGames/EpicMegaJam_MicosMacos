// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MM_EMJGameProject/emptyactor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeemptyactor() {}
// Cross Module References
	MM_EMJGAMEPROJECT_API UClass* Z_Construct_UClass_Aemptyactor_NoRegister();
	MM_EMJGAMEPROJECT_API UClass* Z_Construct_UClass_Aemptyactor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_MM_EMJGameProject();
// End Cross Module References
	void Aemptyactor::StaticRegisterNativesAemptyactor()
	{
	}
	UClass* Z_Construct_UClass_Aemptyactor_NoRegister()
	{
		return Aemptyactor::StaticClass();
	}
	struct Z_Construct_UClass_Aemptyactor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_Aemptyactor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MM_EMJGameProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aemptyactor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "emptyactor.h" },
		{ "ModuleRelativePath", "emptyactor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_Aemptyactor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Aemptyactor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_Aemptyactor_Statics::ClassParams = {
		&Aemptyactor::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_Aemptyactor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_Aemptyactor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_Aemptyactor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_Aemptyactor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(Aemptyactor, 1050812495);
	template<> MM_EMJGAMEPROJECT_API UClass* StaticClass<Aemptyactor>()
	{
		return Aemptyactor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_Aemptyactor(Z_Construct_UClass_Aemptyactor, &Aemptyactor::StaticClass, TEXT("/Script/MM_EMJGameProject"), TEXT("Aemptyactor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(Aemptyactor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
