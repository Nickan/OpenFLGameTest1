#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_math_Vector2
#include <lime/math/Vector2.h>
#endif
#ifndef INCLUDED_lime_system_System
#include <lime/system/System.h>
#endif
#ifndef INCLUDED_lime_text_Font
#include <lime/text/Font.h>
#endif
#ifndef INCLUDED_lime_text_GlyphPosition
#include <lime/text/GlyphPosition.h>
#endif
#ifndef INCLUDED_lime_text_TextLayout
#include <lime/text/TextLayout.h>
#endif
#ifndef INCLUDED_lime_utils_ByteArray
#include <lime/utils/ByteArray.h>
#endif
#ifndef INCLUDED_lime_utils_IDataInput
#include <lime/utils/IDataInput.h>
#endif
#ifndef INCLUDED_lime_utils_IMemoryRange
#include <lime/utils/IMemoryRange.h>
#endif
namespace lime{
namespace text{

Void TextLayout_obj::__construct(::String __o_text,::lime::text::Font font,hx::Null< int >  __o_size,hx::Null< int >  __o_direction,::String __o_script,::String __o_language)
{
HX_STACK_FRAME("lime.text.TextLayout","new",0xa8c39291,"lime.text.TextLayout.new","lime/text/TextLayout.hx",32,0x8df0119f)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_text,"text")
HX_STACK_ARG(font,"font")
HX_STACK_ARG(__o_size,"size")
HX_STACK_ARG(__o_direction,"direction")
HX_STACK_ARG(__o_script,"script")
HX_STACK_ARG(__o_language,"language")
::String text = __o_text.Default(HX_CSTRING(""));
int size = __o_size.Default(12);
int direction = __o_direction.Default(4);
::String script = __o_script.Default(HX_CSTRING("Zyyy"));
::String language = __o_language.Default(HX_CSTRING("en"));
{
	HX_STACK_LINE(34)
	this->set_text(text);
	HX_STACK_LINE(35)
	this->set_font(font);
	HX_STACK_LINE(36)
	this->set_size(size);
	HX_STACK_LINE(37)
	this->__direction = direction;
	HX_STACK_LINE(38)
	this->__script = script;
	HX_STACK_LINE(39)
	this->__language = language;
	HX_STACK_LINE(41)
	this->positions = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(42)
	this->__dirty = true;
	HX_STACK_LINE(45)
	Dynamic _g = ::lime::text::TextLayout_obj::lime_text_layout_create(this->__direction,this->__script,this->__language);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(45)
	this->__handle = _g;
}
;
	return null();
}

//TextLayout_obj::~TextLayout_obj() { }

Dynamic TextLayout_obj::__CreateEmpty() { return  new TextLayout_obj; }
hx::ObjectPtr< TextLayout_obj > TextLayout_obj::__new(::String __o_text,::lime::text::Font font,hx::Null< int >  __o_size,hx::Null< int >  __o_direction,::String __o_script,::String __o_language)
{  hx::ObjectPtr< TextLayout_obj > result = new TextLayout_obj();
	result->__construct(__o_text,font,__o_size,__o_direction,__o_script,__o_language);
	return result;}

Dynamic TextLayout_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TextLayout_obj > result = new TextLayout_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return result;}

Void TextLayout_obj::__position( ){
{
		HX_STACK_FRAME("lime.text.TextLayout","__position",0x6ec769b8,"lime.text.TextLayout.__position","lime/text/TextLayout.hx",50,0x8df0119f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(52)
		this->positions = Array_obj< ::Dynamic >::__new();
		HX_STACK_LINE(56)
		if (((bool((bool((bool((bool((this->__handle != null())) && bool((this->text != null())))) && bool((this->text != HX_CSTRING(""))))) && bool((this->font != null())))) && bool((this->font->src != null()))))){
			HX_STACK_LINE(58)
			if (((this->__buffer == null()))){
				HX_STACK_LINE(60)
				::lime::utils::ByteArray _g = ::lime::utils::ByteArray_obj::__new(null());		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(60)
				this->__buffer = _g;
				HX_STACK_LINE(61)
				{
					HX_STACK_LINE(61)
					this->__buffer->littleEndian = true;
					HX_STACK_LINE(61)
					HX_CSTRING("littleEndian");
				}
			}
			HX_STACK_LINE(65)
			::lime::text::TextLayout_obj::lime_text_layout_position(this->__handle,this->font->src,this->size,this->text,this->__buffer);
			HX_STACK_LINE(67)
			if (((this->__buffer->length > (int)4))){
				HX_STACK_LINE(69)
				this->__buffer->position = (int)0;
				HX_STACK_LINE(71)
				int count = this->__buffer->readUnsignedInt();		HX_STACK_VAR(count,"count");
				HX_STACK_LINE(72)
				int index;		HX_STACK_VAR(index,"index");
				HX_STACK_LINE(72)
				Float advanceX;		HX_STACK_VAR(advanceX,"advanceX");
				HX_STACK_LINE(72)
				Float advanceY;		HX_STACK_VAR(advanceY,"advanceY");
				HX_STACK_LINE(72)
				Float offsetX;		HX_STACK_VAR(offsetX,"offsetX");
				HX_STACK_LINE(72)
				Float offsetY;		HX_STACK_VAR(offsetY,"offsetY");
				HX_STACK_LINE(74)
				{
					HX_STACK_LINE(74)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(74)
					while((true)){
						HX_STACK_LINE(74)
						if ((!(((_g < count))))){
							HX_STACK_LINE(74)
							break;
						}
						HX_STACK_LINE(74)
						int i = (_g)++;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(76)
						int _g1 = this->__buffer->readUnsignedInt();		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(76)
						index = _g1;
						HX_STACK_LINE(77)
						Float _g2 = this->__buffer->readFloat();		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(77)
						advanceX = _g2;
						HX_STACK_LINE(78)
						Float _g3 = this->__buffer->readFloat();		HX_STACK_VAR(_g3,"_g3");
						HX_STACK_LINE(78)
						advanceY = _g3;
						HX_STACK_LINE(79)
						Float _g4 = this->__buffer->readFloat();		HX_STACK_VAR(_g4,"_g4");
						HX_STACK_LINE(79)
						offsetX = _g4;
						HX_STACK_LINE(80)
						Float _g5 = this->__buffer->readFloat();		HX_STACK_VAR(_g5,"_g5");
						HX_STACK_LINE(80)
						offsetY = _g5;
						HX_STACK_LINE(82)
						::lime::math::Vector2 _g6 = ::lime::math::Vector2_obj::__new(advanceX,advanceY);		HX_STACK_VAR(_g6,"_g6");
						HX_STACK_LINE(82)
						::lime::math::Vector2 _g7 = ::lime::math::Vector2_obj::__new(offsetX,offsetY);		HX_STACK_VAR(_g7,"_g7");
						HX_STACK_LINE(82)
						::lime::text::GlyphPosition _g8 = ::lime::text::GlyphPosition_obj::__new(index,_g6,_g7);		HX_STACK_VAR(_g8,"_g8");
						HX_STACK_LINE(82)
						this->get_positions()->push(_g8);
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TextLayout_obj,__position,(void))

Array< ::Dynamic > TextLayout_obj::get_positions( ){
	HX_STACK_FRAME("lime.text.TextLayout","get_positions",0xf2be90f2,"lime.text.TextLayout.get_positions","lime/text/TextLayout.hx",101,0x8df0119f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(103)
	if ((this->__dirty)){
		HX_STACK_LINE(105)
		this->__dirty = false;
		HX_STACK_LINE(106)
		this->__position();
	}
	HX_STACK_LINE(109)
	return this->positions;
}


HX_DEFINE_DYNAMIC_FUNC0(TextLayout_obj,get_positions,return )

int TextLayout_obj::get_direction( ){
	HX_STACK_FRAME("lime.text.TextLayout","get_direction",0x32acff87,"lime.text.TextLayout.get_direction","lime/text/TextLayout.hx",114,0x8df0119f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(114)
	return this->__direction;
}


HX_DEFINE_DYNAMIC_FUNC0(TextLayout_obj,get_direction,return )

int TextLayout_obj::set_direction( int value){
	HX_STACK_FRAME("lime.text.TextLayout","set_direction",0x77b2e193,"lime.text.TextLayout.set_direction","lime/text/TextLayout.hx",119,0x8df0119f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(121)
	if (((value == this->__direction))){
		HX_STACK_LINE(121)
		return value;
	}
	HX_STACK_LINE(123)
	this->__direction = value;
	HX_STACK_LINE(126)
	::lime::text::TextLayout_obj::lime_text_layout_set_direction(this->__handle,value);
	HX_STACK_LINE(129)
	this->__dirty = true;
	HX_STACK_LINE(131)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(TextLayout_obj,set_direction,return )

::lime::text::Font TextLayout_obj::set_font( ::lime::text::Font value){
	HX_STACK_FRAME("lime.text.TextLayout","set_font",0xaa861efb,"lime.text.TextLayout.set_font","lime/text/TextLayout.hx",136,0x8df0119f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(138)
	if (((value == this->font))){
		HX_STACK_LINE(138)
		return value;
	}
	HX_STACK_LINE(140)
	this->font = value;
	HX_STACK_LINE(141)
	this->__dirty = true;
	HX_STACK_LINE(142)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(TextLayout_obj,set_font,return )

Array< int > TextLayout_obj::get_glyphs( ){
	HX_STACK_FRAME("lime.text.TextLayout","get_glyphs",0x9f74beff,"lime.text.TextLayout.get_glyphs","lime/text/TextLayout.hx",147,0x8df0119f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(149)
	Array< int > glyphs = Array_obj< int >::__new();		HX_STACK_VAR(glyphs,"glyphs");
	HX_STACK_LINE(151)
	{
		HX_STACK_LINE(151)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(151)
		Array< ::Dynamic > _g1 = this->get_positions();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(151)
		while((true)){
			HX_STACK_LINE(151)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(151)
				break;
			}
			HX_STACK_LINE(151)
			::lime::text::GlyphPosition position = _g1->__get(_g).StaticCast< ::lime::text::GlyphPosition >();		HX_STACK_VAR(position,"position");
			HX_STACK_LINE(151)
			++(_g);
			HX_STACK_LINE(153)
			glyphs->push(position->glyph);
		}
	}
	HX_STACK_LINE(157)
	return glyphs;
}


HX_DEFINE_DYNAMIC_FUNC0(TextLayout_obj,get_glyphs,return )

::String TextLayout_obj::get_language( ){
	HX_STACK_FRAME("lime.text.TextLayout","get_language",0xbdf42410,"lime.text.TextLayout.get_language","lime/text/TextLayout.hx",164,0x8df0119f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(164)
	return this->__language;
}


HX_DEFINE_DYNAMIC_FUNC0(TextLayout_obj,get_language,return )

::String TextLayout_obj::set_language( ::String value){
	HX_STACK_FRAME("lime.text.TextLayout","set_language",0xd2ed4784,"lime.text.TextLayout.set_language","lime/text/TextLayout.hx",169,0x8df0119f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(171)
	if (((value == this->__language))){
		HX_STACK_LINE(171)
		return value;
	}
	HX_STACK_LINE(173)
	this->__language = value;
	HX_STACK_LINE(176)
	::lime::text::TextLayout_obj::lime_text_layout_set_language(this->__handle,value);
	HX_STACK_LINE(179)
	this->__dirty = true;
	HX_STACK_LINE(181)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(TextLayout_obj,set_language,return )

::String TextLayout_obj::get_script( ){
	HX_STACK_FRAME("lime.text.TextLayout","get_script",0x387c13c3,"lime.text.TextLayout.get_script","lime/text/TextLayout.hx",188,0x8df0119f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(188)
	return this->__script;
}


HX_DEFINE_DYNAMIC_FUNC0(TextLayout_obj,get_script,return )

::String TextLayout_obj::set_script( ::String value){
	HX_STACK_FRAME("lime.text.TextLayout","set_script",0x3bf9b237,"lime.text.TextLayout.set_script","lime/text/TextLayout.hx",193,0x8df0119f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(195)
	if (((value == this->__script))){
		HX_STACK_LINE(195)
		return value;
	}
	HX_STACK_LINE(197)
	this->__script = value;
	HX_STACK_LINE(200)
	::lime::text::TextLayout_obj::lime_text_layout_set_script(this->__handle,value);
	HX_STACK_LINE(203)
	this->__dirty = true;
	HX_STACK_LINE(205)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(TextLayout_obj,set_script,return )

int TextLayout_obj::set_size( int value){
	HX_STACK_FRAME("lime.text.TextLayout","set_size",0xb31961ed,"lime.text.TextLayout.set_size","lime/text/TextLayout.hx",210,0x8df0119f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(212)
	if (((value == this->size))){
		HX_STACK_LINE(212)
		return value;
	}
	HX_STACK_LINE(214)
	this->size = value;
	HX_STACK_LINE(215)
	this->__dirty = true;
	HX_STACK_LINE(216)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(TextLayout_obj,set_size,return )

::String TextLayout_obj::set_text( ::String value){
	HX_STACK_FRAME("lime.text.TextLayout","set_text",0xb3bf8dd9,"lime.text.TextLayout.set_text","lime/text/TextLayout.hx",221,0x8df0119f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(223)
	if (((value == this->text))){
		HX_STACK_LINE(223)
		return value;
	}
	HX_STACK_LINE(225)
	this->text = value;
	HX_STACK_LINE(226)
	this->__dirty = true;
	HX_STACK_LINE(227)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(TextLayout_obj,set_text,return )

Dynamic TextLayout_obj::lime_text_layout_create;

Dynamic TextLayout_obj::lime_text_layout_position;

Dynamic TextLayout_obj::lime_text_layout_set_direction;

Dynamic TextLayout_obj::lime_text_layout_set_language;

Dynamic TextLayout_obj::lime_text_layout_set_script;


TextLayout_obj::TextLayout_obj()
{
}

void TextLayout_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TextLayout);
	HX_MARK_MEMBER_NAME(font,"font");
	HX_MARK_MEMBER_NAME(glyphs,"glyphs");
	HX_MARK_MEMBER_NAME(positions,"positions");
	HX_MARK_MEMBER_NAME(size,"size");
	HX_MARK_MEMBER_NAME(text,"text");
	HX_MARK_MEMBER_NAME(__dirty,"__dirty");
	HX_MARK_MEMBER_NAME(__buffer,"__buffer");
	HX_MARK_MEMBER_NAME(__direction,"__direction");
	HX_MARK_MEMBER_NAME(__handle,"__handle");
	HX_MARK_MEMBER_NAME(__language,"__language");
	HX_MARK_MEMBER_NAME(__script,"__script");
	HX_MARK_END_CLASS();
}

void TextLayout_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(font,"font");
	HX_VISIT_MEMBER_NAME(glyphs,"glyphs");
	HX_VISIT_MEMBER_NAME(positions,"positions");
	HX_VISIT_MEMBER_NAME(size,"size");
	HX_VISIT_MEMBER_NAME(text,"text");
	HX_VISIT_MEMBER_NAME(__dirty,"__dirty");
	HX_VISIT_MEMBER_NAME(__buffer,"__buffer");
	HX_VISIT_MEMBER_NAME(__direction,"__direction");
	HX_VISIT_MEMBER_NAME(__handle,"__handle");
	HX_VISIT_MEMBER_NAME(__language,"__language");
	HX_VISIT_MEMBER_NAME(__script,"__script");
}

Dynamic TextLayout_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"font") ) { return font; }
		if (HX_FIELD_EQ(inName,"size") ) { return size; }
		if (HX_FIELD_EQ(inName,"text") ) { return text; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"glyphs") ) { return inCallProp ? get_glyphs() : glyphs; }
		if (HX_FIELD_EQ(inName,"script") ) { return get_script(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"__dirty") ) { return __dirty; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"language") ) { return get_language(); }
		if (HX_FIELD_EQ(inName,"__buffer") ) { return __buffer; }
		if (HX_FIELD_EQ(inName,"__handle") ) { return __handle; }
		if (HX_FIELD_EQ(inName,"__script") ) { return __script; }
		if (HX_FIELD_EQ(inName,"set_font") ) { return set_font_dyn(); }
		if (HX_FIELD_EQ(inName,"set_size") ) { return set_size_dyn(); }
		if (HX_FIELD_EQ(inName,"set_text") ) { return set_text_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"direction") ) { return get_direction(); }
		if (HX_FIELD_EQ(inName,"positions") ) { return inCallProp ? get_positions() : positions; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__language") ) { return __language; }
		if (HX_FIELD_EQ(inName,"__position") ) { return __position_dyn(); }
		if (HX_FIELD_EQ(inName,"get_glyphs") ) { return get_glyphs_dyn(); }
		if (HX_FIELD_EQ(inName,"get_script") ) { return get_script_dyn(); }
		if (HX_FIELD_EQ(inName,"set_script") ) { return set_script_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__direction") ) { return __direction; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_language") ) { return get_language_dyn(); }
		if (HX_FIELD_EQ(inName,"set_language") ) { return set_language_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_positions") ) { return get_positions_dyn(); }
		if (HX_FIELD_EQ(inName,"get_direction") ) { return get_direction_dyn(); }
		if (HX_FIELD_EQ(inName,"set_direction") ) { return set_direction_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"lime_text_layout_create") ) { return lime_text_layout_create; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"lime_text_layout_position") ) { return lime_text_layout_position; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"lime_text_layout_set_script") ) { return lime_text_layout_set_script; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"lime_text_layout_set_language") ) { return lime_text_layout_set_language; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"lime_text_layout_set_direction") ) { return lime_text_layout_set_direction; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TextLayout_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"font") ) { if (inCallProp) return set_font(inValue);font=inValue.Cast< ::lime::text::Font >(); return inValue; }
		if (HX_FIELD_EQ(inName,"size") ) { if (inCallProp) return set_size(inValue);size=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"text") ) { if (inCallProp) return set_text(inValue);text=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"glyphs") ) { glyphs=inValue.Cast< Array< int > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"script") ) { return set_script(inValue); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"__dirty") ) { __dirty=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"language") ) { return set_language(inValue); }
		if (HX_FIELD_EQ(inName,"__buffer") ) { __buffer=inValue.Cast< ::lime::utils::ByteArray >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__handle") ) { __handle=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__script") ) { __script=inValue.Cast< ::String >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"direction") ) { return set_direction(inValue); }
		if (HX_FIELD_EQ(inName,"positions") ) { positions=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__language") ) { __language=inValue.Cast< ::String >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__direction") ) { __direction=inValue.Cast< int >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"lime_text_layout_create") ) { lime_text_layout_create=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"lime_text_layout_position") ) { lime_text_layout_position=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"lime_text_layout_set_script") ) { lime_text_layout_set_script=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"lime_text_layout_set_language") ) { lime_text_layout_set_language=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"lime_text_layout_set_direction") ) { lime_text_layout_set_direction=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TextLayout_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("direction"));
	outFields->push(HX_CSTRING("font"));
	outFields->push(HX_CSTRING("glyphs"));
	outFields->push(HX_CSTRING("language"));
	outFields->push(HX_CSTRING("positions"));
	outFields->push(HX_CSTRING("script"));
	outFields->push(HX_CSTRING("size"));
	outFields->push(HX_CSTRING("text"));
	outFields->push(HX_CSTRING("__dirty"));
	outFields->push(HX_CSTRING("__buffer"));
	outFields->push(HX_CSTRING("__direction"));
	outFields->push(HX_CSTRING("__handle"));
	outFields->push(HX_CSTRING("__language"));
	outFields->push(HX_CSTRING("__script"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("lime_text_layout_create"),
	HX_CSTRING("lime_text_layout_position"),
	HX_CSTRING("lime_text_layout_set_direction"),
	HX_CSTRING("lime_text_layout_set_language"),
	HX_CSTRING("lime_text_layout_set_script"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::lime::text::Font*/ ,(int)offsetof(TextLayout_obj,font),HX_CSTRING("font")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(TextLayout_obj,glyphs),HX_CSTRING("glyphs")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(TextLayout_obj,positions),HX_CSTRING("positions")},
	{hx::fsInt,(int)offsetof(TextLayout_obj,size),HX_CSTRING("size")},
	{hx::fsString,(int)offsetof(TextLayout_obj,text),HX_CSTRING("text")},
	{hx::fsBool,(int)offsetof(TextLayout_obj,__dirty),HX_CSTRING("__dirty")},
	{hx::fsObject /*::lime::utils::ByteArray*/ ,(int)offsetof(TextLayout_obj,__buffer),HX_CSTRING("__buffer")},
	{hx::fsInt,(int)offsetof(TextLayout_obj,__direction),HX_CSTRING("__direction")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(TextLayout_obj,__handle),HX_CSTRING("__handle")},
	{hx::fsString,(int)offsetof(TextLayout_obj,__language),HX_CSTRING("__language")},
	{hx::fsString,(int)offsetof(TextLayout_obj,__script),HX_CSTRING("__script")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("font"),
	HX_CSTRING("glyphs"),
	HX_CSTRING("positions"),
	HX_CSTRING("size"),
	HX_CSTRING("text"),
	HX_CSTRING("__dirty"),
	HX_CSTRING("__buffer"),
	HX_CSTRING("__direction"),
	HX_CSTRING("__handle"),
	HX_CSTRING("__language"),
	HX_CSTRING("__script"),
	HX_CSTRING("__position"),
	HX_CSTRING("get_positions"),
	HX_CSTRING("get_direction"),
	HX_CSTRING("set_direction"),
	HX_CSTRING("set_font"),
	HX_CSTRING("get_glyphs"),
	HX_CSTRING("get_language"),
	HX_CSTRING("set_language"),
	HX_CSTRING("get_script"),
	HX_CSTRING("set_script"),
	HX_CSTRING("set_size"),
	HX_CSTRING("set_text"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TextLayout_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(TextLayout_obj::lime_text_layout_create,"lime_text_layout_create");
	HX_MARK_MEMBER_NAME(TextLayout_obj::lime_text_layout_position,"lime_text_layout_position");
	HX_MARK_MEMBER_NAME(TextLayout_obj::lime_text_layout_set_direction,"lime_text_layout_set_direction");
	HX_MARK_MEMBER_NAME(TextLayout_obj::lime_text_layout_set_language,"lime_text_layout_set_language");
	HX_MARK_MEMBER_NAME(TextLayout_obj::lime_text_layout_set_script,"lime_text_layout_set_script");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TextLayout_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(TextLayout_obj::lime_text_layout_create,"lime_text_layout_create");
	HX_VISIT_MEMBER_NAME(TextLayout_obj::lime_text_layout_position,"lime_text_layout_position");
	HX_VISIT_MEMBER_NAME(TextLayout_obj::lime_text_layout_set_direction,"lime_text_layout_set_direction");
	HX_VISIT_MEMBER_NAME(TextLayout_obj::lime_text_layout_set_language,"lime_text_layout_set_language");
	HX_VISIT_MEMBER_NAME(TextLayout_obj::lime_text_layout_set_script,"lime_text_layout_set_script");
};

#endif

Class TextLayout_obj::__mClass;

void TextLayout_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("lime.text.TextLayout"), hx::TCanCast< TextLayout_obj> ,sStaticFields,sMemberFields,
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

void TextLayout_obj::__boot()
{
	lime_text_layout_create= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_text_layout_create"),(int)3,null());
	lime_text_layout_position= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_text_layout_position"),(int)5,null());
	lime_text_layout_set_direction= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_text_layout_set_direction"),(int)2,null());
	lime_text_layout_set_language= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_text_layout_set_language"),(int)2,null());
	lime_text_layout_set_script= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_text_layout_set_script"),(int)2,null());
}

} // end namespace lime
} // end namespace text
