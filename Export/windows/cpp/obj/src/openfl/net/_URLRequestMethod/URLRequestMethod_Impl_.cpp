#include <hxcpp.h>

#ifndef INCLUDED_openfl_net__URLRequestMethod_URLRequestMethod_Impl_
#include <openfl/net/_URLRequestMethod/URLRequestMethod_Impl_.h>
#endif
namespace openfl{
namespace net{
namespace _URLRequestMethod{

Void URLRequestMethod_Impl__obj::__construct()
{
	return null();
}

//URLRequestMethod_Impl__obj::~URLRequestMethod_Impl__obj() { }

Dynamic URLRequestMethod_Impl__obj::__CreateEmpty() { return  new URLRequestMethod_Impl__obj; }
hx::ObjectPtr< URLRequestMethod_Impl__obj > URLRequestMethod_Impl__obj::__new()
{  hx::ObjectPtr< URLRequestMethod_Impl__obj > result = new URLRequestMethod_Impl__obj();
	result->__construct();
	return result;}

Dynamic URLRequestMethod_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< URLRequestMethod_Impl__obj > result = new URLRequestMethod_Impl__obj();
	result->__construct();
	return result;}

::String URLRequestMethod_Impl__obj::DELETE;

::String URLRequestMethod_Impl__obj::GET;

::String URLRequestMethod_Impl__obj::HEAD;

::String URLRequestMethod_Impl__obj::OPTIONS;

::String URLRequestMethod_Impl__obj::POST;

::String URLRequestMethod_Impl__obj::PUT;


URLRequestMethod_Impl__obj::URLRequestMethod_Impl__obj()
{
}

Dynamic URLRequestMethod_Impl__obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic URLRequestMethod_Impl__obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void URLRequestMethod_Impl__obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("DELETE"),
	HX_CSTRING("GET"),
	HX_CSTRING("HEAD"),
	HX_CSTRING("OPTIONS"),
	HX_CSTRING("POST"),
	HX_CSTRING("PUT"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(URLRequestMethod_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(URLRequestMethod_Impl__obj::DELETE,"DELETE");
	HX_MARK_MEMBER_NAME(URLRequestMethod_Impl__obj::GET,"GET");
	HX_MARK_MEMBER_NAME(URLRequestMethod_Impl__obj::HEAD,"HEAD");
	HX_MARK_MEMBER_NAME(URLRequestMethod_Impl__obj::OPTIONS,"OPTIONS");
	HX_MARK_MEMBER_NAME(URLRequestMethod_Impl__obj::POST,"POST");
	HX_MARK_MEMBER_NAME(URLRequestMethod_Impl__obj::PUT,"PUT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(URLRequestMethod_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(URLRequestMethod_Impl__obj::DELETE,"DELETE");
	HX_VISIT_MEMBER_NAME(URLRequestMethod_Impl__obj::GET,"GET");
	HX_VISIT_MEMBER_NAME(URLRequestMethod_Impl__obj::HEAD,"HEAD");
	HX_VISIT_MEMBER_NAME(URLRequestMethod_Impl__obj::OPTIONS,"OPTIONS");
	HX_VISIT_MEMBER_NAME(URLRequestMethod_Impl__obj::POST,"POST");
	HX_VISIT_MEMBER_NAME(URLRequestMethod_Impl__obj::PUT,"PUT");
};

#endif

Class URLRequestMethod_Impl__obj::__mClass;

void URLRequestMethod_Impl__obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl.net._URLRequestMethod.URLRequestMethod_Impl_"), hx::TCanCast< URLRequestMethod_Impl__obj> ,sStaticFields,sMemberFields,
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

void URLRequestMethod_Impl__obj::__boot()
{
	DELETE= HX_CSTRING("DELETE");
	GET= HX_CSTRING("GET");
	HEAD= HX_CSTRING("HEAD");
	OPTIONS= HX_CSTRING("OPTIONS");
	POST= HX_CSTRING("POST");
	PUT= HX_CSTRING("PUT");
}

} // end namespace openfl
} // end namespace net
} // end namespace _URLRequestMethod
