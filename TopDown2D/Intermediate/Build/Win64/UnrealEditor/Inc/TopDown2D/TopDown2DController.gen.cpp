// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TopDown2D/Public/Character/TopDown2DController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTopDown2DController() {}
// Cross Module References
	TOPDOWN2D_API UClass* Z_Construct_UClass_ATopDown2DController_NoRegister();
	TOPDOWN2D_API UClass* Z_Construct_UClass_ATopDown2DController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_TopDown2D();
	ENGINE_API UClass* Z_Construct_UClass_ACameraActor_NoRegister();
// End Cross Module References
	void ATopDown2DController::StaticRegisterNativesATopDown2DController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATopDown2DController);
	UClass* Z_Construct_UClass_ATopDown2DController_NoRegister()
	{
		return ATopDown2DController::StaticClass();
	}
	struct Z_Construct_UClass_ATopDown2DController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraLocked_MetaData[];
#endif
		static void NewProp_CameraLocked_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_CameraLocked;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TopDownCamera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TopDownCamera;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraHeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CameraHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsCameraLag_MetaData[];
#endif
		static void NewProp_IsCameraLag_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsCameraLag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraLagSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CameraLagSpeed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATopDown2DController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_TopDown2D,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATopDown2DController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Character/TopDown2DController.h" },
		{ "ModuleRelativePath", "Public/Character/TopDown2DController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATopDown2DController_Statics::NewProp_CameraLocked_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Public/Character/TopDown2DController.h" },
	};
#endif
	void Z_Construct_UClass_ATopDown2DController_Statics::NewProp_CameraLocked_SetBit(void* Obj)
	{
		((ATopDown2DController*)Obj)->CameraLocked = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATopDown2DController_Statics::NewProp_CameraLocked = { "CameraLocked", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ATopDown2DController), &Z_Construct_UClass_ATopDown2DController_Statics::NewProp_CameraLocked_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATopDown2DController_Statics::NewProp_CameraLocked_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATopDown2DController_Statics::NewProp_CameraLocked_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATopDown2DController_Statics::NewProp_TopDownCamera_MetaData[] = {
		{ "ModuleRelativePath", "Public/Character/TopDown2DController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATopDown2DController_Statics::NewProp_TopDownCamera = { "TopDownCamera", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATopDown2DController, TopDownCamera), Z_Construct_UClass_ACameraActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATopDown2DController_Statics::NewProp_TopDownCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATopDown2DController_Statics::NewProp_TopDownCamera_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATopDown2DController_Statics::NewProp_CameraHeight_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Public/Character/TopDown2DController.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATopDown2DController_Statics::NewProp_CameraHeight = { "CameraHeight", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATopDown2DController, CameraHeight), METADATA_PARAMS(Z_Construct_UClass_ATopDown2DController_Statics::NewProp_CameraHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATopDown2DController_Statics::NewProp_CameraHeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATopDown2DController_Statics::NewProp_IsCameraLag_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Public/Character/TopDown2DController.h" },
	};
#endif
	void Z_Construct_UClass_ATopDown2DController_Statics::NewProp_IsCameraLag_SetBit(void* Obj)
	{
		((ATopDown2DController*)Obj)->IsCameraLag = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATopDown2DController_Statics::NewProp_IsCameraLag = { "IsCameraLag", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ATopDown2DController), &Z_Construct_UClass_ATopDown2DController_Statics::NewProp_IsCameraLag_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATopDown2DController_Statics::NewProp_IsCameraLag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATopDown2DController_Statics::NewProp_IsCameraLag_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATopDown2DController_Statics::NewProp_CameraLagSpeed_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Public/Character/TopDown2DController.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATopDown2DController_Statics::NewProp_CameraLagSpeed = { "CameraLagSpeed", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATopDown2DController, CameraLagSpeed), METADATA_PARAMS(Z_Construct_UClass_ATopDown2DController_Statics::NewProp_CameraLagSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATopDown2DController_Statics::NewProp_CameraLagSpeed_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATopDown2DController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATopDown2DController_Statics::NewProp_CameraLocked,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATopDown2DController_Statics::NewProp_TopDownCamera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATopDown2DController_Statics::NewProp_CameraHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATopDown2DController_Statics::NewProp_IsCameraLag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATopDown2DController_Statics::NewProp_CameraLagSpeed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATopDown2DController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATopDown2DController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATopDown2DController_Statics::ClassParams = {
		&ATopDown2DController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ATopDown2DController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ATopDown2DController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATopDown2DController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATopDown2DController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATopDown2DController()
	{
		if (!Z_Registration_Info_UClass_ATopDown2DController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATopDown2DController.OuterSingleton, Z_Construct_UClass_ATopDown2DController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATopDown2DController.OuterSingleton;
	}
	template<> TOPDOWN2D_API UClass* StaticClass<ATopDown2DController>()
	{
		return ATopDown2DController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATopDown2DController);
	struct Z_CompiledInDeferFile_FID_Lab_Plugins_TopDown2D_Source_TopDown2D_Public_Character_TopDown2DController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Lab_Plugins_TopDown2D_Source_TopDown2D_Public_Character_TopDown2DController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATopDown2DController, ATopDown2DController::StaticClass, TEXT("ATopDown2DController"), &Z_Registration_Info_UClass_ATopDown2DController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATopDown2DController), 1428979703U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Lab_Plugins_TopDown2D_Source_TopDown2D_Public_Character_TopDown2DController_h_3973740631(TEXT("/Script/TopDown2D"),
		Z_CompiledInDeferFile_FID_Lab_Plugins_TopDown2D_Source_TopDown2D_Public_Character_TopDown2DController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Lab_Plugins_TopDown2D_Source_TopDown2D_Public_Character_TopDown2DController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
