#include <hxcpp.h>

#ifndef INCLUDED_openfl__internal_renderer_opengl_utils__BlendModeManager_GLBlendFunction_Impl_
#include <openfl/_internal/renderer/opengl/utils/_BlendModeManager/GLBlendFunction_Impl_.h>
#endif
namespace openfl{
namespace _internal{
namespace renderer{
namespace opengl{
namespace utils{
namespace _BlendModeManager{

Void GLBlendFunction_Impl__obj::__construct()
{
	return null();
}

//GLBlendFunction_Impl__obj::~GLBlendFunction_Impl__obj() { }

Dynamic GLBlendFunction_Impl__obj::__CreateEmpty() { return  new GLBlendFunction_Impl__obj; }
hx::ObjectPtr< GLBlendFunction_Impl__obj > GLBlendFunction_Impl__obj::__new()
{  hx::ObjectPtr< GLBlendFunction_Impl__obj > result = new GLBlendFunction_Impl__obj();
	result->__construct();
	return result;}

Dynamic GLBlendFunction_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GLBlendFunction_Impl__obj > result = new GLBlendFunction_Impl__obj();
	result->__construct();
	return result;}

int GLBlendFunction_Impl__obj::ZERO;

int GLBlendFunction_Impl__obj::ONE;

int GLBlendFunction_Impl__obj::SRC_COLOR;

int GLBlendFunction_Impl__obj::DST_COLOR;

int GLBlendFunction_Impl__obj::ONE_MINUS_SRC_COLOR;

int GLBlendFunction_Impl__obj::ONE_MINUS_DST_COLOR;

int GLBlendFunction_Impl__obj::CONSTANT_COLOR;

int GLBlendFunction_Impl__obj::ONE_MINUS_CONSTANT_COLOR;

int GLBlendFunction_Impl__obj::SRC_ALPHA;

int GLBlendFunction_Impl__obj::DST_ALPHA;

int GLBlendFunction_Impl__obj::ONE_MINUS_SRC_ALPHA;

int GLBlendFunction_Impl__obj::ONE_MINUS_DST_ALPHA;

int GLBlendFunction_Impl__obj::CONSTANT_ALPHA;

int GLBlendFunction_Impl__obj::ONE_MINUS_CONSTANT_ALPHA;

int GLBlendFunction_Impl__obj::SRC_ALPHA_SATURATE;


GLBlendFunction_Impl__obj::GLBlendFunction_Impl__obj()
{
}

Dynamic GLBlendFunction_Impl__obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic GLBlendFunction_Impl__obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void GLBlendFunction_Impl__obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("ZERO"),
	HX_CSTRING("ONE"),
	HX_CSTRING("SRC_COLOR"),
	HX_CSTRING("DST_COLOR"),
	HX_CSTRING("ONE_MINUS_SRC_COLOR"),
	HX_CSTRING("ONE_MINUS_DST_COLOR"),
	HX_CSTRING("CONSTANT_COLOR"),
	HX_CSTRING("ONE_MINUS_CONSTANT_COLOR"),
	HX_CSTRING("SRC_ALPHA"),
	HX_CSTRING("DST_ALPHA"),
	HX_CSTRING("ONE_MINUS_SRC_ALPHA"),
	HX_CSTRING("ONE_MINUS_DST_ALPHA"),
	HX_CSTRING("CONSTANT_ALPHA"),
	HX_CSTRING("ONE_MINUS_CONSTANT_ALPHA"),
	HX_CSTRING("SRC_ALPHA_SATURATE"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GLBlendFunction_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(GLBlendFunction_Impl__obj::ZERO,"ZERO");
	HX_MARK_MEMBER_NAME(GLBlendFunction_Impl__obj::ONE,"ONE");
	HX_MARK_MEMBER_NAME(GLBlendFunction_Impl__obj::SRC_COLOR,"SRC_COLOR");
	HX_MARK_MEMBER_NAME(GLBlendFunction_Impl__obj::DST_COLOR,"DST_COLOR");
	HX_MARK_MEMBER_NAME(GLBlendFunction_Impl__obj::ONE_MINUS_SRC_COLOR,"ONE_MINUS_SRC_COLOR");
	HX_MARK_MEMBER_NAME(GLBlendFunction_Impl__obj::ONE_MINUS_DST_COLOR,"ONE_MINUS_DST_COLOR");
	HX_MARK_MEMBER_NAME(GLBlendFunction_Impl__obj::CONSTANT_COLOR,"CONSTANT_COLOR");
	HX_MARK_MEMBER_NAME(GLBlendFunction_Impl__obj::ONE_MINUS_CONSTANT_COLOR,"ONE_MINUS_CONSTANT_COLOR");
	HX_MARK_MEMBER_NAME(GLBlendFunction_Impl__obj::SRC_ALPHA,"SRC_ALPHA");
	HX_MARK_MEMBER_NAME(GLBlendFunction_Impl__obj::DST_ALPHA,"DST_ALPHA");
	HX_MARK_MEMBER_NAME(GLBlendFunction_Impl__obj::ONE_MINUS_SRC_ALPHA,"ONE_MINUS_SRC_ALPHA");
	HX_MARK_MEMBER_NAME(GLBlendFunction_Impl__obj::ONE_MINUS_DST_ALPHA,"ONE_MINUS_DST_ALPHA");
	HX_MARK_MEMBER_NAME(GLBlendFunction_Impl__obj::CONSTANT_ALPHA,"CONSTANT_ALPHA");
	HX_MARK_MEMBER_NAME(GLBlendFunction_Impl__obj::ONE_MINUS_CONSTANT_ALPHA,"ONE_MINUS_CONSTANT_ALPHA");
	HX_MARK_MEMBER_NAME(GLBlendFunction_Impl__obj::SRC_ALPHA_SATURATE,"SRC_ALPHA_SATURATE");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GLBlendFunction_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(GLBlendFunction_Impl__obj::ZERO,"ZERO");
	HX_VISIT_MEMBER_NAME(GLBlendFunction_Impl__obj::ONE,"ONE");
	HX_VISIT_MEMBER_NAME(GLBlendFunction_Impl__obj::SRC_COLOR,"SRC_COLOR");
	HX_VISIT_MEMBER_NAME(GLBlendFunction_Impl__obj::DST_COLOR,"DST_COLOR");
	HX_VISIT_MEMBER_NAME(GLBlendFunction_Impl__obj::ONE_MINUS_SRC_COLOR,"ONE_MINUS_SRC_COLOR");
	HX_VISIT_MEMBER_NAME(GLBlendFunction_Impl__obj::ONE_MINUS_DST_COLOR,"ONE_MINUS_DST_COLOR");
	HX_VISIT_MEMBER_NAME(GLBlendFunction_Impl__obj::CONSTANT_COLOR,"CONSTANT_COLOR");
	HX_VISIT_MEMBER_NAME(GLBlendFunction_Impl__obj::ONE_MINUS_CONSTANT_COLOR,"ONE_MINUS_CONSTANT_COLOR");
	HX_VISIT_MEMBER_NAME(GLBlendFunction_Impl__obj::SRC_ALPHA,"SRC_ALPHA");
	HX_VISIT_MEMBER_NAME(GLBlendFunction_Impl__obj::DST_ALPHA,"DST_ALPHA");
	HX_VISIT_MEMBER_NAME(GLBlendFunction_Impl__obj::ONE_MINUS_SRC_ALPHA,"ONE_MINUS_SRC_ALPHA");
	HX_VISIT_MEMBER_NAME(GLBlendFunction_Impl__obj::ONE_MINUS_DST_ALPHA,"ONE_MINUS_DST_ALPHA");
	HX_VISIT_MEMBER_NAME(GLBlendFunction_Impl__obj::CONSTANT_ALPHA,"CONSTANT_ALPHA");
	HX_VISIT_MEMBER_NAME(GLBlendFunction_Impl__obj::ONE_MINUS_CONSTANT_ALPHA,"ONE_MINUS_CONSTANT_ALPHA");
	HX_VISIT_MEMBER_NAME(GLBlendFunction_Impl__obj::SRC_ALPHA_SATURATE,"SRC_ALPHA_SATURATE");
};

#endif

Class GLBlendFunction_Impl__obj::__mClass;

void GLBlendFunction_Impl__obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl._internal.renderer.opengl.utils._BlendModeManager.GLBlendFunction_Impl_"), hx::TCanCast< GLBlendFunction_Impl__obj> ,sStaticFields,sMemberFields,
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

void GLBlendFunction_Impl__obj::__boot()
{
	ZERO= (int)0;
	ONE= (int)1;
	SRC_COLOR= (int)768;
	DST_COLOR= (int)774;
	ONE_MINUS_SRC_COLOR= (int)769;
	ONE_MINUS_DST_COLOR= (int)775;
	CONSTANT_COLOR= (int)32769;
	ONE_MINUS_CONSTANT_COLOR= (int)32770;
	SRC_ALPHA= (int)770;
	DST_ALPHA= (int)772;
	ONE_MINUS_SRC_ALPHA= (int)771;
	ONE_MINUS_DST_ALPHA= (int)773;
	CONSTANT_ALPHA= (int)32771;
	ONE_MINUS_CONSTANT_ALPHA= (int)32772;
	SRC_ALPHA_SATURATE= (int)776;
}

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace opengl
} // end namespace utils
} // end namespace _BlendModeManager
