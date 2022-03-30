// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MY_MyCharacterWidget_generated_h
#error "MyCharacterWidget.generated.h already included, missing '#pragma once' in MyCharacterWidget.h"
#endif
#define MY_MyCharacterWidget_generated_h

#define my_Source_my_MyCharacterWidget_h_15_SPARSE_DATA
#define my_Source_my_MyCharacterWidget_h_15_RPC_WRAPPERS
#define my_Source_my_MyCharacterWidget_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define my_Source_my_MyCharacterWidget_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMyCharacterWidget(); \
	friend struct Z_Construct_UClass_UMyCharacterWidget_Statics; \
public: \
	DECLARE_CLASS(UMyCharacterWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/my"), NO_API) \
	DECLARE_SERIALIZER(UMyCharacterWidget)


#define my_Source_my_MyCharacterWidget_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUMyCharacterWidget(); \
	friend struct Z_Construct_UClass_UMyCharacterWidget_Statics; \
public: \
	DECLARE_CLASS(UMyCharacterWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/my"), NO_API) \
	DECLARE_SERIALIZER(UMyCharacterWidget)


#define my_Source_my_MyCharacterWidget_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMyCharacterWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMyCharacterWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMyCharacterWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyCharacterWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMyCharacterWidget(UMyCharacterWidget&&); \
	NO_API UMyCharacterWidget(const UMyCharacterWidget&); \
public:


#define my_Source_my_MyCharacterWidget_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMyCharacterWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMyCharacterWidget(UMyCharacterWidget&&); \
	NO_API UMyCharacterWidget(const UMyCharacterWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMyCharacterWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyCharacterWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMyCharacterWidget)


#define my_Source_my_MyCharacterWidget_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PB_HpBar() { return STRUCT_OFFSET(UMyCharacterWidget, PB_HpBar); }


#define my_Source_my_MyCharacterWidget_h_12_PROLOG
#define my_Source_my_MyCharacterWidget_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	my_Source_my_MyCharacterWidget_h_15_PRIVATE_PROPERTY_OFFSET \
	my_Source_my_MyCharacterWidget_h_15_SPARSE_DATA \
	my_Source_my_MyCharacterWidget_h_15_RPC_WRAPPERS \
	my_Source_my_MyCharacterWidget_h_15_INCLASS \
	my_Source_my_MyCharacterWidget_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define my_Source_my_MyCharacterWidget_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	my_Source_my_MyCharacterWidget_h_15_PRIVATE_PROPERTY_OFFSET \
	my_Source_my_MyCharacterWidget_h_15_SPARSE_DATA \
	my_Source_my_MyCharacterWidget_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	my_Source_my_MyCharacterWidget_h_15_INCLASS_NO_PURE_DECLS \
	my_Source_my_MyCharacterWidget_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MY_API UClass* StaticClass<class UMyCharacterWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID my_Source_my_MyCharacterWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
