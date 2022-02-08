// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef KORAULRIG_KoraulRigCharacter_generated_h
#error "KoraulRigCharacter.generated.h already included, missing '#pragma once' in KoraulRigCharacter.h"
#endif
#define KORAULRIG_KoraulRigCharacter_generated_h

#define MapKoraul_Source_KoraulRig_KoraulRigCharacter_h_12_SPARSE_DATA
#define MapKoraul_Source_KoraulRig_KoraulRigCharacter_h_12_RPC_WRAPPERS
#define MapKoraul_Source_KoraulRig_KoraulRigCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define MapKoraul_Source_KoraulRig_KoraulRigCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAKoraulRigCharacter(); \
	friend struct Z_Construct_UClass_AKoraulRigCharacter_Statics; \
public: \
	DECLARE_CLASS(AKoraulRigCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/KoraulRig"), NO_API) \
	DECLARE_SERIALIZER(AKoraulRigCharacter)


#define MapKoraul_Source_KoraulRig_KoraulRigCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAKoraulRigCharacter(); \
	friend struct Z_Construct_UClass_AKoraulRigCharacter_Statics; \
public: \
	DECLARE_CLASS(AKoraulRigCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/KoraulRig"), NO_API) \
	DECLARE_SERIALIZER(AKoraulRigCharacter)


#define MapKoraul_Source_KoraulRig_KoraulRigCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AKoraulRigCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AKoraulRigCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AKoraulRigCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AKoraulRigCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AKoraulRigCharacter(AKoraulRigCharacter&&); \
	NO_API AKoraulRigCharacter(const AKoraulRigCharacter&); \
public:


#define MapKoraul_Source_KoraulRig_KoraulRigCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AKoraulRigCharacter(AKoraulRigCharacter&&); \
	NO_API AKoraulRigCharacter(const AKoraulRigCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AKoraulRigCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AKoraulRigCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AKoraulRigCharacter)


#define MapKoraul_Source_KoraulRig_KoraulRigCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(AKoraulRigCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(AKoraulRigCharacter, FollowCamera); }


#define MapKoraul_Source_KoraulRig_KoraulRigCharacter_h_9_PROLOG
#define MapKoraul_Source_KoraulRig_KoraulRigCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MapKoraul_Source_KoraulRig_KoraulRigCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	MapKoraul_Source_KoraulRig_KoraulRigCharacter_h_12_SPARSE_DATA \
	MapKoraul_Source_KoraulRig_KoraulRigCharacter_h_12_RPC_WRAPPERS \
	MapKoraul_Source_KoraulRig_KoraulRigCharacter_h_12_INCLASS \
	MapKoraul_Source_KoraulRig_KoraulRigCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MapKoraul_Source_KoraulRig_KoraulRigCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MapKoraul_Source_KoraulRig_KoraulRigCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	MapKoraul_Source_KoraulRig_KoraulRigCharacter_h_12_SPARSE_DATA \
	MapKoraul_Source_KoraulRig_KoraulRigCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	MapKoraul_Source_KoraulRig_KoraulRigCharacter_h_12_INCLASS_NO_PURE_DECLS \
	MapKoraul_Source_KoraulRig_KoraulRigCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> KORAULRIG_API UClass* StaticClass<class AKoraulRigCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MapKoraul_Source_KoraulRig_KoraulRigCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
