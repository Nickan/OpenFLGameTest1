#include <hxcpp.h>

#ifndef INCLUDED_haxe_Utf8
#include <haxe/Utf8.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_RenderSession
#include <openfl/_internal/renderer/RenderSession.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_canvas_CanvasTextField
#include <openfl/_internal/renderer/canvas/CanvasTextField.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
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
#ifndef INCLUDED_openfl_text_TextField
#include <openfl/text/TextField.h>
#endif
#ifndef INCLUDED_openfl_text_TextFormat
#include <openfl/text/TextFormat.h>
#endif
namespace openfl{
namespace _internal{
namespace renderer{
namespace canvas{

Void CanvasTextField_obj::__construct()
{
	return null();
}

//CanvasTextField_obj::~CanvasTextField_obj() { }

Dynamic CanvasTextField_obj::__CreateEmpty() { return  new CanvasTextField_obj; }
hx::ObjectPtr< CanvasTextField_obj > CanvasTextField_obj::__new()
{  hx::ObjectPtr< CanvasTextField_obj > result = new CanvasTextField_obj();
	result->__construct();
	return result;}

Dynamic CanvasTextField_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CanvasTextField_obj > result = new CanvasTextField_obj();
	result->__construct();
	return result;}

int CanvasTextField_obj::__utf8_endline_code;

::String CanvasTextField_obj::clipText( ::openfl::text::TextField textField,::String value){
	HX_STACK_FRAME("openfl._internal.renderer.canvas.CanvasTextField","clipText",0x6531abd1,"openfl._internal.renderer.canvas.CanvasTextField.clipText","openfl/_internal/renderer/canvas/CanvasTextField.hx",38,0xcdf61a26)
	HX_STACK_ARG(textField,"textField")
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(40)
	Float textWidth = ::openfl::_internal::renderer::canvas::CanvasTextField_obj::getTextWidth(textField,value);		HX_STACK_VAR(textWidth,"textWidth");
	HX_STACK_LINE(41)
	Float fillPer = (Float(textWidth) / Float(textField->__width));		HX_STACK_VAR(fillPer,"fillPer");
	HX_STACK_LINE(42)
	::String _g2;		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(42)
	if (((fillPer > (int)1))){
		HX_STACK_LINE(42)
		int _g = ::Math_obj::floor((Float(textField->get_text().length) / Float(fillPer)));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(42)
		int _g1 = ((int)-1 * _g);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(42)
		_g2 = textField->get_text().substr(_g1,null());
	}
	else{
		HX_STACK_LINE(42)
		_g2 = textField->get_text();
	}
	HX_STACK_LINE(42)
	textField->set_text(_g2);
	HX_STACK_LINE(43)
	::String _g3 = textField->get_text();		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(43)
	return (_g3 + HX_CSTRING(""));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CanvasTextField_obj,clipText,return )

Void CanvasTextField_obj::disableInputMode( ::openfl::text::TextField textField){
{
		HX_STACK_FRAME("openfl._internal.renderer.canvas.CanvasTextField","disableInputMode",0x782779b9,"openfl._internal.renderer.canvas.CanvasTextField.disableInputMode","openfl/_internal/renderer/canvas/CanvasTextField.hx",48,0xcdf61a26)
		HX_STACK_ARG(textField,"textField")
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CanvasTextField_obj,disableInputMode,(void))

Void CanvasTextField_obj::enableInputMode( ::openfl::text::TextField textField){
{
		HX_STACK_FRAME("openfl._internal.renderer.canvas.CanvasTextField","enableInputMode",0x5a626bd6,"openfl._internal.renderer.canvas.CanvasTextField.enableInputMode","openfl/_internal/renderer/canvas/CanvasTextField.hx",57,0xcdf61a26)
		HX_STACK_ARG(textField,"textField")
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CanvasTextField_obj,enableInputMode,(void))

Array< int > CanvasTextField_obj::getLineBreakIndices( ::openfl::text::TextField textField){
	HX_STACK_FRAME("openfl._internal.renderer.canvas.CanvasTextField","getLineBreakIndices",0x45ce033e,"openfl._internal.renderer.canvas.CanvasTextField.getLineBreakIndices","openfl/_internal/renderer/canvas/CanvasTextField.hx",120,0xcdf61a26)
	HX_STACK_ARG(textField,"textField")
	HX_STACK_LINE(124)
	Array< int > breaks = Array_obj< int >::__new();		HX_STACK_VAR(breaks,"breaks");
	HX_STACK_LINE(126)
	{
		HX_STACK_LINE(126)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(126)
		::String _g = textField->get_text();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(126)
		int _g2 = ::haxe::Utf8_obj::length(_g);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(126)
		while((true)){
			HX_STACK_LINE(126)
			if ((!(((_g1 < _g2))))){
				HX_STACK_LINE(126)
				break;
			}
			HX_STACK_LINE(126)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(128)
			{
				HX_STACK_LINE(130)
				::String _g11 = textField->get_text();		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(130)
				int _char = ::haxe::Utf8_obj::charCodeAt(_g11,i);		HX_STACK_VAR(_char,"char");
				HX_STACK_LINE(132)
				if (((_char == ::openfl::_internal::renderer::canvas::CanvasTextField_obj::__utf8_endline_code))){
					HX_STACK_LINE(134)
					breaks->push(i);
				}
			}
		}
	}
	HX_STACK_LINE(142)
	return breaks;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CanvasTextField_obj,getLineBreakIndices,return )

Float CanvasTextField_obj::getLineWidth( ::openfl::text::TextField textField,int line){
	HX_STACK_FRAME("openfl._internal.renderer.canvas.CanvasTextField","getLineWidth",0x697d1c30,"openfl._internal.renderer.canvas.CanvasTextField.getLineWidth","openfl/_internal/renderer/canvas/CanvasTextField.hx",185,0xcdf61a26)
	HX_STACK_ARG(textField,"textField")
	HX_STACK_ARG(line,"line")
	HX_STACK_LINE(185)
	return (int)0;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CanvasTextField_obj,getLineWidth,return )

Float CanvasTextField_obj::getTextWidth( ::openfl::text::TextField textField,::String text){
	HX_STACK_FRAME("openfl._internal.renderer.canvas.CanvasTextField","getTextWidth",0xbb6fa8d7,"openfl._internal.renderer.canvas.CanvasTextField.getTextWidth","openfl/_internal/renderer/canvas/CanvasTextField.hx",210,0xcdf61a26)
	HX_STACK_ARG(textField,"textField")
	HX_STACK_ARG(text,"text")
	HX_STACK_LINE(210)
	return (int)0;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CanvasTextField_obj,getTextWidth,return )

Array< Float > CanvasTextField_obj::measureText( ::openfl::text::TextField textField,hx::Null< bool >  __o_condense){
bool condense = __o_condense.Default(true);
	HX_STACK_FRAME("openfl._internal.renderer.canvas.CanvasTextField","measureText",0x2534f777,"openfl._internal.renderer.canvas.CanvasTextField.measureText","openfl/_internal/renderer/canvas/CanvasTextField.hx",250,0xcdf61a26)
	HX_STACK_ARG(textField,"textField")
	HX_STACK_ARG(condense,"condense")
{
		HX_STACK_LINE(250)
		return null();
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CanvasTextField_obj,measureText,return )

Void CanvasTextField_obj::render( ::openfl::text::TextField textField,::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl._internal.renderer.canvas.CanvasTextField","render",0xbf0ed28a,"openfl._internal.renderer.canvas.CanvasTextField.render","openfl/_internal/renderer/canvas/CanvasTextField.hx",257,0xcdf61a26)
		HX_STACK_ARG(textField,"textField")
		HX_STACK_ARG(renderSession,"renderSession")
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CanvasTextField_obj,render,(void))

Void CanvasTextField_obj::renderText( ::openfl::text::TextField textField,::String text,::openfl::text::TextFormat format,Float offsetX,::openfl::geom::Rectangle bounds){
{
		HX_STACK_FRAME("openfl._internal.renderer.canvas.CanvasTextField","renderText",0x30fed857,"openfl._internal.renderer.canvas.CanvasTextField.renderText","openfl/_internal/renderer/canvas/CanvasTextField.hx",427,0xcdf61a26)
		HX_STACK_ARG(textField,"textField")
		HX_STACK_ARG(text,"text")
		HX_STACK_ARG(format,"format")
		HX_STACK_ARG(offsetX,"offsetX")
		HX_STACK_ARG(bounds,"bounds")
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(CanvasTextField_obj,renderText,(void))


CanvasTextField_obj::CanvasTextField_obj()
{
}

Dynamic CanvasTextField_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"clipText") ) { return clipText_dyn(); }
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
	case 15:
		if (HX_FIELD_EQ(inName,"enableInputMode") ) { return enableInputMode_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"disableInputMode") ) { return disableInputMode_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"__utf8_endline_code") ) { return __utf8_endline_code; }
		if (HX_FIELD_EQ(inName,"getLineBreakIndices") ) { return getLineBreakIndices_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic CanvasTextField_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 19:
		if (HX_FIELD_EQ(inName,"__utf8_endline_code") ) { __utf8_endline_code=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CanvasTextField_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("__utf8_endline_code"),
	HX_CSTRING("clipText"),
	HX_CSTRING("disableInputMode"),
	HX_CSTRING("enableInputMode"),
	HX_CSTRING("getLineBreakIndices"),
	HX_CSTRING("getLineWidth"),
	HX_CSTRING("getTextWidth"),
	HX_CSTRING("measureText"),
	HX_CSTRING("render"),
	HX_CSTRING("renderText"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CanvasTextField_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(CanvasTextField_obj::__utf8_endline_code,"__utf8_endline_code");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CanvasTextField_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(CanvasTextField_obj::__utf8_endline_code,"__utf8_endline_code");
};

#endif

Class CanvasTextField_obj::__mClass;

void CanvasTextField_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl._internal.renderer.canvas.CanvasTextField"), hx::TCanCast< CanvasTextField_obj> ,sStaticFields,sMemberFields,
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

void CanvasTextField_obj::__boot()
{
	__utf8_endline_code= (int)10;
}

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace canvas
