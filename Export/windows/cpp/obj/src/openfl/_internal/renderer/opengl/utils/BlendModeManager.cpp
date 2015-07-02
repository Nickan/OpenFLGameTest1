#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_BalancedTree
#include <haxe/ds/BalancedTree.h>
#endif
#ifndef INCLUDED_haxe_ds_EnumValueMap
#include <haxe/ds/EnumValueMap.h>
#endif
#ifndef INCLUDED_lime_graphics_GLRenderContext
#include <lime/graphics/GLRenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GL
#include <lime/graphics/opengl/GL.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_BlendModeManager
#include <openfl/_internal/renderer/opengl/utils/BlendModeManager.h>
#endif
#ifndef INCLUDED_openfl_display_BlendMode
#include <openfl/display/BlendMode.h>
#endif
namespace openfl{
namespace _internal{
namespace renderer{
namespace opengl{
namespace utils{

Void BlendModeManager_obj::__construct(::lime::graphics::GLRenderContext gl)
{
HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.BlendModeManager","new",0x5ae5c54c,"openfl._internal.renderer.opengl.utils.BlendModeManager.new","openfl/_internal/renderer/opengl/utils/BlendModeManager.hx",16,0x974feaa1)
HX_STACK_THIS(this)
HX_STACK_ARG(gl,"gl")
{
	HX_STACK_LINE(18)
	this->gl = gl;
	HX_STACK_LINE(19)
	this->currentBlendMode = null();
	HX_STACK_LINE(21)
	if (((::openfl::_internal::renderer::opengl::utils::BlendModeManager_obj::glBlendModes == null()))){
		HX_STACK_LINE(23)
		::haxe::ds::EnumValueMap _g = ::haxe::ds::EnumValueMap_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(23)
		::openfl::_internal::renderer::opengl::utils::BlendModeManager_obj::glBlendModes = _g;
		struct _Function_2_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_internal/renderer/opengl/utils/BlendModeManager.hx",25,0x974feaa1)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("src") , (int)1,false);
					__result->Add(HX_CSTRING("dest") , (int)771,false);
					__result->Add(HX_CSTRING("func") , (int)32774,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(25)
		::openfl::_internal::renderer::opengl::utils::BlendModeManager_obj::glBlendModes->set(::openfl::display::BlendMode_obj::NORMAL,_Function_2_1::Block());
		struct _Function_2_2{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_internal/renderer/opengl/utils/BlendModeManager.hx",26,0x974feaa1)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("src") , (int)1,false);
					__result->Add(HX_CSTRING("dest") , (int)1,false);
					__result->Add(HX_CSTRING("func") , (int)32774,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(26)
		::openfl::_internal::renderer::opengl::utils::BlendModeManager_obj::glBlendModes->set(::openfl::display::BlendMode_obj::ADD,_Function_2_2::Block());
		struct _Function_2_3{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_internal/renderer/opengl/utils/BlendModeManager.hx",27,0x974feaa1)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("src") , (int)774,false);
					__result->Add(HX_CSTRING("dest") , (int)771,false);
					__result->Add(HX_CSTRING("func") , (int)32774,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(27)
		::openfl::_internal::renderer::opengl::utils::BlendModeManager_obj::glBlendModes->set(::openfl::display::BlendMode_obj::MULTIPLY,_Function_2_3::Block());
		struct _Function_2_4{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_internal/renderer/opengl/utils/BlendModeManager.hx",28,0x974feaa1)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("src") , (int)1,false);
					__result->Add(HX_CSTRING("dest") , (int)769,false);
					__result->Add(HX_CSTRING("func") , (int)32774,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(28)
		::openfl::_internal::renderer::opengl::utils::BlendModeManager_obj::glBlendModes->set(::openfl::display::BlendMode_obj::SCREEN,_Function_2_4::Block());
		struct _Function_2_5{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_internal/renderer/opengl/utils/BlendModeManager.hx",29,0x974feaa1)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("src") , (int)1,false);
					__result->Add(HX_CSTRING("dest") , (int)1,false);
					__result->Add(HX_CSTRING("func") , (int)32779,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(29)
		::openfl::_internal::renderer::opengl::utils::BlendModeManager_obj::glBlendModes->set(::openfl::display::BlendMode_obj::SUBTRACT,_Function_2_5::Block());
		struct _Function_2_6{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_internal/renderer/opengl/utils/BlendModeManager.hx",32,0x974feaa1)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("src") , (int)1,false);
					__result->Add(HX_CSTRING("dest") , (int)771,false);
					__result->Add(HX_CSTRING("func") , (int)32774,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(32)
		::openfl::_internal::renderer::opengl::utils::BlendModeManager_obj::glBlendModes->set(::openfl::display::BlendMode_obj::LAYER,_Function_2_6::Block());
		struct _Function_2_7{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_internal/renderer/opengl/utils/BlendModeManager.hx",34,0x974feaa1)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("src") , (int)1,false);
					__result->Add(HX_CSTRING("dest") , (int)771,false);
					__result->Add(HX_CSTRING("func") , (int)32774,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(34)
		::openfl::_internal::renderer::opengl::utils::BlendModeManager_obj::glBlendModes->set(::openfl::display::BlendMode_obj::DARKEN,_Function_2_7::Block());
		struct _Function_2_8{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_internal/renderer/opengl/utils/BlendModeManager.hx",36,0x974feaa1)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("src") , (int)1,false);
					__result->Add(HX_CSTRING("dest") , (int)771,false);
					__result->Add(HX_CSTRING("func") , (int)32774,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(36)
		::openfl::_internal::renderer::opengl::utils::BlendModeManager_obj::glBlendModes->set(::openfl::display::BlendMode_obj::LIGHTEN,_Function_2_8::Block());
		struct _Function_2_9{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_internal/renderer/opengl/utils/BlendModeManager.hx",38,0x974feaa1)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("src") , (int)1,false);
					__result->Add(HX_CSTRING("dest") , (int)771,false);
					__result->Add(HX_CSTRING("func") , (int)32774,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(38)
		::openfl::_internal::renderer::opengl::utils::BlendModeManager_obj::glBlendModes->set(::openfl::display::BlendMode_obj::ERASE,_Function_2_9::Block());
		struct _Function_2_10{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_internal/renderer/opengl/utils/BlendModeManager.hx",40,0x974feaa1)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("src") , (int)1,false);
					__result->Add(HX_CSTRING("dest") , (int)771,false);
					__result->Add(HX_CSTRING("func") , (int)32774,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(40)
		::openfl::_internal::renderer::opengl::utils::BlendModeManager_obj::glBlendModes->set(::openfl::display::BlendMode_obj::ALPHA,_Function_2_10::Block());
		struct _Function_2_11{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_internal/renderer/opengl/utils/BlendModeManager.hx",43,0x974feaa1)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("src") , (int)1,false);
					__result->Add(HX_CSTRING("dest") , (int)771,false);
					__result->Add(HX_CSTRING("func") , (int)32774,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(43)
		::openfl::_internal::renderer::opengl::utils::BlendModeManager_obj::glBlendModes->set(::openfl::display::BlendMode_obj::INVERT,_Function_2_11::Block());
		struct _Function_2_12{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_internal/renderer/opengl/utils/BlendModeManager.hx",44,0x974feaa1)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("src") , (int)1,false);
					__result->Add(HX_CSTRING("dest") , (int)771,false);
					__result->Add(HX_CSTRING("func") , (int)32774,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(44)
		::openfl::_internal::renderer::opengl::utils::BlendModeManager_obj::glBlendModes->set(::openfl::display::BlendMode_obj::DIFFERENCE,_Function_2_12::Block());
		struct _Function_2_13{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_internal/renderer/opengl/utils/BlendModeManager.hx",45,0x974feaa1)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("src") , (int)1,false);
					__result->Add(HX_CSTRING("dest") , (int)771,false);
					__result->Add(HX_CSTRING("func") , (int)32774,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(45)
		::openfl::_internal::renderer::opengl::utils::BlendModeManager_obj::glBlendModes->set(::openfl::display::BlendMode_obj::HARDLIGHT,_Function_2_13::Block());
		struct _Function_2_14{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_internal/renderer/opengl/utils/BlendModeManager.hx",46,0x974feaa1)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("src") , (int)1,false);
					__result->Add(HX_CSTRING("dest") , (int)771,false);
					__result->Add(HX_CSTRING("func") , (int)32774,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(46)
		::openfl::_internal::renderer::opengl::utils::BlendModeManager_obj::glBlendModes->set(::openfl::display::BlendMode_obj::OVERLAY,_Function_2_14::Block());
	}
}
;
	return null();
}

//BlendModeManager_obj::~BlendModeManager_obj() { }

Dynamic BlendModeManager_obj::__CreateEmpty() { return  new BlendModeManager_obj; }
hx::ObjectPtr< BlendModeManager_obj > BlendModeManager_obj::__new(::lime::graphics::GLRenderContext gl)
{  hx::ObjectPtr< BlendModeManager_obj > result = new BlendModeManager_obj();
	result->__construct(gl);
	return result;}

Dynamic BlendModeManager_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BlendModeManager_obj > result = new BlendModeManager_obj();
	result->__construct(inArgs[0]);
	return result;}

Void BlendModeManager_obj::destroy( ){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.BlendModeManager","destroy",0x43b307e6,"openfl._internal.renderer.opengl.utils.BlendModeManager.destroy","openfl/_internal/renderer/opengl/utils/BlendModeManager.hx",55,0x974feaa1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(55)
		this->gl = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BlendModeManager_obj,destroy,(void))

bool BlendModeManager_obj::setBlendMode( ::openfl::display::BlendMode blendMode,Dynamic __o_force){
Dynamic force = __o_force.Default(false);
	HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.BlendModeManager","setBlendMode",0xbabdb1e6,"openfl._internal.renderer.opengl.utils.BlendModeManager.setBlendMode","openfl/_internal/renderer/opengl/utils/BlendModeManager.hx",60,0x974feaa1)
	HX_STACK_THIS(this)
	HX_STACK_ARG(blendMode,"blendMode")
	HX_STACK_ARG(force,"force")
{
		HX_STACK_LINE(62)
		if (((blendMode == null()))){
			HX_STACK_LINE(64)
			blendMode = ::openfl::display::BlendMode_obj::NORMAL;
			HX_STACK_LINE(65)
			force = true;
		}
		HX_STACK_LINE(69)
		if (((bool(!(force)) && bool((this->currentBlendMode == blendMode))))){
			HX_STACK_LINE(71)
			return false;
		}
		HX_STACK_LINE(75)
		this->currentBlendMode = blendMode;
		HX_STACK_LINE(77)
		Dynamic glBlend = ::openfl::_internal::renderer::opengl::utils::BlendModeManager_obj::glBlendModes->get(this->currentBlendMode);		HX_STACK_VAR(glBlend,"glBlend");
		HX_STACK_LINE(78)
		::lime::graphics::opengl::GL_obj::lime_gl_blend_equation(glBlend->__Field(HX_CSTRING("func"),true));
		HX_STACK_LINE(79)
		::lime::graphics::opengl::GL_obj::lime_gl_blend_func(glBlend->__Field(HX_CSTRING("src"),true),glBlend->__Field(HX_CSTRING("dest"),true));
		HX_STACK_LINE(82)
		return true;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(BlendModeManager_obj,setBlendMode,return )

::haxe::ds::EnumValueMap BlendModeManager_obj::glBlendModes;


BlendModeManager_obj::BlendModeManager_obj()
{
}

void BlendModeManager_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BlendModeManager);
	HX_MARK_MEMBER_NAME(currentBlendMode,"currentBlendMode");
	HX_MARK_MEMBER_NAME(gl,"gl");
	HX_MARK_END_CLASS();
}

void BlendModeManager_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(currentBlendMode,"currentBlendMode");
	HX_VISIT_MEMBER_NAME(gl,"gl");
}

Dynamic BlendModeManager_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"gl") ) { return gl; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"glBlendModes") ) { return glBlendModes; }
		if (HX_FIELD_EQ(inName,"setBlendMode") ) { return setBlendMode_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"currentBlendMode") ) { return currentBlendMode; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic BlendModeManager_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"gl") ) { gl=inValue.Cast< ::lime::graphics::GLRenderContext >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"glBlendModes") ) { glBlendModes=inValue.Cast< ::haxe::ds::EnumValueMap >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"currentBlendMode") ) { currentBlendMode=inValue.Cast< ::openfl::display::BlendMode >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BlendModeManager_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("currentBlendMode"));
	outFields->push(HX_CSTRING("gl"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("glBlendModes"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::display::BlendMode*/ ,(int)offsetof(BlendModeManager_obj,currentBlendMode),HX_CSTRING("currentBlendMode")},
	{hx::fsObject /*::lime::graphics::GLRenderContext*/ ,(int)offsetof(BlendModeManager_obj,gl),HX_CSTRING("gl")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("currentBlendMode"),
	HX_CSTRING("gl"),
	HX_CSTRING("destroy"),
	HX_CSTRING("setBlendMode"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BlendModeManager_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(BlendModeManager_obj::glBlendModes,"glBlendModes");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BlendModeManager_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(BlendModeManager_obj::glBlendModes,"glBlendModes");
};

#endif

Class BlendModeManager_obj::__mClass;

void BlendModeManager_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl._internal.renderer.opengl.utils.BlendModeManager"), hx::TCanCast< BlendModeManager_obj> ,sStaticFields,sMemberFields,
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

void BlendModeManager_obj::__boot()
{
	glBlendModes= null();
}

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace opengl
} // end namespace utils
