// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ToolsDevForEngines/Public/EUW_WeatherSelector.h"
#include "ToolsDevForEngines/UserWeatherData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEUW_WeatherSelector() {}

// Begin Cross Module References
BLUTILITY_API UClass* Z_Construct_UClass_UEditorUtilityWidget();
TOOLSDEVFORENGINES_API UClass* Z_Construct_UClass_UEUW_WeatherSelector();
TOOLSDEVFORENGINES_API UClass* Z_Construct_UClass_UEUW_WeatherSelector_NoRegister();
TOOLSDEVFORENGINES_API UClass* Z_Construct_UClass_UI_WeatherCalculations_NoRegister();
TOOLSDEVFORENGINES_API UClass* Z_Construct_UClass_UW_ClimateWidget_NoRegister();
TOOLSDEVFORENGINES_API UClass* Z_Construct_UClass_UW_DayLengthWidget_NoRegister();
TOOLSDEVFORENGINES_API UClass* Z_Construct_UClass_UW_DayNightWidget_NoRegister();
TOOLSDEVFORENGINES_API UClass* Z_Construct_UClass_UW_GenerateButton_NoRegister();
TOOLSDEVFORENGINES_API UClass* Z_Construct_UClass_UW_SeasonWidget_NoRegister();
TOOLSDEVFORENGINES_API UFunction* Z_Construct_UDelegateFunction_ToolsDevForEngines_OnGenerateWeatherButtonClickedSignature__DelegateSignature();
TOOLSDEVFORENGINES_API UScriptStruct* Z_Construct_UScriptStruct_FUserWeatherData();
UMG_API UClass* Z_Construct_UClass_UCanvasPanel_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UPackage* Z_Construct_UPackage__Script_ToolsDevForEngines();
// End Cross Module References

// Begin Delegate FOnGenerateWeatherButtonClickedSignature
struct Z_Construct_UDelegateFunction_ToolsDevForEngines_OnGenerateWeatherButtonClickedSignature__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EUW_WeatherSelector.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ToolsDevForEngines_OnGenerateWeatherButtonClickedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ToolsDevForEngines, nullptr, "OnGenerateWeatherButtonClickedSignature__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ToolsDevForEngines_OnGenerateWeatherButtonClickedSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ToolsDevForEngines_OnGenerateWeatherButtonClickedSignature__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_ToolsDevForEngines_OnGenerateWeatherButtonClickedSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ToolsDevForEngines_OnGenerateWeatherButtonClickedSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnGenerateWeatherButtonClickedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnGenerateWeatherButtonClickedSignature)
{
	OnGenerateWeatherButtonClickedSignature.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnGenerateWeatherButtonClickedSignature

// Begin Class UEUW_WeatherSelector Function SetUserInputs
struct Z_Construct_UFunction_UEUW_WeatherSelector_SetUserInputs_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EUW_WeatherSelector.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEUW_WeatherSelector_SetUserInputs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEUW_WeatherSelector, nullptr, "SetUserInputs", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEUW_WeatherSelector_SetUserInputs_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEUW_WeatherSelector_SetUserInputs_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UEUW_WeatherSelector_SetUserInputs()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEUW_WeatherSelector_SetUserInputs_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEUW_WeatherSelector::execSetUserInputs)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetUserInputs();
	P_NATIVE_END;
}
// End Class UEUW_WeatherSelector Function SetUserInputs

// Begin Class UEUW_WeatherSelector Function SetUserWeatherData
struct Z_Construct_UFunction_UEUW_WeatherSelector_SetUserWeatherData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EUW_WeatherSelector.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEUW_WeatherSelector_SetUserWeatherData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEUW_WeatherSelector, nullptr, "SetUserWeatherData", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEUW_WeatherSelector_SetUserWeatherData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEUW_WeatherSelector_SetUserWeatherData_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UEUW_WeatherSelector_SetUserWeatherData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEUW_WeatherSelector_SetUserWeatherData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEUW_WeatherSelector::execSetUserWeatherData)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetUserWeatherData();
	P_NATIVE_END;
}
// End Class UEUW_WeatherSelector Function SetUserWeatherData

// Begin Class UEUW_WeatherSelector
void UEUW_WeatherSelector::StaticRegisterNativesUEUW_WeatherSelector()
{
	UClass* Class = UEUW_WeatherSelector::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetUserInputs", &UEUW_WeatherSelector::execSetUserInputs },
		{ "SetUserWeatherData", &UEUW_WeatherSelector::execSetUserWeatherData },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEUW_WeatherSelector);
UClass* Z_Construct_UClass_UEUW_WeatherSelector_NoRegister()
{
	return UEUW_WeatherSelector::StaticClass();
}
struct Z_Construct_UClass_UEUW_WeatherSelector_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "EUW_WeatherSelector.h" },
		{ "ModuleRelativePath", "Public/EUW_WeatherSelector.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Canvas_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/EUW_WeatherSelector.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UtilityTitle_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/EUW_WeatherSelector.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SeasonWidget_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/EUW_WeatherSelector.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClimateWidget_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/EUW_WeatherSelector.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DayNightWidget_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/EUW_WeatherSelector.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DayLengthWidget_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/EUW_WeatherSelector.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GenerateButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/EUW_WeatherSelector.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnGenerateWeatherButtonClickedDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Public/EUW_WeatherSelector.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserDataStruct_MetaData[] = {
		{ "Category", "EUW_WeatherSelector" },
		{ "ModuleRelativePath", "Public/EUW_WeatherSelector.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Canvas;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_UtilityTitle;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SeasonWidget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ClimateWidget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DayNightWidget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DayLengthWidget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GenerateButton;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnGenerateWeatherButtonClickedDelegate;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UserDataStruct;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UEUW_WeatherSelector_SetUserInputs, "SetUserInputs" }, // 3613933360
		{ &Z_Construct_UFunction_UEUW_WeatherSelector_SetUserWeatherData, "SetUserWeatherData" }, // 216214585
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEUW_WeatherSelector>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEUW_WeatherSelector_Statics::NewProp_Canvas = { "Canvas", nullptr, (EPropertyFlags)0x0114000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEUW_WeatherSelector, Canvas), Z_Construct_UClass_UCanvasPanel_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Canvas_MetaData), NewProp_Canvas_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEUW_WeatherSelector_Statics::NewProp_UtilityTitle = { "UtilityTitle", nullptr, (EPropertyFlags)0x0114000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEUW_WeatherSelector, UtilityTitle), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UtilityTitle_MetaData), NewProp_UtilityTitle_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEUW_WeatherSelector_Statics::NewProp_SeasonWidget = { "SeasonWidget", nullptr, (EPropertyFlags)0x0114000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEUW_WeatherSelector, SeasonWidget), Z_Construct_UClass_UW_SeasonWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SeasonWidget_MetaData), NewProp_SeasonWidget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEUW_WeatherSelector_Statics::NewProp_ClimateWidget = { "ClimateWidget", nullptr, (EPropertyFlags)0x0114000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEUW_WeatherSelector, ClimateWidget), Z_Construct_UClass_UW_ClimateWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClimateWidget_MetaData), NewProp_ClimateWidget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEUW_WeatherSelector_Statics::NewProp_DayNightWidget = { "DayNightWidget", nullptr, (EPropertyFlags)0x0114000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEUW_WeatherSelector, DayNightWidget), Z_Construct_UClass_UW_DayNightWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DayNightWidget_MetaData), NewProp_DayNightWidget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEUW_WeatherSelector_Statics::NewProp_DayLengthWidget = { "DayLengthWidget", nullptr, (EPropertyFlags)0x0114000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEUW_WeatherSelector, DayLengthWidget), Z_Construct_UClass_UW_DayLengthWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DayLengthWidget_MetaData), NewProp_DayLengthWidget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEUW_WeatherSelector_Statics::NewProp_GenerateButton = { "GenerateButton", nullptr, (EPropertyFlags)0x0114000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEUW_WeatherSelector, GenerateButton), Z_Construct_UClass_UW_GenerateButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GenerateButton_MetaData), NewProp_GenerateButton_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEUW_WeatherSelector_Statics::NewProp_OnGenerateWeatherButtonClickedDelegate = { "OnGenerateWeatherButtonClickedDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEUW_WeatherSelector, OnGenerateWeatherButtonClickedDelegate), Z_Construct_UDelegateFunction_ToolsDevForEngines_OnGenerateWeatherButtonClickedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnGenerateWeatherButtonClickedDelegate_MetaData), NewProp_OnGenerateWeatherButtonClickedDelegate_MetaData) }; // 1436648759
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEUW_WeatherSelector_Statics::NewProp_UserDataStruct = { "UserDataStruct", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEUW_WeatherSelector, UserDataStruct), Z_Construct_UScriptStruct_FUserWeatherData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserDataStruct_MetaData), NewProp_UserDataStruct_MetaData) }; // 3952151639
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEUW_WeatherSelector_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEUW_WeatherSelector_Statics::NewProp_Canvas,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEUW_WeatherSelector_Statics::NewProp_UtilityTitle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEUW_WeatherSelector_Statics::NewProp_SeasonWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEUW_WeatherSelector_Statics::NewProp_ClimateWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEUW_WeatherSelector_Statics::NewProp_DayNightWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEUW_WeatherSelector_Statics::NewProp_DayLengthWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEUW_WeatherSelector_Statics::NewProp_GenerateButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEUW_WeatherSelector_Statics::NewProp_OnGenerateWeatherButtonClickedDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEUW_WeatherSelector_Statics::NewProp_UserDataStruct,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEUW_WeatherSelector_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEUW_WeatherSelector_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEditorUtilityWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_ToolsDevForEngines,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEUW_WeatherSelector_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UEUW_WeatherSelector_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UI_WeatherCalculations_NoRegister, (int32)VTABLE_OFFSET(UEUW_WeatherSelector, II_WeatherCalculations), false },  // 4169156868
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEUW_WeatherSelector_Statics::ClassParams = {
	&UEUW_WeatherSelector::StaticClass,
	"Editor",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UEUW_WeatherSelector_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UEUW_WeatherSelector_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x00B010A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEUW_WeatherSelector_Statics::Class_MetaDataParams), Z_Construct_UClass_UEUW_WeatherSelector_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEUW_WeatherSelector()
{
	if (!Z_Registration_Info_UClass_UEUW_WeatherSelector.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEUW_WeatherSelector.OuterSingleton, Z_Construct_UClass_UEUW_WeatherSelector_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEUW_WeatherSelector.OuterSingleton;
}
template<> TOOLSDEVFORENGINES_API UClass* StaticClass<UEUW_WeatherSelector>()
{
	return UEUW_WeatherSelector::StaticClass();
}
UEUW_WeatherSelector::UEUW_WeatherSelector(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEUW_WeatherSelector);
UEUW_WeatherSelector::~UEUW_WeatherSelector() {}
// End Class UEUW_WeatherSelector

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_b013728n_Documents_GitHub_ToolsDevForEngines_ToolsDevForEngines_Source_ToolsDevForEngines_Public_EUW_WeatherSelector_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEUW_WeatherSelector, UEUW_WeatherSelector::StaticClass, TEXT("UEUW_WeatherSelector"), &Z_Registration_Info_UClass_UEUW_WeatherSelector, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEUW_WeatherSelector), 2656219062U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_b013728n_Documents_GitHub_ToolsDevForEngines_ToolsDevForEngines_Source_ToolsDevForEngines_Public_EUW_WeatherSelector_h_1898519503(TEXT("/Script/ToolsDevForEngines"),
	Z_CompiledInDeferFile_FID_Users_b013728n_Documents_GitHub_ToolsDevForEngines_ToolsDevForEngines_Source_ToolsDevForEngines_Public_EUW_WeatherSelector_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_b013728n_Documents_GitHub_ToolsDevForEngines_ToolsDevForEngines_Source_ToolsDevForEngines_Public_EUW_WeatherSelector_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
