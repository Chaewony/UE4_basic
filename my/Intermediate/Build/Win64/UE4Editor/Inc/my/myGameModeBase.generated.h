// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MY_MyGameModeBase_generated_h
#error "MyGameModeBase.generated.h already included, missing '#pragma once' in MyGameModeBase.h"
#endif
#define MY_MyGameModeBase_generated_h

#define my_Source_my_MyGameModeBase_h_15_SPARSE_DATA
#define my_Source_my_MyGameModeBase_h_15_RPC_WRAPPERS
#define my_Source_my_MyGameModeBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define my_Source_my_MyGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyGameModeBase(); \
	friend struct Z_Construct_UClass_AMyGameModeBase_Statics; \
public: \
	DECLARE_CLASS(AMyGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/my"), NO_API) \
	DECLARE_SERIALIZER(AMyGameModeBase)


#define my_Source_my_MyGameModeBase_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAMyGameModeBase(); \
	friend struct Z_Construct_UClass_AMyGameModeBase_Statics; \
public: \
	DECLARE_CLASS(AMyGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/my"), NO_API) \
	DECLARE_SERIALIZER(AMyGameModeBase)


#define my_Source_my_MyGameModeBase_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyGameModeBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyGameModeBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyGameModeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyGameModeBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyGameModeBase(AMyGameModeBase&&); \
	NO_API AMyGameModeBase(const AMyGameModeBase&); \
public:


#define my_Source_my_MyGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyGameModeBase(AMyGameModeBase&&); \
	NO_API AMyGameModeBase(const AMyGameModeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyGameModeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyGameModeBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyGameModeBase)


#define my_Source_my_MyGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET
#define my_Source_my_MyGameModeBase_h_12_PROLOG
#define my_Source_my_MyGameModeBase_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	my_Source_my_MyGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET \
	my_Source_my_MyGameModeBase_h_15_SPARSE_DATA \
	my_Source_my_MyGameModeBase_h_15_RPC_WRAPPERS \
	my_Source_my_MyGameModeBase_h_15_INCLASS \
	my_Source_my_MyGameModeBase_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define my_Source_my_MyGameModeBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	my_Source_my_MyGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET \
	my_Source_my_MyGameModeBase_h_15_SPARSE_DATA \
	my_Source_my_MyGameModeBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	my_Source_my_MyGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
	my_Source_my_MyGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MY_API UClass* StaticClass<class AMyGameModeBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID my_Source_my_MyGameModeBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
