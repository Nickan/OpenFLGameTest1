#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_GameInputEvent
#include <openfl/events/GameInputEvent.h>
#endif
#ifndef INCLUDED_openfl_ui_GameInputDevice
#include <openfl/ui/GameInputDevice.h>
#endif
namespace openfl{
namespace events{

Void GameInputEvent_obj::__construct(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable,::openfl::ui::GameInputDevice device)
{
HX_STACK_FRAME("openfl.events.GameInputEvent","new",0x8065662b,"openfl.events.GameInputEvent.new","openfl/events/GameInputEvent.hx",35,0x5318f185)
HX_STACK_THIS(this)
HX_STACK_ARG(type,"type")
HX_STACK_ARG(__o_bubbles,"bubbles")
HX_STACK_ARG(__o_cancelable,"cancelable")
HX_STACK_ARG(device,"device")
bool bubbles = __o_bubbles.Default(true);
bool cancelable = __o_cancelable.Default(false);
{
	HX_STACK_LINE(37)
	super::__construct(type,bubbles,cancelable);
	HX_STACK_LINE(39)
	this->device = device;
}
;
	return null();
}

//GameInputEvent_obj::~GameInputEvent_obj() { }

Dynamic GameInputEvent_obj::__CreateEmpty() { return  new GameInputEvent_obj; }
hx::ObjectPtr< GameInputEvent_obj > GameInputEvent_obj::__new(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable,::openfl::ui::GameInputDevice device)
{  hx::ObjectPtr< GameInputEvent_obj > result = new GameInputEvent_obj();
	result->__construct(type,__o_bubbles,__o_cancelable,device);
	return result;}

Dynamic GameInputEvent_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GameInputEvent_obj > result = new GameInputEvent_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return result;}

::openfl::events::Event GameInputEvent_obj::clone( ){
	HX_STACK_FRAME("openfl.events.GameInputEvent","clone",0x205df1e8,"openfl.events.GameInputEvent.clone","openfl/events/GameInputEvent.hx",46,0x5318f185)
	HX_STACK_THIS(this)
	HX_STACK_LINE(46)
	return ::openfl::events::GameInputEvent_obj::__new(this->type,this->bubbles,this->cancelable,this->device);
}


::String GameInputEvent_obj::toString( ){
	HX_STACK_FRAME("openfl.events.GameInputEvent","toString",0x31f35b01,"openfl.events.GameInputEvent.toString","openfl/events/GameInputEvent.hx",51,0x5318f185)
	HX_STACK_THIS(this)
	HX_STACK_LINE(53)
	::String _g = ::Std_obj::string(this->bubbles);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(53)
	::String _g1 = (((HX_CSTRING("[GameInputEvent type=") + this->type) + HX_CSTRING(" bubbles=")) + _g);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(53)
	::String _g2 = (_g1 + HX_CSTRING(" cancelable="));		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(53)
	::String _g3 = ::Std_obj::string(this->cancelable);		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(53)
	::String _g4 = (_g2 + _g3);		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(53)
	::String _g5 = (_g4 + HX_CSTRING(" device="));		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(53)
	::String _g6 = ::Std_obj::string(this->device);		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(53)
	::String _g7 = (_g5 + _g6);		HX_STACK_VAR(_g7,"_g7");
	HX_STACK_LINE(53)
	return (_g7 + HX_CSTRING("]"));
}


::String GameInputEvent_obj::DEVICE_ADDED;

::String GameInputEvent_obj::DEVICE_REMOVED;

::String GameInputEvent_obj::DEVICE_UNUSABLE;


GameInputEvent_obj::GameInputEvent_obj()
{
}

void GameInputEvent_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GameInputEvent);
	HX_MARK_MEMBER_NAME(device,"device");
	::openfl::events::Event_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void GameInputEvent_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(device,"device");
	::openfl::events::Event_obj::__Visit(HX_VISIT_ARG);
}

Dynamic GameInputEvent_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"device") ) { return device; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"DEVICE_ADDED") ) { return DEVICE_ADDED; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"DEVICE_REMOVED") ) { return DEVICE_REMOVED; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"DEVICE_UNUSABLE") ) { return DEVICE_UNUSABLE; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic GameInputEvent_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"device") ) { device=inValue.Cast< ::openfl::ui::GameInputDevice >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"DEVICE_ADDED") ) { DEVICE_ADDED=inValue.Cast< ::String >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"DEVICE_REMOVED") ) { DEVICE_REMOVED=inValue.Cast< ::String >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"DEVICE_UNUSABLE") ) { DEVICE_UNUSABLE=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GameInputEvent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("device"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("DEVICE_ADDED"),
	HX_CSTRING("DEVICE_REMOVED"),
	HX_CSTRING("DEVICE_UNUSABLE"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::ui::GameInputDevice*/ ,(int)offsetof(GameInputEvent_obj,device),HX_CSTRING("device")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("device"),
	HX_CSTRING("clone"),
	HX_CSTRING("toString"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GameInputEvent_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(GameInputEvent_obj::DEVICE_ADDED,"DEVICE_ADDED");
	HX_MARK_MEMBER_NAME(GameInputEvent_obj::DEVICE_REMOVED,"DEVICE_REMOVED");
	HX_MARK_MEMBER_NAME(GameInputEvent_obj::DEVICE_UNUSABLE,"DEVICE_UNUSABLE");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GameInputEvent_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(GameInputEvent_obj::DEVICE_ADDED,"DEVICE_ADDED");
	HX_VISIT_MEMBER_NAME(GameInputEvent_obj::DEVICE_REMOVED,"DEVICE_REMOVED");
	HX_VISIT_MEMBER_NAME(GameInputEvent_obj::DEVICE_UNUSABLE,"DEVICE_UNUSABLE");
};

#endif

Class GameInputEvent_obj::__mClass;

void GameInputEvent_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl.events.GameInputEvent"), hx::TCanCast< GameInputEvent_obj> ,sStaticFields,sMemberFields,
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

void GameInputEvent_obj::__boot()
{
	DEVICE_ADDED= HX_CSTRING("deviceAdded");
	DEVICE_REMOVED= HX_CSTRING("deviceRemoved");
	DEVICE_UNUSABLE= HX_CSTRING("deviceUnusable");
}

} // end namespace openfl
} // end namespace events
