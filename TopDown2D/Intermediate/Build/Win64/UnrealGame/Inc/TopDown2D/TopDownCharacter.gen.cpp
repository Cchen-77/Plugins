// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TopDown2D/Public/Character/TopDownCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTopDownCharacter() {}
// Cross Module References
	TOPDOWN2D_API UClass* Z_Construct_UClass_ATopDownCharacter_NoRegister();
	TOPDOWN2D_API UClass* Z_Construct_UClass_ATopDownCharacter();
	PAPERZD_API UClass* Z_Construct_UClass_APaperZDCharacter();
	UPackage* Z_Construct_UPackage__Script_TopDown2D();
	ENHANCEDINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FInputActionValue();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ATopDownCharacter::execOnMove)
	{
		P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMove(Z_Param_Out_value);
		P_NATIVE_END;
	}
	void ATopDownCharacter::StaticRegisterNativesATopDownCharacter()
	{
		UClass* Class = ATopDownCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnMove", &ATopDownCharacter::execOnMove },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATopDownCharacter_OnMove_Statics
	{
		struct TopDownCharacter_eventOnMove_Parms
		{
			FInputActionValue value;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATopDownCharacter_OnMove_Statics::NewProp_value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATopDownCharacter_OnMove_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TopDownCharacter_eventOnMove_Parms, value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(Z_Construct_UFunction_ATopDownCharacter_OnMove_Statics::NewProp_value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATopDownCharacter_OnMove_Statics::NewProp_value_MetaData)) }; // 740260349
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATopDownCharacter_OnMove_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATopDownCharacter_OnMove_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATopDownCharacter_OnMove_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/TopDownCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATopDownCharacter_OnMove_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATopDownCharacter, nullptr, "OnMove", nullptr, nullptr, sizeof(Z_Construct_UFunction_ATopDownCharacter_OnMove_Statics::TopDownCharacter_eventOnMove_Parms), Z_Construct_UFunction_ATopDownCharacter_OnMove_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATopDownCharacter_OnMove_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATopDownCharacter_OnMove_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATopDownCharacter_OnMove_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATopDownCharacter_OnMove()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATopDownCharacter_OnMove_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATopDownCharacter);
	UClass* Z_Construct_UClass_ATopDownCharacter_NoRegister()
	{
		return ATopDownCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ATopDownCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultIMC_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultIMC;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IA_Move_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_IA_Move;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATopDownCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APaperZDCharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_TopDown2D,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATopDownCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATopDownCharacter_OnMove, "OnMove" }, // 2291539828
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATopDownCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Character/TopDownCharacter.h" },
		{ "ModuleRelativePath", "Public/Character/TopDownCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATopDownCharacter_Statics::NewProp_DefaultIMC_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Character/TopDownCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATopDownCharacter_Statics::NewProp_DefaultIMC = { "DefaultIMC", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATopDownCharacter, DefaultIMC), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATopDownCharacter_Statics::NewProp_DefaultIMC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATopDownCharacter_Statics::NewProp_DefaultIMC_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATopDownCharacter_Statics::NewProp_IA_Move_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Character/TopDownCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATopDownCharacter_Statics::NewProp_IA_Move = { "IA_Move", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATopDownCharacter, IA_Move), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATopDownCharacter_Statics::NewProp_IA_Move_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATopDownCharacter_Statics::NewProp_IA_Move_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATopDownCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATopDownCharacter_Statics::NewProp_DefaultIMC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATopDownCharacter_Statics::NewProp_IA_Move,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATopDownCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATopDownCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATopDownCharacter_Statics::ClassParams = {
		&ATopDownCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATopDownCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ATopDownCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATopDownCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATopDownCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATopDownCharacter()
	{
		if (!Z_Registration_Info_UClass_ATopDownCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATopDownCharacter.OuterSingleton, Z_Construct_UClass_ATopDownCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATopDownCharacter.OuterSingleton;
	}
	template<> TOPDOWN2D_API UClass* StaticClass<ATopDownCharacter>()
	{
		return ATopDownCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATopDownCharacter);
	struct Z_CompiledInDeferFile_FID_Lab_Plugins_TopDown2D_Source_TopDown2D_Public_Character_TopDownCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Lab_Plugins_TopDown2D_Source_TopDown2D_Public_Character_TopDownCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATopDownCharacter, ATopDownCharacter::StaticClass, TEXT("ATopDownCharacter"), &Z_Registration_Info_UClass_ATopDownCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATopDownCharacter), 2821837849U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Lab_Plugins_TopDown2D_Source_TopDown2D_Public_Character_TopDownCharacter_h_2993067650(TEXT("/Script/TopDown2D"),
		Z_CompiledInDeferFile_FID_Lab_Plugins_TopDown2D_Source_TopDown2D_Public_Character_TopDownCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Lab_Plugins_TopDown2D_Source_TopDown2D_Public_Character_TopDownCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
