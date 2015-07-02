#include <hxcpp.h>

#ifndef INCLUDED_openfl__internal_renderer_opengl_utils__BlendModeManager_GLBlendEquation_Impl_
#include <openfl/_internal/renderer/opengl/utils/_BlendModeManager/GLBlendEquation_Impl_.h>
#endif
namespace openfl{
namespace _internal{
namespace renderer{
namespace opengl{
namespace utils{
namespace _BlendModeManager{

Void GLBlendEquation_Impl__obj::__construct()
{
	return null();
}

//GLBlendEquation_Impl__obj::~GLBlendEquation_Impl__obj() { }

Dynamic GLBlendEquation_Impl__obj::__CreateEmpty() { return  new GLBlendEquation_Impl__obj; }
hx::ObjectPtr< GLBlendEquation_Impl__obj > GLBlendEquation_Impl__obj::__new()
{  hx::ObjectPtr< GLBlendEquation_Impl__obj > result = new GLBlendEquation_Impl__obj();
	result->__construct();
	return result;}

Dynamic GLBlendEquation_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GLBlendEquation_Impl__obj > result = new GLBlendEquation_Impl__obj();
	result->__construct();
	return result;}

int GLBlendEquation_Impl__obj::ADD;

int GLBlendEquation_Impl__obj::SUBTRACT;

int GLBlendEquation_Impl__obj::REVERSE_SUBTRACT;


GLBlendEquation_Impl__obj::GLBlendEquation_Impl__obj()
{
}

Dynamic GLBlendEquation_Impl__obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic GLBlendEquation_Impl__obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void GLBlendEquation_Impl__obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("ADD"),
	HX_CSTRING("SUBTRACT"),
	HX_CSTRING("REVERSE_SUBTRACT"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GLBlendEquation_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(GLBlendEquation_Impl__obj::ADD,"ADD");
	HX_MARK_MEMBER_NAME(GLBlendEquation_Impl__obj::SUBTRACT,"SUBTRACT");
	HX_MARK_MEMBER_NAME(GLBlendEquation_Impl__obj::REVERSE_SUBTRACT,"REVERSE_SUBTRACT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GLBlendEquation_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(GLBlendEquation_Impl__obj::ADD,"ADD");
	HX_VISIT_MEMBER_NAME(GLBlendEquation_Impl__obj::SUBTRACT,"SUBTRACT");
	HX_VISIT_MEMBER_NAME(GLBlendEquation_Impl__obj::REVERSE_SUBTRACT,"REVERSE_SUBTRACT");
};

#endif

Class GLBlendEquation_Impl__obj::__mClass;

void GLBlendEquation_Impl__obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl._internal.renderer.opengl.utils._BlendModeManager.GLBlendEquation_Impl_"), hx::TCanCast< GLBlendEquation_Impl__obj> ,sStaticFields,sMemberFields,
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

void GLBlendEquation_Impl__obj::__boot()
{
	ADD= (int)32774;
	SUBTRACT= (int)32778;
	REVERSE_SUBTRACT= (int)32779;
}

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace opengl
} // end namespace utils
} // end namespace _BlendModeManager
