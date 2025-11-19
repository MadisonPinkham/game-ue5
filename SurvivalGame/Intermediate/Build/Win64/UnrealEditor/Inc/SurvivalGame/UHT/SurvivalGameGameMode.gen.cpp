// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SurvivalGameGameMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSurvivalGameGameMode() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
SURVIVALGAME_API UClass* Z_Construct_UClass_ASurvivalGameGameMode();
SURVIVALGAME_API UClass* Z_Construct_UClass_ASurvivalGameGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_SurvivalGame();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ASurvivalGameGameMode ****************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_ASurvivalGameGameMode;
UClass* ASurvivalGameGameMode::GetPrivateStaticClass()
{
	using TClass = ASurvivalGameGameMode;
	if (!Z_Registration_Info_UClass_ASurvivalGameGameMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SurvivalGameGameMode"),
			Z_Registration_Info_UClass_ASurvivalGameGameMode.InnerSingleton,
			StaticRegisterNativesASurvivalGameGameMode,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_ASurvivalGameGameMode.InnerSingleton;
}
UClass* Z_Construct_UClass_ASurvivalGameGameMode_NoRegister()
{
	return ASurvivalGameGameMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ASurvivalGameGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Simple GameMode for a first person game\n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "SurvivalGameGameMode.h" },
		{ "ModuleRelativePath", "SurvivalGameGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simple GameMode for a first person game" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class ASurvivalGameGameMode constinit property declarations ********************
// ********** End Class ASurvivalGameGameMode constinit property declarations **********************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASurvivalGameGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_ASurvivalGameGameMode_Statics
UObject* (*const Z_Construct_UClass_ASurvivalGameGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_SurvivalGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASurvivalGameGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASurvivalGameGameMode_Statics::ClassParams = {
	&ASurvivalGameGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008002ADu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASurvivalGameGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ASurvivalGameGameMode_Statics::Class_MetaDataParams)
};
void ASurvivalGameGameMode::StaticRegisterNativesASurvivalGameGameMode()
{
}
UClass* Z_Construct_UClass_ASurvivalGameGameMode()
{
	if (!Z_Registration_Info_UClass_ASurvivalGameGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASurvivalGameGameMode.OuterSingleton, Z_Construct_UClass_ASurvivalGameGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASurvivalGameGameMode.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, ASurvivalGameGameMode);
ASurvivalGameGameMode::~ASurvivalGameGameMode() {}
// ********** End Class ASurvivalGameGameMode ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Madison_OneDrive_Documents_Unreal_Projects_SurvivalGame_Source_SurvivalGame_SurvivalGameGameMode_h__Script_SurvivalGame_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASurvivalGameGameMode, ASurvivalGameGameMode::StaticClass, TEXT("ASurvivalGameGameMode"), &Z_Registration_Info_UClass_ASurvivalGameGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASurvivalGameGameMode), 4081393156U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_Madison_OneDrive_Documents_Unreal_Projects_SurvivalGame_Source_SurvivalGame_SurvivalGameGameMode_h__Script_SurvivalGame_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Madison_OneDrive_Documents_Unreal_Projects_SurvivalGame_Source_SurvivalGame_SurvivalGameGameMode_h__Script_SurvivalGame_2420318483{
	TEXT("/Script/SurvivalGame"),
	Z_CompiledInDeferFile_FID_Users_Madison_OneDrive_Documents_Unreal_Projects_SurvivalGame_Source_SurvivalGame_SurvivalGameGameMode_h__Script_SurvivalGame_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Madison_OneDrive_Documents_Unreal_Projects_SurvivalGame_Source_SurvivalGame_SurvivalGameGameMode_h__Script_SurvivalGame_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
