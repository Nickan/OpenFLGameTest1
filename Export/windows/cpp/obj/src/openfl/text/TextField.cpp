#include <hxcpp.h>

#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_Timer
#include <haxe/Timer.h>
#endif
#ifndef INCLUDED_haxe_ds_ObjectMap
#include <haxe/ds/ObjectMap.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo_CairoFont
#include <lime/graphics/cairo/CairoFont.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLObject
#include <lime/graphics/opengl/GLObject.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLTexture
#include <lime/graphics/opengl/GLTexture.h>
#endif
#ifndef INCLUDED_lime_text_TextLayout
#include <lime/text/TextLayout.h>
#endif
#ifndef INCLUDED_lime_ui_MouseCursor
#include <lime/ui/MouseCursor.h>
#endif
#ifndef INCLUDED_openfl_Lib
#include <openfl/Lib.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_AbstractRenderer
#include <openfl/_internal/renderer/AbstractRenderer.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_RenderSession
#include <openfl/_internal/renderer/RenderSession.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_cairo_CairoTextField
#include <openfl/_internal/renderer/cairo/CairoTextField.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_canvas_CanvasTextField
#include <openfl/_internal/renderer/canvas/CanvasTextField.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_GLRenderer
#include <openfl/_internal/renderer/opengl/GLRenderer.h>
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
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
#ifndef INCLUDED_openfl_text_AntiAliasType
#include <openfl/text/AntiAliasType.h>
#endif
#ifndef INCLUDED_openfl_text_GridFitType
#include <openfl/text/GridFitType.h>
#endif
#ifndef INCLUDED_openfl_text_TextField
#include <openfl/text/TextField.h>
#endif
#ifndef INCLUDED_openfl_text_TextFieldAutoSize
#include <openfl/text/TextFieldAutoSize.h>
#endif
#ifndef INCLUDED_openfl_text_TextFieldType
#include <openfl/text/TextFieldType.h>
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
namespace text{

Void TextField_obj::__construct()
{
HX_STACK_FRAME("openfl.text.TextField","new",0xbd7676bc,"openfl.text.TextField.new","openfl/text/TextField.hx",603,0xccf02094)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(605)
	super::__construct();
	HX_STACK_LINE(607)
	this->__width = (int)100;
	HX_STACK_LINE(608)
	this->__height = (int)100;
	HX_STACK_LINE(609)
	this->__text = HX_CSTRING("");
	HX_STACK_LINE(610)
	this->__dirtyBounds = true;
	HX_STACK_LINE(611)
	::openfl::geom::Rectangle _g = ::openfl::geom::Rectangle_obj::__new((int)0,(int)0,(int)0,(int)0);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(611)
	this->__bounds = _g;
	HX_STACK_LINE(612)
	::openfl::display::Graphics _g1 = ::openfl::display::Graphics_obj::__new();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(612)
	this->__graphics = _g1;
	HX_STACK_LINE(614)
	this->set_type(::openfl::text::TextFieldType_obj::DYNAMIC);
	HX_STACK_LINE(615)
	this->set_autoSize(::openfl::text::TextFieldAutoSize_obj::NONE);
	HX_STACK_LINE(616)
	this->displayAsPassword = false;
	HX_STACK_LINE(617)
	this->embedFonts = false;
	HX_STACK_LINE(618)
	this->set_selectable(true);
	HX_STACK_LINE(619)
	this->set_borderColor((int)0);
	HX_STACK_LINE(620)
	this->set_border(false);
	HX_STACK_LINE(621)
	this->set_backgroundColor((int)16777215);
	HX_STACK_LINE(622)
	this->set_background(false);
	HX_STACK_LINE(623)
	this->gridFitType = ::openfl::text::GridFitType_obj::PIXEL;
	HX_STACK_LINE(624)
	this->maxChars = (int)0;
	HX_STACK_LINE(625)
	this->multiline = false;
	HX_STACK_LINE(626)
	this->sharpness = (int)0;
	HX_STACK_LINE(627)
	this->scrollH = (int)0;
	HX_STACK_LINE(628)
	this->scrollV = (int)1;
	HX_STACK_LINE(629)
	this->set_wordWrap(false);
	HX_STACK_LINE(631)
	if (((::openfl::text::TextField_obj::__defaultTextFormat == null()))){
		HX_STACK_LINE(633)
		::openfl::text::TextFormat _g2 = ::openfl::text::TextFormat_obj::__new(HX_CSTRING("Times New Roman"),(int)12,(int)0,false,false,false,HX_CSTRING(""),HX_CSTRING(""),::openfl::text::TextFormatAlign_obj::LEFT,(int)0,(int)0,(int)0,(int)0);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(633)
		::openfl::text::TextField_obj::__defaultTextFormat = _g2;
		HX_STACK_LINE(634)
		::openfl::text::TextField_obj::__defaultTextFormat->blockIndent = (int)0;
		HX_STACK_LINE(635)
		::openfl::text::TextField_obj::__defaultTextFormat->bullet = false;
		HX_STACK_LINE(636)
		::openfl::text::TextField_obj::__defaultTextFormat->letterSpacing = (int)0;
		HX_STACK_LINE(637)
		::openfl::text::TextField_obj::__defaultTextFormat->kerning = false;
	}
	HX_STACK_LINE(641)
	::openfl::text::TextFormat _g3 = ::openfl::text::TextField_obj::__defaultTextFormat->clone();		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(641)
	this->__textFormat = _g3;
}
;
	return null();
}

//TextField_obj::~TextField_obj() { }

Dynamic TextField_obj::__CreateEmpty() { return  new TextField_obj; }
hx::ObjectPtr< TextField_obj > TextField_obj::__new()
{  hx::ObjectPtr< TextField_obj > result = new TextField_obj();
	result->__construct();
	return result;}

Dynamic TextField_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TextField_obj > result = new TextField_obj();
	result->__construct();
	return result;}

Void TextField_obj::appendText( ::String text){
{
		HX_STACK_FRAME("openfl.text.TextField","appendText",0xaa44eccb,"openfl.text.TextField.appendText","openfl/text/TextField.hx",657,0xccf02094)
		HX_STACK_THIS(this)
		HX_STACK_ARG(text,"text")
		HX_STACK_LINE(657)
		::openfl::text::TextField _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(657)
		::String _g1 = _g->get_text();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(657)
		::String _g11 = (_g1 + text);		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(657)
		_g->set_text(_g11);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,appendText,(void))

::openfl::geom::Rectangle TextField_obj::getCharBoundaries( int a){
	HX_STACK_FRAME("openfl.text.TextField","getCharBoundaries",0xf44814d0,"openfl.text.TextField.getCharBoundaries","openfl/text/TextField.hx",671,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_ARG(a,"a")
	HX_STACK_LINE(673)
	::openfl::Lib_obj::notImplemented(HX_CSTRING("TextField.getCharBoundaries"));
	HX_STACK_LINE(675)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,getCharBoundaries,return )

int TextField_obj::getCharIndexAtPoint( Float x,Float y){
	HX_STACK_FRAME("openfl.text.TextField","getCharIndexAtPoint",0x758b0c73,"openfl.text.TextField.getCharIndexAtPoint","openfl/text/TextField.hx",690,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_LINE(692)
	::openfl::Lib_obj::notImplemented(HX_CSTRING("TextField.getCharIndexAtPoint"));
	HX_STACK_LINE(694)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC2(TextField_obj,getCharIndexAtPoint,return )

int TextField_obj::getLineIndexAtPoint( Float x,Float y){
	HX_STACK_FRAME("openfl.text.TextField","getLineIndexAtPoint",0x633efa91,"openfl.text.TextField.getLineIndexAtPoint","openfl/text/TextField.hx",709,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_LINE(711)
	::openfl::Lib_obj::notImplemented(HX_CSTRING("TextField.getLineIndexAtPoint"));
	HX_STACK_LINE(713)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC2(TextField_obj,getLineIndexAtPoint,return )

::openfl::text::TextLineMetrics TextField_obj::getLineMetrics( int lineIndex){
	HX_STACK_FRAME("openfl.text.TextField","getLineMetrics",0xa6c52add,"openfl.text.TextField.getLineMetrics","openfl/text/TextField.hx",725,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_ARG(lineIndex,"lineIndex")
	HX_STACK_LINE(737)
	Float lineWidth = ::openfl::_internal::renderer::cairo::CairoTextField_obj::getLineWidth(hx::ObjectPtr<OBJ_>(this),lineIndex);		HX_STACK_VAR(lineWidth,"lineWidth");
	HX_STACK_LINE(738)
	Float ascender = ::openfl::_internal::renderer::cairo::CairoTextField_obj::getLineMetric(hx::ObjectPtr<OBJ_>(this),lineIndex,(int)0);		HX_STACK_VAR(ascender,"ascender");
	HX_STACK_LINE(739)
	Float descender = ::openfl::_internal::renderer::cairo::CairoTextField_obj::getLineMetric(hx::ObjectPtr<OBJ_>(this),lineIndex,(int)1);		HX_STACK_VAR(descender,"descender");
	HX_STACK_LINE(740)
	Float leading = ::openfl::_internal::renderer::cairo::CairoTextField_obj::getLineMetric(hx::ObjectPtr<OBJ_>(this),lineIndex,(int)3);		HX_STACK_VAR(leading,"leading");
	HX_STACK_LINE(741)
	Float lineHeight = ((ascender + descender) + leading);		HX_STACK_VAR(lineHeight,"lineHeight");
	HX_STACK_LINE(745)
	Float margin;		HX_STACK_VAR(margin,"margin");
	HX_STACK_LINE(745)
	{
		HX_STACK_LINE(745)
		::openfl::text::TextFormatAlign _g = this->__textFormat->align;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(745)
		switch( (int)(_g->__Index())){
			case (int)0: case (int)2: {
				HX_STACK_LINE(747)
				margin = (int)2;
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(748)
				Float _g1 = this->get_width();		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(748)
				Float _g11 = (_g1 - lineWidth);		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(748)
				margin = (_g11 - (int)2);
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(749)
				Float _g2 = this->get_width();		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(749)
				Float _g3 = (_g2 - lineWidth);		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(749)
				margin = (Float(_g3) / Float((int)2));
			}
			;break;
		}
	}
	HX_STACK_LINE(753)
	return ::openfl::text::TextLineMetrics_obj::__new(margin,lineWidth,lineHeight,ascender,descender,leading);
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,getLineMetrics,return )

int TextField_obj::getLineOffset( int lineIndex){
	HX_STACK_FRAME("openfl.text.TextField","getLineOffset",0x5676a039,"openfl.text.TextField.getLineOffset","openfl/text/TextField.hx",767,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_ARG(lineIndex,"lineIndex")
	HX_STACK_LINE(769)
	::openfl::Lib_obj::notImplemented(HX_CSTRING("TextField.getLineOffset"));
	HX_STACK_LINE(771)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,getLineOffset,return )

::String TextField_obj::getLineText( int lineIndex){
	HX_STACK_FRAME("openfl.text.TextField","getLineText",0xb8113fd3,"openfl.text.TextField.getLineText","openfl/text/TextField.hx",785,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_ARG(lineIndex,"lineIndex")
	HX_STACK_LINE(787)
	::openfl::Lib_obj::notImplemented(HX_CSTRING("TextField.getLineText"));
	HX_STACK_LINE(789)
	return HX_CSTRING("");
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,getLineText,return )

::openfl::text::TextFormat TextField_obj::getTextFormat( hx::Null< int >  __o_beginIndex,hx::Null< int >  __o_endIndex){
int beginIndex = __o_beginIndex.Default(0);
int endIndex = __o_endIndex.Default(0);
	HX_STACK_FRAME("openfl.text.TextField","getTextFormat",0x560e1d56,"openfl.text.TextField.getTextFormat","openfl/text/TextField.hx",814,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_ARG(beginIndex,"beginIndex")
	HX_STACK_ARG(endIndex,"endIndex")
{
		HX_STACK_LINE(814)
		return this->__textFormat->clone();
	}
}


HX_DEFINE_DYNAMIC_FUNC2(TextField_obj,getTextFormat,return )

Void TextField_obj::setSelection( int beginIndex,int endIndex){
{
		HX_STACK_FRAME("openfl.text.TextField","setSelection",0xa586666e,"openfl.text.TextField.setSelection","openfl/text/TextField.hx",834,0xccf02094)
		HX_STACK_THIS(this)
		HX_STACK_ARG(beginIndex,"beginIndex")
		HX_STACK_ARG(endIndex,"endIndex")
		HX_STACK_LINE(834)
		::openfl::Lib_obj::notImplemented(HX_CSTRING("TextField.setSelection"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(TextField_obj,setSelection,(void))

Void TextField_obj::setTextFormat( ::openfl::text::TextFormat format,hx::Null< int >  __o_beginIndex,hx::Null< int >  __o_endIndex){
int beginIndex = __o_beginIndex.Default(0);
int endIndex = __o_endIndex.Default(0);
	HX_STACK_FRAME("openfl.text.TextField","setTextFormat",0x9b13ff62,"openfl.text.TextField.setTextFormat","openfl/text/TextField.hx",884,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_ARG(format,"format")
	HX_STACK_ARG(beginIndex,"beginIndex")
	HX_STACK_ARG(endIndex,"endIndex")
{
		HX_STACK_LINE(886)
		if (((format->font != null()))){
			HX_STACK_LINE(886)
			this->__textFormat->font = format->font;
		}
		HX_STACK_LINE(887)
		if (((format->size != null()))){
			HX_STACK_LINE(887)
			this->__textFormat->size = format->size;
		}
		HX_STACK_LINE(888)
		if (((format->color != null()))){
			HX_STACK_LINE(888)
			this->__textFormat->color = format->color;
		}
		HX_STACK_LINE(889)
		if (((format->bold != null()))){
			HX_STACK_LINE(889)
			this->__textFormat->bold = format->bold;
		}
		HX_STACK_LINE(890)
		if (((format->italic != null()))){
			HX_STACK_LINE(890)
			this->__textFormat->italic = format->italic;
		}
		HX_STACK_LINE(891)
		if (((format->underline != null()))){
			HX_STACK_LINE(891)
			this->__textFormat->underline = format->underline;
		}
		HX_STACK_LINE(892)
		if (((format->url != null()))){
			HX_STACK_LINE(892)
			this->__textFormat->url = format->url;
		}
		HX_STACK_LINE(893)
		if (((format->target != null()))){
			HX_STACK_LINE(893)
			this->__textFormat->target = format->target;
		}
		HX_STACK_LINE(894)
		if (((format->align != null()))){
			HX_STACK_LINE(894)
			this->__textFormat->align = format->align;
		}
		HX_STACK_LINE(895)
		if (((format->leftMargin != null()))){
			HX_STACK_LINE(895)
			this->__textFormat->leftMargin = format->leftMargin;
		}
		HX_STACK_LINE(896)
		if (((format->rightMargin != null()))){
			HX_STACK_LINE(896)
			this->__textFormat->rightMargin = format->rightMargin;
		}
		HX_STACK_LINE(897)
		if (((format->indent != null()))){
			HX_STACK_LINE(897)
			this->__textFormat->indent = format->indent;
		}
		HX_STACK_LINE(898)
		if (((format->leading != null()))){
			HX_STACK_LINE(898)
			this->__textFormat->leading = format->leading;
		}
		HX_STACK_LINE(899)
		if (((format->blockIndent != null()))){
			HX_STACK_LINE(899)
			this->__textFormat->blockIndent = format->blockIndent;
		}
		HX_STACK_LINE(900)
		if (((format->bullet != null()))){
			HX_STACK_LINE(900)
			this->__textFormat->bullet = format->bullet;
		}
		HX_STACK_LINE(901)
		if (((format->kerning != null()))){
			HX_STACK_LINE(901)
			this->__textFormat->kerning = format->kerning;
		}
		HX_STACK_LINE(902)
		if (((format->letterSpacing != null()))){
			HX_STACK_LINE(902)
			this->__textFormat->letterSpacing = format->letterSpacing;
		}
		HX_STACK_LINE(903)
		if (((format->tabStops != null()))){
			HX_STACK_LINE(903)
			this->__textFormat->tabStops = format->tabStops;
		}
		HX_STACK_LINE(905)
		this->__dirty = true;
		HX_STACK_LINE(906)
		this->__dirtyBounds = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(TextField_obj,setTextFormat,(void))

Void TextField_obj::__getBounds( ::openfl::geom::Rectangle rect,::openfl::geom::Matrix matrix){
{
		HX_STACK_FRAME("openfl.text.TextField","__getBounds",0x189abae7,"openfl.text.TextField.__getBounds","openfl/text/TextField.hx",912,0xccf02094)
		HX_STACK_THIS(this)
		HX_STACK_ARG(rect,"rect")
		HX_STACK_ARG(matrix,"matrix")
		HX_STACK_LINE(914)
		::openfl::geom::Rectangle bounds = this->get_bounds()->transform(matrix);		HX_STACK_VAR(bounds,"bounds");
		HX_STACK_LINE(915)
		rect->__expand(bounds->x,bounds->y,bounds->width,bounds->height);
	}
return null();
}


::lime::ui::MouseCursor TextField_obj::__getCursor( ){
	HX_STACK_FRAME("openfl.text.TextField","__getCursor",0xf165c348,"openfl.text.TextField.__getCursor","openfl/text/TextField.hx",922,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_LINE(922)
	if (((bool((this->type == ::openfl::text::TextFieldType_obj::INPUT)) && bool(this->selectable)))){
		HX_STACK_LINE(922)
		return ::lime::ui::MouseCursor_obj::TEXT;
	}
	else{
		HX_STACK_LINE(922)
		return null();
	}
	HX_STACK_LINE(922)
	return null();
}


int TextField_obj::__getPosition( Float x,Float y){
	HX_STACK_FRAME("openfl.text.TextField","__getPosition",0xfe83559b,"openfl.text.TextField.__getPosition","openfl/text/TextField.hx",927,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_LINE(929)
	if (((x <= (int)2))){
		HX_STACK_LINE(929)
		return (int)0;
	}
	HX_STACK_LINE(931)
	::String value = this->get_text();		HX_STACK_VAR(value,"value");
	HX_STACK_LINE(932)
	::String text = value;		HX_STACK_VAR(text,"text");
	HX_STACK_LINE(933)
	Float totalW = (int)2;		HX_STACK_VAR(totalW,"totalW");
	HX_STACK_LINE(934)
	int pos = text.length;		HX_STACK_VAR(pos,"pos");
	HX_STACK_LINE(939)
	Float _g = ::openfl::_internal::renderer::cairo::CairoTextField_obj::getTextWidth(hx::ObjectPtr<OBJ_>(this),text);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(939)
	Float _g1 = (_g + (int)2);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(939)
	if (((x < _g1))){
		HX_STACK_LINE(942)
		int _g11 = (int)0;		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(942)
		int _g2 = text.length;		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(942)
		while((true)){
			HX_STACK_LINE(942)
			if ((!(((_g11 < _g2))))){
				HX_STACK_LINE(942)
				break;
			}
			HX_STACK_LINE(942)
			int i = (_g11)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(947)
			::String _g21 = text.charAt(i);		HX_STACK_VAR(_g21,"_g21");
			HX_STACK_LINE(947)
			Float _g3 = ::openfl::_internal::renderer::cairo::CairoTextField_obj::getTextWidth(hx::ObjectPtr<OBJ_>(this),_g21);		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(947)
			hx::AddEq(totalW,_g3);
			HX_STACK_LINE(950)
			if (((totalW >= x))){
				HX_STACK_LINE(952)
				pos = i;
				HX_STACK_LINE(953)
				break;
			}
		}
	}
	HX_STACK_LINE(961)
	return pos;
}


HX_DEFINE_DYNAMIC_FUNC2(TextField_obj,__getPosition,return )

bool TextField_obj::__hitTest( Float x,Float y,bool shapeFlag,Array< ::Dynamic > stack,bool interactiveOnly){
	HX_STACK_FRAME("openfl.text.TextField","__hitTest",0x83278481,"openfl.text.TextField.__hitTest","openfl/text/TextField.hx",966,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(shapeFlag,"shapeFlag")
	HX_STACK_ARG(stack,"stack")
	HX_STACK_ARG(interactiveOnly,"interactiveOnly")
	HX_STACK_LINE(968)
	if (((  ((!((!(this->get_visible()))))) ? bool((bool(interactiveOnly) && bool(!(this->mouseEnabled)))) : bool(true) ))){
		HX_STACK_LINE(968)
		return false;
	}
	HX_STACK_LINE(970)
	::openfl::geom::Point _g = ::openfl::geom::Point_obj::__new(x,y);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(970)
	::openfl::geom::Point point = this->globalToLocal(_g);		HX_STACK_VAR(point,"point");
	HX_STACK_LINE(972)
	if ((this->get_bounds()->containsPoint(point))){
		HX_STACK_LINE(974)
		if (((stack != null()))){
			HX_STACK_LINE(976)
			stack->push(hx::ObjectPtr<OBJ_>(this));
		}
		HX_STACK_LINE(980)
		return true;
	}
	HX_STACK_LINE(984)
	return false;
}


Void TextField_obj::__renderCairo( ::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl.text.TextField","__renderCairo",0x1a5f4f8e,"openfl.text.TextField.__renderCairo","openfl/text/TextField.hx",989,0xccf02094)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(991)
		::openfl::_internal::renderer::cairo::CairoTextField_obj::render(hx::ObjectPtr<OBJ_>(this),renderSession);
		HX_STACK_LINE(992)
		this->super::__renderCairo(renderSession);
	}
return null();
}


Void TextField_obj::__renderCanvas( ::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl.text.TextField","__renderCanvas",0xfc575b12,"openfl.text.TextField.__renderCanvas","openfl/text/TextField.hx",1000,0xccf02094)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(1000)
		this->super::__renderCanvas(renderSession);
	}
return null();
}


Void TextField_obj::__renderDOM( ::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl.text.TextField","__renderDOM",0x037e5808,"openfl.text.TextField.__renderDOM","openfl/text/TextField.hx",1007,0xccf02094)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(1007)
		Dynamic();
	}
return null();
}


Void TextField_obj::__renderGL( ::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl.text.TextField","__renderGL",0xa5533b3f,"openfl.text.TextField.__renderGL","openfl/text/TextField.hx",1012,0xccf02094)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(1017)
		::openfl::_internal::renderer::cairo::CairoTextField_obj::render(hx::ObjectPtr<OBJ_>(this),renderSession);
		HX_STACK_LINE(1022)
		::openfl::_internal::renderer::opengl::GLRenderer_obj::renderBitmap(hx::ObjectPtr<OBJ_>(this),renderSession);
	}
return null();
}


Void TextField_obj::__startCursorTimer( ){
{
		HX_STACK_FRAME("openfl.text.TextField","__startCursorTimer",0xacba2811,"openfl.text.TextField.__startCursorTimer","openfl/text/TextField.hx",1033,0xccf02094)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1035)
		::haxe::Timer _g = ::haxe::Timer_obj::delay(this->__startCursorTimer_dyn(),(int)500);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1035)
		this->__cursorTimer = _g;
		HX_STACK_LINE(1036)
		this->__showCursor = !(this->__showCursor);
		HX_STACK_LINE(1037)
		this->__dirty = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,__startCursorTimer,(void))

Void TextField_obj::__stopCursorTimer( ){
{
		HX_STACK_FRAME("openfl.text.TextField","__stopCursorTimer",0x8f135c69,"openfl.text.TextField.__stopCursorTimer","openfl/text/TextField.hx",1044,0xccf02094)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1044)
		if (((this->__cursorTimer != null()))){
			HX_STACK_LINE(1046)
			this->__cursorTimer->stop();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,__stopCursorTimer,(void))

::openfl::text::TextFieldAutoSize TextField_obj::set_autoSize( ::openfl::text::TextFieldAutoSize value){
	HX_STACK_FRAME("openfl.text.TextField","set_autoSize",0xeca81571,"openfl.text.TextField.set_autoSize","openfl/text/TextField.hx",1266,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1268)
	if (((value != this->autoSize))){
		HX_STACK_LINE(1270)
		this->__dirty = true;
		HX_STACK_LINE(1271)
		this->__dirtyBounds = true;
	}
	HX_STACK_LINE(1275)
	return this->autoSize = value;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_autoSize,return )

bool TextField_obj::set_background( bool value){
	HX_STACK_FRAME("openfl.text.TextField","set_background",0x703183cf,"openfl.text.TextField.set_background","openfl/text/TextField.hx",1280,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1282)
	if (((value != this->background))){
		HX_STACK_LINE(1284)
		this->__dirty = true;
	}
	HX_STACK_LINE(1288)
	return this->background = value;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_background,return )

int TextField_obj::set_backgroundColor( int value){
	HX_STACK_FRAME("openfl.text.TextField","set_backgroundColor",0x9fdd2f14,"openfl.text.TextField.set_backgroundColor","openfl/text/TextField.hx",1293,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1295)
	if (((value != this->backgroundColor))){
		HX_STACK_LINE(1295)
		this->__dirty = true;
	}
	HX_STACK_LINE(1296)
	return this->backgroundColor = value;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_backgroundColor,return )

bool TextField_obj::set_border( bool value){
	HX_STACK_FRAME("openfl.text.TextField","set_border",0xa75e784d,"openfl.text.TextField.set_border","openfl/text/TextField.hx",1301,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1303)
	if (((value != this->border))){
		HX_STACK_LINE(1305)
		this->__dirty = true;
		HX_STACK_LINE(1306)
		this->__dirtyBounds = true;
	}
	HX_STACK_LINE(1310)
	return this->border = value;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_border,return )

int TextField_obj::set_borderColor( int value){
	HX_STACK_FRAME("openfl.text.TextField","set_borderColor",0x5e3331d6,"openfl.text.TextField.set_borderColor","openfl/text/TextField.hx",1315,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1317)
	if (((value != this->borderColor))){
		HX_STACK_LINE(1317)
		this->__dirty = true;
	}
	HX_STACK_LINE(1318)
	return this->borderColor = value;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_borderColor,return )

int TextField_obj::get_bottomScrollV( ){
	HX_STACK_FRAME("openfl.text.TextField","get_bottomScrollV",0xfa9e92b1,"openfl.text.TextField.get_bottomScrollV","openfl/text/TextField.hx",1327,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1327)
	return this->get_numLines();
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_bottomScrollV,return )

::openfl::geom::Rectangle TextField_obj::get_bounds( ){
	HX_STACK_FRAME("openfl.text.TextField","get_bounds",0xa5e41362,"openfl.text.TextField.get_bounds","openfl/text/TextField.hx",1331,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1333)
	if ((!(this->__dirtyBounds))){
		HX_STACK_LINE(1335)
		return this->__bounds;
	}
	HX_STACK_LINE(1339)
	if (((this->autoSize != ::openfl::text::TextFieldAutoSize_obj::NONE))){
		HX_STACK_LINE(1341)
		Float _g = this->get_textWidth();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1341)
		Float _g1 = (_g + (int)4);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(1341)
		Float _g2;		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(1341)
		_g2 = (_g1 + ((  ((this->border)) ? int((int)1) : int((int)0) )));
		HX_STACK_LINE(1341)
		this->__bounds->width = _g2;
		HX_STACK_LINE(1342)
		Float _g3 = this->get_textHeight();		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(1342)
		Float _g4 = (_g3 + (int)4);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(1342)
		Float _g5;		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(1342)
		_g5 = (_g4 + ((  ((this->border)) ? int((int)1) : int((int)0) )));
		HX_STACK_LINE(1342)
		this->__bounds->height = _g5;
	}
	else{
		HX_STACK_LINE(1346)
		this->__bounds->width = this->__width;
		HX_STACK_LINE(1347)
		this->__bounds->height = this->__height;
	}
	HX_STACK_LINE(1351)
	this->__dirtyBounds = false;
	HX_STACK_LINE(1353)
	return this->__bounds;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_bounds,return )

int TextField_obj::get_caretPos( ){
	HX_STACK_FRAME("openfl.text.TextField","get_caretPos",0x916b11fe,"openfl.text.TextField.get_caretPos","openfl/text/TextField.hx",1360,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1360)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_caretPos,return )

::openfl::text::TextFormat TextField_obj::get_defaultTextFormat( ){
	HX_STACK_FRAME("openfl.text.TextField","get_defaultTextFormat",0x83063818,"openfl.text.TextField.get_defaultTextFormat","openfl/text/TextField.hx",1367,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1367)
	return this->__textFormat->clone();
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_defaultTextFormat,return )

::openfl::text::TextFormat TextField_obj::set_defaultTextFormat( ::openfl::text::TextFormat value){
	HX_STACK_FRAME("openfl.text.TextField","set_defaultTextFormat",0xd70f0624,"openfl.text.TextField.set_defaultTextFormat","openfl/text/TextField.hx",1372,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1375)
	this->__textFormat->__merge(value);
	HX_STACK_LINE(1376)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_defaultTextFormat,return )

Float TextField_obj::get_height( ){
	HX_STACK_FRAME("openfl.text.TextField","get_height",0x421294d4,"openfl.text.TextField.get_height","openfl/text/TextField.hx",1383,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1383)
	return this->get_bounds()->height;
}


Float TextField_obj::set_height( Float value){
	HX_STACK_FRAME("openfl.text.TextField","set_height",0x45903348,"openfl.text.TextField.set_height","openfl/text/TextField.hx",1388,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1390)
	Float _g = this->get_scaleY();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(1390)
	if (((  ((!(((_g != (int)1))))) ? bool((value != this->__height)) : bool(true) ))){
		HX_STACK_LINE(1392)
		if ((!(this->__transformDirty))){
			HX_STACK_LINE(1392)
			this->__transformDirty = true;
			HX_STACK_LINE(1392)
			(::openfl::display::DisplayObject_obj::__worldTransformDirty)++;
		}
		HX_STACK_LINE(1393)
		this->__dirty = true;
		HX_STACK_LINE(1394)
		this->__dirtyBounds = true;
	}
	HX_STACK_LINE(1398)
	this->set_scaleY((int)1);
	HX_STACK_LINE(1399)
	return this->__height = value;
}


::String TextField_obj::get_htmlText( ){
	HX_STACK_FRAME("openfl.text.TextField","get_htmlText",0xb86d81e5,"openfl.text.TextField.get_htmlText","openfl/text/TextField.hx",1406,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1406)
	return this->__text;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_htmlText,return )

::String TextField_obj::set_htmlText( ::String value){
	HX_STACK_FRAME("openfl.text.TextField","set_htmlText",0xcd66a559,"openfl.text.TextField.set_htmlText","openfl/text/TextField.hx",1413,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1415)
	if (((bool(!(this->__isHTML)) || bool((this->__text != value))))){
		HX_STACK_LINE(1417)
		this->__dirty = true;
		HX_STACK_LINE(1418)
		this->__dirtyBounds = true;
	}
	HX_STACK_LINE(1422)
	this->__ranges = null();
	HX_STACK_LINE(1423)
	this->__isHTML = true;
	HX_STACK_LINE(1425)
	{
		HX_STACK_LINE(1427)
		::String _g = ::EReg_obj::__new(HX_CSTRING("<br>"),HX_CSTRING("g"))->replace(value,HX_CSTRING("\n"));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1427)
		value = _g;
		HX_STACK_LINE(1428)
		::String _g1 = ::EReg_obj::__new(HX_CSTRING("<br/>"),HX_CSTRING("g"))->replace(value,HX_CSTRING("\n"));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(1428)
		value = _g1;
		HX_STACK_LINE(1432)
		Array< ::String > segments = value.split(HX_CSTRING("<font"));		HX_STACK_VAR(segments,"segments");
		HX_STACK_LINE(1434)
		if (((segments->length == (int)1))){
			HX_STACK_LINE(1436)
			::String _g2 = ::EReg_obj::__new(HX_CSTRING("<.*?>"),HX_CSTRING("g"))->replace(value,HX_CSTRING(""));		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(1436)
			value = _g2;
			HX_STACK_LINE(1448)
			return this->__text = value;
		}
		else{
			HX_STACK_LINE(1452)
			value = HX_CSTRING("");
			HX_STACK_LINE(1453)
			this->__ranges = Array_obj< ::Dynamic >::__new();
			HX_STACK_LINE(1457)
			{
				HX_STACK_LINE(1457)
				int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(1457)
				while((true)){
					HX_STACK_LINE(1457)
					if ((!(((_g2 < segments->length))))){
						HX_STACK_LINE(1457)
						break;
					}
					HX_STACK_LINE(1457)
					::String segment = segments->__get(_g2);		HX_STACK_VAR(segment,"segment");
					HX_STACK_LINE(1457)
					++(_g2);
					HX_STACK_LINE(1459)
					if (((segment == HX_CSTRING("")))){
						HX_STACK_LINE(1459)
						continue;
					}
					HX_STACK_LINE(1461)
					int closeFontIndex = segment.indexOf(HX_CSTRING("</font>"),null());		HX_STACK_VAR(closeFontIndex,"closeFontIndex");
					HX_STACK_LINE(1463)
					if (((closeFontIndex > (int)-1))){
						HX_STACK_LINE(1465)
						int _g3 = segment.indexOf(HX_CSTRING(">"),null());		HX_STACK_VAR(_g3,"_g3");
						HX_STACK_LINE(1465)
						int start = (_g3 + (int)1);		HX_STACK_VAR(start,"start");
						HX_STACK_LINE(1466)
						int end = closeFontIndex;		HX_STACK_VAR(end,"end");
						HX_STACK_LINE(1467)
						::openfl::text::TextFormat format = this->__textFormat->clone();		HX_STACK_VAR(format,"format");
						HX_STACK_LINE(1469)
						int faceIndex = segment.indexOf(HX_CSTRING("face="),null());		HX_STACK_VAR(faceIndex,"faceIndex");
						HX_STACK_LINE(1470)
						int colorIndex = segment.indexOf(HX_CSTRING("color="),null());		HX_STACK_VAR(colorIndex,"colorIndex");
						HX_STACK_LINE(1471)
						int sizeIndex = segment.indexOf(HX_CSTRING("size="),null());		HX_STACK_VAR(sizeIndex,"sizeIndex");
						HX_STACK_LINE(1473)
						if (((bool((faceIndex > (int)-1)) && bool((faceIndex < start))))){
							HX_STACK_LINE(1475)
							int _g4 = segment.indexOf(HX_CSTRING("\""),faceIndex);		HX_STACK_VAR(_g4,"_g4");
							HX_STACK_LINE(1475)
							::String _g5 = segment.substr((faceIndex + (int)6),_g4);		HX_STACK_VAR(_g5,"_g5");
							HX_STACK_LINE(1475)
							format->font = _g5;
						}
						HX_STACK_LINE(1479)
						if (((bool((colorIndex > (int)-1)) && bool((colorIndex < start))))){
							HX_STACK_LINE(1481)
							::String _g6 = segment.substr((colorIndex + (int)8),(int)6);		HX_STACK_VAR(_g6,"_g6");
							HX_STACK_LINE(1481)
							::String _g7 = (HX_CSTRING("0x") + _g6);		HX_STACK_VAR(_g7,"_g7");
							HX_STACK_LINE(1481)
							Dynamic _g8 = ::Std_obj::parseInt(_g7);		HX_STACK_VAR(_g8,"_g8");
							HX_STACK_LINE(1481)
							format->color = _g8;
						}
						HX_STACK_LINE(1485)
						if (((bool((sizeIndex > (int)-1)) && bool((sizeIndex < start))))){
							HX_STACK_LINE(1487)
							int _g9 = segment.indexOf(HX_CSTRING("\""),sizeIndex);		HX_STACK_VAR(_g9,"_g9");
							HX_STACK_LINE(1487)
							::String _g10 = segment.substr((sizeIndex + (int)6),_g9);		HX_STACK_VAR(_g10,"_g10");
							HX_STACK_LINE(1487)
							Dynamic _g11 = ::Std_obj::parseInt(_g10);		HX_STACK_VAR(_g11,"_g11");
							HX_STACK_LINE(1487)
							format->size = _g11;
						}
						HX_STACK_LINE(1491)
						::String sub = segment.substring(start,end);		HX_STACK_VAR(sub,"sub");
						HX_STACK_LINE(1492)
						::String _g12 = ::EReg_obj::__new(HX_CSTRING("<.*?>"),HX_CSTRING("g"))->replace(sub,HX_CSTRING(""));		HX_STACK_VAR(_g12,"_g12");
						HX_STACK_LINE(1492)
						sub = _g12;
						HX_STACK_LINE(1494)
						::openfl::text::TextFormatRange _g13 = ::openfl::text::TextFormatRange_obj::__new(format,value.length,(value.length + sub.length));		HX_STACK_VAR(_g13,"_g13");
						HX_STACK_LINE(1494)
						this->__ranges->push(_g13);
						HX_STACK_LINE(1495)
						hx::AddEq(value,sub);
						HX_STACK_LINE(1497)
						if ((((closeFontIndex + (int)7) < segment.length))){
							HX_STACK_LINE(1499)
							::String _g14 = segment.substr((closeFontIndex + (int)7),null());		HX_STACK_VAR(_g14,"_g14");
							HX_STACK_LINE(1499)
							sub = _g14;
							HX_STACK_LINE(1500)
							::openfl::text::TextFormatRange _g15 = ::openfl::text::TextFormatRange_obj::__new(this->__textFormat,value.length,(value.length + sub.length));		HX_STACK_VAR(_g15,"_g15");
							HX_STACK_LINE(1500)
							this->__ranges->push(_g15);
							HX_STACK_LINE(1501)
							hx::AddEq(value,sub);
						}
					}
					else{
						HX_STACK_LINE(1507)
						::openfl::text::TextFormatRange _g16 = ::openfl::text::TextFormatRange_obj::__new(this->__textFormat,value.length,(value.length + segment.length));		HX_STACK_VAR(_g16,"_g16");
						HX_STACK_LINE(1507)
						this->__ranges->push(_g16);
						HX_STACK_LINE(1508)
						hx::AddEq(value,segment);
					}
				}
			}
		}
	}
	HX_STACK_LINE(1529)
	return this->__text = value;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_htmlText,return )

int TextField_obj::get_maxScrollH( ){
	HX_STACK_FRAME("openfl.text.TextField","get_maxScrollH",0xc4f0b4c4,"openfl.text.TextField.get_maxScrollH","openfl/text/TextField.hx",1534,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1534)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_maxScrollH,return )

int TextField_obj::get_maxScrollV( ){
	HX_STACK_FRAME("openfl.text.TextField","get_maxScrollV",0xc4f0b4d2,"openfl.text.TextField.get_maxScrollV","openfl/text/TextField.hx",1535,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1535)
	return (int)1;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_maxScrollV,return )

int TextField_obj::get_numLines( ){
	HX_STACK_FRAME("openfl.text.TextField","get_numLines",0xda475406,"openfl.text.TextField.get_numLines","openfl/text/TextField.hx",1538,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1540)
	::String _g = this->get_text();		HX_STACK_VAR(_g,"_g");
	struct _Function_1_1{
		inline static bool Block( hx::ObjectPtr< ::openfl::text::TextField_obj > __this){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/text/TextField.hx",1540,0xccf02094)
			{
				HX_STACK_LINE(1540)
				::String _g1 = __this->get_text();		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(1540)
				return (_g1 != null());
			}
			return null();
		}
	};
	HX_STACK_LINE(1540)
	if (((  (((_g != HX_CSTRING("")))) ? bool(_Function_1_1::Block(this)) : bool(false) ))){
		HX_STACK_LINE(1542)
		int count = this->get_text().split(HX_CSTRING("\n"))->length;		HX_STACK_VAR(count,"count");
		HX_STACK_LINE(1544)
		if ((this->__isHTML)){
			HX_STACK_LINE(1546)
			hx::AddEq(count,(this->get_text().split(HX_CSTRING("<br>"))->length - (int)1));
		}
		HX_STACK_LINE(1550)
		return count;
	}
	HX_STACK_LINE(1554)
	return (int)1;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_numLines,return )

bool TextField_obj::set_selectable( bool value){
	HX_STACK_FRAME("openfl.text.TextField","set_selectable",0x0e3ea677,"openfl.text.TextField.set_selectable","openfl/text/TextField.hx",1569,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1569)
	return this->selectable = value;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_selectable,return )

::String TextField_obj::get_text( ){
	HX_STACK_FRAME("openfl.text.TextField","get_text",0x3b0d545a,"openfl.text.TextField.get_text","openfl/text/TextField.hx",1574,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1576)
	if ((this->__isHTML)){
	}
	HX_STACK_LINE(1582)
	return this->__text;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_text,return )

::String TextField_obj::set_text( ::String value){
	HX_STACK_FRAME("openfl.text.TextField","set_text",0xe96aadce,"openfl.text.TextField.set_text","openfl/text/TextField.hx",1587,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1601)
	if (((bool(this->__isHTML) || bool((this->__text != value))))){
		HX_STACK_LINE(1602)
		this->__dirty = true;
		HX_STACK_LINE(1603)
		this->__dirtyBounds = true;
	}
	HX_STACK_LINE(1605)
	this->__ranges = null();
	HX_STACK_LINE(1606)
	this->__isHTML = false;
	HX_STACK_LINE(1607)
	return this->__text = value;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_text,return )

int TextField_obj::get_textColor( ){
	HX_STACK_FRAME("openfl.text.TextField","get_textColor",0x69ca86a9,"openfl.text.TextField.get_textColor","openfl/text/TextField.hx",1614,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1614)
	return this->__textFormat->color;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_textColor,return )

int TextField_obj::set_textColor( int value){
	HX_STACK_FRAME("openfl.text.TextField","set_textColor",0xaed068b5,"openfl.text.TextField.set_textColor","openfl/text/TextField.hx",1619,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1621)
	if (((value != this->__textFormat->color))){
		HX_STACK_LINE(1621)
		this->__dirty = true;
	}
	HX_STACK_LINE(1623)
	if (((this->__ranges != null()))){
		HX_STACK_LINE(1625)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1625)
		Array< ::Dynamic > _g1 = this->__ranges;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(1625)
		while((true)){
			HX_STACK_LINE(1625)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(1625)
				break;
			}
			HX_STACK_LINE(1625)
			::openfl::text::TextFormatRange range = _g1->__get(_g).StaticCast< ::openfl::text::TextFormatRange >();		HX_STACK_VAR(range,"range");
			HX_STACK_LINE(1625)
			++(_g);
			HX_STACK_LINE(1627)
			range->format->color = value;
		}
	}
	HX_STACK_LINE(1633)
	return this->__textFormat->color = value;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_textColor,return )

Float TextField_obj::get_textWidth( ){
	HX_STACK_FRAME("openfl.text.TextField","get_textWidth",0xe9d0cb4c,"openfl.text.TextField.get_textWidth","openfl/text/TextField.hx",1645,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1645)
	return ::openfl::_internal::renderer::cairo::CairoTextField_obj::getLineWidth(hx::ObjectPtr<OBJ_>(this),(int)-1);
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_textWidth,return )

Float TextField_obj::get_textHeight( ){
	HX_STACK_FRAME("openfl.text.TextField","get_textHeight",0x63308fe1,"openfl.text.TextField.get_textHeight","openfl/text/TextField.hx",1674,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1674)
	return ::openfl::_internal::renderer::cairo::CairoTextField_obj::getTextHeight(hx::ObjectPtr<OBJ_>(this));
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_textHeight,return )

::openfl::text::TextFieldType TextField_obj::set_type( ::openfl::text::TextFieldType value){
	HX_STACK_FRAME("openfl.text.TextField","set_type",0xe979d3db,"openfl.text.TextField.set_type","openfl/text/TextField.hx",1680,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1682)
	if (((value != this->type))){
		HX_STACK_LINE(1685)
		if (((value == ::openfl::text::TextFieldType_obj::INPUT))){
			HX_STACK_LINE(1687)
			::openfl::_internal::renderer::canvas::CanvasTextField_obj::enableInputMode(hx::ObjectPtr<OBJ_>(this));
		}
		else{
			HX_STACK_LINE(1691)
			::openfl::_internal::renderer::canvas::CanvasTextField_obj::disableInputMode(hx::ObjectPtr<OBJ_>(this));
		}
		HX_STACK_LINE(1696)
		this->__dirty = true;
	}
	HX_STACK_LINE(1700)
	return this->type = value;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_type,return )

Float TextField_obj::get_width( ){
	HX_STACK_FRAME("openfl.text.TextField","get_width",0x2d65e5b9,"openfl.text.TextField.get_width","openfl/text/TextField.hx",1707,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1707)
	return this->get_bounds()->width;
}


Float TextField_obj::set_width( Float value){
	HX_STACK_FRAME("openfl.text.TextField","set_width",0x10b6d1c5,"openfl.text.TextField.set_width","openfl/text/TextField.hx",1711,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1713)
	Float _g = this->get_scaleX();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(1713)
	if (((  ((!(((_g != (int)1))))) ? bool((this->__width != value)) : bool(true) ))){
		HX_STACK_LINE(1715)
		if ((!(this->__transformDirty))){
			HX_STACK_LINE(1715)
			this->__transformDirty = true;
			HX_STACK_LINE(1715)
			(::openfl::display::DisplayObject_obj::__worldTransformDirty)++;
		}
		HX_STACK_LINE(1716)
		this->__dirty = true;
		HX_STACK_LINE(1717)
		this->__dirtyBounds = true;
	}
	HX_STACK_LINE(1721)
	this->set_scaleX((int)1);
	HX_STACK_LINE(1722)
	return this->__width = value;
}


bool TextField_obj::get_wordWrap( ){
	HX_STACK_FRAME("openfl.text.TextField","get_wordWrap",0xa91076e1,"openfl.text.TextField.get_wordWrap","openfl/text/TextField.hx",1729,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1729)
	return this->wordWrap;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_wordWrap,return )

bool TextField_obj::set_wordWrap( bool value){
	HX_STACK_FRAME("openfl.text.TextField","set_wordWrap",0xbe099a55,"openfl.text.TextField.set_wordWrap","openfl/text/TextField.hx",1737,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1737)
	return this->wordWrap = value;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_wordWrap,return )

::openfl::text::TextFormat TextField_obj::__defaultTextFormat;


TextField_obj::TextField_obj()
{
}

void TextField_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TextField);
	HX_MARK_MEMBER_NAME(antiAliasType,"antiAliasType");
	HX_MARK_MEMBER_NAME(autoSize,"autoSize");
	HX_MARK_MEMBER_NAME(background,"background");
	HX_MARK_MEMBER_NAME(backgroundColor,"backgroundColor");
	HX_MARK_MEMBER_NAME(border,"border");
	HX_MARK_MEMBER_NAME(borderColor,"borderColor");
	HX_MARK_MEMBER_NAME(bottomScrollV,"bottomScrollV");
	HX_MARK_MEMBER_NAME(caretIndex,"caretIndex");
	HX_MARK_MEMBER_NAME(caretPos,"caretPos");
	HX_MARK_MEMBER_NAME(displayAsPassword,"displayAsPassword");
	HX_MARK_MEMBER_NAME(embedFonts,"embedFonts");
	HX_MARK_MEMBER_NAME(gridFitType,"gridFitType");
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_MEMBER_NAME(maxChars,"maxChars");
	HX_MARK_MEMBER_NAME(maxScrollH,"maxScrollH");
	HX_MARK_MEMBER_NAME(maxScrollV,"maxScrollV");
	HX_MARK_MEMBER_NAME(multiline,"multiline");
	HX_MARK_MEMBER_NAME(numLines,"numLines");
	HX_MARK_MEMBER_NAME(restrict,"restrict");
	HX_MARK_MEMBER_NAME(scrollH,"scrollH");
	HX_MARK_MEMBER_NAME(scrollV,"scrollV");
	HX_MARK_MEMBER_NAME(selectable,"selectable");
	HX_MARK_MEMBER_NAME(selectionBeginIndex,"selectionBeginIndex");
	HX_MARK_MEMBER_NAME(selectionEndIndex,"selectionEndIndex");
	HX_MARK_MEMBER_NAME(sharpness,"sharpness");
	HX_MARK_MEMBER_NAME(textHeight,"textHeight");
	HX_MARK_MEMBER_NAME(textWidth,"textWidth");
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(wordWrap,"wordWrap");
	HX_MARK_MEMBER_NAME(__bounds,"__bounds");
	HX_MARK_MEMBER_NAME(__cursorPosition,"__cursorPosition");
	HX_MARK_MEMBER_NAME(__cursorTimer,"__cursorTimer");
	HX_MARK_MEMBER_NAME(__dirty,"__dirty");
	HX_MARK_MEMBER_NAME(__dirtyBounds,"__dirtyBounds");
	HX_MARK_MEMBER_NAME(__hasFocus,"__hasFocus");
	HX_MARK_MEMBER_NAME(__height,"__height");
	HX_MARK_MEMBER_NAME(__isHTML,"__isHTML");
	HX_MARK_MEMBER_NAME(__isKeyDown,"__isKeyDown");
	HX_MARK_MEMBER_NAME(__measuredHeight,"__measuredHeight");
	HX_MARK_MEMBER_NAME(__measuredWidth,"__measuredWidth");
	HX_MARK_MEMBER_NAME(__ranges,"__ranges");
	HX_MARK_MEMBER_NAME(__selectable,"__selectable");
	HX_MARK_MEMBER_NAME(__selectionStart,"__selectionStart");
	HX_MARK_MEMBER_NAME(__showCursor,"__showCursor");
	HX_MARK_MEMBER_NAME(__text,"__text");
	HX_MARK_MEMBER_NAME(__textFormat,"__textFormat");
	HX_MARK_MEMBER_NAME(__textLayout,"__textLayout");
	HX_MARK_MEMBER_NAME(__texture,"__texture");
	HX_MARK_MEMBER_NAME(__tileData,"__tileData");
	HX_MARK_MEMBER_NAME(__tileDataLength,"__tileDataLength");
	HX_MARK_MEMBER_NAME(__tilesheets,"__tilesheets");
	HX_MARK_MEMBER_NAME(__width,"__width");
	HX_MARK_MEMBER_NAME(bounds,"bounds");
	HX_MARK_MEMBER_NAME(__cairoFont,"__cairoFont");
	::openfl::display::InteractiveObject_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void TextField_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(antiAliasType,"antiAliasType");
	HX_VISIT_MEMBER_NAME(autoSize,"autoSize");
	HX_VISIT_MEMBER_NAME(background,"background");
	HX_VISIT_MEMBER_NAME(backgroundColor,"backgroundColor");
	HX_VISIT_MEMBER_NAME(border,"border");
	HX_VISIT_MEMBER_NAME(borderColor,"borderColor");
	HX_VISIT_MEMBER_NAME(bottomScrollV,"bottomScrollV");
	HX_VISIT_MEMBER_NAME(caretIndex,"caretIndex");
	HX_VISIT_MEMBER_NAME(caretPos,"caretPos");
	HX_VISIT_MEMBER_NAME(displayAsPassword,"displayAsPassword");
	HX_VISIT_MEMBER_NAME(embedFonts,"embedFonts");
	HX_VISIT_MEMBER_NAME(gridFitType,"gridFitType");
	HX_VISIT_MEMBER_NAME(length,"length");
	HX_VISIT_MEMBER_NAME(maxChars,"maxChars");
	HX_VISIT_MEMBER_NAME(maxScrollH,"maxScrollH");
	HX_VISIT_MEMBER_NAME(maxScrollV,"maxScrollV");
	HX_VISIT_MEMBER_NAME(multiline,"multiline");
	HX_VISIT_MEMBER_NAME(numLines,"numLines");
	HX_VISIT_MEMBER_NAME(restrict,"restrict");
	HX_VISIT_MEMBER_NAME(scrollH,"scrollH");
	HX_VISIT_MEMBER_NAME(scrollV,"scrollV");
	HX_VISIT_MEMBER_NAME(selectable,"selectable");
	HX_VISIT_MEMBER_NAME(selectionBeginIndex,"selectionBeginIndex");
	HX_VISIT_MEMBER_NAME(selectionEndIndex,"selectionEndIndex");
	HX_VISIT_MEMBER_NAME(sharpness,"sharpness");
	HX_VISIT_MEMBER_NAME(textHeight,"textHeight");
	HX_VISIT_MEMBER_NAME(textWidth,"textWidth");
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(wordWrap,"wordWrap");
	HX_VISIT_MEMBER_NAME(__bounds,"__bounds");
	HX_VISIT_MEMBER_NAME(__cursorPosition,"__cursorPosition");
	HX_VISIT_MEMBER_NAME(__cursorTimer,"__cursorTimer");
	HX_VISIT_MEMBER_NAME(__dirty,"__dirty");
	HX_VISIT_MEMBER_NAME(__dirtyBounds,"__dirtyBounds");
	HX_VISIT_MEMBER_NAME(__hasFocus,"__hasFocus");
	HX_VISIT_MEMBER_NAME(__height,"__height");
	HX_VISIT_MEMBER_NAME(__isHTML,"__isHTML");
	HX_VISIT_MEMBER_NAME(__isKeyDown,"__isKeyDown");
	HX_VISIT_MEMBER_NAME(__measuredHeight,"__measuredHeight");
	HX_VISIT_MEMBER_NAME(__measuredWidth,"__measuredWidth");
	HX_VISIT_MEMBER_NAME(__ranges,"__ranges");
	HX_VISIT_MEMBER_NAME(__selectable,"__selectable");
	HX_VISIT_MEMBER_NAME(__selectionStart,"__selectionStart");
	HX_VISIT_MEMBER_NAME(__showCursor,"__showCursor");
	HX_VISIT_MEMBER_NAME(__text,"__text");
	HX_VISIT_MEMBER_NAME(__textFormat,"__textFormat");
	HX_VISIT_MEMBER_NAME(__textLayout,"__textLayout");
	HX_VISIT_MEMBER_NAME(__texture,"__texture");
	HX_VISIT_MEMBER_NAME(__tileData,"__tileData");
	HX_VISIT_MEMBER_NAME(__tileDataLength,"__tileDataLength");
	HX_VISIT_MEMBER_NAME(__tilesheets,"__tilesheets");
	HX_VISIT_MEMBER_NAME(__width,"__width");
	HX_VISIT_MEMBER_NAME(bounds,"bounds");
	HX_VISIT_MEMBER_NAME(__cairoFont,"__cairoFont");
	::openfl::display::InteractiveObject_obj::__Visit(HX_VISIT_ARG);
}

Dynamic TextField_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { return get_text(); }
		if (HX_FIELD_EQ(inName,"type") ) { return type; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"border") ) { return border; }
		if (HX_FIELD_EQ(inName,"length") ) { return length; }
		if (HX_FIELD_EQ(inName,"__text") ) { return __text; }
		if (HX_FIELD_EQ(inName,"bounds") ) { return inCallProp ? get_bounds() : bounds; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"scrollH") ) { return scrollH; }
		if (HX_FIELD_EQ(inName,"scrollV") ) { return scrollV; }
		if (HX_FIELD_EQ(inName,"__dirty") ) { return __dirty; }
		if (HX_FIELD_EQ(inName,"__width") ) { return __width; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"autoSize") ) { return autoSize; }
		if (HX_FIELD_EQ(inName,"caretPos") ) { return inCallProp ? get_caretPos() : caretPos; }
		if (HX_FIELD_EQ(inName,"htmlText") ) { return get_htmlText(); }
		if (HX_FIELD_EQ(inName,"maxChars") ) { return maxChars; }
		if (HX_FIELD_EQ(inName,"numLines") ) { return inCallProp ? get_numLines() : numLines; }
		if (HX_FIELD_EQ(inName,"restrict") ) { return restrict; }
		if (HX_FIELD_EQ(inName,"wordWrap") ) { return inCallProp ? get_wordWrap() : wordWrap; }
		if (HX_FIELD_EQ(inName,"__bounds") ) { return __bounds; }
		if (HX_FIELD_EQ(inName,"__height") ) { return __height; }
		if (HX_FIELD_EQ(inName,"__isHTML") ) { return __isHTML; }
		if (HX_FIELD_EQ(inName,"__ranges") ) { return __ranges; }
		if (HX_FIELD_EQ(inName,"get_text") ) { return get_text_dyn(); }
		if (HX_FIELD_EQ(inName,"set_text") ) { return set_text_dyn(); }
		if (HX_FIELD_EQ(inName,"set_type") ) { return set_type_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"multiline") ) { return multiline; }
		if (HX_FIELD_EQ(inName,"sharpness") ) { return sharpness; }
		if (HX_FIELD_EQ(inName,"textColor") ) { return get_textColor(); }
		if (HX_FIELD_EQ(inName,"textWidth") ) { return inCallProp ? get_textWidth() : textWidth; }
		if (HX_FIELD_EQ(inName,"__texture") ) { return __texture; }
		if (HX_FIELD_EQ(inName,"__hitTest") ) { return __hitTest_dyn(); }
		if (HX_FIELD_EQ(inName,"get_width") ) { return get_width_dyn(); }
		if (HX_FIELD_EQ(inName,"set_width") ) { return set_width_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"background") ) { return background; }
		if (HX_FIELD_EQ(inName,"caretIndex") ) { return caretIndex; }
		if (HX_FIELD_EQ(inName,"embedFonts") ) { return embedFonts; }
		if (HX_FIELD_EQ(inName,"maxScrollH") ) { return inCallProp ? get_maxScrollH() : maxScrollH; }
		if (HX_FIELD_EQ(inName,"maxScrollV") ) { return inCallProp ? get_maxScrollV() : maxScrollV; }
		if (HX_FIELD_EQ(inName,"selectable") ) { return selectable; }
		if (HX_FIELD_EQ(inName,"textHeight") ) { return inCallProp ? get_textHeight() : textHeight; }
		if (HX_FIELD_EQ(inName,"__hasFocus") ) { return __hasFocus; }
		if (HX_FIELD_EQ(inName,"__tileData") ) { return __tileData; }
		if (HX_FIELD_EQ(inName,"appendText") ) { return appendText_dyn(); }
		if (HX_FIELD_EQ(inName,"__renderGL") ) { return __renderGL_dyn(); }
		if (HX_FIELD_EQ(inName,"set_border") ) { return set_border_dyn(); }
		if (HX_FIELD_EQ(inName,"get_bounds") ) { return get_bounds_dyn(); }
		if (HX_FIELD_EQ(inName,"get_height") ) { return get_height_dyn(); }
		if (HX_FIELD_EQ(inName,"set_height") ) { return set_height_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"borderColor") ) { return borderColor; }
		if (HX_FIELD_EQ(inName,"gridFitType") ) { return gridFitType; }
		if (HX_FIELD_EQ(inName,"__isKeyDown") ) { return __isKeyDown; }
		if (HX_FIELD_EQ(inName,"__cairoFont") ) { return __cairoFont; }
		if (HX_FIELD_EQ(inName,"getLineText") ) { return getLineText_dyn(); }
		if (HX_FIELD_EQ(inName,"__getBounds") ) { return __getBounds_dyn(); }
		if (HX_FIELD_EQ(inName,"__getCursor") ) { return __getCursor_dyn(); }
		if (HX_FIELD_EQ(inName,"__renderDOM") ) { return __renderDOM_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__selectable") ) { return __selectable; }
		if (HX_FIELD_EQ(inName,"__showCursor") ) { return __showCursor; }
		if (HX_FIELD_EQ(inName,"__textFormat") ) { return __textFormat; }
		if (HX_FIELD_EQ(inName,"__textLayout") ) { return __textLayout; }
		if (HX_FIELD_EQ(inName,"__tilesheets") ) { return __tilesheets; }
		if (HX_FIELD_EQ(inName,"setSelection") ) { return setSelection_dyn(); }
		if (HX_FIELD_EQ(inName,"set_autoSize") ) { return set_autoSize_dyn(); }
		if (HX_FIELD_EQ(inName,"get_caretPos") ) { return get_caretPos_dyn(); }
		if (HX_FIELD_EQ(inName,"get_htmlText") ) { return get_htmlText_dyn(); }
		if (HX_FIELD_EQ(inName,"set_htmlText") ) { return set_htmlText_dyn(); }
		if (HX_FIELD_EQ(inName,"get_numLines") ) { return get_numLines_dyn(); }
		if (HX_FIELD_EQ(inName,"get_wordWrap") ) { return get_wordWrap_dyn(); }
		if (HX_FIELD_EQ(inName,"set_wordWrap") ) { return set_wordWrap_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"antiAliasType") ) { return antiAliasType; }
		if (HX_FIELD_EQ(inName,"bottomScrollV") ) { return inCallProp ? get_bottomScrollV() : bottomScrollV; }
		if (HX_FIELD_EQ(inName,"__cursorTimer") ) { return __cursorTimer; }
		if (HX_FIELD_EQ(inName,"__dirtyBounds") ) { return __dirtyBounds; }
		if (HX_FIELD_EQ(inName,"getLineOffset") ) { return getLineOffset_dyn(); }
		if (HX_FIELD_EQ(inName,"getTextFormat") ) { return getTextFormat_dyn(); }
		if (HX_FIELD_EQ(inName,"setTextFormat") ) { return setTextFormat_dyn(); }
		if (HX_FIELD_EQ(inName,"__getPosition") ) { return __getPosition_dyn(); }
		if (HX_FIELD_EQ(inName,"__renderCairo") ) { return __renderCairo_dyn(); }
		if (HX_FIELD_EQ(inName,"get_textColor") ) { return get_textColor_dyn(); }
		if (HX_FIELD_EQ(inName,"set_textColor") ) { return set_textColor_dyn(); }
		if (HX_FIELD_EQ(inName,"get_textWidth") ) { return get_textWidth_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getLineMetrics") ) { return getLineMetrics_dyn(); }
		if (HX_FIELD_EQ(inName,"__renderCanvas") ) { return __renderCanvas_dyn(); }
		if (HX_FIELD_EQ(inName,"set_background") ) { return set_background_dyn(); }
		if (HX_FIELD_EQ(inName,"get_maxScrollH") ) { return get_maxScrollH_dyn(); }
		if (HX_FIELD_EQ(inName,"get_maxScrollV") ) { return get_maxScrollV_dyn(); }
		if (HX_FIELD_EQ(inName,"set_selectable") ) { return set_selectable_dyn(); }
		if (HX_FIELD_EQ(inName,"get_textHeight") ) { return get_textHeight_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"backgroundColor") ) { return backgroundColor; }
		if (HX_FIELD_EQ(inName,"__measuredWidth") ) { return __measuredWidth; }
		if (HX_FIELD_EQ(inName,"set_borderColor") ) { return set_borderColor_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__cursorPosition") ) { return __cursorPosition; }
		if (HX_FIELD_EQ(inName,"__measuredHeight") ) { return __measuredHeight; }
		if (HX_FIELD_EQ(inName,"__selectionStart") ) { return __selectionStart; }
		if (HX_FIELD_EQ(inName,"__tileDataLength") ) { return __tileDataLength; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"defaultTextFormat") ) { return get_defaultTextFormat(); }
		if (HX_FIELD_EQ(inName,"displayAsPassword") ) { return displayAsPassword; }
		if (HX_FIELD_EQ(inName,"selectionEndIndex") ) { return selectionEndIndex; }
		if (HX_FIELD_EQ(inName,"getCharBoundaries") ) { return getCharBoundaries_dyn(); }
		if (HX_FIELD_EQ(inName,"__stopCursorTimer") ) { return __stopCursorTimer_dyn(); }
		if (HX_FIELD_EQ(inName,"get_bottomScrollV") ) { return get_bottomScrollV_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__startCursorTimer") ) { return __startCursorTimer_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"__defaultTextFormat") ) { return __defaultTextFormat; }
		if (HX_FIELD_EQ(inName,"selectionBeginIndex") ) { return selectionBeginIndex; }
		if (HX_FIELD_EQ(inName,"getCharIndexAtPoint") ) { return getCharIndexAtPoint_dyn(); }
		if (HX_FIELD_EQ(inName,"getLineIndexAtPoint") ) { return getLineIndexAtPoint_dyn(); }
		if (HX_FIELD_EQ(inName,"set_backgroundColor") ) { return set_backgroundColor_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"get_defaultTextFormat") ) { return get_defaultTextFormat_dyn(); }
		if (HX_FIELD_EQ(inName,"set_defaultTextFormat") ) { return set_defaultTextFormat_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TextField_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { return set_text(inValue); }
		if (HX_FIELD_EQ(inName,"type") ) { if (inCallProp) return set_type(inValue);type=inValue.Cast< ::openfl::text::TextFieldType >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"border") ) { if (inCallProp) return set_border(inValue);border=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"length") ) { length=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__text") ) { __text=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bounds") ) { bounds=inValue.Cast< ::openfl::geom::Rectangle >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"scrollH") ) { scrollH=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scrollV") ) { scrollV=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__dirty") ) { __dirty=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__width") ) { __width=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"autoSize") ) { if (inCallProp) return set_autoSize(inValue);autoSize=inValue.Cast< ::openfl::text::TextFieldAutoSize >(); return inValue; }
		if (HX_FIELD_EQ(inName,"caretPos") ) { caretPos=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"htmlText") ) { return set_htmlText(inValue); }
		if (HX_FIELD_EQ(inName,"maxChars") ) { maxChars=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"numLines") ) { numLines=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"restrict") ) { restrict=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"wordWrap") ) { if (inCallProp) return set_wordWrap(inValue);wordWrap=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__bounds") ) { __bounds=inValue.Cast< ::openfl::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__height") ) { __height=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__isHTML") ) { __isHTML=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__ranges") ) { __ranges=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"multiline") ) { multiline=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sharpness") ) { sharpness=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"textColor") ) { return set_textColor(inValue); }
		if (HX_FIELD_EQ(inName,"textWidth") ) { textWidth=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__texture") ) { __texture=inValue.Cast< ::lime::graphics::opengl::GLTexture >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"background") ) { if (inCallProp) return set_background(inValue);background=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"caretIndex") ) { caretIndex=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"embedFonts") ) { embedFonts=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxScrollH") ) { maxScrollH=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxScrollV") ) { maxScrollV=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"selectable") ) { if (inCallProp) return set_selectable(inValue);selectable=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"textHeight") ) { textHeight=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__hasFocus") ) { __hasFocus=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__tileData") ) { __tileData=inValue.Cast< ::haxe::ds::ObjectMap >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"borderColor") ) { if (inCallProp) return set_borderColor(inValue);borderColor=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"gridFitType") ) { gridFitType=inValue.Cast< ::openfl::text::GridFitType >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__isKeyDown") ) { __isKeyDown=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__cairoFont") ) { __cairoFont=inValue.Cast< ::lime::graphics::cairo::CairoFont >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__selectable") ) { __selectable=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__showCursor") ) { __showCursor=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__textFormat") ) { __textFormat=inValue.Cast< ::openfl::text::TextFormat >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__textLayout") ) { __textLayout=inValue.Cast< ::lime::text::TextLayout >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__tilesheets") ) { __tilesheets=inValue.Cast< ::haxe::ds::ObjectMap >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"antiAliasType") ) { antiAliasType=inValue.Cast< ::openfl::text::AntiAliasType >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bottomScrollV") ) { bottomScrollV=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__cursorTimer") ) { __cursorTimer=inValue.Cast< ::haxe::Timer >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__dirtyBounds") ) { __dirtyBounds=inValue.Cast< bool >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"backgroundColor") ) { if (inCallProp) return set_backgroundColor(inValue);backgroundColor=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__measuredWidth") ) { __measuredWidth=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__cursorPosition") ) { __cursorPosition=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__measuredHeight") ) { __measuredHeight=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__selectionStart") ) { __selectionStart=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__tileDataLength") ) { __tileDataLength=inValue.Cast< ::haxe::ds::ObjectMap >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"defaultTextFormat") ) { return set_defaultTextFormat(inValue); }
		if (HX_FIELD_EQ(inName,"displayAsPassword") ) { displayAsPassword=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"selectionEndIndex") ) { selectionEndIndex=inValue.Cast< int >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"__defaultTextFormat") ) { __defaultTextFormat=inValue.Cast< ::openfl::text::TextFormat >(); return inValue; }
		if (HX_FIELD_EQ(inName,"selectionBeginIndex") ) { selectionBeginIndex=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TextField_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("antiAliasType"));
	outFields->push(HX_CSTRING("autoSize"));
	outFields->push(HX_CSTRING("background"));
	outFields->push(HX_CSTRING("backgroundColor"));
	outFields->push(HX_CSTRING("border"));
	outFields->push(HX_CSTRING("borderColor"));
	outFields->push(HX_CSTRING("bottomScrollV"));
	outFields->push(HX_CSTRING("caretIndex"));
	outFields->push(HX_CSTRING("caretPos"));
	outFields->push(HX_CSTRING("defaultTextFormat"));
	outFields->push(HX_CSTRING("displayAsPassword"));
	outFields->push(HX_CSTRING("embedFonts"));
	outFields->push(HX_CSTRING("gridFitType"));
	outFields->push(HX_CSTRING("htmlText"));
	outFields->push(HX_CSTRING("length"));
	outFields->push(HX_CSTRING("maxChars"));
	outFields->push(HX_CSTRING("maxScrollH"));
	outFields->push(HX_CSTRING("maxScrollV"));
	outFields->push(HX_CSTRING("multiline"));
	outFields->push(HX_CSTRING("numLines"));
	outFields->push(HX_CSTRING("restrict"));
	outFields->push(HX_CSTRING("scrollH"));
	outFields->push(HX_CSTRING("scrollV"));
	outFields->push(HX_CSTRING("selectable"));
	outFields->push(HX_CSTRING("selectionBeginIndex"));
	outFields->push(HX_CSTRING("selectionEndIndex"));
	outFields->push(HX_CSTRING("sharpness"));
	outFields->push(HX_CSTRING("text"));
	outFields->push(HX_CSTRING("textColor"));
	outFields->push(HX_CSTRING("textHeight"));
	outFields->push(HX_CSTRING("textWidth"));
	outFields->push(HX_CSTRING("type"));
	outFields->push(HX_CSTRING("wordWrap"));
	outFields->push(HX_CSTRING("__bounds"));
	outFields->push(HX_CSTRING("__cursorPosition"));
	outFields->push(HX_CSTRING("__cursorTimer"));
	outFields->push(HX_CSTRING("__dirty"));
	outFields->push(HX_CSTRING("__dirtyBounds"));
	outFields->push(HX_CSTRING("__hasFocus"));
	outFields->push(HX_CSTRING("__height"));
	outFields->push(HX_CSTRING("__isHTML"));
	outFields->push(HX_CSTRING("__isKeyDown"));
	outFields->push(HX_CSTRING("__measuredHeight"));
	outFields->push(HX_CSTRING("__measuredWidth"));
	outFields->push(HX_CSTRING("__ranges"));
	outFields->push(HX_CSTRING("__selectable"));
	outFields->push(HX_CSTRING("__selectionStart"));
	outFields->push(HX_CSTRING("__showCursor"));
	outFields->push(HX_CSTRING("__text"));
	outFields->push(HX_CSTRING("__textFormat"));
	outFields->push(HX_CSTRING("__textLayout"));
	outFields->push(HX_CSTRING("__texture"));
	outFields->push(HX_CSTRING("__tileData"));
	outFields->push(HX_CSTRING("__tileDataLength"));
	outFields->push(HX_CSTRING("__tilesheets"));
	outFields->push(HX_CSTRING("__width"));
	outFields->push(HX_CSTRING("bounds"));
	outFields->push(HX_CSTRING("__cairoFont"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("__defaultTextFormat"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::text::AntiAliasType*/ ,(int)offsetof(TextField_obj,antiAliasType),HX_CSTRING("antiAliasType")},
	{hx::fsObject /*::openfl::text::TextFieldAutoSize*/ ,(int)offsetof(TextField_obj,autoSize),HX_CSTRING("autoSize")},
	{hx::fsBool,(int)offsetof(TextField_obj,background),HX_CSTRING("background")},
	{hx::fsInt,(int)offsetof(TextField_obj,backgroundColor),HX_CSTRING("backgroundColor")},
	{hx::fsBool,(int)offsetof(TextField_obj,border),HX_CSTRING("border")},
	{hx::fsInt,(int)offsetof(TextField_obj,borderColor),HX_CSTRING("borderColor")},
	{hx::fsInt,(int)offsetof(TextField_obj,bottomScrollV),HX_CSTRING("bottomScrollV")},
	{hx::fsInt,(int)offsetof(TextField_obj,caretIndex),HX_CSTRING("caretIndex")},
	{hx::fsInt,(int)offsetof(TextField_obj,caretPos),HX_CSTRING("caretPos")},
	{hx::fsBool,(int)offsetof(TextField_obj,displayAsPassword),HX_CSTRING("displayAsPassword")},
	{hx::fsBool,(int)offsetof(TextField_obj,embedFonts),HX_CSTRING("embedFonts")},
	{hx::fsObject /*::openfl::text::GridFitType*/ ,(int)offsetof(TextField_obj,gridFitType),HX_CSTRING("gridFitType")},
	{hx::fsInt,(int)offsetof(TextField_obj,length),HX_CSTRING("length")},
	{hx::fsInt,(int)offsetof(TextField_obj,maxChars),HX_CSTRING("maxChars")},
	{hx::fsInt,(int)offsetof(TextField_obj,maxScrollH),HX_CSTRING("maxScrollH")},
	{hx::fsInt,(int)offsetof(TextField_obj,maxScrollV),HX_CSTRING("maxScrollV")},
	{hx::fsBool,(int)offsetof(TextField_obj,multiline),HX_CSTRING("multiline")},
	{hx::fsInt,(int)offsetof(TextField_obj,numLines),HX_CSTRING("numLines")},
	{hx::fsString,(int)offsetof(TextField_obj,restrict),HX_CSTRING("restrict")},
	{hx::fsInt,(int)offsetof(TextField_obj,scrollH),HX_CSTRING("scrollH")},
	{hx::fsInt,(int)offsetof(TextField_obj,scrollV),HX_CSTRING("scrollV")},
	{hx::fsBool,(int)offsetof(TextField_obj,selectable),HX_CSTRING("selectable")},
	{hx::fsInt,(int)offsetof(TextField_obj,selectionBeginIndex),HX_CSTRING("selectionBeginIndex")},
	{hx::fsInt,(int)offsetof(TextField_obj,selectionEndIndex),HX_CSTRING("selectionEndIndex")},
	{hx::fsFloat,(int)offsetof(TextField_obj,sharpness),HX_CSTRING("sharpness")},
	{hx::fsFloat,(int)offsetof(TextField_obj,textHeight),HX_CSTRING("textHeight")},
	{hx::fsFloat,(int)offsetof(TextField_obj,textWidth),HX_CSTRING("textWidth")},
	{hx::fsObject /*::openfl::text::TextFieldType*/ ,(int)offsetof(TextField_obj,type),HX_CSTRING("type")},
	{hx::fsBool,(int)offsetof(TextField_obj,wordWrap),HX_CSTRING("wordWrap")},
	{hx::fsObject /*::openfl::geom::Rectangle*/ ,(int)offsetof(TextField_obj,__bounds),HX_CSTRING("__bounds")},
	{hx::fsInt,(int)offsetof(TextField_obj,__cursorPosition),HX_CSTRING("__cursorPosition")},
	{hx::fsObject /*::haxe::Timer*/ ,(int)offsetof(TextField_obj,__cursorTimer),HX_CSTRING("__cursorTimer")},
	{hx::fsBool,(int)offsetof(TextField_obj,__dirty),HX_CSTRING("__dirty")},
	{hx::fsBool,(int)offsetof(TextField_obj,__dirtyBounds),HX_CSTRING("__dirtyBounds")},
	{hx::fsBool,(int)offsetof(TextField_obj,__hasFocus),HX_CSTRING("__hasFocus")},
	{hx::fsFloat,(int)offsetof(TextField_obj,__height),HX_CSTRING("__height")},
	{hx::fsBool,(int)offsetof(TextField_obj,__isHTML),HX_CSTRING("__isHTML")},
	{hx::fsBool,(int)offsetof(TextField_obj,__isKeyDown),HX_CSTRING("__isKeyDown")},
	{hx::fsInt,(int)offsetof(TextField_obj,__measuredHeight),HX_CSTRING("__measuredHeight")},
	{hx::fsInt,(int)offsetof(TextField_obj,__measuredWidth),HX_CSTRING("__measuredWidth")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(TextField_obj,__ranges),HX_CSTRING("__ranges")},
	{hx::fsBool,(int)offsetof(TextField_obj,__selectable),HX_CSTRING("__selectable")},
	{hx::fsInt,(int)offsetof(TextField_obj,__selectionStart),HX_CSTRING("__selectionStart")},
	{hx::fsBool,(int)offsetof(TextField_obj,__showCursor),HX_CSTRING("__showCursor")},
	{hx::fsString,(int)offsetof(TextField_obj,__text),HX_CSTRING("__text")},
	{hx::fsObject /*::openfl::text::TextFormat*/ ,(int)offsetof(TextField_obj,__textFormat),HX_CSTRING("__textFormat")},
	{hx::fsObject /*::lime::text::TextLayout*/ ,(int)offsetof(TextField_obj,__textLayout),HX_CSTRING("__textLayout")},
	{hx::fsObject /*::lime::graphics::opengl::GLTexture*/ ,(int)offsetof(TextField_obj,__texture),HX_CSTRING("__texture")},
	{hx::fsObject /*::haxe::ds::ObjectMap*/ ,(int)offsetof(TextField_obj,__tileData),HX_CSTRING("__tileData")},
	{hx::fsObject /*::haxe::ds::ObjectMap*/ ,(int)offsetof(TextField_obj,__tileDataLength),HX_CSTRING("__tileDataLength")},
	{hx::fsObject /*::haxe::ds::ObjectMap*/ ,(int)offsetof(TextField_obj,__tilesheets),HX_CSTRING("__tilesheets")},
	{hx::fsFloat,(int)offsetof(TextField_obj,__width),HX_CSTRING("__width")},
	{hx::fsObject /*::openfl::geom::Rectangle*/ ,(int)offsetof(TextField_obj,bounds),HX_CSTRING("bounds")},
	{hx::fsObject /*::lime::graphics::cairo::CairoFont*/ ,(int)offsetof(TextField_obj,__cairoFont),HX_CSTRING("__cairoFont")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("antiAliasType"),
	HX_CSTRING("autoSize"),
	HX_CSTRING("background"),
	HX_CSTRING("backgroundColor"),
	HX_CSTRING("border"),
	HX_CSTRING("borderColor"),
	HX_CSTRING("bottomScrollV"),
	HX_CSTRING("caretIndex"),
	HX_CSTRING("caretPos"),
	HX_CSTRING("displayAsPassword"),
	HX_CSTRING("embedFonts"),
	HX_CSTRING("gridFitType"),
	HX_CSTRING("length"),
	HX_CSTRING("maxChars"),
	HX_CSTRING("maxScrollH"),
	HX_CSTRING("maxScrollV"),
	HX_CSTRING("multiline"),
	HX_CSTRING("numLines"),
	HX_CSTRING("restrict"),
	HX_CSTRING("scrollH"),
	HX_CSTRING("scrollV"),
	HX_CSTRING("selectable"),
	HX_CSTRING("selectionBeginIndex"),
	HX_CSTRING("selectionEndIndex"),
	HX_CSTRING("sharpness"),
	HX_CSTRING("textHeight"),
	HX_CSTRING("textWidth"),
	HX_CSTRING("type"),
	HX_CSTRING("wordWrap"),
	HX_CSTRING("__bounds"),
	HX_CSTRING("__cursorPosition"),
	HX_CSTRING("__cursorTimer"),
	HX_CSTRING("__dirty"),
	HX_CSTRING("__dirtyBounds"),
	HX_CSTRING("__hasFocus"),
	HX_CSTRING("__height"),
	HX_CSTRING("__isHTML"),
	HX_CSTRING("__isKeyDown"),
	HX_CSTRING("__measuredHeight"),
	HX_CSTRING("__measuredWidth"),
	HX_CSTRING("__ranges"),
	HX_CSTRING("__selectable"),
	HX_CSTRING("__selectionStart"),
	HX_CSTRING("__showCursor"),
	HX_CSTRING("__text"),
	HX_CSTRING("__textFormat"),
	HX_CSTRING("__textLayout"),
	HX_CSTRING("__texture"),
	HX_CSTRING("__tileData"),
	HX_CSTRING("__tileDataLength"),
	HX_CSTRING("__tilesheets"),
	HX_CSTRING("__width"),
	HX_CSTRING("bounds"),
	HX_CSTRING("__cairoFont"),
	HX_CSTRING("appendText"),
	HX_CSTRING("getCharBoundaries"),
	HX_CSTRING("getCharIndexAtPoint"),
	HX_CSTRING("getLineIndexAtPoint"),
	HX_CSTRING("getLineMetrics"),
	HX_CSTRING("getLineOffset"),
	HX_CSTRING("getLineText"),
	HX_CSTRING("getTextFormat"),
	HX_CSTRING("setSelection"),
	HX_CSTRING("setTextFormat"),
	HX_CSTRING("__getBounds"),
	HX_CSTRING("__getCursor"),
	HX_CSTRING("__getPosition"),
	HX_CSTRING("__hitTest"),
	HX_CSTRING("__renderCairo"),
	HX_CSTRING("__renderCanvas"),
	HX_CSTRING("__renderDOM"),
	HX_CSTRING("__renderGL"),
	HX_CSTRING("__startCursorTimer"),
	HX_CSTRING("__stopCursorTimer"),
	HX_CSTRING("set_autoSize"),
	HX_CSTRING("set_background"),
	HX_CSTRING("set_backgroundColor"),
	HX_CSTRING("set_border"),
	HX_CSTRING("set_borderColor"),
	HX_CSTRING("get_bottomScrollV"),
	HX_CSTRING("get_bounds"),
	HX_CSTRING("get_caretPos"),
	HX_CSTRING("get_defaultTextFormat"),
	HX_CSTRING("set_defaultTextFormat"),
	HX_CSTRING("get_height"),
	HX_CSTRING("set_height"),
	HX_CSTRING("get_htmlText"),
	HX_CSTRING("set_htmlText"),
	HX_CSTRING("get_maxScrollH"),
	HX_CSTRING("get_maxScrollV"),
	HX_CSTRING("get_numLines"),
	HX_CSTRING("set_selectable"),
	HX_CSTRING("get_text"),
	HX_CSTRING("set_text"),
	HX_CSTRING("get_textColor"),
	HX_CSTRING("set_textColor"),
	HX_CSTRING("get_textWidth"),
	HX_CSTRING("get_textHeight"),
	HX_CSTRING("set_type"),
	HX_CSTRING("get_width"),
	HX_CSTRING("set_width"),
	HX_CSTRING("get_wordWrap"),
	HX_CSTRING("set_wordWrap"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TextField_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(TextField_obj::__defaultTextFormat,"__defaultTextFormat");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TextField_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(TextField_obj::__defaultTextFormat,"__defaultTextFormat");
};

#endif

Class TextField_obj::__mClass;

void TextField_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl.text.TextField"), hx::TCanCast< TextField_obj> ,sStaticFields,sMemberFields,
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

void TextField_obj::__boot()
{
}

} // end namespace openfl
} // end namespace text
