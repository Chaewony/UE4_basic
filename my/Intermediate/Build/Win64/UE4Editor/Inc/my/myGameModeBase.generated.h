// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MY_myGameModeBase_generated_h
#error "myGameModeBase.generated.h already included, missing '#pragma once' in myGameModeBase.h"
#endif
#define MY_myGameModeBase_generated_h

#define my_Source_my_myGameModeBase_h_15_SPARSE_DATA
#define my_Source_my_myGameModeBase_h_15_RPC_WRAPPERS
#define my_Source_my_myGameModeBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define my_Source_my_myGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAmyGameModeBase(); \
	friend struct Z_Construct_UClass_AmyGameModeBase_Statics; \
public: \
	DECLARE_CLASS(AmyGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/my"), NO_API) \
	DECLARE_SERIALIZER(AmyGameModeBase)


#define my_Source_my_myGameModeBase_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAmyGameModeBase(); \
	friend struct Z_Construct_UClass_AmyGameModeBase_Statics; \
public: \
	DECLARE_CLASS(AmyGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/my"), NO_API) \
	DECLARE_SERIALIZER(AmyGameModeBase)


#define my_Source_my_myGameModeBase_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AmyGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AmyGameModeBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AmyGameModeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AmyGameModeBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AmyGameModeBase(AmyGameModeBase&&); \
	NO_API AmyGameModeBase(const AmyGameModeBase&); \
public:


#define my_Source_my_myGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AmyGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AmyGameModeBase(AmyGameModeBase&&); \
	NO_API AmyGameModeBase(const AmyGameModeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AmyGameModeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AmyGameModeBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AmyGameModeBase)


#define my_Source_my_myGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET
#define my_Source_my_myGameModeBase_h_12_PROLOG
#define my_Source_my_myGameModeBase_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	my_Source_my_myGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET \
	my_Source_my_myGameModeBase_h_15_SPARSE_DATA \
	my_Source_my_myGameModeBase_h_15_RPC_WRAPPERS \
	my_Source_my_myGameModeBase_h_15_INCLASS \
	my_Source_my_myGameModeBase_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define my_Source_my_myGameModeBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	my_Source_my_myGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET \
	my_Source_my_myGameModeBase_h_15_SPARSE_DATA \
	my_Source_my_myGameModeBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	my_Source_my_myGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
	my_Source_my_myGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MY_API UClass* StaticClass<class AmyGameModeBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID my_Source_my_myGameModeBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
