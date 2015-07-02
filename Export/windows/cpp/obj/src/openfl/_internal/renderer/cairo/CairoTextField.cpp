#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_Utf8
#include <haxe/Utf8.h>
#endif
#ifndef INCLUDED_haxe_io_Path
#include <haxe/io/Path.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_lime_graphics_Image
#include <lime/graphics/Image.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo_Cairo
#include <lime/graphics/cairo/Cairo.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo_CairoFont
#include <lime/graphics/cairo/CairoFont.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo_CairoFontOptions
#include <lime/graphics/cairo/CairoFontOptions.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo__CairoSurface_CairoSurface_Impl_
#include <lime/graphics/cairo/_CairoSurface/CairoSurface_Impl_.h>
#endif
#ifndef INCLUDED_lime_math_Vector2
#include <lime/math/Vector2.h>
#endif
#ifndef INCLUDED_lime_system_System
#include <lime/system/System.h>
#endif
#ifndef INCLUDED_lime_text_Font
#include <lime/text/Font.h>
#endif
#ifndef INCLUDED_lime_text_GlyphPosition
#include <lime/text/GlyphPosition.h>
#endif
#ifndef INCLUDED_lime_text_TextLayout
#include <lime/text/TextLayout.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_RenderSession
#include <openfl/_internal/renderer/RenderSession.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_cairo_CairoTextField
#include <openfl/_internal/renderer/cairo/CairoTextField.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_Graphics
#include <openfl/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
#ifndef INCLUDED_openfl_text_Font
#include <openfl/text/Font.h>
#endif
#ifndef INCLUDED_openfl_text_TextField
#include <openfl/text/TextField.h>
#endif
#ifndef INCLUDED_openfl_text_TextFormat
#include <openfl/text/TextFormat.h>
#endif
#ifndef INCLUDED_openfl_text_TextFormatAlign
#include <openfl/text/TextFormatAlign.h>
#endif
#ifndef INCLUDED_openfl_text_TextFormatRange
#include <openfl/text/TextFormatRange.h>
#endif
#ifndef INCLUDED_openfl_text_TextLineMetrics
#include <openfl/text/TextLineMetrics.h>
#endif
namespace openfl{
namespace _internal{
namespace renderer{
namespace cairo{

Void CairoTextField_obj::__construct()
{
	return null();
}

//CairoTextField_obj::~CairoTextField_obj() { }

Dynamic CairoTextField_obj::__CreateEmpty() { return  new CairoTextField_obj; }
hx::ObjectPtr< CairoTextField_obj > CairoTextField_obj::__new()
{  hx::ObjectPtr< CairoTextField_obj > result = new CairoTextField_obj();
	result->__construct();
	return result;}

Dynamic CairoTextField_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CairoTextField_obj > result = new CairoTextField_obj();
	result->__construct();
	return result;}

int CairoTextField_obj::__utf8_endline_code;

::openfl::text::Font CairoTextField_obj::findFont( ::String name){
	HX_STACK_FRAME("openfl._internal.renderer.cairo.CairoTextField","findFont",0x0ba252d0,"openfl._internal.renderer.cairo.CairoTextField.findFont","openfl/_internal/renderer/cairo/CairoTextField.hx",32,0xfadfb778)
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(36)
	{
		HX_STACK_LINE(36)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(36)
		Array< ::Dynamic > _g1 = ::openfl::text::Font_obj::__registeredFonts;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(36)
		while((true)){
			HX_STACK_LINE(36)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(36)
				break;
			}
			HX_STACK_LINE(36)
			::openfl::text::Font registeredFont = _g1->__get(_g).StaticCast< ::openfl::text::Font >();		HX_STACK_VAR(registeredFont,"registeredFont");
			HX_STACK_LINE(36)
			++(_g);
			HX_STACK_LINE(38)
			if (((registeredFont == null()))){
				HX_STACK_LINE(38)
				continue;
			}
			struct _Function_3_1{
				inline static bool Block( ::openfl::text::Font &registeredFont,::String &name){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_internal/renderer/cairo/CairoTextField.hx",40,0xfadfb778)
					{
						struct _Function_4_1{
							inline static bool Block( ::openfl::text::Font &registeredFont,::String &name){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_internal/renderer/cairo/CairoTextField.hx",40,0xfadfb778)
								{
									struct _Function_5_1{
										inline static bool Block( ::openfl::text::Font &registeredFont,::String &name){
											HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_internal/renderer/cairo/CairoTextField.hx",40,0xfadfb778)
											{
												HX_STACK_LINE(40)
												::String _g2 = ::haxe::io::Path_obj::withoutDirectory(registeredFont->__fontPath);		HX_STACK_VAR(_g2,"_g2");
												HX_STACK_LINE(40)
												return (_g2 == name);
											}
											return null();
										}
									};
									HX_STACK_LINE(40)
									return (  ((!(((registeredFont->__fontPath == name))))) ? bool(_Function_5_1::Block(registeredFont,name)) : bool(true) );
								}
								return null();
							}
						};
						HX_STACK_LINE(40)
						return (  (((registeredFont->__fontPath != null()))) ? bool(_Function_4_1::Block(registeredFont,name)) : bool(false) );
					}
					return null();
				}
			};
			HX_STACK_LINE(40)
			if (((  ((!(((registeredFont->name == name))))) ? bool(_Function_3_1::Block(registeredFont,name)) : bool(true) ))){
				HX_STACK_LINE(42)
				return registeredFont;
			}
		}
	}
	HX_STACK_LINE(48)
	::openfl::text::Font font = ::openfl::text::Font_obj::fromFile(name);		HX_STACK_VAR(font,"font");
	HX_STACK_LINE(50)
	if (((font != null()))){
		HX_STACK_LINE(52)
		::openfl::text::Font_obj::__registeredFonts->push(font);
		HX_STACK_LINE(53)
		return font;
	}
	HX_STACK_LINE(59)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CairoTextField_obj,findFont,return )

::openfl::text::Font CairoTextField_obj::getFontInstance( ::openfl::text::TextFormat format){
	HX_STACK_FRAME("openfl._internal.renderer.cairo.CairoTextField","getFontInstance",0xc4376312,"openfl._internal.renderer.cairo.CairoTextField.getFontInstance","openfl/_internal/renderer/cairo/CairoTextField.hx",64,0xfadfb778)
	HX_STACK_ARG(format,"format")
	HX_STACK_LINE(68)
	::openfl::text::Font instance = null();		HX_STACK_VAR(instance,"instance");
	HX_STACK_LINE(69)
	Array< ::String > fontList = null();		HX_STACK_VAR(fontList,"fontList");
	HX_STACK_LINE(71)
	if (((bool((format != null())) && bool((format->font != null()))))){
		HX_STACK_LINE(73)
		::openfl::text::Font _g = ::openfl::_internal::renderer::cairo::CairoTextField_obj::findFont(format->font);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(73)
		instance = _g;
		HX_STACK_LINE(75)
		if (((instance != null()))){
			HX_STACK_LINE(75)
			return instance;
		}
		HX_STACK_LINE(77)
		::String systemFontDirectory = ::lime::system::System_obj::get_fontsDirectory();		HX_STACK_VAR(systemFontDirectory,"systemFontDirectory");
		HX_STACK_LINE(79)
		{
			HX_STACK_LINE(79)
			::String _g1 = format->font;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(79)
			::String _switch_1 = (_g1);
			if (  ( _switch_1==HX_CSTRING("_sans"))){
				HX_STACK_LINE(84)
				if ((format->bold)){
					HX_STACK_LINE(86)
					if ((format->italic)){
						HX_STACK_LINE(88)
						fontList = Array_obj< ::String >::__new().Add((systemFontDirectory + HX_CSTRING("/arialbi.ttf")));
					}
					else{
						HX_STACK_LINE(92)
						fontList = Array_obj< ::String >::__new().Add((systemFontDirectory + HX_CSTRING("/arialbd.ttf")));
					}
				}
				else{
					HX_STACK_LINE(98)
					if ((format->italic)){
						HX_STACK_LINE(100)
						fontList = Array_obj< ::String >::__new().Add((systemFontDirectory + HX_CSTRING("/ariali.ttf")));
					}
					else{
						HX_STACK_LINE(104)
						fontList = Array_obj< ::String >::__new().Add((systemFontDirectory + HX_CSTRING("/arial.ttf")));
					}
				}
			}
			else if (  ( _switch_1==HX_CSTRING("_serif"))){
			}
			else if (  ( _switch_1==HX_CSTRING("_typewriter"))){
				HX_STACK_LINE(126)
				if ((format->bold)){
					HX_STACK_LINE(128)
					if ((format->italic)){
						HX_STACK_LINE(130)
						fontList = Array_obj< ::String >::__new().Add((systemFontDirectory + HX_CSTRING("/courbi.ttf")));
					}
					else{
						HX_STACK_LINE(134)
						fontList = Array_obj< ::String >::__new().Add((systemFontDirectory + HX_CSTRING("/courbd.ttf")));
					}
				}
				else{
					HX_STACK_LINE(140)
					if ((format->italic)){
						HX_STACK_LINE(142)
						fontList = Array_obj< ::String >::__new().Add((systemFontDirectory + HX_CSTRING("/couri.ttf")));
					}
					else{
						HX_STACK_LINE(146)
						fontList = Array_obj< ::String >::__new().Add((systemFontDirectory + HX_CSTRING("/cour.ttf")));
					}
				}
			}
			else  {
				HX_STACK_LINE(163)
				fontList = Array_obj< ::String >::__new().Add(((systemFontDirectory + HX_CSTRING("/")) + format->font));
			}
;
;
		}
		HX_STACK_LINE(167)
		if (((fontList != null()))){
			HX_STACK_LINE(169)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(169)
			while((true)){
				HX_STACK_LINE(169)
				if ((!(((_g1 < fontList->length))))){
					HX_STACK_LINE(169)
					break;
				}
				HX_STACK_LINE(169)
				::String font = fontList->__get(_g1);		HX_STACK_VAR(font,"font");
				HX_STACK_LINE(169)
				++(_g1);
				HX_STACK_LINE(171)
				::openfl::text::Font _g11 = ::openfl::_internal::renderer::cairo::CairoTextField_obj::findFont(font);		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(171)
				instance = _g11;
				HX_STACK_LINE(173)
				if (((instance != null()))){
					HX_STACK_LINE(173)
					return instance;
				}
			}
		}
		HX_STACK_LINE(179)
		::openfl::text::Font _g2 = ::openfl::_internal::renderer::cairo::CairoTextField_obj::findFont(HX_CSTRING("_serif"));		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(179)
		instance = _g2;
		HX_STACK_LINE(181)
		if (((instance != null()))){
			HX_STACK_LINE(181)
			return instance;
		}
	}
	HX_STACK_LINE(185)
	::String systemFontDirectory = ::lime::system::System_obj::get_fontsDirectory();		HX_STACK_VAR(systemFontDirectory,"systemFontDirectory");
	HX_STACK_LINE(188)
	if ((format->bold)){
		HX_STACK_LINE(190)
		if ((format->italic)){
			HX_STACK_LINE(192)
			fontList = Array_obj< ::String >::__new().Add((systemFontDirectory + HX_CSTRING("/georgiaz.ttf")));
		}
		else{
			HX_STACK_LINE(196)
			fontList = Array_obj< ::String >::__new().Add((systemFontDirectory + HX_CSTRING("/georgiab.ttf")));
		}
	}
	else{
		HX_STACK_LINE(202)
		if ((format->italic)){
			HX_STACK_LINE(204)
			fontList = Array_obj< ::String >::__new().Add((systemFontDirectory + HX_CSTRING("/geogiai.ttf")));
		}
		else{
			HX_STACK_LINE(208)
			fontList = Array_obj< ::String >::__new().Add((systemFontDirectory + HX_CSTRING("/georgia.ttf")));
		}
	}
	HX_STACK_LINE(225)
	{
		HX_STACK_LINE(225)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(225)
		while((true)){
			HX_STACK_LINE(225)
			if ((!(((_g < fontList->length))))){
				HX_STACK_LINE(225)
				break;
			}
			HX_STACK_LINE(225)
			::String font = fontList->__get(_g);		HX_STACK_VAR(font,"font");
			HX_STACK_LINE(225)
			++(_g);
			HX_STACK_LINE(227)
			::openfl::text::Font _g3 = ::openfl::_internal::renderer::cairo::CairoTextField_obj::findFont(font);		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(227)
			instance = _g3;
			HX_STACK_LINE(229)
			if (((instance != null()))){
				HX_STACK_LINE(229)
				return instance;
			}
		}
	}
	HX_STACK_LINE(235)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CairoTextField_obj,getFontInstance,return )

int CairoTextField_obj::getLineBreaks( ::openfl::text::TextField textField){
	HX_STACK_FRAME("openfl._internal.renderer.cairo.CairoTextField","getLineBreaks",0x445de0f6,"openfl._internal.renderer.cairo.CairoTextField.getLineBreaks","openfl/_internal/renderer/cairo/CairoTextField.hx",240,0xfadfb778)
	HX_STACK_ARG(textField,"textField")
	HX_STACK_LINE(244)
	int lines = (int)0;		HX_STACK_VAR(lines,"lines");
	HX_STACK_LINE(246)
	{
		HX_STACK_LINE(246)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(246)
		::String _g = textField->get_text();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(246)
		int _g2 = ::haxe::Utf8_obj::length(_g);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(246)
		while((true)){
			HX_STACK_LINE(246)
			if ((!(((_g1 < _g2))))){
				HX_STACK_LINE(246)
				break;
			}
			HX_STACK_LINE(246)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(248)
			::String _g11 = textField->get_text();		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(248)
			int _char = ::haxe::Utf8_obj::charCodeAt(_g11,i);		HX_STACK_VAR(_char,"char");
			HX_STACK_LINE(250)
			if (((_char == ::openfl::_internal::renderer::cairo::CairoTextField_obj::__utf8_endline_code))){
				HX_STACK_LINE(252)
				(lines)++;
			}
		}
	}
	HX_STACK_LINE(258)
	return lines;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CairoTextField_obj,getLineBreaks,return )

Array< int > CairoTextField_obj::getLineBreakIndices( ::openfl::text::TextField textField){
	HX_STACK_FRAME("openfl._internal.renderer.cairo.CairoTextField","getLineBreakIndices",0x282713ca,"openfl._internal.renderer.cairo.CairoTextField.getLineBreakIndices","openfl/_internal/renderer/cairo/CairoTextField.hx",263,0xfadfb778)
	HX_STACK_ARG(textField,"textField")
	HX_STACK_LINE(267)
	Array< int > breaks = Array_obj< int >::__new();		HX_STACK_VAR(breaks,"breaks");
	HX_STACK_LINE(269)
	{
		HX_STACK_LINE(269)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(269)
		::String _g = textField->get_text();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(269)
		int _g2 = ::haxe::Utf8_obj::length(_g);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(269)
		while((true)){
			HX_STACK_LINE(269)
			if ((!(((_g1 < _g2))))){
				HX_STACK_LINE(269)
				break;
			}
			HX_STACK_LINE(269)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(271)
			{
				HX_STACK_LINE(273)
				::String _g11 = textField->get_text();		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(273)
				int _char = ::haxe::Utf8_obj::charCodeAt(_g11,i);		HX_STACK_VAR(_char,"char");
				HX_STACK_LINE(275)
				if (((_char == ::openfl::_internal::renderer::cairo::CairoTextField_obj::__utf8_endline_code))){
					HX_STACK_LINE(277)
					breaks->push(i);
				}
			}
		}
	}
	HX_STACK_LINE(285)
	return breaks;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CairoTextField_obj,getLineBreakIndices,return )

int CairoTextField_obj::getLineBreaksInRange( ::openfl::text::TextField textField,int i){
	HX_STACK_FRAME("openfl._internal.renderer.cairo.CairoTextField","getLineBreaksInRange",0x19c56d42,"openfl._internal.renderer.cairo.CairoTextField.getLineBreaksInRange","openfl/_internal/renderer/cairo/CairoTextField.hx",290,0xfadfb778)
	HX_STACK_ARG(textField,"textField")
	HX_STACK_ARG(i,"i")
	HX_STACK_LINE(294)
	int lines = (int)0;		HX_STACK_VAR(lines,"lines");
	HX_STACK_LINE(296)
	if (((bool((textField->__ranges->length > i)) && bool((i >= (int)0))))){
		HX_STACK_LINE(298)
		::openfl::text::TextFormatRange range = textField->__ranges->__get(i).StaticCast< ::openfl::text::TextFormatRange >();		HX_STACK_VAR(range,"range");
		HX_STACK_LINE(302)
		if (((bool((range->start > (int)0)) && bool((range->end < textField->get_text().length))))){
			HX_STACK_LINE(304)
			int _g1 = range->start;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(304)
			int _g = (range->end + (int)1);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(304)
			while((true)){
				HX_STACK_LINE(304)
				if ((!(((_g1 < _g))))){
					HX_STACK_LINE(304)
					break;
				}
				HX_STACK_LINE(304)
				int j = (_g1)++;		HX_STACK_VAR(j,"j");
				HX_STACK_LINE(306)
				::String _g2 = textField->get_text();		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(306)
				int _char = ::haxe::Utf8_obj::charCodeAt(_g2,i);		HX_STACK_VAR(_char,"char");
				HX_STACK_LINE(308)
				if (((_char == ::openfl::_internal::renderer::cairo::CairoTextField_obj::__utf8_endline_code))){
					HX_STACK_LINE(310)
					(lines)++;
				}
			}
		}
	}
	HX_STACK_LINE(320)
	return lines;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CairoTextField_obj,getLineBreaksInRange,return )

Array< int > CairoTextField_obj::getLineIndices( ::openfl::text::TextField textField,int line){
	HX_STACK_FRAME("openfl._internal.renderer.cairo.CairoTextField","getLineIndices",0x894cc6c5,"openfl._internal.renderer.cairo.CairoTextField.getLineIndices","openfl/_internal/renderer/cairo/CairoTextField.hx",325,0xfadfb778)
	HX_STACK_ARG(textField,"textField")
	HX_STACK_ARG(line,"line")
	HX_STACK_LINE(329)
	Array< int > breaks = ::openfl::_internal::renderer::cairo::CairoTextField_obj::getLineBreakIndices(textField);		HX_STACK_VAR(breaks,"breaks");
	HX_STACK_LINE(330)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(331)
	int first_char = (int)0;		HX_STACK_VAR(first_char,"first_char");
	HX_STACK_LINE(332)
	int last_char = (textField->get_text().length - (int)1);		HX_STACK_VAR(last_char,"last_char");
	HX_STACK_LINE(334)
	{
		HX_STACK_LINE(334)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(334)
		while((true)){
			HX_STACK_LINE(334)
			if ((!(((_g < breaks->length))))){
				HX_STACK_LINE(334)
				break;
			}
			HX_STACK_LINE(334)
			int br = breaks->__get(_g);		HX_STACK_VAR(br,"br");
			HX_STACK_LINE(334)
			++(_g);
			HX_STACK_LINE(338)
			if (((i == line))){
				HX_STACK_LINE(342)
				first_char = (br + (int)1);
				HX_STACK_LINE(346)
				if (((i != (breaks->length - (int)1)))){
					HX_STACK_LINE(351)
					last_char = (breaks->__get((i + (int)1)) - (int)1);
				}
			}
			HX_STACK_LINE(357)
			(i)++;
		}
	}
	HX_STACK_LINE(361)
	return Array_obj< int >::__new().Add(first_char).Add(last_char);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CairoTextField_obj,getLineIndices,return )

Float CairoTextField_obj::getLineMetric( ::openfl::text::TextField textField,int line,int metric){
	HX_STACK_FRAME("openfl._internal.renderer.cairo.CairoTextField","getLineMetric",0x380c6652,"openfl._internal.renderer.cairo.CairoTextField.getLineMetric","openfl/_internal/renderer/cairo/CairoTextField.hx",368,0xfadfb778)
	HX_STACK_ARG(textField,"textField")
	HX_STACK_ARG(line,"line")
	HX_STACK_ARG(metric,"metric")
	HX_STACK_LINE(368)
	if (((textField->__ranges == null()))){
		HX_STACK_LINE(370)
		return ::openfl::_internal::renderer::cairo::CairoTextField_obj::getLineMetricSubRangesNull(textField,true,metric);
	}
	else{
		HX_STACK_LINE(374)
		return ::openfl::_internal::renderer::cairo::CairoTextField_obj::getLineMetricSubRangesNotNull(textField,line,metric);
	}
	HX_STACK_LINE(368)
	return 0.;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(CairoTextField_obj,getLineMetric,return )

Float CairoTextField_obj::getLineMetricSubRangesNotNull( ::openfl::text::TextField textField,int specificLine,int metric){
	HX_STACK_FRAME("openfl._internal.renderer.cairo.CairoTextField","getLineMetricSubRangesNotNull",0x4ef3fc96,"openfl._internal.renderer.cairo.CairoTextField.getLineMetricSubRangesNotNull","openfl/_internal/renderer/cairo/CairoTextField.hx",381,0xfadfb778)
	HX_STACK_ARG(textField,"textField")
	HX_STACK_ARG(specificLine,"specificLine")
	HX_STACK_ARG(metric,"metric")
	HX_STACK_LINE(386)
	Array< int > lineChars = ::openfl::_internal::renderer::cairo::CairoTextField_obj::getLineIndices(textField,specificLine);		HX_STACK_VAR(lineChars,"lineChars");
	HX_STACK_LINE(388)
	Float m = 0.0;		HX_STACK_VAR(m,"m");
	HX_STACK_LINE(389)
	Float best_m = 0.0;		HX_STACK_VAR(best_m,"best_m");
	HX_STACK_LINE(391)
	{
		HX_STACK_LINE(391)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(391)
		Array< ::Dynamic > _g1 = textField->__ranges;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(391)
		while((true)){
			HX_STACK_LINE(391)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(391)
				break;
			}
			HX_STACK_LINE(391)
			::openfl::text::TextFormatRange range = _g1->__get(_g).StaticCast< ::openfl::text::TextFormatRange >();		HX_STACK_VAR(range,"range");
			HX_STACK_LINE(391)
			++(_g);
			HX_STACK_LINE(393)
			if (((range->start >= lineChars->__get((int)0)))){
				HX_STACK_LINE(395)
				::openfl::text::Font font = ::openfl::_internal::renderer::cairo::CairoTextField_obj::getFontInstance(range->format);		HX_STACK_VAR(font,"font");
				HX_STACK_LINE(397)
				if (((font != null()))){
					HX_STACK_LINE(399)
					Float _g11;		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(399)
					switch( (int)(metric)){
						case (int)2: {
							HX_STACK_LINE(401)
							Float _g2 = ::openfl::_internal::renderer::cairo::CairoTextField_obj::getLineMetricSubRangesNotNull(textField,specificLine,(int)0);		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(401)
							Float _g12 = ::openfl::_internal::renderer::cairo::CairoTextField_obj::getLineMetricSubRangesNotNull(textField,specificLine,(int)1);		HX_STACK_VAR(_g12,"_g12");
							HX_STACK_LINE(401)
							Float _g21 = (_g2 + _g12);		HX_STACK_VAR(_g21,"_g21");
							HX_STACK_LINE(401)
							Float _g3 = ::openfl::_internal::renderer::cairo::CairoTextField_obj::getLineMetricSubRangesNotNull(textField,specificLine,(int)3);		HX_STACK_VAR(_g3,"_g3");
							HX_STACK_LINE(401)
							_g11 = (_g21 + _g3);
						}
						;break;
						case (int)0: {
							HX_STACK_LINE(402)
							int _g4 = font->get_ascender();		HX_STACK_VAR(_g4,"_g4");
							HX_STACK_LINE(402)
							int _g5 = font->get_unitsPerEM();		HX_STACK_VAR(_g5,"_g5");
							HX_STACK_LINE(402)
							Float _g6 = (Float(_g4) / Float(_g5));		HX_STACK_VAR(_g6,"_g6");
							HX_STACK_LINE(402)
							_g11 = (_g6 * textField->__textFormat->size);
						}
						;break;
						case (int)1: {
							HX_STACK_LINE(403)
							int _g7 = font->get_descender();		HX_STACK_VAR(_g7,"_g7");
							HX_STACK_LINE(403)
							int _g8 = font->get_unitsPerEM();		HX_STACK_VAR(_g8,"_g8");
							HX_STACK_LINE(403)
							Float _g9 = (Float(_g7) / Float(_g8));		HX_STACK_VAR(_g9,"_g9");
							HX_STACK_LINE(403)
							Float _g10 = (_g9 * textField->__textFormat->size);		HX_STACK_VAR(_g10,"_g10");
							HX_STACK_LINE(403)
							_g11 = ::Math_obj::abs(_g10);
						}
						;break;
						case (int)3: {
							HX_STACK_LINE(404)
							_g11 = textField->__textFormat->leading;
						}
						;break;
					}
					HX_STACK_LINE(399)
					m = _g11;
				}
			}
			HX_STACK_LINE(413)
			if (((m > best_m))){
				HX_STACK_LINE(415)
				best_m = m;
			}
			HX_STACK_LINE(419)
			m = (int)0;
		}
	}
	HX_STACK_LINE(423)
	return best_m;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(CairoTextField_obj,getLineMetricSubRangesNotNull,return )

Float CairoTextField_obj::getLineMetricSubRangesNull( ::openfl::text::TextField textField,hx::Null< bool >  __o_singleLine,int metric){
bool singleLine = __o_singleLine.Default(false);
	HX_STACK_FRAME("openfl._internal.renderer.cairo.CairoTextField","getLineMetricSubRangesNull",0xbb6659ab,"openfl._internal.renderer.cairo.CairoTextField.getLineMetricSubRangesNull","openfl/_internal/renderer/cairo/CairoTextField.hx",428,0xfadfb778)
	HX_STACK_ARG(textField,"textField")
	HX_STACK_ARG(singleLine,"singleLine")
	HX_STACK_ARG(metric,"metric")
{
		HX_STACK_LINE(432)
		::openfl::text::Font font = ::openfl::_internal::renderer::cairo::CairoTextField_obj::getFontInstance(textField->__textFormat);		HX_STACK_VAR(font,"font");
		HX_STACK_LINE(434)
		if (((font != null()))){
			HX_STACK_LINE(436)
			switch( (int)(metric)){
				case (int)2: {
					HX_STACK_LINE(438)
					Float _g = ::openfl::_internal::renderer::cairo::CairoTextField_obj::getLineMetricSubRangesNull(textField,singleLine,(int)0);		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(438)
					Float _g1 = ::openfl::_internal::renderer::cairo::CairoTextField_obj::getLineMetricSubRangesNull(textField,singleLine,(int)1);		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(438)
					Float _g2 = (_g + _g1);		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(438)
					Float _g3 = ::openfl::_internal::renderer::cairo::CairoTextField_obj::getLineMetricSubRangesNull(textField,singleLine,(int)3);		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(438)
					return (_g2 + _g3);
				}
				;break;
				case (int)0: {
					HX_STACK_LINE(439)
					int _g4 = font->get_ascender();		HX_STACK_VAR(_g4,"_g4");
					HX_STACK_LINE(439)
					int _g5 = font->get_unitsPerEM();		HX_STACK_VAR(_g5,"_g5");
					HX_STACK_LINE(439)
					Float _g6 = (Float(_g4) / Float(_g5));		HX_STACK_VAR(_g6,"_g6");
					HX_STACK_LINE(439)
					return (_g6 * textField->__textFormat->size);
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(440)
					int _g7 = font->get_descender();		HX_STACK_VAR(_g7,"_g7");
					HX_STACK_LINE(440)
					int _g8 = font->get_unitsPerEM();		HX_STACK_VAR(_g8,"_g8");
					HX_STACK_LINE(440)
					Float _g9 = (Float(_g7) / Float(_g8));		HX_STACK_VAR(_g9,"_g9");
					HX_STACK_LINE(440)
					Float _g10 = (_g9 * textField->__textFormat->size);		HX_STACK_VAR(_g10,"_g10");
					HX_STACK_LINE(440)
					return ::Math_obj::abs(_g10);
				}
				;break;
				case (int)3: {
					HX_STACK_LINE(441)
					return textField->__textFormat->leading;
				}
				;break;
			}
		}
		HX_STACK_LINE(448)
		return (int)0;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(CairoTextField_obj,getLineMetricSubRangesNull,return )

Float CairoTextField_obj::getLineWidth( ::openfl::text::TextField textField,int line){
	HX_STACK_FRAME("openfl._internal.renderer.cairo.CairoTextField","getLineWidth",0xbf1d7224,"openfl._internal.renderer.cairo.CairoTextField.getLineWidth","openfl/_internal/renderer/cairo/CairoTextField.hx",453,0xfadfb778)
	HX_STACK_ARG(textField,"textField")
	HX_STACK_ARG(line,"line")
	HX_STACK_LINE(459)
	Array< Float > measurements = ::openfl::_internal::renderer::cairo::CairoTextField_obj::measureTextSub(textField,false);		HX_STACK_VAR(measurements,"measurements");
	HX_STACK_LINE(461)
	Float currWidth = 0.0;		HX_STACK_VAR(currWidth,"currWidth");
	HX_STACK_LINE(462)
	Float bestWidth = 0.0;		HX_STACK_VAR(bestWidth,"bestWidth");
	HX_STACK_LINE(464)
	Array< int > linebreaks = ::openfl::_internal::renderer::cairo::CairoTextField_obj::getLineBreakIndices(textField);		HX_STACK_VAR(linebreaks,"linebreaks");
	HX_STACK_LINE(465)
	int currLine = (int)0;		HX_STACK_VAR(currLine,"currLine");
	HX_STACK_LINE(467)
	{
		HX_STACK_LINE(467)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(467)
		int _g = measurements->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(467)
		while((true)){
			HX_STACK_LINE(467)
			if ((!(((_g1 < _g))))){
				HX_STACK_LINE(467)
				break;
			}
			HX_STACK_LINE(467)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(469)
			Float measure = measurements->__get(i);		HX_STACK_VAR(measure,"measure");
			HX_STACK_LINE(471)
			int _g2 = linebreaks->indexOf(i,null());		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(471)
			if (((_g2 != (int)-1))){
				HX_STACK_LINE(473)
				if (((currLine == line))){
					HX_STACK_LINE(475)
					return currWidth;
				}
				else{
					HX_STACK_LINE(477)
					if (((bool((line == (int)-1)) && bool((currWidth > bestWidth))))){
						HX_STACK_LINE(479)
						bestWidth = currWidth;
					}
				}
				HX_STACK_LINE(483)
				currWidth = (int)0;
				HX_STACK_LINE(484)
				(currLine)++;
			}
			else{
				HX_STACK_LINE(488)
				hx::AddEq(currWidth,measurements->__get(i));
			}
		}
	}
	HX_STACK_LINE(494)
	if (((currLine == line))){
		HX_STACK_LINE(496)
		bestWidth = currWidth;
	}
	else{
		HX_STACK_LINE(498)
		if (((bool((line == (int)-1)) && bool((currWidth > bestWidth))))){
			HX_STACK_LINE(500)
			bestWidth = currWidth;
		}
	}
	HX_STACK_LINE(504)
	return bestWidth;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CairoTextField_obj,getLineWidth,return )

Float CairoTextField_obj::getTextHeight( ::openfl::text::TextField textField){
	HX_STACK_FRAME("openfl._internal.renderer.cairo.CairoTextField","getTextHeight",0x933e6b82,"openfl._internal.renderer.cairo.CairoTextField.getTextHeight","openfl/_internal/renderer/cairo/CairoTextField.hx",515,0xfadfb778)
	HX_STACK_ARG(textField,"textField")
	HX_STACK_LINE(520)
	Float th = 0.0;		HX_STACK_VAR(th,"th");
	HX_STACK_LINE(522)
	{
		HX_STACK_LINE(522)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(522)
		int _g = textField->get_numLines();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(522)
		while((true)){
			HX_STACK_LINE(522)
			if ((!(((_g1 < _g))))){
				HX_STACK_LINE(522)
				break;
			}
			HX_STACK_LINE(522)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(524)
			Float _g2 = ::openfl::_internal::renderer::cairo::CairoTextField_obj::getLineMetric(textField,i,(int)0);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(524)
			Float _g11 = ::openfl::_internal::renderer::cairo::CairoTextField_obj::getLineMetric(textField,i,(int)1);		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(524)
			Float _g21 = (_g2 + _g11);		HX_STACK_VAR(_g21,"_g21");
			HX_STACK_LINE(524)
			hx::AddEq(th,_g21);
			HX_STACK_LINE(526)
			int _g3 = textField->get_numLines();		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(526)
			int _g4 = (_g3 - (int)1);		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(526)
			if (((i != _g4))){
				HX_STACK_LINE(528)
				Float _g5 = ::openfl::_internal::renderer::cairo::CairoTextField_obj::getLineMetric(textField,i,(int)3);		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(528)
				hx::AddEq(th,_g5);
			}
		}
	}
	HX_STACK_LINE(534)
	return th;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CairoTextField_obj,getTextHeight,return )

Float CairoTextField_obj::getTextWidth( ::openfl::text::TextField textField,::String text){
	HX_STACK_FRAME("openfl._internal.renderer.cairo.CairoTextField","getTextWidth",0x110ffecb,"openfl._internal.renderer.cairo.CairoTextField.getTextWidth","openfl/_internal/renderer/cairo/CairoTextField.hx",541,0xfadfb778)
	HX_STACK_ARG(textField,"textField")
	HX_STACK_ARG(text,"text")
	HX_STACK_LINE(541)
	return (int)0;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CairoTextField_obj,getTextWidth,return )

Array< Float > CairoTextField_obj::measureText( ::openfl::text::TextField textField,hx::Null< bool >  __o_condense){
bool condense = __o_condense.Default(true);
	HX_STACK_FRAME("openfl._internal.renderer.cairo.CairoTextField","measureText",0xdd449c03,"openfl._internal.renderer.cairo.CairoTextField.measureText","openfl/_internal/renderer/cairo/CairoTextField.hx",551,0xfadfb778)
	HX_STACK_ARG(textField,"textField")
	HX_STACK_ARG(condense,"condense")
{
		HX_STACK_LINE(551)
		return ::openfl::_internal::renderer::cairo::CairoTextField_obj::measureTextSub(textField,condense);
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CairoTextField_obj,measureText,return )

Array< Float > CairoTextField_obj::measureTextSub( ::openfl::text::TextField textField,bool condense){
	HX_STACK_FRAME("openfl._internal.renderer.cairo.CairoTextField","measureTextSub",0xe4bfe93d,"openfl._internal.renderer.cairo.CairoTextField.measureTextSub","openfl/_internal/renderer/cairo/CairoTextField.hx",556,0xfadfb778)
	HX_STACK_ARG(textField,"textField")
	HX_STACK_ARG(condense,"condense")
	HX_STACK_LINE(560)
	if (((textField->__textLayout == null()))){
		HX_STACK_LINE(562)
		::lime::text::TextLayout _g = ::lime::text::TextLayout_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(562)
		textField->__textLayout = _g;
	}
	HX_STACK_LINE(566)
	if (((textField->__ranges == null()))){
		HX_STACK_LINE(568)
		return ::openfl::_internal::renderer::cairo::CairoTextField_obj::measureTextSubRangesNull(textField,condense);
	}
	else{
		HX_STACK_LINE(572)
		return ::openfl::_internal::renderer::cairo::CairoTextField_obj::measureTextSubRangesNotNull(textField,condense);
	}
	HX_STACK_LINE(576)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CairoTextField_obj,measureTextSub,return )

Array< Float > CairoTextField_obj::measureTextSubRangesNotNull( ::openfl::text::TextField textField,bool condense){
	HX_STACK_FRAME("openfl._internal.renderer.cairo.CairoTextField","measureTextSubRangesNotNull",0xe93a6447,"openfl._internal.renderer.cairo.CairoTextField.measureTextSubRangesNotNull","openfl/_internal/renderer/cairo/CairoTextField.hx",581,0xfadfb778)
	HX_STACK_ARG(textField,"textField")
	HX_STACK_ARG(condense,"condense")
	HX_STACK_LINE(585)
	Array< Float > measurements = Array_obj< Float >::__new();		HX_STACK_VAR(measurements,"measurements");
	HX_STACK_LINE(586)
	::lime::text::TextLayout textLayout = textField->__textLayout;		HX_STACK_VAR(textLayout,"textLayout");
	HX_STACK_LINE(588)
	{
		HX_STACK_LINE(588)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(588)
		Array< ::Dynamic > _g1 = textField->__ranges;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(588)
		while((true)){
			HX_STACK_LINE(588)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(588)
				break;
			}
			HX_STACK_LINE(588)
			::openfl::text::TextFormatRange range = _g1->__get(_g).StaticCast< ::openfl::text::TextFormatRange >();		HX_STACK_VAR(range,"range");
			HX_STACK_LINE(588)
			++(_g);
			HX_STACK_LINE(590)
			::openfl::text::Font font = ::openfl::_internal::renderer::cairo::CairoTextField_obj::getFontInstance(range->format);		HX_STACK_VAR(font,"font");
			HX_STACK_LINE(591)
			Float width = 0.0;		HX_STACK_VAR(width,"width");
			HX_STACK_LINE(593)
			if (((bool((font != null())) && bool((range->format->size != null()))))){
				HX_STACK_LINE(595)
				textLayout->set_text(null());
				HX_STACK_LINE(596)
				textLayout->set_font(font);
				HX_STACK_LINE(597)
				int _g2 = ::Std_obj::_int(range->format->size);		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(597)
				textLayout->set_size(_g2);
				HX_STACK_LINE(598)
				::String _g11 = textField->get_text().substring(range->start,range->end);		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(598)
				textLayout->set_text(_g11);
				HX_STACK_LINE(600)
				{
					HX_STACK_LINE(600)
					int _g21 = (int)0;		HX_STACK_VAR(_g21,"_g21");
					HX_STACK_LINE(600)
					Array< ::Dynamic > _g3 = textLayout->get_positions();		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(600)
					while((true)){
						HX_STACK_LINE(600)
						if ((!(((_g21 < _g3->length))))){
							HX_STACK_LINE(600)
							break;
						}
						HX_STACK_LINE(600)
						::lime::text::GlyphPosition position = _g3->__get(_g21).StaticCast< ::lime::text::GlyphPosition >();		HX_STACK_VAR(position,"position");
						HX_STACK_LINE(600)
						++(_g21);
						HX_STACK_LINE(602)
						if ((condense)){
							HX_STACK_LINE(604)
							hx::AddEq(width,position->advance->x);
						}
						else{
							HX_STACK_LINE(608)
							measurements->push(position->advance->x);
						}
					}
				}
			}
			HX_STACK_LINE(616)
			if ((condense)){
				HX_STACK_LINE(618)
				measurements->push(width);
			}
		}
	}
	HX_STACK_LINE(624)
	return measurements;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CairoTextField_obj,measureTextSubRangesNotNull,return )

Array< Float > CairoTextField_obj::measureTextSubRangesNull( ::openfl::text::TextField textField,bool condense){
	HX_STACK_FRAME("openfl._internal.renderer.cairo.CairoTextField","measureTextSubRangesNull",0xaf47a95a,"openfl._internal.renderer.cairo.CairoTextField.measureTextSubRangesNull","openfl/_internal/renderer/cairo/CairoTextField.hx",629,0xfadfb778)
	HX_STACK_ARG(textField,"textField")
	HX_STACK_ARG(condense,"condense")
	HX_STACK_LINE(633)
	::openfl::text::Font font = ::openfl::_internal::renderer::cairo::CairoTextField_obj::getFontInstance(textField->__textFormat);		HX_STACK_VAR(font,"font");
	HX_STACK_LINE(634)
	Float width = 0.0;		HX_STACK_VAR(width,"width");
	HX_STACK_LINE(635)
	Array< Float > widths = Array_obj< Float >::__new();		HX_STACK_VAR(widths,"widths");
	HX_STACK_LINE(636)
	::lime::text::TextLayout textLayout = textField->__textLayout;		HX_STACK_VAR(textLayout,"textLayout");
	HX_STACK_LINE(638)
	if (((bool((font != null())) && bool((textField->__textFormat->size != null()))))){
		HX_STACK_LINE(640)
		textLayout->set_text(null());
		HX_STACK_LINE(641)
		textLayout->set_font(font);
		HX_STACK_LINE(642)
		int _g = ::Std_obj::_int(textField->__textFormat->size);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(642)
		textLayout->set_size(_g);
		HX_STACK_LINE(643)
		textLayout->set_text(textField->__text);
		HX_STACK_LINE(645)
		{
			HX_STACK_LINE(645)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(645)
			Array< ::Dynamic > _g11 = textLayout->get_positions();		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(645)
			while((true)){
				HX_STACK_LINE(645)
				if ((!(((_g1 < _g11->length))))){
					HX_STACK_LINE(645)
					break;
				}
				HX_STACK_LINE(645)
				::lime::text::GlyphPosition position = _g11->__get(_g1).StaticCast< ::lime::text::GlyphPosition >();		HX_STACK_VAR(position,"position");
				HX_STACK_LINE(645)
				++(_g1);
				HX_STACK_LINE(647)
				if ((condense)){
					HX_STACK_LINE(649)
					hx::AddEq(width,position->advance->x);
				}
				else{
					HX_STACK_LINE(653)
					widths->push(position->advance->x);
				}
			}
		}
	}
	HX_STACK_LINE(661)
	if ((condense)){
		HX_STACK_LINE(663)
		widths->push(width);
	}
	HX_STACK_LINE(667)
	return widths;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CairoTextField_obj,measureTextSubRangesNull,return )

Void CairoTextField_obj::render( ::openfl::text::TextField textField,::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl._internal.renderer.cairo.CairoTextField","render",0xabb9797e,"openfl._internal.renderer.cairo.CairoTextField.render","openfl/_internal/renderer/cairo/CairoTextField.hx",672,0xfadfb778)
		HX_STACK_ARG(textField,"textField")
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(675)
		if ((!(textField->__dirty))){
			HX_STACK_LINE(675)
			return null();
		}
		HX_STACK_LINE(677)
		::openfl::geom::Rectangle bounds = textField->getBounds(null());		HX_STACK_VAR(bounds,"bounds");
		HX_STACK_LINE(678)
		::openfl::text::TextFormat format = textField->getTextFormat(null(),null());		HX_STACK_VAR(format,"format");
		HX_STACK_LINE(680)
		::openfl::display::Graphics graphics = textField->__graphics;		HX_STACK_VAR(graphics,"graphics");
		HX_STACK_LINE(681)
		::lime::graphics::cairo::Cairo cairo = graphics->__cairo;		HX_STACK_VAR(cairo,"cairo");
		HX_STACK_LINE(683)
		if (((cairo != null()))){
			HX_STACK_LINE(685)
			Dynamic surface = cairo->get_target();		HX_STACK_VAR(surface,"surface");
			HX_STACK_LINE(687)
			int _g = ::Math_obj::ceil(bounds->width);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(687)
			int _g1 = ::lime::graphics::cairo::_CairoSurface::CairoSurface_Impl__obj::get_width(surface);		HX_STACK_VAR(_g1,"_g1");
			struct _Function_2_1{
				inline static bool Block( Dynamic &surface,::openfl::geom::Rectangle &bounds){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_internal/renderer/cairo/CairoTextField.hx",687,0xfadfb778)
					{
						HX_STACK_LINE(687)
						int _g2 = ::Math_obj::ceil(bounds->height);		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(687)
						int _g3 = ::lime::graphics::cairo::_CairoSurface::CairoSurface_Impl__obj::get_height(surface);		HX_STACK_VAR(_g3,"_g3");
						HX_STACK_LINE(687)
						return (_g2 != _g3);
					}
					return null();
				}
			};
			HX_STACK_LINE(687)
			if (((  ((!(((_g != _g1))))) ? bool(_Function_2_1::Block(surface,bounds)) : bool(true) ))){
				HX_STACK_LINE(689)
				cairo->destroy();
				HX_STACK_LINE(690)
				cairo = null();
			}
		}
		HX_STACK_LINE(696)
		if (((cairo == null()))){
			HX_STACK_LINE(698)
			int _g4 = ::Math_obj::ceil(bounds->width);		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(698)
			int _g5 = ::Math_obj::ceil(bounds->height);		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(698)
			::openfl::display::BitmapData bitmap = ::openfl::display::BitmapData_obj::__new(_g4,_g5,true,null());		HX_STACK_VAR(bitmap,"bitmap");
			HX_STACK_LINE(699)
			Dynamic surface = ::lime::graphics::cairo::_CairoSurface::CairoSurface_Impl__obj::fromImage(bitmap->__image);		HX_STACK_VAR(surface,"surface");
			HX_STACK_LINE(700)
			::lime::graphics::cairo::Cairo _g6 = ::lime::graphics::cairo::Cairo_obj::__new(surface);		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(700)
			graphics->__cairo = _g6;
			HX_STACK_LINE(701)
			::lime::graphics::cairo::_CairoSurface::CairoSurface_Impl__obj::destroy(surface);
			HX_STACK_LINE(703)
			bitmap->__bgra = true;
			HX_STACK_LINE(705)
			graphics->__bitmap = bitmap;
			HX_STACK_LINE(706)
			::openfl::geom::Rectangle _g7 = ::openfl::geom::Rectangle_obj::__new((int)0,(int)0,bounds->width,bounds->height);		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(706)
			graphics->__bounds = _g7;
			HX_STACK_LINE(708)
			cairo = graphics->__cairo;
			HX_STACK_LINE(710)
			::lime::graphics::cairo::CairoFontOptions options = ::lime::graphics::cairo::CairoFontOptions_obj::__new(null());		HX_STACK_VAR(options,"options");
			HX_STACK_LINE(711)
			options->set_hintStyle((int)4);
			HX_STACK_LINE(712)
			options->set_hintMetrics((int)2);
			HX_STACK_LINE(713)
			options->set_antialias((int)5);
			HX_STACK_LINE(714)
			cairo->setFontOptions(options);
		}
		HX_STACK_LINE(718)
		::openfl::text::Font font = ::openfl::_internal::renderer::cairo::CairoTextField_obj::getFontInstance(format);		HX_STACK_VAR(font,"font");
		HX_STACK_LINE(720)
		if (((textField->__cairoFont != null()))){
			HX_STACK_LINE(722)
			if (((textField->__cairoFont->font != font))){
				HX_STACK_LINE(724)
				textField->__cairoFont->destroy();
				HX_STACK_LINE(725)
				textField->__cairoFont = null();
			}
		}
		HX_STACK_LINE(731)
		if (((textField->__cairoFont == null()))){
			HX_STACK_LINE(733)
			::lime::graphics::cairo::CairoFont _g8 = ::lime::graphics::cairo::CairoFont_obj::__new(font);		HX_STACK_VAR(_g8,"_g8");
			HX_STACK_LINE(733)
			textField->__cairoFont = _g8;
		}
		HX_STACK_LINE(737)
		cairo->setFontFace(textField->__cairoFont);
		HX_STACK_LINE(738)
		Float _g9 = textField->get_width();		HX_STACK_VAR(_g9,"_g9");
		HX_STACK_LINE(738)
		int _g10 = ::Std_obj::_int(_g9);		HX_STACK_VAR(_g10,"_g10");
		HX_STACK_LINE(738)
		int _g11 = (_g10 - (int)1);		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(738)
		Float _g12 = textField->get_height();		HX_STACK_VAR(_g12,"_g12");
		HX_STACK_LINE(738)
		int _g13 = ::Std_obj::_int(_g12);		HX_STACK_VAR(_g13,"_g13");
		HX_STACK_LINE(738)
		int _g14 = (_g13 - (int)1);		HX_STACK_VAR(_g14,"_g14");
		HX_STACK_LINE(738)
		cairo->rectangle(0.5,0.5,_g11,_g14);
		HX_STACK_LINE(740)
		if ((!(textField->background))){
			HX_STACK_LINE(742)
			cairo->set_operator((int)1);
			HX_STACK_LINE(743)
			cairo->setSourceRGBA((int)1,(int)1,(int)1,(int)0);
			HX_STACK_LINE(744)
			cairo->paint();
			HX_STACK_LINE(745)
			cairo->set_operator((int)2);
		}
		else{
			HX_STACK_LINE(749)
			int color = textField->backgroundColor;		HX_STACK_VAR(color,"color");
			HX_STACK_LINE(750)
			Float r = (Float((hx::UShr(((int(color) & int((int)16711680))),(int)16))) / Float((int)255));		HX_STACK_VAR(r,"r");
			HX_STACK_LINE(751)
			Float g = (Float((hx::UShr(((int(color) & int((int)65280))),(int)8))) / Float((int)255));		HX_STACK_VAR(g,"g");
			HX_STACK_LINE(752)
			Float b = (Float(((int(color) & int((int)255)))) / Float((int)255));		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(754)
			cairo->setSourceRGB(r,g,b);
			HX_STACK_LINE(755)
			cairo->fillPreserve();
		}
		HX_STACK_LINE(759)
		if ((textField->border)){
			HX_STACK_LINE(761)
			int color = textField->borderColor;		HX_STACK_VAR(color,"color");
			HX_STACK_LINE(762)
			Float r = (Float((hx::UShr(((int(color) & int((int)16711680))),(int)16))) / Float((int)255));		HX_STACK_VAR(r,"r");
			HX_STACK_LINE(763)
			Float g = (Float((hx::UShr(((int(color) & int((int)65280))),(int)8))) / Float((int)255));		HX_STACK_VAR(g,"g");
			HX_STACK_LINE(764)
			Float b = (Float(((int(color) & int((int)255)))) / Float((int)255));		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(766)
			cairo->setSourceRGB(r,g,b);
			HX_STACK_LINE(767)
			cairo->set_lineWidth((int)1);
			HX_STACK_LINE(768)
			cairo->stroke();
		}
		HX_STACK_LINE(772)
		if (((bool((textField->__text != null())) && bool((textField->__text != HX_CSTRING("")))))){
			HX_STACK_LINE(774)
			::String text = textField->get_text();		HX_STACK_VAR(text,"text");
			HX_STACK_LINE(776)
			if ((textField->displayAsPassword)){
				HX_STACK_LINE(778)
				int length = text.length;		HX_STACK_VAR(length,"length");
				HX_STACK_LINE(779)
				::String mask = HX_CSTRING("");		HX_STACK_VAR(mask,"mask");
				HX_STACK_LINE(781)
				{
					HX_STACK_LINE(781)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(781)
					while((true)){
						HX_STACK_LINE(781)
						if ((!(((_g < length))))){
							HX_STACK_LINE(781)
							break;
						}
						HX_STACK_LINE(781)
						int i = (_g)++;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(783)
						hx::AddEq(mask,HX_CSTRING("*"));
					}
				}
				HX_STACK_LINE(787)
				text = mask;
			}
			HX_STACK_LINE(791)
			Array< Float > measurements = ::openfl::_internal::renderer::cairo::CairoTextField_obj::measureText(textField,null());		HX_STACK_VAR(measurements,"measurements");
			HX_STACK_LINE(793)
			if (((textField->__ranges == null()))){
				HX_STACK_LINE(795)
				::openfl::_internal::renderer::cairo::CairoTextField_obj::renderText(textField,text,textField->__textFormat,(int)2,bounds);
			}
			else{
				HX_STACK_LINE(799)
				int currentIndex = (int)0;		HX_STACK_VAR(currentIndex,"currentIndex");
				HX_STACK_LINE(800)
				::openfl::text::TextFormatRange range;		HX_STACK_VAR(range,"range");
				HX_STACK_LINE(801)
				Float offsetX = 2.0;		HX_STACK_VAR(offsetX,"offsetX");
				HX_STACK_LINE(803)
				{
					HX_STACK_LINE(803)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(803)
					int _g = textField->__ranges->length;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(803)
					while((true)){
						HX_STACK_LINE(803)
						if ((!(((_g1 < _g))))){
							HX_STACK_LINE(803)
							break;
						}
						HX_STACK_LINE(803)
						int i = (_g1)++;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(805)
						range = textField->__ranges->__get(i).StaticCast< ::openfl::text::TextFormatRange >();
						HX_STACK_LINE(807)
						::String _g15 = text.substring(range->start,range->end);		HX_STACK_VAR(_g15,"_g15");
						HX_STACK_LINE(807)
						::openfl::_internal::renderer::cairo::CairoTextField_obj::renderText(textField,_g15,range->format,offsetX,bounds);
						HX_STACK_LINE(808)
						hx::AddEq(offsetX,measurements->__get(i));
					}
				}
			}
		}
		HX_STACK_LINE(816)
		graphics->__bitmap->__image->dirty = true;
		HX_STACK_LINE(817)
		textField->__dirty = false;
		HX_STACK_LINE(818)
		graphics->set___dirty(false);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CairoTextField_obj,render,(void))

Void CairoTextField_obj::renderText( ::openfl::text::TextField textField,::String text,::openfl::text::TextFormat format,Float offsetX,::openfl::geom::Rectangle bounds){
{
		HX_STACK_FRAME("openfl._internal.renderer.cairo.CairoTextField","renderText",0xbcba094b,"openfl._internal.renderer.cairo.CairoTextField.renderText","openfl/_internal/renderer/cairo/CairoTextField.hx",825,0xfadfb778)
		HX_STACK_ARG(textField,"textField")
		HX_STACK_ARG(text,"text")
		HX_STACK_ARG(format,"format")
		HX_STACK_ARG(offsetX,"offsetX")
		HX_STACK_ARG(bounds,"bounds")
		HX_STACK_LINE(828)
		::openfl::text::Font font = ::openfl::_internal::renderer::cairo::CairoTextField_obj::getFontInstance(format);		HX_STACK_VAR(font,"font");
		HX_STACK_LINE(830)
		if (((bool((font != null())) && bool((format->size != null()))))){
			HX_STACK_LINE(832)
			::openfl::display::Graphics graphics = textField->__graphics;		HX_STACK_VAR(graphics,"graphics");
			HX_STACK_LINE(833)
			::openfl::text::TextLineMetrics tlm = textField->getLineMetrics((int)0);		HX_STACK_VAR(tlm,"tlm");
			HX_STACK_LINE(835)
			Float x = offsetX;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(836)
			Float y = ((int)2 + tlm->ascent);		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(837)
			int size = ::Std_obj::_int(format->size);		HX_STACK_VAR(size,"size");
			HX_STACK_LINE(839)
			Array< ::String > lines = text.split(HX_CSTRING("\n"));		HX_STACK_VAR(lines,"lines");
			HX_STACK_LINE(841)
			int line_i = (int)0;		HX_STACK_VAR(line_i,"line_i");
			HX_STACK_LINE(842)
			Float oldX = x;		HX_STACK_VAR(oldX,"oldX");
			HX_STACK_LINE(844)
			::lime::graphics::cairo::Cairo cairo = textField->__graphics->__cairo;		HX_STACK_VAR(cairo,"cairo");
			HX_STACK_LINE(845)
			cairo->setFontSize(size);
			HX_STACK_LINE(847)
			Dynamic color = format->color;		HX_STACK_VAR(color,"color");
			HX_STACK_LINE(848)
			Float r = (Float((hx::UShr(((int(color) & int((int)16711680))),(int)16))) / Float((int)255));		HX_STACK_VAR(r,"r");
			HX_STACK_LINE(849)
			Float g = (Float((hx::UShr(((int(color) & int((int)65280))),(int)8))) / Float((int)255));		HX_STACK_VAR(g,"g");
			HX_STACK_LINE(850)
			Float b = (Float(((int(color) & int((int)255)))) / Float((int)255));		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(852)
			cairo->setSourceRGB(r,g,b);
			HX_STACK_LINE(854)
			{
				HX_STACK_LINE(854)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(854)
				while((true)){
					HX_STACK_LINE(854)
					if ((!(((_g < lines->length))))){
						HX_STACK_LINE(854)
						break;
					}
					HX_STACK_LINE(854)
					::String line = lines->__get(_g);		HX_STACK_VAR(line,"line");
					HX_STACK_LINE(854)
					++(_g);
					HX_STACK_LINE(856)
					::openfl::text::TextLineMetrics _g1 = textField->getLineMetrics(line_i);		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(856)
					tlm = _g1;
					HX_STACK_LINE(857)
					x = oldX;
					HX_STACK_LINE(859)
					Float _g8;		HX_STACK_VAR(_g8,"_g8");
					HX_STACK_LINE(859)
					{
						HX_STACK_LINE(859)
						::openfl::text::TextFormatAlign _g11 = format->align;		HX_STACK_VAR(_g11,"_g11");
						HX_STACK_LINE(859)
						switch( (int)(_g11->__Index())){
							case (int)0: case (int)2: {
								HX_STACK_LINE(861)
								_g8 = (int)0;
							}
							;break;
							case (int)3: {
								HX_STACK_LINE(862)
								Float _g12 = textField->get_width();		HX_STACK_VAR(_g12,"_g12");
								HX_STACK_LINE(862)
								Float _g2 = (_g12 - (int)4);		HX_STACK_VAR(_g2,"_g2");
								HX_STACK_LINE(862)
								Float _g3 = ::openfl::_internal::renderer::cairo::CairoTextField_obj::getLineWidth(textField,line_i);		HX_STACK_VAR(_g3,"_g3");
								HX_STACK_LINE(862)
								Float _g4 = (_g2 - _g3);		HX_STACK_VAR(_g4,"_g4");
								HX_STACK_LINE(862)
								_g8 = (Float(_g4) / Float((int)2));
							}
							;break;
							case (int)1: {
								HX_STACK_LINE(863)
								Float _g5 = textField->get_width();		HX_STACK_VAR(_g5,"_g5");
								HX_STACK_LINE(863)
								Float _g6 = (_g5 - (int)4);		HX_STACK_VAR(_g6,"_g6");
								HX_STACK_LINE(863)
								Float _g7 = ::openfl::_internal::renderer::cairo::CairoTextField_obj::getLineWidth(textField,line_i);		HX_STACK_VAR(_g7,"_g7");
								HX_STACK_LINE(863)
								_g8 = (_g6 - _g7);
							}
							;break;
						}
					}
					HX_STACK_LINE(859)
					hx::AddEq(x,_g8);
					HX_STACK_LINE(867)
					cairo->moveTo(x,y);
					HX_STACK_LINE(868)
					cairo->showText(line);
					HX_STACK_LINE(870)
					int _g9 = ::Math_obj::round(tlm->height);		HX_STACK_VAR(_g9,"_g9");
					HX_STACK_LINE(870)
					hx::AddEq(y,_g9);
					HX_STACK_LINE(871)
					(line_i)++;
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(CairoTextField_obj,renderText,(void))


CairoTextField_obj::CairoTextField_obj()
{
}

Dynamic CairoTextField_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"findFont") ) { return findFont_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"renderText") ) { return renderText_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"measureText") ) { return measureText_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getLineWidth") ) { return getLineWidth_dyn(); }
		if (HX_FIELD_EQ(inName,"getTextWidth") ) { return getTextWidth_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getLineBreaks") ) { return getLineBreaks_dyn(); }
		if (HX_FIELD_EQ(inName,"getLineMetric") ) { return getLineMetric_dyn(); }
		if (HX_FIELD_EQ(inName,"getTextHeight") ) { return getTextHeight_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getLineIndices") ) { return getLineIndices_dyn(); }
		if (HX_FIELD_EQ(inName,"measureTextSub") ) { return measureTextSub_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"getFontInstance") ) { return getFontInstance_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"__utf8_endline_code") ) { return __utf8_endline_code; }
		if (HX_FIELD_EQ(inName,"getLineBreakIndices") ) { return getLineBreakIndices_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"getLineBreaksInRange") ) { return getLineBreaksInRange_dyn(); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"measureTextSubRangesNull") ) { return measureTextSubRangesNull_dyn(); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"getLineMetricSubRangesNull") ) { return getLineMetricSubRangesNull_dyn(); }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"measureTextSubRangesNotNull") ) { return measureTextSubRangesNotNull_dyn(); }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"getLineMetricSubRangesNotNull") ) { return getLineMetricSubRangesNotNull_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic CairoTextField_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 19:
		if (HX_FIELD_EQ(inName,"__utf8_endline_code") ) { __utf8_endline_code=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CairoTextField_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("__utf8_endline_code"),
	HX_CSTRING("findFont"),
	HX_CSTRING("getFontInstance"),
	HX_CSTRING("getLineBreaks"),
	HX_CSTRING("getLineBreakIndices"),
	HX_CSTRING("getLineBreaksInRange"),
	HX_CSTRING("getLineIndices"),
	HX_CSTRING("getLineMetric"),
	HX_CSTRING("getLineMetricSubRangesNotNull"),
	HX_CSTRING("getLineMetricSubRangesNull"),
	HX_CSTRING("getLineWidth"),
	HX_CSTRING("getTextHeight"),
	HX_CSTRING("getTextWidth"),
	HX_CSTRING("measureText"),
	HX_CSTRING("measureTextSub"),
	HX_CSTRING("measureTextSubRangesNotNull"),
	HX_CSTRING("measureTextSubRangesNull"),
	HX_CSTRING("render"),
	HX_CSTRING("renderText"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CairoTextField_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(CairoTextField_obj::__utf8_endline_code,"__utf8_endline_code");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CairoTextField_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(CairoTextField_obj::__utf8_endline_code,"__utf8_endline_code");
};

#endif

Class CairoTextField_obj::__mClass;

void CairoTextField_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl._internal.renderer.cairo.CairoTextField"), hx::TCanCast< CairoTextField_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatics
#endif
#ifdef HXCPP_SCRIPTABLE
    , sMemberStorageInfo
#endif
);
}

void CairoTextField_obj::__boot()
{
	__utf8_endline_code= (int)10;
}

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace cairo
