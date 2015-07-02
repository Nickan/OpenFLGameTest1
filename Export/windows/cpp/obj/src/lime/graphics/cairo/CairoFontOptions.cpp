#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_cairo_CairoFontOptions
#include <lime/graphics/cairo/CairoFontOptions.h>
#endif
#ifndef INCLUDED_lime_system_System
#include <lime/system/System.h>
#endif
namespace lime{
namespace graphics{
namespace cairo{

Void CairoFontOptions_obj::__construct(Dynamic handle)
{
HX_STACK_FRAME("lime.graphics.cairo.CairoFontOptions","new",0x8d4576c9,"lime.graphics.cairo.CairoFontOptions.new","lime/graphics/cairo/CairoFontOptions.hx",17,0x355ba586)
HX_STACK_THIS(this)
HX_STACK_ARG(handle,"handle")
{
	HX_STACK_LINE(20)
	if (((handle == null()))){
		HX_STACK_LINE(21)
		Dynamic _g = ::lime::graphics::cairo::CairoFontOptions_obj::lime_cairo_font_options_create();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(21)
		handle = _g;
	}
	HX_STACK_LINE(24)
	this->handle = handle;
}
;
	return null();
}

//CairoFontOptions_obj::~CairoFontOptions_obj() { }

Dynamic CairoFontOptions_obj::__CreateEmpty() { return  new CairoFontOptions_obj; }
hx::ObjectPtr< CairoFontOptions_obj > CairoFontOptions_obj::__new(Dynamic handle)
{  hx::ObjectPtr< CairoFontOptions_obj > result = new CairoFontOptions_obj();
	result->__construct(handle);
	return result;}

Dynamic CairoFontOptions_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CairoFontOptions_obj > result = new CairoFontOptions_obj();
	result->__construct(inArgs[0]);
	return result;}

int CairoFontOptions_obj::get_antialias( ){
	HX_STACK_FRAME("lime.graphics.cairo.CairoFontOptions","get_antialias",0xd044ce2e,"lime.graphics.cairo.CairoFontOptions.get_antialias","lime/graphics/cairo/CairoFontOptions.hx",27,0x355ba586)
	HX_STACK_THIS(this)
	HX_STACK_LINE(30)
	return ::lime::graphics::cairo::CairoFontOptions_obj::lime_cairo_font_options_get_antialias(this->handle);
	HX_STACK_LINE(33)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(CairoFontOptions_obj,get_antialias,return )

int CairoFontOptions_obj::set_antialias( int value){
	HX_STACK_FRAME("lime.graphics.cairo.CairoFontOptions","set_antialias",0x154ab03a,"lime.graphics.cairo.CairoFontOptions.set_antialias","lime/graphics/cairo/CairoFontOptions.hx",38,0x355ba586)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(41)
	::lime::graphics::cairo::CairoFontOptions_obj::lime_cairo_font_options_set_antialias(this->handle,value);
	HX_STACK_LINE(44)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(CairoFontOptions_obj,set_antialias,return )

int CairoFontOptions_obj::get_subpixelOrder( ){
	HX_STACK_FRAME("lime.graphics.cairo.CairoFontOptions","get_subpixelOrder",0xc7167528,"lime.graphics.cairo.CairoFontOptions.get_subpixelOrder","lime/graphics/cairo/CairoFontOptions.hx",48,0x355ba586)
	HX_STACK_THIS(this)
	HX_STACK_LINE(51)
	return ::lime::graphics::cairo::CairoFontOptions_obj::lime_cairo_font_options_get_subpixel_order(this->handle);
	HX_STACK_LINE(54)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(CairoFontOptions_obj,get_subpixelOrder,return )

int CairoFontOptions_obj::set_subpixelOrder( int value){
	HX_STACK_FRAME("lime.graphics.cairo.CairoFontOptions","set_subpixelOrder",0xea844d34,"lime.graphics.cairo.CairoFontOptions.set_subpixelOrder","lime/graphics/cairo/CairoFontOptions.hx",59,0x355ba586)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(62)
	::lime::graphics::cairo::CairoFontOptions_obj::lime_cairo_font_options_set_subpixel_order(this->handle,value);
	HX_STACK_LINE(65)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(CairoFontOptions_obj,set_subpixelOrder,return )

int CairoFontOptions_obj::get_hintStyle( ){
	HX_STACK_FRAME("lime.graphics.cairo.CairoFontOptions","get_hintStyle",0xd90865aa,"lime.graphics.cairo.CairoFontOptions.get_hintStyle","lime/graphics/cairo/CairoFontOptions.hx",69,0x355ba586)
	HX_STACK_THIS(this)
	HX_STACK_LINE(72)
	return ::lime::graphics::cairo::CairoFontOptions_obj::lime_cairo_font_options_get_hint_style(this->handle);
	HX_STACK_LINE(75)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(CairoFontOptions_obj,get_hintStyle,return )

int CairoFontOptions_obj::set_hintStyle( int value){
	HX_STACK_FRAME("lime.graphics.cairo.CairoFontOptions","set_hintStyle",0x1e0e47b6,"lime.graphics.cairo.CairoFontOptions.set_hintStyle","lime/graphics/cairo/CairoFontOptions.hx",79,0x355ba586)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(82)
	::lime::graphics::cairo::CairoFontOptions_obj::lime_cairo_font_options_set_hint_style(this->handle,value);
	HX_STACK_LINE(85)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(CairoFontOptions_obj,set_hintStyle,return )

int CairoFontOptions_obj::get_hintMetrics( ){
	HX_STACK_FRAME("lime.graphics.cairo.CairoFontOptions","get_hintMetrics",0xa24b32fc,"lime.graphics.cairo.CairoFontOptions.get_hintMetrics","lime/graphics/cairo/CairoFontOptions.hx",88,0x355ba586)
	HX_STACK_THIS(this)
	HX_STACK_LINE(91)
	return ::lime::graphics::cairo::CairoFontOptions_obj::lime_cairo_font_options_get_hint_metrics(this->handle);
	HX_STACK_LINE(94)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(CairoFontOptions_obj,get_hintMetrics,return )

int CairoFontOptions_obj::set_hintMetrics( int value){
	HX_STACK_FRAME("lime.graphics.cairo.CairoFontOptions","set_hintMetrics",0x9e16b008,"lime.graphics.cairo.CairoFontOptions.set_hintMetrics","lime/graphics/cairo/CairoFontOptions.hx",97,0x355ba586)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(100)
	::lime::graphics::cairo::CairoFontOptions_obj::lime_cairo_font_options_set_hint_metrics(this->handle,value);
	HX_STACK_LINE(103)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(CairoFontOptions_obj,set_hintMetrics,return )

Dynamic CairoFontOptions_obj::lime_cairo_font_options_create;

Dynamic CairoFontOptions_obj::lime_cairo_font_options_get_antialias;

Dynamic CairoFontOptions_obj::lime_cairo_font_options_get_subpixel_order;

Dynamic CairoFontOptions_obj::lime_cairo_font_options_get_hint_style;

Dynamic CairoFontOptions_obj::lime_cairo_font_options_get_hint_metrics;

Dynamic CairoFontOptions_obj::lime_cairo_font_options_set_antialias;

Dynamic CairoFontOptions_obj::lime_cairo_font_options_set_subpixel_order;

Dynamic CairoFontOptions_obj::lime_cairo_font_options_set_hint_style;

Dynamic CairoFontOptions_obj::lime_cairo_font_options_set_hint_metrics;


CairoFontOptions_obj::CairoFontOptions_obj()
{
}

void CairoFontOptions_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CairoFontOptions);
	HX_MARK_MEMBER_NAME(handle,"handle");
	HX_MARK_END_CLASS();
}

void CairoFontOptions_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(handle,"handle");
}

Dynamic CairoFontOptions_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"handle") ) { return handle; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"antialias") ) { return get_antialias(); }
		if (HX_FIELD_EQ(inName,"hintStyle") ) { return get_hintStyle(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"hintMetrics") ) { return get_hintMetrics(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"subpixelOrder") ) { return get_subpixelOrder(); }
		if (HX_FIELD_EQ(inName,"get_antialias") ) { return get_antialias_dyn(); }
		if (HX_FIELD_EQ(inName,"set_antialias") ) { return set_antialias_dyn(); }
		if (HX_FIELD_EQ(inName,"get_hintStyle") ) { return get_hintStyle_dyn(); }
		if (HX_FIELD_EQ(inName,"set_hintStyle") ) { return set_hintStyle_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_hintMetrics") ) { return get_hintMetrics_dyn(); }
		if (HX_FIELD_EQ(inName,"set_hintMetrics") ) { return set_hintMetrics_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_subpixelOrder") ) { return get_subpixelOrder_dyn(); }
		if (HX_FIELD_EQ(inName,"set_subpixelOrder") ) { return set_subpixelOrder_dyn(); }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"lime_cairo_font_options_create") ) { return lime_cairo_font_options_create; }
		break;
	case 37:
		if (HX_FIELD_EQ(inName,"lime_cairo_font_options_get_antialias") ) { return lime_cairo_font_options_get_antialias; }
		if (HX_FIELD_EQ(inName,"lime_cairo_font_options_set_antialias") ) { return lime_cairo_font_options_set_antialias; }
		break;
	case 38:
		if (HX_FIELD_EQ(inName,"lime_cairo_font_options_get_hint_style") ) { return lime_cairo_font_options_get_hint_style; }
		if (HX_FIELD_EQ(inName,"lime_cairo_font_options_set_hint_style") ) { return lime_cairo_font_options_set_hint_style; }
		break;
	case 40:
		if (HX_FIELD_EQ(inName,"lime_cairo_font_options_get_hint_metrics") ) { return lime_cairo_font_options_get_hint_metrics; }
		if (HX_FIELD_EQ(inName,"lime_cairo_font_options_set_hint_metrics") ) { return lime_cairo_font_options_set_hint_metrics; }
		break;
	case 42:
		if (HX_FIELD_EQ(inName,"lime_cairo_font_options_get_subpixel_order") ) { return lime_cairo_font_options_get_subpixel_order; }
		if (HX_FIELD_EQ(inName,"lime_cairo_font_options_set_subpixel_order") ) { return lime_cairo_font_options_set_subpixel_order; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic CairoFontOptions_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"handle") ) { handle=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"antialias") ) { return set_antialias(inValue); }
		if (HX_FIELD_EQ(inName,"hintStyle") ) { return set_hintStyle(inValue); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"hintMetrics") ) { return set_hintMetrics(inValue); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"subpixelOrder") ) { return set_subpixelOrder(inValue); }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"lime_cairo_font_options_create") ) { lime_cairo_font_options_create=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 37:
		if (HX_FIELD_EQ(inName,"lime_cairo_font_options_get_antialias") ) { lime_cairo_font_options_get_antialias=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_cairo_font_options_set_antialias") ) { lime_cairo_font_options_set_antialias=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 38:
		if (HX_FIELD_EQ(inName,"lime_cairo_font_options_get_hint_style") ) { lime_cairo_font_options_get_hint_style=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_cairo_font_options_set_hint_style") ) { lime_cairo_font_options_set_hint_style=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 40:
		if (HX_FIELD_EQ(inName,"lime_cairo_font_options_get_hint_metrics") ) { lime_cairo_font_options_get_hint_metrics=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_cairo_font_options_set_hint_metrics") ) { lime_cairo_font_options_set_hint_metrics=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 42:
		if (HX_FIELD_EQ(inName,"lime_cairo_font_options_get_subpixel_order") ) { lime_cairo_font_options_get_subpixel_order=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_cairo_font_options_set_subpixel_order") ) { lime_cairo_font_options_set_subpixel_order=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CairoFontOptions_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("antialias"));
	outFields->push(HX_CSTRING("subpixelOrder"));
	outFields->push(HX_CSTRING("hintStyle"));
	outFields->push(HX_CSTRING("hintMetrics"));
	outFields->push(HX_CSTRING("handle"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("lime_cairo_font_options_create"),
	HX_CSTRING("lime_cairo_font_options_get_antialias"),
	HX_CSTRING("lime_cairo_font_options_get_subpixel_order"),
	HX_CSTRING("lime_cairo_font_options_get_hint_style"),
	HX_CSTRING("lime_cairo_font_options_get_hint_metrics"),
	HX_CSTRING("lime_cairo_font_options_set_antialias"),
	HX_CSTRING("lime_cairo_font_options_set_subpixel_order"),
	HX_CSTRING("lime_cairo_font_options_set_hint_style"),
	HX_CSTRING("lime_cairo_font_options_set_hint_metrics"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(CairoFontOptions_obj,handle),HX_CSTRING("handle")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("handle"),
	HX_CSTRING("get_antialias"),
	HX_CSTRING("set_antialias"),
	HX_CSTRING("get_subpixelOrder"),
	HX_CSTRING("set_subpixelOrder"),
	HX_CSTRING("get_hintStyle"),
	HX_CSTRING("set_hintStyle"),
	HX_CSTRING("get_hintMetrics"),
	HX_CSTRING("set_hintMetrics"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CairoFontOptions_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(CairoFontOptions_obj::lime_cairo_font_options_create,"lime_cairo_font_options_create");
	HX_MARK_MEMBER_NAME(CairoFontOptions_obj::lime_cairo_font_options_get_antialias,"lime_cairo_font_options_get_antialias");
	HX_MARK_MEMBER_NAME(CairoFontOptions_obj::lime_cairo_font_options_get_subpixel_order,"lime_cairo_font_options_get_subpixel_order");
	HX_MARK_MEMBER_NAME(CairoFontOptions_obj::lime_cairo_font_options_get_hint_style,"lime_cairo_font_options_get_hint_style");
	HX_MARK_MEMBER_NAME(CairoFontOptions_obj::lime_cairo_font_options_get_hint_metrics,"lime_cairo_font_options_get_hint_metrics");
	HX_MARK_MEMBER_NAME(CairoFontOptions_obj::lime_cairo_font_options_set_antialias,"lime_cairo_font_options_set_antialias");
	HX_MARK_MEMBER_NAME(CairoFontOptions_obj::lime_cairo_font_options_set_subpixel_order,"lime_cairo_font_options_set_subpixel_order");
	HX_MARK_MEMBER_NAME(CairoFontOptions_obj::lime_cairo_font_options_set_hint_style,"lime_cairo_font_options_set_hint_style");
	HX_MARK_MEMBER_NAME(CairoFontOptions_obj::lime_cairo_font_options_set_hint_metrics,"lime_cairo_font_options_set_hint_metrics");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CairoFontOptions_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(CairoFontOptions_obj::lime_cairo_font_options_create,"lime_cairo_font_options_create");
	HX_VISIT_MEMBER_NAME(CairoFontOptions_obj::lime_cairo_font_options_get_antialias,"lime_cairo_font_options_get_antialias");
	HX_VISIT_MEMBER_NAME(CairoFontOptions_obj::lime_cairo_font_options_get_subpixel_order,"lime_cairo_font_options_get_subpixel_order");
	HX_VISIT_MEMBER_NAME(CairoFontOptions_obj::lime_cairo_font_options_get_hint_style,"lime_cairo_font_options_get_hint_style");
	HX_VISIT_MEMBER_NAME(CairoFontOptions_obj::lime_cairo_font_options_get_hint_metrics,"lime_cairo_font_options_get_hint_metrics");
	HX_VISIT_MEMBER_NAME(CairoFontOptions_obj::lime_cairo_font_options_set_antialias,"lime_cairo_font_options_set_antialias");
	HX_VISIT_MEMBER_NAME(CairoFontOptions_obj::lime_cairo_font_options_set_subpixel_order,"lime_cairo_font_options_set_subpixel_order");
	HX_VISIT_MEMBER_NAME(CairoFontOptions_obj::lime_cairo_font_options_set_hint_style,"lime_cairo_font_options_set_hint_style");
	HX_VISIT_MEMBER_NAME(CairoFontOptions_obj::lime_cairo_font_options_set_hint_metrics,"lime_cairo_font_options_set_hint_metrics");
};

#endif

Class CairoFontOptions_obj::__mClass;

void CairoFontOptions_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("lime.graphics.cairo.CairoFontOptions"), hx::TCanCast< CairoFontOptions_obj> ,sStaticFields,sMemberFields,
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

void CairoFontOptions_obj::__boot()
{
	lime_cairo_font_options_create= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_cairo_font_options_create"),(int)0,null());
	lime_cairo_font_options_get_antialias= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_cairo_font_options_get_antialias"),(int)1,null());
	lime_cairo_font_options_get_subpixel_order= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_cairo_font_options_get_subpixel_order"),(int)1,null());
	lime_cairo_font_options_get_hint_style= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_cairo_font_options_get_hint_style"),(int)1,null());
	lime_cairo_font_options_get_hint_metrics= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_cairo_font_options_get_hint_metrics"),(int)1,null());
	lime_cairo_font_options_set_antialias= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_cairo_font_options_set_antialias"),(int)2,null());
	lime_cairo_font_options_set_subpixel_order= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_cairo_font_options_set_subpixel_order"),(int)2,null());
	lime_cairo_font_options_set_hint_style= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_cairo_font_options_set_hint_style"),(int)2,null());
	lime_cairo_font_options_set_hint_metrics= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_cairo_font_options_set_hint_metrics"),(int)2,null());
}

} // end namespace lime
} // end namespace graphics
} // end namespace cairo
