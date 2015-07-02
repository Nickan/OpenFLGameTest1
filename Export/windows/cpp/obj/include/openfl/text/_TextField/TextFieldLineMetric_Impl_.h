#ifndef INCLUDED_openfl_text__TextField_TextFieldLineMetric_Impl_
#define INCLUDED_openfl_text__TextField_TextFieldLineMetric_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(openfl,text,_TextField,TextFieldLineMetric_Impl_)
namespace openfl{
namespace text{
namespace _TextField{


class HXCPP_CLASS_ATTRIBUTES  TextFieldLineMetric_Impl__obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef TextFieldLineMetric_Impl__obj OBJ_;
		TextFieldLineMetric_Impl__obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< TextFieldLineMetric_Impl__obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TextFieldLineMetric_Impl__obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("TextFieldLineMetric_Impl_"); }

		static int ASCENDER;
		static int DESCENDER;
		static int LINE_HEIGHT;
		static int LEADING;
};

} // end namespace openfl
} // end namespace text
} // end namespace _TextField

#endif /* INCLUDED_openfl_text__TextField_TextFieldLineMetric_Impl_ */ 
