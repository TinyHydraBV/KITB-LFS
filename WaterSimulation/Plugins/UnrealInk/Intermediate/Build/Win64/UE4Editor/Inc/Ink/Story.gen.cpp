// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Ink/Public/Story.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStory() {}
// Cross Module References
	INK_API UFunction* Z_Construct_UDelegateFunction_Ink_VariableObserver__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_Ink();
	INK_API UScriptStruct* Z_Construct_UScriptStruct_FInkVar();
	INK_API UClass* Z_Construct_UClass_UStory_NoRegister();
	INK_API UClass* Z_Construct_UClass_UStory();
	INK_API UClass* Z_Construct_UClass_UMonoBaseClass();
	INK_API UClass* Z_Construct_UClass_UStoryState_NoRegister();
	INK_API UClass* Z_Construct_UClass_UChoice_NoRegister();
	INK_API UClass* Z_Construct_UClass_UStoryAsset_NoRegister();
	INK_API UClass* Z_Construct_UClass_UVariablesState_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_Ink_VariableObserver__DelegateSignature_Statics
	{
		struct _Script_Ink_eventVariableObserver_Parms
		{
			FString variableName;
			FInkVar newValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_variableName;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_newValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_Ink_VariableObserver__DelegateSignature_Statics::NewProp_variableName = { "variableName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Ink_eventVariableObserver_Parms, variableName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_Ink_VariableObserver__DelegateSignature_Statics::NewProp_newValue = { "newValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Ink_eventVariableObserver_Parms, newValue), Z_Construct_UScriptStruct_FInkVar, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Ink_VariableObserver__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Ink_VariableObserver__DelegateSignature_Statics::NewProp_variableName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Ink_VariableObserver__DelegateSignature_Statics::NewProp_newValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Ink_VariableObserver__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Story.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Ink_VariableObserver__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Ink, nullptr, "VariableObserver__DelegateSignature", nullptr, nullptr, sizeof(_Script_Ink_eventVariableObserver_Parms), Z_Construct_UDelegateFunction_Ink_VariableObserver__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Ink_VariableObserver__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Ink_VariableObserver__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Ink_VariableObserver__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Ink_VariableObserver__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_Ink_VariableObserver__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UStory::execBackgroundSaveComplete)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BackgroundSaveComplete();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStory::execCopyStateForBackgroundThreadSave)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UStoryState**)Z_Param__Result=P_THIS->CopyStateForBackgroundThreadSave();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStory::execBuildStringOfHeirarchy)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->BuildStringOfHeirarchy();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStory::execEvaluateFunctionOutString)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FunctionName);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutString);
		P_GET_TARRAY(FInkVar,Z_Param_Arguments);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FInkVar*)Z_Param__Result=P_THIS->EvaluateFunctionOutString(Z_Param_FunctionName,Z_Param_Out_OutString,Z_Param_Arguments);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStory::execEvaluateFunction)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FunctionName);
		P_GET_TARRAY(FInkVar,Z_Param_Arguments);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FInkVar*)Z_Param__Result=P_THIS->EvaluateFunction(Z_Param_FunctionName,Z_Param_Arguments);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStory::execHasFunction)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FunctionName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasFunction(Z_Param_FunctionName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStory::execRemoveVariableObserver)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Observer);
		P_GET_PROPERTY(FStrProperty,Z_Param_SpecificVariableName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveVariableObserver(FVariableObserver(Z_Param_Out_Observer),Z_Param_SpecificVariableName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStory::execObserveVariables)
	{
		P_GET_TARRAY(FString,Z_Param_variableNames);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Observer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ObserveVariables(Z_Param_variableNames,FVariableObserver(Z_Param_Out_Observer));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStory::execObserveVariable)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_variableName);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Observer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ObserveVariable(Z_Param_variableName,FVariableObserver(Z_Param_Out_Observer));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStory::execVariablesState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UVariablesState**)Z_Param__Result=P_THIS->VariablesState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStory::execChoosePathString)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Path);
		P_GET_UBOOL(Z_Param_ResetCallstack);
		P_GET_TARRAY(FInkVar,Z_Param_Vars);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ChoosePathString(Z_Param_Path,Z_Param_ResetCallstack,Z_Param_Vars);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStory::execTagsForContentAtPath)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Path);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=P_THIS->TagsForContentAtPath(Z_Param_Path);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStory::execAsyncContinueComplete)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AsyncContinueComplete();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStory::execContinueMaximally)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->ContinueMaximally();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStory::execContinueAsync)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_MillisecondLimitAsync);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ContinueAsync(Z_Param_MillisecondLimitAsync);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStory::execResetCallstack)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetCallstack();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStory::execResetErrors)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetErrors();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStory::execResetState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStory::execCurrentWarnings)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=P_THIS->CurrentWarnings();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStory::execCurrentErrors)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=P_THIS->CurrentErrors();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStory::execGlobalTags)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=P_THIS->GlobalTags();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStory::execCurrentTags)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=P_THIS->CurrentTags();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStory::execHasWarning)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasWarning();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStory::execHasError)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasError();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStory::execState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UStoryState**)Z_Param__Result=P_THIS->State();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStory::execCurrentText)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->CurrentText();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStory::execChooseChoiceIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ChooseChoiceIndex(Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStory::execCurrentChoices)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UChoice*>*)Z_Param__Result=P_THIS->CurrentChoices();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStory::execCanContinue)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanContinue();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStory::execContinue)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->Continue();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStory::execNewStory)
	{
		P_GET_OBJECT(UStoryAsset,Z_Param_StoryAsset);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UStory**)Z_Param__Result=UStory::NewStory(Z_Param_StoryAsset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStory::execGetInkVersionCurrent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UStory::GetInkVersionCurrent();
		P_NATIVE_END;
	}
	void UStory::StaticRegisterNativesUStory()
	{
		UClass* Class = UStory::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AsyncContinueComplete", &UStory::execAsyncContinueComplete },
			{ "BackgroundSaveComplete", &UStory::execBackgroundSaveComplete },
			{ "BuildStringOfHeirarchy", &UStory::execBuildStringOfHeirarchy },
			{ "CanContinue", &UStory::execCanContinue },
			{ "ChooseChoiceIndex", &UStory::execChooseChoiceIndex },
			{ "ChoosePathString", &UStory::execChoosePathString },
			{ "Continue", &UStory::execContinue },
			{ "ContinueAsync", &UStory::execContinueAsync },
			{ "ContinueMaximally", &UStory::execContinueMaximally },
			{ "CopyStateForBackgroundThreadSave", &UStory::execCopyStateForBackgroundThreadSave },
			{ "CurrentChoices", &UStory::execCurrentChoices },
			{ "CurrentErrors", &UStory::execCurrentErrors },
			{ "CurrentTags", &UStory::execCurrentTags },
			{ "CurrentText", &UStory::execCurrentText },
			{ "CurrentWarnings", &UStory::execCurrentWarnings },
			{ "EvaluateFunction", &UStory::execEvaluateFunction },
			{ "EvaluateFunctionOutString", &UStory::execEvaluateFunctionOutString },
			{ "GetInkVersionCurrent", &UStory::execGetInkVersionCurrent },
			{ "GlobalTags", &UStory::execGlobalTags },
			{ "HasError", &UStory::execHasError },
			{ "HasFunction", &UStory::execHasFunction },
			{ "HasWarning", &UStory::execHasWarning },
			{ "NewStory", &UStory::execNewStory },
			{ "ObserveVariable", &UStory::execObserveVariable },
			{ "ObserveVariables", &UStory::execObserveVariables },
			{ "RemoveVariableObserver", &UStory::execRemoveVariableObserver },
			{ "ResetCallstack", &UStory::execResetCallstack },
			{ "ResetErrors", &UStory::execResetErrors },
			{ "ResetState", &UStory::execResetState },
			{ "State", &UStory::execState },
			{ "TagsForContentAtPath", &UStory::execTagsForContentAtPath },
			{ "VariablesState", &UStory::execVariablesState },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UStory_AsyncContinueComplete_Statics
	{
		struct Story_eventAsyncContinueComplete_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UStory_AsyncContinueComplete_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Story_eventAsyncContinueComplete_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStory_AsyncContinueComplete_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Story_eventAsyncContinueComplete_Parms), &Z_Construct_UFunction_UStory_AsyncContinueComplete_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStory_AsyncContinueComplete_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStory_AsyncContinueComplete_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStory_AsyncContinueComplete_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ink" },
		{ "ModuleRelativePath", "Public/Story.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStory_AsyncContinueComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStory, nullptr, "AsyncContinueComplete", nullptr, nullptr, sizeof(Story_eventAsyncContinueComplete_Parms), Z_Construct_UFunction_UStory_AsyncContinueComplete_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStory_AsyncContinueComplete_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStory_AsyncContinueComplete_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStory_AsyncContinueComplete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStory_AsyncContinueComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStory_AsyncContinueComplete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStory_BackgroundSaveComplete_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStory_BackgroundSaveComplete_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ink" },
		{ "ModuleRelativePath", "Public/Story.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStory_BackgroundSaveComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStory, nullptr, "BackgroundSaveComplete", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStory_BackgroundSaveComplete_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStory_BackgroundSaveComplete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStory_BackgroundSaveComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStory_BackgroundSaveComplete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStory_BuildStringOfHeirarchy_Statics
	{
		struct Story_eventBuildStringOfHeirarchy_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStory_BuildStringOfHeirarchy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Story_eventBuildStringOfHeirarchy_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStory_BuildStringOfHeirarchy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStory_BuildStringOfHeirarchy_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStory_BuildStringOfHeirarchy_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ink" },
		{ "ModuleRelativePath", "Public/Story.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStory_BuildStringOfHeirarchy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStory, nullptr, "BuildStringOfHeirarchy", nullptr, nullptr, sizeof(Story_eventBuildStringOfHeirarchy_Parms), Z_Construct_UFunction_UStory_BuildStringOfHeirarchy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStory_BuildStringOfHeirarchy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStory_BuildStringOfHeirarchy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStory_BuildStringOfHeirarchy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStory_BuildStringOfHeirarchy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStory_BuildStringOfHeirarchy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStory_CanContinue_Statics
	{
		struct Story_eventCanContinue_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UStory_CanContinue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Story_eventCanContinue_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStory_CanContinue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Story_eventCanContinue_Parms), &Z_Construct_UFunction_UStory_CanContinue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStory_CanContinue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStory_CanContinue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStory_CanContinue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ink" },
		{ "ModuleRelativePath", "Public/Story.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStory_CanContinue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStory, nullptr, "CanContinue", nullptr, nullptr, sizeof(Story_eventCanContinue_Parms), Z_Construct_UFunction_UStory_CanContinue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStory_CanContinue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStory_CanContinue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStory_CanContinue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStory_CanContinue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStory_CanContinue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStory_ChooseChoiceIndex_Statics
	{
		struct Story_eventChooseChoiceIndex_Parms
		{
			int32 Index;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UStory_ChooseChoiceIndex_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Story_eventChooseChoiceIndex_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStory_ChooseChoiceIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStory_ChooseChoiceIndex_Statics::NewProp_Index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStory_ChooseChoiceIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ink" },
		{ "ModuleRelativePath", "Public/Story.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStory_ChooseChoiceIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStory, nullptr, "ChooseChoiceIndex", nullptr, nullptr, sizeof(Story_eventChooseChoiceIndex_Parms), Z_Construct_UFunction_UStory_ChooseChoiceIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStory_ChooseChoiceIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStory_ChooseChoiceIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStory_ChooseChoiceIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStory_ChooseChoiceIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStory_ChooseChoiceIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStory_ChoosePathString_Statics
	{
		struct Story_eventChoosePathString_Parms
		{
			FString Path;
			bool ResetCallstack;
			TArray<FInkVar> Vars;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Path;
		static void NewProp_ResetCallstack_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ResetCallstack;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Vars_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Vars;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStory_ChoosePathString_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Story_eventChoosePathString_Parms, Path), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UStory_ChoosePathString_Statics::NewProp_ResetCallstack_SetBit(void* Obj)
	{
		((Story_eventChoosePathString_Parms*)Obj)->ResetCallstack = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStory_ChoosePathString_Statics::NewProp_ResetCallstack = { "ResetCallstack", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Story_eventChoosePathString_Parms), &Z_Construct_UFunction_UStory_ChoosePathString_Statics::NewProp_ResetCallstack_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStory_ChoosePathString_Statics::NewProp_Vars_Inner = { "Vars", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FInkVar, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UStory_ChoosePathString_Statics::NewProp_Vars = { "Vars", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Story_eventChoosePathString_Parms, Vars), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStory_ChoosePathString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStory_ChoosePathString_Statics::NewProp_Path,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStory_ChoosePathString_Statics::NewProp_ResetCallstack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStory_ChoosePathString_Statics::NewProp_Vars_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStory_ChoosePathString_Statics::NewProp_Vars,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStory_ChoosePathString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ink" },
		{ "ModuleRelativePath", "Public/Story.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStory_ChoosePathString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStory, nullptr, "ChoosePathString", nullptr, nullptr, sizeof(Story_eventChoosePathString_Parms), Z_Construct_UFunction_UStory_ChoosePathString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStory_ChoosePathString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStory_ChoosePathString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStory_ChoosePathString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStory_ChoosePathString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStory_ChoosePathString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStory_Continue_Statics
	{
		struct Story_eventContinue_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStory_Continue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Story_eventContinue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStory_Continue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStory_Continue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStory_Continue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ink" },
		{ "ModuleRelativePath", "Public/Story.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStory_Continue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStory, nullptr, "Continue", nullptr, nullptr, sizeof(Story_eventContinue_Parms), Z_Construct_UFunction_UStory_Continue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStory_Continue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStory_Continue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStory_Continue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStory_Continue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStory_Continue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStory_ContinueAsync_Statics
	{
		struct Story_eventContinueAsync_Parms
		{
			float MillisecondLimitAsync;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MillisecondLimitAsync;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UStory_ContinueAsync_Statics::NewProp_MillisecondLimitAsync = { "MillisecondLimitAsync", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Story_eventContinueAsync_Parms, MillisecondLimitAsync), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStory_ContinueAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStory_ContinueAsync_Statics::NewProp_MillisecondLimitAsync,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStory_ContinueAsync_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ink" },
		{ "ModuleRelativePath", "Public/Story.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStory_ContinueAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStory, nullptr, "ContinueAsync", nullptr, nullptr, sizeof(Story_eventContinueAsync_Parms), Z_Construct_UFunction_UStory_ContinueAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStory_ContinueAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStory_ContinueAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStory_ContinueAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStory_ContinueAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStory_ContinueAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStory_ContinueMaximally_Statics
	{
		struct Story_eventContinueMaximally_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStory_ContinueMaximally_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Story_eventContinueMaximally_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStory_ContinueMaximally_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStory_ContinueMaximally_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStory_ContinueMaximally_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ink" },
		{ "ModuleRelativePath", "Public/Story.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStory_ContinueMaximally_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStory, nullptr, "ContinueMaximally", nullptr, nullptr, sizeof(Story_eventContinueMaximally_Parms), Z_Construct_UFunction_UStory_ContinueMaximally_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStory_ContinueMaximally_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStory_ContinueMaximally_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStory_ContinueMaximally_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStory_ContinueMaximally()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStory_ContinueMaximally_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStory_CopyStateForBackgroundThreadSave_Statics
	{
		struct Story_eventCopyStateForBackgroundThreadSave_Parms
		{
			UStoryState* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStory_CopyStateForBackgroundThreadSave_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Story_eventCopyStateForBackgroundThreadSave_Parms, ReturnValue), Z_Construct_UClass_UStoryState_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStory_CopyStateForBackgroundThreadSave_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStory_CopyStateForBackgroundThreadSave_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStory_CopyStateForBackgroundThreadSave_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ink" },
		{ "ModuleRelativePath", "Public/Story.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStory_CopyStateForBackgroundThreadSave_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStory, nullptr, "CopyStateForBackgroundThreadSave", nullptr, nullptr, sizeof(Story_eventCopyStateForBackgroundThreadSave_Parms), Z_Construct_UFunction_UStory_CopyStateForBackgroundThreadSave_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStory_CopyStateForBackgroundThreadSave_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStory_CopyStateForBackgroundThreadSave_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStory_CopyStateForBackgroundThreadSave_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStory_CopyStateForBackgroundThreadSave()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStory_CopyStateForBackgroundThreadSave_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStory_CurrentChoices_Statics
	{
		struct Story_eventCurrentChoices_Parms
		{
			TArray<UChoice*> ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStory_CurrentChoices_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UChoice_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UStory_CurrentChoices_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Story_eventCurrentChoices_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStory_CurrentChoices_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStory_CurrentChoices_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStory_CurrentChoices_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStory_CurrentChoices_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ink" },
		{ "ModuleRelativePath", "Public/Story.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStory_CurrentChoices_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStory, nullptr, "CurrentChoices", nullptr, nullptr, sizeof(Story_eventCurrentChoices_Parms), Z_Construct_UFunction_UStory_CurrentChoices_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStory_CurrentChoices_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStory_CurrentChoices_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStory_CurrentChoices_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStory_CurrentChoices()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStory_CurrentChoices_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStory_CurrentErrors_Statics
	{
		struct Story_eventCurrentErrors_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStory_CurrentErrors_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UStory_CurrentErrors_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Story_eventCurrentErrors_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStory_CurrentErrors_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStory_CurrentErrors_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStory_CurrentErrors_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStory_CurrentErrors_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ink" },
		{ "ModuleRelativePath", "Public/Story.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStory_CurrentErrors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStory, nullptr, "CurrentErrors", nullptr, nullptr, sizeof(Story_eventCurrentErrors_Parms), Z_Construct_UFunction_UStory_CurrentErrors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStory_CurrentErrors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStory_CurrentErrors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStory_CurrentErrors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStory_CurrentErrors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStory_CurrentErrors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStory_CurrentTags_Statics
	{
		struct Story_eventCurrentTags_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStory_CurrentTags_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UStory_CurrentTags_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Story_eventCurrentTags_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStory_CurrentTags_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStory_CurrentTags_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStory_CurrentTags_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStory_CurrentTags_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ink" },
		{ "ModuleRelativePath", "Public/Story.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStory_CurrentTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStory, nullptr, "CurrentTags", nullptr, nullptr, sizeof(Story_eventCurrentTags_Parms), Z_Construct_UFunction_UStory_CurrentTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStory_CurrentTags_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStory_CurrentTags_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStory_CurrentTags_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStory_CurrentTags()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStory_CurrentTags_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStory_CurrentText_Statics
	{
		struct Story_eventCurrentText_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStory_CurrentText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Story_eventCurrentText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStory_CurrentText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStory_CurrentText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStory_CurrentText_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ink" },
		{ "ModuleRelativePath", "Public/Story.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStory_CurrentText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStory, nullptr, "CurrentText", nullptr, nullptr, sizeof(Story_eventCurrentText_Parms), Z_Construct_UFunction_UStory_CurrentText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStory_CurrentText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStory_CurrentText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStory_CurrentText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStory_CurrentText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStory_CurrentText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStory_CurrentWarnings_Statics
	{
		struct Story_eventCurrentWarnings_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStory_CurrentWarnings_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UStory_CurrentWarnings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Story_eventCurrentWarnings_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStory_CurrentWarnings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStory_CurrentWarnings_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStory_CurrentWarnings_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStory_CurrentWarnings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ink" },
		{ "ModuleRelativePath", "Public/Story.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStory_CurrentWarnings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStory, nullptr, "CurrentWarnings", nullptr, nullptr, sizeof(Story_eventCurrentWarnings_Parms), Z_Construct_UFunction_UStory_CurrentWarnings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStory_CurrentWarnings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStory_CurrentWarnings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStory_CurrentWarnings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStory_CurrentWarnings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStory_CurrentWarnings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStory_EvaluateFunction_Statics
	{
		struct Story_eventEvaluateFunction_Parms
		{
			FString FunctionName;
			TArray<FInkVar> Arguments;
			FInkVar ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FunctionName;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Arguments_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Arguments;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStory_EvaluateFunction_Statics::NewProp_FunctionName = { "FunctionName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Story_eventEvaluateFunction_Parms, FunctionName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStory_EvaluateFunction_Statics::NewProp_Arguments_Inner = { "Arguments", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FInkVar, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UStory_EvaluateFunction_Statics::NewProp_Arguments = { "Arguments", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Story_eventEvaluateFunction_Parms, Arguments), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStory_EvaluateFunction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Story_eventEvaluateFunction_Parms, ReturnValue), Z_Construct_UScriptStruct_FInkVar, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStory_EvaluateFunction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStory_EvaluateFunction_Statics::NewProp_FunctionName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStory_EvaluateFunction_Statics::NewProp_Arguments_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStory_EvaluateFunction_Statics::NewProp_Arguments,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStory_EvaluateFunction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStory_EvaluateFunction_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Arguments" },
		{ "Category", "Ink" },
		{ "ModuleRelativePath", "Public/Story.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStory_EvaluateFunction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStory, nullptr, "EvaluateFunction", nullptr, nullptr, sizeof(Story_eventEvaluateFunction_Parms), Z_Construct_UFunction_UStory_EvaluateFunction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStory_EvaluateFunction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStory_EvaluateFunction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStory_EvaluateFunction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStory_EvaluateFunction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStory_EvaluateFunction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStory_EvaluateFunctionOutString_Statics
	{
		struct Story_eventEvaluateFunctionOutString_Parms
		{
			FString FunctionName;
			FString OutString;
			TArray<FInkVar> Arguments;
			FInkVar ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FunctionName;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OutString;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Arguments_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Arguments;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStory_EvaluateFunctionOutString_Statics::NewProp_FunctionName = { "FunctionName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Story_eventEvaluateFunctionOutString_Parms, FunctionName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStory_EvaluateFunctionOutString_Statics::NewProp_OutString = { "OutString", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Story_eventEvaluateFunctionOutString_Parms, OutString), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStory_EvaluateFunctionOutString_Statics::NewProp_Arguments_Inner = { "Arguments", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FInkVar, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UStory_EvaluateFunctionOutString_Statics::NewProp_Arguments = { "Arguments", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Story_eventEvaluateFunctionOutString_Parms, Arguments), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStory_EvaluateFunctionOutString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Story_eventEvaluateFunctionOutString_Parms, ReturnValue), Z_Construct_UScriptStruct_FInkVar, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStory_EvaluateFunctionOutString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStory_EvaluateFunctionOutString_Statics::NewProp_FunctionName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStory_EvaluateFunctionOutString_Statics::NewProp_OutString,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStory_EvaluateFunctionOutString_Statics::NewProp_Arguments_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStory_EvaluateFunctionOutString_Statics::NewProp_Arguments,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStory_EvaluateFunctionOutString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStory_EvaluateFunctionOutString_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Arguments" },
		{ "Category", "Ink" },
		{ "ModuleRelativePath", "Public/Story.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStory_EvaluateFunctionOutString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStory, nullptr, "EvaluateFunctionOutString", nullptr, nullptr, sizeof(Story_eventEvaluateFunctionOutString_Parms), Z_Construct_UFunction_UStory_EvaluateFunctionOutString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStory_EvaluateFunctionOutString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStory_EvaluateFunctionOutString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStory_EvaluateFunctionOutString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStory_EvaluateFunctionOutString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStory_EvaluateFunctionOutString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStory_GetInkVersionCurrent_Statics
	{
		struct Story_eventGetInkVersionCurrent_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UStory_GetInkVersionCurrent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Story_eventGetInkVersionCurrent_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStory_GetInkVersionCurrent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStory_GetInkVersionCurrent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStory_GetInkVersionCurrent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ink" },
		{ "ModuleRelativePath", "Public/Story.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStory_GetInkVersionCurrent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStory, nullptr, "GetInkVersionCurrent", nullptr, nullptr, sizeof(Story_eventGetInkVersionCurrent_Parms), Z_Construct_UFunction_UStory_GetInkVersionCurrent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStory_GetInkVersionCurrent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStory_GetInkVersionCurrent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStory_GetInkVersionCurrent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStory_GetInkVersionCurrent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStory_GetInkVersionCurrent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStory_GlobalTags_Statics
	{
		struct Story_eventGlobalTags_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStory_GlobalTags_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UStory_GlobalTags_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Story_eventGlobalTags_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStory_GlobalTags_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStory_GlobalTags_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStory_GlobalTags_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStory_GlobalTags_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ink" },
		{ "ModuleRelativePath", "Public/Story.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStory_GlobalTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStory, nullptr, "GlobalTags", nullptr, nullptr, sizeof(Story_eventGlobalTags_Parms), Z_Construct_UFunction_UStory_GlobalTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStory_GlobalTags_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStory_GlobalTags_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStory_GlobalTags_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStory_GlobalTags()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStory_GlobalTags_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStory_HasError_Statics
	{
		struct Story_eventHasError_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UStory_HasError_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Story_eventHasError_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStory_HasError_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Story_eventHasError_Parms), &Z_Construct_UFunction_UStory_HasError_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStory_HasError_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStory_HasError_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStory_HasError_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ink" },
		{ "ModuleRelativePath", "Public/Story.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStory_HasError_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStory, nullptr, "HasError", nullptr, nullptr, sizeof(Story_eventHasError_Parms), Z_Construct_UFunction_UStory_HasError_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStory_HasError_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStory_HasError_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStory_HasError_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStory_HasError()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStory_HasError_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStory_HasFunction_Statics
	{
		struct Story_eventHasFunction_Parms
		{
			FString FunctionName;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FunctionName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStory_HasFunction_Statics::NewProp_FunctionName = { "FunctionName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Story_eventHasFunction_Parms, FunctionName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UStory_HasFunction_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Story_eventHasFunction_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStory_HasFunction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Story_eventHasFunction_Parms), &Z_Construct_UFunction_UStory_HasFunction_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStory_HasFunction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStory_HasFunction_Statics::NewProp_FunctionName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStory_HasFunction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStory_HasFunction_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ink" },
		{ "ModuleRelativePath", "Public/Story.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStory_HasFunction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStory, nullptr, "HasFunction", nullptr, nullptr, sizeof(Story_eventHasFunction_Parms), Z_Construct_UFunction_UStory_HasFunction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStory_HasFunction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStory_HasFunction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStory_HasFunction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStory_HasFunction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStory_HasFunction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStory_HasWarning_Statics
	{
		struct Story_eventHasWarning_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UStory_HasWarning_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Story_eventHasWarning_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStory_HasWarning_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Story_eventHasWarning_Parms), &Z_Construct_UFunction_UStory_HasWarning_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStory_HasWarning_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStory_HasWarning_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStory_HasWarning_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ink" },
		{ "ModuleRelativePath", "Public/Story.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStory_HasWarning_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStory, nullptr, "HasWarning", nullptr, nullptr, sizeof(Story_eventHasWarning_Parms), Z_Construct_UFunction_UStory_HasWarning_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStory_HasWarning_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStory_HasWarning_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStory_HasWarning_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStory_HasWarning()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStory_HasWarning_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStory_NewStory_Statics
	{
		struct Story_eventNewStory_Parms
		{
			UStoryAsset* StoryAsset;
			UStory* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StoryAsset;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStory_NewStory_Statics::NewProp_StoryAsset = { "StoryAsset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Story_eventNewStory_Parms, StoryAsset), Z_Construct_UClass_UStoryAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStory_NewStory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Story_eventNewStory_Parms, ReturnValue), Z_Construct_UClass_UStory_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStory_NewStory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStory_NewStory_Statics::NewProp_StoryAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStory_NewStory_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStory_NewStory_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ink" },
		{ "ModuleRelativePath", "Public/Story.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStory_NewStory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStory, nullptr, "NewStory", nullptr, nullptr, sizeof(Story_eventNewStory_Parms), Z_Construct_UFunction_UStory_NewStory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStory_NewStory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStory_NewStory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStory_NewStory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStory_NewStory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStory_NewStory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStory_ObserveVariable_Statics
	{
		struct Story_eventObserveVariable_Parms
		{
			FString variableName;
			FScriptDelegate Observer;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_variableName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Observer_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_Observer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStory_ObserveVariable_Statics::NewProp_variableName = { "variableName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Story_eventObserveVariable_Parms, variableName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStory_ObserveVariable_Statics::NewProp_Observer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UStory_ObserveVariable_Statics::NewProp_Observer = { "Observer", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Story_eventObserveVariable_Parms, Observer), Z_Construct_UDelegateFunction_Ink_VariableObserver__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UStory_ObserveVariable_Statics::NewProp_Observer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UStory_ObserveVariable_Statics::NewProp_Observer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStory_ObserveVariable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStory_ObserveVariable_Statics::NewProp_variableName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStory_ObserveVariable_Statics::NewProp_Observer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStory_ObserveVariable_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ink" },
		{ "ModuleRelativePath", "Public/Story.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStory_ObserveVariable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStory, nullptr, "ObserveVariable", nullptr, nullptr, sizeof(Story_eventObserveVariable_Parms), Z_Construct_UFunction_UStory_ObserveVariable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStory_ObserveVariable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStory_ObserveVariable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStory_ObserveVariable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStory_ObserveVariable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStory_ObserveVariable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStory_ObserveVariables_Statics
	{
		struct Story_eventObserveVariables_Parms
		{
			TArray<FString> variableNames;
			FScriptDelegate Observer;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_variableNames_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_variableNames;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Observer_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_Observer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStory_ObserveVariables_Statics::NewProp_variableNames_Inner = { "variableNames", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UStory_ObserveVariables_Statics::NewProp_variableNames = { "variableNames", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Story_eventObserveVariables_Parms, variableNames), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStory_ObserveVariables_Statics::NewProp_Observer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UStory_ObserveVariables_Statics::NewProp_Observer = { "Observer", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Story_eventObserveVariables_Parms, Observer), Z_Construct_UDelegateFunction_Ink_VariableObserver__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UStory_ObserveVariables_Statics::NewProp_Observer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UStory_ObserveVariables_Statics::NewProp_Observer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStory_ObserveVariables_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStory_ObserveVariables_Statics::NewProp_variableNames_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStory_ObserveVariables_Statics::NewProp_variableNames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStory_ObserveVariables_Statics::NewProp_Observer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStory_ObserveVariables_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ink" },
		{ "ModuleRelativePath", "Public/Story.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStory_ObserveVariables_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStory, nullptr, "ObserveVariables", nullptr, nullptr, sizeof(Story_eventObserveVariables_Parms), Z_Construct_UFunction_UStory_ObserveVariables_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStory_ObserveVariables_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStory_ObserveVariables_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStory_ObserveVariables_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStory_ObserveVariables()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStory_ObserveVariables_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStory_RemoveVariableObserver_Statics
	{
		struct Story_eventRemoveVariableObserver_Parms
		{
			FScriptDelegate Observer;
			FString SpecificVariableName;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Observer_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_Observer;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SpecificVariableName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStory_RemoveVariableObserver_Statics::NewProp_Observer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UStory_RemoveVariableObserver_Statics::NewProp_Observer = { "Observer", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Story_eventRemoveVariableObserver_Parms, Observer), Z_Construct_UDelegateFunction_Ink_VariableObserver__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UStory_RemoveVariableObserver_Statics::NewProp_Observer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UStory_RemoveVariableObserver_Statics::NewProp_Observer_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStory_RemoveVariableObserver_Statics::NewProp_SpecificVariableName = { "SpecificVariableName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Story_eventRemoveVariableObserver_Parms, SpecificVariableName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStory_RemoveVariableObserver_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStory_RemoveVariableObserver_Statics::NewProp_Observer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStory_RemoveVariableObserver_Statics::NewProp_SpecificVariableName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStory_RemoveVariableObserver_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ink" },
		{ "CPP_Default_SpecificVariableName", "" },
		{ "ModuleRelativePath", "Public/Story.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStory_RemoveVariableObserver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStory, nullptr, "RemoveVariableObserver", nullptr, nullptr, sizeof(Story_eventRemoveVariableObserver_Parms), Z_Construct_UFunction_UStory_RemoveVariableObserver_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStory_RemoveVariableObserver_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStory_RemoveVariableObserver_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStory_RemoveVariableObserver_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStory_RemoveVariableObserver()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStory_RemoveVariableObserver_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStory_ResetCallstack_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStory_ResetCallstack_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ink" },
		{ "ModuleRelativePath", "Public/Story.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStory_ResetCallstack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStory, nullptr, "ResetCallstack", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStory_ResetCallstack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStory_ResetCallstack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStory_ResetCallstack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStory_ResetCallstack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStory_ResetErrors_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStory_ResetErrors_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ink" },
		{ "ModuleRelativePath", "Public/Story.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStory_ResetErrors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStory, nullptr, "ResetErrors", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStory_ResetErrors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStory_ResetErrors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStory_ResetErrors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStory_ResetErrors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStory_ResetState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStory_ResetState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ink" },
		{ "ModuleRelativePath", "Public/Story.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStory_ResetState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStory, nullptr, "ResetState", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStory_ResetState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStory_ResetState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStory_ResetState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStory_ResetState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStory_State_Statics
	{
		struct Story_eventState_Parms
		{
			UStoryState* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStory_State_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Story_eventState_Parms, ReturnValue), Z_Construct_UClass_UStoryState_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStory_State_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStory_State_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStory_State_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ink" },
		{ "ModuleRelativePath", "Public/Story.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStory_State_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStory, nullptr, "State", nullptr, nullptr, sizeof(Story_eventState_Parms), Z_Construct_UFunction_UStory_State_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStory_State_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStory_State_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStory_State_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStory_State()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStory_State_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStory_TagsForContentAtPath_Statics
	{
		struct Story_eventTagsForContentAtPath_Parms
		{
			FString Path;
			TArray<FString> ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Path;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStory_TagsForContentAtPath_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Story_eventTagsForContentAtPath_Parms, Path), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStory_TagsForContentAtPath_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UStory_TagsForContentAtPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Story_eventTagsForContentAtPath_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStory_TagsForContentAtPath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStory_TagsForContentAtPath_Statics::NewProp_Path,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStory_TagsForContentAtPath_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStory_TagsForContentAtPath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStory_TagsForContentAtPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ink" },
		{ "ModuleRelativePath", "Public/Story.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStory_TagsForContentAtPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStory, nullptr, "TagsForContentAtPath", nullptr, nullptr, sizeof(Story_eventTagsForContentAtPath_Parms), Z_Construct_UFunction_UStory_TagsForContentAtPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStory_TagsForContentAtPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStory_TagsForContentAtPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStory_TagsForContentAtPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStory_TagsForContentAtPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStory_TagsForContentAtPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStory_VariablesState_Statics
	{
		struct Story_eventVariablesState_Parms
		{
			UVariablesState* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStory_VariablesState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Story_eventVariablesState_Parms, ReturnValue), Z_Construct_UClass_UVariablesState_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStory_VariablesState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStory_VariablesState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStory_VariablesState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ink" },
		{ "ModuleRelativePath", "Public/Story.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStory_VariablesState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStory, nullptr, "VariablesState", nullptr, nullptr, sizeof(Story_eventVariablesState_Parms), Z_Construct_UFunction_UStory_VariablesState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStory_VariablesState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStory_VariablesState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStory_VariablesState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStory_VariablesState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStory_VariablesState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UStory_NoRegister()
	{
		return UStory::StaticClass();
	}
	struct Z_Construct_UClass_UStory_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMonoBaseClass,
		(UObject* (*)())Z_Construct_UPackage__Script_Ink,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UStory_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UStory_AsyncContinueComplete, "AsyncContinueComplete" }, // 2012026685
		{ &Z_Construct_UFunction_UStory_BackgroundSaveComplete, "BackgroundSaveComplete" }, // 3109015046
		{ &Z_Construct_UFunction_UStory_BuildStringOfHeirarchy, "BuildStringOfHeirarchy" }, // 3213203698
		{ &Z_Construct_UFunction_UStory_CanContinue, "CanContinue" }, // 3168819277
		{ &Z_Construct_UFunction_UStory_ChooseChoiceIndex, "ChooseChoiceIndex" }, // 4150826685
		{ &Z_Construct_UFunction_UStory_ChoosePathString, "ChoosePathString" }, // 1501527465
		{ &Z_Construct_UFunction_UStory_Continue, "Continue" }, // 2924062268
		{ &Z_Construct_UFunction_UStory_ContinueAsync, "ContinueAsync" }, // 3106137238
		{ &Z_Construct_UFunction_UStory_ContinueMaximally, "ContinueMaximally" }, // 3402046828
		{ &Z_Construct_UFunction_UStory_CopyStateForBackgroundThreadSave, "CopyStateForBackgroundThreadSave" }, // 4010491786
		{ &Z_Construct_UFunction_UStory_CurrentChoices, "CurrentChoices" }, // 4116971105
		{ &Z_Construct_UFunction_UStory_CurrentErrors, "CurrentErrors" }, // 3637865714
		{ &Z_Construct_UFunction_UStory_CurrentTags, "CurrentTags" }, // 2271371994
		{ &Z_Construct_UFunction_UStory_CurrentText, "CurrentText" }, // 2876677493
		{ &Z_Construct_UFunction_UStory_CurrentWarnings, "CurrentWarnings" }, // 4143484341
		{ &Z_Construct_UFunction_UStory_EvaluateFunction, "EvaluateFunction" }, // 11352815
		{ &Z_Construct_UFunction_UStory_EvaluateFunctionOutString, "EvaluateFunctionOutString" }, // 4167825316
		{ &Z_Construct_UFunction_UStory_GetInkVersionCurrent, "GetInkVersionCurrent" }, // 1364512031
		{ &Z_Construct_UFunction_UStory_GlobalTags, "GlobalTags" }, // 3055964279
		{ &Z_Construct_UFunction_UStory_HasError, "HasError" }, // 636563555
		{ &Z_Construct_UFunction_UStory_HasFunction, "HasFunction" }, // 1148138598
		{ &Z_Construct_UFunction_UStory_HasWarning, "HasWarning" }, // 1168992912
		{ &Z_Construct_UFunction_UStory_NewStory, "NewStory" }, // 2174233110
		{ &Z_Construct_UFunction_UStory_ObserveVariable, "ObserveVariable" }, // 4188398606
		{ &Z_Construct_UFunction_UStory_ObserveVariables, "ObserveVariables" }, // 2033950007
		{ &Z_Construct_UFunction_UStory_RemoveVariableObserver, "RemoveVariableObserver" }, // 3583901933
		{ &Z_Construct_UFunction_UStory_ResetCallstack, "ResetCallstack" }, // 413615137
		{ &Z_Construct_UFunction_UStory_ResetErrors, "ResetErrors" }, // 840422882
		{ &Z_Construct_UFunction_UStory_ResetState, "ResetState" }, // 1036615543
		{ &Z_Construct_UFunction_UStory_State, "State" }, // 3225707964
		{ &Z_Construct_UFunction_UStory_TagsForContentAtPath, "TagsForContentAtPath" }, // 1353262818
		{ &Z_Construct_UFunction_UStory_VariablesState, "VariablesState" }, // 2433622155
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStory_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Story.h" },
		{ "ModuleRelativePath", "Public/Story.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UStory_Statics::ClassParams = {
		&UStory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UStory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UStory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UStory, 4039473345);
	template<> INK_API UClass* StaticClass<UStory>()
	{
		return UStory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UStory(Z_Construct_UClass_UStory, &UStory::StaticClass, TEXT("/Script/Ink"), TEXT("UStory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
