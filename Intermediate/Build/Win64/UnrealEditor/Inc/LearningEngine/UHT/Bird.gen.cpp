// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LearningEngine/Public/Pawn/Bird.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBird() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	LEARNINGENGINE_API UClass* Z_Construct_UClass_ABird();
	LEARNINGENGINE_API UClass* Z_Construct_UClass_ABird_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LearningEngine();
// End Cross Module References
	void ABird::StaticRegisterNativesABird()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABird);
	UClass* Z_Construct_UClass_ABird_NoRegister()
	{
		return ABird::StaticClass();
	}
	struct Z_Construct_UClass_ABird_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Capsule_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Capsule;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BirdMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BirdMesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABird_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_LearningEngine,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABird_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABird_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Pawn/Bird.h" },
		{ "ModuleRelativePath", "Public/Pawn/Bird.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABird_Statics::NewProp_Capsule_MetaData[] = {
		{ "Category", "Bird" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Pawn/Bird.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABird_Statics::NewProp_Capsule = { "Capsule", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABird, Capsule), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABird_Statics::NewProp_Capsule_MetaData), Z_Construct_UClass_ABird_Statics::NewProp_Capsule_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABird_Statics::NewProp_BirdMesh_MetaData[] = {
		{ "Category", "Bird" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//forward declaration\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Pawn/Bird.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "forward declaration" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABird_Statics::NewProp_BirdMesh = { "BirdMesh", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABird, BirdMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABird_Statics::NewProp_BirdMesh_MetaData), Z_Construct_UClass_ABird_Statics::NewProp_BirdMesh_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABird_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABird_Statics::NewProp_Capsule,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABird_Statics::NewProp_BirdMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABird_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABird>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABird_Statics::ClassParams = {
		&ABird::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABird_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ABird_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABird_Statics::Class_MetaDataParams), Z_Construct_UClass_ABird_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABird_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ABird()
	{
		if (!Z_Registration_Info_UClass_ABird.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABird.OuterSingleton, Z_Construct_UClass_ABird_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABird.OuterSingleton;
	}
	template<> LEARNINGENGINE_API UClass* StaticClass<ABird>()
	{
		return ABird::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABird);
	ABird::~ABird() {}
	struct Z_CompiledInDeferFile_FID_UnrealProjects_LearningEngine_Source_LearningEngine_Public_Pawn_Bird_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_LearningEngine_Source_LearningEngine_Public_Pawn_Bird_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABird, ABird::StaticClass, TEXT("ABird"), &Z_Registration_Info_UClass_ABird, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABird), 4216954178U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_LearningEngine_Source_LearningEngine_Public_Pawn_Bird_h_1504003141(TEXT("/Script/LearningEngine"),
		Z_CompiledInDeferFile_FID_UnrealProjects_LearningEngine_Source_LearningEngine_Public_Pawn_Bird_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_LearningEngine_Source_LearningEngine_Public_Pawn_Bird_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
