// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InkEditor/Private/StoryAssetFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStoryAssetFactory() {}
// Cross Module References
	INKEDITOR_API UClass* Z_Construct_UClass_UStoryAssetFactory_NoRegister();
	INKEDITOR_API UClass* Z_Construct_UClass_UStoryAssetFactory();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_InkEditor();
// End Cross Module References
	void UStoryAssetFactory::StaticRegisterNativesUStoryAssetFactory()
	{
	}
	UClass* Z_Construct_UClass_UStoryAssetFactory_NoRegister()
	{
		return UStoryAssetFactory::StaticClass();
	}
	struct Z_Construct_UClass_UStoryAssetFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStoryAssetFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_InkEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStoryAssetFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "StoryAssetFactory.h" },
		{ "ModuleRelativePath", "Private/StoryAssetFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStoryAssetFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStoryAssetFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UStoryAssetFactory_Statics::ClassParams = {
		&UStoryAssetFactory::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UStoryAssetFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStoryAssetFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStoryAssetFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UStoryAssetFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UStoryAssetFactory, 3377803910);
	template<> INKEDITOR_API UClass* StaticClass<UStoryAssetFactory>()
	{
		return UStoryAssetFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UStoryAssetFactory(Z_Construct_UClass_UStoryAssetFactory, &UStoryAssetFactory::StaticClass, TEXT("/Script/InkEditor"), TEXT("UStoryAssetFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStoryAssetFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
