#ifndef INCLUDED_lime_graphics_cairo__CairoPattern_CairoPattern_Impl_
#define INCLUDED_lime_graphics_cairo__CairoPattern_CairoPattern_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(lime,graphics,cairo,_CairoPattern,CairoPattern_Impl_)
HX_DECLARE_CLASS2(lime,math,Matrix3)
namespace lime{
namespace graphics{
namespace cairo{
namespace _CairoPattern{


class HXCPP_CLASS_ATTRIBUTES  CairoPattern_Impl__obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef CairoPattern_Impl__obj OBJ_;
		CairoPattern_Impl__obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< CairoPattern_Impl__obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~CairoPattern_Impl__obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("CairoPattern_Impl_"); }

		static Dynamic _new( Dynamic handle);
		static Dynamic _new_dyn();

		static Void addColorStopRGB( Dynamic this1,Float offset,Float r,Float g,Float b);
		static Dynamic addColorStopRGB_dyn();

		static Void addColorStopRGBA( Dynamic this1,Float offset,Float r,Float g,Float b,Float a);
		static Dynamic addColorStopRGBA_dyn();

		static Dynamic createForSurface( Dynamic surface);
		static Dynamic createForSurface_dyn();

		static Dynamic createLinear( Float x0,Float y0,Float x1,Float y1);
		static Dynamic createLinear_dyn();

		static Dynamic createRadial( Float cx0,Float cy0,Float radius0,Float cx1,Float cy1,Float radius1);
		static Dynamic createRadial_dyn();

		static Dynamic createRGB( Float r,Float g,Float b);
		static Dynamic createRGB_dyn();

		static Dynamic createRGBA( Float r,Float g,Float b,Float a);
		static Dynamic createRGBA_dyn();

		static Void destroy( Dynamic this1);
		static Dynamic destroy_dyn();

		static int get_colorStopCount( Dynamic this1);
		static Dynamic get_colorStopCount_dyn();

		static int get_extend( Dynamic this1);
		static Dynamic get_extend_dyn();

		static int set_extend( Dynamic this1,int value);
		static Dynamic set_extend_dyn();

		static int get_filter( Dynamic this1);
		static Dynamic get_filter_dyn();

		static int set_filter( Dynamic this1,int value);
		static Dynamic set_filter_dyn();

		static ::lime::math::Matrix3 get_matrix( Dynamic this1);
		static Dynamic get_matrix_dyn();

		static ::lime::math::Matrix3 set_matrix( Dynamic this1,::lime::math::Matrix3 value);
		static Dynamic set_matrix_dyn();

		static Dynamic lime_cairo_pattern_add_color_stop_rgb;
		static Dynamic &lime_cairo_pattern_add_color_stop_rgb_dyn() { return lime_cairo_pattern_add_color_stop_rgb;}
		static Dynamic lime_cairo_pattern_add_color_stop_rgba;
		static Dynamic &lime_cairo_pattern_add_color_stop_rgba_dyn() { return lime_cairo_pattern_add_color_stop_rgba;}
		static Dynamic lime_cairo_pattern_create_for_surface;
		static Dynamic &lime_cairo_pattern_create_for_surface_dyn() { return lime_cairo_pattern_create_for_surface;}
		static Dynamic lime_cairo_pattern_create_linear;
		static Dynamic &lime_cairo_pattern_create_linear_dyn() { return lime_cairo_pattern_create_linear;}
		static Dynamic lime_cairo_pattern_create_radial;
		static Dynamic &lime_cairo_pattern_create_radial_dyn() { return lime_cairo_pattern_create_radial;}
		static Dynamic lime_cairo_pattern_create_rgb;
		static Dynamic &lime_cairo_pattern_create_rgb_dyn() { return lime_cairo_pattern_create_rgb;}
		static Dynamic lime_cairo_pattern_create_rgba;
		static Dynamic &lime_cairo_pattern_create_rgba_dyn() { return lime_cairo_pattern_create_rgba;}
		static Dynamic lime_cairo_pattern_destroy;
		static Dynamic &lime_cairo_pattern_destroy_dyn() { return lime_cairo_pattern_destroy;}
		static Dynamic lime_cairo_pattern_get_color_stop_count;
		static Dynamic &lime_cairo_pattern_get_color_stop_count_dyn() { return lime_cairo_pattern_get_color_stop_count;}
		static Dynamic lime_cairo_pattern_get_extend;
		static Dynamic &lime_cairo_pattern_get_extend_dyn() { return lime_cairo_pattern_get_extend;}
		static Dynamic lime_cairo_pattern_get_filter;
		static Dynamic &lime_cairo_pattern_get_filter_dyn() { return lime_cairo_pattern_get_filter;}
		static Dynamic lime_cairo_pattern_get_matrix;
		static Dynamic &lime_cairo_pattern_get_matrix_dyn() { return lime_cairo_pattern_get_matrix;}
		static Dynamic lime_cairo_pattern_set_extend;
		static Dynamic &lime_cairo_pattern_set_extend_dyn() { return lime_cairo_pattern_set_extend;}
		static Dynamic lime_cairo_pattern_set_filter;
		static Dynamic &lime_cairo_pattern_set_filter_dyn() { return lime_cairo_pattern_set_filter;}
		static Dynamic lime_cairo_pattern_set_matrix;
		static Dynamic &lime_cairo_pattern_set_matrix_dyn() { return lime_cairo_pattern_set_matrix;}
};

} // end namespace lime
} // end namespace graphics
} // end namespace cairo
} // end namespace _CairoPattern

#endif /* INCLUDED_lime_graphics_cairo__CairoPattern_CairoPattern_Impl_ */ 
