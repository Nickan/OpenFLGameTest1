#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_EventPhase
#include <openfl/events/EventPhase.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events__EventDispatcher_Listener
#include <openfl/events/_EventDispatcher/Listener.h>
#endif
namespace openfl{
namespace events{

Void EventDispatcher_obj::__construct(::openfl::events::IEventDispatcher target)
{
HX_STACK_FRAME("openfl.events.EventDispatcher","new",0xd41245fc,"openfl.events.EventDispatcher.new","openfl/events/EventDispatcher.hx",84,0xe2270714)
HX_STACK_THIS(this)
HX_STACK_ARG(target,"target")
{
	HX_STACK_LINE(84)
	if (((target != null()))){
		HX_STACK_LINE(86)
		this->__targetDispatcher = target;
	}
}
;
	return null();
}

//EventDispatcher_obj::~EventDispatcher_obj() { }

Dynamic EventDispatcher_obj::__CreateEmpty() { return  new EventDispatcher_obj; }
hx::ObjectPtr< EventDispatcher_obj > EventDispatcher_obj::__new(::openfl::events::IEventDispatcher target)
{  hx::ObjectPtr< EventDispatcher_obj > result = new EventDispatcher_obj();
	result->__construct(target);
	return result;}

Dynamic EventDispatcher_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< EventDispatcher_obj > result = new EventDispatcher_obj();
	result->__construct(inArgs[0]);
	return result;}

hx::Object *EventDispatcher_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::openfl::events::IEventDispatcher_obj)) return operator ::openfl::events::IEventDispatcher_obj *();
	return super::__ToInterface(inType);
}

Void EventDispatcher_obj::addEventListener( ::String type,Dynamic listener,hx::Null< bool >  __o_useCapture,hx::Null< int >  __o_priority,hx::Null< bool >  __o_useWeakReference){
bool useCapture = __o_useCapture.Default(false);
int priority = __o_priority.Default(0);
bool useWeakReference = __o_useWeakReference.Default(false);
	HX_STACK_FRAME("openfl.events.EventDispatcher","addEventListener",0xf79f44b1,"openfl.events.EventDispatcher.addEventListener","openfl/events/EventDispatcher.hx",186,0xe2270714)
	HX_STACK_THIS(this)
	HX_STACK_ARG(type,"type")
	HX_STACK_ARG(listener,"listener")
	HX_STACK_ARG(useCapture,"useCapture")
	HX_STACK_ARG(priority,"priority")
	HX_STACK_ARG(useWeakReference,"useWeakReference")
{
		HX_STACK_LINE(188)
		if (((this->__eventMap == null()))){
			HX_STACK_LINE(190)
			::haxe::ds::StringMap _g = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(190)
			this->__dispatching = _g;
			HX_STACK_LINE(191)
			::haxe::ds::StringMap _g1 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(191)
			this->__eventMap = _g1;
			HX_STACK_LINE(192)
			::haxe::ds::StringMap _g2 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(192)
			this->__newEventMap = _g2;
		}
		HX_STACK_LINE(196)
		if ((!(this->__eventMap->exists(type)))){
			HX_STACK_LINE(198)
			Array< ::Dynamic > list = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(list,"list");
			HX_STACK_LINE(199)
			::openfl::events::_EventDispatcher::Listener _g3 = ::openfl::events::_EventDispatcher::Listener_obj::__new(listener,useCapture,priority);		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(199)
			list->push(_g3);
			HX_STACK_LINE(200)
			this->__eventMap->set(type,list);
		}
		else{
			HX_STACK_LINE(204)
			Array< ::Dynamic > list;		HX_STACK_VAR(list,"list");
			HX_STACK_LINE(206)
			Dynamic _g4 = this->__dispatching->get(type);		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(206)
			if (((_g4 == true))){
				HX_STACK_LINE(208)
				if ((!(this->__newEventMap->exists(type)))){
					HX_STACK_LINE(210)
					Array< ::Dynamic > _g5 = this->__eventMap->get(type)->__Field(HX_CSTRING("copy"),true)();		HX_STACK_VAR(_g5,"_g5");
					HX_STACK_LINE(210)
					list = _g5;
					HX_STACK_LINE(211)
					this->__newEventMap->set(type,list);
				}
				else{
					HX_STACK_LINE(215)
					Array< ::Dynamic > _g6 = this->__newEventMap->get(type);		HX_STACK_VAR(_g6,"_g6");
					HX_STACK_LINE(215)
					list = _g6;
				}
			}
			else{
				HX_STACK_LINE(221)
				Array< ::Dynamic > _g7 = this->__eventMap->get(type);		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(221)
				list = _g7;
			}
			HX_STACK_LINE(225)
			{
				HX_STACK_LINE(225)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(225)
				int _g = list->length;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(225)
				while((true)){
					HX_STACK_LINE(225)
					if ((!(((_g1 < _g))))){
						HX_STACK_LINE(225)
						break;
					}
					HX_STACK_LINE(225)
					int i = (_g1)++;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(227)
					if ((::Reflect_obj::compareMethods(list->__get(i).StaticCast< ::openfl::events::_EventDispatcher::Listener >()->callback,listener))){
						HX_STACK_LINE(227)
						return null();
					}
				}
			}
			HX_STACK_LINE(231)
			::openfl::events::_EventDispatcher::Listener _g8 = ::openfl::events::_EventDispatcher::Listener_obj::__new(listener,useCapture,priority);		HX_STACK_VAR(_g8,"_g8");
			HX_STACK_LINE(231)
			list->push(_g8);
			HX_STACK_LINE(232)
			list->sort(::openfl::events::EventDispatcher_obj::__sortByPriority_dyn());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(EventDispatcher_obj,addEventListener,(void))

bool EventDispatcher_obj::dispatchEvent( ::openfl::events::Event event){
	HX_STACK_FRAME("openfl.events.EventDispatcher","dispatchEvent",0x2230d79c,"openfl.events.EventDispatcher.dispatchEvent","openfl/events/EventDispatcher.hx",254,0xe2270714)
	HX_STACK_THIS(this)
	HX_STACK_ARG(event,"event")
	HX_STACK_LINE(256)
	if (((bool((this->__eventMap == null())) || bool((event == null()))))){
		HX_STACK_LINE(256)
		return false;
	}
	HX_STACK_LINE(258)
	::String type = event->type;		HX_STACK_VAR(type,"type");
	HX_STACK_LINE(260)
	Array< ::Dynamic > list = this->__eventMap->get(type);		HX_STACK_VAR(list,"list");
	HX_STACK_LINE(261)
	if (((list == null()))){
		HX_STACK_LINE(261)
		return false;
	}
	HX_STACK_LINE(263)
	this->__dispatching->set(type,true);
	HX_STACK_LINE(265)
	if (((event->target == null()))){
		HX_STACK_LINE(267)
		if (((this->__targetDispatcher != null()))){
			HX_STACK_LINE(269)
			event->target = this->__targetDispatcher;
		}
		else{
			HX_STACK_LINE(273)
			event->target = hx::ObjectPtr<OBJ_>(this);
		}
	}
	HX_STACK_LINE(279)
	event->currentTarget = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(281)
	bool capture = (event->eventPhase == ::openfl::events::EventPhase_obj::CAPTURING_PHASE);		HX_STACK_VAR(capture,"capture");
	HX_STACK_LINE(282)
	int index = (int)0;		HX_STACK_VAR(index,"index");
	HX_STACK_LINE(283)
	::openfl::events::_EventDispatcher::Listener listener;		HX_STACK_VAR(listener,"listener");
	HX_STACK_LINE(285)
	while((true)){
		HX_STACK_LINE(285)
		if ((!(((index < list->length))))){
			HX_STACK_LINE(285)
			break;
		}
		HX_STACK_LINE(287)
		listener = list->__get(index).StaticCast< ::openfl::events::_EventDispatcher::Listener >();
		HX_STACK_LINE(289)
		if (((listener->useCapture == capture))){
			HX_STACK_LINE(292)
			listener->callback(event);
			HX_STACK_LINE(294)
			if ((event->__isCancelledNow)){
				HX_STACK_LINE(296)
				break;
			}
		}
		HX_STACK_LINE(302)
		if (((listener == list->__get(index).StaticCast< ::openfl::events::_EventDispatcher::Listener >()))){
			HX_STACK_LINE(304)
			(index)++;
		}
	}
	HX_STACK_LINE(310)
	if (((  (((this->__newEventMap != null()))) ? bool(this->__newEventMap->exists(type)) : bool(false) ))){
		HX_STACK_LINE(312)
		Array< ::Dynamic > list1 = this->__newEventMap->get(type);		HX_STACK_VAR(list1,"list1");
		HX_STACK_LINE(314)
		if (((list1->length > (int)0))){
			HX_STACK_LINE(316)
			this->__eventMap->set(type,list1);
		}
		else{
			HX_STACK_LINE(320)
			this->__eventMap->remove(type);
		}
		HX_STACK_LINE(324)
		if ((!(this->__eventMap->iterator()->__Field(HX_CSTRING("hasNext"),true)()))){
			HX_STACK_LINE(326)
			this->__eventMap = null();
			HX_STACK_LINE(327)
			this->__newEventMap = null();
		}
		HX_STACK_LINE(331)
		this->__newEventMap->remove(type);
	}
	HX_STACK_LINE(335)
	this->__dispatching->set(event->type,false);
	HX_STACK_LINE(337)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC1(EventDispatcher_obj,dispatchEvent,return )

bool EventDispatcher_obj::hasEventListener( ::String type){
	HX_STACK_FRAME("openfl.events.EventDispatcher","hasEventListener",0x132567d8,"openfl.events.EventDispatcher.hasEventListener","openfl/events/EventDispatcher.hx",362,0xe2270714)
	HX_STACK_THIS(this)
	HX_STACK_ARG(type,"type")
	HX_STACK_LINE(364)
	if (((this->__eventMap == null()))){
		HX_STACK_LINE(364)
		return false;
	}
	HX_STACK_LINE(365)
	return this->__eventMap->exists(type);
}


HX_DEFINE_DYNAMIC_FUNC1(EventDispatcher_obj,hasEventListener,return )

Void EventDispatcher_obj::removeEventListener( ::String type,Dynamic listener,hx::Null< bool >  __o_capture){
bool capture = __o_capture.Default(false);
	HX_STACK_FRAME("openfl.events.EventDispatcher","removeEventListener",0x40c1f566,"openfl.events.EventDispatcher.removeEventListener","openfl/events/EventDispatcher.hx",385,0xe2270714)
	HX_STACK_THIS(this)
	HX_STACK_ARG(type,"type")
	HX_STACK_ARG(listener,"listener")
	HX_STACK_ARG(capture,"capture")
{
		HX_STACK_LINE(387)
		if (((this->__eventMap == null()))){
			HX_STACK_LINE(387)
			return null();
		}
		HX_STACK_LINE(389)
		Array< ::Dynamic > list = this->__eventMap->get(type);		HX_STACK_VAR(list,"list");
		HX_STACK_LINE(390)
		if (((list == null()))){
			HX_STACK_LINE(390)
			return null();
		}
		HX_STACK_LINE(392)
		Dynamic _g = this->__dispatching->get(type);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(392)
		if (((_g == true))){
			HX_STACK_LINE(394)
			if ((!(this->__newEventMap->exists(type)))){
				HX_STACK_LINE(396)
				Array< ::Dynamic > _g1 = this->__eventMap->get(type)->__Field(HX_CSTRING("copy"),true)();		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(396)
				list = _g1;
				HX_STACK_LINE(397)
				this->__newEventMap->set(type,list);
			}
			else{
				HX_STACK_LINE(401)
				Array< ::Dynamic > _g2 = this->__newEventMap->get(type);		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(401)
				list = _g2;
			}
		}
		HX_STACK_LINE(407)
		{
			HX_STACK_LINE(407)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(407)
			int _g2 = list->length;		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(407)
			while((true)){
				HX_STACK_LINE(407)
				if ((!(((_g1 < _g2))))){
					HX_STACK_LINE(407)
					break;
				}
				HX_STACK_LINE(407)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(409)
				if ((list->__get(i).StaticCast< ::openfl::events::_EventDispatcher::Listener >()->match(listener,capture))){
					HX_STACK_LINE(411)
					list->splice(i,(int)1);
					HX_STACK_LINE(412)
					break;
				}
			}
		}
		HX_STACK_LINE(418)
		if (((list->length == (int)0))){
			HX_STACK_LINE(420)
			this->__eventMap->remove(type);
		}
		HX_STACK_LINE(424)
		if ((!(this->__eventMap->iterator()->__Field(HX_CSTRING("hasNext"),true)()))){
			HX_STACK_LINE(426)
			this->__eventMap = null();
			HX_STACK_LINE(427)
			this->__newEventMap = null();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(EventDispatcher_obj,removeEventListener,(void))

::String EventDispatcher_obj::toString( ){
	HX_STACK_FRAME("openfl.events.EventDispatcher","toString",0x34d48590,"openfl.events.EventDispatcher.toString","openfl/events/EventDispatcher.hx",434,0xe2270714)
	HX_STACK_THIS(this)
	HX_STACK_LINE(436)
	::Class _g = ::Type_obj::getClass(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(436)
	::String full = ::Type_obj::getClassName(_g);		HX_STACK_VAR(full,"full");
	HX_STACK_LINE(437)
	::String _short = full.split(HX_CSTRING("."))->pop();		HX_STACK_VAR(_short,"short");
	HX_STACK_LINE(439)
	return ((HX_CSTRING("[object ") + _short) + HX_CSTRING("]"));
}


HX_DEFINE_DYNAMIC_FUNC0(EventDispatcher_obj,toString,return )

bool EventDispatcher_obj::willTrigger( ::String type){
	HX_STACK_FRAME("openfl.events.EventDispatcher","willTrigger",0x7a1765e2,"openfl.events.EventDispatcher.willTrigger","openfl/events/EventDispatcher.hx",466,0xe2270714)
	HX_STACK_THIS(this)
	HX_STACK_ARG(type,"type")
	HX_STACK_LINE(466)
	return this->hasEventListener(type);
}


HX_DEFINE_DYNAMIC_FUNC1(EventDispatcher_obj,willTrigger,return )

int EventDispatcher_obj::__sortByPriority( ::openfl::events::_EventDispatcher::Listener l1,::openfl::events::_EventDispatcher::Listener l2){
	HX_STACK_FRAME("openfl.events.EventDispatcher","__sortByPriority",0x7512cd5d,"openfl.events.EventDispatcher.__sortByPriority","openfl/events/EventDispatcher.hx",473,0xe2270714)
	HX_STACK_ARG(l1,"l1")
	HX_STACK_ARG(l2,"l2")
	HX_STACK_LINE(473)
	if (((l1->priority == l2->priority))){
		HX_STACK_LINE(473)
		return (int)0;
	}
	else{
		HX_STACK_LINE(473)
		if (((l1->priority > l2->priority))){
			HX_STACK_LINE(473)
			return (int)-1;
		}
		else{
			HX_STACK_LINE(473)
			return (int)1;
		}
	}
	HX_STACK_LINE(473)
	return (int)0;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(EventDispatcher_obj,__sortByPriority,return )


EventDispatcher_obj::EventDispatcher_obj()
{
}

void EventDispatcher_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(EventDispatcher);
	HX_MARK_MEMBER_NAME(__dispatching,"__dispatching");
	HX_MARK_MEMBER_NAME(__targetDispatcher,"__targetDispatcher");
	HX_MARK_MEMBER_NAME(__eventMap,"__eventMap");
	HX_MARK_MEMBER_NAME(__newEventMap,"__newEventMap");
	HX_MARK_END_CLASS();
}

void EventDispatcher_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(__dispatching,"__dispatching");
	HX_VISIT_MEMBER_NAME(__targetDispatcher,"__targetDispatcher");
	HX_VISIT_MEMBER_NAME(__eventMap,"__eventMap");
	HX_VISIT_MEMBER_NAME(__newEventMap,"__newEventMap");
}

Dynamic EventDispatcher_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__eventMap") ) { return __eventMap; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"willTrigger") ) { return willTrigger_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__dispatching") ) { return __dispatching; }
		if (HX_FIELD_EQ(inName,"__newEventMap") ) { return __newEventMap; }
		if (HX_FIELD_EQ(inName,"dispatchEvent") ) { return dispatchEvent_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__sortByPriority") ) { return __sortByPriority_dyn(); }
		if (HX_FIELD_EQ(inName,"addEventListener") ) { return addEventListener_dyn(); }
		if (HX_FIELD_EQ(inName,"hasEventListener") ) { return hasEventListener_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__targetDispatcher") ) { return __targetDispatcher; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"removeEventListener") ) { return removeEventListener_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic EventDispatcher_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"__eventMap") ) { __eventMap=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__dispatching") ) { __dispatching=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__newEventMap") ) { __newEventMap=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__targetDispatcher") ) { __targetDispatcher=inValue.Cast< ::openfl::events::IEventDispatcher >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void EventDispatcher_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("__dispatching"));
	outFields->push(HX_CSTRING("__targetDispatcher"));
	outFields->push(HX_CSTRING("__eventMap"));
	outFields->push(HX_CSTRING("__newEventMap"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("__sortByPriority"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(EventDispatcher_obj,__dispatching),HX_CSTRING("__dispatching")},
	{hx::fsObject /*::openfl::events::IEventDispatcher*/ ,(int)offsetof(EventDispatcher_obj,__targetDispatcher),HX_CSTRING("__targetDispatcher")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(EventDispatcher_obj,__eventMap),HX_CSTRING("__eventMap")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(EventDispatcher_obj,__newEventMap),HX_CSTRING("__newEventMap")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("__dispatching"),
	HX_CSTRING("__targetDispatcher"),
	HX_CSTRING("__eventMap"),
	HX_CSTRING("__newEventMap"),
	HX_CSTRING("addEventListener"),
	HX_CSTRING("dispatchEvent"),
	HX_CSTRING("hasEventListener"),
	HX_CSTRING("removeEventListener"),
	HX_CSTRING("toString"),
	HX_CSTRING("willTrigger"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(EventDispatcher_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(EventDispatcher_obj::__mClass,"__mClass");
};

#endif

Class EventDispatcher_obj::__mClass;

void EventDispatcher_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl.events.EventDispatcher"), hx::TCanCast< EventDispatcher_obj> ,sStaticFields,sMemberFields,
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

void EventDispatcher_obj::__boot()
{
}

} // end namespace openfl
} // end namespace events
