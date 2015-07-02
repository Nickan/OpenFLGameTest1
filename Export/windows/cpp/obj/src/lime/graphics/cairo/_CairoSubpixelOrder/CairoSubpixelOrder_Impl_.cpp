#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_cairo__CairoSubpixelOrder_CairoSubpixelOrder_Impl_
#include <lime/graphics/cairo/_CairoSubpixelOrder/CairoSubpixelOrder_Impl_.h>
#endif
namespace lime{
namespace graphics{
namespace cairo{
namespace _CairoSubpixelOrder{

Void CairoSubpixelOrder_Impl__obj::__construct()
{
	return null();
}

//CairoSubpixelOrder_Impl__obj::~CairoSubpixelOrder_Impl__obj() { }

Dynamic CairoSubpixelOrder_Impl__obj::__CreateEmpty() { return  new CairoSubpixelOrder_Impl__obj; }
hx::ObjectPtr< CairoSubpixelOrder_Impl__obj > CairoSubpixelOrder_Impl__obj::__new()
{  hx::ObjectPtr< CairoSubpixelOrder_Impl__obj > result = new CairoSubpixelOrder_Impl__obj();
	result->__construct();
	return result;}

Dynamic CairoSubpixelOrder_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CairoSubpixelOrder_Impl__obj > result = new CairoSubpixelOrder_Impl__obj();
	result->__construct();
	return result;}

int CairoSubpixelOrder_Impl__obj::DEFAULT;

int CairoSubpixelOrder_Impl__obj::RGB;

int CairoSubpixelOrder_Impl__obj::BGR;

int CairoSubpixelOrder_Impl__obj::VRGB;

int CairoSubpixelOrder_Impl__obj::VBGR;


CairoSubpixelOrder_Impl__obj::CairoSubpixelOrder_Impl__obj()
{
}

Dynamic CairoSubpixelOrder_Impl__obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic CairoSubpixelOrder_Impl__obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void CairoSubpixelOrder_Impl__obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("DEFAULT"),
	HX_CSTRING("RGB"),
	HX_CSTRING("BGR"),
	HX_CSTRING("VRGB"),
	HX_CSTRING("VBGR"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CairoSubpixelOrder_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(CairoSubpixelOrder_Impl__obj::DEFAULT,"DEFAULT");
	HX_MARK_MEMBER_NAME(CairoSubpixelOrder_Impl__obj::RGB,"RGB");
	HX_MARK_MEMBER_NAME(CairoSubpixelOrder_Impl__obj::BGR,"BGR");
	HX_MARK_MEMBER_NAME(CairoSubpixelOrder_Impl__obj::VRGB,"VRGB");
	HX_MARK_MEMBER_NAME(CairoSubpixelOrder_Impl__obj::VBGR,"VBGR");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CairoSubpixelOrder_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(CairoSubpixelOrder_Impl__obj::DEFAULT,"DEFAULT");
	HX_VISIT_MEMBER_NAME(CairoSubpixelOrder_Impl__obj::RGB,"RGB");
	HX_VISIT_MEMBER_NAME(CairoSubpixelOrder_Impl__obj::BGR,"BGR");
	HX_VISIT_MEMBER_NAME(CairoSubpixelOrder_Impl__obj::VRGB,"VRGB");
	HX_VISIT_MEMBER_NAME(CairoSubpixelOrder_Impl__obj::VBGR,"VBGR");
};

#endif

Class CairoSubpixelOrder_Impl__obj::__mClass;

void CairoSubpixelOrder_Impl__obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("lime.graphics.cairo._CairoSubpixelOrder.CairoSubpixelOrder_Impl_"), hx::TCanCast< CairoSubpixelOrder_Impl__obj> ,sStaticFields,sMemberFields,
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

void CairoSubpixelOrder_Impl__obj::__boot()
{
	DEFAULT= (int)0;
	RGB= (int)1;
	BGR= (int)2;
	VRGB= (int)3;
	VBGR= (int)4;
}

} // end namespace lime
} // end namespace graphics
} // end namespace cairo
} // end namespace _CairoSubpixelOrder
