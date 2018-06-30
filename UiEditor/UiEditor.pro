######################################################################
# Automatically generated by qmake (2.01a) ?? ?? 23 19:29:41 2014
######################################################################

TEMPLATE = app
TARGET = UiEditor
CONFIG(x64){
TARGET = $$TARGET"64"
}
INCLUDEPATH += . \
		../../utilities/include \
		../../soui/include \
		../../components \
		../../config \
		../../controls.extend \
		../../third-part/Scintilla/include \


dir = ../..
include($$dir/common.pri)


CONFIG(debug,debug|release){
	LIBS += utilitiesd.lib souid.lib Scintillad.lib imm32.lib
}
else{
	LIBS += utilities.lib soui.lib Scintilla.lib imm32.lib
}

PRECOMPILED_HEADER = stdafx.h
RC_FILE += uieditor.rc

SOURCES+=../../controls.extend/image3d/3dlib.cpp
SOURCES+=../../controls.extend/image3d/3dmatrix.cpp
SOURCES+=../../controls.extend/image3d/3dtransform.cpp
SOURCES+=../../controls.extend/ExtendSkins.cpp
SOURCES+=../../controls.extend/SButtonEx.cpp
SOURCES+=../../controls.extend/SChromeTabCtrl.cpp
SOURCES+=../../controls.extend/SFreeMoveWindow.cpp
SOURCES+=../../controls.extend/gif/SGifPlayer.cpp
SOURCES+=../../controls.extend/SImageEx.cpp
SOURCES+=../../controls.extend/SImageMaskWnd.cpp
SOURCES+=../../controls.extend/gif/SSkinAPNG.cpp
SOURCES+=../../controls.extend/gif/SSkinGif.cpp
SOURCES+=../../controls.extend/SSkinMutiFrameImg.cpp
SOURCES+=../../controls.extend/STabCtrl2.cpp
SOURCES+=../../controls.extend/SText.cpp
SOURCES+=../../controls.extend/STurn3DView.cpp
SOURCES+=../../controls.extend/SScrollText.cpp
SOURCES+=../../controls.extend/SRealWndHandler_Scintilla.cpp
SOURCES+=../../controls.extend/ScintillaWnd.cpp


SOURCES+=./DesignerView.cpp
SOURCES+=./SDesignerRoot.cpp
SOURCES+=./DlgAbout.cpp
SOURCES+=./DlgCreatePro.cpp
SOURCES+=./DlgInput.cpp
SOURCES+=./DlgNewLayout.cpp
SOURCES+=./DlgNewSkin.cpp
SOURCES+=./DlgSkinSelect.cpp
SOURCES+=./DlgStyleManage.cpp
SOURCES+=./MainDlg.cpp
SOURCES+=./SImageSwitcher.cpp
SOURCES+=./SMoveWnd.cpp
SOURCES+=./SSwitch.cpp
SOURCES+=./SToolbox.cpp
SOURCES+=./UIEditor.cpp
SOURCES+=./propgrid/SPropertyGrid.cpp
SOURCES+=./propgrid/propitem/SPropertyItem-Color.cpp
SOURCES+=./propgrid/propitem/SPropertyItem-Option.cpp
SOURCES+=./propgrid/propitem/SPropertyItem-Size.cpp
SOURCES+=./propgrid/propitem/SPropertyItem-Text.cpp
SOURCES+=./propgrid/SPropertyItemBase.cpp
SOURCES+=./trayicon/SShellNotifyIcon.cpp
SOURCES+=./colorpicker/ColourPopup.cpp
SOURCES+=./colorpicker/SColorPicker.cpp
SOURCES+=./DlgFontSelect.cpp
SOURCES+=./helpapi.cpp
SOURCES+=./SImgCanvas.cpp


HEADERS+=./SListBoxDrop.h
HEADERS+=./Adapter.h
HEADERS+=./CDebug.h
HEADERS+=./CNewGuid.h
HEADERS+=./DesignerView.h
HEADERS+=./SDesignerRoot.h
HEADERS+=./DlgAbout.h
HEADERS+=./DlgCreatePro.h
HEADERS+=./DlgInput.h
HEADERS+=./DlgNewLayout.h
HEADERS+=./DlgNewSkin.h
HEADERS+=./DlgSkinSelect.h
HEADERS+=./DlgStyleManage.h
HEADERS+=./MainDlg.h
HEADERS+=./resource.h
HEADERS+=./SImageSwitcher.h
HEADERS+=./SMoveWnd.h
HEADERS+=./SSwitch.h
HEADERS+=./SToolbox.h
HEADERS+=./propgrid/SPropertyEmbedWndHelper.hpp
HEADERS+=./propgrid/SPropertyGrid.h
HEADERS+=./propgrid/propitem/SPropertyItem-Color.h
HEADERS+=./propgrid/SPropertyItem-i.h
HEADERS+=./propgrid/propitem/SPropertyItem-Option.h
HEADERS+=./propgrid/propitem/SPropertyItem-Size.h
HEADERS+=./propgrid/propitem/SPropertyItem-Text.h
HEADERS+=./propgrid/SPropertyItemBase.h
HEADERS+=./trayicon/SShellNotifyIcon.h
HEADERS+=./colorpicker/ColourPopup.h
HEADERS+=./colorpicker/SColorPicker.h
HEADERS+=./colorpicker/Tooltipctrl.h
HEADERS+=./DlgFontSelect.h
HEADERS+=./helpapi.h
HEADERS+=./SImgCanvas.h
HEADERS+=../../controls.extend/ExtendSkins.h
HEADERS+=../../controls.extend/image3d/PerspectiveTransform.h
HEADERS+=../../controls.extend/gif/SAniImgFrame.h
HEADERS+=../../controls.extend/SButtonEx.h
HEADERS+=../../controls.extend/SChromeTabCtrl.h
HEADERS+=../../controls.extend/SFreeMoveWindow.h
HEADERS+=../../controls.extend/gif/SGifPlayer.h
HEADERS+=../../controls.extend/SImageEx.h
HEADERS+=../../controls.extend/SImageMaskWnd.h
HEADERS+=../../controls.extend/gif/SSkinAPNG.h
HEADERS+=../../controls.extend/gif/SSkinGif.h
HEADERS+=../../controls.extend/SSkinMutiFrameImg.h
HEADERS+=../../controls.extend/STabCtrl2.h
HEADERS+=../../controls.extend/SText.h
HEADERS+=../../controls.extend/STurn3DView.h
HEADERS+=../../controls.extend/SScrollText.h
HEADERS+=../../controls.extend/image3d/3dlib.h
HEADERS+=../../controls.extend/image3d/3dmatrix.h
HEADERS+=../../controls.extend/image3d/3dTransform.h
HEADERS+=../../controls.extend/SRealWndHandler_Scintilla.h
HEADERS+=../../controls.extend/ScintillaWnd.h

