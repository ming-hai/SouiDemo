//stamp:074d3f6523197834
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
			}
			const TCHAR * XML_MAINWND;
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
		class _png{
			public:
			_png(){
				system_btn_min = _T("png:system_btn_min");
				system_btn_close = _T("png:system_btn_close");
			}
			const TCHAR * system_btn_min;
			const TCHAR * system_btn_close;
		}png;
		class _JPG{
			public:
			_JPG(){
			}
		}JPG;
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
		{L"btn_close",65537},
		{L"btn_min",65536},
		{L"main_web",65538}		};
	class _R{
	public:
		class _name{
		public:
		_name(){
			_name_start = namedXmlID[0].strName;
			btn_close = namedXmlID[1].strName;
			btn_min = namedXmlID[2].strName;
			main_web = namedXmlID[3].strName;
		}
		 const wchar_t * _name_start;
		 const wchar_t * btn_close;
		 const wchar_t * btn_min;
		 const wchar_t * main_web;
		}name;

		class _id{
		public:
		const static int _name_start	=	65535;
		const static int btn_close	=	65537;
		const static int btn_min	=	65536;
		const static int main_web	=	65538;
		}id;

		class _string{
		public:
		const static int title	=	0;
		const static int ver	=	1;
		}string;

		class _color{
		public:
		const static int blue	=	0;
		const static int cfg	=	1;
		const static int cfg_tab	=	2;
		const static int combobox_bg	=	3;
		const static int gray	=	4;
		const static int green	=	5;
		const static int red	=	6;
		const static int score_body	=	7;
		const static int score_body_bg_even	=	8;
		const static int score_body_bg_odd	=	9;
		const static int score_local_body	=	10;
		const static int score_local_body_bg_even	=	11;
		const static int score_local_body_bg_odd	=	12;
		const static int score_local_title	=	13;
		const static int score_title	=	14;
		const static int white	=	15;
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
