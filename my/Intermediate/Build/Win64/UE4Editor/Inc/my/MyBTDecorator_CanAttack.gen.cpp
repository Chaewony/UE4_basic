// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "my/MyBTDecorator_CanAttack.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyBTDecorator_CanAttack() {}
// Cross Module References
	MY_API UClass* Z_Construct_UClass_UMyBTDecorator_CanAttack_NoRegister();
	MY_API UClass* Z_Construct_UClass_UMyBTDecorator_CanAttack();
	AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator();
	UPackage* Z_Construct_UPackage__Script_my();
// End Cross Module References
	void UMyBTDecorator_CanAttack::StaticRegisterNativesUMyBTDecorator_CanAttack()
	{
	}
	UClass* Z_Construct_UClass_UMyBTDecorator_CanAttack_NoRegister()
	{
		return UMyBTDecorator_CanAttack::StaticClass();
	}
	struct Z_Construct_UClass_UMyBTDecorator_CanAttack_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMyBTDecorator_CanAttack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTDecorator,
		(UObject* (*)())Z_Construct_UPackage__Script_my,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyBTDecorator_CanAttack_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "MyBTDecorator_CanAttack.h" },
		{ "ModuleRelativePath", "MyBTDecorator_CanAttack.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMyBTDecorator_CanAttack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyBTDecorator_CanAttack>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMyBTDecorator_CanAttack_Statics::ClassParams = {
		&UMyBTDecorator_CanAttack::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMyBTDecorator_CanAttack_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMyBTDecorator_CanAttack_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMyBTDecorator_CanAttack()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMyBTDecorator_CanAttack_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMyBTDecorator_CanAttack, 2144928952);
	template<> MY_API UClass* StaticClass<UMyBTDecorator_CanAttack>()
	{
		return UMyBTDecorator_CanAttack::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMyBTDecorator_CanAttack(Z_Construct_UClass_UMyBTDecorator_CanAttack, &UMyBTDecorator_CanAttack::StaticClass, TEXT("/Script/my"), TEXT("UMyBTDecorator_CanAttack"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMyBTDecorator_CanAttack);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
