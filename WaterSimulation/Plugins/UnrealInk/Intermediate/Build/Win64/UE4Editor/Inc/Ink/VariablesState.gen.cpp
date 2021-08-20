// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Ink/Public/VariablesState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVariablesState() {}
// Cross Module References
	INK_API UClass* Z_Construct_UClass_UVariablesState_NoRegister();
	INK_API UClass* Z_Construct_UClass_UVariablesState();
	INK_API UClass* Z_Construct_UClass_UMonoBaseClass();
	UPackage* Z_Construct_UPackage__Script_Ink();
	INK_API UScriptStruct* Z_Construct_UScriptStruct_FInkVar();
// End Cross Module References
	DEFINE_FUNCTION(UVariablesState::execSetVariable)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_variableName);
		P_GET_STRUCT_REF(FInkVar,Z_Param_Out_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVariable(Z_Param_variableName,Z_Param_Out_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVariablesState::execSetVariableString)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_variableName);
		P_GET_PROPERTY(FStrProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVariableString(Z_Param_variableName,Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVariablesState::execSetVariableInt)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_variableName);
		P_GET_PROPERTY(FIntProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVariableInt(Z_Param_variableName,Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVariablesState::execSetVariableFloat)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_variableName);
		P_GET_PROPERTY(FFloatProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVariableFloat(Z_Param_variableName,Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVariablesState::execGetVariable)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_variableName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FInkVar*)Z_Param__Result=P_THIS->GetVariable(Z_Param_variableName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVariablesState::execGetVariables)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=P_THIS->GetVariables();
		P_NATIVE_END;
	}
	void UVariablesState::StaticRegisterNativesUVariablesState()
	{
		UClass* Class = UVariablesState::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetVariable", &UVariablesState::execGetVariable },
			{ "GetVariables", &UVariablesState::execGetVariables },
			{ "SetVariable", &UVariablesState::execSetVariable },
			{ "SetVariableFloat", &UVariablesState::execSetVariableFloat },
			{ "SetVariableInt", &UVariablesState::execSetVariableInt },
			{ "SetVariableString", &UVariablesState::execSetVariableString },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVariablesState_GetVariable_Statics
	{
		struct VariablesState_eventGetVariable_Parms
		{
			FString variableName;
			FInkVar ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_variableName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_variableName;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVariablesState_GetVariable_Statics::NewProp_variableName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVariablesState_GetVariable_Statics::NewProp_variableName = { "variableName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VariablesState_eventGetVariable_Parms, variableName), METADATA_PARAMS(Z_Construct_UFunction_UVariablesState_GetVariable_Statics::NewProp_variableName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariablesState_GetVariable_Statics::NewProp_variableName_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVariablesState_GetVariable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VariablesState_eventGetVariable_Parms, ReturnValue), Z_Construct_UScriptStruct_FInkVar, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVariablesState_GetVariable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariablesState_GetVariable_Statics::NewProp_variableName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariablesState_GetVariable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVariablesState_GetVariable_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ink" },
		{ "ModuleRelativePath", "Public/VariablesState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVariablesState_GetVariable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVariablesState, nullptr, "GetVariable", nullptr, nullptr, sizeof(VariablesState_eventGetVariable_Parms), Z_Construct_UFunction_UVariablesState_GetVariable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariablesState_GetVariable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVariablesState_GetVariable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariablesState_GetVariable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVariablesState_GetVariable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVariablesState_GetVariable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVariablesState_GetVariables_Statics
	{
		struct VariablesState_eventGetVariables_Parms
		{
			TArray<FString> ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVariablesState_GetVariables_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVariablesState_GetVariables_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VariablesState_eventGetVariables_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVariablesState_GetVariables_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariablesState_GetVariables_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariablesState_GetVariables_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVariablesState_GetVariables_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ink" },
		{ "ModuleRelativePath", "Public/VariablesState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVariablesState_GetVariables_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVariablesState, nullptr, "GetVariables", nullptr, nullptr, sizeof(VariablesState_eventGetVariables_Parms), Z_Construct_UFunction_UVariablesState_GetVariables_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariablesState_GetVariables_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVariablesState_GetVariables_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariablesState_GetVariables_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVariablesState_GetVariables()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVariablesState_GetVariables_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVariablesState_SetVariable_Statics
	{
		struct VariablesState_eventSetVariable_Parms
		{
			FString variableName;
			FInkVar value;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_variableName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_variableName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVariablesState_SetVariable_Statics::NewProp_variableName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVariablesState_SetVariable_Statics::NewProp_variableName = { "variableName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VariablesState_eventSetVariable_Parms, variableName), METADATA_PARAMS(Z_Construct_UFunction_UVariablesState_SetVariable_Statics::NewProp_variableName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariablesState_SetVariable_Statics::NewProp_variableName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVariablesState_SetVariable_Statics::NewProp_value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVariablesState_SetVariable_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VariablesState_eventSetVariable_Parms, value), Z_Construct_UScriptStruct_FInkVar, METADATA_PARAMS(Z_Construct_UFunction_UVariablesState_SetVariable_Statics::NewProp_value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariablesState_SetVariable_Statics::NewProp_value_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVariablesState_SetVariable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariablesState_SetVariable_Statics::NewProp_variableName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariablesState_SetVariable_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVariablesState_SetVariable_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ink" },
		{ "ModuleRelativePath", "Public/VariablesState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVariablesState_SetVariable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVariablesState, nullptr, "SetVariable", nullptr, nullptr, sizeof(VariablesState_eventSetVariable_Parms), Z_Construct_UFunction_UVariablesState_SetVariable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariablesState_SetVariable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVariablesState_SetVariable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariablesState_SetVariable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVariablesState_SetVariable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVariablesState_SetVariable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVariablesState_SetVariableFloat_Statics
	{
		struct VariablesState_eventSetVariableFloat_Parms
		{
			FString variableName;
			float value;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_variableName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_variableName;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVariablesState_SetVariableFloat_Statics::NewProp_variableName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVariablesState_SetVariableFloat_Statics::NewProp_variableName = { "variableName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VariablesState_eventSetVariableFloat_Parms, variableName), METADATA_PARAMS(Z_Construct_UFunction_UVariablesState_SetVariableFloat_Statics::NewProp_variableName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariablesState_SetVariableFloat_Statics::NewProp_variableName_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVariablesState_SetVariableFloat_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VariablesState_eventSetVariableFloat_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVariablesState_SetVariableFloat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariablesState_SetVariableFloat_Statics::NewProp_variableName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariablesState_SetVariableFloat_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVariablesState_SetVariableFloat_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ink" },
		{ "ModuleRelativePath", "Public/VariablesState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVariablesState_SetVariableFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVariablesState, nullptr, "SetVariableFloat", nullptr, nullptr, sizeof(VariablesState_eventSetVariableFloat_Parms), Z_Construct_UFunction_UVariablesState_SetVariableFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariablesState_SetVariableFloat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVariablesState_SetVariableFloat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariablesState_SetVariableFloat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVariablesState_SetVariableFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVariablesState_SetVariableFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVariablesState_SetVariableInt_Statics
	{
		struct VariablesState_eventSetVariableInt_Parms
		{
			FString variableName;
			int32 value;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_variableName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_variableName;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVariablesState_SetVariableInt_Statics::NewProp_variableName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVariablesState_SetVariableInt_Statics::NewProp_variableName = { "variableName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VariablesState_eventSetVariableInt_Parms, variableName), METADATA_PARAMS(Z_Construct_UFunction_UVariablesState_SetVariableInt_Statics::NewProp_variableName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariablesState_SetVariableInt_Statics::NewProp_variableName_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UVariablesState_SetVariableInt_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VariablesState_eventSetVariableInt_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVariablesState_SetVariableInt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariablesState_SetVariableInt_Statics::NewProp_variableName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariablesState_SetVariableInt_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVariablesState_SetVariableInt_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ink" },
		{ "ModuleRelativePath", "Public/VariablesState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVariablesState_SetVariableInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVariablesState, nullptr, "SetVariableInt", nullptr, nullptr, sizeof(VariablesState_eventSetVariableInt_Parms), Z_Construct_UFunction_UVariablesState_SetVariableInt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariablesState_SetVariableInt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVariablesState_SetVariableInt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariablesState_SetVariableInt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVariablesState_SetVariableInt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVariablesState_SetVariableInt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVariablesState_SetVariableString_Statics
	{
		struct VariablesState_eventSetVariableString_Parms
		{
			FString variableName;
			FString value;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_variableName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_variableName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVariablesState_SetVariableString_Statics::NewProp_variableName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVariablesState_SetVariableString_Statics::NewProp_variableName = { "variableName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VariablesState_eventSetVariableString_Parms, variableName), METADATA_PARAMS(Z_Construct_UFunction_UVariablesState_SetVariableString_Statics::NewProp_variableName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariablesState_SetVariableString_Statics::NewProp_variableName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVariablesState_SetVariableString_Statics::NewProp_value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVariablesState_SetVariableString_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VariablesState_eventSetVariableString_Parms, value), METADATA_PARAMS(Z_Construct_UFunction_UVariablesState_SetVariableString_Statics::NewProp_value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariablesState_SetVariableString_Statics::NewProp_value_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVariablesState_SetVariableString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariablesState_SetVariableString_Statics::NewProp_variableName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariablesState_SetVariableString_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVariablesState_SetVariableString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ink" },
		{ "ModuleRelativePath", "Public/VariablesState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVariablesState_SetVariableString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVariablesState, nullptr, "SetVariableString", nullptr, nullptr, sizeof(VariablesState_eventSetVariableString_Parms), Z_Construct_UFunction_UVariablesState_SetVariableString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariablesState_SetVariableString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVariablesState_SetVariableString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariablesState_SetVariableString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVariablesState_SetVariableString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVariablesState_SetVariableString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UVariablesState_NoRegister()
	{
		return UVariablesState::StaticClass();
	}
	struct Z_Construct_UClass_UVariablesState_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVariablesState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMonoBaseClass,
		(UObject* (*)())Z_Construct_UPackage__Script_Ink,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVariablesState_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVariablesState_GetVariable, "GetVariable" }, // 1667573409
		{ &Z_Construct_UFunction_UVariablesState_GetVariables, "GetVariables" }, // 3514201269
		{ &Z_Construct_UFunction_UVariablesState_SetVariable, "SetVariable" }, // 3904679545
		{ &Z_Construct_UFunction_UVariablesState_SetVariableFloat, "SetVariableFloat" }, // 865244387
		{ &Z_Construct_UFunction_UVariablesState_SetVariableInt, "SetVariableInt" }, // 2951043708
		{ &Z_Construct_UFunction_UVariablesState_SetVariableString, "SetVariableString" }, // 2970051621
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVariablesState_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "VariablesState.h" },
		{ "ModuleRelativePath", "Public/VariablesState.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVariablesState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVariablesState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVariablesState_Statics::ClassParams = {
		&UVariablesState::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UVariablesState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVariablesState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVariablesState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVariablesState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVariablesState, 3718924000);
	template<> INK_API UClass* StaticClass<UVariablesState>()
	{
		return UVariablesState::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVariablesState(Z_Construct_UClass_UVariablesState, &UVariablesState::StaticClass, TEXT("/Script/Ink"), TEXT("UVariablesState"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVariablesState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
