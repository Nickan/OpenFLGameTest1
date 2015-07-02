#ifndef INCLUDED_lime_graphics_cairo_CairoFont
#define INCLUDED_lime_graphics_cairo_CairoFont

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(lime,graphics,cairo,CairoFont)
HX_DECLARE_CLASS2(lime,text,Font)
namespace lime{
namespace graphics{
namespace cairo{


class HXCPP_CLASS_ATTRIBUTES  CairoFont_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef CairoFont_obj OBJ_;
		CairoFont_obj();
		Void __construct(::lime::text::Font font);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< CairoFont_obj > __new(::lime::text::Font font);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~CairoFont_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("CairoFont"); }

		Dynamic handle;
		::lime::text::Font font;
		virtual Void destroy( );
		Dynamic destroy_dyn();

		static Dynamic lime_cairo_ft_font_face_create_for_ft_face;
		static Dynamic &lime_cairo_ft_font_face_create_for_ft_face_dyn() { return lime_cairo_ft_font_face_create_for_ft_face;}
		static Dynamic lime_cairo_font_face_destroy;
		static Dynamic &lime_cairo_font_face_destroy_dyn() { return lime_cairo_font_face_destroy;}
};

} // end namespace lime
} // end namespace graphics
} // end namespace cairo

#endif /* INCLUDED_lime_graphics_cairo_CairoFont */ 
