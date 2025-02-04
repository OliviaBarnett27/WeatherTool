// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ToolsDevForEngines/Public/W_SeasonWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeW_SeasonWidget() {}

// Begin Cross Module References
TOOLSDEVFORENGINES_API UClass* Z_Construct_UClass_UW_SeasonWidget();
TOOLSDEVFORENGINES_API UClass* Z_Construct_UClass_UW_SeasonWidget_NoRegister();
TOOLSDEVFORENGINES_API UFunction* Z_Construct_UDelegateFunction_ToolsDevForEngines_OnSeasonClearButtonClickedSignature__DelegateSignature();
UMG_API UClass* Z_Construct_UClass_UBorder_NoRegister();
UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
UMG_API UClass* Z_Construct_UClass_UComboBoxString_NoRegister();
UMG_API UClass* Z_Construct_UClass_USpacer_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UMG_API UClass* Z_Construct_UClass_UVerticalBox_NoRegister();
UPackage* Z_Construct_UPackage__Script_ToolsDevForEngines();
// End Cross Module References

// Begin Delegate FOnSeasonClearButtonClickedSignature
struct Z_Construct_UDelegateFunction_ToolsDevForEngines_OnSeasonClearButtonClickedSignature__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/W_SeasonWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ToolsDevForEngines_OnSeasonClearButtonClickedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ToolsDevForEngines, nullptr, "OnSeasonClearButtonClickedSignature__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ToolsDevForEngines_OnSeasonClearButtonClickedSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ToolsDevForEngines_OnSeasonClearButtonClickedSignature__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_ToolsDevForEngines_OnSeasonClearButtonClickedSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ToolsDevForEngines_OnSeasonClearButtonClickedSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnSeasonClearButtonClickedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnSeasonClearButtonClickedSignature)
{
	OnSeasonClearButtonClickedSignature.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnSeasonClearButtonClickedSignature

// Begin Class UW_SeasonWidget Function ClearComboBoxSelection
struct Z_Construct_UFunction_UW_SeasonWidget_ClearComboBoxSelection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/W_SeasonWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UW_SeasonWidget_ClearComboBoxSelection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UW_SeasonWidget, nullptr, "ClearComboBoxSelection", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UW_SeasonWidget_ClearComboBoxSelection_Statics::Function_MetaDataParams), Z_Construct_UFunction_UW_SeasonWidget_ClearComboBoxSelection_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UW_SeasonWidget_ClearComboBoxSelection()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UW_SeasonWidget_ClearComboBoxSelection_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UW_SeasonWidget::execClearComboBoxSelection)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClearComboBoxSelection();
	P_NATIVE_END;
}
// End Class UW_SeasonWidget Function ClearComboBoxSelection

// Begin Class UW_SeasonWidget
void UW_SeasonWidget::StaticRegisterNativesUW_SeasonWidget()
{
	UClass* Class = UW_SeasonWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ClearComboBoxSelection", &UW_SeasonWidget::execClearComboBoxSelection },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UW_SeasonWidget);
UClass* Z_Construct_UClass_UW_SeasonWidget_NoRegister()
{
	return UW_SeasonWidget::StaticClass();
}
struct Z_Construct_UClass_UW_SeasonWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "W_SeasonWidget.h" },
		{ "ModuleRelativePath", "Public/W_SeasonWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VerticalBox_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/W_SeasonWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Title_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/W_SeasonWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MyComboBox_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/W_SeasonWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Spacer_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/W_SeasonWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClearButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/W_SeasonWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ButtonText_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/W_SeasonWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Border_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/W_SeasonWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSeasonClearButtonClickedDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Public/W_SeasonWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_VerticalBox;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Title;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MyComboBox;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Spacer;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ClearButton;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ButtonText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Border;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSeasonClearButtonClickedDelegate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UW_SeasonWidget_ClearComboBoxSelection, "ClearComboBoxSelection" }, // 4209003618
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UW_SeasonWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UW_SeasonWidget_Statics::NewProp_VerticalBox = { "VerticalBox", nullptr, (EPropertyFlags)0x0114000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UW_SeasonWidget, VerticalBox), Z_Construct_UClass_UVerticalBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VerticalBox_MetaData), NewProp_VerticalBox_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UW_SeasonWidget_Statics::NewProp_Title = { "Title", nullptr, (EPropertyFlags)0x0114000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UW_SeasonWidget, Title), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Title_MetaData), NewProp_Title_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UW_SeasonWidget_Statics::NewProp_MyComboBox = { "MyComboBox", nullptr, (EPropertyFlags)0x0114000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UW_SeasonWidget, MyComboBox), Z_Construct_UClass_UComboBoxString_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MyComboBox_MetaData), NewProp_MyComboBox_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UW_SeasonWidget_Statics::NewProp_Spacer = { "Spacer", nullptr, (EPropertyFlags)0x0114000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UW_SeasonWidget, Spacer), Z_Construct_UClass_USpacer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Spacer_MetaData), NewProp_Spacer_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UW_SeasonWidget_Statics::NewProp_ClearButton = { "ClearButton", nullptr, (EPropertyFlags)0x0114000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UW_SeasonWidget, ClearButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClearButton_MetaData), NewProp_ClearButton_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UW_SeasonWidget_Statics::NewProp_ButtonText = { "ButtonText", nullptr, (EPropertyFlags)0x0114000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UW_SeasonWidget, ButtonText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ButtonText_MetaData), NewProp_ButtonText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UW_SeasonWidget_Statics::NewProp_Border = { "Border", nullptr, (EPropertyFlags)0x0114000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UW_SeasonWidget, Border), Z_Construct_UClass_UBorder_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Border_MetaData), NewProp_Border_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UW_SeasonWidget_Statics::NewProp_OnSeasonClearButtonClickedDelegate = { "OnSeasonClearButtonClickedDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UW_SeasonWidget, OnSeasonClearButtonClickedDelegate), Z_Construct_UDelegateFunction_ToolsDevForEngines_OnSeasonClearButtonClickedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSeasonClearButtonClickedDelegate_MetaData), NewProp_OnSeasonClearButtonClickedDelegate_MetaData) }; // 2101825402
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UW_SeasonWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UW_SeasonWidget_Statics::NewProp_VerticalBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UW_SeasonWidget_Statics::NewProp_Title,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UW_SeasonWidget_Statics::NewProp_MyComboBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UW_SeasonWidget_Statics::NewProp_Spacer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UW_SeasonWidget_Statics::NewProp_ClearButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UW_SeasonWidget_Statics::NewProp_ButtonText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UW_SeasonWidget_Statics::NewProp_Border,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UW_SeasonWidget_Statics::NewProp_OnSeasonClearButtonClickedDelegate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UW_SeasonWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UW_SeasonWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_ToolsDevForEngines,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UW_SeasonWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UW_SeasonWidget_Statics::ClassParams = {
	&UW_SeasonWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UW_SeasonWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UW_SeasonWidget_Statics::PropPointers),
	0,
	0x00B010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UW_SeasonWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UW_SeasonWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UW_SeasonWidget()
{
	if (!Z_Registration_Info_UClass_UW_SeasonWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UW_SeasonWidget.OuterSingleton, Z_Construct_UClass_UW_SeasonWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UW_SeasonWidget.OuterSingleton;
}
template<> TOOLSDEVFORENGINES_API UClass* StaticClass<UW_SeasonWidget>()
{
	return UW_SeasonWidget::StaticClass();
}
UW_SeasonWidget::UW_SeasonWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UW_SeasonWidget);
UW_SeasonWidget::~UW_SeasonWidget() {}
// End Class UW_SeasonWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_b013728n_Documents_GitHub_ToolsDevForEngines_ToolsDevForEngines_Source_ToolsDevForEngines_Public_W_SeasonWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UW_SeasonWidget, UW_SeasonWidget::StaticClass, TEXT("UW_SeasonWidget"), &Z_Registration_Info_UClass_UW_SeasonWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UW_SeasonWidget), 713268940U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_b013728n_Documents_GitHub_ToolsDevForEngines_ToolsDevForEngines_Source_ToolsDevForEngines_Public_W_SeasonWidget_h_1960392113(TEXT("/Script/ToolsDevForEngines"),
	Z_CompiledInDeferFile_FID_Users_b013728n_Documents_GitHub_ToolsDevForEngines_ToolsDevForEngines_Source_ToolsDevForEngines_Public_W_SeasonWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_b013728n_Documents_GitHub_ToolsDevForEngines_ToolsDevForEngines_Source_ToolsDevForEngines_Public_W_SeasonWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
