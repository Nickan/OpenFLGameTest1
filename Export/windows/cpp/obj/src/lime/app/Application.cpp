#include <hxcpp.h>

#ifndef INCLUDED_lime__backend_native_NativeApplication
#include <lime/_backend/native/NativeApplication.h>
#endif
#ifndef INCLUDED_lime_app_Application
#include <lime/app/Application.h>
#endif
#ifndef INCLUDED_lime_app_Event
#include <lime/app/Event.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_app_Module
#include <lime/app/Module.h>
#endif
#ifndef INCLUDED_lime_graphics_RenderContext
#include <lime/graphics/RenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_Renderer
#include <lime/graphics/Renderer.h>
#endif
#ifndef INCLUDED_lime_ui_Gamepad
#include <lime/ui/Gamepad.h>
#endif
#ifndef INCLUDED_lime_ui_Window
#include <lime/ui/Window.h>
#endif
namespace lime{
namespace app{

Void Application_obj::__construct()
{
HX_STACK_FRAME("lime.app.Application","new",0x9354427c,"lime.app.Application.new","lime/app/Application.hx",20,0x8bc55476)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(32)
	this->onUpdate = ::lime::app::Event_obj::__new();
	HX_STACK_LINE(45)
	super::__construct();
	HX_STACK_LINE(47)
	if (((::lime::app::Application_obj::current == null()))){
		HX_STACK_LINE(49)
		::lime::app::Application_obj::current = hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(53)
	Array< ::lime::app::IModule > _g = Array_obj< ::lime::app::IModule >::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(53)
	this->modules = _g;
	HX_STACK_LINE(54)
	Array< ::Dynamic > _g1 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(54)
	this->renderers = _g1;
	HX_STACK_LINE(55)
	Array< ::Dynamic > _g2 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(55)
	this->windows = _g2;
	HX_STACK_LINE(56)
	::lime::_backend::native::NativeApplication _g3 = ::lime::_backend::native::NativeApplication_obj::__new(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(56)
	this->backend = _g3;
	HX_STACK_LINE(58)
	this->onUpdate->add(this->update_dyn(),null(),null());
}
;
	return null();
}

//Application_obj::~Application_obj() { }

Dynamic Application_obj::__CreateEmpty() { return  new Application_obj; }
hx::ObjectPtr< Application_obj > Application_obj::__new()
{  hx::ObjectPtr< Application_obj > result = new Application_obj();
	result->__construct();
	return result;}

Dynamic Application_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Application_obj > result = new Application_obj();
	result->__construct();
	return result;}

Void Application_obj::addModule( ::lime::app::IModule module){
{
		HX_STACK_FRAME("lime.app.Application","addModule",0x673258c9,"lime.app.Application.addModule","lime/app/Application.hx",67,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(module,"module")
		HX_STACK_LINE(69)
		this->modules->push(module);
		HX_STACK_LINE(71)
		if (((bool(this->initialized) && bool((this->renderers->__get((int)0).StaticCast< ::lime::graphics::Renderer >() != null()))))){
			HX_STACK_LINE(73)
			module->init(this->renderers->__get((int)0).StaticCast< ::lime::graphics::Renderer >()->context);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Application_obj,addModule,(void))

Void Application_obj::addRenderer( ::lime::graphics::Renderer renderer){
{
		HX_STACK_FRAME("lime.app.Application","addRenderer",0x0a61eaa0,"lime.app.Application.addRenderer","lime/app/Application.hx",85,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderer,"renderer")
		HX_STACK_LINE(87)
		renderer->onRender->add(this->render_dyn(),null(),null());
		HX_STACK_LINE(88)
		renderer->onRenderContextLost->add(this->onRenderContextLost_dyn(),null(),null());
		HX_STACK_LINE(89)
		renderer->onRenderContextRestored->add(this->onRenderContextRestored_dyn(),null(),null());
		HX_STACK_LINE(91)
		this->renderers->push(renderer);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Application_obj,addRenderer,(void))

Void Application_obj::addWindow( ::lime::ui::Window window){
{
		HX_STACK_FRAME("lime.app.Application","addWindow",0xf8ebb80d,"lime.app.Application.addWindow","lime/app/Application.hx",101,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
		HX_STACK_LINE(103)
		this->windows->push(window);
		HX_STACK_LINE(105)
		window->onGamepadAxisMove->add(this->onGamepadAxisMove_dyn(),null(),null());
		HX_STACK_LINE(106)
		window->onGamepadButtonDown->add(this->onGamepadButtonDown_dyn(),null(),null());
		HX_STACK_LINE(107)
		window->onGamepadButtonUp->add(this->onGamepadButtonUp_dyn(),null(),null());
		HX_STACK_LINE(108)
		window->onGamepadConnect->add(this->onGamepadConnect_dyn(),null(),null());
		HX_STACK_LINE(109)
		window->onGamepadDisconnect->add(this->onGamepadDisconnect_dyn(),null(),null());
		HX_STACK_LINE(110)
		window->onKeyDown->add(this->onKeyDown_dyn(),null(),null());
		HX_STACK_LINE(111)
		window->onKeyUp->add(this->onKeyUp_dyn(),null(),null());
		HX_STACK_LINE(112)
		window->onMouseDown->add(this->onMouseDown_dyn(),null(),null());
		HX_STACK_LINE(113)
		window->onMouseMove->add(this->onMouseMove_dyn(),null(),null());
		HX_STACK_LINE(114)
		window->onMouseMoveRelative->add(this->onMouseMoveRelative_dyn(),null(),null());
		HX_STACK_LINE(115)
		window->onMouseUp->add(this->onMouseUp_dyn(),null(),null());
		HX_STACK_LINE(116)
		window->onMouseWheel->add(this->onMouseWheel_dyn(),null(),null());
		HX_STACK_LINE(117)
		window->onTextEdit->add(this->onTextEdit_dyn(),null(),null());
		HX_STACK_LINE(118)
		window->onTextInput->add(this->onTextInput_dyn(),null(),null());
		HX_STACK_LINE(119)
		window->onTouchStart->add(this->onTouchStart_dyn(),null(),null());
		HX_STACK_LINE(120)
		window->onTouchMove->add(this->onTouchMove_dyn(),null(),null());
		HX_STACK_LINE(121)
		window->onTouchEnd->add(this->onTouchEnd_dyn(),null(),null());
		HX_STACK_LINE(122)
		window->onWindowActivate->add(this->onWindowActivate_dyn(),null(),null());
		HX_STACK_LINE(123)
		window->onWindowClose->add(this->onWindowClose_dyn(),null(),null());
		HX_STACK_LINE(124)
		window->onWindowDeactivate->add(this->onWindowDeactivate_dyn(),null(),null());
		HX_STACK_LINE(125)
		window->onWindowEnter->add(this->onWindowEnter_dyn(),null(),null());
		HX_STACK_LINE(126)
		window->onWindowFocusIn->add(this->onWindowFocusIn_dyn(),null(),null());
		HX_STACK_LINE(127)
		window->onWindowFocusOut->add(this->onWindowFocusOut_dyn(),null(),null());
		HX_STACK_LINE(128)
		window->onWindowFullscreen->add(this->onWindowFullscreen_dyn(),null(),null());
		HX_STACK_LINE(129)
		window->onWindowLeave->add(this->onWindowLeave_dyn(),null(),null());
		HX_STACK_LINE(130)
		window->onWindowMinimize->add(this->onWindowMinimize_dyn(),null(),null());
		HX_STACK_LINE(131)
		window->onWindowMove->add(this->onWindowMove_dyn(),null(),null());
		HX_STACK_LINE(132)
		window->onWindowResize->add(this->onWindowResize_dyn(),null(),null());
		HX_STACK_LINE(133)
		window->onWindowRestore->add(this->onWindowRestore_dyn(),null(),null());
		HX_STACK_LINE(135)
		window->create(hx::ObjectPtr<OBJ_>(this));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Application_obj,addWindow,(void))

Void Application_obj::create( Dynamic config){
{
		HX_STACK_FRAME("lime.app.Application","create",0x35e42e60,"lime.app.Application.create","lime/app/Application.hx",148,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(config,"config")
		HX_STACK_LINE(148)
		this->backend->create(config);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Application_obj,create,(void))

int Application_obj::exec( ){
	HX_STACK_FRAME("lime.app.Application","exec",0x508159f5,"lime.app.Application.exec","lime/app/Application.hx",159,0x8bc55476)
	HX_STACK_THIS(this)
	HX_STACK_LINE(161)
	::lime::app::Application_obj::current = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(163)
	return this->backend->exec();
}


HX_DEFINE_DYNAMIC_FUNC0(Application_obj,exec,return )

Void Application_obj::init( ::lime::graphics::RenderContext context){
{
		HX_STACK_FRAME("lime.app.Application","init",0x531ea174,"lime.app.Application.init","lime/app/Application.hx",168,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(context,"context")
		HX_STACK_LINE(170)
		{
			HX_STACK_LINE(170)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(170)
			Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(170)
			while((true)){
				HX_STACK_LINE(170)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(170)
					break;
				}
				HX_STACK_LINE(170)
				::lime::app::IModule module = _g1->__get(_g);		HX_STACK_VAR(module,"module");
				HX_STACK_LINE(170)
				++(_g);
				HX_STACK_LINE(172)
				module->init(context);
			}
		}
		HX_STACK_LINE(176)
		this->initialized = true;
	}
return null();
}


Void Application_obj::onGamepadAxisMove( ::lime::ui::Gamepad gamepad,int axis,Float value){
{
		HX_STACK_FRAME("lime.app.Application","onGamepadAxisMove",0x507e62d0,"lime.app.Application.onGamepadAxisMove","lime/app/Application.hx",183,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(gamepad,"gamepad")
		HX_STACK_ARG(axis,"axis")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(183)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(183)
		Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(183)
		while((true)){
			HX_STACK_LINE(183)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(183)
				break;
			}
			HX_STACK_LINE(183)
			::lime::app::IModule module = _g1->__get(_g);		HX_STACK_VAR(module,"module");
			HX_STACK_LINE(183)
			++(_g);
			HX_STACK_LINE(185)
			module->onGamepadAxisMove(gamepad,axis,value);
		}
	}
return null();
}


Void Application_obj::onGamepadButtonDown( ::lime::ui::Gamepad gamepad,int button){
{
		HX_STACK_FRAME("lime.app.Application","onGamepadButtonDown",0x00e65572,"lime.app.Application.onGamepadButtonDown","lime/app/Application.hx",194,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(gamepad,"gamepad")
		HX_STACK_ARG(button,"button")
		HX_STACK_LINE(194)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(194)
		Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(194)
		while((true)){
			HX_STACK_LINE(194)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(194)
				break;
			}
			HX_STACK_LINE(194)
			::lime::app::IModule module = _g1->__get(_g);		HX_STACK_VAR(module,"module");
			HX_STACK_LINE(194)
			++(_g);
			HX_STACK_LINE(196)
			module->onGamepadButtonDown(gamepad,button);
		}
	}
return null();
}


Void Application_obj::onGamepadButtonUp( ::lime::ui::Gamepad gamepad,int button){
{
		HX_STACK_FRAME("lime.app.Application","onGamepadButtonUp",0x1cbc5f6b,"lime.app.Application.onGamepadButtonUp","lime/app/Application.hx",205,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(gamepad,"gamepad")
		HX_STACK_ARG(button,"button")
		HX_STACK_LINE(205)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(205)
		Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(205)
		while((true)){
			HX_STACK_LINE(205)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(205)
				break;
			}
			HX_STACK_LINE(205)
			::lime::app::IModule module = _g1->__get(_g);		HX_STACK_VAR(module,"module");
			HX_STACK_LINE(205)
			++(_g);
			HX_STACK_LINE(207)
			module->onGamepadButtonUp(gamepad,button);
		}
	}
return null();
}


Void Application_obj::onGamepadConnect( ::lime::ui::Gamepad gamepad){
{
		HX_STACK_FRAME("lime.app.Application","onGamepadConnect",0xf3ecc32c,"lime.app.Application.onGamepadConnect","lime/app/Application.hx",216,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(gamepad,"gamepad")
		HX_STACK_LINE(216)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(216)
		Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(216)
		while((true)){
			HX_STACK_LINE(216)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(216)
				break;
			}
			HX_STACK_LINE(216)
			::lime::app::IModule module = _g1->__get(_g);		HX_STACK_VAR(module,"module");
			HX_STACK_LINE(216)
			++(_g);
			HX_STACK_LINE(218)
			module->onGamepadConnect(gamepad);
		}
	}
return null();
}


Void Application_obj::onGamepadDisconnect( ::lime::ui::Gamepad gamepad){
{
		HX_STACK_FRAME("lime.app.Application","onGamepadDisconnect",0xbdc6525a,"lime.app.Application.onGamepadDisconnect","lime/app/Application.hx",227,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(gamepad,"gamepad")
		HX_STACK_LINE(227)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(227)
		Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(227)
		while((true)){
			HX_STACK_LINE(227)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(227)
				break;
			}
			HX_STACK_LINE(227)
			::lime::app::IModule module = _g1->__get(_g);		HX_STACK_VAR(module,"module");
			HX_STACK_LINE(227)
			++(_g);
			HX_STACK_LINE(229)
			module->onGamepadDisconnect(gamepad);
		}
	}
return null();
}


Void Application_obj::onKeyDown( int keyCode,int modifier){
{
		HX_STACK_FRAME("lime.app.Application","onKeyDown",0x622d115e,"lime.app.Application.onKeyDown","lime/app/Application.hx",238,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(keyCode,"keyCode")
		HX_STACK_ARG(modifier,"modifier")
		HX_STACK_LINE(238)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(238)
		Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(238)
		while((true)){
			HX_STACK_LINE(238)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(238)
				break;
			}
			HX_STACK_LINE(238)
			::lime::app::IModule module = _g1->__get(_g);		HX_STACK_VAR(module,"module");
			HX_STACK_LINE(238)
			++(_g);
			HX_STACK_LINE(240)
			module->onKeyDown(keyCode,modifier);
		}
	}
return null();
}


Void Application_obj::onKeyUp( int keyCode,int modifier){
{
		HX_STACK_FRAME("lime.app.Application","onKeyUp",0x55960857,"lime.app.Application.onKeyUp","lime/app/Application.hx",249,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(keyCode,"keyCode")
		HX_STACK_ARG(modifier,"modifier")
		HX_STACK_LINE(249)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(249)
		Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(249)
		while((true)){
			HX_STACK_LINE(249)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(249)
				break;
			}
			HX_STACK_LINE(249)
			::lime::app::IModule module = _g1->__get(_g);		HX_STACK_VAR(module,"module");
			HX_STACK_LINE(249)
			++(_g);
			HX_STACK_LINE(251)
			module->onKeyUp(keyCode,modifier);
		}
	}
return null();
}


Void Application_obj::onMouseDown( Float x,Float y,int button){
{
		HX_STACK_FRAME("lime.app.Application","onMouseDown",0x372f8224,"lime.app.Application.onMouseDown","lime/app/Application.hx",260,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(button,"button")
		HX_STACK_LINE(260)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(260)
		Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(260)
		while((true)){
			HX_STACK_LINE(260)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(260)
				break;
			}
			HX_STACK_LINE(260)
			::lime::app::IModule module = _g1->__get(_g);		HX_STACK_VAR(module,"module");
			HX_STACK_LINE(260)
			++(_g);
			HX_STACK_LINE(262)
			module->onMouseDown(x,y,button);
		}
	}
return null();
}


Void Application_obj::onMouseMove( Float x,Float y){
{
		HX_STACK_FRAME("lime.app.Application","onMouseMove",0x3d226cd3,"lime.app.Application.onMouseMove","lime/app/Application.hx",271,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(271)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(271)
		Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(271)
		while((true)){
			HX_STACK_LINE(271)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(271)
				break;
			}
			HX_STACK_LINE(271)
			::lime::app::IModule module = _g1->__get(_g);		HX_STACK_VAR(module,"module");
			HX_STACK_LINE(271)
			++(_g);
			HX_STACK_LINE(273)
			module->onMouseMove(x,y);
		}
	}
return null();
}


Void Application_obj::onMouseMoveRelative( Float x,Float y){
{
		HX_STACK_FRAME("lime.app.Application","onMouseMoveRelative",0xf3ee70bf,"lime.app.Application.onMouseMoveRelative","lime/app/Application.hx",282,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(282)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(282)
		Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(282)
		while((true)){
			HX_STACK_LINE(282)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(282)
				break;
			}
			HX_STACK_LINE(282)
			::lime::app::IModule module = _g1->__get(_g);		HX_STACK_VAR(module,"module");
			HX_STACK_LINE(282)
			++(_g);
			HX_STACK_LINE(284)
			module->onMouseMoveRelative(x,y);
		}
	}
return null();
}


Void Application_obj::onMouseUp( Float x,Float y,int button){
{
		HX_STACK_FRAME("lime.app.Application","onMouseUp",0x86589b9d,"lime.app.Application.onMouseUp","lime/app/Application.hx",293,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(button,"button")
		HX_STACK_LINE(293)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(293)
		Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(293)
		while((true)){
			HX_STACK_LINE(293)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(293)
				break;
			}
			HX_STACK_LINE(293)
			::lime::app::IModule module = _g1->__get(_g);		HX_STACK_VAR(module,"module");
			HX_STACK_LINE(293)
			++(_g);
			HX_STACK_LINE(295)
			module->onMouseUp(x,y,button);
		}
	}
return null();
}


Void Application_obj::onMouseWheel( Float deltaX,Float deltaY){
{
		HX_STACK_FRAME("lime.app.Application","onMouseWheel",0xfe513499,"lime.app.Application.onMouseWheel","lime/app/Application.hx",304,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(deltaX,"deltaX")
		HX_STACK_ARG(deltaY,"deltaY")
		HX_STACK_LINE(304)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(304)
		Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(304)
		while((true)){
			HX_STACK_LINE(304)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(304)
				break;
			}
			HX_STACK_LINE(304)
			::lime::app::IModule module = _g1->__get(_g);		HX_STACK_VAR(module,"module");
			HX_STACK_LINE(304)
			++(_g);
			HX_STACK_LINE(306)
			module->onMouseWheel(deltaX,deltaY);
		}
	}
return null();
}


Void Application_obj::onRenderContextLost( ){
{
		HX_STACK_FRAME("lime.app.Application","onRenderContextLost",0xfdd705ba,"lime.app.Application.onRenderContextLost","lime/app/Application.hx",315,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_LINE(315)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(315)
		Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(315)
		while((true)){
			HX_STACK_LINE(315)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(315)
				break;
			}
			HX_STACK_LINE(315)
			::lime::app::IModule module = _g1->__get(_g);		HX_STACK_VAR(module,"module");
			HX_STACK_LINE(315)
			++(_g);
			HX_STACK_LINE(317)
			module->onRenderContextLost();
		}
	}
return null();
}


Void Application_obj::onRenderContextRestored( ::lime::graphics::RenderContext context){
{
		HX_STACK_FRAME("lime.app.Application","onRenderContextRestored",0x4fd2fc2c,"lime.app.Application.onRenderContextRestored","lime/app/Application.hx",326,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(context,"context")
		HX_STACK_LINE(326)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(326)
		Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(326)
		while((true)){
			HX_STACK_LINE(326)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(326)
				break;
			}
			HX_STACK_LINE(326)
			::lime::app::IModule module = _g1->__get(_g);		HX_STACK_VAR(module,"module");
			HX_STACK_LINE(326)
			++(_g);
			HX_STACK_LINE(328)
			module->onRenderContextRestored(context);
		}
	}
return null();
}


Void Application_obj::onTextEdit( ::String text,int start,int length){
{
		HX_STACK_FRAME("lime.app.Application","onTextEdit",0xa9173afa,"lime.app.Application.onTextEdit","lime/app/Application.hx",337,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(text,"text")
		HX_STACK_ARG(start,"start")
		HX_STACK_ARG(length,"length")
		HX_STACK_LINE(337)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(337)
		Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(337)
		while((true)){
			HX_STACK_LINE(337)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(337)
				break;
			}
			HX_STACK_LINE(337)
			::lime::app::IModule module = _g1->__get(_g);		HX_STACK_VAR(module,"module");
			HX_STACK_LINE(337)
			++(_g);
			HX_STACK_LINE(339)
			module->onTextEdit(text,start,length);
		}
	}
return null();
}


Void Application_obj::onTextInput( ::String text){
{
		HX_STACK_FRAME("lime.app.Application","onTextInput",0x9f78251a,"lime.app.Application.onTextInput","lime/app/Application.hx",348,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(text,"text")
		HX_STACK_LINE(348)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(348)
		Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(348)
		while((true)){
			HX_STACK_LINE(348)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(348)
				break;
			}
			HX_STACK_LINE(348)
			::lime::app::IModule module = _g1->__get(_g);		HX_STACK_VAR(module,"module");
			HX_STACK_LINE(348)
			++(_g);
			HX_STACK_LINE(350)
			module->onTextInput(text);
		}
	}
return null();
}


Void Application_obj::onTouchEnd( Float x,Float y,int id){
{
		HX_STACK_FRAME("lime.app.Application","onTouchEnd",0x6316e2ff,"lime.app.Application.onTouchEnd","lime/app/Application.hx",359,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(id,"id")
		HX_STACK_LINE(359)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(359)
		Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(359)
		while((true)){
			HX_STACK_LINE(359)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(359)
				break;
			}
			HX_STACK_LINE(359)
			::lime::app::IModule module = _g1->__get(_g);		HX_STACK_VAR(module,"module");
			HX_STACK_LINE(359)
			++(_g);
			HX_STACK_LINE(361)
			module->onTouchEnd(x,y,id);
		}
	}
return null();
}


Void Application_obj::onTouchMove( Float x,Float y,int id){
{
		HX_STACK_FRAME("lime.app.Application","onTouchMove",0x563a436d,"lime.app.Application.onTouchMove","lime/app/Application.hx",370,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(id,"id")
		HX_STACK_LINE(370)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(370)
		Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(370)
		while((true)){
			HX_STACK_LINE(370)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(370)
				break;
			}
			HX_STACK_LINE(370)
			::lime::app::IModule module = _g1->__get(_g);		HX_STACK_VAR(module,"module");
			HX_STACK_LINE(370)
			++(_g);
			HX_STACK_LINE(372)
			module->onTouchMove(x,y,id);
		}
	}
return null();
}


Void Application_obj::onTouchStart( Float x,Float y,int id){
{
		HX_STACK_FRAME("lime.app.Application","onTouchStart",0x94666486,"lime.app.Application.onTouchStart","lime/app/Application.hx",381,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(id,"id")
		HX_STACK_LINE(381)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(381)
		Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(381)
		while((true)){
			HX_STACK_LINE(381)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(381)
				break;
			}
			HX_STACK_LINE(381)
			::lime::app::IModule module = _g1->__get(_g);		HX_STACK_VAR(module,"module");
			HX_STACK_LINE(381)
			++(_g);
			HX_STACK_LINE(383)
			module->onTouchStart(x,y,id);
		}
	}
return null();
}


Void Application_obj::onWindowActivate( ){
{
		HX_STACK_FRAME("lime.app.Application","onWindowActivate",0xf2f355a6,"lime.app.Application.onWindowActivate","lime/app/Application.hx",392,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_LINE(392)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(392)
		Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(392)
		while((true)){
			HX_STACK_LINE(392)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(392)
				break;
			}
			HX_STACK_LINE(392)
			::lime::app::IModule module = _g1->__get(_g);		HX_STACK_VAR(module,"module");
			HX_STACK_LINE(392)
			++(_g);
			HX_STACK_LINE(394)
			module->onWindowActivate();
		}
	}
return null();
}


Void Application_obj::onWindowClose( ){
{
		HX_STACK_FRAME("lime.app.Application","onWindowClose",0x133677e5,"lime.app.Application.onWindowClose","lime/app/Application.hx",403,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_LINE(403)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(403)
		Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(403)
		while((true)){
			HX_STACK_LINE(403)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(403)
				break;
			}
			HX_STACK_LINE(403)
			::lime::app::IModule module = _g1->__get(_g);		HX_STACK_VAR(module,"module");
			HX_STACK_LINE(403)
			++(_g);
			HX_STACK_LINE(405)
			module->onWindowClose();
		}
	}
return null();
}


Void Application_obj::onWindowDeactivate( ){
{
		HX_STACK_FRAME("lime.app.Application","onWindowDeactivate",0x950138e7,"lime.app.Application.onWindowDeactivate","lime/app/Application.hx",414,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_LINE(414)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(414)
		Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(414)
		while((true)){
			HX_STACK_LINE(414)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(414)
				break;
			}
			HX_STACK_LINE(414)
			::lime::app::IModule module = _g1->__get(_g);		HX_STACK_VAR(module,"module");
			HX_STACK_LINE(414)
			++(_g);
			HX_STACK_LINE(416)
			module->onWindowDeactivate();
		}
	}
return null();
}


Void Application_obj::onWindowEnter( ){
{
		HX_STACK_FRAME("lime.app.Application","onWindowEnter",0x3b59cd45,"lime.app.Application.onWindowEnter","lime/app/Application.hx",425,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_LINE(425)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(425)
		Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(425)
		while((true)){
			HX_STACK_LINE(425)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(425)
				break;
			}
			HX_STACK_LINE(425)
			::lime::app::IModule module = _g1->__get(_g);		HX_STACK_VAR(module,"module");
			HX_STACK_LINE(425)
			++(_g);
			HX_STACK_LINE(427)
			module->onWindowEnter();
		}
	}
return null();
}


Void Application_obj::onWindowFocusIn( ){
{
		HX_STACK_FRAME("lime.app.Application","onWindowFocusIn",0xf010cb4a,"lime.app.Application.onWindowFocusIn","lime/app/Application.hx",436,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_LINE(436)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(436)
		Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(436)
		while((true)){
			HX_STACK_LINE(436)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(436)
				break;
			}
			HX_STACK_LINE(436)
			::lime::app::IModule module = _g1->__get(_g);		HX_STACK_VAR(module,"module");
			HX_STACK_LINE(436)
			++(_g);
			HX_STACK_LINE(438)
			module->onWindowFocusIn();
		}
	}
return null();
}


Void Application_obj::onWindowFocusOut( ){
{
		HX_STACK_FRAME("lime.app.Application","onWindowFocusOut",0x1ea5a989,"lime.app.Application.onWindowFocusOut","lime/app/Application.hx",447,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_LINE(447)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(447)
		Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(447)
		while((true)){
			HX_STACK_LINE(447)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(447)
				break;
			}
			HX_STACK_LINE(447)
			::lime::app::IModule module = _g1->__get(_g);		HX_STACK_VAR(module,"module");
			HX_STACK_LINE(447)
			++(_g);
			HX_STACK_LINE(449)
			module->onWindowFocusOut();
		}
	}
return null();
}


Void Application_obj::onWindowFullscreen( ){
{
		HX_STACK_FRAME("lime.app.Application","onWindowFullscreen",0x52b416ee,"lime.app.Application.onWindowFullscreen","lime/app/Application.hx",458,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_LINE(458)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(458)
		Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(458)
		while((true)){
			HX_STACK_LINE(458)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(458)
				break;
			}
			HX_STACK_LINE(458)
			::lime::app::IModule module = _g1->__get(_g);		HX_STACK_VAR(module,"module");
			HX_STACK_LINE(458)
			++(_g);
			HX_STACK_LINE(460)
			module->onWindowFullscreen();
		}
	}
return null();
}


Void Application_obj::onWindowLeave( ){
{
		HX_STACK_FRAME("lime.app.Application","onWindowLeave",0x3d269524,"lime.app.Application.onWindowLeave","lime/app/Application.hx",469,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_LINE(469)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(469)
		Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(469)
		while((true)){
			HX_STACK_LINE(469)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(469)
				break;
			}
			HX_STACK_LINE(469)
			::lime::app::IModule module = _g1->__get(_g);		HX_STACK_VAR(module,"module");
			HX_STACK_LINE(469)
			++(_g);
			HX_STACK_LINE(471)
			module->onWindowLeave();
		}
	}
return null();
}


Void Application_obj::onWindowMinimize( ){
{
		HX_STACK_FRAME("lime.app.Application","onWindowMinimize",0x2ec07911,"lime.app.Application.onWindowMinimize","lime/app/Application.hx",480,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_LINE(480)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(480)
		Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(480)
		while((true)){
			HX_STACK_LINE(480)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(480)
				break;
			}
			HX_STACK_LINE(480)
			::lime::app::IModule module = _g1->__get(_g);		HX_STACK_VAR(module,"module");
			HX_STACK_LINE(480)
			++(_g);
			HX_STACK_LINE(482)
			module->onWindowMinimize();
		}
	}
return null();
}


Void Application_obj::onWindowMove( Float x,Float y){
{
		HX_STACK_FRAME("lime.app.Application","onWindowMove",0xea016784,"lime.app.Application.onWindowMove","lime/app/Application.hx",491,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(491)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(491)
		Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(491)
		while((true)){
			HX_STACK_LINE(491)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(491)
				break;
			}
			HX_STACK_LINE(491)
			::lime::app::IModule module = _g1->__get(_g);		HX_STACK_VAR(module,"module");
			HX_STACK_LINE(491)
			++(_g);
			HX_STACK_LINE(493)
			module->onWindowMove(x,y);
		}
	}
return null();
}


Void Application_obj::onWindowResize( int width,int height){
{
		HX_STACK_FRAME("lime.app.Application","onWindowResize",0xb69c2127,"lime.app.Application.onWindowResize","lime/app/Application.hx",502,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_LINE(502)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(502)
		Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(502)
		while((true)){
			HX_STACK_LINE(502)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(502)
				break;
			}
			HX_STACK_LINE(502)
			::lime::app::IModule module = _g1->__get(_g);		HX_STACK_VAR(module,"module");
			HX_STACK_LINE(502)
			++(_g);
			HX_STACK_LINE(504)
			module->onWindowResize(width,height);
		}
	}
return null();
}


Void Application_obj::onWindowRestore( ){
{
		HX_STACK_FRAME("lime.app.Application","onWindowRestore",0x193decbb,"lime.app.Application.onWindowRestore","lime/app/Application.hx",513,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_LINE(513)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(513)
		Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(513)
		while((true)){
			HX_STACK_LINE(513)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(513)
				break;
			}
			HX_STACK_LINE(513)
			::lime::app::IModule module = _g1->__get(_g);		HX_STACK_VAR(module,"module");
			HX_STACK_LINE(513)
			++(_g);
			HX_STACK_LINE(515)
			module->onWindowRestore();
		}
	}
return null();
}


Void Application_obj::removeModule( ::lime::app::IModule module){
{
		HX_STACK_FRAME("lime.app.Application","removeModule",0x6e873a74,"lime.app.Application.removeModule","lime/app/Application.hx",528,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(module,"module")
		HX_STACK_LINE(528)
		this->modules->remove(module);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Application_obj,removeModule,(void))

Void Application_obj::removeRenderer( ::lime::graphics::Renderer renderer){
{
		HX_STACK_FRAME("lime.app.Application","removeRenderer",0x39f2cd0b,"lime.app.Application.removeRenderer","lime/app/Application.hx",539,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderer,"renderer")
		struct _Function_1_1{
			inline static bool Block( hx::ObjectPtr< ::lime::app::Application_obj > __this,::lime::graphics::Renderer &renderer){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","lime/app/Application.hx",539,0x8bc55476)
				{
					HX_STACK_LINE(539)
					int _g = __this->renderers->indexOf(renderer,null());		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(539)
					return (_g > (int)-1);
				}
				return null();
			}
		};
		HX_STACK_LINE(539)
		if (((  (((renderer != null()))) ? bool(_Function_1_1::Block(this,renderer)) : bool(false) ))){
			HX_STACK_LINE(541)
			this->renderers->remove(renderer);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Application_obj,removeRenderer,(void))

Void Application_obj::removeWindow( ::lime::ui::Window window){
{
		HX_STACK_FRAME("lime.app.Application","removeWindow",0x004099b8,"lime.app.Application.removeWindow","lime/app/Application.hx",554,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
		struct _Function_1_1{
			inline static bool Block( hx::ObjectPtr< ::lime::app::Application_obj > __this,::lime::ui::Window &window){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","lime/app/Application.hx",554,0x8bc55476)
				{
					HX_STACK_LINE(554)
					int _g = __this->windows->indexOf(window,null());		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(554)
					return (_g > (int)-1);
				}
				return null();
			}
		};
		HX_STACK_LINE(554)
		if (((  (((window != null()))) ? bool(_Function_1_1::Block(this,window)) : bool(false) ))){
			HX_STACK_LINE(556)
			window->close();
			HX_STACK_LINE(557)
			this->windows->remove(window);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Application_obj,removeWindow,(void))

Void Application_obj::render( ::lime::graphics::RenderContext context){
{
		HX_STACK_FRAME("lime.app.Application","render",0xbefe32ba,"lime.app.Application.render","lime/app/Application.hx",566,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(context,"context")
		HX_STACK_LINE(566)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(566)
		Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(566)
		while((true)){
			HX_STACK_LINE(566)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(566)
				break;
			}
			HX_STACK_LINE(566)
			::lime::app::IModule module = _g1->__get(_g);		HX_STACK_VAR(module,"module");
			HX_STACK_LINE(566)
			++(_g);
			HX_STACK_LINE(568)
			module->render(context);
		}
	}
return null();
}


Void Application_obj::update( int deltaTime){
{
		HX_STACK_FRAME("lime.app.Application","update",0x40da4d6d,"lime.app.Application.update","lime/app/Application.hx",577,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(deltaTime,"deltaTime")
		HX_STACK_LINE(577)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(577)
		Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(577)
		while((true)){
			HX_STACK_LINE(577)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(577)
				break;
			}
			HX_STACK_LINE(577)
			::lime::app::IModule module = _g1->__get(_g);		HX_STACK_VAR(module,"module");
			HX_STACK_LINE(577)
			++(_g);
			HX_STACK_LINE(579)
			module->update(deltaTime);
		}
	}
return null();
}


Float Application_obj::get_frameRate( ){
	HX_STACK_FRAME("lime.app.Application","get_frameRate",0x719f92a0,"lime.app.Application.get_frameRate","lime/app/Application.hx",595,0x8bc55476)
	HX_STACK_THIS(this)
	HX_STACK_LINE(595)
	return this->backend->getFrameRate();
}


HX_DEFINE_DYNAMIC_FUNC0(Application_obj,get_frameRate,return )

Float Application_obj::set_frameRate( Float value){
	HX_STACK_FRAME("lime.app.Application","set_frameRate",0xb6a574ac,"lime.app.Application.set_frameRate","lime/app/Application.hx",602,0x8bc55476)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(602)
	return this->backend->setFrameRate(value);
}


HX_DEFINE_DYNAMIC_FUNC1(Application_obj,set_frameRate,return )

::lime::graphics::Renderer Application_obj::get_renderer( ){
	HX_STACK_FRAME("lime.app.Application","get_renderer",0xa67be3b0,"lime.app.Application.get_renderer","lime/app/Application.hx",609,0x8bc55476)
	HX_STACK_THIS(this)
	HX_STACK_LINE(609)
	return this->renderers->__get((int)0).StaticCast< ::lime::graphics::Renderer >();
}


HX_DEFINE_DYNAMIC_FUNC0(Application_obj,get_renderer,return )

::lime::ui::Window Application_obj::get_window( ){
	HX_STACK_FRAME("lime.app.Application","get_window",0xc86a4d1d,"lime.app.Application.get_window","lime/app/Application.hx",616,0x8bc55476)
	HX_STACK_THIS(this)
	HX_STACK_LINE(616)
	return this->windows->__get((int)0).StaticCast< ::lime::ui::Window >();
}


HX_DEFINE_DYNAMIC_FUNC0(Application_obj,get_window,return )

::lime::app::Application Application_obj::current;


Application_obj::Application_obj()
{
}

void Application_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Application);
	HX_MARK_MEMBER_NAME(config,"config");
	HX_MARK_MEMBER_NAME(modules,"modules");
	HX_MARK_MEMBER_NAME(onUpdate,"onUpdate");
	HX_MARK_MEMBER_NAME(renderer,"renderer");
	HX_MARK_MEMBER_NAME(renderers,"renderers");
	HX_MARK_MEMBER_NAME(window,"window");
	HX_MARK_MEMBER_NAME(windows,"windows");
	HX_MARK_MEMBER_NAME(backend,"backend");
	HX_MARK_MEMBER_NAME(initialized,"initialized");
	HX_MARK_END_CLASS();
}

void Application_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(config,"config");
	HX_VISIT_MEMBER_NAME(modules,"modules");
	HX_VISIT_MEMBER_NAME(onUpdate,"onUpdate");
	HX_VISIT_MEMBER_NAME(renderer,"renderer");
	HX_VISIT_MEMBER_NAME(renderers,"renderers");
	HX_VISIT_MEMBER_NAME(window,"window");
	HX_VISIT_MEMBER_NAME(windows,"windows");
	HX_VISIT_MEMBER_NAME(backend,"backend");
	HX_VISIT_MEMBER_NAME(initialized,"initialized");
}

Dynamic Application_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"exec") ) { return exec_dyn(); }
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"config") ) { return config; }
		if (HX_FIELD_EQ(inName,"window") ) { return inCallProp ? get_window() : window; }
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"current") ) { return current; }
		if (HX_FIELD_EQ(inName,"modules") ) { return modules; }
		if (HX_FIELD_EQ(inName,"windows") ) { return windows; }
		if (HX_FIELD_EQ(inName,"backend") ) { return backend; }
		if (HX_FIELD_EQ(inName,"onKeyUp") ) { return onKeyUp_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"onUpdate") ) { return onUpdate; }
		if (HX_FIELD_EQ(inName,"renderer") ) { return inCallProp ? get_renderer() : renderer; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"frameRate") ) { return get_frameRate(); }
		if (HX_FIELD_EQ(inName,"renderers") ) { return renderers; }
		if (HX_FIELD_EQ(inName,"addModule") ) { return addModule_dyn(); }
		if (HX_FIELD_EQ(inName,"addWindow") ) { return addWindow_dyn(); }
		if (HX_FIELD_EQ(inName,"onKeyDown") ) { return onKeyDown_dyn(); }
		if (HX_FIELD_EQ(inName,"onMouseUp") ) { return onMouseUp_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"onTextEdit") ) { return onTextEdit_dyn(); }
		if (HX_FIELD_EQ(inName,"onTouchEnd") ) { return onTouchEnd_dyn(); }
		if (HX_FIELD_EQ(inName,"get_window") ) { return get_window_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"initialized") ) { return initialized; }
		if (HX_FIELD_EQ(inName,"addRenderer") ) { return addRenderer_dyn(); }
		if (HX_FIELD_EQ(inName,"onMouseDown") ) { return onMouseDown_dyn(); }
		if (HX_FIELD_EQ(inName,"onMouseMove") ) { return onMouseMove_dyn(); }
		if (HX_FIELD_EQ(inName,"onTextInput") ) { return onTextInput_dyn(); }
		if (HX_FIELD_EQ(inName,"onTouchMove") ) { return onTouchMove_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"onMouseWheel") ) { return onMouseWheel_dyn(); }
		if (HX_FIELD_EQ(inName,"onTouchStart") ) { return onTouchStart_dyn(); }
		if (HX_FIELD_EQ(inName,"onWindowMove") ) { return onWindowMove_dyn(); }
		if (HX_FIELD_EQ(inName,"removeModule") ) { return removeModule_dyn(); }
		if (HX_FIELD_EQ(inName,"removeWindow") ) { return removeWindow_dyn(); }
		if (HX_FIELD_EQ(inName,"get_renderer") ) { return get_renderer_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"onWindowClose") ) { return onWindowClose_dyn(); }
		if (HX_FIELD_EQ(inName,"onWindowEnter") ) { return onWindowEnter_dyn(); }
		if (HX_FIELD_EQ(inName,"onWindowLeave") ) { return onWindowLeave_dyn(); }
		if (HX_FIELD_EQ(inName,"get_frameRate") ) { return get_frameRate_dyn(); }
		if (HX_FIELD_EQ(inName,"set_frameRate") ) { return set_frameRate_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"onWindowResize") ) { return onWindowResize_dyn(); }
		if (HX_FIELD_EQ(inName,"removeRenderer") ) { return removeRenderer_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"onWindowFocusIn") ) { return onWindowFocusIn_dyn(); }
		if (HX_FIELD_EQ(inName,"onWindowRestore") ) { return onWindowRestore_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"onGamepadConnect") ) { return onGamepadConnect_dyn(); }
		if (HX_FIELD_EQ(inName,"onWindowActivate") ) { return onWindowActivate_dyn(); }
		if (HX_FIELD_EQ(inName,"onWindowFocusOut") ) { return onWindowFocusOut_dyn(); }
		if (HX_FIELD_EQ(inName,"onWindowMinimize") ) { return onWindowMinimize_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"onGamepadAxisMove") ) { return onGamepadAxisMove_dyn(); }
		if (HX_FIELD_EQ(inName,"onGamepadButtonUp") ) { return onGamepadButtonUp_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"onWindowDeactivate") ) { return onWindowDeactivate_dyn(); }
		if (HX_FIELD_EQ(inName,"onWindowFullscreen") ) { return onWindowFullscreen_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"onGamepadButtonDown") ) { return onGamepadButtonDown_dyn(); }
		if (HX_FIELD_EQ(inName,"onGamepadDisconnect") ) { return onGamepadDisconnect_dyn(); }
		if (HX_FIELD_EQ(inName,"onMouseMoveRelative") ) { return onMouseMoveRelative_dyn(); }
		if (HX_FIELD_EQ(inName,"onRenderContextLost") ) { return onRenderContextLost_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"onRenderContextRestored") ) { return onRenderContextRestored_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Application_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"config") ) { config=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"window") ) { window=inValue.Cast< ::lime::ui::Window >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"current") ) { current=inValue.Cast< ::lime::app::Application >(); return inValue; }
		if (HX_FIELD_EQ(inName,"modules") ) { modules=inValue.Cast< Array< ::lime::app::IModule > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"windows") ) { windows=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"backend") ) { backend=inValue.Cast< ::lime::_backend::native::NativeApplication >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"onUpdate") ) { onUpdate=inValue.Cast< ::lime::app::Event >(); return inValue; }
		if (HX_FIELD_EQ(inName,"renderer") ) { renderer=inValue.Cast< ::lime::graphics::Renderer >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"frameRate") ) { return set_frameRate(inValue); }
		if (HX_FIELD_EQ(inName,"renderers") ) { renderers=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"initialized") ) { initialized=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Application_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("config"));
	outFields->push(HX_CSTRING("frameRate"));
	outFields->push(HX_CSTRING("modules"));
	outFields->push(HX_CSTRING("onUpdate"));
	outFields->push(HX_CSTRING("renderer"));
	outFields->push(HX_CSTRING("renderers"));
	outFields->push(HX_CSTRING("window"));
	outFields->push(HX_CSTRING("windows"));
	outFields->push(HX_CSTRING("backend"));
	outFields->push(HX_CSTRING("initialized"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("current"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Application_obj,config),HX_CSTRING("config")},
	{hx::fsObject /*Array< ::lime::app::IModule >*/ ,(int)offsetof(Application_obj,modules),HX_CSTRING("modules")},
	{hx::fsObject /*::lime::app::Event*/ ,(int)offsetof(Application_obj,onUpdate),HX_CSTRING("onUpdate")},
	{hx::fsObject /*::lime::graphics::Renderer*/ ,(int)offsetof(Application_obj,renderer),HX_CSTRING("renderer")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Application_obj,renderers),HX_CSTRING("renderers")},
	{hx::fsObject /*::lime::ui::Window*/ ,(int)offsetof(Application_obj,window),HX_CSTRING("window")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Application_obj,windows),HX_CSTRING("windows")},
	{hx::fsObject /*::lime::_backend::native::NativeApplication*/ ,(int)offsetof(Application_obj,backend),HX_CSTRING("backend")},
	{hx::fsBool,(int)offsetof(Application_obj,initialized),HX_CSTRING("initialized")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("config"),
	HX_CSTRING("modules"),
	HX_CSTRING("onUpdate"),
	HX_CSTRING("renderer"),
	HX_CSTRING("renderers"),
	HX_CSTRING("window"),
	HX_CSTRING("windows"),
	HX_CSTRING("backend"),
	HX_CSTRING("initialized"),
	HX_CSTRING("addModule"),
	HX_CSTRING("addRenderer"),
	HX_CSTRING("addWindow"),
	HX_CSTRING("create"),
	HX_CSTRING("exec"),
	HX_CSTRING("init"),
	HX_CSTRING("onGamepadAxisMove"),
	HX_CSTRING("onGamepadButtonDown"),
	HX_CSTRING("onGamepadButtonUp"),
	HX_CSTRING("onGamepadConnect"),
	HX_CSTRING("onGamepadDisconnect"),
	HX_CSTRING("onKeyDown"),
	HX_CSTRING("onKeyUp"),
	HX_CSTRING("onMouseDown"),
	HX_CSTRING("onMouseMove"),
	HX_CSTRING("onMouseMoveRelative"),
	HX_CSTRING("onMouseUp"),
	HX_CSTRING("onMouseWheel"),
	HX_CSTRING("onRenderContextLost"),
	HX_CSTRING("onRenderContextRestored"),
	HX_CSTRING("onTextEdit"),
	HX_CSTRING("onTextInput"),
	HX_CSTRING("onTouchEnd"),
	HX_CSTRING("onTouchMove"),
	HX_CSTRING("onTouchStart"),
	HX_CSTRING("onWindowActivate"),
	HX_CSTRING("onWindowClose"),
	HX_CSTRING("onWindowDeactivate"),
	HX_CSTRING("onWindowEnter"),
	HX_CSTRING("onWindowFocusIn"),
	HX_CSTRING("onWindowFocusOut"),
	HX_CSTRING("onWindowFullscreen"),
	HX_CSTRING("onWindowLeave"),
	HX_CSTRING("onWindowMinimize"),
	HX_CSTRING("onWindowMove"),
	HX_CSTRING("onWindowResize"),
	HX_CSTRING("onWindowRestore"),
	HX_CSTRING("removeModule"),
	HX_CSTRING("removeRenderer"),
	HX_CSTRING("removeWindow"),
	HX_CSTRING("render"),
	HX_CSTRING("update"),
	HX_CSTRING("get_frameRate"),
	HX_CSTRING("set_frameRate"),
	HX_CSTRING("get_renderer"),
	HX_CSTRING("get_window"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Application_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Application_obj::current,"current");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Application_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Application_obj::current,"current");
};

#endif

Class Application_obj::__mClass;

void Application_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("lime.app.Application"), hx::TCanCast< Application_obj> ,sStaticFields,sMemberFields,
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

void Application_obj::__boot()
{
}

} // end namespace lime
} // end namespace app
