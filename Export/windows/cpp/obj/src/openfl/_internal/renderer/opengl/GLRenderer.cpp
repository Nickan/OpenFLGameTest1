#include <hxcpp.h>

#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_graphics_GLRenderContext
#include <lime/graphics/GLRenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GL
#include <lime/graphics/opengl/GL.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLFramebuffer
#include <lime/graphics/opengl/GLFramebuffer.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLObject
#include <lime/graphics/opengl/GLObject.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_AbstractMaskManager
#include <openfl/_internal/renderer/AbstractMaskManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_AbstractRenderer
#include <openfl/_internal/renderer/AbstractRenderer.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_RenderSession
#include <openfl/_internal/renderer/RenderSession.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_GLRenderer
#include <openfl/_internal/renderer/opengl/GLRenderer.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_shaders2_DefaultShader
#include <openfl/_internal/renderer/opengl/shaders2/DefaultShader.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_shaders2_Shader
#include <openfl/_internal/renderer/opengl/shaders2/Shader.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_BlendModeManager
#include <openfl/_internal/renderer/opengl/utils/BlendModeManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_FilterManager
#include <openfl/_internal/renderer/opengl/utils/FilterManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_GLMaskManager
#include <openfl/_internal/renderer/opengl/utils/GLMaskManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_ShaderManager
#include <openfl/_internal/renderer/opengl/utils/ShaderManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_SpriteBatch
#include <openfl/_internal/renderer/opengl/utils/SpriteBatch.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_StencilManager
#include <openfl/_internal/renderer/opengl/utils/StencilManager.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_BlendMode
#include <openfl/display/BlendMode.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_Graphics
#include <openfl/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_PixelSnapping
#include <openfl/display/PixelSnapping.h>
#endif
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_ColorTransform
#include <openfl/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
namespace openfl{
namespace _internal{
namespace renderer{
namespace opengl{

Void GLRenderer_obj::__construct(hx::Null< int >  __o_width,hx::Null< int >  __o_height,::lime::graphics::GLRenderContext gl,hx::Null< bool >  __o_transparent,hx::Null< bool >  __o_antialias,hx::Null< bool >  __o_preserveDrawingBuffer)
{
HX_STACK_FRAME("openfl._internal.renderer.opengl.GLRenderer","new",0xb6a82d5e,"openfl._internal.renderer.opengl.GLRenderer.new","openfl/_internal/renderer/opengl/GLRenderer.hx",40,0xb2b97130)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_width,"width")
HX_STACK_ARG(__o_height,"height")
HX_STACK_ARG(gl,"gl")
HX_STACK_ARG(__o_transparent,"transparent")
HX_STACK_ARG(__o_antialias,"antialias")
HX_STACK_ARG(__o_preserveDrawingBuffer,"preserveDrawingBuffer")
int width = __o_width.Default(800);
int height = __o_height.Default(600);
bool transparent = __o_transparent.Default(false);
bool antialias = __o_antialias.Default(false);
bool preserveDrawingBuffer = __o_preserveDrawingBuffer.Default(false);
{
	HX_STACK_LINE(68)
	this->vpHeight = (int)0;
	HX_STACK_LINE(67)
	this->vpWidth = (int)0;
	HX_STACK_LINE(66)
	this->vpY = (int)0;
	HX_STACK_LINE(65)
	this->vpX = (int)0;
	HX_STACK_LINE(73)
	super::__construct(width,height);
	HX_STACK_LINE(75)
	this->transparent = transparent;
	HX_STACK_LINE(76)
	this->preserveDrawingBuffer = preserveDrawingBuffer;
	HX_STACK_LINE(77)
	this->width = width;
	HX_STACK_LINE(78)
	this->height = height;
	struct _Function_1_1{
		inline static Dynamic Block( bool &preserveDrawingBuffer,bool &antialias,bool &transparent){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_internal/renderer/opengl/GLRenderer.hx",80,0xb2b97130)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("alpha") , transparent,false);
				__result->Add(HX_CSTRING("antialias") , antialias,false);
				__result->Add(HX_CSTRING("premultipliedAlpha") , transparent,false);
				__result->Add(HX_CSTRING("stencil") , true,false);
				__result->Add(HX_CSTRING("preserveDrawingBuffer") , preserveDrawingBuffer,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(80)
	this->options = _Function_1_1::Block(preserveDrawingBuffer,antialias,transparent);
	HX_STACK_LINE(88)
	int _g = (::openfl::_internal::renderer::opengl::GLRenderer_obj::glContextId)++;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(88)
	this->_glContextId = _g;
	HX_STACK_LINE(89)
	this->gl = gl;
	HX_STACK_LINE(94)
	this->defaultFramebuffer = null();
	HX_STACK_LINE(97)
	::openfl::_internal::renderer::opengl::GLRenderer_obj::glContexts[this->_glContextId] = gl;
	HX_STACK_LINE(99)
	::openfl::geom::Matrix _g1 = ::openfl::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(99)
	this->projectionMatrix = _g1;
	HX_STACK_LINE(101)
	::openfl::geom::Point _g2 = ::openfl::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(101)
	this->projection = _g2;
	HX_STACK_LINE(102)
	this->projection->x = (Float(this->width) / Float((int)2));
	HX_STACK_LINE(103)
	this->projection->y = (Float(-(this->height)) / Float((int)2));
	HX_STACK_LINE(105)
	::openfl::geom::Point _g3 = ::openfl::geom::Point_obj::__new((int)0,(int)0);		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(105)
	this->offset = _g3;
	HX_STACK_LINE(107)
	this->resize(this->width,this->height);
	HX_STACK_LINE(108)
	this->contextLost = false;
	HX_STACK_LINE(110)
	::openfl::_internal::renderer::opengl::utils::ShaderManager _g4 = ::openfl::_internal::renderer::opengl::utils::ShaderManager_obj::__new(gl);		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(110)
	this->shaderManager = _g4;
	HX_STACK_LINE(111)
	::openfl::_internal::renderer::opengl::utils::SpriteBatch _g5 = ::openfl::_internal::renderer::opengl::utils::SpriteBatch_obj::__new(gl,null());		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(111)
	this->spriteBatch = _g5;
	HX_STACK_LINE(112)
	::openfl::_internal::renderer::opengl::utils::FilterManager _g6 = ::openfl::_internal::renderer::opengl::utils::FilterManager_obj::__new(gl,this->transparent);		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(112)
	this->filterManager = _g6;
	HX_STACK_LINE(113)
	::openfl::_internal::renderer::opengl::utils::StencilManager _g7 = ::openfl::_internal::renderer::opengl::utils::StencilManager_obj::__new(gl);		HX_STACK_VAR(_g7,"_g7");
	HX_STACK_LINE(113)
	this->stencilManager = _g7;
	HX_STACK_LINE(114)
	::openfl::_internal::renderer::opengl::utils::BlendModeManager _g8 = ::openfl::_internal::renderer::opengl::utils::BlendModeManager_obj::__new(gl);		HX_STACK_VAR(_g8,"_g8");
	HX_STACK_LINE(114)
	this->blendModeManager = _g8;
	HX_STACK_LINE(116)
	::openfl::_internal::renderer::RenderSession _g9 = ::openfl::_internal::renderer::RenderSession_obj::__new();		HX_STACK_VAR(_g9,"_g9");
	HX_STACK_LINE(116)
	this->renderSession = _g9;
	HX_STACK_LINE(117)
	this->renderSession->gl = this->gl;
	HX_STACK_LINE(118)
	this->renderSession->drawCount = (int)0;
	HX_STACK_LINE(119)
	this->renderSession->shaderManager = this->shaderManager;
	HX_STACK_LINE(120)
	this->renderSession->maskManager = this->maskManager;
	HX_STACK_LINE(121)
	this->renderSession->filterManager = this->filterManager;
	HX_STACK_LINE(122)
	this->renderSession->blendModeManager = this->blendModeManager;
	HX_STACK_LINE(123)
	this->renderSession->spriteBatch = this->spriteBatch;
	HX_STACK_LINE(124)
	this->renderSession->stencilManager = this->stencilManager;
	HX_STACK_LINE(125)
	this->renderSession->renderer = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(126)
	this->renderSession->defaultFramebuffer = this->defaultFramebuffer;
	HX_STACK_LINE(127)
	this->renderSession->projectionMatrix = this->projectionMatrix;
	HX_STACK_LINE(129)
	::openfl::_internal::renderer::opengl::utils::GLMaskManager _g10 = ::openfl::_internal::renderer::opengl::utils::GLMaskManager_obj::__new(this->renderSession);		HX_STACK_VAR(_g10,"_g10");
	HX_STACK_LINE(129)
	this->maskManager = _g10;
	HX_STACK_LINE(130)
	this->renderSession->maskManager = this->maskManager;
	HX_STACK_LINE(132)
	this->shaderManager->setShader(this->shaderManager->defaultShader,null());
	HX_STACK_LINE(134)
	::lime::graphics::opengl::GL_obj::lime_gl_disable(gl->DEPTH_TEST);
	HX_STACK_LINE(135)
	::lime::graphics::opengl::GL_obj::lime_gl_disable(gl->CULL_FACE);
	HX_STACK_LINE(137)
	::lime::graphics::opengl::GL_obj::lime_gl_enable(gl->BLEND);
	HX_STACK_LINE(138)
	::lime::graphics::opengl::GL_obj::lime_gl_color_mask(true,true,true,this->transparent);
}
;
	return null();
}

//GLRenderer_obj::~GLRenderer_obj() { }

Dynamic GLRenderer_obj::__CreateEmpty() { return  new GLRenderer_obj; }
hx::ObjectPtr< GLRenderer_obj > GLRenderer_obj::__new(hx::Null< int >  __o_width,hx::Null< int >  __o_height,::lime::graphics::GLRenderContext gl,hx::Null< bool >  __o_transparent,hx::Null< bool >  __o_antialias,hx::Null< bool >  __o_preserveDrawingBuffer)
{  hx::ObjectPtr< GLRenderer_obj > result = new GLRenderer_obj();
	result->__construct(__o_width,__o_height,gl,__o_transparent,__o_antialias,__o_preserveDrawingBuffer);
	return result;}

Dynamic GLRenderer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GLRenderer_obj > result = new GLRenderer_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return result;}

Void GLRenderer_obj::destroy( ){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.GLRenderer","destroy",0xb1ffe0f8,"openfl._internal.renderer.opengl.GLRenderer.destroy","openfl/_internal/renderer/opengl/GLRenderer.hx",143,0xb2b97130)
		HX_STACK_THIS(this)
		HX_STACK_LINE(148)
		::openfl::_internal::renderer::opengl::GLRenderer_obj::glContexts[this->_glContextId] = null();
		HX_STACK_LINE(150)
		this->projection = null();
		HX_STACK_LINE(151)
		this->offset = null();
		HX_STACK_LINE(153)
		this->shaderManager->destroy();
		HX_STACK_LINE(154)
		this->spriteBatch->destroy();
		HX_STACK_LINE(155)
		this->maskManager->destroy();
		HX_STACK_LINE(156)
		this->filterManager->destroy();
		HX_STACK_LINE(158)
		this->shaderManager = null();
		HX_STACK_LINE(159)
		this->spriteBatch = null();
		HX_STACK_LINE(160)
		this->maskManager = null();
		HX_STACK_LINE(161)
		this->filterManager = null();
		HX_STACK_LINE(163)
		this->gl = null();
		HX_STACK_LINE(165)
		this->renderSession = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(GLRenderer_obj,destroy,(void))

Void GLRenderer_obj::setViewport( int x,int y,int width,int height){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.GLRenderer","setViewport",0x049ca126,"openfl._internal.renderer.opengl.GLRenderer.setViewport","openfl/_internal/renderer/opengl/GLRenderer.hx",170,0xb2b97130)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_LINE(170)
		if ((!(((bool((bool((bool((this->vpX == x)) && bool((this->vpY == y)))) && bool((this->vpWidth == width)))) && bool((this->vpHeight == height))))))){
			HX_STACK_LINE(171)
			this->vpX = x;
			HX_STACK_LINE(172)
			this->vpY = y;
			HX_STACK_LINE(173)
			this->vpWidth = width;
			HX_STACK_LINE(174)
			this->vpHeight = height;
			HX_STACK_LINE(175)
			::lime::graphics::opengl::GL_obj::lime_gl_viewport(x,y,width,height);
			HX_STACK_LINE(176)
			this->setOrtho(x,y,width,height);
		}
	}
return null();
}


Void GLRenderer_obj::setOrtho( Float x,Float y,Float width,Float height){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.GLRenderer","setOrtho",0x80654a78,"openfl._internal.renderer.opengl.GLRenderer.setOrtho","openfl/_internal/renderer/opengl/GLRenderer.hx",180,0xb2b97130)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_LINE(181)
		::openfl::geom::Matrix o = this->projectionMatrix;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(182)
		o->identity();
		HX_STACK_LINE(183)
		o->a = ((Float((int)1) / Float(width)) * (int)2);
		HX_STACK_LINE(184)
		o->d = ((Float((int)-1) / Float(height)) * (int)2);
		HX_STACK_LINE(185)
		o->tx = ((int)-1 - (x * o->a));
		HX_STACK_LINE(186)
		o->ty = ((int)1 - (y * o->d));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(GLRenderer_obj,setOrtho,(void))

Void GLRenderer_obj::handleContextLost( Dynamic event){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.GLRenderer","handleContextLost",0x032f5229,"openfl._internal.renderer.opengl.GLRenderer.handleContextLost","openfl/_internal/renderer/opengl/GLRenderer.hx",213,0xb2b97130)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(215)
		event->__Field(HX_CSTRING("preventDefault"),true)();
		HX_STACK_LINE(216)
		this->contextLost = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GLRenderer_obj,handleContextLost,(void))

Void GLRenderer_obj::handleContextRestored( ){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.GLRenderer","handleContextRestored",0x3ebbac1b,"openfl._internal.renderer.opengl.GLRenderer.handleContextRestored","openfl/_internal/renderer/opengl/GLRenderer.hx",221,0xb2b97130)
		HX_STACK_THIS(this)
		HX_STACK_LINE(241)
		::lime::graphics::GLRenderContext gl = this->gl;		HX_STACK_VAR(gl,"gl");
		HX_STACK_LINE(242)
		(::openfl::_internal::renderer::opengl::GLRenderer_obj::glContextId)++;
		HX_STACK_LINE(244)
		this->shaderManager->setContext(gl);
		HX_STACK_LINE(245)
		this->spriteBatch->setContext(gl);
		HX_STACK_LINE(246)
		this->maskManager->setContext(gl);
		HX_STACK_LINE(247)
		this->filterManager->setContext(gl);
		HX_STACK_LINE(249)
		this->renderSession->gl = gl;
		HX_STACK_LINE(254)
		this->defaultFramebuffer = null();
		HX_STACK_LINE(257)
		::lime::graphics::opengl::GL_obj::lime_gl_disable(gl->DEPTH_TEST);
		HX_STACK_LINE(258)
		::lime::graphics::opengl::GL_obj::lime_gl_disable(gl->CULL_FACE);
		HX_STACK_LINE(260)
		::lime::graphics::opengl::GL_obj::lime_gl_enable(gl->BLEND);
		HX_STACK_LINE(261)
		::lime::graphics::opengl::GL_obj::lime_gl_color_mask(true,true,true,this->transparent);
		HX_STACK_LINE(263)
		this->setViewport((int)0,(int)0,this->width,this->height);
		HX_STACK_LINE(272)
		this->contextLost = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(GLRenderer_obj,handleContextRestored,(void))

Void GLRenderer_obj::render( ::openfl::display::Stage stage){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.GLRenderer","render",0x72dac118,"openfl._internal.renderer.opengl.GLRenderer.render","openfl/_internal/renderer/opengl/GLRenderer.hx",277,0xb2b97130)
		HX_STACK_THIS(this)
		HX_STACK_ARG(stage,"stage")
		HX_STACK_LINE(279)
		if ((this->contextLost)){
			HX_STACK_LINE(279)
			return null();
		}
		HX_STACK_LINE(283)
		::lime::graphics::GLRenderContext gl = this->gl;		HX_STACK_VAR(gl,"gl");
		HX_STACK_LINE(284)
		this->setViewport((int)0,(int)0,this->width,this->height);
		HX_STACK_LINE(286)
		{
			HX_STACK_LINE(286)
			::lime::graphics::opengl::GLFramebuffer framebuffer = this->defaultFramebuffer;		HX_STACK_VAR(framebuffer,"framebuffer");
			HX_STACK_LINE(286)
			::lime::graphics::opengl::GL_obj::lime_gl_bind_framebuffer(gl->FRAMEBUFFER,(  (((framebuffer == null()))) ? int((int)0) : int(framebuffer->id) ));
		}
		HX_STACK_LINE(288)
		if ((this->transparent)){
			HX_STACK_LINE(290)
			::lime::graphics::opengl::GL_obj::lime_gl_clear_color((int)0,(int)0,(int)0,(int)0);
		}
		else{
			HX_STACK_LINE(294)
			::lime::graphics::opengl::GL_obj::lime_gl_clear_color(stage->__colorSplit->__get((int)0),stage->__colorSplit->__get((int)1),stage->__colorSplit->__get((int)2),(int)1);
		}
		HX_STACK_LINE(298)
		::lime::graphics::opengl::GL_obj::lime_gl_clear(gl->COLOR_BUFFER_BIT);
		HX_STACK_LINE(299)
		this->renderDisplayObject(stage,this->projection,null());
	}
return null();
}


Void GLRenderer_obj::renderDisplayObject( ::openfl::display::DisplayObject displayObject,::openfl::geom::Point projection,::lime::graphics::opengl::GLFramebuffer buffer){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.GLRenderer","renderDisplayObject",0x5792fa69,"openfl._internal.renderer.opengl.GLRenderer.renderDisplayObject","openfl/_internal/renderer/opengl/GLRenderer.hx",321,0xb2b97130)
		HX_STACK_THIS(this)
		HX_STACK_ARG(displayObject,"displayObject")
		HX_STACK_ARG(projection,"projection")
		HX_STACK_ARG(buffer,"buffer")
		HX_STACK_LINE(323)
		this->renderSession->blendModeManager->setBlendMode(::openfl::display::BlendMode_obj::NORMAL,null());
		HX_STACK_LINE(325)
		this->renderSession->drawCount = (int)0;
		HX_STACK_LINE(326)
		this->renderSession->currentBlendMode = null();
		HX_STACK_LINE(328)
		this->spriteBatch->begin(this->renderSession,null());
		HX_STACK_LINE(329)
		this->filterManager->begin(this->renderSession,buffer);
		HX_STACK_LINE(330)
		displayObject->__renderGL(this->renderSession);
		HX_STACK_LINE(332)
		this->spriteBatch->finish();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(GLRenderer_obj,renderDisplayObject,(void))

Void GLRenderer_obj::resize( int width,int height){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.GLRenderer","resize",0x762cafb6,"openfl._internal.renderer.opengl.GLRenderer.resize","openfl/_internal/renderer/opengl/GLRenderer.hx",337,0xb2b97130)
		HX_STACK_THIS(this)
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_LINE(339)
		this->width = width;
		HX_STACK_LINE(340)
		this->height = height;
		HX_STACK_LINE(342)
		this->super::resize(width,height);
		HX_STACK_LINE(344)
		this->setViewport((int)0,(int)0,width,height);
		HX_STACK_LINE(346)
		this->projection->x = (Float(width) / Float((int)2));
		HX_STACK_LINE(347)
		this->projection->y = (Float(-(height)) / Float((int)2));
	}
return null();
}


int GLRenderer_obj::glContextId;

Array< ::Dynamic > GLRenderer_obj::glContexts;

Void GLRenderer_obj::renderBitmap( ::openfl::display::DisplayObject shape,::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.GLRenderer","renderBitmap",0xcc852727,"openfl._internal.renderer.opengl.GLRenderer.renderBitmap","openfl/_internal/renderer/opengl/GLRenderer.hx",304,0xb2b97130)
		HX_STACK_ARG(shape,"shape")
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(306)
		if (((bool(!(shape->__renderable)) || bool((shape->__worldAlpha <= (int)0))))){
			HX_STACK_LINE(306)
			return null();
		}
		HX_STACK_LINE(307)
		if (((bool((shape->__graphics == null())) || bool((shape->__graphics->__bitmap == null()))))){
			HX_STACK_LINE(307)
			return null();
		}
		HX_STACK_LINE(309)
		::openfl::geom::Rectangle bounds = shape->getBounds(null());		HX_STACK_VAR(bounds,"bounds");
		HX_STACK_LINE(310)
		::openfl::display::BitmapData bitmap = shape->__graphics->__bitmap;		HX_STACK_VAR(bitmap,"bitmap");
		HX_STACK_LINE(312)
		::openfl::geom::Matrix local = ::openfl::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(local,"local");
		HX_STACK_LINE(313)
		local->translate(shape->__graphics->__bounds->x,shape->__graphics->__bounds->y);
		HX_STACK_LINE(314)
		::openfl::geom::Matrix _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(314)
		{
			HX_STACK_LINE(314)
			::openfl::geom::Matrix m = shape->__worldTransform;		HX_STACK_VAR(m,"m");
			HX_STACK_LINE(314)
			::openfl::geom::Matrix result = ::openfl::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(314)
			result->a = ((local->a * m->a) + (local->b * m->c));
			HX_STACK_LINE(314)
			result->b = ((local->a * m->b) + (local->b * m->d));
			HX_STACK_LINE(314)
			result->c = ((local->c * m->a) + (local->d * m->c));
			HX_STACK_LINE(314)
			result->d = ((local->c * m->b) + (local->d * m->d));
			HX_STACK_LINE(314)
			result->tx = (((local->tx * m->a) + (local->ty * m->c)) + m->tx);
			HX_STACK_LINE(314)
			result->ty = (((local->tx * m->b) + (local->ty * m->d)) + m->ty);
			HX_STACK_LINE(314)
			_g = result;
		}
		HX_STACK_LINE(314)
		local = _g;
		HX_STACK_LINE(316)
		renderSession->spriteBatch->renderBitmapData(bitmap,true,local,shape->__worldColorTransform,shape->__worldAlpha,shape->__blendMode,::openfl::display::PixelSnapping_obj::ALWAYS,null());
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GLRenderer_obj,renderBitmap,(void))


GLRenderer_obj::GLRenderer_obj()
{
}

void GLRenderer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GLRenderer);
	HX_MARK_MEMBER_NAME(blendModeManager,"blendModeManager");
	HX_MARK_MEMBER_NAME(contextLost,"contextLost");
	HX_MARK_MEMBER_NAME(defaultFramebuffer,"defaultFramebuffer");
	HX_MARK_MEMBER_NAME(filterManager,"filterManager");
	HX_MARK_MEMBER_NAME(gl,"gl");
	HX_MARK_MEMBER_NAME(_glContextId,"_glContextId");
	HX_MARK_MEMBER_NAME(maskManager,"maskManager");
	HX_MARK_MEMBER_NAME(offset,"offset");
	HX_MARK_MEMBER_NAME(options,"options");
	HX_MARK_MEMBER_NAME(preserveDrawingBuffer,"preserveDrawingBuffer");
	HX_MARK_MEMBER_NAME(projection,"projection");
	HX_MARK_MEMBER_NAME(shaderManager,"shaderManager");
	HX_MARK_MEMBER_NAME(spriteBatch,"spriteBatch");
	HX_MARK_MEMBER_NAME(stencilManager,"stencilManager");
	HX_MARK_MEMBER_NAME(view,"view");
	HX_MARK_MEMBER_NAME(projectionMatrix,"projectionMatrix");
	HX_MARK_MEMBER_NAME(__stage,"__stage");
	HX_MARK_MEMBER_NAME(vpX,"vpX");
	HX_MARK_MEMBER_NAME(vpY,"vpY");
	HX_MARK_MEMBER_NAME(vpWidth,"vpWidth");
	HX_MARK_MEMBER_NAME(vpHeight,"vpHeight");
	::openfl::_internal::renderer::AbstractRenderer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void GLRenderer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(blendModeManager,"blendModeManager");
	HX_VISIT_MEMBER_NAME(contextLost,"contextLost");
	HX_VISIT_MEMBER_NAME(defaultFramebuffer,"defaultFramebuffer");
	HX_VISIT_MEMBER_NAME(filterManager,"filterManager");
	HX_VISIT_MEMBER_NAME(gl,"gl");
	HX_VISIT_MEMBER_NAME(_glContextId,"_glContextId");
	HX_VISIT_MEMBER_NAME(maskManager,"maskManager");
	HX_VISIT_MEMBER_NAME(offset,"offset");
	HX_VISIT_MEMBER_NAME(options,"options");
	HX_VISIT_MEMBER_NAME(preserveDrawingBuffer,"preserveDrawingBuffer");
	HX_VISIT_MEMBER_NAME(projection,"projection");
	HX_VISIT_MEMBER_NAME(shaderManager,"shaderManager");
	HX_VISIT_MEMBER_NAME(spriteBatch,"spriteBatch");
	HX_VISIT_MEMBER_NAME(stencilManager,"stencilManager");
	HX_VISIT_MEMBER_NAME(view,"view");
	HX_VISIT_MEMBER_NAME(projectionMatrix,"projectionMatrix");
	HX_VISIT_MEMBER_NAME(__stage,"__stage");
	HX_VISIT_MEMBER_NAME(vpX,"vpX");
	HX_VISIT_MEMBER_NAME(vpY,"vpY");
	HX_VISIT_MEMBER_NAME(vpWidth,"vpWidth");
	HX_VISIT_MEMBER_NAME(vpHeight,"vpHeight");
	::openfl::_internal::renderer::AbstractRenderer_obj::__Visit(HX_VISIT_ARG);
}

Dynamic GLRenderer_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"gl") ) { return gl; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"vpX") ) { return vpX; }
		if (HX_FIELD_EQ(inName,"vpY") ) { return vpY; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"view") ) { return view; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"offset") ) { return offset; }
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		if (HX_FIELD_EQ(inName,"resize") ) { return resize_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"options") ) { return options; }
		if (HX_FIELD_EQ(inName,"__stage") ) { return __stage; }
		if (HX_FIELD_EQ(inName,"vpWidth") ) { return vpWidth; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"vpHeight") ) { return vpHeight; }
		if (HX_FIELD_EQ(inName,"setOrtho") ) { return setOrtho_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"glContexts") ) { return glContexts; }
		if (HX_FIELD_EQ(inName,"projection") ) { return projection; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"glContextId") ) { return glContextId; }
		if (HX_FIELD_EQ(inName,"contextLost") ) { return contextLost; }
		if (HX_FIELD_EQ(inName,"maskManager") ) { return maskManager; }
		if (HX_FIELD_EQ(inName,"spriteBatch") ) { return spriteBatch; }
		if (HX_FIELD_EQ(inName,"setViewport") ) { return setViewport_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"renderBitmap") ) { return renderBitmap_dyn(); }
		if (HX_FIELD_EQ(inName,"_glContextId") ) { return _glContextId; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"filterManager") ) { return filterManager; }
		if (HX_FIELD_EQ(inName,"shaderManager") ) { return shaderManager; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"stencilManager") ) { return stencilManager; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"blendModeManager") ) { return blendModeManager; }
		if (HX_FIELD_EQ(inName,"projectionMatrix") ) { return projectionMatrix; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"handleContextLost") ) { return handleContextLost_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"defaultFramebuffer") ) { return defaultFramebuffer; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"renderDisplayObject") ) { return renderDisplayObject_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"preserveDrawingBuffer") ) { return preserveDrawingBuffer; }
		if (HX_FIELD_EQ(inName,"handleContextRestored") ) { return handleContextRestored_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic GLRenderer_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"gl") ) { gl=inValue.Cast< ::lime::graphics::GLRenderContext >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"vpX") ) { vpX=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"vpY") ) { vpY=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"view") ) { view=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"offset") ) { offset=inValue.Cast< ::openfl::geom::Point >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"options") ) { options=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__stage") ) { __stage=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"vpWidth") ) { vpWidth=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"vpHeight") ) { vpHeight=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"glContexts") ) { glContexts=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"projection") ) { projection=inValue.Cast< ::openfl::geom::Point >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"glContextId") ) { glContextId=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"contextLost") ) { contextLost=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maskManager") ) { maskManager=inValue.Cast< ::openfl::_internal::renderer::opengl::utils::GLMaskManager >(); return inValue; }
		if (HX_FIELD_EQ(inName,"spriteBatch") ) { spriteBatch=inValue.Cast< ::openfl::_internal::renderer::opengl::utils::SpriteBatch >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_glContextId") ) { _glContextId=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"filterManager") ) { filterManager=inValue.Cast< ::openfl::_internal::renderer::opengl::utils::FilterManager >(); return inValue; }
		if (HX_FIELD_EQ(inName,"shaderManager") ) { shaderManager=inValue.Cast< ::openfl::_internal::renderer::opengl::utils::ShaderManager >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"stencilManager") ) { stencilManager=inValue.Cast< ::openfl::_internal::renderer::opengl::utils::StencilManager >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"blendModeManager") ) { blendModeManager=inValue.Cast< ::openfl::_internal::renderer::opengl::utils::BlendModeManager >(); return inValue; }
		if (HX_FIELD_EQ(inName,"projectionMatrix") ) { projectionMatrix=inValue.Cast< ::openfl::geom::Matrix >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"defaultFramebuffer") ) { defaultFramebuffer=inValue.Cast< ::lime::graphics::opengl::GLFramebuffer >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"preserveDrawingBuffer") ) { preserveDrawingBuffer=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GLRenderer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("blendModeManager"));
	outFields->push(HX_CSTRING("contextLost"));
	outFields->push(HX_CSTRING("defaultFramebuffer"));
	outFields->push(HX_CSTRING("filterManager"));
	outFields->push(HX_CSTRING("gl"));
	outFields->push(HX_CSTRING("_glContextId"));
	outFields->push(HX_CSTRING("maskManager"));
	outFields->push(HX_CSTRING("offset"));
	outFields->push(HX_CSTRING("options"));
	outFields->push(HX_CSTRING("preserveDrawingBuffer"));
	outFields->push(HX_CSTRING("projection"));
	outFields->push(HX_CSTRING("shaderManager"));
	outFields->push(HX_CSTRING("spriteBatch"));
	outFields->push(HX_CSTRING("stencilManager"));
	outFields->push(HX_CSTRING("view"));
	outFields->push(HX_CSTRING("projectionMatrix"));
	outFields->push(HX_CSTRING("__stage"));
	outFields->push(HX_CSTRING("vpX"));
	outFields->push(HX_CSTRING("vpY"));
	outFields->push(HX_CSTRING("vpWidth"));
	outFields->push(HX_CSTRING("vpHeight"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("glContextId"),
	HX_CSTRING("glContexts"),
	HX_CSTRING("renderBitmap"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::_internal::renderer::opengl::utils::BlendModeManager*/ ,(int)offsetof(GLRenderer_obj,blendModeManager),HX_CSTRING("blendModeManager")},
	{hx::fsBool,(int)offsetof(GLRenderer_obj,contextLost),HX_CSTRING("contextLost")},
	{hx::fsObject /*::lime::graphics::opengl::GLFramebuffer*/ ,(int)offsetof(GLRenderer_obj,defaultFramebuffer),HX_CSTRING("defaultFramebuffer")},
	{hx::fsObject /*::openfl::_internal::renderer::opengl::utils::FilterManager*/ ,(int)offsetof(GLRenderer_obj,filterManager),HX_CSTRING("filterManager")},
	{hx::fsObject /*::lime::graphics::GLRenderContext*/ ,(int)offsetof(GLRenderer_obj,gl),HX_CSTRING("gl")},
	{hx::fsInt,(int)offsetof(GLRenderer_obj,_glContextId),HX_CSTRING("_glContextId")},
	{hx::fsObject /*::openfl::_internal::renderer::opengl::utils::GLMaskManager*/ ,(int)offsetof(GLRenderer_obj,maskManager),HX_CSTRING("maskManager")},
	{hx::fsObject /*::openfl::geom::Point*/ ,(int)offsetof(GLRenderer_obj,offset),HX_CSTRING("offset")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(GLRenderer_obj,options),HX_CSTRING("options")},
	{hx::fsBool,(int)offsetof(GLRenderer_obj,preserveDrawingBuffer),HX_CSTRING("preserveDrawingBuffer")},
	{hx::fsObject /*::openfl::geom::Point*/ ,(int)offsetof(GLRenderer_obj,projection),HX_CSTRING("projection")},
	{hx::fsObject /*::openfl::_internal::renderer::opengl::utils::ShaderManager*/ ,(int)offsetof(GLRenderer_obj,shaderManager),HX_CSTRING("shaderManager")},
	{hx::fsObject /*::openfl::_internal::renderer::opengl::utils::SpriteBatch*/ ,(int)offsetof(GLRenderer_obj,spriteBatch),HX_CSTRING("spriteBatch")},
	{hx::fsObject /*::openfl::_internal::renderer::opengl::utils::StencilManager*/ ,(int)offsetof(GLRenderer_obj,stencilManager),HX_CSTRING("stencilManager")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(GLRenderer_obj,view),HX_CSTRING("view")},
	{hx::fsObject /*::openfl::geom::Matrix*/ ,(int)offsetof(GLRenderer_obj,projectionMatrix),HX_CSTRING("projectionMatrix")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(GLRenderer_obj,__stage),HX_CSTRING("__stage")},
	{hx::fsInt,(int)offsetof(GLRenderer_obj,vpX),HX_CSTRING("vpX")},
	{hx::fsInt,(int)offsetof(GLRenderer_obj,vpY),HX_CSTRING("vpY")},
	{hx::fsInt,(int)offsetof(GLRenderer_obj,vpWidth),HX_CSTRING("vpWidth")},
	{hx::fsInt,(int)offsetof(GLRenderer_obj,vpHeight),HX_CSTRING("vpHeight")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("blendModeManager"),
	HX_CSTRING("contextLost"),
	HX_CSTRING("defaultFramebuffer"),
	HX_CSTRING("filterManager"),
	HX_CSTRING("gl"),
	HX_CSTRING("_glContextId"),
	HX_CSTRING("maskManager"),
	HX_CSTRING("offset"),
	HX_CSTRING("options"),
	HX_CSTRING("preserveDrawingBuffer"),
	HX_CSTRING("projection"),
	HX_CSTRING("shaderManager"),
	HX_CSTRING("spriteBatch"),
	HX_CSTRING("stencilManager"),
	HX_CSTRING("view"),
	HX_CSTRING("projectionMatrix"),
	HX_CSTRING("__stage"),
	HX_CSTRING("vpX"),
	HX_CSTRING("vpY"),
	HX_CSTRING("vpWidth"),
	HX_CSTRING("vpHeight"),
	HX_CSTRING("destroy"),
	HX_CSTRING("setViewport"),
	HX_CSTRING("setOrtho"),
	HX_CSTRING("handleContextLost"),
	HX_CSTRING("handleContextRestored"),
	HX_CSTRING("render"),
	HX_CSTRING("renderDisplayObject"),
	HX_CSTRING("resize"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GLRenderer_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(GLRenderer_obj::glContextId,"glContextId");
	HX_MARK_MEMBER_NAME(GLRenderer_obj::glContexts,"glContexts");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GLRenderer_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(GLRenderer_obj::glContextId,"glContextId");
	HX_VISIT_MEMBER_NAME(GLRenderer_obj::glContexts,"glContexts");
};

#endif

Class GLRenderer_obj::__mClass;

void GLRenderer_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl._internal.renderer.opengl.GLRenderer"), hx::TCanCast< GLRenderer_obj> ,sStaticFields,sMemberFields,
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

void GLRenderer_obj::__boot()
{
	glContextId= (int)0;
	glContexts= Array_obj< ::Dynamic >::__new();
}

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace opengl
