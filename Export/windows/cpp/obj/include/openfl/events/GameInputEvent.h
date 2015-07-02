#ifndef INCLUDED_openfl_events_GameInputEvent
#define INCLUDED_openfl_events_GameInputEvent

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <openfl/events/Event.h>
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,GameInputEvent)
HX_DECLARE_CLASS2(openfl,ui,GameInputDevice)
namespace openfl{
namespace events{


class HXCPP_CLASS_ATTRIBUTES  GameInputEvent_obj : public ::openfl::events::Event_obj{
	public:
		typedef ::openfl::events::Event_obj super;
		typedef GameInputEvent_obj OBJ_;
		GameInputEvent_obj();
		Void __construct(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable,::openfl::ui::GameInputDevice device);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< GameInputEvent_obj > __new(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable,::openfl::ui::GameInputDevice device);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~GameInputEvent_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("GameInputEvent"); }

		::openfl::ui::GameInputDevice device;
		virtual ::openfl::events::Event clone( );

		virtual ::String toString( );

		static ::String DEVICE_ADDED;
		static ::String DEVICE_REMOVED;
		static ::String DEVICE_UNUSABLE;
};

} // end namespace openfl
} // end namespace events

#endif /* INCLUDED_openfl_events_GameInputEvent */ 
