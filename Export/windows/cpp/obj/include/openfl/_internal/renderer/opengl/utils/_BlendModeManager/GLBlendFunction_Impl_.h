#ifndef INCLUDED_openfl__internal_renderer_opengl_utils__BlendModeManager_GLBlendFunction_Impl_
#define INCLUDED_openfl__internal_renderer_opengl_utils__BlendModeManager_GLBlendFunction_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS6(openfl,_internal,renderer,opengl,utils,_BlendModeManager,GLBlendFunction_Impl_)
namespace openfl{
namespace _internal{
namespace renderer{
namespace opengl{
namespace utils{
namespace _BlendModeManager{


class HXCPP_CLASS_ATTRIBUTES  GLBlendFunction_Impl__obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef GLBlendFunction_Impl__obj OBJ_;
		GLBlendFunction_Impl__obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< GLBlendFunction_Impl__obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~GLBlendFunction_Impl__obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("GLBlendFunction_Impl_"); }

		static int ZERO;
		static int ONE;
		static int SRC_COLOR;
		static int DST_COLOR;
		static int ONE_MINUS_SRC_COLOR;
		static int ONE_MINUS_DST_COLOR;
		static int CONSTANT_COLOR;
		static int ONE_MINUS_CONSTANT_COLOR;
		static int SRC_ALPHA;
		static int DST_ALPHA;
		static int ONE_MINUS_SRC_ALPHA;
		static int ONE_MINUS_DST_ALPHA;
		static int CONSTANT_ALPHA;
		static int ONE_MINUS_CONSTANT_ALPHA;
		static int SRC_ALPHA_SATURATE;
};

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace opengl
} // end namespace utils
} // end namespace _BlendModeManager

#endif /* INCLUDED_openfl__internal_renderer_opengl_utils__BlendModeManager_GLBlendFunction_Impl_ */ 
