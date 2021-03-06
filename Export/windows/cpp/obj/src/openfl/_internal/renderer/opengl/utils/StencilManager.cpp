#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_graphics_GLRenderContext
#include <lime/graphics/GLRenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GL
#include <lime/graphics/opengl/GL.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLBuffer
#include <lime/graphics/opengl/GLBuffer.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLObject
#include <lime/graphics/opengl/GLObject.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_lime_utils_ByteArray
#include <lime/utils/ByteArray.h>
#endif
#ifndef INCLUDED_lime_utils_Float32Array
#include <lime/utils/Float32Array.h>
#endif
#ifndef INCLUDED_lime_utils_IDataInput
#include <lime/utils/IDataInput.h>
#endif
#ifndef INCLUDED_lime_utils_IMemoryRange
#include <lime/utils/IMemoryRange.h>
#endif
#ifndef INCLUDED_lime_utils_UInt16Array
#include <lime/utils/UInt16Array.h>
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
#ifndef INCLUDED_openfl__internal_renderer_opengl_shaders2_FillShader
#include <openfl/_internal/renderer/opengl/shaders2/FillShader.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_shaders2_Shader
#include <openfl/_internal/renderer/opengl/shaders2/Shader.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_BucketMode
#include <openfl/_internal/renderer/opengl/utils/BucketMode.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_GLBucket
#include <openfl/_internal/renderer/opengl/utils/GLBucket.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_GLBucketData
#include <openfl/_internal/renderer/opengl/utils/GLBucketData.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_GLGraphicsData
#include <openfl/_internal/renderer/opengl/utils/GLGraphicsData.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_GLStack
#include <openfl/_internal/renderer/opengl/utils/GLStack.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_GraphicsRenderer
#include <openfl/_internal/renderer/opengl/utils/GraphicsRenderer.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_ShaderManager
#include <openfl/_internal/renderer/opengl/utils/ShaderManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_StencilManager
#include <openfl/_internal/renderer/opengl/utils/StencilManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_VertexArray
#include <openfl/_internal/renderer/opengl/utils/VertexArray.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DrawCommand
#include <openfl/display/DrawCommand.h>
#endif
#ifndef INCLUDED_openfl_display_Graphics
#include <openfl/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
namespace openfl{
namespace _internal{
namespace renderer{
namespace opengl{
namespace utils{

Void StencilManager_obj::__construct(::lime::graphics::GLRenderContext gl)
{
HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.StencilManager","new",0x77733264,"openfl._internal.renderer.opengl.utils.StencilManager.new","openfl/_internal/renderer/opengl/utils/StencilManager.hx",22,0xffb0ff49)
HX_STACK_THIS(this)
HX_STACK_ARG(gl,"gl")
{
	HX_STACK_LINE(29)
	this->stencilMask = (int)0;
	HX_STACK_LINE(34)
	this->stencilStack = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(35)
	this->setContext(gl);
	HX_STACK_LINE(36)
	this->reverse = true;
	HX_STACK_LINE(37)
	this->count = (int)0;
}
;
	return null();
}

//StencilManager_obj::~StencilManager_obj() { }

Dynamic StencilManager_obj::__CreateEmpty() { return  new StencilManager_obj; }
hx::ObjectPtr< StencilManager_obj > StencilManager_obj::__new(::lime::graphics::GLRenderContext gl)
{  hx::ObjectPtr< StencilManager_obj > result = new StencilManager_obj();
	result->__construct(gl);
	return result;}

Dynamic StencilManager_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< StencilManager_obj > result = new StencilManager_obj();
	result->__construct(inArgs[0]);
	return result;}

Void StencilManager_obj::prepareGraphics( ::openfl::_internal::renderer::opengl::utils::GLBucketData fill,::openfl::_internal::renderer::RenderSession renderSession,::lime::utils::Float32Array translationMatrix){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.StencilManager","prepareGraphics",0xb36afd76,"openfl._internal.renderer.opengl.utils.StencilManager.prepareGraphics","openfl/_internal/renderer/opengl/utils/StencilManager.hx",41,0xffb0ff49)
		HX_STACK_THIS(this)
		HX_STACK_ARG(fill,"fill")
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_ARG(translationMatrix,"translationMatrix")
		HX_STACK_LINE(42)
		::openfl::_internal::renderer::opengl::shaders2::FillShader shader = renderSession->shaderManager->fillShader;		HX_STACK_VAR(shader,"shader");
		HX_STACK_LINE(44)
		renderSession->shaderManager->setShader(shader,null());
		HX_STACK_LINE(45)
		{
			HX_STACK_LINE(45)
			int location = shader->getUniformLocation(HX_CSTRING("uTranslationMatrix"));		HX_STACK_VAR(location,"location");
			HX_STACK_LINE(45)
			{
				HX_STACK_LINE(45)
				::lime::utils::ByteArray _g = translationMatrix->getByteBuffer();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(45)
				::lime::graphics::opengl::GL_obj::lime_gl_uniform_matrix(location,false,_g,(int)3);
			}
		}
		HX_STACK_LINE(46)
		{
			HX_STACK_LINE(46)
			int location = shader->getUniformLocation(HX_CSTRING("uProjectionMatrix"));		HX_STACK_VAR(location,"location");
			HX_STACK_LINE(46)
			::lime::utils::Float32Array v = renderSession->projectionMatrix->toArray(true);		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(46)
			{
				HX_STACK_LINE(46)
				::lime::utils::ByteArray _g1 = v->getByteBuffer();		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(46)
				::lime::graphics::opengl::GL_obj::lime_gl_uniform_matrix(location,false,_g1,(int)3);
			}
		}
		HX_STACK_LINE(48)
		{
			HX_STACK_LINE(48)
			::openfl::_internal::renderer::opengl::utils::VertexArray _this = fill->vertexArray;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(48)
			{
				HX_STACK_LINE(48)
				::lime::graphics::opengl::GLBuffer buffer = _this->glBuffer;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(48)
				::lime::graphics::opengl::GL_obj::lime_gl_bind_buffer(_this->gl->ARRAY_BUFFER,(  (((buffer == null()))) ? int((int)0) : int(buffer->id) ));
			}
		}
		HX_STACK_LINE(49)
		shader->bindVertexArray(fill->vertexArray);
		HX_STACK_LINE(50)
		{
			HX_STACK_LINE(50)
			::lime::graphics::opengl::GLBuffer buffer = fill->indexBuffer;		HX_STACK_VAR(buffer,"buffer");
			HX_STACK_LINE(50)
			::lime::graphics::opengl::GL_obj::lime_gl_bind_buffer(this->gl->ELEMENT_ARRAY_BUFFER,(  (((buffer == null()))) ? int((int)0) : int(buffer->id) ));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(StencilManager_obj,prepareGraphics,(void))

Void StencilManager_obj::pushBucket( ::openfl::_internal::renderer::opengl::utils::GLBucket bucket,::openfl::_internal::renderer::RenderSession renderSession,::lime::utils::Float32Array translationMatrix,Dynamic __o_isMask){
Dynamic isMask = __o_isMask.Default(false);
	HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.StencilManager","pushBucket",0x91b6f060,"openfl._internal.renderer.opengl.utils.StencilManager.pushBucket","openfl/_internal/renderer/opengl/utils/StencilManager.hx",53,0xffb0ff49)
	HX_STACK_THIS(this)
	HX_STACK_ARG(bucket,"bucket")
	HX_STACK_ARG(renderSession,"renderSession")
	HX_STACK_ARG(translationMatrix,"translationMatrix")
	HX_STACK_ARG(isMask,"isMask")
{
		HX_STACK_LINE(55)
		if ((!(isMask))){
			HX_STACK_LINE(56)
			::lime::graphics::opengl::GL_obj::lime_gl_enable(this->gl->STENCIL_TEST);
			HX_STACK_LINE(57)
			::lime::graphics::opengl::GL_obj::lime_gl_clear(this->gl->STENCIL_BUFFER_BIT);
			HX_STACK_LINE(58)
			::lime::graphics::opengl::GL_obj::lime_gl_stencil_mask((int)255);
			HX_STACK_LINE(60)
			::lime::graphics::opengl::GL_obj::lime_gl_color_mask(false,false,false,false);
			HX_STACK_LINE(61)
			::lime::graphics::opengl::GL_obj::lime_gl_stencil_func(this->gl->NEVER,(int)1,(int)255);
			HX_STACK_LINE(62)
			::lime::graphics::opengl::GL_obj::lime_gl_stencil_op(this->gl->INVERT,this->gl->KEEP,this->gl->KEEP);
			HX_STACK_LINE(64)
			::lime::graphics::opengl::GL_obj::lime_gl_clear(this->gl->STENCIL_BUFFER_BIT);
		}
		HX_STACK_LINE(67)
		{
			HX_STACK_LINE(67)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(67)
			Array< ::Dynamic > _g1 = bucket->fills;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(67)
			while((true)){
				HX_STACK_LINE(67)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(67)
					break;
				}
				HX_STACK_LINE(67)
				::openfl::_internal::renderer::opengl::utils::GLBucketData fill = _g1->__get(_g).StaticCast< ::openfl::_internal::renderer::opengl::utils::GLBucketData >();		HX_STACK_VAR(fill,"fill");
				HX_STACK_LINE(67)
				++(_g);
				HX_STACK_LINE(68)
				if ((fill->available)){
					HX_STACK_LINE(68)
					continue;
				}
				HX_STACK_LINE(69)
				{
					HX_STACK_LINE(69)
					::openfl::_internal::renderer::opengl::shaders2::FillShader shader = renderSession->shaderManager->fillShader;		HX_STACK_VAR(shader,"shader");
					HX_STACK_LINE(69)
					renderSession->shaderManager->setShader(shader,null());
					HX_STACK_LINE(69)
					{
						HX_STACK_LINE(69)
						int location = shader->getUniformLocation(HX_CSTRING("uTranslationMatrix"));		HX_STACK_VAR(location,"location");
						HX_STACK_LINE(69)
						{
							HX_STACK_LINE(69)
							::lime::utils::ByteArray _g2 = translationMatrix->getByteBuffer();		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(69)
							::lime::graphics::opengl::GL_obj::lime_gl_uniform_matrix(location,false,_g2,(int)3);
						}
					}
					HX_STACK_LINE(69)
					{
						HX_STACK_LINE(69)
						int location = shader->getUniformLocation(HX_CSTRING("uProjectionMatrix"));		HX_STACK_VAR(location,"location");
						HX_STACK_LINE(69)
						::lime::utils::Float32Array v = renderSession->projectionMatrix->toArray(true);		HX_STACK_VAR(v,"v");
						HX_STACK_LINE(69)
						{
							HX_STACK_LINE(69)
							::lime::utils::ByteArray _g11 = v->getByteBuffer();		HX_STACK_VAR(_g11,"_g11");
							HX_STACK_LINE(69)
							::lime::graphics::opengl::GL_obj::lime_gl_uniform_matrix(location,false,_g11,(int)3);
						}
					}
					HX_STACK_LINE(69)
					{
						HX_STACK_LINE(69)
						::openfl::_internal::renderer::opengl::utils::VertexArray _this = fill->vertexArray;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(69)
						{
							HX_STACK_LINE(69)
							::lime::graphics::opengl::GLBuffer buffer = _this->glBuffer;		HX_STACK_VAR(buffer,"buffer");
							HX_STACK_LINE(69)
							::lime::graphics::opengl::GL_obj::lime_gl_bind_buffer(_this->gl->ARRAY_BUFFER,(  (((buffer == null()))) ? int((int)0) : int(buffer->id) ));
						}
					}
					HX_STACK_LINE(69)
					shader->bindVertexArray(fill->vertexArray);
					HX_STACK_LINE(69)
					{
						HX_STACK_LINE(69)
						::lime::graphics::opengl::GLBuffer buffer = fill->indexBuffer;		HX_STACK_VAR(buffer,"buffer");
						HX_STACK_LINE(69)
						::lime::graphics::opengl::GL_obj::lime_gl_bind_buffer(this->gl->ELEMENT_ARRAY_BUFFER,(  (((buffer == null()))) ? int((int)0) : int(buffer->id) ));
					}
				}
				HX_STACK_LINE(70)
				::lime::graphics::opengl::GL_obj::lime_gl_draw_elements(fill->drawMode,fill->glIndices->length,this->gl->UNSIGNED_SHORT,(int)0);
			}
		}
		HX_STACK_LINE(74)
		if ((!(isMask))){
			HX_STACK_LINE(75)
			::lime::graphics::opengl::GL_obj::lime_gl_color_mask(true,true,true,renderSession->renderer->transparent);
			HX_STACK_LINE(76)
			::lime::graphics::opengl::GL_obj::lime_gl_stencil_op(this->gl->KEEP,this->gl->KEEP,this->gl->KEEP);
			HX_STACK_LINE(77)
			::lime::graphics::opengl::GL_obj::lime_gl_stencil_func(this->gl->EQUAL,(int)255,(int)255);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(StencilManager_obj,pushBucket,(void))

Void StencilManager_obj::popBucket( ::openfl::display::DisplayObject object,::openfl::_internal::renderer::opengl::utils::GLBucket bucket,::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.StencilManager","popBucket",0x413d75df,"openfl._internal.renderer.opengl.utils.StencilManager.popBucket","openfl/_internal/renderer/opengl/utils/StencilManager.hx",82,0xffb0ff49)
		HX_STACK_THIS(this)
		HX_STACK_ARG(object,"object")
		HX_STACK_ARG(bucket,"bucket")
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(82)
		::lime::graphics::opengl::GL_obj::lime_gl_disable(this->gl->STENCIL_TEST);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(StencilManager_obj,popBucket,(void))

Void StencilManager_obj::pushMask( ::openfl::display::DisplayObject object,::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.StencilManager","pushMask",0x02924362,"openfl._internal.renderer.opengl.utils.StencilManager.pushMask","openfl/_internal/renderer/opengl/utils/StencilManager.hx",85,0xffb0ff49)
		HX_STACK_THIS(this)
		HX_STACK_ARG(object,"object")
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(87)
		::openfl::display::Graphics maskGraphics = object->__maskGraphics;		HX_STACK_VAR(maskGraphics,"maskGraphics");
		HX_STACK_LINE(88)
		if (((bool((maskGraphics == null())) || bool((maskGraphics->__commands->length <= (int)0))))){
			HX_STACK_LINE(89)
			return null();
		}
		HX_STACK_LINE(92)
		if (((this->stencilMask == (int)0))){
			HX_STACK_LINE(93)
			::lime::graphics::opengl::GL_obj::lime_gl_enable(this->gl->STENCIL_TEST);
			HX_STACK_LINE(94)
			::lime::graphics::opengl::GL_obj::lime_gl_clear(this->gl->STENCIL_BUFFER_BIT);
		}
		HX_STACK_LINE(97)
		(this->stencilMask)++;
		HX_STACK_LINE(99)
		if ((maskGraphics->__dirty)){
			HX_STACK_LINE(100)
			::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::updateGraphics(object,maskGraphics,renderSession->gl,null());
		}
		HX_STACK_LINE(103)
		int func;		HX_STACK_VAR(func,"func");
		HX_STACK_LINE(103)
		if (((this->stencilMask == (int)1))){
			HX_STACK_LINE(103)
			func = this->gl->NEVER;
		}
		else{
			HX_STACK_LINE(103)
			func = this->gl->EQUAL;
		}
		HX_STACK_LINE(104)
		int ref = this->stencilMask;		HX_STACK_VAR(ref,"ref");
		HX_STACK_LINE(105)
		int mask = ((int)255 - this->stencilMask);		HX_STACK_VAR(mask,"mask");
		HX_STACK_LINE(107)
		::lime::graphics::opengl::GL_obj::lime_gl_stencil_mask((int)255);
		HX_STACK_LINE(108)
		::lime::graphics::opengl::GL_obj::lime_gl_color_mask(false,false,false,false);
		HX_STACK_LINE(109)
		::lime::graphics::opengl::GL_obj::lime_gl_stencil_func(func,ref,mask);
		HX_STACK_LINE(110)
		::lime::graphics::opengl::GL_obj::lime_gl_stencil_op(this->gl->REPLACE,this->gl->KEEP,this->gl->KEEP);
		HX_STACK_LINE(113)
		::openfl::_internal::renderer::opengl::utils::GLStack glStack = maskGraphics->__glStack->__get(::openfl::_internal::renderer::opengl::GLRenderer_obj::glContextId).StaticCast< ::openfl::_internal::renderer::opengl::utils::GLStack >();		HX_STACK_VAR(glStack,"glStack");
		HX_STACK_LINE(114)
		::openfl::_internal::renderer::opengl::utils::GLBucket bucket;		HX_STACK_VAR(bucket,"bucket");
		HX_STACK_LINE(115)
		::openfl::geom::Matrix translationMatrix = object->__worldTransform;		HX_STACK_VAR(translationMatrix,"translationMatrix");
		HX_STACK_LINE(116)
		{
			HX_STACK_LINE(116)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(116)
			int _g = glStack->buckets->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(116)
			while((true)){
				HX_STACK_LINE(116)
				if ((!(((_g1 < _g))))){
					HX_STACK_LINE(116)
					break;
				}
				HX_STACK_LINE(116)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(117)
				bucket = glStack->buckets->__get(i).StaticCast< ::openfl::_internal::renderer::opengl::utils::GLBucket >();
				HX_STACK_LINE(119)
				if (((bucket->overrideMatrix != null()))){
					HX_STACK_LINE(120)
					translationMatrix = bucket->overrideMatrix;
				}
				else{
					HX_STACK_LINE(122)
					translationMatrix = object->__worldTransform;
				}
				HX_STACK_LINE(125)
				{
					HX_STACK_LINE(125)
					::openfl::_internal::renderer::opengl::utils::BucketMode _g2 = bucket->mode;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(125)
					switch( (int)(_g2->__Index())){
						case (int)1: case (int)2: {
							HX_STACK_LINE(127)
							::lime::utils::Float32Array _g3 = translationMatrix->toArray(true);		HX_STACK_VAR(_g3,"_g3");
							HX_STACK_LINE(127)
							this->pushBucket(bucket,renderSession,_g3,true);
						}
						;break;
						default: {
						}
					}
				}
			}
		}
		HX_STACK_LINE(133)
		::lime::graphics::opengl::GL_obj::lime_gl_color_mask(true,true,true,renderSession->renderer->transparent);
		HX_STACK_LINE(134)
		::lime::graphics::opengl::GL_obj::lime_gl_stencil_op(this->gl->KEEP,this->gl->KEEP,this->gl->KEEP);
		HX_STACK_LINE(135)
		::lime::graphics::opengl::GL_obj::lime_gl_stencil_func(this->gl->EQUAL,this->stencilMask,(int)255);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(StencilManager_obj,pushMask,(void))

Void StencilManager_obj::popMask( ::openfl::display::DisplayObject object,::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.StencilManager","popMask",0xc8241b21,"openfl._internal.renderer.opengl.utils.StencilManager.popMask","openfl/_internal/renderer/opengl/utils/StencilManager.hx",138,0xffb0ff49)
		HX_STACK_THIS(this)
		HX_STACK_ARG(object,"object")
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(145)
		(this->stencilMask)--;
		HX_STACK_LINE(147)
		if (((this->stencilMask <= (int)0))){
			HX_STACK_LINE(148)
			::lime::graphics::opengl::GL_obj::lime_gl_disable(this->gl->STENCIL_TEST);
			HX_STACK_LINE(149)
			this->stencilMask = (int)0;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(StencilManager_obj,popMask,(void))

Void StencilManager_obj::bindGraphics( ::openfl::display::DisplayObject object,::openfl::_internal::renderer::opengl::utils::GLGraphicsData glData,::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.StencilManager","bindGraphics",0xa8f66d24,"openfl._internal.renderer.opengl.utils.StencilManager.bindGraphics","openfl/_internal/renderer/opengl/utils/StencilManager.hx",153,0xffb0ff49)
		HX_STACK_THIS(this)
		HX_STACK_ARG(object,"object")
		HX_STACK_ARG(glData,"glData")
		HX_STACK_ARG(renderSession,"renderSession")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(StencilManager_obj,bindGraphics,(void))

Void StencilManager_obj::destroy( ){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.StencilManager","destroy",0xa998e0fe,"openfl._internal.renderer.opengl.utils.StencilManager.destroy","openfl/_internal/renderer/opengl/utils/StencilManager.hx",209,0xffb0ff49)
		HX_STACK_THIS(this)
		HX_STACK_LINE(211)
		this->stencilStack = null();
		HX_STACK_LINE(212)
		this->gl = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(StencilManager_obj,destroy,(void))

Void StencilManager_obj::popStencil( ::openfl::display::DisplayObject object,::openfl::_internal::renderer::opengl::utils::GLGraphicsData glData,::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.StencilManager","popStencil",0x59e272e7,"openfl._internal.renderer.opengl.utils.StencilManager.popStencil","openfl/_internal/renderer/opengl/utils/StencilManager.hx",217,0xffb0ff49)
		HX_STACK_THIS(this)
		HX_STACK_ARG(object,"object")
		HX_STACK_ARG(glData,"glData")
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(219)
		this->stencilStack->pop().StaticCast< ::openfl::_internal::renderer::opengl::utils::GLGraphicsData >();
		HX_STACK_LINE(221)
		(this->count)--;
		HX_STACK_LINE(223)
		if (((this->stencilStack->length == (int)0))){
			HX_STACK_LINE(225)
			::lime::graphics::opengl::GL_obj::lime_gl_disable(this->gl->STENCIL_TEST);
		}
		else{
			HX_STACK_LINE(229)
			int level = this->count;		HX_STACK_VAR(level,"level");
			HX_STACK_LINE(230)
			this->bindGraphics(object,glData,renderSession);
			HX_STACK_LINE(232)
			::lime::graphics::opengl::GL_obj::lime_gl_color_mask(false,false,false,false);
			HX_STACK_LINE(234)
			if (((glData->mode == (int)1))){
				HX_STACK_LINE(236)
				this->reverse = !(this->reverse);
				HX_STACK_LINE(238)
				if ((this->reverse)){
					HX_STACK_LINE(240)
					::lime::graphics::opengl::GL_obj::lime_gl_stencil_func(this->gl->EQUAL,((int)255 - ((level + (int)1))),(int)255);
					HX_STACK_LINE(241)
					::lime::graphics::opengl::GL_obj::lime_gl_stencil_op(this->gl->KEEP,this->gl->KEEP,this->gl->INCR);
				}
				else{
					HX_STACK_LINE(245)
					::lime::graphics::opengl::GL_obj::lime_gl_stencil_func(this->gl->EQUAL,(level + (int)1),(int)255);
					HX_STACK_LINE(246)
					::lime::graphics::opengl::GL_obj::lime_gl_stencil_op(this->gl->KEEP,this->gl->KEEP,this->gl->DECR);
				}
				HX_STACK_LINE(250)
				::lime::graphics::opengl::GL_obj::lime_gl_draw_elements(this->gl->TRIANGLE_FAN,(int)4,this->gl->UNSIGNED_SHORT,(((glData->indices->length - (int)4)) * (int)2));
				HX_STACK_LINE(252)
				::lime::graphics::opengl::GL_obj::lime_gl_stencil_func(this->gl->ALWAYS,(int)0,(int)255);
				HX_STACK_LINE(253)
				::lime::graphics::opengl::GL_obj::lime_gl_stencil_op(this->gl->KEEP,this->gl->KEEP,this->gl->INVERT);
				HX_STACK_LINE(255)
				::lime::graphics::opengl::GL_obj::lime_gl_draw_elements(this->gl->TRIANGLE_FAN,(glData->indices->length - (int)4),this->gl->UNSIGNED_SHORT,(int)0);
				HX_STACK_LINE(257)
				if ((!(this->reverse))){
					HX_STACK_LINE(259)
					::lime::graphics::opengl::GL_obj::lime_gl_stencil_func(this->gl->EQUAL,((int)255 - level),(int)255);
				}
				else{
					HX_STACK_LINE(263)
					::lime::graphics::opengl::GL_obj::lime_gl_stencil_func(this->gl->EQUAL,level,(int)255);
				}
			}
			else{
				HX_STACK_LINE(269)
				if ((!(this->reverse))){
					HX_STACK_LINE(271)
					::lime::graphics::opengl::GL_obj::lime_gl_stencil_func(this->gl->EQUAL,((int)255 - ((level + (int)1))),(int)255);
					HX_STACK_LINE(272)
					::lime::graphics::opengl::GL_obj::lime_gl_stencil_op(this->gl->KEEP,this->gl->KEEP,this->gl->INCR);
				}
				else{
					HX_STACK_LINE(276)
					::lime::graphics::opengl::GL_obj::lime_gl_stencil_func(this->gl->EQUAL,(level + (int)1),(int)255);
					HX_STACK_LINE(277)
					::lime::graphics::opengl::GL_obj::lime_gl_stencil_op(this->gl->KEEP,this->gl->KEEP,this->gl->DECR);
				}
				HX_STACK_LINE(281)
				::lime::graphics::opengl::GL_obj::lime_gl_draw_elements(this->gl->TRIANGLE_STRIP,glData->indices->length,this->gl->UNSIGNED_SHORT,(int)0);
				HX_STACK_LINE(283)
				if ((!(this->reverse))){
					HX_STACK_LINE(285)
					::lime::graphics::opengl::GL_obj::lime_gl_stencil_func(this->gl->EQUAL,((int)255 - level),(int)255);
				}
				else{
					HX_STACK_LINE(289)
					::lime::graphics::opengl::GL_obj::lime_gl_stencil_func(this->gl->EQUAL,level,(int)255);
				}
			}
			HX_STACK_LINE(295)
			::lime::graphics::opengl::GL_obj::lime_gl_color_mask(true,true,true,true);
			HX_STACK_LINE(296)
			::lime::graphics::opengl::GL_obj::lime_gl_stencil_op(this->gl->KEEP,this->gl->KEEP,this->gl->KEEP);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(StencilManager_obj,popStencil,(void))

Void StencilManager_obj::pushStencil( ::openfl::display::DisplayObject object,::openfl::_internal::renderer::opengl::utils::GLGraphicsData glData,::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.StencilManager","pushStencil",0x73b42946,"openfl._internal.renderer.opengl.utils.StencilManager.pushStencil","openfl/_internal/renderer/opengl/utils/StencilManager.hx",303,0xffb0ff49)
		HX_STACK_THIS(this)
		HX_STACK_ARG(object,"object")
		HX_STACK_ARG(glData,"glData")
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(305)
		this->bindGraphics(object,glData,renderSession);
		HX_STACK_LINE(307)
		if (((this->stencilStack->length == (int)0))){
			HX_STACK_LINE(309)
			::lime::graphics::opengl::GL_obj::lime_gl_enable(this->gl->STENCIL_TEST);
			HX_STACK_LINE(310)
			::lime::graphics::opengl::GL_obj::lime_gl_clear(this->gl->STENCIL_BUFFER_BIT);
			HX_STACK_LINE(311)
			this->reverse = true;
			HX_STACK_LINE(312)
			this->count = (int)0;
		}
		HX_STACK_LINE(316)
		this->stencilStack->push(glData);
		HX_STACK_LINE(318)
		int level = this->count;		HX_STACK_VAR(level,"level");
		HX_STACK_LINE(321)
		::lime::graphics::opengl::GL_obj::lime_gl_color_mask(false,false,false,false);
		HX_STACK_LINE(323)
		::lime::graphics::opengl::GL_obj::lime_gl_stencil_func(this->gl->ALWAYS,(int)0,(int)255);
		HX_STACK_LINE(324)
		::lime::graphics::opengl::GL_obj::lime_gl_stencil_op(this->gl->KEEP,this->gl->KEEP,this->gl->INVERT);
		HX_STACK_LINE(326)
		if (((glData->mode == (int)1))){
			HX_STACK_LINE(328)
			::lime::graphics::opengl::GL_obj::lime_gl_draw_elements(this->gl->TRIANGLE_FAN,(glData->indices->length - (int)4),this->gl->UNSIGNED_SHORT,(int)0);
			HX_STACK_LINE(330)
			if ((this->reverse)){
				HX_STACK_LINE(332)
				::lime::graphics::opengl::GL_obj::lime_gl_stencil_func(this->gl->EQUAL,((int)255 - level),(int)255);
				HX_STACK_LINE(333)
				::lime::graphics::opengl::GL_obj::lime_gl_stencil_op(this->gl->KEEP,this->gl->KEEP,this->gl->DECR);
			}
			else{
				HX_STACK_LINE(337)
				::lime::graphics::opengl::GL_obj::lime_gl_stencil_func(this->gl->EQUAL,level,(int)255);
				HX_STACK_LINE(338)
				::lime::graphics::opengl::GL_obj::lime_gl_stencil_op(this->gl->KEEP,this->gl->KEEP,this->gl->INCR);
			}
			HX_STACK_LINE(342)
			::lime::graphics::opengl::GL_obj::lime_gl_draw_elements(this->gl->TRIANGLE_FAN,(int)4,this->gl->UNSIGNED_SHORT,(((glData->indices->length - (int)4)) * (int)2));
			HX_STACK_LINE(344)
			if ((this->reverse)){
				HX_STACK_LINE(346)
				::lime::graphics::opengl::GL_obj::lime_gl_stencil_func(this->gl->EQUAL,((int)255 - ((level + (int)1))),(int)255);
			}
			else{
				HX_STACK_LINE(350)
				::lime::graphics::opengl::GL_obj::lime_gl_stencil_func(this->gl->EQUAL,(level + (int)1),(int)255);
			}
			HX_STACK_LINE(354)
			this->reverse = !(this->reverse);
		}
		else{
			HX_STACK_LINE(358)
			if ((!(this->reverse))){
				HX_STACK_LINE(360)
				::lime::graphics::opengl::GL_obj::lime_gl_stencil_func(this->gl->EQUAL,((int)255 - level),(int)255);
				HX_STACK_LINE(361)
				::lime::graphics::opengl::GL_obj::lime_gl_stencil_op(this->gl->KEEP,this->gl->KEEP,this->gl->DECR);
			}
			else{
				HX_STACK_LINE(365)
				::lime::graphics::opengl::GL_obj::lime_gl_stencil_func(this->gl->EQUAL,level,(int)255);
				HX_STACK_LINE(366)
				::lime::graphics::opengl::GL_obj::lime_gl_stencil_op(this->gl->KEEP,this->gl->KEEP,this->gl->INCR);
			}
			HX_STACK_LINE(370)
			::lime::graphics::opengl::GL_obj::lime_gl_draw_elements(this->gl->TRIANGLE_STRIP,glData->indices->length,this->gl->UNSIGNED_SHORT,(int)0);
			HX_STACK_LINE(372)
			if ((!(this->reverse))){
				HX_STACK_LINE(374)
				::lime::graphics::opengl::GL_obj::lime_gl_stencil_func(this->gl->EQUAL,((int)255 - ((level + (int)1))),(int)255);
			}
			else{
				HX_STACK_LINE(378)
				::lime::graphics::opengl::GL_obj::lime_gl_stencil_func(this->gl->EQUAL,(level + (int)1),(int)255);
			}
		}
		HX_STACK_LINE(384)
		::lime::graphics::opengl::GL_obj::lime_gl_color_mask(true,true,true,true);
		HX_STACK_LINE(386)
		::lime::graphics::opengl::GL_obj::lime_gl_stencil_op(this->gl->KEEP,this->gl->KEEP,this->gl->KEEP);
		HX_STACK_LINE(388)
		(this->count)++;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(StencilManager_obj,pushStencil,(void))

Void StencilManager_obj::setContext( ::lime::graphics::GLRenderContext gl){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.StencilManager","setContext",0xdb9160e9,"openfl._internal.renderer.opengl.utils.StencilManager.setContext","openfl/_internal/renderer/opengl/utils/StencilManager.hx",395,0xffb0ff49)
		HX_STACK_THIS(this)
		HX_STACK_ARG(gl,"gl")
		HX_STACK_LINE(395)
		this->gl = gl;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(StencilManager_obj,setContext,(void))


StencilManager_obj::StencilManager_obj()
{
}

void StencilManager_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(StencilManager);
	HX_MARK_MEMBER_NAME(count,"count");
	HX_MARK_MEMBER_NAME(gl,"gl");
	HX_MARK_MEMBER_NAME(reverse,"reverse");
	HX_MARK_MEMBER_NAME(stencilStack,"stencilStack");
	HX_MARK_MEMBER_NAME(stencilMask,"stencilMask");
	HX_MARK_END_CLASS();
}

void StencilManager_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(count,"count");
	HX_VISIT_MEMBER_NAME(gl,"gl");
	HX_VISIT_MEMBER_NAME(reverse,"reverse");
	HX_VISIT_MEMBER_NAME(stencilStack,"stencilStack");
	HX_VISIT_MEMBER_NAME(stencilMask,"stencilMask");
}

Dynamic StencilManager_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"gl") ) { return gl; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"count") ) { return count; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"reverse") ) { return reverse; }
		if (HX_FIELD_EQ(inName,"popMask") ) { return popMask_dyn(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"pushMask") ) { return pushMask_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"popBucket") ) { return popBucket_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"pushBucket") ) { return pushBucket_dyn(); }
		if (HX_FIELD_EQ(inName,"popStencil") ) { return popStencil_dyn(); }
		if (HX_FIELD_EQ(inName,"setContext") ) { return setContext_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"stencilMask") ) { return stencilMask; }
		if (HX_FIELD_EQ(inName,"pushStencil") ) { return pushStencil_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"stencilStack") ) { return stencilStack; }
		if (HX_FIELD_EQ(inName,"bindGraphics") ) { return bindGraphics_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"prepareGraphics") ) { return prepareGraphics_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic StencilManager_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"gl") ) { gl=inValue.Cast< ::lime::graphics::GLRenderContext >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"count") ) { count=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"reverse") ) { reverse=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"stencilMask") ) { stencilMask=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"stencilStack") ) { stencilStack=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void StencilManager_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("count"));
	outFields->push(HX_CSTRING("gl"));
	outFields->push(HX_CSTRING("reverse"));
	outFields->push(HX_CSTRING("stencilStack"));
	outFields->push(HX_CSTRING("stencilMask"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(StencilManager_obj,count),HX_CSTRING("count")},
	{hx::fsObject /*::lime::graphics::GLRenderContext*/ ,(int)offsetof(StencilManager_obj,gl),HX_CSTRING("gl")},
	{hx::fsBool,(int)offsetof(StencilManager_obj,reverse),HX_CSTRING("reverse")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(StencilManager_obj,stencilStack),HX_CSTRING("stencilStack")},
	{hx::fsInt,(int)offsetof(StencilManager_obj,stencilMask),HX_CSTRING("stencilMask")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("count"),
	HX_CSTRING("gl"),
	HX_CSTRING("reverse"),
	HX_CSTRING("stencilStack"),
	HX_CSTRING("stencilMask"),
	HX_CSTRING("prepareGraphics"),
	HX_CSTRING("pushBucket"),
	HX_CSTRING("popBucket"),
	HX_CSTRING("pushMask"),
	HX_CSTRING("popMask"),
	HX_CSTRING("bindGraphics"),
	HX_CSTRING("destroy"),
	HX_CSTRING("popStencil"),
	HX_CSTRING("pushStencil"),
	HX_CSTRING("setContext"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(StencilManager_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(StencilManager_obj::__mClass,"__mClass");
};

#endif

Class StencilManager_obj::__mClass;

void StencilManager_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl._internal.renderer.opengl.utils.StencilManager"), hx::TCanCast< StencilManager_obj> ,sStaticFields,sMemberFields,
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

void StencilManager_obj::__boot()
{
}

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace opengl
} // end namespace utils
