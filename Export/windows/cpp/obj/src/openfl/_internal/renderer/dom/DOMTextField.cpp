#include <hxcpp.h>

#ifndef INCLUDED_openfl__internal_renderer_RenderSession
#include <openfl/_internal/renderer/RenderSession.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_dom_DOMTextField
#include <openfl/_internal/renderer/dom/DOMTextField.h>
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
#ifndef INCLUDED_openfl_text_TextField
#include <openfl/text/TextField.h>
#endif
#ifndef INCLUDED_openfl_text_TextFormat
#include <openfl/text/TextFormat.h>
#endif
namespace openfl{
namespace _internal{
namespace renderer{
namespace dom{

Void DOMTextField_obj::__construct()
{
	return null();
}

//DOMTextField_obj::~DOMTextField_obj() { }

Dynamic DOMTextField_obj::__CreateEmpty() { return  new DOMTextField_obj; }
hx::ObjectPtr< DOMTextField_obj > DOMTextField_obj::__new()
{  hx::ObjectPtr< DOMTextField_obj > result = new DOMTextField_obj();
	result->__construct();
	return result;}

Dynamic DOMTextField_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DOMTextField_obj > result = new DOMTextField_obj();
	result->__construct();
	return result;}

::String DOMTextField_obj::getFont( ::openfl::text::TextFormat format){
	HX_STACK_FRAME("openfl._internal.renderer.dom.DOMTextField","getFont",0xffe7bbe9,"openfl._internal.renderer.dom.DOMTextField.getFont","openfl/_internal/renderer/dom/DOMTextField.hx",21,0xc9b27f2c)
	HX_STACK_ARG(format,"format")
	HX_STACK_LINE(23)
	::String font;		HX_STACK_VAR(font,"font");
	HX_STACK_LINE(23)
	if ((format->italic)){
		HX_STACK_LINE(23)
		font = HX_CSTRING("italic ");
	}
	else{
		HX_STACK_LINE(23)
		font = HX_CSTRING("normal ");
	}
	HX_STACK_LINE(24)
	hx::AddEq(font,HX_CSTRING("normal "));
	HX_STACK_LINE(25)
	if ((format->bold)){
		HX_STACK_LINE(25)
		hx::AddEq(font,HX_CSTRING("bold "));
	}
	else{
		HX_STACK_LINE(25)
		hx::AddEq(font,HX_CSTRING("normal "));
	}
	HX_STACK_LINE(26)
	hx::AddEq(font,(format->size + HX_CSTRING("px")));
	HX_STACK_LINE(27)
	hx::AddEq(font,((HX_CSTRING("/") + ((format->size + format->leading))) + HX_CSTRING("px ")));
	struct _Function_1_1{
		inline static ::String Block( ::openfl::text::TextFormat &format){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_internal/renderer/dom/DOMTextField.hx",29,0xc9b27f2c)
			{
				HX_STACK_LINE(29)
				::String _g = format->font;		HX_STACK_VAR(_g,"_g");
				struct _Function_2_1{
					inline static ::String Block( ::openfl::text::TextFormat &format,::String &_g){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_internal/renderer/dom/DOMTextField.hx",29,0xc9b27f2c)
						{
							HX_STACK_LINE(29)
							::String _switch_1 = (_g);
							if (  ( _switch_1==HX_CSTRING("_sans"))){
								HX_STACK_LINE(31)
								return HX_CSTRING("sans-serif");
							}
							else if (  ( _switch_1==HX_CSTRING("_serif"))){
								HX_STACK_LINE(32)
								return HX_CSTRING("serif");
							}
							else if (  ( _switch_1==HX_CSTRING("_typewriter"))){
								HX_STACK_LINE(33)
								return HX_CSTRING("monospace");
							}
							else  {
								HX_STACK_LINE(34)
								return ((HX_CSTRING("'") + format->font) + HX_CSTRING("'"));
							}
;
;
						}
						return null();
					}
				};
				HX_STACK_LINE(29)
				return _Function_2_1::Block(format,_g);
			}
			return null();
		}
	};
	HX_STACK_LINE(29)
	hx::AddEq(font,(HX_CSTRING("") + _Function_1_1::Block(format)));
	HX_STACK_LINE(38)
	return font;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(DOMTextField_obj,getFont,return )

Void DOMTextField_obj::measureText( ::openfl::text::TextField textField){
{
		HX_STACK_FRAME("openfl._internal.renderer.dom.DOMTextField","measureText",0x2926ab8f,"openfl._internal.renderer.dom.DOMTextField.measureText","openfl/_internal/renderer/dom/DOMTextField.hx",43,0xc9b27f2c)
		HX_STACK_ARG(textField,"textField")
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(DOMTextField_obj,measureText,(void))

Void DOMTextField_obj::render( ::openfl::text::TextField textField,::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl._internal.renderer.dom.DOMTextField","render",0xcba99572,"openfl._internal.renderer.dom.DOMTextField.render","openfl/_internal/renderer/dom/DOMTextField.hx",85,0xc9b27f2c)
		HX_STACK_ARG(textField,"textField")
		HX_STACK_ARG(renderSession,"renderSession")
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(DOMTextField_obj,render,(void))


DOMTextField_obj::DOMTextField_obj()
{
}

Dynamic DOMTextField_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getFont") ) { return getFont_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"measureText") ) { return measureText_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic DOMTextField_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void DOMTextField_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("getFont"),
	HX_CSTRING("measureText"),
	HX_CSTRING("render"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DOMTextField_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DOMTextField_obj::__mClass,"__mClass");
};

#endif

Class DOMTextField_obj::__mClass;

void DOMTextField_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl._internal.renderer.dom.DOMTextField"), hx::TCanCast< DOMTextField_obj> ,sStaticFields,sMemberFields,
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

void DOMTextField_obj::__boot()
{
}

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace dom
