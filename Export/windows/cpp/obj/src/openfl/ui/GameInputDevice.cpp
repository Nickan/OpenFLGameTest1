#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_ui_Gamepad
#include <lime/ui/Gamepad.h>
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
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_ui_GameInputControl
#include <openfl/ui/GameInputControl.h>
#endif
#ifndef INCLUDED_openfl_ui_GameInputDevice
#include <openfl/ui/GameInputDevice.h>
#endif
namespace openfl{
namespace ui{

Void GameInputDevice_obj::__construct(::String id,::String name)
{
HX_STACK_FRAME("openfl.ui.GameInputDevice","new",0x66440344,"openfl.ui.GameInputDevice.new","openfl/ui/GameInputDevice.hx",10,0x744a6f4c)
HX_STACK_THIS(this)
HX_STACK_ARG(id,"id")
HX_STACK_ARG(name,"name")
{
	HX_STACK_LINE(42)
	this->__controls = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(41)
	this->__button = ::haxe::ds::IntMap_obj::__new();
	HX_STACK_LINE(40)
	this->__axis = ::haxe::ds::IntMap_obj::__new();
	HX_STACK_LINE(48)
	this->id = id;
	HX_STACK_LINE(49)
	this->name = name;
	HX_STACK_LINE(51)
	::openfl::ui::GameInputControl control;		HX_STACK_VAR(control,"control");
	HX_STACK_LINE(53)
	{
		HX_STACK_LINE(53)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(53)
		while((true)){
			HX_STACK_LINE(53)
			if ((!(((_g < (int)6))))){
				HX_STACK_LINE(53)
				break;
			}
			HX_STACK_LINE(53)
			int i = (_g)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(55)
			::openfl::ui::GameInputControl _g1 = ::openfl::ui::GameInputControl_obj::__new(hx::ObjectPtr<OBJ_>(this),(HX_CSTRING("AXIS_") + i),(int)-1,(int)1,null());		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(55)
			control = _g1;
			HX_STACK_LINE(56)
			this->__axis->set(i,control);
			HX_STACK_LINE(57)
			this->__controls->push(control);
		}
	}
	HX_STACK_LINE(61)
	{
		HX_STACK_LINE(61)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(61)
		while((true)){
			HX_STACK_LINE(61)
			if ((!(((_g < (int)15))))){
				HX_STACK_LINE(61)
				break;
			}
			HX_STACK_LINE(61)
			int i = (_g)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(63)
			::openfl::ui::GameInputControl _g1 = ::openfl::ui::GameInputControl_obj::__new(hx::ObjectPtr<OBJ_>(this),(HX_CSTRING("BUTTON_") + i),(int)0,(int)1,null());		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(63)
			control = _g1;
			HX_STACK_LINE(64)
			this->__button->set(i,control);
			HX_STACK_LINE(65)
			this->__controls->push(control);
		}
	}
}
;
	return null();
}

//GameInputDevice_obj::~GameInputDevice_obj() { }

Dynamic GameInputDevice_obj::__CreateEmpty() { return  new GameInputDevice_obj; }
hx::ObjectPtr< GameInputDevice_obj > GameInputDevice_obj::__new(::String id,::String name)
{  hx::ObjectPtr< GameInputDevice_obj > result = new GameInputDevice_obj();
	result->__construct(id,name);
	return result;}

Dynamic GameInputDevice_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GameInputDevice_obj > result = new GameInputDevice_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

int GameInputDevice_obj::getCachedSamples( ::lime::utils::ByteArray data,hx::Null< bool >  __o_append){
bool append = __o_append.Default(false);
	HX_STACK_FRAME("openfl.ui.GameInputDevice","getCachedSamples",0x0422a56d,"openfl.ui.GameInputDevice.getCachedSamples","openfl/ui/GameInputDevice.hx",80,0x744a6f4c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(data,"data")
	HX_STACK_ARG(append,"append")
{
		HX_STACK_LINE(80)
		return (int)0;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(GameInputDevice_obj,getCachedSamples,return )

::openfl::ui::GameInputControl GameInputDevice_obj::getControlAt( int i){
	HX_STACK_FRAME("openfl.ui.GameInputDevice","getControlAt",0xc65be2d6,"openfl.ui.GameInputDevice.getControlAt","openfl/ui/GameInputDevice.hx",90,0x744a6f4c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(i,"i")
	HX_STACK_LINE(92)
	if (((bool((i >= (int)0)) && bool((i < this->__controls->length))))){
		HX_STACK_LINE(94)
		return this->__controls->__get(i).StaticCast< ::openfl::ui::GameInputControl >();
	}
	HX_STACK_LINE(98)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GameInputDevice_obj,getControlAt,return )

Void GameInputDevice_obj::startCachingSamples( int numSamples,Array< ::String > controls){
{
		HX_STACK_FRAME("openfl.ui.GameInputDevice","startCachingSamples",0xf3794db0,"openfl.ui.GameInputDevice.startCachingSamples","openfl/ui/GameInputDevice.hx",108,0x744a6f4c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(numSamples,"numSamples")
		HX_STACK_ARG(controls,"controls")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(GameInputDevice_obj,startCachingSamples,(void))

Void GameInputDevice_obj::stopCachingSamples( ){
{
		HX_STACK_FRAME("openfl.ui.GameInputDevice","stopCachingSamples",0xbbb05408,"openfl.ui.GameInputDevice.stopCachingSamples","openfl/ui/GameInputDevice.hx",118,0x744a6f4c)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(GameInputDevice_obj,stopCachingSamples,(void))

int GameInputDevice_obj::get_numControls( ){
	HX_STACK_FRAME("openfl.ui.GameInputDevice","get_numControls",0x2a978757,"openfl.ui.GameInputDevice.get_numControls","openfl/ui/GameInputDevice.hx",134,0x744a6f4c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(134)
	return this->__controls->length;
}


HX_DEFINE_DYNAMIC_FUNC0(GameInputDevice_obj,get_numControls,return )

int GameInputDevice_obj::MAX_BUFFER_SIZE;


GameInputDevice_obj::GameInputDevice_obj()
{
}

void GameInputDevice_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GameInputDevice);
	HX_MARK_MEMBER_NAME(enabled,"enabled");
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(sampleInterval,"sampleInterval");
	HX_MARK_MEMBER_NAME(__axis,"__axis");
	HX_MARK_MEMBER_NAME(__button,"__button");
	HX_MARK_MEMBER_NAME(__controls,"__controls");
	HX_MARK_MEMBER_NAME(__gamepad,"__gamepad");
	HX_MARK_END_CLASS();
}

void GameInputDevice_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(enabled,"enabled");
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(sampleInterval,"sampleInterval");
	HX_VISIT_MEMBER_NAME(__axis,"__axis");
	HX_VISIT_MEMBER_NAME(__button,"__button");
	HX_VISIT_MEMBER_NAME(__controls,"__controls");
	HX_VISIT_MEMBER_NAME(__gamepad,"__gamepad");
}

Dynamic GameInputDevice_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return id; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"__axis") ) { return __axis; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"enabled") ) { return enabled; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__button") ) { return __button; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__gamepad") ) { return __gamepad; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__controls") ) { return __controls; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"numControls") ) { return get_numControls(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getControlAt") ) { return getControlAt_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"sampleInterval") ) { return sampleInterval; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"MAX_BUFFER_SIZE") ) { return MAX_BUFFER_SIZE; }
		if (HX_FIELD_EQ(inName,"get_numControls") ) { return get_numControls_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"getCachedSamples") ) { return getCachedSamples_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"stopCachingSamples") ) { return stopCachingSamples_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"startCachingSamples") ) { return startCachingSamples_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic GameInputDevice_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< ::String >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"__axis") ) { __axis=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"enabled") ) { enabled=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__button") ) { __button=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__gamepad") ) { __gamepad=inValue.Cast< ::lime::ui::Gamepad >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__controls") ) { __controls=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"sampleInterval") ) { sampleInterval=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"MAX_BUFFER_SIZE") ) { MAX_BUFFER_SIZE=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GameInputDevice_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("enabled"));
	outFields->push(HX_CSTRING("id"));
	outFields->push(HX_CSTRING("name"));
	outFields->push(HX_CSTRING("numControls"));
	outFields->push(HX_CSTRING("sampleInterval"));
	outFields->push(HX_CSTRING("__axis"));
	outFields->push(HX_CSTRING("__button"));
	outFields->push(HX_CSTRING("__controls"));
	outFields->push(HX_CSTRING("__gamepad"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("MAX_BUFFER_SIZE"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(GameInputDevice_obj,enabled),HX_CSTRING("enabled")},
	{hx::fsString,(int)offsetof(GameInputDevice_obj,id),HX_CSTRING("id")},
	{hx::fsString,(int)offsetof(GameInputDevice_obj,name),HX_CSTRING("name")},
	{hx::fsInt,(int)offsetof(GameInputDevice_obj,sampleInterval),HX_CSTRING("sampleInterval")},
	{hx::fsObject /*::haxe::ds::IntMap*/ ,(int)offsetof(GameInputDevice_obj,__axis),HX_CSTRING("__axis")},
	{hx::fsObject /*::haxe::ds::IntMap*/ ,(int)offsetof(GameInputDevice_obj,__button),HX_CSTRING("__button")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(GameInputDevice_obj,__controls),HX_CSTRING("__controls")},
	{hx::fsObject /*::lime::ui::Gamepad*/ ,(int)offsetof(GameInputDevice_obj,__gamepad),HX_CSTRING("__gamepad")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("enabled"),
	HX_CSTRING("id"),
	HX_CSTRING("name"),
	HX_CSTRING("sampleInterval"),
	HX_CSTRING("__axis"),
	HX_CSTRING("__button"),
	HX_CSTRING("__controls"),
	HX_CSTRING("__gamepad"),
	HX_CSTRING("getCachedSamples"),
	HX_CSTRING("getControlAt"),
	HX_CSTRING("startCachingSamples"),
	HX_CSTRING("stopCachingSamples"),
	HX_CSTRING("get_numControls"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GameInputDevice_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(GameInputDevice_obj::MAX_BUFFER_SIZE,"MAX_BUFFER_SIZE");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GameInputDevice_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(GameInputDevice_obj::MAX_BUFFER_SIZE,"MAX_BUFFER_SIZE");
};

#endif

Class GameInputDevice_obj::__mClass;

void GameInputDevice_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl.ui.GameInputDevice"), hx::TCanCast< GameInputDevice_obj> ,sStaticFields,sMemberFields,
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

void GameInputDevice_obj::__boot()
{
	MAX_BUFFER_SIZE= (int)32000;
}

} // end namespace openfl
} // end namespace ui
