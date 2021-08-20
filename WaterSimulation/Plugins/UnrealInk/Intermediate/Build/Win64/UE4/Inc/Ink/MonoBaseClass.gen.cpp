// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Ink/Private/MonoBaseClass.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMonoBaseClass() {}
// Cross Module References
	INK_API UClass* Z_Construct_UClass_UMonoBaseClass_NoRegister();
	INK_API UClass* Z_Construct_UClass_UMonoBaseClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Ink();
// End Cross Module References
	void UMonoBaseClass::StaticRegisterNativesUMonoBaseClass()
	{
	}
	UClass* Z_Construct_UClass_UMonoBaseClass_NoRegister()
	{
		return UMonoBaseClass::StaticClass();
	}
	struct Z_Construct_UClass_UMonoBaseClass_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMonoBaseClass_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Ink,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMonoBaseClass_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MonoBaseClass.h" },
		{ "ModuleRelativePath", "Private/MonoBaseClass.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMonoBaseClass_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMonoBaseClass>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMonoBaseClass_Statics::ClassParams = {
		&UMonoBaseClass::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMonoBaseClass_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMonoBaseClass_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMonoBaseClass()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMonoBaseClass_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMonoBaseClass, 2575476537);
	template<> INK_API UClass* StaticClass<UMonoBaseClass>()
	{
		return UMonoBaseClass::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMonoBaseClass(Z_Construct_UClass_UMonoBaseClass, &UMonoBaseClass::StaticClass, TEXT("/Script/Ink"), TEXT("UMonoBaseClass"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMonoBaseClass);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
