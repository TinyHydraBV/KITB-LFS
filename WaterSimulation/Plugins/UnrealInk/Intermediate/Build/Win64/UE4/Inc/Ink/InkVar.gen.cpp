// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Ink/Public/InkVar.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInkVar() {}
// Cross Module References
	INK_API UEnum* Z_Construct_UEnum_Ink_EInkVarType();
	UPackage* Z_Construct_UPackage__Script_Ink();
	INK_API UScriptStruct* Z_Construct_UScriptStruct_FInkVar();
	INK_API UClass* Z_Construct_UClass_UInkVarLibrary_NoRegister();
	INK_API UClass* Z_Construct_UClass_UInkVarLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
// End Cross Module References
	static UEnum* EInkVarType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Ink_EInkVarType, Z_Construct_UPackage__Script_Ink(), TEXT("EInkVarType"));
		}
		return Singleton;
	}
	template<> INK_API UEnum* StaticEnum<EInkVarType>()
	{
		return EInkVarType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EInkVarType(EInkVarType_StaticEnum, TEXT("/Script/Ink"), TEXT("EInkVarType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Ink_EInkVarType_Hash() { return 496110767U; }
	UEnum* Z_Construct_UEnum_Ink_EInkVarType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Ink();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EInkVarType"), 0, Get_Z_Construct_UEnum_Ink_EInkVarType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EInkVarType::Float", (int64)EInkVarType::Float },
				{ "EInkVarType::Int", (int64)EInkVarType::Int },
				{ "EInkVarType::String", (int64)EInkVarType::String },
				{ "EInkVarType::None", (int64)EInkVarType::None },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "// A wrapper for passing around ink vars to and fro ink itself\n// Not templated so it can be used in blueprints\n" },
				{ "Float.Name", "EInkVarType::Float" },
				{ "Int.Name", "EInkVarType::Int" },
				{ "ModuleRelativePath", "Public/InkVar.h" },
				{ "None.Name", "EInkVarType::None" },
				{ "String.Name", "EInkVarType::String" },
				{ "ToolTip", "A wrapper for passing around ink vars to and fro ink itself\nNot templated so it can be used in blueprints" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Ink,
				nullptr,
				"EInkVarType",
				"EInkVarType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FInkVar::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern INK_API uint32 Get_Z_Construct_UScriptStruct_FInkVar_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FInkVar, Z_Construct_UPackage__Script_Ink(), TEXT("InkVar"), sizeof(FInkVar), Get_Z_Construct_UScriptStruct_FInkVar_Hash());
	}
	return Singleton;
}
template<> INK_API UScriptStruct* StaticStruct<FInkVar>()
{
	return FInkVar::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FInkVar(FInkVar::StaticStruct, TEXT("/Script/Ink"), TEXT("InkVar"), false, nullptr, nullptr);
static struct FScriptStruct_Ink_StaticRegisterNativesFInkVar
{
	FScriptStruct_Ink_StaticRegisterNativesFInkVar()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("InkVar")),new UScriptStruct::TCppStructOps<FInkVar>);
	}
} ScriptStruct_Ink_StaticRegisterNativesFInkVar;
	struct Z_Construct_UScriptStruct_FInkVar_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_type_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_type_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_type;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_floatVar_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_floatVar;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_intVar_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_intVar;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_stringVar_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_stringVar;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInkVar_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/InkVar.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInkVar_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInkVar>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FInkVar_Statics::NewProp_type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInkVar_Statics::NewProp_type_MetaData[] = {
		{ "Category", "Ink" },
		{ "ModuleRelativePath", "Public/InkVar.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FInkVar_Statics::NewProp_type = { "type", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInkVar, type), Z_Construct_UEnum_Ink_EInkVarType, METADATA_PARAMS(Z_Construct_UScriptStruct_FInkVar_Statics::NewProp_type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInkVar_Statics::NewProp_type_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInkVar_Statics::NewProp_floatVar_MetaData[] = {
		{ "Category", "Ink" },
		{ "ModuleRelativePath", "Public/InkVar.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInkVar_Statics::NewProp_floatVar = { "floatVar", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInkVar, floatVar), METADATA_PARAMS(Z_Construct_UScriptStruct_FInkVar_Statics::NewProp_floatVar_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInkVar_Statics::NewProp_floatVar_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInkVar_Statics::NewProp_intVar_MetaData[] = {
		{ "Category", "Ink" },
		{ "ModuleRelativePath", "Public/InkVar.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FInkVar_Statics::NewProp_intVar = { "intVar", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInkVar, intVar), METADATA_PARAMS(Z_Construct_UScriptStruct_FInkVar_Statics::NewProp_intVar_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInkVar_Statics::NewProp_intVar_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInkVar_Statics::NewProp_stringVar_MetaData[] = {
		{ "Category", "Ink" },
		{ "ModuleRelativePath", "Public/InkVar.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInkVar_Statics::NewProp_stringVar = { "stringVar", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInkVar, stringVar), METADATA_PARAMS(Z_Construct_UScriptStruct_FInkVar_Statics::NewProp_stringVar_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInkVar_Statics::NewProp_stringVar_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInkVar_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInkVar_Statics::NewProp_type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInkVar_Statics::NewProp_type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInkVar_Statics::NewProp_floatVar,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInkVar_Statics::NewProp_intVar,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInkVar_Statics::NewProp_stringVar,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInkVar_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Ink,
		nullptr,
		&NewStructOps,
		"InkVar",
		sizeof(FInkVar),
		alignof(FInkVar),
		Z_Construct_UScriptStruct_FInkVar_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInkVar_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInkVar_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInkVar_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInkVar()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FInkVar_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Ink();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("InkVar"), sizeof(FInkVar), Get_Z_Construct_UScriptStruct_FInkVar_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FInkVar_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FInkVar_Hash() { return 3331496659U; }
	DEFINE_FUNCTION(UInkVarLibrary::execConv_BoolInkVar)
	{
		P_GET_UBOOL(Z_Param_Boolean);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FInkVar*)Z_Param__Result=UInkVarLibrary::Conv_BoolInkVar(Z_Param_Boolean);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInkVarLibrary::execConv_TextInkVar)
	{
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_Text);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FInkVar*)Z_Param__Result=UInkVarLibrary::Conv_TextInkVar(Z_Param_Out_Text);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInkVarLibrary::execConv_FloatInkVar)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Number);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FInkVar*)Z_Param__Result=UInkVarLibrary::Conv_FloatInkVar(Z_Param_Number);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInkVarLibrary::execConv_IntInkVar)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Number);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FInkVar*)Z_Param__Result=UInkVarLibrary::Conv_IntInkVar(Z_Param_Number);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInkVarLibrary::execConv_StringInkVar)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_String);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FInkVar*)Z_Param__Result=UInkVarLibrary::Conv_StringInkVar(Z_Param_String);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInkVarLibrary::execConv_InkVarBool)
	{
		P_GET_STRUCT_REF(FInkVar,Z_Param_Out_InkVar);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UInkVarLibrary::Conv_InkVarBool(Z_Param_Out_InkVar);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInkVarLibrary::execConv_InkVarText)
	{
		P_GET_STRUCT_REF(FInkVar,Z_Param_Out_InkVar);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=UInkVarLibrary::Conv_InkVarText(Z_Param_Out_InkVar);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInkVarLibrary::execConv_InkVarName)
	{
		P_GET_STRUCT_REF(FInkVar,Z_Param_Out_InkVar);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=UInkVarLibrary::Conv_InkVarName(Z_Param_Out_InkVar);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInkVarLibrary::execConv_InkVarFloat)
	{
		P_GET_STRUCT_REF(FInkVar,Z_Param_Out_InkVar);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UInkVarLibrary::Conv_InkVarFloat(Z_Param_Out_InkVar);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInkVarLibrary::execConv_InkVarInt)
	{
		P_GET_STRUCT_REF(FInkVar,Z_Param_Out_InkVar);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UInkVarLibrary::Conv_InkVarInt(Z_Param_Out_InkVar);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInkVarLibrary::execConv_InkVarString)
	{
		P_GET_STRUCT_REF(FInkVar,Z_Param_Out_InkVar);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UInkVarLibrary::Conv_InkVarString(Z_Param_Out_InkVar);
		P_NATIVE_END;
	}
	void UInkVarLibrary::StaticRegisterNativesUInkVarLibrary()
	{
		UClass* Class = UInkVarLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Conv_BoolInkVar", &UInkVarLibrary::execConv_BoolInkVar },
			{ "Conv_FloatInkVar", &UInkVarLibrary::execConv_FloatInkVar },
			{ "Conv_InkVarBool", &UInkVarLibrary::execConv_InkVarBool },
			{ "Conv_InkVarFloat", &UInkVarLibrary::execConv_InkVarFloat },
			{ "Conv_InkVarInt", &UInkVarLibrary::execConv_InkVarInt },
			{ "Conv_InkVarName", &UInkVarLibrary::execConv_InkVarName },
			{ "Conv_InkVarString", &UInkVarLibrary::execConv_InkVarString },
			{ "Conv_InkVarText", &UInkVarLibrary::execConv_InkVarText },
			{ "Conv_IntInkVar", &UInkVarLibrary::execConv_IntInkVar },
			{ "Conv_StringInkVar", &UInkVarLibrary::execConv_StringInkVar },
			{ "Conv_TextInkVar", &UInkVarLibrary::execConv_TextInkVar },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInkVarLibrary_Conv_BoolInkVar_Statics
	{
		struct InkVarLibrary_eventConv_BoolInkVar_Parms
		{
			bool Boolean;
			FInkVar ReturnValue;
		};
		static void NewProp_Boolean_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Boolean;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UInkVarLibrary_Conv_BoolInkVar_Statics::NewProp_Boolean_SetBit(void* Obj)
	{
		((InkVarLibrary_eventConv_BoolInkVar_Parms*)Obj)->Boolean = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInkVarLibrary_Conv_BoolInkVar_Statics::NewProp_Boolean = { "Boolean", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(InkVarLibrary_eventConv_BoolInkVar_Parms), &Z_Construct_UFunction_UInkVarLibrary_Conv_BoolInkVar_Statics::NewProp_Boolean_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkVarLibrary_Conv_BoolInkVar_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InkVarLibrary_eventConv_BoolInkVar_Parms, ReturnValue), Z_Construct_UScriptStruct_FInkVar, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkVarLibrary_Conv_BoolInkVar_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkVarLibrary_Conv_BoolInkVar_Statics::NewProp_Boolean,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkVarLibrary_Conv_BoolInkVar_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInkVarLibrary_Conv_BoolInkVar_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Ink" },
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "Ink Var (Bool)" },
		{ "ModuleRelativePath", "Public/InkVar.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkVarLibrary_Conv_BoolInkVar_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInkVarLibrary, nullptr, "Conv_BoolInkVar", nullptr, nullptr, sizeof(InkVarLibrary_eventConv_BoolInkVar_Parms), Z_Construct_UFunction_UInkVarLibrary_Conv_BoolInkVar_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkVarLibrary_Conv_BoolInkVar_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInkVarLibrary_Conv_BoolInkVar_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkVarLibrary_Conv_BoolInkVar_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInkVarLibrary_Conv_BoolInkVar()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInkVarLibrary_Conv_BoolInkVar_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInkVarLibrary_Conv_FloatInkVar_Statics
	{
		struct InkVarLibrary_eventConv_FloatInkVar_Parms
		{
			float Number;
			FInkVar ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Number;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInkVarLibrary_Conv_FloatInkVar_Statics::NewProp_Number = { "Number", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InkVarLibrary_eventConv_FloatInkVar_Parms, Number), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkVarLibrary_Conv_FloatInkVar_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InkVarLibrary_eventConv_FloatInkVar_Parms, ReturnValue), Z_Construct_UScriptStruct_FInkVar, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkVarLibrary_Conv_FloatInkVar_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkVarLibrary_Conv_FloatInkVar_Statics::NewProp_Number,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkVarLibrary_Conv_FloatInkVar_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInkVarLibrary_Conv_FloatInkVar_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Ink" },
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "Ink Var (Float)" },
		{ "ModuleRelativePath", "Public/InkVar.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkVarLibrary_Conv_FloatInkVar_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInkVarLibrary, nullptr, "Conv_FloatInkVar", nullptr, nullptr, sizeof(InkVarLibrary_eventConv_FloatInkVar_Parms), Z_Construct_UFunction_UInkVarLibrary_Conv_FloatInkVar_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkVarLibrary_Conv_FloatInkVar_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInkVarLibrary_Conv_FloatInkVar_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkVarLibrary_Conv_FloatInkVar_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInkVarLibrary_Conv_FloatInkVar()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInkVarLibrary_Conv_FloatInkVar_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarBool_Statics
	{
		struct InkVarLibrary_eventConv_InkVarBool_Parms
		{
			FInkVar InkVar;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InkVar_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InkVar;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarBool_Statics::NewProp_InkVar_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarBool_Statics::NewProp_InkVar = { "InkVar", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InkVarLibrary_eventConv_InkVarBool_Parms, InkVar), Z_Construct_UScriptStruct_FInkVar, METADATA_PARAMS(Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarBool_Statics::NewProp_InkVar_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarBool_Statics::NewProp_InkVar_MetaData)) };
	void Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarBool_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InkVarLibrary_eventConv_InkVarBool_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarBool_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(InkVarLibrary_eventConv_InkVarBool_Parms), &Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarBool_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarBool_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarBool_Statics::NewProp_InkVar,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarBool_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarBool_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Ink" },
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "Bool (Ink Var)" },
		{ "ModuleRelativePath", "Public/InkVar.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarBool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInkVarLibrary, nullptr, "Conv_InkVarBool", nullptr, nullptr, sizeof(InkVarLibrary_eventConv_InkVarBool_Parms), Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarBool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarBool_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarBool_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarBool_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarBool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarBool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarFloat_Statics
	{
		struct InkVarLibrary_eventConv_InkVarFloat_Parms
		{
			FInkVar InkVar;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InkVar_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InkVar;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarFloat_Statics::NewProp_InkVar_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarFloat_Statics::NewProp_InkVar = { "InkVar", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InkVarLibrary_eventConv_InkVarFloat_Parms, InkVar), Z_Construct_UScriptStruct_FInkVar, METADATA_PARAMS(Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarFloat_Statics::NewProp_InkVar_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarFloat_Statics::NewProp_InkVar_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InkVarLibrary_eventConv_InkVarFloat_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarFloat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarFloat_Statics::NewProp_InkVar,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarFloat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarFloat_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Ink" },
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "Float (Ink Var)" },
		{ "ModuleRelativePath", "Public/InkVar.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInkVarLibrary, nullptr, "Conv_InkVarFloat", nullptr, nullptr, sizeof(InkVarLibrary_eventConv_InkVarFloat_Parms), Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarFloat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarFloat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarFloat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarInt_Statics
	{
		struct InkVarLibrary_eventConv_InkVarInt_Parms
		{
			FInkVar InkVar;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InkVar_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InkVar;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarInt_Statics::NewProp_InkVar_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarInt_Statics::NewProp_InkVar = { "InkVar", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InkVarLibrary_eventConv_InkVarInt_Parms, InkVar), Z_Construct_UScriptStruct_FInkVar, METADATA_PARAMS(Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarInt_Statics::NewProp_InkVar_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarInt_Statics::NewProp_InkVar_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarInt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InkVarLibrary_eventConv_InkVarInt_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarInt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarInt_Statics::NewProp_InkVar,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarInt_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarInt_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Ink" },
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "Int (Ink Var)" },
		{ "ModuleRelativePath", "Public/InkVar.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInkVarLibrary, nullptr, "Conv_InkVarInt", nullptr, nullptr, sizeof(InkVarLibrary_eventConv_InkVarInt_Parms), Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarInt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarInt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarInt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarInt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarInt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarInt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarName_Statics
	{
		struct InkVarLibrary_eventConv_InkVarName_Parms
		{
			FInkVar InkVar;
			FName ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InkVar_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InkVar;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarName_Statics::NewProp_InkVar_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarName_Statics::NewProp_InkVar = { "InkVar", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InkVarLibrary_eventConv_InkVarName_Parms, InkVar), Z_Construct_UScriptStruct_FInkVar, METADATA_PARAMS(Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarName_Statics::NewProp_InkVar_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarName_Statics::NewProp_InkVar_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InkVarLibrary_eventConv_InkVarName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarName_Statics::NewProp_InkVar,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarName_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Ink" },
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "Name (Ink Var)" },
		{ "ModuleRelativePath", "Public/InkVar.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInkVarLibrary, nullptr, "Conv_InkVarName", nullptr, nullptr, sizeof(InkVarLibrary_eventConv_InkVarName_Parms), Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarString_Statics
	{
		struct InkVarLibrary_eventConv_InkVarString_Parms
		{
			FInkVar InkVar;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InkVar_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InkVar;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarString_Statics::NewProp_InkVar_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarString_Statics::NewProp_InkVar = { "InkVar", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InkVarLibrary_eventConv_InkVarString_Parms, InkVar), Z_Construct_UScriptStruct_FInkVar, METADATA_PARAMS(Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarString_Statics::NewProp_InkVar_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarString_Statics::NewProp_InkVar_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InkVarLibrary_eventConv_InkVarString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarString_Statics::NewProp_InkVar,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarString_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Ink" },
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "String (Ink Var)" },
		{ "ModuleRelativePath", "Public/InkVar.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInkVarLibrary, nullptr, "Conv_InkVarString", nullptr, nullptr, sizeof(InkVarLibrary_eventConv_InkVarString_Parms), Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarText_Statics
	{
		struct InkVarLibrary_eventConv_InkVarText_Parms
		{
			FInkVar InkVar;
			FText ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InkVar_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InkVar;
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarText_Statics::NewProp_InkVar_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarText_Statics::NewProp_InkVar = { "InkVar", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InkVarLibrary_eventConv_InkVarText_Parms, InkVar), Z_Construct_UScriptStruct_FInkVar, METADATA_PARAMS(Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarText_Statics::NewProp_InkVar_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarText_Statics::NewProp_InkVar_MetaData)) };
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InkVarLibrary_eventConv_InkVarText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarText_Statics::NewProp_InkVar,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarText_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Ink" },
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "Text (Ink Var)" },
		{ "ModuleRelativePath", "Public/InkVar.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInkVarLibrary, nullptr, "Conv_InkVarText", nullptr, nullptr, sizeof(InkVarLibrary_eventConv_InkVarText_Parms), Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInkVarLibrary_Conv_IntInkVar_Statics
	{
		struct InkVarLibrary_eventConv_IntInkVar_Parms
		{
			int32 Number;
			FInkVar ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Number;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UInkVarLibrary_Conv_IntInkVar_Statics::NewProp_Number = { "Number", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InkVarLibrary_eventConv_IntInkVar_Parms, Number), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkVarLibrary_Conv_IntInkVar_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InkVarLibrary_eventConv_IntInkVar_Parms, ReturnValue), Z_Construct_UScriptStruct_FInkVar, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkVarLibrary_Conv_IntInkVar_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkVarLibrary_Conv_IntInkVar_Statics::NewProp_Number,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkVarLibrary_Conv_IntInkVar_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInkVarLibrary_Conv_IntInkVar_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Ink" },
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "Ink Var (Int)" },
		{ "ModuleRelativePath", "Public/InkVar.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkVarLibrary_Conv_IntInkVar_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInkVarLibrary, nullptr, "Conv_IntInkVar", nullptr, nullptr, sizeof(InkVarLibrary_eventConv_IntInkVar_Parms), Z_Construct_UFunction_UInkVarLibrary_Conv_IntInkVar_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkVarLibrary_Conv_IntInkVar_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInkVarLibrary_Conv_IntInkVar_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkVarLibrary_Conv_IntInkVar_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInkVarLibrary_Conv_IntInkVar()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInkVarLibrary_Conv_IntInkVar_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInkVarLibrary_Conv_StringInkVar_Statics
	{
		struct InkVarLibrary_eventConv_StringInkVar_Parms
		{
			FString String;
			FInkVar ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_String_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_String;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInkVarLibrary_Conv_StringInkVar_Statics::NewProp_String_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkVarLibrary_Conv_StringInkVar_Statics::NewProp_String = { "String", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InkVarLibrary_eventConv_StringInkVar_Parms, String), METADATA_PARAMS(Z_Construct_UFunction_UInkVarLibrary_Conv_StringInkVar_Statics::NewProp_String_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkVarLibrary_Conv_StringInkVar_Statics::NewProp_String_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkVarLibrary_Conv_StringInkVar_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InkVarLibrary_eventConv_StringInkVar_Parms, ReturnValue), Z_Construct_UScriptStruct_FInkVar, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkVarLibrary_Conv_StringInkVar_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkVarLibrary_Conv_StringInkVar_Statics::NewProp_String,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkVarLibrary_Conv_StringInkVar_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInkVarLibrary_Conv_StringInkVar_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Ink" },
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "Ink Var (String)" },
		{ "ModuleRelativePath", "Public/InkVar.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkVarLibrary_Conv_StringInkVar_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInkVarLibrary, nullptr, "Conv_StringInkVar", nullptr, nullptr, sizeof(InkVarLibrary_eventConv_StringInkVar_Parms), Z_Construct_UFunction_UInkVarLibrary_Conv_StringInkVar_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkVarLibrary_Conv_StringInkVar_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInkVarLibrary_Conv_StringInkVar_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkVarLibrary_Conv_StringInkVar_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInkVarLibrary_Conv_StringInkVar()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInkVarLibrary_Conv_StringInkVar_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInkVarLibrary_Conv_TextInkVar_Statics
	{
		struct InkVarLibrary_eventConv_TextInkVar_Parms
		{
			FText Text;
			FInkVar ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Text;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInkVarLibrary_Conv_TextInkVar_Statics::NewProp_Text_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UInkVarLibrary_Conv_TextInkVar_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InkVarLibrary_eventConv_TextInkVar_Parms, Text), METADATA_PARAMS(Z_Construct_UFunction_UInkVarLibrary_Conv_TextInkVar_Statics::NewProp_Text_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkVarLibrary_Conv_TextInkVar_Statics::NewProp_Text_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkVarLibrary_Conv_TextInkVar_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InkVarLibrary_eventConv_TextInkVar_Parms, ReturnValue), Z_Construct_UScriptStruct_FInkVar, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkVarLibrary_Conv_TextInkVar_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkVarLibrary_Conv_TextInkVar_Statics::NewProp_Text,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkVarLibrary_Conv_TextInkVar_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInkVarLibrary_Conv_TextInkVar_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Ink" },
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "Ink Var (Text)" },
		{ "ModuleRelativePath", "Public/InkVar.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkVarLibrary_Conv_TextInkVar_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInkVarLibrary, nullptr, "Conv_TextInkVar", nullptr, nullptr, sizeof(InkVarLibrary_eventConv_TextInkVar_Parms), Z_Construct_UFunction_UInkVarLibrary_Conv_TextInkVar_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkVarLibrary_Conv_TextInkVar_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInkVarLibrary_Conv_TextInkVar_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkVarLibrary_Conv_TextInkVar_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInkVarLibrary_Conv_TextInkVar()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInkVarLibrary_Conv_TextInkVar_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UInkVarLibrary_NoRegister()
	{
		return UInkVarLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UInkVarLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInkVarLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Ink,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UInkVarLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInkVarLibrary_Conv_BoolInkVar, "Conv_BoolInkVar" }, // 356003648
		{ &Z_Construct_UFunction_UInkVarLibrary_Conv_FloatInkVar, "Conv_FloatInkVar" }, // 1487789230
		{ &Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarBool, "Conv_InkVarBool" }, // 3782361357
		{ &Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarFloat, "Conv_InkVarFloat" }, // 1494113391
		{ &Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarInt, "Conv_InkVarInt" }, // 1520242496
		{ &Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarName, "Conv_InkVarName" }, // 646647782
		{ &Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarString, "Conv_InkVarString" }, // 1553928352
		{ &Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarText, "Conv_InkVarText" }, // 4279688384
		{ &Z_Construct_UFunction_UInkVarLibrary_Conv_IntInkVar, "Conv_IntInkVar" }, // 1672289307
		{ &Z_Construct_UFunction_UInkVarLibrary_Conv_StringInkVar, "Conv_StringInkVar" }, // 4290424199
		{ &Z_Construct_UFunction_UInkVarLibrary_Conv_TextInkVar, "Conv_TextInkVar" }, // 3680799383
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInkVarLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "InkVar.h" },
		{ "ModuleRelativePath", "Public/InkVar.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInkVarLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInkVarLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInkVarLibrary_Statics::ClassParams = {
		&UInkVarLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInkVarLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInkVarLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInkVarLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInkVarLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInkVarLibrary, 1839069466);
	template<> INK_API UClass* StaticClass<UInkVarLibrary>()
	{
		return UInkVarLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInkVarLibrary(Z_Construct_UClass_UInkVarLibrary, &UInkVarLibrary::StaticClass, TEXT("/Script/Ink"), TEXT("UInkVarLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInkVarLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
