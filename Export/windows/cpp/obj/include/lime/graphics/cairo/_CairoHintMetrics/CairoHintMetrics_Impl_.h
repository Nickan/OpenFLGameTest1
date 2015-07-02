#ifndef INCLUDED_lime_graphics_cairo__CairoHintMetrics_CairoHintMetrics_Impl_
#define INCLUDED_lime_graphics_cairo__CairoHintMetrics_CairoHintMetrics_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(lime,graphics,cairo,_CairoHintMetrics,CairoHintMetrics_Impl_)
namespace lime{
namespace graphics{
namespace cairo{
namespace _CairoHintMetrics{


class HXCPP_CLASS_ATTRIBUTES  CairoHintMetrics_Impl__obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef CairoHintMetrics_Impl__obj OBJ_;
		CairoHintMetrics_Impl__obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< CairoHintMetrics_Impl__obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~CairoHintMetrics_Impl__obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("CairoHintMetrics_Impl_"); }

		static int DEFAULT;
		static int OFF;
		static int ON;
};

} // end namespace lime
} // end namespace graphics
} // end namespace cairo
} // end namespace _CairoHintMetrics

#endif /* INCLUDED_lime_graphics_cairo__CairoHintMetrics_CairoHintMetrics_Impl_ */ 
