#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Lambda
#include <Lambda.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_haxe_ds_ObjectMap
#include <haxe/ds/ObjectMap.h>
#endif
#ifndef INCLUDED_lime_ui_Gamepad
#include <lime/ui/Gamepad.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_GameInputEvent
#include <openfl/events/GameInputEvent.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_ui_GameInput
#include <openfl/ui/GameInput.h>
#endif
#ifndef INCLUDED_openfl_ui_GameInputControl
#include <openfl/ui/GameInputControl.h>
#endif
#ifndef INCLUDED_openfl_ui_GameInputDevice
#include <openfl/ui/GameInputDevice.h>
#endif
namespace openfl{
namespace ui{

Void GameInput_obj::__construct()
{
HX_STACK_FRAME("openfl.ui.GameInput","new",0x178f028e,"openfl.ui.GameInput.new","openfl/ui/GameInput.hx",25,0x96cdaf42)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(27)
	super::__construct(null());
	HX_STACK_LINE(29)
	::openfl::ui::GameInput_obj::__instances->push(hx::ObjectPtr<OBJ_>(this));
}
;
	return null();
}

//GameInput_obj::~GameInput_obj() { }

Dynamic GameInput_obj::__CreateEmpty() { return  new GameInput_obj; }
hx::ObjectPtr< GameInput_obj > GameInput_obj::__new()
{  hx::ObjectPtr< GameInput_obj > result = new GameInput_obj();
	result->__construct();
	return result;}

Dynamic GameInput_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GameInput_obj > result = new GameInput_obj();
	result->__construct();
	return result;}

bool GameInput_obj::isAvailable;

int GameInput_obj::numDevices;

::haxe::ds::ObjectMap GameInput_obj::__devices;

Array< ::Dynamic > GameInput_obj::__instances;

::openfl::ui::GameInputDevice GameInput_obj::getDeviceAt( int index){
	HX_STACK_FRAME("openfl.ui.GameInput","getDeviceAt",0x22aaba0d,"openfl.ui.GameInput.getDeviceAt","openfl/ui/GameInput.hx",34,0x96cdaf42)
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(36)
	if ((::lime::ui::Gamepad_obj::devices->exists(index))){
		HX_STACK_LINE(38)
		::lime::ui::Gamepad key = ::lime::ui::Gamepad_obj::devices->get(index);		HX_STACK_VAR(key,"key");
		HX_STACK_LINE(38)
		return ::openfl::ui::GameInput_obj::__devices->get(key);
	}
	HX_STACK_LINE(42)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GameInput_obj,getDeviceAt,return )

Void GameInput_obj::__onGamepadAxisMove( ::lime::ui::Gamepad gamepad,int axis,Float value){
{
		HX_STACK_FRAME("openfl.ui.GameInput","__onGamepadAxisMove",0x7bd40ec2,"openfl.ui.GameInput.__onGamepadAxisMove","openfl/ui/GameInput.hx",47,0x96cdaf42)
		HX_STACK_ARG(gamepad,"gamepad")
		HX_STACK_ARG(axis,"axis")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(49)
		::openfl::ui::GameInputDevice device = ::openfl::ui::GameInput_obj::__devices->get(gamepad);		HX_STACK_VAR(device,"device");
		HX_STACK_LINE(51)
		if ((device->enabled)){
			HX_STACK_LINE(53)
			if ((!(device->__axis->exists(axis)))){
				struct _Function_3_1{
					inline static ::String Block( int &axis){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/ui/GameInput.hx",55,0x96cdaf42)
						{
							HX_STACK_LINE(55)
							switch( (int)(axis)){
								case (int)0: {
									HX_STACK_LINE(55)
									return HX_CSTRING("LEFT_X");
								}
								;break;
								case (int)1: {
									HX_STACK_LINE(55)
									return HX_CSTRING("LEFT_Y");
								}
								;break;
								case (int)2: {
									HX_STACK_LINE(55)
									return HX_CSTRING("RIGHT_X");
								}
								;break;
								case (int)3: {
									HX_STACK_LINE(55)
									return HX_CSTRING("RIGHT_Y");
								}
								;break;
								case (int)4: {
									HX_STACK_LINE(55)
									return HX_CSTRING("TRIGGER_LEFT");
								}
								;break;
								case (int)5: {
									HX_STACK_LINE(55)
									return HX_CSTRING("TRIGGER_RIGHT");
								}
								;break;
								default: {
									HX_STACK_LINE(55)
									return ((HX_CSTRING("UNKNOWN (") + axis) + HX_CSTRING(")"));
								}
							}
						}
						return null();
					}
				};
				HX_STACK_LINE(55)
				::openfl::ui::GameInputControl control = ::openfl::ui::GameInputControl_obj::__new(device,(HX_CSTRING("AXIS_") + _Function_3_1::Block(axis)),(int)-1,(int)1,null());		HX_STACK_VAR(control,"control");
				HX_STACK_LINE(56)
				device->__axis->set(axis,control);
				HX_STACK_LINE(57)
				device->__controls->push(control);
			}
			HX_STACK_LINE(61)
			::openfl::ui::GameInputControl control = device->__axis->get(axis);		HX_STACK_VAR(control,"control");
			HX_STACK_LINE(62)
			control->value = value;
			HX_STACK_LINE(63)
			::openfl::events::Event _g = ::openfl::events::Event_obj::__new(::openfl::events::Event_obj::CHANGE,null(),null());		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(63)
			control->dispatchEvent(_g);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GameInput_obj,__onGamepadAxisMove,(void))

Void GameInput_obj::__onGamepadButtonDown( ::lime::ui::Gamepad gamepad,int button){
{
		HX_STACK_FRAME("openfl.ui.GameInput","__onGamepadButtonDown",0xedf461e4,"openfl.ui.GameInput.__onGamepadButtonDown","openfl/ui/GameInput.hx",70,0x96cdaf42)
		HX_STACK_ARG(gamepad,"gamepad")
		HX_STACK_ARG(button,"button")
		HX_STACK_LINE(72)
		::openfl::ui::GameInputDevice device = ::openfl::ui::GameInput_obj::__devices->get(gamepad);		HX_STACK_VAR(device,"device");
		HX_STACK_LINE(74)
		if ((device->enabled)){
			HX_STACK_LINE(76)
			if ((!(device->__button->exists(button)))){
				struct _Function_3_1{
					inline static ::String Block( int &button){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/ui/GameInput.hx",78,0x96cdaf42)
						{
							HX_STACK_LINE(78)
							switch( (int)(button)){
								case (int)0: {
									HX_STACK_LINE(78)
									return HX_CSTRING("A");
								}
								;break;
								case (int)1: {
									HX_STACK_LINE(78)
									return HX_CSTRING("B");
								}
								;break;
								case (int)2: {
									HX_STACK_LINE(78)
									return HX_CSTRING("X");
								}
								;break;
								case (int)3: {
									HX_STACK_LINE(78)
									return HX_CSTRING("Y");
								}
								;break;
								case (int)4: {
									HX_STACK_LINE(78)
									return HX_CSTRING("BACK");
								}
								;break;
								case (int)5: {
									HX_STACK_LINE(78)
									return HX_CSTRING("GUIDE");
								}
								;break;
								case (int)6: {
									HX_STACK_LINE(78)
									return HX_CSTRING("START");
								}
								;break;
								case (int)7: {
									HX_STACK_LINE(78)
									return HX_CSTRING("LEFT_STICK");
								}
								;break;
								case (int)8: {
									HX_STACK_LINE(78)
									return HX_CSTRING("RIGHT_STICK");
								}
								;break;
								case (int)9: {
									HX_STACK_LINE(78)
									return HX_CSTRING("LEFT_SHOULDER");
								}
								;break;
								case (int)10: {
									HX_STACK_LINE(78)
									return HX_CSTRING("RIGHT_SHOULDER");
								}
								;break;
								case (int)11: {
									HX_STACK_LINE(78)
									return HX_CSTRING("DPAD_UP");
								}
								;break;
								case (int)12: {
									HX_STACK_LINE(78)
									return HX_CSTRING("DPAD_DOWN");
								}
								;break;
								case (int)13: {
									HX_STACK_LINE(78)
									return HX_CSTRING("DPAD_LEFT");
								}
								;break;
								case (int)14: {
									HX_STACK_LINE(78)
									return HX_CSTRING("DPAD_RIGHT");
								}
								;break;
								default: {
									HX_STACK_LINE(78)
									return ((HX_CSTRING("UNKNOWN (") + button) + HX_CSTRING(")"));
								}
							}
						}
						return null();
					}
				};
				HX_STACK_LINE(78)
				::openfl::ui::GameInputControl control = ::openfl::ui::GameInputControl_obj::__new(device,(HX_CSTRING("BUTTON_") + _Function_3_1::Block(button)),(int)0,(int)1,null());		HX_STACK_VAR(control,"control");
				HX_STACK_LINE(79)
				device->__button->set(button,control);
				HX_STACK_LINE(80)
				device->__controls->push(control);
			}
			HX_STACK_LINE(84)
			::openfl::ui::GameInputControl control = device->__button->get(button);		HX_STACK_VAR(control,"control");
			HX_STACK_LINE(85)
			control->value = (int)1;
			HX_STACK_LINE(86)
			::openfl::events::Event _g = ::openfl::events::Event_obj::__new(::openfl::events::Event_obj::CHANGE,null(),null());		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(86)
			control->dispatchEvent(_g);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GameInput_obj,__onGamepadButtonDown,(void))

Void GameInput_obj::__onGamepadButtonUp( ::lime::ui::Gamepad gamepad,int button){
{
		HX_STACK_FRAME("openfl.ui.GameInput","__onGamepadButtonUp",0x48120b5d,"openfl.ui.GameInput.__onGamepadButtonUp","openfl/ui/GameInput.hx",93,0x96cdaf42)
		HX_STACK_ARG(gamepad,"gamepad")
		HX_STACK_ARG(button,"button")
		HX_STACK_LINE(95)
		::openfl::ui::GameInputDevice device = ::openfl::ui::GameInput_obj::__devices->get(gamepad);		HX_STACK_VAR(device,"device");
		HX_STACK_LINE(97)
		if ((device->enabled)){
			HX_STACK_LINE(99)
			if ((!(device->__button->exists(button)))){
				struct _Function_3_1{
					inline static ::String Block( int &button){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/ui/GameInput.hx",101,0x96cdaf42)
						{
							HX_STACK_LINE(101)
							switch( (int)(button)){
								case (int)0: {
									HX_STACK_LINE(101)
									return HX_CSTRING("A");
								}
								;break;
								case (int)1: {
									HX_STACK_LINE(101)
									return HX_CSTRING("B");
								}
								;break;
								case (int)2: {
									HX_STACK_LINE(101)
									return HX_CSTRING("X");
								}
								;break;
								case (int)3: {
									HX_STACK_LINE(101)
									return HX_CSTRING("Y");
								}
								;break;
								case (int)4: {
									HX_STACK_LINE(101)
									return HX_CSTRING("BACK");
								}
								;break;
								case (int)5: {
									HX_STACK_LINE(101)
									return HX_CSTRING("GUIDE");
								}
								;break;
								case (int)6: {
									HX_STACK_LINE(101)
									return HX_CSTRING("START");
								}
								;break;
								case (int)7: {
									HX_STACK_LINE(101)
									return HX_CSTRING("LEFT_STICK");
								}
								;break;
								case (int)8: {
									HX_STACK_LINE(101)
									return HX_CSTRING("RIGHT_STICK");
								}
								;break;
								case (int)9: {
									HX_STACK_LINE(101)
									return HX_CSTRING("LEFT_SHOULDER");
								}
								;break;
								case (int)10: {
									HX_STACK_LINE(101)
									return HX_CSTRING("RIGHT_SHOULDER");
								}
								;break;
								case (int)11: {
									HX_STACK_LINE(101)
									return HX_CSTRING("DPAD_UP");
								}
								;break;
								case (int)12: {
									HX_STACK_LINE(101)
									return HX_CSTRING("DPAD_DOWN");
								}
								;break;
								case (int)13: {
									HX_STACK_LINE(101)
									return HX_CSTRING("DPAD_LEFT");
								}
								;break;
								case (int)14: {
									HX_STACK_LINE(101)
									return HX_CSTRING("DPAD_RIGHT");
								}
								;break;
								default: {
									HX_STACK_LINE(101)
									return ((HX_CSTRING("UNKNOWN (") + button) + HX_CSTRING(")"));
								}
							}
						}
						return null();
					}
				};
				HX_STACK_LINE(101)
				::openfl::ui::GameInputControl control = ::openfl::ui::GameInputControl_obj::__new(device,(HX_CSTRING("BUTTON_") + _Function_3_1::Block(button)),(int)0,(int)1,null());		HX_STACK_VAR(control,"control");
				HX_STACK_LINE(102)
				device->__button->set(button,control);
				HX_STACK_LINE(103)
				device->__controls->push(control);
			}
			HX_STACK_LINE(107)
			::openfl::ui::GameInputControl control = device->__button->get(button);		HX_STACK_VAR(control,"control");
			HX_STACK_LINE(108)
			control->value = (int)0;
			HX_STACK_LINE(109)
			::openfl::events::Event _g = ::openfl::events::Event_obj::__new(::openfl::events::Event_obj::CHANGE,null(),null());		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(109)
			control->dispatchEvent(_g);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GameInput_obj,__onGamepadButtonUp,(void))

Void GameInput_obj::__onGamepadConnect( ::lime::ui::Gamepad gamepad){
{
		HX_STACK_FRAME("openfl.ui.GameInput","__onGamepadConnect",0xce3c5b7a,"openfl.ui.GameInput.__onGamepadConnect","openfl/ui/GameInput.hx",116,0x96cdaf42)
		HX_STACK_ARG(gamepad,"gamepad")
		HX_STACK_LINE(118)
		::String _g = ::lime::ui::Gamepad_obj::lime_gamepad_get_device_guid(gamepad->id);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(118)
		::String _g1 = ::lime::ui::Gamepad_obj::lime_gamepad_get_device_name(gamepad->id);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(118)
		::openfl::ui::GameInputDevice device = ::openfl::ui::GameInputDevice_obj::__new(_g,_g1);		HX_STACK_VAR(device,"device");
		HX_STACK_LINE(119)
		::openfl::ui::GameInput_obj::__devices->set(gamepad,device);
		HX_STACK_LINE(120)
		int _g2 = ::Lambda_obj::count(::openfl::ui::GameInput_obj::__devices,null());		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(120)
		::openfl::ui::GameInput_obj::numDevices = _g2;
		HX_STACK_LINE(122)
		{
			HX_STACK_LINE(122)
			int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(122)
			Array< ::Dynamic > _g11 = ::openfl::ui::GameInput_obj::__instances;		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(122)
			while((true)){
				HX_STACK_LINE(122)
				if ((!(((_g3 < _g11->length))))){
					HX_STACK_LINE(122)
					break;
				}
				HX_STACK_LINE(122)
				::openfl::ui::GameInput instance = _g11->__get(_g3).StaticCast< ::openfl::ui::GameInput >();		HX_STACK_VAR(instance,"instance");
				HX_STACK_LINE(122)
				++(_g3);
				HX_STACK_LINE(124)
				::openfl::events::GameInputEvent _g31 = ::openfl::events::GameInputEvent_obj::__new(::openfl::events::GameInputEvent_obj::DEVICE_ADDED,null(),null(),device);		HX_STACK_VAR(_g31,"_g31");
				HX_STACK_LINE(124)
				instance->dispatchEvent(_g31);
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GameInput_obj,__onGamepadConnect,(void))

Void GameInput_obj::__onGamepadDisconnect( ::lime::ui::Gamepad gamepad){
{
		HX_STACK_FRAME("openfl.ui.GameInput","__onGamepadDisconnect",0xaad45ecc,"openfl.ui.GameInput.__onGamepadDisconnect","openfl/ui/GameInput.hx",131,0x96cdaf42)
		HX_STACK_ARG(gamepad,"gamepad")
		HX_STACK_LINE(133)
		::openfl::ui::GameInputDevice device = ::openfl::ui::GameInput_obj::__devices->get(gamepad);		HX_STACK_VAR(device,"device");
		HX_STACK_LINE(135)
		if (((device != null()))){
			HX_STACK_LINE(137)
			::openfl::ui::GameInput_obj::__devices->remove(gamepad);
			HX_STACK_LINE(138)
			int _g = ::Lambda_obj::count(::openfl::ui::GameInput_obj::__devices,null());		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(138)
			::openfl::ui::GameInput_obj::numDevices = _g;
			HX_STACK_LINE(140)
			{
				HX_STACK_LINE(140)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(140)
				Array< ::Dynamic > _g11 = ::openfl::ui::GameInput_obj::__instances;		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(140)
				while((true)){
					HX_STACK_LINE(140)
					if ((!(((_g1 < _g11->length))))){
						HX_STACK_LINE(140)
						break;
					}
					HX_STACK_LINE(140)
					::openfl::ui::GameInput instance = _g11->__get(_g1).StaticCast< ::openfl::ui::GameInput >();		HX_STACK_VAR(instance,"instance");
					HX_STACK_LINE(140)
					++(_g1);
					HX_STACK_LINE(142)
					::openfl::events::GameInputEvent _g12 = ::openfl::events::GameInputEvent_obj::__new(::openfl::events::GameInputEvent_obj::DEVICE_REMOVED,null(),null(),device);		HX_STACK_VAR(_g12,"_g12");
					HX_STACK_LINE(142)
					instance->dispatchEvent(_g12);
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GameInput_obj,__onGamepadDisconnect,(void))


GameInput_obj::GameInput_obj()
{
}

Dynamic GameInput_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"__devices") ) { return __devices; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"numDevices") ) { return numDevices; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"isAvailable") ) { return isAvailable; }
		if (HX_FIELD_EQ(inName,"__instances") ) { return __instances; }
		if (HX_FIELD_EQ(inName,"getDeviceAt") ) { return getDeviceAt_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__onGamepadConnect") ) { return __onGamepadConnect_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"__onGamepadAxisMove") ) { return __onGamepadAxisMove_dyn(); }
		if (HX_FIELD_EQ(inName,"__onGamepadButtonUp") ) { return __onGamepadButtonUp_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"__onGamepadButtonDown") ) { return __onGamepadButtonDown_dyn(); }
		if (HX_FIELD_EQ(inName,"__onGamepadDisconnect") ) { return __onGamepadDisconnect_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic GameInput_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"__devices") ) { __devices=inValue.Cast< ::haxe::ds::ObjectMap >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"numDevices") ) { numDevices=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"isAvailable") ) { isAvailable=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__instances") ) { __instances=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GameInput_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("isAvailable"),
	HX_CSTRING("numDevices"),
	HX_CSTRING("__devices"),
	HX_CSTRING("__instances"),
	HX_CSTRING("getDeviceAt"),
	HX_CSTRING("__onGamepadAxisMove"),
	HX_CSTRING("__onGamepadButtonDown"),
	HX_CSTRING("__onGamepadButtonUp"),
	HX_CSTRING("__onGamepadConnect"),
	HX_CSTRING("__onGamepadDisconnect"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GameInput_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(GameInput_obj::isAvailable,"isAvailable");
	HX_MARK_MEMBER_NAME(GameInput_obj::numDevices,"numDevices");
	HX_MARK_MEMBER_NAME(GameInput_obj::__devices,"__devices");
	HX_MARK_MEMBER_NAME(GameInput_obj::__instances,"__instances");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GameInput_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(GameInput_obj::isAvailable,"isAvailable");
	HX_VISIT_MEMBER_NAME(GameInput_obj::numDevices,"numDevices");
	HX_VISIT_MEMBER_NAME(GameInput_obj::__devices,"__devices");
	HX_VISIT_MEMBER_NAME(GameInput_obj::__instances,"__instances");
};

#endif

Class GameInput_obj::__mClass;

void GameInput_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl.ui.GameInput"), hx::TCanCast< GameInput_obj> ,sStaticFields,sMemberFields,
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

void GameInput_obj::__boot()
{
	isAvailable= true;
	numDevices= (int)0;
	__devices= ::haxe::ds::ObjectMap_obj::__new();
	__instances= Array_obj< ::Dynamic >::__new();
}

} // end namespace openfl
} // end namespace ui
