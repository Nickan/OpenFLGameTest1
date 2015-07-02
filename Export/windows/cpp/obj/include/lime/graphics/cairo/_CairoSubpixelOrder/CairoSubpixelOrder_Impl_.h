#ifndef INCLUDED_lime_graphics_cairo__CairoSubpixelOrder_CairoSubpixelOrder_Impl_
#define INCLUDED_lime_graphics_cairo__CairoSubpixelOrder_CairoSubpixelOrder_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(lime,graphics,cairo,_CairoSubpixelOrder,CairoSubpixelOrder_Impl_)
namespace lime{
namespace graphics{
namespace cairo{
namespace _CairoSubpixelOrder{


class HXCPP_CLASS_ATTRIBUTES  CairoSubpixelOrder_Impl__obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef CairoSubpixelOrder_Impl__obj OBJ_;
		CairoSubpixelOrder_Impl__obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< CairoSubpixelOrder_Impl__obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~CairoSubpixelOrder_Impl__obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("CairoSubpixelOrder_Impl_"); }

		static int DEFAULT;
		static int RGB;
		static int BGR;
		static int VRGB;
		static int VBGR;
};

} // end namespace lime
} // end namespace graphics
} // end namespace cairo
} // end namespace _CairoSubpixelOrder

#endif /* INCLUDED_lime_graphics_cairo__CairoSubpixelOrder_CairoSubpixelOrder_Impl_ */ 
