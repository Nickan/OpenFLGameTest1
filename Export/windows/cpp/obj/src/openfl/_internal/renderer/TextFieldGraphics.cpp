#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_haxe_ds_ObjectMap
#include <haxe/ds/ObjectMap.h>
#endif
#ifndef INCLUDED_lime_graphics_Image
#include <lime/graphics/Image.h>
#endif
#ifndef INCLUDED_lime_graphics_ImageBuffer
#include <lime/graphics/ImageBuffer.h>
#endif
#ifndef INCLUDED_lime_math_Vector2
#include <lime/math/Vector2.h>
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
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_lime_utils_IMemoryRange
#include <lime/utils/IMemoryRange.h>
#endif
#ifndef INCLUDED_lime_utils_UInt8Array
#include <lime/utils/UInt8Array.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_TextFieldGraphics
#include <openfl/_internal/renderer/TextFieldGraphics.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_cairo_CairoTextField
#include <openfl/_internal/renderer/cairo/CairoTextField.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_CapsStyle
#include <openfl/display/CapsStyle.h>
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
#ifndef INCLUDED_openfl_display_JointStyle
#include <openfl/display/JointStyle.h>
#endif
#ifndef INCLUDED_openfl_display_LineScaleMode
#include <openfl/display/LineScaleMode.h>
#endif
#ifndef INCLUDED_openfl_display_Tilesheet
#include <openfl/display/Tilesheet.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
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
#ifndef INCLUDED_openfl_text_TextFieldAutoSize
#include <openfl/text/TextFieldAutoSize.h>
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

Void TextFieldGraphics_obj::__construct()
{
	return null();
}

//TextFieldGraphics_obj::~TextFieldGraphics_obj() { }

Dynamic TextFieldGraphics_obj::__CreateEmpty() { return  new TextFieldGraphics_obj; }
hx::ObjectPtr< TextFieldGraphics_obj > TextFieldGraphics_obj::__new()
{  hx::ObjectPtr< TextFieldGraphics_obj > result = new TextFieldGraphics_obj();
	result->__construct();
	return result;}

Dynamic TextFieldGraphics_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TextFieldGraphics_obj > result = new TextFieldGraphics_obj();
	result->__construct();
	return result;}

::haxe::ds::ObjectMap TextFieldGraphics_obj::bitmapData;

::haxe::ds::ObjectMap TextFieldGraphics_obj::glyphs;

::haxe::ds::ObjectMap TextFieldGraphics_obj::tilesheets;

::haxe::ds::ObjectMap TextFieldGraphics_obj::tileIDs;

Void TextFieldGraphics_obj::render( ::openfl::text::TextField textField){
{
		HX_STACK_FRAME("openfl._internal.renderer.TextFieldGraphics","render",0xa6aa48c7,"openfl._internal.renderer.TextFieldGraphics.render","openfl/_internal/renderer/TextFieldGraphics.hx",32,0xf0946200)
		HX_STACK_ARG(textField,"textField")
		HX_STACK_LINE(34)
		::openfl::geom::Rectangle bounds = textField->getBounds(null());		HX_STACK_VAR(bounds,"bounds");
		HX_STACK_LINE(36)
		::openfl::_internal::renderer::TextFieldGraphics_obj::update(textField,bounds);
		HX_STACK_LINE(38)
		if (((textField->__graphics == null()))){
			HX_STACK_LINE(40)
			::openfl::display::Graphics _g = ::openfl::display::Graphics_obj::__new();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(40)
			textField->__graphics = _g;
		}
		HX_STACK_LINE(44)
		::openfl::display::Graphics graphics = textField->__graphics;		HX_STACK_VAR(graphics,"graphics");
		HX_STACK_LINE(45)
		graphics->clear();
		HX_STACK_LINE(47)
		if (((bool(textField->border) || bool(textField->background)))){
			HX_STACK_LINE(49)
			if ((textField->border)){
				HX_STACK_LINE(51)
				graphics->lineStyle((int)1,textField->borderColor,null(),null(),null(),null(),null(),null());
			}
			HX_STACK_LINE(55)
			if ((textField->background)){
				HX_STACK_LINE(57)
				graphics->beginFill(textField->backgroundColor,null());
			}
			HX_STACK_LINE(61)
			graphics->drawRect((bounds->x + 0.5),(bounds->y + 0.5),(bounds->width - (int)1),(bounds->height - (int)1));
		}
		HX_STACK_LINE(65)
		if (((textField->__tileData != null()))){
			HX_STACK_LINE(67)
			for(::cpp::FastIterator_obj< ::openfl::display::Tilesheet > *__it = ::cpp::CreateFastIterator< ::openfl::display::Tilesheet >(textField->__tilesheets->keys());  __it->hasNext(); ){
				::openfl::display::Tilesheet tilesheet = __it->next();
				{
					HX_STACK_LINE(69)
					Array< Float > _g1 = textField->__tileData->get(tilesheet);		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(69)
					Dynamic _g2 = textField->__tileDataLength->get(tilesheet);		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(69)
					graphics->drawTiles(tilesheet,_g1,true,(int)4,_g2);
				}
;
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TextFieldGraphics_obj,render,(void))

Void TextFieldGraphics_obj::renderText( ::openfl::text::TextField textField,::String text,::openfl::text::TextFormat format,Float offsetX,::openfl::geom::Rectangle bounds){
{
		HX_STACK_FRAME("openfl._internal.renderer.TextFieldGraphics","renderText",0xe9feb114,"openfl._internal.renderer.TextFieldGraphics.renderText","openfl/_internal/renderer/TextFieldGraphics.hx",78,0xf0946200)
		HX_STACK_ARG(textField,"textField")
		HX_STACK_ARG(text,"text")
		HX_STACK_ARG(format,"format")
		HX_STACK_ARG(offsetX,"offsetX")
		HX_STACK_ARG(bounds,"bounds")
		HX_STACK_LINE(80)
		::openfl::text::Font font = ::openfl::_internal::renderer::cairo::CairoTextField_obj::getFontInstance(format);		HX_STACK_VAR(font,"font");
		HX_STACK_LINE(82)
		if (((bool((font != null())) && bool((format->size != null()))))){
			struct _Function_2_1{
				inline static bool Block( ::openfl::text::Font &font){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_internal/renderer/TextFieldGraphics.hx",84,0xf0946200)
					{
						HX_STACK_LINE(84)
						int _g = ::__hxcpp_obj_id(font);		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(84)
						return ::openfl::_internal::renderer::TextFieldGraphics_obj::glyphs->__Internal->exists(_g);
					}
					return null();
				}
			};
			HX_STACK_LINE(84)
			if ((!(_Function_2_1::Block(font)))){
				HX_STACK_LINE(86)
				::haxe::ds::IntMap value = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(86)
				::openfl::_internal::renderer::TextFieldGraphics_obj::glyphs->set(font,value);
			}
			HX_STACK_LINE(90)
			int size = ::Std_obj::_int(format->size);		HX_STACK_VAR(size,"size");
			HX_STACK_LINE(91)
			::haxe::ds::IntMap fontGlyphs = ::openfl::_internal::renderer::TextFieldGraphics_obj::glyphs->get(font);		HX_STACK_VAR(fontGlyphs,"fontGlyphs");
			HX_STACK_LINE(93)
			if ((!(fontGlyphs->exists(size)))){
				HX_STACK_LINE(95)
				Array< int > _g = font->getGlyphs(null());		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(95)
				::haxe::ds::IntMap value = font->renderGlyphs(_g,size);		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(95)
				fontGlyphs->set(size,value);
			}
			HX_STACK_LINE(99)
			::haxe::ds::IntMap images = fontGlyphs->get(size);		HX_STACK_VAR(images,"images");
			struct _Function_2_2{
				inline static bool Block( ::openfl::text::Font &font){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_internal/renderer/TextFieldGraphics.hx",101,0xf0946200)
					{
						HX_STACK_LINE(101)
						int _g = ::__hxcpp_obj_id(font);		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(101)
						return ::openfl::_internal::renderer::TextFieldGraphics_obj::bitmapData->__Internal->exists(_g);
					}
					return null();
				}
			};
			HX_STACK_LINE(101)
			if ((!(_Function_2_2::Block(font)))){
				HX_STACK_LINE(103)
				::haxe::ds::IntMap value = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(103)
				::openfl::_internal::renderer::TextFieldGraphics_obj::bitmapData->set(font,value);
			}
			HX_STACK_LINE(107)
			::haxe::ds::IntMap fontBitmapData = ::openfl::_internal::renderer::TextFieldGraphics_obj::bitmapData->get(font);		HX_STACK_VAR(fontBitmapData,"fontBitmapData");
			HX_STACK_LINE(109)
			if ((!(fontBitmapData->exists(size)))){
				HX_STACK_LINE(111)
				int width;		HX_STACK_VAR(width,"width");
				HX_STACK_LINE(111)
				int height;		HX_STACK_VAR(height,"height");
				HX_STACK_LINE(111)
				::lime::utils::UInt8Array data;		HX_STACK_VAR(data,"data");
				HX_STACK_LINE(113)
				for(::cpp::FastIterator_obj< ::lime::graphics::Image > *__it = ::cpp::CreateFastIterator< ::lime::graphics::Image >(images->iterator());  __it->hasNext(); ){
					::lime::graphics::Image image = __it->next();
					{
						HX_STACK_LINE(115)
						width = image->buffer->width;
						HX_STACK_LINE(116)
						height = image->buffer->height;
						HX_STACK_LINE(117)
						::lime::utils::UInt8Array _g1 = image->get_data();		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(117)
						data = _g1;
						HX_STACK_LINE(118)
						break;
					}
;
				}
				HX_STACK_LINE(122)
				::openfl::display::BitmapData bitmapData = ::openfl::display::BitmapData_obj::__new(width,height,null(),null());		HX_STACK_VAR(bitmapData,"bitmapData");
				HX_STACK_LINE(124)
				{
					HX_STACK_LINE(124)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(124)
					while((true)){
						HX_STACK_LINE(124)
						if ((!(((_g < width))))){
							HX_STACK_LINE(124)
							break;
						}
						HX_STACK_LINE(124)
						int x = (_g)++;		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(126)
						{
							HX_STACK_LINE(126)
							int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(126)
							while((true)){
								HX_STACK_LINE(126)
								if ((!(((_g1 < height))))){
									HX_STACK_LINE(126)
									break;
								}
								HX_STACK_LINE(126)
								int y = (_g1)++;		HX_STACK_VAR(y,"y");
								HX_STACK_LINE(128)
								int alpha = data->__get(((y * width) + x));		HX_STACK_VAR(alpha,"alpha");
								HX_STACK_LINE(129)
								int color = (int((int((int((int(alpha) << int((int)24))) | int((int)16711680))) | int((int)65280))) | int((int)255));		HX_STACK_VAR(color,"color");
								HX_STACK_LINE(130)
								bitmapData->setPixel32(x,y,color);
							}
						}
					}
				}
				HX_STACK_LINE(136)
				fontBitmapData->set(size,bitmapData);
			}
			HX_STACK_LINE(140)
			::openfl::display::BitmapData bitmapData = fontBitmapData->get(size);		HX_STACK_VAR(bitmapData,"bitmapData");
			struct _Function_2_3{
				inline static bool Block( ::openfl::display::BitmapData &bitmapData){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_internal/renderer/TextFieldGraphics.hx",142,0xf0946200)
					{
						HX_STACK_LINE(142)
						int _g = ::__hxcpp_obj_id(bitmapData);		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(142)
						return ::openfl::_internal::renderer::TextFieldGraphics_obj::tilesheets->__Internal->exists(_g);
					}
					return null();
				}
			};
			HX_STACK_LINE(142)
			if ((!(_Function_2_3::Block(bitmapData)))){
				HX_STACK_LINE(144)
				::openfl::display::Tilesheet tilesheet = ::openfl::display::Tilesheet_obj::__new(bitmapData);		HX_STACK_VAR(tilesheet,"tilesheet");
				HX_STACK_LINE(145)
				::haxe::ds::IntMap tileID = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(tileID,"tileID");
				HX_STACK_LINE(147)
				::lime::graphics::Image image;		HX_STACK_VAR(image,"image");
				HX_STACK_LINE(147)
				int index;		HX_STACK_VAR(index,"index");
				HX_STACK_LINE(149)
				for(::cpp::FastIterator_obj< int > *__it = ::cpp::CreateFastIterator< int >(images->keys());  __it->hasNext(); ){
					int key = __it->next();
					{
						HX_STACK_LINE(151)
						::lime::graphics::Image _g2 = images->get(key);		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(151)
						image = _g2;
						HX_STACK_LINE(152)
						::openfl::geom::Rectangle _g3 = ::openfl::geom::Rectangle_obj::__new(image->offsetX,image->offsetY,image->width,image->height);		HX_STACK_VAR(_g3,"_g3");
						HX_STACK_LINE(152)
						int _g4 = tilesheet->addTileRect(_g3,null());		HX_STACK_VAR(_g4,"_g4");
						HX_STACK_LINE(152)
						index = _g4;
						HX_STACK_LINE(154)
						tileID->set(key,index);
					}
;
				}
				HX_STACK_LINE(157)
				::openfl::_internal::renderer::TextFieldGraphics_obj::tileIDs->set(bitmapData,tileID);
				HX_STACK_LINE(158)
				::openfl::_internal::renderer::TextFieldGraphics_obj::tilesheets->set(bitmapData,tilesheet);
			}
			HX_STACK_LINE(162)
			::openfl::display::Tilesheet tilesheet = ::openfl::_internal::renderer::TextFieldGraphics_obj::tilesheets->get(bitmapData);		HX_STACK_VAR(tilesheet,"tilesheet");
			HX_STACK_LINE(163)
			::IMap tileID = ::openfl::_internal::renderer::TextFieldGraphics_obj::tileIDs->get(bitmapData);		HX_STACK_VAR(tileID,"tileID");
			HX_STACK_LINE(165)
			Float r = (Float(((int((int(format->color) >> int((int)16))) & int((int)255)))) / Float((int)255));		HX_STACK_VAR(r,"r");
			HX_STACK_LINE(166)
			Float g = (Float(((int((int(format->color) >> int((int)8))) & int((int)255)))) / Float((int)255));		HX_STACK_VAR(g,"g");
			HX_STACK_LINE(167)
			Float b = (Float(((int(format->color) & int((int)255)))) / Float((int)255));		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(169)
			::openfl::text::TextLineMetrics tlm = textField->getLineMetrics((int)0);		HX_STACK_VAR(tlm,"tlm");
			HX_STACK_LINE(171)
			::lime::graphics::Image image;		HX_STACK_VAR(image,"image");
			HX_STACK_LINE(172)
			Float x = offsetX;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(173)
			Float y = ((int)2 + tlm->ascent);		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(178)
			Array< Float > tileData;		HX_STACK_VAR(tileData,"tileData");
			HX_STACK_LINE(180)
			textField->__tilesheets->set(tilesheet,true);
			struct _Function_2_4{
				inline static bool Block( ::openfl::text::TextField &textField,::openfl::display::Tilesheet &tilesheet){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_internal/renderer/TextFieldGraphics.hx",182,0xf0946200)
					{
						HX_STACK_LINE(182)
						int _g = ::__hxcpp_obj_id(tilesheet);		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(182)
						return textField->__tileData->__Internal->exists(_g);
					}
					return null();
				}
			};
			HX_STACK_LINE(182)
			if ((!(_Function_2_4::Block(textField,tilesheet)))){
				HX_STACK_LINE(184)
				Array< Float > _g5 = Array_obj< Float >::__new();		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(184)
				tileData = _g5;
				HX_STACK_LINE(185)
				textField->__tileData->set(tilesheet,tileData);
				HX_STACK_LINE(186)
				textField->__tileDataLength->set(tilesheet,(int)0);
			}
			HX_STACK_LINE(190)
			Array< Float > _g6 = textField->__tileData->get(tilesheet);		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(190)
			tileData = _g6;
			HX_STACK_LINE(192)
			int offsetY = (int)0;		HX_STACK_VAR(offsetY,"offsetY");
			HX_STACK_LINE(193)
			Array< ::String > lines = text.split(HX_CSTRING("\n"));		HX_STACK_VAR(lines,"lines");
			HX_STACK_LINE(195)
			if (((textField->__textLayout == null()))){
				HX_STACK_LINE(197)
				::lime::text::TextLayout _g7 = ::lime::text::TextLayout_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(197)
				textField->__textLayout = _g7;
			}
			HX_STACK_LINE(201)
			::lime::text::TextLayout textLayout = textField->__textLayout;		HX_STACK_VAR(textLayout,"textLayout");
			HX_STACK_LINE(202)
			int length = (int)0;		HX_STACK_VAR(length,"length");
			HX_STACK_LINE(204)
			int line_i = (int)0;		HX_STACK_VAR(line_i,"line_i");
			HX_STACK_LINE(205)
			Float oldX = x;		HX_STACK_VAR(oldX,"oldX");
			HX_STACK_LINE(207)
			{
				HX_STACK_LINE(207)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(207)
				while((true)){
					HX_STACK_LINE(207)
					if ((!(((_g < lines->length))))){
						HX_STACK_LINE(207)
						break;
					}
					HX_STACK_LINE(207)
					::String line = lines->__get(_g);		HX_STACK_VAR(line,"line");
					HX_STACK_LINE(207)
					++(_g);
					HX_STACK_LINE(209)
					::openfl::text::TextLineMetrics _g8 = textField->getLineMetrics(line_i);		HX_STACK_VAR(_g8,"_g8");
					HX_STACK_LINE(209)
					tlm = _g8;
					HX_STACK_LINE(212)
					x = oldX;
					HX_STACK_LINE(214)
					Float _g9;		HX_STACK_VAR(_g9,"_g9");
					HX_STACK_LINE(214)
					{
						HX_STACK_LINE(214)
						::openfl::text::TextFormatAlign _g1 = format->align;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(214)
						switch( (int)(_g1->__Index())){
							case (int)0: case (int)2: {
								HX_STACK_LINE(216)
								_g9 = (int)0;
							}
							;break;
							case (int)3: {
								HX_STACK_LINE(217)
								_g9 = (Float((((textField->__width - (int)4) - tlm->width))) / Float((int)2));
							}
							;break;
							case (int)1: {
								HX_STACK_LINE(218)
								_g9 = ((textField->__width - (int)4) - tlm->width);
							}
							;break;
						}
					}
					HX_STACK_LINE(214)
					hx::AddEq(x,_g9);
					HX_STACK_LINE(222)
					textLayout->set_text(null());
					HX_STACK_LINE(223)
					textLayout->set_font(font);
					HX_STACK_LINE(224)
					textLayout->set_size(size);
					HX_STACK_LINE(225)
					textLayout->set_text(line);
					HX_STACK_LINE(227)
					{
						HX_STACK_LINE(227)
						int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(227)
						Array< ::Dynamic > _g2 = textLayout->get_positions();		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(227)
						while((true)){
							HX_STACK_LINE(227)
							if ((!(((_g1 < _g2->length))))){
								HX_STACK_LINE(227)
								break;
							}
							HX_STACK_LINE(227)
							::lime::text::GlyphPosition position = _g2->__get(_g1).StaticCast< ::lime::text::GlyphPosition >();		HX_STACK_VAR(position,"position");
							HX_STACK_LINE(227)
							++(_g1);
							HX_STACK_LINE(229)
							::lime::graphics::Image _g10 = images->get(position->glyph);		HX_STACK_VAR(_g10,"_g10");
							HX_STACK_LINE(229)
							image = _g10;
							HX_STACK_LINE(231)
							if (((image != null()))){
								HX_STACK_LINE(233)
								if (((length >= tileData->length))){
									HX_STACK_LINE(235)
									tileData->push(((x + position->offset->x) + image->x));
									HX_STACK_LINE(236)
									tileData->push(((y + position->offset->y) - image->y));
									HX_STACK_LINE(237)
									Dynamic _g11 = tileID->get(position->glyph);		HX_STACK_VAR(_g11,"_g11");
									HX_STACK_LINE(237)
									tileData->push(_g11);
									HX_STACK_LINE(238)
									tileData->push(r);
									HX_STACK_LINE(239)
									tileData->push(g);
									HX_STACK_LINE(240)
									tileData->push(b);
								}
								else{
									HX_STACK_LINE(244)
									tileData[length] = ((x + position->offset->x) + image->x);
									HX_STACK_LINE(245)
									tileData[(length + (int)1)] = ((y + position->offset->y) - image->y);
									HX_STACK_LINE(246)
									tileData[(length + (int)2)] = tileID->get(position->glyph);
									HX_STACK_LINE(247)
									tileData[(length + (int)3)] = r;
									HX_STACK_LINE(248)
									tileData[(length + (int)4)] = g;
									HX_STACK_LINE(249)
									tileData[(length + (int)5)] = b;
								}
								HX_STACK_LINE(253)
								hx::AddEq(length,(int)6);
							}
							HX_STACK_LINE(257)
							hx::AddEq(x,position->advance->x);
							HX_STACK_LINE(258)
							hx::SubEq(y,position->advance->y);
						}
					}
					HX_STACK_LINE(262)
					hx::AddEq(y,tlm->height);
					HX_STACK_LINE(263)
					(line_i)++;
				}
			}
			HX_STACK_LINE(267)
			textField->__tileDataLength->set(tilesheet,length);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(TextFieldGraphics_obj,renderText,(void))

bool TextFieldGraphics_obj::update( ::openfl::text::TextField textField,::openfl::geom::Rectangle bounds){
	HX_STACK_FRAME("openfl._internal.renderer.TextFieldGraphics","update",0x2886637a,"openfl._internal.renderer.TextFieldGraphics.update","openfl/_internal/renderer/TextFieldGraphics.hx",274,0xf0946200)
	HX_STACK_ARG(textField,"textField")
	HX_STACK_ARG(bounds,"bounds")
	HX_STACK_LINE(276)
	if ((textField->__dirty)){
		struct _Function_2_1{
			inline static bool Block( ::openfl::text::TextField &textField){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_internal/renderer/TextFieldGraphics.hx",278,0xf0946200)
				{
					HX_STACK_LINE(278)
					Float _g = textField->get_width();		HX_STACK_VAR(_g,"_g");
					struct _Function_3_1{
						inline static bool Block( ::openfl::text::TextField &textField){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_internal/renderer/TextFieldGraphics.hx",278,0xf0946200)
							{
								HX_STACK_LINE(278)
								Float _g1 = textField->get_height();		HX_STACK_VAR(_g1,"_g1");
								HX_STACK_LINE(278)
								return (_g1 <= (int)0);
							}
							return null();
						}
					};
					HX_STACK_LINE(278)
					return (  (((  ((!(((_g <= (int)0))))) ? bool(_Function_3_1::Block(textField)) : bool(true) ))) ? bool((textField->autoSize != ::openfl::text::TextFieldAutoSize_obj::LEFT)) : bool(false) );
				}
				return null();
			}
		};
		HX_STACK_LINE(278)
		if (((  ((!(((bool((bool(((bool((textField->__text == null())) || bool((textField->__text == HX_CSTRING("")))))) && bool(!(textField->background)))) && bool(!(textField->border))))))) ? bool(_Function_2_1::Block(textField)) : bool(true) ))){
			HX_STACK_LINE(280)
			textField->__tilesheets = null();
			HX_STACK_LINE(281)
			textField->__tileData = null();
			HX_STACK_LINE(282)
			textField->__tileDataLength = null();
			HX_STACK_LINE(283)
			textField->__dirty = false;
		}
		else{
			HX_STACK_LINE(287)
			::haxe::ds::ObjectMap _g2 = ::haxe::ds::ObjectMap_obj::__new();		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(287)
			textField->__tilesheets = _g2;
			HX_STACK_LINE(289)
			if (((textField->__tileData == null()))){
				HX_STACK_LINE(291)
				::haxe::ds::ObjectMap _g3 = ::haxe::ds::ObjectMap_obj::__new();		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(291)
				textField->__tileData = _g3;
				HX_STACK_LINE(292)
				::haxe::ds::ObjectMap _g4 = ::haxe::ds::ObjectMap_obj::__new();		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(292)
				textField->__tileDataLength = _g4;
			}
			HX_STACK_LINE(296)
			if (((bool((textField->__text != null())) && bool((textField->__text != HX_CSTRING("")))))){
				HX_STACK_LINE(298)
				::String text = textField->get_text();		HX_STACK_VAR(text,"text");
				HX_STACK_LINE(300)
				if ((textField->displayAsPassword)){
					HX_STACK_LINE(302)
					int length = text.length;		HX_STACK_VAR(length,"length");
					HX_STACK_LINE(303)
					::String mask = HX_CSTRING("");		HX_STACK_VAR(mask,"mask");
					HX_STACK_LINE(305)
					{
						HX_STACK_LINE(305)
						int _g = (int)0;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(305)
						while((true)){
							HX_STACK_LINE(305)
							if ((!(((_g < length))))){
								HX_STACK_LINE(305)
								break;
							}
							HX_STACK_LINE(305)
							int i = (_g)++;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(307)
							hx::AddEq(mask,HX_CSTRING("*"));
						}
					}
					HX_STACK_LINE(311)
					text = mask;
				}
				HX_STACK_LINE(315)
				Array< Float > measurements = ::openfl::_internal::renderer::cairo::CairoTextField_obj::measureText(textField,null());		HX_STACK_VAR(measurements,"measurements");
				HX_STACK_LINE(317)
				if (((textField->__ranges == null()))){
					HX_STACK_LINE(319)
					::openfl::text::TextFormat format = textField->__textFormat;		HX_STACK_VAR(format,"format");
					HX_STACK_LINE(319)
					::openfl::text::Font font = ::openfl::_internal::renderer::cairo::CairoTextField_obj::getFontInstance(format);		HX_STACK_VAR(font,"font");
					HX_STACK_LINE(319)
					if (((bool((font != null())) && bool((format->size != null()))))){
						struct _Function_6_1{
							inline static bool Block( ::openfl::text::Font &font){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_internal/renderer/TextFieldGraphics.hx",319,0xf0946200)
								{
									HX_STACK_LINE(319)
									int _g = ::__hxcpp_obj_id(font);		HX_STACK_VAR(_g,"_g");
									HX_STACK_LINE(319)
									return ::openfl::_internal::renderer::TextFieldGraphics_obj::glyphs->__Internal->exists(_g);
								}
								return null();
							}
						};
						HX_STACK_LINE(319)
						if ((!(_Function_6_1::Block(font)))){
							HX_STACK_LINE(319)
							::haxe::ds::IntMap value = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(value,"value");
							HX_STACK_LINE(319)
							::openfl::_internal::renderer::TextFieldGraphics_obj::glyphs->set(font,value);
						}
						HX_STACK_LINE(319)
						int size = ::Std_obj::_int(format->size);		HX_STACK_VAR(size,"size");
						HX_STACK_LINE(319)
						::haxe::ds::IntMap fontGlyphs = ::openfl::_internal::renderer::TextFieldGraphics_obj::glyphs->get(font);		HX_STACK_VAR(fontGlyphs,"fontGlyphs");
						HX_STACK_LINE(319)
						if ((!(fontGlyphs->exists(size)))){
							HX_STACK_LINE(319)
							Array< int > _g5 = font->getGlyphs(null());		HX_STACK_VAR(_g5,"_g5");
							HX_STACK_LINE(319)
							::haxe::ds::IntMap value = font->renderGlyphs(_g5,size);		HX_STACK_VAR(value,"value");
							HX_STACK_LINE(319)
							fontGlyphs->set(size,value);
						}
						HX_STACK_LINE(319)
						::haxe::ds::IntMap images = fontGlyphs->get(size);		HX_STACK_VAR(images,"images");
						struct _Function_6_2{
							inline static bool Block( ::openfl::text::Font &font){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_internal/renderer/TextFieldGraphics.hx",319,0xf0946200)
								{
									HX_STACK_LINE(319)
									int _g = ::__hxcpp_obj_id(font);		HX_STACK_VAR(_g,"_g");
									HX_STACK_LINE(319)
									return ::openfl::_internal::renderer::TextFieldGraphics_obj::bitmapData->__Internal->exists(_g);
								}
								return null();
							}
						};
						HX_STACK_LINE(319)
						if ((!(_Function_6_2::Block(font)))){
							HX_STACK_LINE(319)
							::haxe::ds::IntMap value = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(value,"value");
							HX_STACK_LINE(319)
							::openfl::_internal::renderer::TextFieldGraphics_obj::bitmapData->set(font,value);
						}
						HX_STACK_LINE(319)
						::haxe::ds::IntMap fontBitmapData = ::openfl::_internal::renderer::TextFieldGraphics_obj::bitmapData->get(font);		HX_STACK_VAR(fontBitmapData,"fontBitmapData");
						HX_STACK_LINE(319)
						if ((!(fontBitmapData->exists(size)))){
							HX_STACK_LINE(319)
							int width;		HX_STACK_VAR(width,"width");
							HX_STACK_LINE(319)
							int height;		HX_STACK_VAR(height,"height");
							HX_STACK_LINE(319)
							::lime::utils::UInt8Array data;		HX_STACK_VAR(data,"data");
							HX_STACK_LINE(319)
							for(::cpp::FastIterator_obj< ::lime::graphics::Image > *__it = ::cpp::CreateFastIterator< ::lime::graphics::Image >(images->iterator());  __it->hasNext(); ){
								::lime::graphics::Image image = __it->next();
								{
									HX_STACK_LINE(319)
									width = image->buffer->width;
									HX_STACK_LINE(319)
									height = image->buffer->height;
									HX_STACK_LINE(319)
									::lime::utils::UInt8Array _g6 = image->get_data();		HX_STACK_VAR(_g6,"_g6");
									HX_STACK_LINE(319)
									data = _g6;
									HX_STACK_LINE(319)
									break;
								}
;
							}
							HX_STACK_LINE(319)
							::openfl::display::BitmapData bitmapData = ::openfl::display::BitmapData_obj::__new(width,height,null(),null());		HX_STACK_VAR(bitmapData,"bitmapData");
							HX_STACK_LINE(319)
							{
								HX_STACK_LINE(319)
								int _g = (int)0;		HX_STACK_VAR(_g,"_g");
								HX_STACK_LINE(319)
								while((true)){
									HX_STACK_LINE(319)
									if ((!(((_g < width))))){
										HX_STACK_LINE(319)
										break;
									}
									HX_STACK_LINE(319)
									int x = (_g)++;		HX_STACK_VAR(x,"x");
									HX_STACK_LINE(319)
									{
										HX_STACK_LINE(319)
										int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
										HX_STACK_LINE(319)
										while((true)){
											HX_STACK_LINE(319)
											if ((!(((_g1 < height))))){
												HX_STACK_LINE(319)
												break;
											}
											HX_STACK_LINE(319)
											int y = (_g1)++;		HX_STACK_VAR(y,"y");
											HX_STACK_LINE(319)
											int alpha = data->__get(((y * width) + x));		HX_STACK_VAR(alpha,"alpha");
											HX_STACK_LINE(319)
											int color = (int((int((int((int(alpha) << int((int)24))) | int((int)16711680))) | int((int)65280))) | int((int)255));		HX_STACK_VAR(color,"color");
											HX_STACK_LINE(319)
											bitmapData->setPixel32(x,y,color);
										}
									}
								}
							}
							HX_STACK_LINE(319)
							fontBitmapData->set(size,bitmapData);
						}
						HX_STACK_LINE(319)
						::openfl::display::BitmapData bitmapData = fontBitmapData->get(size);		HX_STACK_VAR(bitmapData,"bitmapData");
						struct _Function_6_3{
							inline static bool Block( ::openfl::display::BitmapData &bitmapData){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_internal/renderer/TextFieldGraphics.hx",319,0xf0946200)
								{
									HX_STACK_LINE(319)
									int _g = ::__hxcpp_obj_id(bitmapData);		HX_STACK_VAR(_g,"_g");
									HX_STACK_LINE(319)
									return ::openfl::_internal::renderer::TextFieldGraphics_obj::tilesheets->__Internal->exists(_g);
								}
								return null();
							}
						};
						HX_STACK_LINE(319)
						if ((!(_Function_6_3::Block(bitmapData)))){
							HX_STACK_LINE(319)
							::openfl::display::Tilesheet tilesheet = ::openfl::display::Tilesheet_obj::__new(bitmapData);		HX_STACK_VAR(tilesheet,"tilesheet");
							HX_STACK_LINE(319)
							::haxe::ds::IntMap tileID = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(tileID,"tileID");
							HX_STACK_LINE(319)
							::lime::graphics::Image image;		HX_STACK_VAR(image,"image");
							HX_STACK_LINE(319)
							int index;		HX_STACK_VAR(index,"index");
							HX_STACK_LINE(319)
							for(::cpp::FastIterator_obj< int > *__it = ::cpp::CreateFastIterator< int >(images->keys());  __it->hasNext(); ){
								int key = __it->next();
								{
									HX_STACK_LINE(319)
									::lime::graphics::Image _g7 = images->get(key);		HX_STACK_VAR(_g7,"_g7");
									HX_STACK_LINE(319)
									image = _g7;
									HX_STACK_LINE(319)
									::openfl::geom::Rectangle _g8 = ::openfl::geom::Rectangle_obj::__new(image->offsetX,image->offsetY,image->width,image->height);		HX_STACK_VAR(_g8,"_g8");
									HX_STACK_LINE(319)
									int _g9 = tilesheet->addTileRect(_g8,null());		HX_STACK_VAR(_g9,"_g9");
									HX_STACK_LINE(319)
									index = _g9;
									HX_STACK_LINE(319)
									tileID->set(key,index);
								}
;
							}
							HX_STACK_LINE(319)
							::openfl::_internal::renderer::TextFieldGraphics_obj::tileIDs->set(bitmapData,tileID);
							HX_STACK_LINE(319)
							::openfl::_internal::renderer::TextFieldGraphics_obj::tilesheets->set(bitmapData,tilesheet);
						}
						HX_STACK_LINE(319)
						::openfl::display::Tilesheet tilesheet = ::openfl::_internal::renderer::TextFieldGraphics_obj::tilesheets->get(bitmapData);		HX_STACK_VAR(tilesheet,"tilesheet");
						HX_STACK_LINE(319)
						::IMap tileID = ::openfl::_internal::renderer::TextFieldGraphics_obj::tileIDs->get(bitmapData);		HX_STACK_VAR(tileID,"tileID");
						HX_STACK_LINE(319)
						Float r = (Float(((int((int(format->color) >> int((int)16))) & int((int)255)))) / Float((int)255));		HX_STACK_VAR(r,"r");
						HX_STACK_LINE(319)
						Float g = (Float(((int((int(format->color) >> int((int)8))) & int((int)255)))) / Float((int)255));		HX_STACK_VAR(g,"g");
						HX_STACK_LINE(319)
						Float b = (Float(((int(format->color) & int((int)255)))) / Float((int)255));		HX_STACK_VAR(b,"b");
						HX_STACK_LINE(319)
						::openfl::text::TextLineMetrics tlm = textField->getLineMetrics((int)0);		HX_STACK_VAR(tlm,"tlm");
						HX_STACK_LINE(319)
						::lime::graphics::Image image;		HX_STACK_VAR(image,"image");
						HX_STACK_LINE(319)
						Float x = (int)2;		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(319)
						Float y = ((int)2 + tlm->ascent);		HX_STACK_VAR(y,"y");
						HX_STACK_LINE(319)
						Array< Float > tileData;		HX_STACK_VAR(tileData,"tileData");
						HX_STACK_LINE(319)
						textField->__tilesheets->set(tilesheet,true);
						struct _Function_6_4{
							inline static bool Block( ::openfl::text::TextField &textField,::openfl::display::Tilesheet &tilesheet){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_internal/renderer/TextFieldGraphics.hx",319,0xf0946200)
								{
									HX_STACK_LINE(319)
									int _g = ::__hxcpp_obj_id(tilesheet);		HX_STACK_VAR(_g,"_g");
									HX_STACK_LINE(319)
									return textField->__tileData->__Internal->exists(_g);
								}
								return null();
							}
						};
						HX_STACK_LINE(319)
						if ((!(_Function_6_4::Block(textField,tilesheet)))){
							HX_STACK_LINE(319)
							Array< Float > _g10 = Array_obj< Float >::__new();		HX_STACK_VAR(_g10,"_g10");
							HX_STACK_LINE(319)
							tileData = _g10;
							HX_STACK_LINE(319)
							textField->__tileData->set(tilesheet,tileData);
							HX_STACK_LINE(319)
							textField->__tileDataLength->set(tilesheet,(int)0);
						}
						HX_STACK_LINE(319)
						Array< Float > _g11 = textField->__tileData->get(tilesheet);		HX_STACK_VAR(_g11,"_g11");
						HX_STACK_LINE(319)
						tileData = _g11;
						HX_STACK_LINE(319)
						int offsetY = (int)0;		HX_STACK_VAR(offsetY,"offsetY");
						HX_STACK_LINE(319)
						Array< ::String > lines = text.split(HX_CSTRING("\n"));		HX_STACK_VAR(lines,"lines");
						HX_STACK_LINE(319)
						if (((textField->__textLayout == null()))){
							HX_STACK_LINE(319)
							::lime::text::TextLayout _g12 = ::lime::text::TextLayout_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(_g12,"_g12");
							HX_STACK_LINE(319)
							textField->__textLayout = _g12;
						}
						HX_STACK_LINE(319)
						::lime::text::TextLayout textLayout = textField->__textLayout;		HX_STACK_VAR(textLayout,"textLayout");
						HX_STACK_LINE(319)
						int length = (int)0;		HX_STACK_VAR(length,"length");
						HX_STACK_LINE(319)
						int line_i = (int)0;		HX_STACK_VAR(line_i,"line_i");
						HX_STACK_LINE(319)
						Float oldX = x;		HX_STACK_VAR(oldX,"oldX");
						HX_STACK_LINE(319)
						{
							HX_STACK_LINE(319)
							int _g = (int)0;		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(319)
							while((true)){
								HX_STACK_LINE(319)
								if ((!(((_g < lines->length))))){
									HX_STACK_LINE(319)
									break;
								}
								HX_STACK_LINE(319)
								::String line = lines->__get(_g);		HX_STACK_VAR(line,"line");
								HX_STACK_LINE(319)
								++(_g);
								HX_STACK_LINE(319)
								::openfl::text::TextLineMetrics _g13 = textField->getLineMetrics(line_i);		HX_STACK_VAR(_g13,"_g13");
								HX_STACK_LINE(319)
								tlm = _g13;
								HX_STACK_LINE(319)
								x = oldX;
								HX_STACK_LINE(319)
								Float _g14;		HX_STACK_VAR(_g14,"_g14");
								HX_STACK_LINE(319)
								{
									HX_STACK_LINE(319)
									::openfl::text::TextFormatAlign _g1 = format->align;		HX_STACK_VAR(_g1,"_g1");
									HX_STACK_LINE(319)
									switch( (int)(_g1->__Index())){
										case (int)0: case (int)2: {
											HX_STACK_LINE(319)
											_g14 = (int)0;
										}
										;break;
										case (int)3: {
											HX_STACK_LINE(319)
											_g14 = (Float((((textField->__width - (int)4) - tlm->width))) / Float((int)2));
										}
										;break;
										case (int)1: {
											HX_STACK_LINE(319)
											_g14 = ((textField->__width - (int)4) - tlm->width);
										}
										;break;
									}
								}
								HX_STACK_LINE(319)
								hx::AddEq(x,_g14);
								HX_STACK_LINE(319)
								textLayout->set_text(null());
								HX_STACK_LINE(319)
								textLayout->set_font(font);
								HX_STACK_LINE(319)
								textLayout->set_size(size);
								HX_STACK_LINE(319)
								textLayout->set_text(line);
								HX_STACK_LINE(319)
								{
									HX_STACK_LINE(319)
									int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
									HX_STACK_LINE(319)
									Array< ::Dynamic > _g21 = textLayout->get_positions();		HX_STACK_VAR(_g21,"_g21");
									HX_STACK_LINE(319)
									while((true)){
										HX_STACK_LINE(319)
										if ((!(((_g1 < _g21->length))))){
											HX_STACK_LINE(319)
											break;
										}
										HX_STACK_LINE(319)
										::lime::text::GlyphPosition position = _g21->__get(_g1).StaticCast< ::lime::text::GlyphPosition >();		HX_STACK_VAR(position,"position");
										HX_STACK_LINE(319)
										++(_g1);
										HX_STACK_LINE(319)
										::lime::graphics::Image _g15 = images->get(position->glyph);		HX_STACK_VAR(_g15,"_g15");
										HX_STACK_LINE(319)
										image = _g15;
										HX_STACK_LINE(319)
										if (((image != null()))){
											HX_STACK_LINE(319)
											if (((length >= tileData->length))){
												HX_STACK_LINE(319)
												tileData->push(((x + position->offset->x) + image->x));
												HX_STACK_LINE(319)
												tileData->push(((y + position->offset->y) - image->y));
												HX_STACK_LINE(319)
												Dynamic _g16 = tileID->get(position->glyph);		HX_STACK_VAR(_g16,"_g16");
												HX_STACK_LINE(319)
												tileData->push(_g16);
												HX_STACK_LINE(319)
												tileData->push(r);
												HX_STACK_LINE(319)
												tileData->push(g);
												HX_STACK_LINE(319)
												tileData->push(b);
											}
											else{
												HX_STACK_LINE(319)
												tileData[length] = ((x + position->offset->x) + image->x);
												HX_STACK_LINE(319)
												tileData[(length + (int)1)] = ((y + position->offset->y) - image->y);
												HX_STACK_LINE(319)
												tileData[(length + (int)2)] = tileID->get(position->glyph);
												HX_STACK_LINE(319)
												tileData[(length + (int)3)] = r;
												HX_STACK_LINE(319)
												tileData[(length + (int)4)] = g;
												HX_STACK_LINE(319)
												tileData[(length + (int)5)] = b;
											}
											HX_STACK_LINE(319)
											hx::AddEq(length,(int)6);
										}
										HX_STACK_LINE(319)
										hx::AddEq(x,position->advance->x);
										HX_STACK_LINE(319)
										hx::SubEq(y,position->advance->y);
									}
								}
								HX_STACK_LINE(319)
								hx::AddEq(y,tlm->height);
								HX_STACK_LINE(319)
								(line_i)++;
							}
						}
						HX_STACK_LINE(319)
						textField->__tileDataLength->set(tilesheet,length);
					}
				}
				else{
					HX_STACK_LINE(323)
					int currentIndex = (int)0;		HX_STACK_VAR(currentIndex,"currentIndex");
					HX_STACK_LINE(324)
					::openfl::text::TextFormatRange range;		HX_STACK_VAR(range,"range");
					HX_STACK_LINE(325)
					Float offsetX = 2.0;		HX_STACK_VAR(offsetX,"offsetX");
					HX_STACK_LINE(327)
					{
						HX_STACK_LINE(327)
						int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(327)
						int _g = textField->__ranges->length;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(327)
						while((true)){
							HX_STACK_LINE(327)
							if ((!(((_g1 < _g))))){
								HX_STACK_LINE(327)
								break;
							}
							HX_STACK_LINE(327)
							int i = (_g1)++;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(329)
							range = textField->__ranges->__get(i).StaticCast< ::openfl::text::TextFormatRange >();
							HX_STACK_LINE(331)
							{
								HX_STACK_LINE(331)
								::String text1 = text.substring(range->start,range->end);		HX_STACK_VAR(text1,"text1");
								HX_STACK_LINE(331)
								::openfl::text::TextFormat format = range->format;		HX_STACK_VAR(format,"format");
								HX_STACK_LINE(331)
								::openfl::text::Font font = ::openfl::_internal::renderer::cairo::CairoTextField_obj::getFontInstance(format);		HX_STACK_VAR(font,"font");
								HX_STACK_LINE(331)
								if (((bool((font != null())) && bool((format->size != null()))))){
									struct _Function_9_1{
										inline static bool Block( ::openfl::text::Font &font){
											HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_internal/renderer/TextFieldGraphics.hx",331,0xf0946200)
											{
												HX_STACK_LINE(331)
												int _g3 = ::__hxcpp_obj_id(font);		HX_STACK_VAR(_g3,"_g3");
												HX_STACK_LINE(331)
												return ::openfl::_internal::renderer::TextFieldGraphics_obj::glyphs->__Internal->exists(_g3);
											}
											return null();
										}
									};
									HX_STACK_LINE(331)
									if ((!(_Function_9_1::Block(font)))){
										HX_STACK_LINE(331)
										::haxe::ds::IntMap value = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(value,"value");
										HX_STACK_LINE(331)
										::openfl::_internal::renderer::TextFieldGraphics_obj::glyphs->set(font,value);
									}
									HX_STACK_LINE(331)
									int size = ::Std_obj::_int(format->size);		HX_STACK_VAR(size,"size");
									HX_STACK_LINE(331)
									::haxe::ds::IntMap fontGlyphs = ::openfl::_internal::renderer::TextFieldGraphics_obj::glyphs->get(font);		HX_STACK_VAR(fontGlyphs,"fontGlyphs");
									HX_STACK_LINE(331)
									if ((!(fontGlyphs->exists(size)))){
										HX_STACK_LINE(331)
										Array< int > _g17 = font->getGlyphs(null());		HX_STACK_VAR(_g17,"_g17");
										HX_STACK_LINE(331)
										::haxe::ds::IntMap value = font->renderGlyphs(_g17,size);		HX_STACK_VAR(value,"value");
										HX_STACK_LINE(331)
										fontGlyphs->set(size,value);
									}
									HX_STACK_LINE(331)
									::haxe::ds::IntMap images = fontGlyphs->get(size);		HX_STACK_VAR(images,"images");
									struct _Function_9_2{
										inline static bool Block( ::openfl::text::Font &font){
											HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_internal/renderer/TextFieldGraphics.hx",331,0xf0946200)
											{
												HX_STACK_LINE(331)
												int _g3 = ::__hxcpp_obj_id(font);		HX_STACK_VAR(_g3,"_g3");
												HX_STACK_LINE(331)
												return ::openfl::_internal::renderer::TextFieldGraphics_obj::bitmapData->__Internal->exists(_g3);
											}
											return null();
										}
									};
									HX_STACK_LINE(331)
									if ((!(_Function_9_2::Block(font)))){
										HX_STACK_LINE(331)
										::haxe::ds::IntMap value = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(value,"value");
										HX_STACK_LINE(331)
										::openfl::_internal::renderer::TextFieldGraphics_obj::bitmapData->set(font,value);
									}
									HX_STACK_LINE(331)
									::haxe::ds::IntMap fontBitmapData = ::openfl::_internal::renderer::TextFieldGraphics_obj::bitmapData->get(font);		HX_STACK_VAR(fontBitmapData,"fontBitmapData");
									HX_STACK_LINE(331)
									if ((!(fontBitmapData->exists(size)))){
										HX_STACK_LINE(331)
										int width;		HX_STACK_VAR(width,"width");
										HX_STACK_LINE(331)
										int height;		HX_STACK_VAR(height,"height");
										HX_STACK_LINE(331)
										::lime::utils::UInt8Array data;		HX_STACK_VAR(data,"data");
										HX_STACK_LINE(331)
										for(::cpp::FastIterator_obj< ::lime::graphics::Image > *__it = ::cpp::CreateFastIterator< ::lime::graphics::Image >(images->iterator());  __it->hasNext(); ){
											::lime::graphics::Image image = __it->next();
											{
												HX_STACK_LINE(331)
												width = image->buffer->width;
												HX_STACK_LINE(331)
												height = image->buffer->height;
												HX_STACK_LINE(331)
												::lime::utils::UInt8Array _g18 = image->get_data();		HX_STACK_VAR(_g18,"_g18");
												HX_STACK_LINE(331)
												data = _g18;
												HX_STACK_LINE(331)
												break;
											}
;
										}
										HX_STACK_LINE(331)
										::openfl::display::BitmapData bitmapData = ::openfl::display::BitmapData_obj::__new(width,height,null(),null());		HX_STACK_VAR(bitmapData,"bitmapData");
										HX_STACK_LINE(331)
										{
											HX_STACK_LINE(331)
											int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
											HX_STACK_LINE(331)
											while((true)){
												HX_STACK_LINE(331)
												if ((!(((_g3 < width))))){
													HX_STACK_LINE(331)
													break;
												}
												HX_STACK_LINE(331)
												int x = (_g3)++;		HX_STACK_VAR(x,"x");
												HX_STACK_LINE(331)
												{
													HX_STACK_LINE(331)
													int _g11 = (int)0;		HX_STACK_VAR(_g11,"_g11");
													HX_STACK_LINE(331)
													while((true)){
														HX_STACK_LINE(331)
														if ((!(((_g11 < height))))){
															HX_STACK_LINE(331)
															break;
														}
														HX_STACK_LINE(331)
														int y = (_g11)++;		HX_STACK_VAR(y,"y");
														HX_STACK_LINE(331)
														int alpha = data->__get(((y * width) + x));		HX_STACK_VAR(alpha,"alpha");
														HX_STACK_LINE(331)
														int color = (int((int((int((int(alpha) << int((int)24))) | int((int)16711680))) | int((int)65280))) | int((int)255));		HX_STACK_VAR(color,"color");
														HX_STACK_LINE(331)
														bitmapData->setPixel32(x,y,color);
													}
												}
											}
										}
										HX_STACK_LINE(331)
										fontBitmapData->set(size,bitmapData);
									}
									HX_STACK_LINE(331)
									::openfl::display::BitmapData bitmapData = fontBitmapData->get(size);		HX_STACK_VAR(bitmapData,"bitmapData");
									struct _Function_9_3{
										inline static bool Block( ::openfl::display::BitmapData &bitmapData){
											HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_internal/renderer/TextFieldGraphics.hx",331,0xf0946200)
											{
												HX_STACK_LINE(331)
												int _g3 = ::__hxcpp_obj_id(bitmapData);		HX_STACK_VAR(_g3,"_g3");
												HX_STACK_LINE(331)
												return ::openfl::_internal::renderer::TextFieldGraphics_obj::tilesheets->__Internal->exists(_g3);
											}
											return null();
										}
									};
									HX_STACK_LINE(331)
									if ((!(_Function_9_3::Block(bitmapData)))){
										HX_STACK_LINE(331)
										::openfl::display::Tilesheet tilesheet = ::openfl::display::Tilesheet_obj::__new(bitmapData);		HX_STACK_VAR(tilesheet,"tilesheet");
										HX_STACK_LINE(331)
										::haxe::ds::IntMap tileID = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(tileID,"tileID");
										HX_STACK_LINE(331)
										::lime::graphics::Image image;		HX_STACK_VAR(image,"image");
										HX_STACK_LINE(331)
										int index;		HX_STACK_VAR(index,"index");
										HX_STACK_LINE(331)
										for(::cpp::FastIterator_obj< int > *__it = ::cpp::CreateFastIterator< int >(images->keys());  __it->hasNext(); ){
											int key = __it->next();
											{
												HX_STACK_LINE(331)
												::lime::graphics::Image _g19 = images->get(key);		HX_STACK_VAR(_g19,"_g19");
												HX_STACK_LINE(331)
												image = _g19;
												HX_STACK_LINE(331)
												::openfl::geom::Rectangle _g20 = ::openfl::geom::Rectangle_obj::__new(image->offsetX,image->offsetY,image->width,image->height);		HX_STACK_VAR(_g20,"_g20");
												HX_STACK_LINE(331)
												int _g21 = tilesheet->addTileRect(_g20,null());		HX_STACK_VAR(_g21,"_g21");
												HX_STACK_LINE(331)
												index = _g21;
												HX_STACK_LINE(331)
												tileID->set(key,index);
											}
;
										}
										HX_STACK_LINE(331)
										::openfl::_internal::renderer::TextFieldGraphics_obj::tileIDs->set(bitmapData,tileID);
										HX_STACK_LINE(331)
										::openfl::_internal::renderer::TextFieldGraphics_obj::tilesheets->set(bitmapData,tilesheet);
									}
									HX_STACK_LINE(331)
									::openfl::display::Tilesheet tilesheet = ::openfl::_internal::renderer::TextFieldGraphics_obj::tilesheets->get(bitmapData);		HX_STACK_VAR(tilesheet,"tilesheet");
									HX_STACK_LINE(331)
									::IMap tileID = ::openfl::_internal::renderer::TextFieldGraphics_obj::tileIDs->get(bitmapData);		HX_STACK_VAR(tileID,"tileID");
									HX_STACK_LINE(331)
									Float r = (Float(((int((int(format->color) >> int((int)16))) & int((int)255)))) / Float((int)255));		HX_STACK_VAR(r,"r");
									HX_STACK_LINE(331)
									Float g = (Float(((int((int(format->color) >> int((int)8))) & int((int)255)))) / Float((int)255));		HX_STACK_VAR(g,"g");
									HX_STACK_LINE(331)
									Float b = (Float(((int(format->color) & int((int)255)))) / Float((int)255));		HX_STACK_VAR(b,"b");
									HX_STACK_LINE(331)
									::openfl::text::TextLineMetrics tlm = textField->getLineMetrics((int)0);		HX_STACK_VAR(tlm,"tlm");
									HX_STACK_LINE(331)
									::lime::graphics::Image image;		HX_STACK_VAR(image,"image");
									HX_STACK_LINE(331)
									Float x = offsetX;		HX_STACK_VAR(x,"x");
									HX_STACK_LINE(331)
									Float y = ((int)2 + tlm->ascent);		HX_STACK_VAR(y,"y");
									HX_STACK_LINE(331)
									Array< Float > tileData;		HX_STACK_VAR(tileData,"tileData");
									HX_STACK_LINE(331)
									textField->__tilesheets->set(tilesheet,true);
									struct _Function_9_4{
										inline static bool Block( ::openfl::text::TextField &textField,::openfl::display::Tilesheet &tilesheet){
											HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_internal/renderer/TextFieldGraphics.hx",331,0xf0946200)
											{
												HX_STACK_LINE(331)
												int _g3 = ::__hxcpp_obj_id(tilesheet);		HX_STACK_VAR(_g3,"_g3");
												HX_STACK_LINE(331)
												return textField->__tileData->__Internal->exists(_g3);
											}
											return null();
										}
									};
									HX_STACK_LINE(331)
									if ((!(_Function_9_4::Block(textField,tilesheet)))){
										HX_STACK_LINE(331)
										Array< Float > _g22 = Array_obj< Float >::__new();		HX_STACK_VAR(_g22,"_g22");
										HX_STACK_LINE(331)
										tileData = _g22;
										HX_STACK_LINE(331)
										textField->__tileData->set(tilesheet,tileData);
										HX_STACK_LINE(331)
										textField->__tileDataLength->set(tilesheet,(int)0);
									}
									HX_STACK_LINE(331)
									Array< Float > _g23 = textField->__tileData->get(tilesheet);		HX_STACK_VAR(_g23,"_g23");
									HX_STACK_LINE(331)
									tileData = _g23;
									HX_STACK_LINE(331)
									int offsetY = (int)0;		HX_STACK_VAR(offsetY,"offsetY");
									HX_STACK_LINE(331)
									Array< ::String > lines = text1.split(HX_CSTRING("\n"));		HX_STACK_VAR(lines,"lines");
									HX_STACK_LINE(331)
									if (((textField->__textLayout == null()))){
										HX_STACK_LINE(331)
										::lime::text::TextLayout _g24 = ::lime::text::TextLayout_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(_g24,"_g24");
										HX_STACK_LINE(331)
										textField->__textLayout = _g24;
									}
									HX_STACK_LINE(331)
									::lime::text::TextLayout textLayout = textField->__textLayout;		HX_STACK_VAR(textLayout,"textLayout");
									HX_STACK_LINE(331)
									int length = (int)0;		HX_STACK_VAR(length,"length");
									HX_STACK_LINE(331)
									int line_i = (int)0;		HX_STACK_VAR(line_i,"line_i");
									HX_STACK_LINE(331)
									Float oldX = x;		HX_STACK_VAR(oldX,"oldX");
									HX_STACK_LINE(331)
									{
										HX_STACK_LINE(331)
										int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
										HX_STACK_LINE(331)
										while((true)){
											HX_STACK_LINE(331)
											if ((!(((_g3 < lines->length))))){
												HX_STACK_LINE(331)
												break;
											}
											HX_STACK_LINE(331)
											::String line = lines->__get(_g3);		HX_STACK_VAR(line,"line");
											HX_STACK_LINE(331)
											++(_g3);
											HX_STACK_LINE(331)
											::openfl::text::TextLineMetrics _g25 = textField->getLineMetrics(line_i);		HX_STACK_VAR(_g25,"_g25");
											HX_STACK_LINE(331)
											tlm = _g25;
											HX_STACK_LINE(331)
											x = oldX;
											HX_STACK_LINE(331)
											Float _g26;		HX_STACK_VAR(_g26,"_g26");
											HX_STACK_LINE(331)
											{
												HX_STACK_LINE(331)
												::openfl::text::TextFormatAlign _g11 = format->align;		HX_STACK_VAR(_g11,"_g11");
												HX_STACK_LINE(331)
												switch( (int)(_g11->__Index())){
													case (int)0: case (int)2: {
														HX_STACK_LINE(331)
														_g26 = (int)0;
													}
													;break;
													case (int)3: {
														HX_STACK_LINE(331)
														_g26 = (Float((((textField->__width - (int)4) - tlm->width))) / Float((int)2));
													}
													;break;
													case (int)1: {
														HX_STACK_LINE(331)
														_g26 = ((textField->__width - (int)4) - tlm->width);
													}
													;break;
												}
											}
											HX_STACK_LINE(331)
											hx::AddEq(x,_g26);
											HX_STACK_LINE(331)
											textLayout->set_text(null());
											HX_STACK_LINE(331)
											textLayout->set_font(font);
											HX_STACK_LINE(331)
											textLayout->set_size(size);
											HX_STACK_LINE(331)
											textLayout->set_text(line);
											HX_STACK_LINE(331)
											{
												HX_STACK_LINE(331)
												int _g11 = (int)0;		HX_STACK_VAR(_g11,"_g11");
												HX_STACK_LINE(331)
												Array< ::Dynamic > _g21 = textLayout->get_positions();		HX_STACK_VAR(_g21,"_g21");
												HX_STACK_LINE(331)
												while((true)){
													HX_STACK_LINE(331)
													if ((!(((_g11 < _g21->length))))){
														HX_STACK_LINE(331)
														break;
													}
													HX_STACK_LINE(331)
													::lime::text::GlyphPosition position = _g21->__get(_g11).StaticCast< ::lime::text::GlyphPosition >();		HX_STACK_VAR(position,"position");
													HX_STACK_LINE(331)
													++(_g11);
													HX_STACK_LINE(331)
													::lime::graphics::Image _g27 = images->get(position->glyph);		HX_STACK_VAR(_g27,"_g27");
													HX_STACK_LINE(331)
													image = _g27;
													HX_STACK_LINE(331)
													if (((image != null()))){
														HX_STACK_LINE(331)
														if (((length >= tileData->length))){
															HX_STACK_LINE(331)
															tileData->push(((x + position->offset->x) + image->x));
															HX_STACK_LINE(331)
															tileData->push(((y + position->offset->y) - image->y));
															HX_STACK_LINE(331)
															Dynamic _g28 = tileID->get(position->glyph);		HX_STACK_VAR(_g28,"_g28");
															HX_STACK_LINE(331)
															tileData->push(_g28);
															HX_STACK_LINE(331)
															tileData->push(r);
															HX_STACK_LINE(331)
															tileData->push(g);
															HX_STACK_LINE(331)
															tileData->push(b);
														}
														else{
															HX_STACK_LINE(331)
															tileData[length] = ((x + position->offset->x) + image->x);
															HX_STACK_LINE(331)
															tileData[(length + (int)1)] = ((y + position->offset->y) - image->y);
															HX_STACK_LINE(331)
															tileData[(length + (int)2)] = tileID->get(position->glyph);
															HX_STACK_LINE(331)
															tileData[(length + (int)3)] = r;
															HX_STACK_LINE(331)
															tileData[(length + (int)4)] = g;
															HX_STACK_LINE(331)
															tileData[(length + (int)5)] = b;
														}
														HX_STACK_LINE(331)
														hx::AddEq(length,(int)6);
													}
													HX_STACK_LINE(331)
													hx::AddEq(x,position->advance->x);
													HX_STACK_LINE(331)
													hx::SubEq(y,position->advance->y);
												}
											}
											HX_STACK_LINE(331)
											hx::AddEq(y,tlm->height);
											HX_STACK_LINE(331)
											(line_i)++;
										}
									}
									HX_STACK_LINE(331)
									textField->__tileDataLength->set(tilesheet,length);
								}
							}
							HX_STACK_LINE(332)
							hx::AddEq(offsetX,measurements->__get(i));
						}
					}
				}
			}
			struct _Function_3_1{
				inline static bool Block( ::openfl::text::TextField &textField,::openfl::display::Tilesheet &key){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_internal/renderer/TextFieldGraphics.hx",342,0xf0946200)
					{
						HX_STACK_LINE(342)
						int _g = ::__hxcpp_obj_id(key);		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(342)
						return textField->__tilesheets->__Internal->exists(_g);
					}
					return null();
				}
			};
			HX_STACK_LINE(340)
			for(::cpp::FastIterator_obj< ::openfl::display::Tilesheet > *__it = ::cpp::CreateFastIterator< ::openfl::display::Tilesheet >(textField->__tileData->keys());  __it->hasNext(); ){
				::openfl::display::Tilesheet key = __it->next();
				if ((!(_Function_3_1::Block(textField,key)))){
					HX_STACK_LINE(344)
					textField->__tileData->remove(key);
					HX_STACK_LINE(345)
					textField->__tileDataLength->remove(key);
				}
;
			}
			HX_STACK_LINE(351)
			textField->__dirty = false;
			HX_STACK_LINE(352)
			return true;
		}
	}
	HX_STACK_LINE(358)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(TextFieldGraphics_obj,update,return )


TextFieldGraphics_obj::TextFieldGraphics_obj()
{
}

Dynamic TextFieldGraphics_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"glyphs") ) { return glyphs; }
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"tileIDs") ) { return tileIDs; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bitmapData") ) { return bitmapData; }
		if (HX_FIELD_EQ(inName,"tilesheets") ) { return tilesheets; }
		if (HX_FIELD_EQ(inName,"renderText") ) { return renderText_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TextFieldGraphics_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"glyphs") ) { glyphs=inValue.Cast< ::haxe::ds::ObjectMap >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"tileIDs") ) { tileIDs=inValue.Cast< ::haxe::ds::ObjectMap >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bitmapData") ) { bitmapData=inValue.Cast< ::haxe::ds::ObjectMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tilesheets") ) { tilesheets=inValue.Cast< ::haxe::ds::ObjectMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TextFieldGraphics_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("bitmapData"),
	HX_CSTRING("glyphs"),
	HX_CSTRING("tilesheets"),
	HX_CSTRING("tileIDs"),
	HX_CSTRING("render"),
	HX_CSTRING("renderText"),
	HX_CSTRING("update"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TextFieldGraphics_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(TextFieldGraphics_obj::bitmapData,"bitmapData");
	HX_MARK_MEMBER_NAME(TextFieldGraphics_obj::glyphs,"glyphs");
	HX_MARK_MEMBER_NAME(TextFieldGraphics_obj::tilesheets,"tilesheets");
	HX_MARK_MEMBER_NAME(TextFieldGraphics_obj::tileIDs,"tileIDs");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TextFieldGraphics_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(TextFieldGraphics_obj::bitmapData,"bitmapData");
	HX_VISIT_MEMBER_NAME(TextFieldGraphics_obj::glyphs,"glyphs");
	HX_VISIT_MEMBER_NAME(TextFieldGraphics_obj::tilesheets,"tilesheets");
	HX_VISIT_MEMBER_NAME(TextFieldGraphics_obj::tileIDs,"tileIDs");
};

#endif

Class TextFieldGraphics_obj::__mClass;

void TextFieldGraphics_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl._internal.renderer.TextFieldGraphics"), hx::TCanCast< TextFieldGraphics_obj> ,sStaticFields,sMemberFields,
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

void TextFieldGraphics_obj::__boot()
{
	bitmapData= ::haxe::ds::ObjectMap_obj::__new();
	glyphs= ::haxe::ds::ObjectMap_obj::__new();
	tilesheets= ::haxe::ds::ObjectMap_obj::__new();
	tileIDs= ::haxe::ds::ObjectMap_obj::__new();
}

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
