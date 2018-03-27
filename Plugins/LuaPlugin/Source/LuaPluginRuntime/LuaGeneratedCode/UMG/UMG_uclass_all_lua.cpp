#include "TableUtil.h"
#include "AsyncTaskDownloadImage.lua.h"
#include "DragDropOperation.lua.h"
#include "MovieScene2DTransformSection.lua.h"
#include "MovieScene2DTransformTrack.lua.h"
#include "MovieSceneMarginSection.lua.h"
#include "MovieSceneMarginTrack.lua.h"
#include "MovieSceneWidgetMaterialTrack.lua.h"
#include "NamedSlotInterface.lua.h"
#include "PropertyBinding.lua.h"
#include "RichTextBlockDecorator.lua.h"
#include "SlateBlueprintLibrary.lua.h"
#include "SlateDataSheet.lua.h"
#include "SlateVectorArtData.lua.h"
#include "UMGSequencePlayer.lua.h"
#include "Visual.lua.h"
#include "WidgetAnimation.lua.h"
#include "WidgetBlueprintGeneratedClass.lua.h"
#include "WidgetBlueprintLibrary.lua.h"
#include "WidgetComponent.lua.h"
#include "WidgetInteractionComponent.lua.h"
#include "WidgetLayoutLibrary.lua.h"
#include "WidgetNavigation.lua.h"
#include "WidgetTree.lua.h"
#include "BoolBinding.lua.h"
#include "BrushBinding.lua.h"
#include "CheckedStateBinding.lua.h"
#include "ColorBinding.lua.h"
#include "FloatBinding.lua.h"
#include "Int32Binding.lua.h"
#include "MouseCursorBinding.lua.h"
#include "TextBinding.lua.h"
#include "VisibilityBinding.lua.h"
#include "WidgetBinding.lua.h"
#include "PanelSlot.lua.h"
#include "Widget.lua.h"
#include "BackgroundBlurSlot.lua.h"
#include "BorderSlot.lua.h"
#include "ButtonSlot.lua.h"
#include "CanvasPanelSlot.lua.h"
#include "GridSlot.lua.h"
#include "HorizontalBoxSlot.lua.h"
#include "OverlaySlot.lua.h"
#include "SafeZoneSlot.lua.h"
#include "ScaleBoxSlot.lua.h"
#include "ScrollBoxSlot.lua.h"
#include "SizeBoxSlot.lua.h"
#include "UniformGridSlot.lua.h"
#include "VerticalBoxSlot.lua.h"
#include "WidgetSwitcherSlot.lua.h"
#include "WindowTitleBarAreaSlot.lua.h"
#include "WrapBoxSlot.lua.h"
#include "CircularThrobber.lua.h"
#include "ComboBox.lua.h"
#include "ComboBoxString.lua.h"
#include "EditableText.lua.h"
#include "EditableTextBox.lua.h"
#include "ExpandableArea.lua.h"
#include "Image.lua.h"
#include "InputKeySelector.lua.h"
#include "NativeWidgetHost.lua.h"
#include "PanelWidget.lua.h"
#include "ProgressBar.lua.h"
#include "ScrollBar.lua.h"
#include "Slider.lua.h"
#include "Spacer.lua.h"
#include "SpinBox.lua.h"
#include "TableViewBase.lua.h"
#include "TextLayoutWidget.lua.h"
#include "Throbber.lua.h"
#include "UserWidget.lua.h"
#include "CanvasPanel.lua.h"
#include "ContentWidget.lua.h"
#include "GridPanel.lua.h"
#include "HorizontalBox.lua.h"
#include "Overlay.lua.h"
#include "ScrollBox.lua.h"
#include "UniformGridPanel.lua.h"
#include "VerticalBox.lua.h"
#include "WidgetSwitcher.lua.h"
#include "WrapBox.lua.h"
#include "BackgroundBlur.lua.h"
#include "Border.lua.h"
#include "Button.lua.h"
#include "CheckBox.lua.h"
#include "InvalidationBox.lua.h"
#include "MenuAnchor.lua.h"
#include "NamedSlot.lua.h"
#include "RetainerBox.lua.h"
#include "SafeZone.lua.h"
#include "ScaleBox.lua.h"
#include "SizeBox.lua.h"
#include "Viewport.lua.h"
#include "WindowTitleBarArea.lua.h"
#include "ListView.lua.h"
#include "TileView.lua.h"
#include "MultiLineEditableText.lua.h"
#include "MultiLineEditableTextBox.lua.h"
#include "RichTextBlock.lua.h"
#include "TextBlock.lua.h"
struct lua_static_load_UMG_uclass_all_struct
{
	static void load()
	{
		UTableUtil::loadlib(AsyncTaskDownloadImage_Lib, "UAsyncTaskDownloadImage");
		UTableUtil::loadlib(DragDropOperation_Lib, "UDragDropOperation");
		UTableUtil::loadlib(MovieScene2DTransformSection_Lib, "UMovieScene2DTransformSection");
		UTableUtil::loadlib(MovieScene2DTransformTrack_Lib, "UMovieScene2DTransformTrack");
		UTableUtil::loadlib(MovieSceneMarginSection_Lib, "UMovieSceneMarginSection");
		UTableUtil::loadlib(MovieSceneMarginTrack_Lib, "UMovieSceneMarginTrack");
		UTableUtil::loadlib(MovieSceneWidgetMaterialTrack_Lib, "UMovieSceneWidgetMaterialTrack");
		UTableUtil::loadlib(NamedSlotInterface_Lib, "INamedSlotInterface");
		UTableUtil::loadlib(PropertyBinding_Lib, "UPropertyBinding");
		UTableUtil::loadlib(RichTextBlockDecorator_Lib, "URichTextBlockDecorator");
		UTableUtil::loadlib(SlateBlueprintLibrary_Lib, "USlateBlueprintLibrary");
		UTableUtil::loadlib(SlateDataSheet_Lib, "USlateDataSheet");
		UTableUtil::loadlib(SlateVectorArtData_Lib, "USlateVectorArtData");
		UTableUtil::loadlib(UMGSequencePlayer_Lib, "UUMGSequencePlayer");
		UTableUtil::loadlib(Visual_Lib, "UVisual");
		UTableUtil::loadlib(WidgetAnimation_Lib, "UWidgetAnimation");
		UTableUtil::loadlib(WidgetBlueprintGeneratedClass_Lib, "UWidgetBlueprintGeneratedClass");
		UTableUtil::loadlib(WidgetBlueprintLibrary_Lib, "UWidgetBlueprintLibrary");
		UTableUtil::loadlib(WidgetComponent_Lib, "UWidgetComponent");
		UTableUtil::loadlib(WidgetInteractionComponent_Lib, "UWidgetInteractionComponent");
		UTableUtil::loadlib(WidgetLayoutLibrary_Lib, "UWidgetLayoutLibrary");
		UTableUtil::loadlib(WidgetNavigation_Lib, "UWidgetNavigation");
		UTableUtil::loadlib(WidgetTree_Lib, "UWidgetTree");
		UTableUtil::loadlib(BoolBinding_Lib, "UBoolBinding");
		UTableUtil::loadlib(BrushBinding_Lib, "UBrushBinding");
		UTableUtil::loadlib(CheckedStateBinding_Lib, "UCheckedStateBinding");
		UTableUtil::loadlib(ColorBinding_Lib, "UColorBinding");
		UTableUtil::loadlib(FloatBinding_Lib, "UFloatBinding");
		UTableUtil::loadlib(Int32Binding_Lib, "UInt32Binding");
		UTableUtil::loadlib(MouseCursorBinding_Lib, "UMouseCursorBinding");
		UTableUtil::loadlib(TextBinding_Lib, "UTextBinding");
		UTableUtil::loadlib(VisibilityBinding_Lib, "UVisibilityBinding");
		UTableUtil::loadlib(WidgetBinding_Lib, "UWidgetBinding");
		UTableUtil::loadlib(PanelSlot_Lib, "UPanelSlot");
		UTableUtil::loadlib(Widget_Lib, "UWidget");
		UTableUtil::loadlib(BackgroundBlurSlot_Lib, "UBackgroundBlurSlot");
		UTableUtil::loadlib(BorderSlot_Lib, "UBorderSlot");
		UTableUtil::loadlib(ButtonSlot_Lib, "UButtonSlot");
		UTableUtil::loadlib(CanvasPanelSlot_Lib, "UCanvasPanelSlot");
		UTableUtil::loadlib(GridSlot_Lib, "UGridSlot");
		UTableUtil::loadlib(HorizontalBoxSlot_Lib, "UHorizontalBoxSlot");
		UTableUtil::loadlib(OverlaySlot_Lib, "UOverlaySlot");
		UTableUtil::loadlib(SafeZoneSlot_Lib, "USafeZoneSlot");
		UTableUtil::loadlib(ScaleBoxSlot_Lib, "UScaleBoxSlot");
		UTableUtil::loadlib(ScrollBoxSlot_Lib, "UScrollBoxSlot");
		UTableUtil::loadlib(SizeBoxSlot_Lib, "USizeBoxSlot");
		UTableUtil::loadlib(UniformGridSlot_Lib, "UUniformGridSlot");
		UTableUtil::loadlib(VerticalBoxSlot_Lib, "UVerticalBoxSlot");
		UTableUtil::loadlib(WidgetSwitcherSlot_Lib, "UWidgetSwitcherSlot");
		UTableUtil::loadlib(WindowTitleBarAreaSlot_Lib, "UWindowTitleBarAreaSlot");
		UTableUtil::loadlib(WrapBoxSlot_Lib, "UWrapBoxSlot");
		UTableUtil::loadlib(CircularThrobber_Lib, "UCircularThrobber");
		UTableUtil::loadlib(ComboBox_Lib, "UComboBox");
		UTableUtil::loadlib(ComboBoxString_Lib, "UComboBoxString");
		UTableUtil::loadlib(EditableText_Lib, "UEditableText");
		UTableUtil::loadlib(EditableTextBox_Lib, "UEditableTextBox");
		UTableUtil::loadlib(ExpandableArea_Lib, "UExpandableArea");
		UTableUtil::loadlib(Image_Lib, "UImage");
		UTableUtil::loadlib(InputKeySelector_Lib, "UInputKeySelector");
		UTableUtil::loadlib(NativeWidgetHost_Lib, "UNativeWidgetHost");
		UTableUtil::loadlib(PanelWidget_Lib, "UPanelWidget");
		UTableUtil::loadlib(ProgressBar_Lib, "UProgressBar");
		UTableUtil::loadlib(ScrollBar_Lib, "UScrollBar");
		UTableUtil::loadlib(Slider_Lib, "USlider");
		UTableUtil::loadlib(Spacer_Lib, "USpacer");
		UTableUtil::loadlib(SpinBox_Lib, "USpinBox");
		UTableUtil::loadlib(TableViewBase_Lib, "UTableViewBase");
		UTableUtil::loadlib(TextLayoutWidget_Lib, "UTextLayoutWidget");
		UTableUtil::loadlib(Throbber_Lib, "UThrobber");
		UTableUtil::loadlib(UserWidget_Lib, "UUserWidget");
		UTableUtil::loadlib(CanvasPanel_Lib, "UCanvasPanel");
		UTableUtil::loadlib(ContentWidget_Lib, "UContentWidget");
		UTableUtil::loadlib(GridPanel_Lib, "UGridPanel");
		UTableUtil::loadlib(HorizontalBox_Lib, "UHorizontalBox");
		UTableUtil::loadlib(Overlay_Lib, "UOverlay");
		UTableUtil::loadlib(ScrollBox_Lib, "UScrollBox");
		UTableUtil::loadlib(UniformGridPanel_Lib, "UUniformGridPanel");
		UTableUtil::loadlib(VerticalBox_Lib, "UVerticalBox");
		UTableUtil::loadlib(WidgetSwitcher_Lib, "UWidgetSwitcher");
		UTableUtil::loadlib(WrapBox_Lib, "UWrapBox");
		UTableUtil::loadlib(BackgroundBlur_Lib, "UBackgroundBlur");
		UTableUtil::loadlib(Border_Lib, "UBorder");
		UTableUtil::loadlib(Button_Lib, "UButton");
		UTableUtil::loadlib(CheckBox_Lib, "UCheckBox");
		UTableUtil::loadlib(InvalidationBox_Lib, "UInvalidationBox");
		UTableUtil::loadlib(MenuAnchor_Lib, "UMenuAnchor");
		UTableUtil::loadlib(NamedSlot_Lib, "UNamedSlot");
		UTableUtil::loadlib(RetainerBox_Lib, "URetainerBox");
		UTableUtil::loadlib(SafeZone_Lib, "USafeZone");
		UTableUtil::loadlib(ScaleBox_Lib, "UScaleBox");
		UTableUtil::loadlib(SizeBox_Lib, "USizeBox");
		UTableUtil::loadlib(Viewport_Lib, "UViewport");
		UTableUtil::loadlib(WindowTitleBarArea_Lib, "UWindowTitleBarArea");
		UTableUtil::loadlib(ListView_Lib, "UListView");
		UTableUtil::loadlib(TileView_Lib, "UTileView");
		UTableUtil::loadlib(MultiLineEditableText_Lib, "UMultiLineEditableText");
		UTableUtil::loadlib(MultiLineEditableTextBox_Lib, "UMultiLineEditableTextBox");
		UTableUtil::loadlib(RichTextBlock_Lib, "URichTextBlock");
		UTableUtil::loadlib(TextBlock_Lib, "UTextBlock");
	}
	lua_static_load_UMG_uclass_all_struct(){UTableUtil::GetInitDelegates().AddStatic(&load);}
};
static lua_static_load_UMG_uclass_all_struct lua_UMG_uclass_all_static_var;
void FixLinkFunc_UMG_uclass_all(){};
