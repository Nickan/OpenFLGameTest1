#include <hxcpp.h>

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

Void GameInputControl_obj::__construct(::openfl::ui::GameInputDevice device,::String id,Float minValue,Float maxValue,hx::Null< Float >  __o_value)
{
HX_STACK_FRAME("openfl.ui.GameInputControl","new",0xeccd6093,"openfl.ui.GameInputControl.new","openfl/ui/GameInputControl.hx",36,0xb3fe7f9d)
HX_STACK_THIS(this)
HX_STACK_ARG(device,"device")
HX_STACK_ARG(id,"id")
HX_STACK_ARG(minValue,"minValue")
HX_STACK_ARG(maxValue,"maxValue")
HX_STACK_ARG(__o_value,"value")
Float value = __o_value.Default(0);
{
	HX_STACK_LINE(38)
	super::__construct(null());
	HX_STACK_LINE(40)
	this->device = device;
	HX_STACK_LINE(41)
	this->id = id;
	HX_STACK_LINE(42)
	this->minValue = minValue;
	HX_STACK_LINE(43)
	this->maxValue = maxValue;
	HX_STACK_LINE(44)
	this->value = value;
}
;
	return null();
}

//GameInputControl_obj::~GameInputControl_obj() { }

Dynamic GameInputControl_obj::__CreateEmpty() { return  new GameInputControl_obj; }
hx::ObjectPtr< GameInputControl_obj > GameInputControl_obj::__new(::openfl::ui::GameInputDevice device,::String id,Float minValue,Float maxValue,hx::Null< Float >  __o_value)
{  hx::ObjectPtr< GameInputControl_obj > result = new GameInputControl_obj();
	result->__construct(device,id,minValue,maxValue,__o_value);
	return result;}

Dynamic GameInputControl_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GameInputControl_obj > result = new GameInputControl_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return result;}


GameInputControl_obj::GameInputControl_obj()
{
}

void GameInputControl_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GameInputControl);
	HX_MARK_MEMBER_NAME(device,"device");
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(maxValue,"maxValue");
	HX_MARK_MEMBER_NAME(minValue,"minValue");
	HX_MARK_MEMBER_NAME(value,"value");
	::openfl::events::EventDispatcher_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void GameInputControl_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(device,"device");
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(maxValue,"maxValue");
	HX_VISIT_MEMBER_NAME(minValue,"minValue");
	HX_VISIT_MEMBER_NAME(value,"value");
	::openfl::events::EventDispatcher_obj::__Visit(HX_VISIT_ARG);
}

Dynamic GameInputControl_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return id; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { return value; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"device") ) { return device; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"maxValue") ) { return maxValue; }
		if (HX_FIELD_EQ(inName,"minValue") ) { return minValue; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic GameInputControl_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { value=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"device") ) { device=inValue.Cast< ::openfl::ui::GameInputDevice >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"maxValue") ) { maxValue=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"minValue") ) { minValue=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GameInputControl_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("device"));
	outFields->push(HX_CSTRING("id"));
	outFields->push(HX_CSTRING("maxValue"));
	outFields->push(HX_CSTRING("minValue"));
	outFields->push(HX_CSTRING("value"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::ui::GameInputDevice*/ ,(int)offsetof(GameInputControl_obj,device),HX_CSTRING("device")},
	{hx::fsString,(int)offsetof(GameInputControl_obj,id),HX_CSTRING("id")},
	{hx::fsFloat,(int)offsetof(GameInputControl_obj,maxValue),HX_CSTRING("maxValue")},
	{hx::fsFloat,(int)offsetof(GameInputControl_obj,minValue),HX_CSTRING("minValue")},
	{hx::fsFloat,(int)offsetof(GameInputControl_obj,value),HX_CSTRING("value")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("device"),
	HX_CSTRING("id"),
	HX_CSTRING("maxValue"),
	HX_CSTRING("minValue"),
	HX_CSTRING("value"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GameInputControl_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GameInputControl_obj::__mClass,"__mClass");
};

#endif

Class GameInputControl_obj::__mClass;

void GameInputControl_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl.ui.GameInputControl"), hx::TCanCast< GameInputControl_obj> ,sStaticFields,sMemberFields,
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

void GameInputControl_obj::__boot()
{
}

} // end namespace openfl
} // end namespace ui
