#include <hxcpp.h>

#ifndef INCLUDED_openfl_text__TextField_TextFieldLineMetric_Impl_
#include <openfl/text/_TextField/TextFieldLineMetric_Impl_.h>
#endif
namespace openfl{
namespace text{
namespace _TextField{

Void TextFieldLineMetric_Impl__obj::__construct()
{
	return null();
}

//TextFieldLineMetric_Impl__obj::~TextFieldLineMetric_Impl__obj() { }

Dynamic TextFieldLineMetric_Impl__obj::__CreateEmpty() { return  new TextFieldLineMetric_Impl__obj; }
hx::ObjectPtr< TextFieldLineMetric_Impl__obj > TextFieldLineMetric_Impl__obj::__new()
{  hx::ObjectPtr< TextFieldLineMetric_Impl__obj > result = new TextFieldLineMetric_Impl__obj();
	result->__construct();
	return result;}

Dynamic TextFieldLineMetric_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TextFieldLineMetric_Impl__obj > result = new TextFieldLineMetric_Impl__obj();
	result->__construct();
	return result;}

int TextFieldLineMetric_Impl__obj::ASCENDER;

int TextFieldLineMetric_Impl__obj::DESCENDER;

int TextFieldLineMetric_Impl__obj::LINE_HEIGHT;

int TextFieldLineMetric_Impl__obj::LEADING;


TextFieldLineMetric_Impl__obj::TextFieldLineMetric_Impl__obj()
{
}

Dynamic TextFieldLineMetric_Impl__obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic TextFieldLineMetric_Impl__obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void TextFieldLineMetric_Impl__obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("ASCENDER"),
	HX_CSTRING("DESCENDER"),
	HX_CSTRING("LINE_HEIGHT"),
	HX_CSTRING("LEADING"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TextFieldLineMetric_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(TextFieldLineMetric_Impl__obj::ASCENDER,"ASCENDER");
	HX_MARK_MEMBER_NAME(TextFieldLineMetric_Impl__obj::DESCENDER,"DESCENDER");
	HX_MARK_MEMBER_NAME(TextFieldLineMetric_Impl__obj::LINE_HEIGHT,"LINE_HEIGHT");
	HX_MARK_MEMBER_NAME(TextFieldLineMetric_Impl__obj::LEADING,"LEADING");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TextFieldLineMetric_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(TextFieldLineMetric_Impl__obj::ASCENDER,"ASCENDER");
	HX_VISIT_MEMBER_NAME(TextFieldLineMetric_Impl__obj::DESCENDER,"DESCENDER");
	HX_VISIT_MEMBER_NAME(TextFieldLineMetric_Impl__obj::LINE_HEIGHT,"LINE_HEIGHT");
	HX_VISIT_MEMBER_NAME(TextFieldLineMetric_Impl__obj::LEADING,"LEADING");
};

#endif

Class TextFieldLineMetric_Impl__obj::__mClass;

void TextFieldLineMetric_Impl__obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl.text._TextField.TextFieldLineMetric_Impl_"), hx::TCanCast< TextFieldLineMetric_Impl__obj> ,sStaticFields,sMemberFields,
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

void TextFieldLineMetric_Impl__obj::__boot()
{
	ASCENDER= (int)0;
	DESCENDER= (int)1;
	LINE_HEIGHT= (int)2;
	LEADING= (int)3;
}

} // end namespace openfl
} // end namespace text
} // end namespace _TextField
