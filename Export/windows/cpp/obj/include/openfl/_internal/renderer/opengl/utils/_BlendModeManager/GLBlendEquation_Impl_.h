#ifndef INCLUDED_openfl__internal_renderer_opengl_utils__BlendModeManager_GLBlendEquation_Impl_
#define INCLUDED_openfl__internal_renderer_opengl_utils__BlendModeManager_GLBlendEquation_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS6(openfl,_internal,renderer,opengl,utils,_BlendModeManager,GLBlendEquation_Impl_)
namespace openfl{
namespace _internal{
namespace renderer{
namespace opengl{
namespace utils{
namespace _BlendModeManager{


class HXCPP_CLASS_ATTRIBUTES  GLBlendEquation_Impl__obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef GLBlendEquation_Impl__obj OBJ_;
		GLBlendEquation_Impl__obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< GLBlendEquation_Impl__obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~GLBlendEquation_Impl__obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("GLBlendEquation_Impl_"); }

		static int ADD;
		static int SUBTRACT;
		static int REVERSE_SUBTRACT;
};

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace opengl
} // end namespace utils
} // end namespace _BlendModeManager

#endif /* INCLUDED_openfl__internal_renderer_opengl_utils__BlendModeManager_GLBlendEquation_Impl_ */ 
