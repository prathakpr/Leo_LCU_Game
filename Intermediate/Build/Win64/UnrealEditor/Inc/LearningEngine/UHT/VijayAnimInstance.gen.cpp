// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LearningEngine/Public/Characters/VijayAnimInstance.h"
#include "../../Source/Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVijayAnimInstance() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	ENGINE_API UClass* Z_Construct_UClass_UCharacterMovementComponent_NoRegister();
	LEARNINGENGINE_API UClass* Z_Construct_UClass_AMyCharacter_NoRegister();
	LEARNINGENGINE_API UClass* Z_Construct_UClass_UVijayAnimInstance();
	LEARNINGENGINE_API UClass* Z_Construct_UClass_UVijayAnimInstance_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LearningEngine();
// End Cross Module References
	void UVijayAnimInstance::StaticRegisterNativesUVijayAnimInstance()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVijayAnimInstance);
	UClass* Z_Construct_UClass_UVijayAnimInstance_NoRegister()
	{
		return UVijayAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UVijayAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MyCharacter_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MyCharacter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MyCharacterMovement_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MyCharacterMovement;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroundSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GroundSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsFalling_MetaData[];
#endif
		static void NewProp_IsFalling_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsFalling;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVijayAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_LearningEngine,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVijayAnimInstance_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVijayAnimInstance_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "Characters/VijayAnimInstance.h" },
		{ "ModuleRelativePath", "Public/Characters/VijayAnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVijayAnimInstance_Statics::NewProp_MyCharacter_MetaData[] = {
		{ "Category", "VijayAnimInstance" },
		{ "ModuleRelativePath", "Public/Characters/VijayAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVijayAnimInstance_Statics::NewProp_MyCharacter = { "MyCharacter", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVijayAnimInstance, MyCharacter), Z_Construct_UClass_AMyCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVijayAnimInstance_Statics::NewProp_MyCharacter_MetaData), Z_Construct_UClass_UVijayAnimInstance_Statics::NewProp_MyCharacter_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVijayAnimInstance_Statics::NewProp_MyCharacterMovement_MetaData[] = {
		{ "Category", "Movement" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Characters/VijayAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVijayAnimInstance_Statics::NewProp_MyCharacterMovement = { "MyCharacterMovement", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVijayAnimInstance, MyCharacterMovement), Z_Construct_UClass_UCharacterMovementComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVijayAnimInstance_Statics::NewProp_MyCharacterMovement_MetaData), Z_Construct_UClass_UVijayAnimInstance_Statics::NewProp_MyCharacterMovement_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVijayAnimInstance_Statics::NewProp_GroundSpeed_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/Characters/VijayAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVijayAnimInstance_Statics::NewProp_GroundSpeed = { "GroundSpeed", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVijayAnimInstance, GroundSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVijayAnimInstance_Statics::NewProp_GroundSpeed_MetaData), Z_Construct_UClass_UVijayAnimInstance_Statics::NewProp_GroundSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVijayAnimInstance_Statics::NewProp_IsFalling_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/Characters/VijayAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UVijayAnimInstance_Statics::NewProp_IsFalling_SetBit(void* Obj)
	{
		((UVijayAnimInstance*)Obj)->IsFalling = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVijayAnimInstance_Statics::NewProp_IsFalling = { "IsFalling", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVijayAnimInstance), &Z_Construct_UClass_UVijayAnimInstance_Statics::NewProp_IsFalling_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVijayAnimInstance_Statics::NewProp_IsFalling_MetaData), Z_Construct_UClass_UVijayAnimInstance_Statics::NewProp_IsFalling_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVijayAnimInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVijayAnimInstance_Statics::NewProp_MyCharacter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVijayAnimInstance_Statics::NewProp_MyCharacterMovement,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVijayAnimInstance_Statics::NewProp_GroundSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVijayAnimInstance_Statics::NewProp_IsFalling,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVijayAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVijayAnimInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVijayAnimInstance_Statics::ClassParams = {
		&UVijayAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVijayAnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVijayAnimInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVijayAnimInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UVijayAnimInstance_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVijayAnimInstance_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UVijayAnimInstance()
	{
		if (!Z_Registration_Info_UClass_UVijayAnimInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVijayAnimInstance.OuterSingleton, Z_Construct_UClass_UVijayAnimInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVijayAnimInstance.OuterSingleton;
	}
	template<> LEARNINGENGINE_API UClass* StaticClass<UVijayAnimInstance>()
	{
		return UVijayAnimInstance::StaticClass();
	}
	UVijayAnimInstance::UVijayAnimInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVijayAnimInstance);
	UVijayAnimInstance::~UVijayAnimInstance() {}
	struct Z_CompiledInDeferFile_FID_UnrealProjects_LearningEngine_Source_LearningEngine_Public_Characters_VijayAnimInstance_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_LearningEngine_Source_LearningEngine_Public_Characters_VijayAnimInstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVijayAnimInstance, UVijayAnimInstance::StaticClass, TEXT("UVijayAnimInstance"), &Z_Registration_Info_UClass_UVijayAnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVijayAnimInstance), 4114776472U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_LearningEngine_Source_LearningEngine_Public_Characters_VijayAnimInstance_h_2573171906(TEXT("/Script/LearningEngine"),
		Z_CompiledInDeferFile_FID_UnrealProjects_LearningEngine_Source_LearningEngine_Public_Characters_VijayAnimInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_LearningEngine_Source_LearningEngine_Public_Characters_VijayAnimInstance_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
