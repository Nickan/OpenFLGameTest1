#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_cairo__CairoHintStyle_CairoHintStyle_Impl_
#include <lime/graphics/cairo/_CairoHintStyle/CairoHintStyle_Impl_.h>
#endif
namespace lime{
namespace graphics{
namespace cairo{
namespace _CairoHintStyle{

Void CairoHintStyle_Impl__obj::__construct()
{
	return null();
}

//CairoHintStyle_Impl__obj::~CairoHintStyle_Impl__obj() { }

Dynamic CairoHintStyle_Impl__obj::__CreateEmpty() { return  new CairoHintStyle_Impl__obj; }
hx::ObjectPtr< CairoHintStyle_Impl__obj > CairoHintStyle_Impl__obj::__new()
{  hx::ObjectPtr< CairoHintStyle_Impl__obj > result = new CairoHintStyle_Impl__obj();
	result->__construct();
	return result;}

Dynamic CairoHintStyle_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CairoHintStyle_Impl__obj > result = new CairoHintStyle_Impl__obj();
	result->__construct();
	return result;}

int CairoHintStyle_Impl__obj::DEFAULT;

int CairoHintStyle_Impl__obj::NONE;

int CairoHintStyle_Impl__obj::SLIGHT;

int CairoHintStyle_Impl__obj::MEDIUM;

int CairoHintStyle_Impl__obj::FULL;


CairoHintStyle_Impl__obj::CairoHintStyle_Impl__obj()
{
}

Dynamic CairoHintStyle_Impl__obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic CairoHintStyle_Impl__obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void CairoHintStyle_Impl__obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("DEFAULT"),
	HX_CSTRING("NONE"),
	HX_CSTRING("SLIGHT"),
	HX_CSTRING("MEDIUM"),
	HX_CSTRING("FULL"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CairoHintStyle_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(CairoHintStyle_Impl__obj::DEFAULT,"DEFAULT");
	HX_MARK_MEMBER_NAME(CairoHintStyle_Impl__obj::NONE,"NONE");
	HX_MARK_MEMBER_NAME(CairoHintStyle_Impl__obj::SLIGHT,"SLIGHT");
	HX_MARK_MEMBER_NAME(CairoHintStyle_Impl__obj::MEDIUM,"MEDIUM");
	HX_MARK_MEMBER_NAME(CairoHintStyle_Impl__obj::FULL,"FULL");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CairoHintStyle_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(CairoHintStyle_Impl__obj::DEFAULT,"DEFAULT");
	HX_VISIT_MEMBER_NAME(CairoHintStyle_Impl__obj::NONE,"NONE");
	HX_VISIT_MEMBER_NAME(CairoHintStyle_Impl__obj::SLIGHT,"SLIGHT");
	HX_VISIT_MEMBER_NAME(CairoHintStyle_Impl__obj::MEDIUM,"MEDIUM");
	HX_VISIT_MEMBER_NAME(CairoHintStyle_Impl__obj::FULL,"FULL");
};

#endif

Class CairoHintStyle_Impl__obj::__mClass;

void CairoHintStyle_Impl__obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("lime.graphics.cairo._CairoHintStyle.CairoHintStyle_Impl_"), hx::TCanCast< CairoHintStyle_Impl__obj> ,sStaticFields,sMemberFields,
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

void CairoHintStyle_Impl__obj::__boot()
{
	DEFAULT= (int)0;
	NONE= (int)1;
	SLIGHT= (int)2;
	MEDIUM= (int)3;
	FULL= (int)4;
}

} // end namespace lime
} // end namespace graphics
} // end namespace cairo
} // end namespace _CairoHintStyle
