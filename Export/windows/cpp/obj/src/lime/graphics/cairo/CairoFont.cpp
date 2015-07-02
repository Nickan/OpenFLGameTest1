#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_cairo_CairoFont
#include <lime/graphics/cairo/CairoFont.h>
#endif
#ifndef INCLUDED_lime_system_System
#include <lime/system/System.h>
#endif
#ifndef INCLUDED_lime_text_Font
#include <lime/text/Font.h>
#endif
namespace lime{
namespace graphics{
namespace cairo{

Void CairoFont_obj::__construct(::lime::text::Font font)
{
HX_STACK_FRAME("lime.graphics.cairo.CairoFont","new",0x8856a439,"lime.graphics.cairo.CairoFont.new","lime/graphics/cairo/CairoFont.hx",11,0xfe48f2b8)
HX_STACK_THIS(this)
HX_STACK_ARG(font,"font")
{
	HX_STACK_LINE(14)
	this->font = font;
	HX_STACK_LINE(15)
	Dynamic _g = ::lime::graphics::cairo::CairoFont_obj::lime_cairo_ft_font_face_create_for_ft_face(font->src,(int)0);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(15)
	this->handle = _g;
}
;
	return null();
}

//CairoFont_obj::~CairoFont_obj() { }

Dynamic CairoFont_obj::__CreateEmpty() { return  new CairoFont_obj; }
hx::ObjectPtr< CairoFont_obj > CairoFont_obj::__new(::lime::text::Font font)
{  hx::ObjectPtr< CairoFont_obj > result = new CairoFont_obj();
	result->__construct(font);
	return result;}

Dynamic CairoFont_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CairoFont_obj > result = new CairoFont_obj();
	result->__construct(inArgs[0]);
	return result;}

Void CairoFont_obj::destroy( ){
{
		HX_STACK_FRAME("lime.graphics.cairo.CairoFont","destroy",0x53e26153,"lime.graphics.cairo.CairoFont.destroy","lime/graphics/cairo/CairoFont.hx",21,0xfe48f2b8)
		HX_STACK_THIS(this)
		HX_STACK_LINE(21)
		::lime::graphics::cairo::CairoFont_obj::lime_cairo_font_face_destroy(this->handle);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(CairoFont_obj,destroy,(void))

Dynamic CairoFont_obj::lime_cairo_ft_font_face_create_for_ft_face;

Dynamic CairoFont_obj::lime_cairo_font_face_destroy;


CairoFont_obj::CairoFont_obj()
{
}

void CairoFont_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CairoFont);
	HX_MARK_MEMBER_NAME(handle,"handle");
	HX_MARK_MEMBER_NAME(font,"font");
	HX_MARK_END_CLASS();
}

void CairoFont_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(handle,"handle");
	HX_VISIT_MEMBER_NAME(font,"font");
}

Dynamic CairoFont_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"font") ) { return font; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"handle") ) { return handle; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"lime_cairo_font_face_destroy") ) { return lime_cairo_font_face_destroy; }
		break;
	case 42:
		if (HX_FIELD_EQ(inName,"lime_cairo_ft_font_face_create_for_ft_face") ) { return lime_cairo_ft_font_face_create_for_ft_face; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic CairoFont_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"font") ) { font=inValue.Cast< ::lime::text::Font >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"handle") ) { handle=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"lime_cairo_font_face_destroy") ) { lime_cairo_font_face_destroy=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 42:
		if (HX_FIELD_EQ(inName,"lime_cairo_ft_font_face_create_for_ft_face") ) { lime_cairo_ft_font_face_create_for_ft_face=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CairoFont_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("handle"));
	outFields->push(HX_CSTRING("font"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("lime_cairo_ft_font_face_create_for_ft_face"),
	HX_CSTRING("lime_cairo_font_face_destroy"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(CairoFont_obj,handle),HX_CSTRING("handle")},
	{hx::fsObject /*::lime::text::Font*/ ,(int)offsetof(CairoFont_obj,font),HX_CSTRING("font")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("handle"),
	HX_CSTRING("font"),
	HX_CSTRING("destroy"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CairoFont_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(CairoFont_obj::lime_cairo_ft_font_face_create_for_ft_face,"lime_cairo_ft_font_face_create_for_ft_face");
	HX_MARK_MEMBER_NAME(CairoFont_obj::lime_cairo_font_face_destroy,"lime_cairo_font_face_destroy");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CairoFont_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(CairoFont_obj::lime_cairo_ft_font_face_create_for_ft_face,"lime_cairo_ft_font_face_create_for_ft_face");
	HX_VISIT_MEMBER_NAME(CairoFont_obj::lime_cairo_font_face_destroy,"lime_cairo_font_face_destroy");
};

#endif

Class CairoFont_obj::__mClass;

void CairoFont_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("lime.graphics.cairo.CairoFont"), hx::TCanCast< CairoFont_obj> ,sStaticFields,sMemberFields,
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

void CairoFont_obj::__boot()
{
	lime_cairo_ft_font_face_create_for_ft_face= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_cairo_ft_font_face_create_for_ft_face"),(int)2,null());
	lime_cairo_font_face_destroy= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_cairo_font_face_destroy"),(int)1,null());
}

} // end namespace lime
} // end namespace graphics
} // end namespace cairo
