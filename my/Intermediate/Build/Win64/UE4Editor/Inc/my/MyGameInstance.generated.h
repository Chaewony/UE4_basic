// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MY_MyGameInstance_generated_h
#error "MyGameInstance.generated.h already included, missing '#pragma once' in MyGameInstance.h"
#endif
#define MY_MyGameInstance_generated_h

#define my_Source_my_MyGameInstance_h_13_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMyCharacterData_Statics; \
	MY_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> MY_API UScriptStruct* StaticStruct<struct FMyCharacterData>();

#define my_Source_my_MyGameInstance_h_31_SPARSE_DATA
#define my_Source_my_MyGameInstance_h_31_RPC_WRAPPERS
#define my_Source_my_MyGameInstance_h_31_RPC_WRAPPERS_NO_PURE_DECLS
#define my_Source_my_MyGameInstance_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMyGameInstance(); \
	friend struct Z_Construct_UClass_UMyGameInstance_Statics; \
public: \
	DECLARE_CLASS(UMyGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/my"), NO_API) \
	DECLARE_SERIALIZER(UMyGameInstance)


#define my_Source_my_MyGameInstance_h_31_INCLASS \
private: \
	static void StaticRegisterNativesUMyGameInstance(); \
	friend struct Z_Construct_UClass_UMyGameInstance_Statics; \
public: \
	DECLARE_CLASS(UMyGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/my"), NO_API) \
	DECLARE_SERIALIZER(UMyGameInstance)


#define my_Source_my_MyGameInstance_h_31_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMyGameInstance(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMyGameInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMyGameInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyGameInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMyGameInstance(UMyGameInstance&&); \
	NO_API UMyGameInstance(const UMyGameInstance&); \
public:


#define my_Source_my_MyGameInstance_h_31_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMyGameInstance(UMyGameInstance&&); \
	NO_API UMyGameInstance(const UMyGameInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMyGameInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyGameInstance); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMyGameInstance)


#define my_Source_my_MyGameInstance_h_31_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MyStats() { return STRUCT_OFFSET(UMyGameInstance, MyStats); }


#define my_Source_my_MyGameInstance_h_28_PROLOG
#define my_Source_my_MyGameInstance_h_31_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	my_Source_my_MyGameInstance_h_31_PRIVATE_PROPERTY_OFFSET \
	my_Source_my_MyGameInstance_h_31_SPARSE_DATA \
	my_Source_my_MyGameInstance_h_31_RPC_WRAPPERS \
	my_Source_my_MyGameInstance_h_31_INCLASS \
	my_Source_my_MyGameInstance_h_31_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define my_Source_my_MyGameInstance_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	my_Source_my_MyGameInstance_h_31_PRIVATE_PROPERTY_OFFSET \
	my_Source_my_MyGameInstance_h_31_SPARSE_DATA \
	my_Source_my_MyGameInstance_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	my_Source_my_MyGameInstance_h_31_INCLASS_NO_PURE_DECLS \
	my_Source_my_MyGameInstance_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MY_API UClass* StaticClass<class UMyGameInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID my_Source_my_MyGameInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
