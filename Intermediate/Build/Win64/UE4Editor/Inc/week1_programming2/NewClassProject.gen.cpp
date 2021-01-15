// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "week1_programming2/Public/NewClassProject.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNewClassProject() {}
// Cross Module References
	WEEK1_PROGRAMMING2_API UClass* Z_Construct_UClass_UNewClassProject_NoRegister();
	WEEK1_PROGRAMMING2_API UClass* Z_Construct_UClass_UNewClassProject();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_week1_programming2();
// End Cross Module References
	DEFINE_FUNCTION(UNewClassProject::execSetnumber)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_n);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Setnumber(Z_Param_n);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNewClassProject::execgetNumber)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->getNumber();
		P_NATIVE_END;
	}
	void UNewClassProject::StaticRegisterNativesUNewClassProject()
	{
		UClass* Class = UNewClassProject::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "getNumber", &UNewClassProject::execgetNumber },
			{ "Setnumber", &UNewClassProject::execSetnumber },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UNewClassProject_getNumber_Statics
	{
		struct NewClassProject_eventgetNumber_Parms
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
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNewClassProject_getNumber_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NewClassProject_eventgetNumber_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNewClassProject_getNumber_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNewClassProject_getNumber_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNewClassProject_getNumber_Statics::Function_MetaDataParams[] = {
		{ "Category", "Funcs" },
		{ "ModuleRelativePath", "Public/NewClassProject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNewClassProject_getNumber_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNewClassProject, nullptr, "getNumber", nullptr, nullptr, sizeof(NewClassProject_eventgetNumber_Parms), Z_Construct_UFunction_UNewClassProject_getNumber_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNewClassProject_getNumber_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNewClassProject_getNumber_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNewClassProject_getNumber_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNewClassProject_getNumber()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNewClassProject_getNumber_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNewClassProject_Setnumber_Statics
	{
		struct NewClassProject_eventSetnumber_Parms
		{
			int32 n;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_n;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNewClassProject_Setnumber_Statics::NewProp_n = { "n", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NewClassProject_eventSetnumber_Parms, n), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNewClassProject_Setnumber_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNewClassProject_Setnumber_Statics::NewProp_n,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNewClassProject_Setnumber_Statics::Function_MetaDataParams[] = {
		{ "Category", "Funcs" },
		{ "ModuleRelativePath", "Public/NewClassProject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNewClassProject_Setnumber_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNewClassProject, nullptr, "Setnumber", nullptr, nullptr, sizeof(NewClassProject_eventSetnumber_Parms), Z_Construct_UFunction_UNewClassProject_Setnumber_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNewClassProject_Setnumber_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNewClassProject_Setnumber_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNewClassProject_Setnumber_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNewClassProject_Setnumber()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNewClassProject_Setnumber_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UNewClassProject_NoRegister()
	{
		return UNewClassProject::StaticClass();
	}
	struct Z_Construct_UClass_UNewClassProject_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HP_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_HP;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_newVal_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_newVal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_tags_MetaData[];
#endif
		static void NewProp_tags_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_tags;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNewClassProject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_week1_programming2,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UNewClassProject_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UNewClassProject_getNumber, "getNumber" }, // 272915323
		{ &Z_Construct_UFunction_UNewClassProject_Setnumber, "Setnumber" }, // 3833250183
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNewClassProject_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "NewClassProject.h" },
		{ "ModuleRelativePath", "Public/NewClassProject.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNewClassProject_Statics::NewProp_HP_MetaData[] = {
		{ "Category", "MyVariables" },
		{ "ModuleRelativePath", "Public/NewClassProject.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UNewClassProject_Statics::NewProp_HP = { "HP", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNewClassProject, HP), METADATA_PARAMS(Z_Construct_UClass_UNewClassProject_Statics::NewProp_HP_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNewClassProject_Statics::NewProp_HP_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNewClassProject_Statics::NewProp_newVal_MetaData[] = {
		{ "Category", "MyVariables" },
		{ "ModuleRelativePath", "Public/NewClassProject.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNewClassProject_Statics::NewProp_newVal = { "newVal", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNewClassProject, newVal), METADATA_PARAMS(Z_Construct_UClass_UNewClassProject_Statics::NewProp_newVal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNewClassProject_Statics::NewProp_newVal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNewClassProject_Statics::NewProp_tags_MetaData[] = {
		{ "Category", "MyVariables" },
		{ "ModuleRelativePath", "Public/NewClassProject.h" },
	};
#endif
	void Z_Construct_UClass_UNewClassProject_Statics::NewProp_tags_SetBit(void* Obj)
	{
		((UNewClassProject*)Obj)->tags = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNewClassProject_Statics::NewProp_tags = { "tags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UNewClassProject), &Z_Construct_UClass_UNewClassProject_Statics::NewProp_tags_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNewClassProject_Statics::NewProp_tags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNewClassProject_Statics::NewProp_tags_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNewClassProject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNewClassProject_Statics::NewProp_HP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNewClassProject_Statics::NewProp_newVal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNewClassProject_Statics::NewProp_tags,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNewClassProject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNewClassProject>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNewClassProject_Statics::ClassParams = {
		&UNewClassProject::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UNewClassProject_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UNewClassProject_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UNewClassProject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNewClassProject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNewClassProject()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNewClassProject_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNewClassProject, 2758674220);
	template<> WEEK1_PROGRAMMING2_API UClass* StaticClass<UNewClassProject>()
	{
		return UNewClassProject::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNewClassProject(Z_Construct_UClass_UNewClassProject, &UNewClassProject::StaticClass, TEXT("/Script/week1_programming2"), TEXT("UNewClassProject"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNewClassProject);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
