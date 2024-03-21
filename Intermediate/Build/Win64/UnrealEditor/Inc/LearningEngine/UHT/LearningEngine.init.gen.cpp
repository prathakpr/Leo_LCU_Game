// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLearningEngine_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_LearningEngine;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_LearningEngine()
	{
		if (!Z_Registration_Info_UPackage__Script_LearningEngine.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/LearningEngine",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x35B49B75,
				0x6D4B3B44,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_LearningEngine.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_LearningEngine.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_LearningEngine(Z_Construct_UPackage__Script_LearningEngine, TEXT("/Script/LearningEngine"), Z_Registration_Info_UPackage__Script_LearningEngine, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x35B49B75, 0x6D4B3B44));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
