#ifndef INCLUDED_lime_graphics_cairo__CairoHintStyle_CairoHintStyle_Impl_
#define INCLUDED_lime_graphics_cairo__CairoHintStyle_CairoHintStyle_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(lime,graphics,cairo,_CairoHintStyle,CairoHintStyle_Impl_)
namespace lime{
namespace graphics{
namespace cairo{
namespace _CairoHintStyle{


class HXCPP_CLASS_ATTRIBUTES  CairoHintStyle_Impl__obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef CairoHintStyle_Impl__obj OBJ_;
		CairoHintStyle_Impl__obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< CairoHintStyle_Impl__obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~CairoHintStyle_Impl__obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("CairoHintStyle_Impl_"); }

		static int DEFAULT;
		static int NONE;
		static int SLIGHT;
		static int MEDIUM;
		static int FULL;
};

} // end namespace lime
} // end namespace graphics
} // end namespace cairo
} // end namespace _CairoHintStyle

#endif /* INCLUDED_lime_graphics_cairo__CairoHintStyle_CairoHintStyle_Impl_ */ 
