//stamp:09204ddb22b4aaa4
/*<------------------------------------------------------------------------------------------------->*/
/*该文件由uiresbuilder生成，请不要手动修改*/
/*<------------------------------------------------------------------------------------------------->*/
#pragma once
#include <res.mgr/snamedvalue.h>
#define ROBJ_IN_CPP \
namespace SOUI \
{\
    const _R R;\
    const _UIRES UIRES;\
}
namespace SOUI
{
	class _UIRES{
		public:
		class _UIDEF{
			public:
			_UIDEF(){
				xml_init = _T("UIDEF:xml_init");
			}
			const TCHAR * xml_init;
		}UIDEF;
		class _LAYOUT{
			public:
			_LAYOUT(){
				XML_MAINWND = _T("LAYOUT:XML_MAINWND");
				XML_LOGWND = _T("LAYOUT:XML_LOGWND");
			}
			const TCHAR * XML_MAINWND;
			const TCHAR * XML_LOGWND;
		}LAYOUT;
		class _values{
			public:
			_values(){
				string = _T("values:string");
				color = _T("values:color");
				skin = _T("values:skin");
			}
			const TCHAR * string;
			const TCHAR * color;
			const TCHAR * skin;
		}values;
		class _PNG{
			public:
			_PNG(){
				SYSTEM_CLOSE_BTN = _T("PNG:SYSTEM_CLOSE_BTN");
				SYSTEM_SHADOW = _T("PNG:SYSTEM_SHADOW");
				SYSTEM_BORDER = _T("PNG:SYSTEM_BORDER");
				TITLE_BAR = _T("PNG:TITLE_BAR");
				PROGRESS_BG = _T("PNG:PROGRESS_BG");
				PROGRESS_THUMB = _T("PNG:PROGRESS_THUMB");
				PROGRESS_POS = _T("PNG:PROGRESS_POS");
				SYSTEM_SUCCESS = _T("PNG:SYSTEM_SUCCESS");
				VSCROLL_BAR = _T("PNG:VSCROLL_BAR");
				MAIN_ICO = _T("PNG:MAIN_ICO");
			}
			const TCHAR * SYSTEM_CLOSE_BTN;
			const TCHAR * SYSTEM_SHADOW;
			const TCHAR * SYSTEM_BORDER;
			const TCHAR * TITLE_BAR;
			const TCHAR * PROGRESS_BG;
			const TCHAR * PROGRESS_THUMB;
			const TCHAR * PROGRESS_POS;
			const TCHAR * SYSTEM_SUCCESS;
			const TCHAR * VSCROLL_BAR;
			const TCHAR * MAIN_ICO;
		}PNG;
		class _ICON{
			public:
			_ICON(){
				ICON_LOGO = _T("ICON:ICON_LOGO");
			}
			const TCHAR * ICON_LOGO;
		}ICON;
	};
	const SNamedID::NAMEDVALUE namedXmlID[]={
		{L"_name_start",65535},
		{L"config_scrollview",65542},
		{L"launcher_notice",65537},
		{L"launcher_progress",65538},
		{L"log_close_btn",65539},
		{L"log_state_icon",65540},
		{L"log_state_text",65541},
		{L"log_update_notice",65543},
		{L"main_close_btn",65536}		};
	class _R{
	public:
		class _name{
		public:
		_name(){
			_name_start = namedXmlID[0].strName;
			config_scrollview = namedXmlID[1].strName;
			launcher_notice = namedXmlID[2].strName;
			launcher_progress = namedXmlID[3].strName;
			log_close_btn = namedXmlID[4].strName;
			log_state_icon = namedXmlID[5].strName;
			log_state_text = namedXmlID[6].strName;
			log_update_notice = namedXmlID[7].strName;
			main_close_btn = namedXmlID[8].strName;
		}
		 const wchar_t * _name_start;
		 const wchar_t * config_scrollview;
		 const wchar_t * launcher_notice;
		 const wchar_t * launcher_progress;
		 const wchar_t * log_close_btn;
		 const wchar_t * log_state_icon;
		 const wchar_t * log_state_text;
		 const wchar_t * log_update_notice;
		 const wchar_t * main_close_btn;
		}name;

		class _id{
		public:
		const static int _name_start	=	65535;
		const static int config_scrollview	=	65542;
		const static int launcher_notice	=	65537;
		const static int launcher_progress	=	65538;
		const static int log_close_btn	=	65539;
		const static int log_state_icon	=	65540;
		const static int log_state_text	=	65541;
		const static int log_update_notice	=	65543;
		const static int main_close_btn	=	65536;
		}id;

		class _string{
		public:
		const static int title	=	0;
		const static int ver	=	1;
		}string;

		class _color{
		public:
		const static int blue	=	0;
		const static int gray	=	1;
		const static int green	=	2;
		const static int red	=	3;
		const static int white	=	4;
		}color;

	};

#ifdef R_IN_CPP
	 extern const _R R;
	 extern const _UIRES UIRES;
#else
	 extern const __declspec(selectany) _R & R = _R();
	 extern const __declspec(selectany) _UIRES & UIRES = _UIRES();
#endif//R_IN_CPP
}
