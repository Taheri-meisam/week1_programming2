// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "week1_programming2/Public/TestClass.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTestClass() {}
// Cross Module References
	WEEK1_PROGRAMMING2_API UClass* Z_Construct_UClass_UTestClass_NoRegister();
	WEEK1_PROGRAMMING2_API UClass* Z_Construct_UClass_UTestClass();
	WEEK1_PROGRAMMING2_API UClass* Z_Construct_UClass_UNewClassProject();
	UPackage* Z_Construct_UPackage__Script_week1_programming2();
// End Cross Module References
	void UTestClass::StaticRegisterNativesUTestClass()
	{
	}
	UClass* Z_Construct_UClass_UTestClass_NoRegister()
	{
		return UTestClass::StaticClass();
	}
	struct Z_Construct_UClass_UTestClass_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTestClass_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNewClassProject,
		(UObject* (*)())Z_Construct_UPackage__Script_week1_programming2,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTestClass_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "TestClass.h" },
		{ "ModuleRelativePath", "Public/TestClass.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTestClass_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTestClass>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTestClass_Statics::ClassParams = {
		&UTestClass::StaticClass,
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
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UTestClass_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTestClass_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTestClass()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTestClass_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTestClass, 1475548204);
	template<> WEEK1_PROGRAMMING2_API UClass* StaticClass<UTestClass>()
	{
		return UTestClass::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTestClass(Z_Construct_UClass_UTestClass, &UTestClass::StaticClass, TEXT("/Script/week1_programming2"), TEXT("UTestClass"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTestClass);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
