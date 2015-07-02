#ifndef INCLUDED_openfl_ui_GameInput
#define INCLUDED_openfl_ui_GameInput

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <openfl/events/EventDispatcher.h>
HX_DECLARE_CLASS0(IMap)
HX_DECLARE_CLASS2(haxe,ds,ObjectMap)
HX_DECLARE_CLASS2(lime,ui,Gamepad)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,ui,GameInput)
HX_DECLARE_CLASS2(openfl,ui,GameInputDevice)
namespace openfl{
namespace ui{


class HXCPP_CLASS_ATTRIBUTES  GameInput_obj : public ::openfl::events::EventDispatcher_obj{
	public:
		typedef ::openfl::events::EventDispatcher_obj super;
		typedef GameInput_obj OBJ_;
		GameInput_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< GameInput_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~GameInput_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("GameInput"); }

		static bool isAvailable;
		static int numDevices;
		static ::haxe::ds::ObjectMap __devices;
		static Array< ::Dynamic > __instances;
		static ::openfl::ui::GameInputDevice getDeviceAt( int index);
		static Dynamic getDeviceAt_dyn();

		static Void __onGamepadAxisMove( ::lime::ui::Gamepad gamepad,int axis,Float value);
		static Dynamic __onGamepadAxisMove_dyn();

		static Void __onGamepadButtonDown( ::lime::ui::Gamepad gamepad,int button);
		static Dynamic __onGamepadButtonDown_dyn();

		static Void __onGamepadButtonUp( ::lime::ui::Gamepad gamepad,int button);
		static Dynamic __onGamepadButtonUp_dyn();

		static Void __onGamepadConnect( ::lime::ui::Gamepad gamepad);
		static Dynamic __onGamepadConnect_dyn();

		static Void __onGamepadDisconnect( ::lime::ui::Gamepad gamepad);
		static Dynamic __onGamepadDisconnect_dyn();

};

} // end namespace openfl
} // end namespace ui

#endif /* INCLUDED_openfl_ui_GameInput */ 
