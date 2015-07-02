#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_cairo__CairoHintMetrics_CairoHintMetrics_Impl_
#include <lime/graphics/cairo/_CairoHintMetrics/CairoHintMetrics_Impl_.h>
#endif
namespace lime{
namespace graphics{
namespace cairo{
namespace _CairoHintMetrics{

Void CairoHintMetrics_Impl__obj::__construct()
{
	return null();
}

//CairoHintMetrics_Impl__obj::~CairoHintMetrics_Impl__obj() { }

Dynamic CairoHintMetrics_Impl__obj::__CreateEmpty() { return  new CairoHintMetrics_Impl__obj; }
hx::ObjectPtr< CairoHintMetrics_Impl__obj > CairoHintMetrics_Impl__obj::__new()
{  hx::ObjectPtr< CairoHintMetrics_Impl__obj > result = new CairoHintMetrics_Impl__obj();
	result->__construct();
	return result;}

Dynamic CairoHintMetrics_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CairoHintMetrics_Impl__obj > result = new CairoHintMetrics_Impl__obj();
	result->__construct();
	return result;}

int CairoHintMetrics_Impl__obj::DEFAULT;

int CairoHintMetrics_Impl__obj::OFF;

int CairoHintMetrics_Impl__obj::ON;


CairoHintMetrics_Impl__obj::CairoHintMetrics_Impl__obj()
{
}

Dynamic CairoHintMetrics_Impl__obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic CairoHintMetrics_Impl__obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void CairoHintMetrics_Impl__obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("DEFAULT"),
	HX_CSTRING("OFF"),
	HX_CSTRING("ON"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CairoHintMetrics_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(CairoHintMetrics_Impl__obj::DEFAULT,"DEFAULT");
	HX_MARK_MEMBER_NAME(CairoHintMetrics_Impl__obj::OFF,"OFF");
	HX_MARK_MEMBER_NAME(CairoHintMetrics_Impl__obj::ON,"ON");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CairoHintMetrics_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(CairoHintMetrics_Impl__obj::DEFAULT,"DEFAULT");
	HX_VISIT_MEMBER_NAME(CairoHintMetrics_Impl__obj::OFF,"OFF");
	HX_VISIT_MEMBER_NAME(CairoHintMetrics_Impl__obj::ON,"ON");
};

#endif

Class CairoHintMetrics_Impl__obj::__mClass;

void CairoHintMetrics_Impl__obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("lime.graphics.cairo._CairoHintMetrics.CairoHintMetrics_Impl_"), hx::TCanCast< CairoHintMetrics_Impl__obj> ,sStaticFields,sMemberFields,
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

void CairoHintMetrics_Impl__obj::__boot()
{
	DEFAULT= (int)0;
	OFF= (int)1;
	ON= (int)2;
}

} // end namespace lime
} // end namespace graphics
} // end namespace cairo
} // end namespace _CairoHintMetrics
