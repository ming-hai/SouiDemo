// MainDlg.h : interface of the CMainDlg class
//
/////////////////////////////////////////////////////////////////////////////
#pragma once

class CMainDlg : public SHostWnd
{
public:
    CMainDlg();
    ~CMainDlg();
    
    void OnClose();
    void OnMaximize();
    void OnRestore();
    void OnMinimize();
    void OnSize(UINT nType, CSize size);
    int OnCreate(LPCREATESTRUCT lpCreateStruct);
    BOOL OnInitDialog(HWND wndFocus, LPARAM lInitParam);
    
protected:

    void OnHideOrShowLeftWndClick();
    void OnTabMainStyleClick();
    void OnTabPageRadioSwitch(int nID);
    void OnFileTypeRadioSwitch(int nID);
    void OnSharePanelRadioSwitch(int nID);
    
    //soui消息
    EVENT_MAP_BEGIN()
    EVENT_NAME_COMMAND(R.name.btn_close, OnClose)
    EVENT_NAME_COMMAND(R.name.btn_min, OnMinimize)
    EVENT_NAME_COMMAND(R.name.btn_max, OnMaximize)
    EVENT_NAME_COMMAND(R.name.btn_restore, OnRestore)
    EVENT_NAME_COMMAND(R.name.btn_navi_left_wnd, OnHideOrShowLeftWndClick)
    EVENT_NAME_COMMAND(R.name.btn_navi_tile, OnTabMainStyleClick)
    EVENT_ID_COMMAND_RANGE(10000, 10003, OnTabPageRadioSwitch)    //10000-10003是dlg_main.xml中定义的radio2的ID
    EVENT_ID_COMMAND_RANGE(20000, 20008, OnFileTypeRadioSwitch)    //20000-20008是page_disk.xml中定义的radio2的ID
    EVENT_ID_COMMAND_RANGE(30000, 30002, OnSharePanelRadioSwitch)    //20000-20008是page_disk.xml中定义的radio2的ID
    EVENT_MAP_END()
    
    //HostWnd真实窗口消息处理
    BEGIN_MSG_MAP_EX(CMainDlg)
    MSG_WM_CREATE(OnCreate)
    MSG_WM_INITDIALOG(OnInitDialog)
    MSG_WM_CLOSE(OnClose)
    MSG_WM_SIZE(OnSize)
    CHAIN_MSG_MAP(SHostWnd)
    REFLECT_NOTIFICATIONS_EX()
    END_MSG_MAP()
private:
    BOOL            m_bLayoutInited;
    int             m_MainStyle;//0为tile，1为list
    BOOL             m_LeftWndShow;
};
