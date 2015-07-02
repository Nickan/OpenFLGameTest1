#include <hxcpp.h>

#ifndef INCLUDED_Lambda
#include <Lambda.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_graphics_GLRenderContext
#include <lime/graphics/GLRenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_Image
#include <lime/graphics/Image.h>
#endif
#ifndef INCLUDED_lime_graphics_ImageBuffer
#include <lime/graphics/ImageBuffer.h>
#endif
#ifndef INCLUDED_lime_graphics_ImageChannel
#include <lime/graphics/ImageChannel.h>
#endif
#ifndef INCLUDED_lime_graphics_ImageType
#include <lime/graphics/ImageType.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo_Cairo
#include <lime/graphics/cairo/Cairo.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo__CairoSurface_CairoSurface_Impl_
#include <lime/graphics/cairo/_CairoSurface/CairoSurface_Impl_.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GL
#include <lime/graphics/opengl/GL.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLBuffer
#include <lime/graphics/opengl/GLBuffer.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLFramebuffer
#include <lime/graphics/opengl/GLFramebuffer.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLObject
#include <lime/graphics/opengl/GLObject.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLTexture
#include <lime/graphics/opengl/GLTexture.h>
#endif
#ifndef INCLUDED_lime_graphics_utils_ImageCanvasUtil
#include <lime/graphics/utils/ImageCanvasUtil.h>
#endif
#ifndef INCLUDED_lime_math_Matrix3
#include <lime/math/Matrix3.h>
#endif
#ifndef INCLUDED_lime_math_Rectangle
#include <lime/math/Rectangle.h>
#endif
#ifndef INCLUDED_lime_math_Vector2
#include <lime/math/Vector2.h>
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
#ifndef INCLUDED_lime_utils_UInt8Array
#include <lime/utils/UInt8Array.h>
#endif
#ifndef INCLUDED_openfl_Lib
#include <openfl/Lib.h>
#endif
#ifndef INCLUDED_openfl_Memory
#include <openfl/Memory.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_AbstractRenderer
#include <openfl/_internal/renderer/AbstractRenderer.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_RenderSession
#include <openfl/_internal/renderer/RenderSession.h>
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
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_FilterTexture
#include <openfl/_internal/renderer/opengl/utils/FilterTexture.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_ShaderManager
#include <openfl/_internal/renderer/opengl/utils/ShaderManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_SpriteBatch
#include <openfl/_internal/renderer/opengl/utils/SpriteBatch.h>
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
#ifndef INCLUDED_openfl_display_JPEGEncoderOptions
#include <openfl/display/JPEGEncoderOptions.h>
#endif
#ifndef INCLUDED_openfl_display_MovieClip
#include <openfl/display/MovieClip.h>
#endif
#ifndef INCLUDED_openfl_display_PNGEncoderOptions
#include <openfl/display/PNGEncoderOptions.h>
#endif
#ifndef INCLUDED_openfl_display_PixelSnapping
#include <openfl/display/PixelSnapping.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_display_TextureUvs
#include <openfl/display/TextureUvs.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_filters_BitmapFilter
#include <openfl/filters/BitmapFilter.h>
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
namespace display{

Void BitmapData_obj::__construct(int width,int height,hx::Null< bool >  __o_transparent,hx::Null< int >  __o_fillColor)
{
HX_STACK_FRAME("openfl.display.BitmapData","new",0x7e3e4115,"openfl.display.BitmapData.new","openfl/display/BitmapData.hx",108,0xdd12d5b9)
HX_STACK_THIS(this)
HX_STACK_ARG(width,"width")
HX_STACK_ARG(height,"height")
HX_STACK_ARG(__o_transparent,"transparent")
HX_STACK_ARG(__o_fillColor,"fillColor")
bool transparent = __o_transparent.Default(true);
int fillColor = __o_fillColor.Default(-1);
{
	HX_STACK_LINE(155)
	this->__usingFramebuffer = false;
	HX_STACK_LINE(174)
	this->transparent = transparent;
	HX_STACK_LINE(181)
	if (((width < (int)0))){
		HX_STACK_LINE(181)
		width = (int)0;
	}
	else{
		HX_STACK_LINE(181)
		width = width;
	}
	HX_STACK_LINE(182)
	if (((height < (int)0))){
		HX_STACK_LINE(182)
		height = (int)0;
	}
	else{
		HX_STACK_LINE(182)
		height = height;
	}
	HX_STACK_LINE(184)
	this->width = width;
	HX_STACK_LINE(185)
	this->height = height;
	HX_STACK_LINE(186)
	::openfl::geom::Rectangle _g = ::openfl::geom::Rectangle_obj::__new((int)0,(int)0,width,height);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(186)
	this->rect = _g;
	HX_STACK_LINE(188)
	if (((bool((width > (int)0)) && bool((height > (int)0))))){
		HX_STACK_LINE(190)
		if ((transparent)){
			struct _Function_3_1{
				inline static Float Block( int &fillColor){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/display/BitmapData.hx",192,0xdd12d5b9)
					{
						HX_STACK_LINE(192)
						int _int = (int(fillColor) & int((int)-16777216));		HX_STACK_VAR(_int,"int");
						HX_STACK_LINE(192)
						return (  (((_int < (int)0))) ? Float((4294967296.0 + _int)) : Float((_int + 0.0)) );
					}
					return null();
				}
			};
			HX_STACK_LINE(192)
			if (((_Function_3_1::Block(fillColor) == (int)0))){
				HX_STACK_LINE(194)
				fillColor = (int)0;
			}
		}
		else{
			HX_STACK_LINE(200)
			fillColor = (int((int)-16777216) | int((int(fillColor) & int((int)16777215))));
		}
		HX_STACK_LINE(204)
		fillColor = (int((int(fillColor) << int((int)8))) | int((int((int(fillColor) >> int((int)24))) & int((int)255))));
		HX_STACK_LINE(206)
		::lime::graphics::Image _g1 = ::lime::graphics::Image_obj::__new(null(),(int)0,(int)0,width,height,fillColor,null());		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(206)
		this->__image = _g1;
		HX_STACK_LINE(207)
		this->__image->set_transparent(transparent);
		HX_STACK_LINE(208)
		this->__isValid = true;
	}
	HX_STACK_LINE(212)
	this->__createUVs();
	HX_STACK_LINE(214)
	::openfl::geom::Matrix _g2 = ::openfl::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(214)
	this->__worldTransform = _g2;
	HX_STACK_LINE(215)
	::openfl::geom::ColorTransform _g3 = ::openfl::geom::ColorTransform_obj::__new(null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(215)
	this->__worldColorTransform = _g3;
}
;
	return null();
}

//BitmapData_obj::~BitmapData_obj() { }

Dynamic BitmapData_obj::__CreateEmpty() { return  new BitmapData_obj; }
hx::ObjectPtr< BitmapData_obj > BitmapData_obj::__new(int width,int height,hx::Null< bool >  __o_transparent,hx::Null< int >  __o_fillColor)
{  hx::ObjectPtr< BitmapData_obj > result = new BitmapData_obj();
	result->__construct(width,height,__o_transparent,__o_fillColor);
	return result;}

Dynamic BitmapData_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BitmapData_obj > result = new BitmapData_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return result;}

hx::Object *BitmapData_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::openfl::display::IBitmapDrawable_obj)) return operator ::openfl::display::IBitmapDrawable_obj *();
	return super::__ToInterface(inType);
}

Void BitmapData_obj::applyFilter( ::openfl::display::BitmapData sourceBitmapData,::openfl::geom::Rectangle sourceRect,::openfl::geom::Point destPoint,::openfl::filters::BitmapFilter filter){
{
		HX_STACK_FRAME("openfl.display.BitmapData","applyFilter",0xfbb98d7b,"openfl.display.BitmapData.applyFilter","openfl/display/BitmapData.hx",245,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(sourceBitmapData,"sourceBitmapData")
		HX_STACK_ARG(sourceRect,"sourceRect")
		HX_STACK_ARG(destPoint,"destPoint")
		HX_STACK_ARG(filter,"filter")
		HX_STACK_LINE(247)
		if (((bool((bool(!(this->__isValid)) || bool((sourceBitmapData == null())))) || bool(!(sourceBitmapData->__isValid))))){
			HX_STACK_LINE(247)
			return null();
		}
		HX_STACK_LINE(260)
		this->__image->dirty = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(BitmapData_obj,applyFilter,(void))

::openfl::display::BitmapData BitmapData_obj::clone( ){
	HX_STACK_FRAME("openfl.display.BitmapData","clone",0xea52db52,"openfl.display.BitmapData.clone","openfl/display/BitmapData.hx",271,0xdd12d5b9)
	HX_STACK_THIS(this)
	HX_STACK_LINE(271)
	if ((!(this->__isValid))){
		HX_STACK_LINE(273)
		return ::openfl::display::BitmapData_obj::__new(this->width,this->height,this->transparent,null());
	}
	else{
		HX_STACK_LINE(277)
		::lime::graphics::Image _g = this->__image->clone();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(277)
		return ::openfl::display::BitmapData_obj::fromImage(_g,this->transparent);
	}
	HX_STACK_LINE(271)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapData_obj,clone,return )

Void BitmapData_obj::colorTransform( ::openfl::geom::Rectangle rect,::openfl::geom::ColorTransform colorTransform){
{
		HX_STACK_FRAME("openfl.display.BitmapData","colorTransform",0xbfe3e8f4,"openfl.display.BitmapData.colorTransform","openfl/display/BitmapData.hx",291,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(rect,"rect")
		HX_STACK_ARG(colorTransform,"colorTransform")
		HX_STACK_LINE(293)
		if ((!(this->__isValid))){
			HX_STACK_LINE(293)
			return null();
		}
		HX_STACK_LINE(295)
		::lime::math::Rectangle _g = rect->__toLimeRectangle();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(295)
		::lime::utils::Float32Array _g1 = colorTransform->__toLimeColorMatrix();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(295)
		this->__image->colorTransform(_g,_g1);
		HX_STACK_LINE(296)
		this->__usingFramebuffer = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(BitmapData_obj,colorTransform,(void))

Void BitmapData_obj::copyChannel( ::openfl::display::BitmapData sourceBitmapData,::openfl::geom::Rectangle sourceRect,::openfl::geom::Point destPoint,int sourceChannel,int destChannel){
{
		HX_STACK_FRAME("openfl.display.BitmapData","copyChannel",0x5d702b43,"openfl.display.BitmapData.copyChannel","openfl/display/BitmapData.hx",344,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(sourceBitmapData,"sourceBitmapData")
		HX_STACK_ARG(sourceRect,"sourceRect")
		HX_STACK_ARG(destPoint,"destPoint")
		HX_STACK_ARG(sourceChannel,"sourceChannel")
		HX_STACK_ARG(destChannel,"destChannel")
		HX_STACK_LINE(346)
		if ((!(this->__isValid))){
			HX_STACK_LINE(346)
			return null();
		}
		HX_STACK_LINE(348)
		::lime::graphics::ImageChannel sourceChannel1;		HX_STACK_VAR(sourceChannel1,"sourceChannel1");
		HX_STACK_LINE(348)
		switch( (int)(sourceChannel)){
			case (int)1: {
				HX_STACK_LINE(350)
				sourceChannel1 = ::lime::graphics::ImageChannel_obj::RED;
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(351)
				sourceChannel1 = ::lime::graphics::ImageChannel_obj::GREEN;
			}
			;break;
			case (int)4: {
				HX_STACK_LINE(352)
				sourceChannel1 = ::lime::graphics::ImageChannel_obj::BLUE;
			}
			;break;
			case (int)8: {
				HX_STACK_LINE(353)
				sourceChannel1 = ::lime::graphics::ImageChannel_obj::ALPHA;
			}
			;break;
			default: {
				HX_STACK_LINE(354)
				return null();
			}
		}
		HX_STACK_LINE(358)
		::lime::graphics::ImageChannel destChannel1;		HX_STACK_VAR(destChannel1,"destChannel1");
		HX_STACK_LINE(358)
		switch( (int)(destChannel)){
			case (int)1: {
				HX_STACK_LINE(360)
				destChannel1 = ::lime::graphics::ImageChannel_obj::RED;
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(361)
				destChannel1 = ::lime::graphics::ImageChannel_obj::GREEN;
			}
			;break;
			case (int)4: {
				HX_STACK_LINE(362)
				destChannel1 = ::lime::graphics::ImageChannel_obj::BLUE;
			}
			;break;
			case (int)8: {
				HX_STACK_LINE(363)
				destChannel1 = ::lime::graphics::ImageChannel_obj::ALPHA;
			}
			;break;
			default: {
				HX_STACK_LINE(364)
				return null();
			}
		}
		HX_STACK_LINE(368)
		::lime::math::Rectangle _g = sourceRect->__toLimeRectangle();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(368)
		::lime::math::Vector2 _g1 = destPoint->__toLimeVector2();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(368)
		this->__image->copyChannel(sourceBitmapData->__image,_g,_g1,sourceChannel1,destChannel1);
		HX_STACK_LINE(369)
		this->__usingFramebuffer = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(BitmapData_obj,copyChannel,(void))

Void BitmapData_obj::copyPixels( ::openfl::display::BitmapData sourceBitmapData,::openfl::geom::Rectangle sourceRect,::openfl::geom::Point destPoint,::openfl::display::BitmapData alphaBitmapData,::openfl::geom::Point alphaPoint,hx::Null< bool >  __o_mergeAlpha){
bool mergeAlpha = __o_mergeAlpha.Default(false);
	HX_STACK_FRAME("openfl.display.BitmapData","copyPixels",0x385c94ad,"openfl.display.BitmapData.copyPixels","openfl/display/BitmapData.hx",413,0xdd12d5b9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(sourceBitmapData,"sourceBitmapData")
	HX_STACK_ARG(sourceRect,"sourceRect")
	HX_STACK_ARG(destPoint,"destPoint")
	HX_STACK_ARG(alphaBitmapData,"alphaBitmapData")
	HX_STACK_ARG(alphaPoint,"alphaPoint")
	HX_STACK_ARG(mergeAlpha,"mergeAlpha")
{
		HX_STACK_LINE(415)
		if (((bool(!(this->__isValid)) || bool((sourceBitmapData == null()))))){
			HX_STACK_LINE(415)
			return null();
		}
		HX_STACK_LINE(417)
		::lime::math::Rectangle _g = sourceRect->__toLimeRectangle();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(417)
		::lime::math::Vector2 _g1 = destPoint->__toLimeVector2();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(417)
		::lime::math::Vector2 _g2;		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(417)
		if (((alphaPoint != null()))){
			HX_STACK_LINE(417)
			_g2 = alphaPoint->__toLimeVector2();
		}
		else{
			HX_STACK_LINE(417)
			_g2 = null();
		}
		HX_STACK_LINE(417)
		this->__image->copyPixels(sourceBitmapData->__image,_g,_g1,(  (((alphaBitmapData != null()))) ? ::lime::graphics::Image(alphaBitmapData->__image) : ::lime::graphics::Image(null()) ),_g2,mergeAlpha);
		HX_STACK_LINE(418)
		this->__usingFramebuffer = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(BitmapData_obj,copyPixels,(void))

Void BitmapData_obj::dispose( ){
{
		HX_STACK_FRAME("openfl.display.BitmapData","dispose",0x8eb5efd4,"openfl.display.BitmapData.dispose","openfl/display/BitmapData.hx",442,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_LINE(444)
		this->__image = null();
		HX_STACK_LINE(446)
		this->width = (int)0;
		HX_STACK_LINE(447)
		this->height = (int)0;
		HX_STACK_LINE(448)
		this->rect = null();
		HX_STACK_LINE(449)
		this->__isValid = false;
		HX_STACK_LINE(451)
		if (((this->__texture != null()))){
			HX_STACK_LINE(453)
			::openfl::_internal::renderer::AbstractRenderer renderer = ::openfl::Lib_obj::current->stage->__renderer;		HX_STACK_VAR(renderer,"renderer");
			HX_STACK_LINE(455)
			if (((renderer != null()))){
				HX_STACK_LINE(457)
				::openfl::_internal::renderer::RenderSession renderSession = renderer->renderSession;		HX_STACK_VAR(renderSession,"renderSession");
				HX_STACK_LINE(458)
				::lime::graphics::GLRenderContext gl = renderSession->gl;		HX_STACK_VAR(gl,"gl");
				HX_STACK_LINE(460)
				if (((gl != null()))){
					HX_STACK_LINE(462)
					::lime::graphics::opengl::GLTexture texture = this->__texture;		HX_STACK_VAR(texture,"texture");
					HX_STACK_LINE(462)
					{
						HX_STACK_LINE(462)
						::lime::graphics::opengl::GL_obj::lime_gl_delete_texture(texture->id);
						HX_STACK_LINE(462)
						texture->invalidate();
					}
				}
			}
		}
		HX_STACK_LINE(470)
		if (((this->__framebuffer != null()))){
			HX_STACK_LINE(472)
			this->__framebuffer->destroy();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapData_obj,dispose,(void))

Void BitmapData_obj::draw( ::openfl::display::IBitmapDrawable source,::openfl::geom::Matrix matrix,::openfl::geom::ColorTransform colorTransform,::openfl::display::BlendMode blendMode,::openfl::geom::Rectangle clipRect,hx::Null< bool >  __o_smoothing){
bool smoothing = __o_smoothing.Default(false);
	HX_STACK_FRAME("openfl.display.BitmapData","draw",0xf1a859af,"openfl.display.BitmapData.draw","openfl/display/BitmapData.hx",551,0xdd12d5b9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(source,"source")
	HX_STACK_ARG(matrix,"matrix")
	HX_STACK_ARG(colorTransform,"colorTransform")
	HX_STACK_ARG(blendMode,"blendMode")
	HX_STACK_ARG(clipRect,"clipRect")
	HX_STACK_ARG(smoothing,"smoothing")
{
		HX_STACK_LINE(553)
		if ((!(this->__isValid))){
			HX_STACK_LINE(553)
			return null();
		}
		HX_STACK_LINE(555)
		{
			HX_STACK_LINE(555)
			::lime::graphics::ImageType _g = this->__image->type;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(555)
			switch( (int)(_g->__Index())){
				case (int)0: {
					HX_STACK_LINE(559)
					::lime::graphics::utils::ImageCanvasUtil_obj::convertToCanvas(this->__image);
					HX_STACK_LINE(560)
					::lime::graphics::utils::ImageCanvasUtil_obj::sync(this->__image);
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(598)
					::openfl::_internal::renderer::RenderSession renderSession = ::openfl::Lib_obj::current->stage->__renderer->renderSession;		HX_STACK_VAR(renderSession,"renderSession");
					HX_STACK_LINE(599)
					this->__drawGL(renderSession,this->width,this->height,source,matrix,colorTransform,blendMode,clipRect,smoothing,!(this->__usingFramebuffer),false,true);
				}
				;break;
				default: {
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(BitmapData_obj,draw,(void))

::lime::utils::ByteArray BitmapData_obj::encode( ::openfl::geom::Rectangle rect,Dynamic compressor,::lime::utils::ByteArray byteArray){
	HX_STACK_FRAME("openfl.display.BitmapData","encode",0x09c32081,"openfl.display.BitmapData.encode","openfl/display/BitmapData.hx",611,0xdd12d5b9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(rect,"rect")
	HX_STACK_ARG(compressor,"compressor")
	HX_STACK_ARG(byteArray,"byteArray")
	HX_STACK_LINE(615)
	if (((bool(!(this->__isValid)) || bool((rect == null()))))){
		HX_STACK_LINE(615)
		return byteArray = null();
	}
	HX_STACK_LINE(617)
	if ((::Std_obj::is(compressor,hx::ClassOf< ::openfl::display::PNGEncoderOptions >()))){
		HX_STACK_LINE(619)
		::lime::utils::ByteArray _g = this->__image->encode(HX_CSTRING("png"),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(619)
		return byteArray = _g;
	}
	else{
		HX_STACK_LINE(621)
		if ((::Std_obj::is(compressor,hx::ClassOf< ::openfl::display::JPEGEncoderOptions >()))){
			HX_STACK_LINE(623)
			::lime::utils::ByteArray _g1 = this->__image->encode(HX_CSTRING("jpg"),(hx::TCast< openfl::display::JPEGEncoderOptions >::cast(compressor))->quality);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(623)
			return byteArray = _g1;
		}
	}
	HX_STACK_LINE(627)
	return byteArray = null();
}


HX_DEFINE_DYNAMIC_FUNC3(BitmapData_obj,encode,return )

Void BitmapData_obj::fillRect( ::openfl::geom::Rectangle rect,int color){
{
		HX_STACK_FRAME("openfl.display.BitmapData","fillRect",0x95912472,"openfl.display.BitmapData.fillRect","openfl/display/BitmapData.hx",641,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(rect,"rect")
		HX_STACK_ARG(color,"color")
		HX_STACK_LINE(643)
		if (((bool(!(this->__isValid)) || bool((rect == null()))))){
			HX_STACK_LINE(643)
			return null();
		}
		HX_STACK_LINE(644)
		::lime::math::Rectangle _g = rect->__toLimeRectangle();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(644)
		this->__image->fillRect(_g,color,(int)1);
		HX_STACK_LINE(645)
		this->__usingFramebuffer = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(BitmapData_obj,fillRect,(void))

Void BitmapData_obj::floodFill( int x,int y,int color){
{
		HX_STACK_FRAME("openfl.display.BitmapData","floodFill",0xed95e9d6,"openfl.display.BitmapData.floodFill","openfl/display/BitmapData.hx",661,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(color,"color")
		HX_STACK_LINE(663)
		if ((!(this->__isValid))){
			HX_STACK_LINE(663)
			return null();
		}
		HX_STACK_LINE(664)
		this->__image->floodFill(x,y,color,(int)1);
		HX_STACK_LINE(665)
		this->__usingFramebuffer = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(BitmapData_obj,floodFill,(void))

::openfl::geom::Rectangle BitmapData_obj::generateFilterRect( ::openfl::geom::Rectangle sourceRect,::openfl::filters::BitmapFilter filter){
	HX_STACK_FRAME("openfl.display.BitmapData","generateFilterRect",0x1ef8cf7c,"openfl.display.BitmapData.generateFilterRect","openfl/display/BitmapData.hx",748,0xdd12d5b9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(sourceRect,"sourceRect")
	HX_STACK_ARG(filter,"filter")
	HX_STACK_LINE(748)
	return sourceRect->clone();
}


HX_DEFINE_DYNAMIC_FUNC2(BitmapData_obj,generateFilterRect,return )

::lime::graphics::opengl::GLBuffer BitmapData_obj::getBuffer( ::lime::graphics::GLRenderContext gl){
	HX_STACK_FRAME("openfl.display.BitmapData","getBuffer",0xe0f6acab,"openfl.display.BitmapData.getBuffer","openfl/display/BitmapData.hx",753,0xdd12d5b9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(gl,"gl")
	HX_STACK_LINE(755)
	if (((this->__buffer == null()))){
		HX_STACK_LINE(757)
		Array< int > data = Array_obj< int >::__new().Add(this->width).Add(this->height).Add((int)0).Add((int)1).Add((int)1).Add((int)0).Add(this->height).Add((int)0).Add((int)0).Add((int)1).Add(this->width).Add((int)0).Add((int)0).Add((int)1).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0);		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(766)
		int _g = ::lime::graphics::opengl::GL_obj::get_version();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(766)
		Dynamic _g1 = ::lime::graphics::opengl::GL_obj::lime_gl_create_buffer();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(766)
		::lime::graphics::opengl::GLBuffer _g2 = ::lime::graphics::opengl::GLBuffer_obj::__new(_g,_g1);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(766)
		this->__buffer = _g2;
		HX_STACK_LINE(767)
		{
			HX_STACK_LINE(767)
			::lime::graphics::opengl::GLBuffer buffer = this->__buffer;		HX_STACK_VAR(buffer,"buffer");
			HX_STACK_LINE(767)
			::lime::graphics::opengl::GL_obj::lime_gl_bind_buffer(gl->ARRAY_BUFFER,(  (((buffer == null()))) ? int((int)0) : int(buffer->id) ));
		}
		HX_STACK_LINE(768)
		{
			HX_STACK_LINE(768)
			::lime::utils::ArrayBufferView data1 = ::lime::utils::Float32Array_obj::__new(data,null(),null());		HX_STACK_VAR(data1,"data1");
			HX_STACK_LINE(768)
			{
				HX_STACK_LINE(768)
				::lime::utils::ByteArray _g3 = data1->getByteBuffer();		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(768)
				int _g4 = data1->getStart();		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(768)
				int _g5 = data1->getLength();		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(768)
				::lime::graphics::opengl::GL_obj::lime_gl_buffer_data(gl->ARRAY_BUFFER,_g3,_g4,_g5,gl->STATIC_DRAW);
			}
		}
		HX_STACK_LINE(769)
		::lime::graphics::opengl::GL_obj::lime_gl_bind_buffer(gl->ARRAY_BUFFER,(int)0);
	}
	HX_STACK_LINE(773)
	return this->__buffer;
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,getBuffer,return )

::openfl::geom::Rectangle BitmapData_obj::getColorBoundsRect( int mask,int color,hx::Null< bool >  __o_findColor){
bool findColor = __o_findColor.Default(true);
	HX_STACK_FRAME("openfl.display.BitmapData","getColorBoundsRect",0x21495071,"openfl.display.BitmapData.getColorBoundsRect","openfl/display/BitmapData.hx",812,0xdd12d5b9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(mask,"mask")
	HX_STACK_ARG(color,"color")
	HX_STACK_ARG(findColor,"findColor")
{
		HX_STACK_LINE(814)
		if ((!(this->__isValid))){
			HX_STACK_LINE(814)
			return ::openfl::geom::Rectangle_obj::__new((int)0,(int)0,this->width,this->height);
		}
		HX_STACK_LINE(815)
		::lime::math::Rectangle rect = this->__image->getColorBoundsRect(mask,color,findColor,null());		HX_STACK_VAR(rect,"rect");
		HX_STACK_LINE(816)
		return ::openfl::geom::Rectangle_obj::__new(rect->x,rect->y,rect->width,rect->height);
	}
}


HX_DEFINE_DYNAMIC_FUNC3(BitmapData_obj,getColorBoundsRect,return )

int BitmapData_obj::getPixel( int x,int y){
	HX_STACK_FRAME("openfl.display.BitmapData","getPixel",0x4b52b53b,"openfl.display.BitmapData.getPixel","openfl/display/BitmapData.hx",844,0xdd12d5b9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_LINE(846)
	if ((!(this->__isValid))){
		HX_STACK_LINE(846)
		return (int)0;
	}
	HX_STACK_LINE(847)
	return this->__image->getPixel(x,y,(int)1);
}


HX_DEFINE_DYNAMIC_FUNC2(BitmapData_obj,getPixel,return )

int BitmapData_obj::getPixel32( int x,int y){
	HX_STACK_FRAME("openfl.display.BitmapData","getPixel32",0xcd56e69a,"openfl.display.BitmapData.getPixel32","openfl/display/BitmapData.hx",874,0xdd12d5b9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_LINE(876)
	if ((!(this->__isValid))){
		HX_STACK_LINE(876)
		return (int)0;
	}
	HX_STACK_LINE(877)
	return this->__image->getPixel32(x,y,(int)1);
}


HX_DEFINE_DYNAMIC_FUNC2(BitmapData_obj,getPixel32,return )

::lime::utils::ByteArray BitmapData_obj::getPixels( ::openfl::geom::Rectangle rect){
	HX_STACK_FRAME("openfl.display.BitmapData","getPixels",0x9d0bded8,"openfl.display.BitmapData.getPixels","openfl/display/BitmapData.hx",891,0xdd12d5b9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(rect,"rect")
	HX_STACK_LINE(893)
	if ((!(this->__isValid))){
		HX_STACK_LINE(893)
		return null();
	}
	HX_STACK_LINE(894)
	if (((rect == null()))){
		HX_STACK_LINE(894)
		rect = this->rect;
	}
	HX_STACK_LINE(895)
	::lime::math::Rectangle _g = rect->__toLimeRectangle();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(895)
	return this->__image->getPixels(_g,(int)1);
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,getPixels,return )

Dynamic BitmapData_obj::getSurface( hx::Null< bool >  __o_clone){
bool clone = __o_clone.Default(true);
	HX_STACK_FRAME("openfl.display.BitmapData","getSurface",0xa2992c22,"openfl.display.BitmapData.getSurface","openfl/display/BitmapData.hx",900,0xdd12d5b9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(clone,"clone")
{
		HX_STACK_LINE(902)
		if ((!(this->__isValid))){
			HX_STACK_LINE(902)
			return null();
		}
		HX_STACK_LINE(904)
		if (((this->__surface == null()))){
			HX_STACK_LINE(906)
			this->__image->dirty = true;
		}
		HX_STACK_LINE(910)
		if (((bool((this->__image != null())) && bool(this->__image->dirty)))){
			HX_STACK_LINE(912)
			if (((this->__surface != null()))){
				HX_STACK_LINE(914)
				::lime::graphics::cairo::_CairoSurface::CairoSurface_Impl__obj::destroy(this->__surface);
			}
			HX_STACK_LINE(918)
			if ((clone)){
				HX_STACK_LINE(920)
				::lime::graphics::Image _g = this->__image->clone();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(920)
				this->__surfaceImage = _g;
			}
			else{
				HX_STACK_LINE(924)
				this->__surfaceImage = this->__image;
			}
			HX_STACK_LINE(928)
			this->__surfaceImage->set_format((int)2);
			HX_STACK_LINE(929)
			this->__surfaceImage->set_premultiplied(true);
			HX_STACK_LINE(930)
			Dynamic _g1 = ::lime::graphics::cairo::_CairoSurface::CairoSurface_Impl__obj::fromImage(this->__surfaceImage);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(930)
			this->__surface = _g1;
			HX_STACK_LINE(931)
			this->__image->dirty = false;
		}
		HX_STACK_LINE(935)
		return this->__surface;
	}
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,getSurface,return )

::lime::graphics::opengl::GLTexture BitmapData_obj::getTexture( ::lime::graphics::GLRenderContext gl){
	HX_STACK_FRAME("openfl.display.BitmapData","getTexture",0xe4308ed0,"openfl.display.BitmapData.getTexture","openfl/display/BitmapData.hx",940,0xdd12d5b9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(gl,"gl")
	HX_STACK_LINE(942)
	if ((!(this->__isValid))){
		HX_STACK_LINE(942)
		return null();
	}
	HX_STACK_LINE(944)
	if (((bool(this->__usingFramebuffer) && bool((this->__framebuffer != null()))))){
		HX_STACK_LINE(945)
		return this->__framebuffer->texture;
	}
	HX_STACK_LINE(948)
	if (((this->__texture == null()))){
		HX_STACK_LINE(950)
		int _g = ::lime::graphics::opengl::GL_obj::get_version();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(950)
		Dynamic _g1 = ::lime::graphics::opengl::GL_obj::lime_gl_create_texture();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(950)
		::lime::graphics::opengl::GLTexture _g2 = ::lime::graphics::opengl::GLTexture_obj::__new(_g,_g1);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(950)
		this->__texture = _g2;
		HX_STACK_LINE(951)
		{
			HX_STACK_LINE(951)
			::lime::graphics::opengl::GLTexture texture = this->__texture;		HX_STACK_VAR(texture,"texture");
			HX_STACK_LINE(951)
			::lime::graphics::opengl::GL_obj::lime_gl_bind_texture(gl->TEXTURE_2D,(  (((texture == null()))) ? int((int)0) : int(texture->id) ));
		}
		HX_STACK_LINE(952)
		::lime::graphics::opengl::GL_obj::lime_gl_tex_parameteri(gl->TEXTURE_2D,gl->TEXTURE_WRAP_S,gl->CLAMP_TO_EDGE);
		HX_STACK_LINE(953)
		::lime::graphics::opengl::GL_obj::lime_gl_tex_parameteri(gl->TEXTURE_2D,gl->TEXTURE_WRAP_T,gl->CLAMP_TO_EDGE);
		HX_STACK_LINE(954)
		::lime::graphics::opengl::GL_obj::lime_gl_tex_parameteri(gl->TEXTURE_2D,gl->TEXTURE_MAG_FILTER,gl->NEAREST);
		HX_STACK_LINE(955)
		::lime::graphics::opengl::GL_obj::lime_gl_tex_parameteri(gl->TEXTURE_2D,gl->TEXTURE_MIN_FILTER,gl->NEAREST);
		HX_STACK_LINE(956)
		this->__image->dirty = true;
	}
	HX_STACK_LINE(960)
	if (((bool((this->__image != null())) && bool(this->__image->dirty)))){
		HX_STACK_LINE(962)
		int internalFormat;		HX_STACK_VAR(internalFormat,"internalFormat");
		HX_STACK_LINE(962)
		if (((this->__image->buffer->bitsPerPixel == (int)1))){
			HX_STACK_LINE(962)
			internalFormat = gl->ALPHA;
		}
		else{
			HX_STACK_LINE(962)
			internalFormat = gl->RGBA;
		}
		HX_STACK_LINE(963)
		int format = internalFormat;		HX_STACK_VAR(format,"format");
		HX_STACK_LINE(964)
		{
			HX_STACK_LINE(964)
			::lime::graphics::opengl::GLTexture texture = this->__texture;		HX_STACK_VAR(texture,"texture");
			HX_STACK_LINE(964)
			::lime::graphics::opengl::GL_obj::lime_gl_bind_texture(gl->TEXTURE_2D,(  (((texture == null()))) ? int((int)0) : int(texture->id) ));
		}
		HX_STACK_LINE(965)
		::lime::graphics::Image textureImage = this->__image;		HX_STACK_VAR(textureImage,"textureImage");
		HX_STACK_LINE(967)
		if ((this->__bgra)){
			HX_STACK_LINE(971)
			if (((::openfl::display::BitmapData_obj::__supportsBGRA == null()))){
				HX_STACK_LINE(973)
				Array< ::String > _g3;		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(973)
				{
					HX_STACK_LINE(973)
					Array< ::String > result = Array_obj< ::String >::__new();		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(973)
					::lime::graphics::opengl::GL_obj::lime_gl_get_supported_extensions(result);
					HX_STACK_LINE(973)
					_g3 = result;
				}
				HX_STACK_LINE(973)
				bool _g4 = ::Lambda_obj::has(_g3,HX_CSTRING("GL_EXT_bgra"));		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(973)
				::openfl::display::BitmapData_obj::__supportsBGRA = _g4;
			}
			HX_STACK_LINE(978)
			if ((::openfl::display::BitmapData_obj::__supportsBGRA)){
				HX_STACK_LINE(980)
				format = gl->BGRA_EXT;
			}
			else{
				HX_STACK_LINE(986)
				::lime::graphics::Image _g5 = ::lime::graphics::Image_obj::__new(null(),(int)0,(int)0,this->__image->width,this->__image->height,null(),null());		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(986)
				textureImage = _g5;
				HX_STACK_LINE(987)
				::lime::math::Rectangle rect = ::lime::math::Rectangle_obj::__new((int)0,(int)0,this->__image->width,this->__image->height);		HX_STACK_VAR(rect,"rect");
				HX_STACK_LINE(988)
				::lime::math::Vector2 point = ::lime::math::Vector2_obj::__new((int)0,(int)0);		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(990)
				textureImage->copyChannel(this->__image,rect,point,::lime::graphics::ImageChannel_obj::RED,::lime::graphics::ImageChannel_obj::BLUE);
				HX_STACK_LINE(991)
				textureImage->copyChannel(this->__image,rect,point,::lime::graphics::ImageChannel_obj::GREEN,::lime::graphics::ImageChannel_obj::GREEN);
				HX_STACK_LINE(992)
				textureImage->copyChannel(this->__image,rect,point,::lime::graphics::ImageChannel_obj::BLUE,::lime::graphics::ImageChannel_obj::RED);
				HX_STACK_LINE(993)
				textureImage->copyChannel(this->__image,rect,point,::lime::graphics::ImageChannel_obj::ALPHA,::lime::graphics::ImageChannel_obj::ALPHA);
			}
		}
		HX_STACK_LINE(999)
		if (((  ((!(textureImage->get_premultiplied()))) ? bool(textureImage->get_transparent()) : bool(false) ))){
			HX_STACK_LINE(1001)
			::lime::graphics::Image _g6 = textureImage->clone();		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(1001)
			textureImage = _g6;
			HX_STACK_LINE(1002)
			textureImage->set_premultiplied(true);
		}
		HX_STACK_LINE(1006)
		{
			HX_STACK_LINE(1006)
			::lime::utils::ArrayBufferView pixels = textureImage->get_data();		HX_STACK_VAR(pixels,"pixels");
			HX_STACK_LINE(1006)
			{
				HX_STACK_LINE(1006)
				::lime::utils::ByteArray _g7;		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(1006)
				if (((pixels == null()))){
					HX_STACK_LINE(1006)
					_g7 = null();
				}
				else{
					HX_STACK_LINE(1006)
					_g7 = pixels->getByteBuffer();
				}
				HX_STACK_LINE(1006)
				Dynamic _g8;		HX_STACK_VAR(_g8,"_g8");
				HX_STACK_LINE(1006)
				if (((pixels == null()))){
					HX_STACK_LINE(1006)
					_g8 = null();
				}
				else{
					HX_STACK_LINE(1006)
					_g8 = pixels->getStart();
				}
				HX_STACK_LINE(1006)
				::lime::graphics::opengl::GL_obj::lime_gl_tex_image_2d(gl->TEXTURE_2D,(int)0,internalFormat,this->width,this->height,(int)0,format,gl->UNSIGNED_BYTE,_g7,_g8);
			}
		}
		HX_STACK_LINE(1007)
		::lime::graphics::opengl::GL_obj::lime_gl_bind_texture(gl->TEXTURE_2D,(int)0);
		HX_STACK_LINE(1008)
		this->__image->dirty = false;
	}
	HX_STACK_LINE(1012)
	return this->__texture;
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,getTexture,return )

Array< int > BitmapData_obj::getVector( ::openfl::geom::Rectangle rect){
	HX_STACK_FRAME("openfl.display.BitmapData","getVector",0xa7bfa06e,"openfl.display.BitmapData.getVector","openfl/display/BitmapData.hx",1026,0xdd12d5b9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(rect,"rect")
	HX_STACK_LINE(1028)
	::lime::utils::ByteArray pixels = this->getPixels(rect);		HX_STACK_VAR(pixels,"pixels");
	HX_STACK_LINE(1029)
	int length = ::Std_obj::_int((Float(pixels->length) / Float((int)4)));		HX_STACK_VAR(length,"length");
	HX_STACK_LINE(1030)
	Array< int > result;		HX_STACK_VAR(result,"result");
	struct _Function_1_1{
		inline static Array< int > Block( int &length){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/display/BitmapData.hx",1030,0xdd12d5b9)
			{
				HX_STACK_LINE(1030)
				Array< int > this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(1030)
				Array< int > _g = Array_obj< int >::__new()->__SetSizeExact(length);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(1030)
				this1 = _g;
				HX_STACK_LINE(1030)
				return this1;
			}
			return null();
		}
	};
	HX_STACK_LINE(1030)
	result = _Function_1_1::Block(length);
	HX_STACK_LINE(1032)
	{
		HX_STACK_LINE(1032)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1032)
		while((true)){
			HX_STACK_LINE(1032)
			if ((!(((_g < length))))){
				HX_STACK_LINE(1032)
				break;
			}
			HX_STACK_LINE(1032)
			int i = (_g)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(1034)
			{
				HX_STACK_LINE(1034)
				int value = pixels->readUnsignedInt();		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(1034)
				result[i] = value;
			}
		}
	}
	HX_STACK_LINE(1038)
	return result;
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,getVector,return )

Array< ::Dynamic > BitmapData_obj::histogram( ::openfl::geom::Rectangle hRect){
	HX_STACK_FRAME("openfl.display.BitmapData","histogram",0xf93f4519,"openfl.display.BitmapData.histogram","openfl/display/BitmapData.hx",1043,0xdd12d5b9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(hRect,"hRect")
	HX_STACK_LINE(1045)
	::openfl::geom::Rectangle rect;		HX_STACK_VAR(rect,"rect");
	HX_STACK_LINE(1045)
	if (((hRect != null()))){
		HX_STACK_LINE(1045)
		rect = hRect;
	}
	else{
		HX_STACK_LINE(1045)
		rect = ::openfl::geom::Rectangle_obj::__new((int)0,(int)0,this->width,this->height);
	}
	HX_STACK_LINE(1046)
	::lime::utils::ByteArray pixels = this->getPixels(rect);		HX_STACK_VAR(pixels,"pixels");
	HX_STACK_LINE(1047)
	Array< ::Dynamic > result;		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(1047)
	{
		HX_STACK_LINE(1047)
		Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1047)
		{
			HX_STACK_LINE(1047)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(1047)
			while((true)){
				HX_STACK_LINE(1047)
				if ((!(((_g1 < (int)4))))){
					HX_STACK_LINE(1047)
					break;
				}
				HX_STACK_LINE(1047)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(1047)
				Array< int > _g2;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(1047)
				{
					HX_STACK_LINE(1047)
					Array< int > _g21 = Array_obj< int >::__new();		HX_STACK_VAR(_g21,"_g21");
					HX_STACK_LINE(1047)
					{
						HX_STACK_LINE(1047)
						int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
						HX_STACK_LINE(1047)
						while((true)){
							HX_STACK_LINE(1047)
							if ((!(((_g3 < (int)256))))){
								HX_STACK_LINE(1047)
								break;
							}
							HX_STACK_LINE(1047)
							int j = (_g3)++;		HX_STACK_VAR(j,"j");
							HX_STACK_LINE(1047)
							_g21->push((int)0);
						}
					}
					HX_STACK_LINE(1047)
					_g2 = _g21;
				}
				HX_STACK_LINE(1047)
				_g->push(_g2);
			}
		}
		HX_STACK_LINE(1047)
		result = _g;
	}
	HX_STACK_LINE(1049)
	{
		HX_STACK_LINE(1049)
		int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(1049)
		int _g1 = pixels->length;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(1049)
		while((true)){
			HX_STACK_LINE(1049)
			if ((!(((_g2 < _g1))))){
				HX_STACK_LINE(1049)
				break;
			}
			HX_STACK_LINE(1049)
			int i = (_g2)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(1051)
			int _g11;		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(1051)
			if (((pixels->position < pixels->length))){
				HX_STACK_LINE(1051)
				int pos = (pixels->position)++;		HX_STACK_VAR(pos,"pos");
				HX_STACK_LINE(1051)
				_g11 = pixels->b->__get(pos);
			}
			else{
				HX_STACK_LINE(1051)
				_g11 = pixels->ThrowEOFi();
			}
			HX_STACK_LINE(1051)
			++(result->__get(hx::Mod(i,(int)4)).StaticCast< Array< int > >()[_g11]);
		}
	}
	HX_STACK_LINE(1055)
	return result;
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,histogram,return )

bool BitmapData_obj::hitTest( ::openfl::geom::Point firstPoint,int firstAlphaThreshold,Dynamic secondObject,::openfl::geom::Point secondBitmapDataPoint,hx::Null< int >  __o_secondAlphaThreshold){
int secondAlphaThreshold = __o_secondAlphaThreshold.Default(1);
	HX_STACK_FRAME("openfl.display.BitmapData","hitTest",0xb5e8cf7a,"openfl.display.BitmapData.hitTest","openfl/display/BitmapData.hx",1060,0xdd12d5b9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(firstPoint,"firstPoint")
	HX_STACK_ARG(firstAlphaThreshold,"firstAlphaThreshold")
	HX_STACK_ARG(secondObject,"secondObject")
	HX_STACK_ARG(secondBitmapDataPoint,"secondBitmapDataPoint")
	HX_STACK_ARG(secondAlphaThreshold,"secondAlphaThreshold")
{
		HX_STACK_LINE(1062)
		if ((!(this->__isValid))){
			HX_STACK_LINE(1062)
			return false;
		}
		HX_STACK_LINE(1064)
		::openfl::Lib_obj::notImplemented(HX_CSTRING("BitmapData.hitTest"));
		HX_STACK_LINE(1066)
		return false;
	}
}


HX_DEFINE_DYNAMIC_FUNC5(BitmapData_obj,hitTest,return )

Void BitmapData_obj::lock( ){
{
		HX_STACK_FRAME("openfl.display.BitmapData","lock",0xf6efc996,"openfl.display.BitmapData.lock","openfl/display/BitmapData.hx",1079,0xdd12d5b9)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapData_obj,lock,(void))

Void BitmapData_obj::merge( ::openfl::display::BitmapData sourceBitmapData,::openfl::geom::Rectangle sourceRect,::openfl::geom::Point destPoint,int redMultiplier,int greenMultiplier,int blueMultiplier,int alphaMultiplier){
{
		HX_STACK_FRAME("openfl.display.BitmapData","merge",0xa7b66aad,"openfl.display.BitmapData.merge","openfl/display/BitmapData.hx",1086,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(sourceBitmapData,"sourceBitmapData")
		HX_STACK_ARG(sourceRect,"sourceRect")
		HX_STACK_ARG(destPoint,"destPoint")
		HX_STACK_ARG(redMultiplier,"redMultiplier")
		HX_STACK_ARG(greenMultiplier,"greenMultiplier")
		HX_STACK_ARG(blueMultiplier,"blueMultiplier")
		HX_STACK_ARG(alphaMultiplier,"alphaMultiplier")
		HX_STACK_LINE(1088)
		if (((bool((bool((bool((bool(!(this->__isValid)) || bool((sourceBitmapData == null())))) || bool(!(sourceBitmapData->__isValid)))) || bool((sourceRect == null())))) || bool((destPoint == null()))))){
			HX_STACK_LINE(1088)
			return null();
		}
		HX_STACK_LINE(1089)
		::lime::math::Rectangle _g = sourceRect->__toLimeRectangle();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1089)
		::lime::math::Vector2 _g1 = destPoint->__toLimeVector2();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(1089)
		this->__image->merge(sourceBitmapData->__image,_g,_g1,redMultiplier,greenMultiplier,blueMultiplier,alphaMultiplier);
		HX_STACK_LINE(1090)
		this->__usingFramebuffer = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC7(BitmapData_obj,merge,(void))

Void BitmapData_obj::noise( int randomSeed,hx::Null< int >  __o_low,hx::Null< int >  __o_high,hx::Null< int >  __o_channelOptions,hx::Null< bool >  __o_grayScale){
int low = __o_low.Default(0);
int high = __o_high.Default(255);
int channelOptions = __o_channelOptions.Default(7);
bool grayScale = __o_grayScale.Default(false);
	HX_STACK_FRAME("openfl.display.BitmapData","noise",0x41b2578f,"openfl.display.BitmapData.noise","openfl/display/BitmapData.hx",1123,0xdd12d5b9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(randomSeed,"randomSeed")
	HX_STACK_ARG(low,"low")
	HX_STACK_ARG(high,"high")
	HX_STACK_ARG(channelOptions,"channelOptions")
	HX_STACK_ARG(grayScale,"grayScale")
{
		HX_STACK_LINE(1125)
		if ((!(this->__isValid))){
			HX_STACK_LINE(1125)
			return null();
		}
		HX_STACK_LINE(1127)
		::openfl::Lib_obj::notImplemented(HX_CSTRING("BitmapData.noise"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(BitmapData_obj,noise,(void))

Void BitmapData_obj::paletteMap( ::openfl::display::BitmapData sourceBitmapData,::openfl::geom::Rectangle sourceRect,::openfl::geom::Point destPoint,Array< int > redArray,Array< int > greenArray,Array< int > blueArray,Array< int > alphaArray){
{
		HX_STACK_FRAME("openfl.display.BitmapData","paletteMap",0xfc19eecc,"openfl.display.BitmapData.paletteMap","openfl/display/BitmapData.hx",1132,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(sourceBitmapData,"sourceBitmapData")
		HX_STACK_ARG(sourceRect,"sourceRect")
		HX_STACK_ARG(destPoint,"destPoint")
		HX_STACK_ARG(redArray,"redArray")
		HX_STACK_ARG(greenArray,"greenArray")
		HX_STACK_ARG(blueArray,"blueArray")
		HX_STACK_ARG(alphaArray,"alphaArray")
		HX_STACK_LINE(1134)
		int sw = ::Std_obj::_int(sourceRect->width);		HX_STACK_VAR(sw,"sw");
		HX_STACK_LINE(1135)
		int sh = ::Std_obj::_int(sourceRect->height);		HX_STACK_VAR(sh,"sh");
		HX_STACK_LINE(1137)
		::lime::utils::ByteArray pixels = this->getPixels(sourceRect);		HX_STACK_VAR(pixels,"pixels");
		HX_STACK_LINE(1138)
		pixels->position = (int)0;
		HX_STACK_LINE(1140)
		int pixelValue;		HX_STACK_VAR(pixelValue,"pixelValue");
		HX_STACK_LINE(1140)
		int r;		HX_STACK_VAR(r,"r");
		HX_STACK_LINE(1140)
		int g;		HX_STACK_VAR(g,"g");
		HX_STACK_LINE(1140)
		int b;		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(1140)
		int a;		HX_STACK_VAR(a,"a");
		HX_STACK_LINE(1140)
		int color;		HX_STACK_VAR(color,"color");
		HX_STACK_LINE(1140)
		int c1;		HX_STACK_VAR(c1,"c1");
		HX_STACK_LINE(1140)
		int c2;		HX_STACK_VAR(c2,"c2");
		HX_STACK_LINE(1140)
		int c3;		HX_STACK_VAR(c3,"c3");
		HX_STACK_LINE(1140)
		int c4;		HX_STACK_VAR(c4,"c4");
		HX_STACK_LINE(1142)
		{
			HX_STACK_LINE(1142)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(1142)
			int _g = (sh * sw);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1142)
			while((true)){
				HX_STACK_LINE(1142)
				if ((!(((_g1 < _g))))){
					HX_STACK_LINE(1142)
					break;
				}
				HX_STACK_LINE(1142)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(1144)
				int _g2 = pixels->readUnsignedInt();		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(1144)
				pixelValue = _g2;
				HX_STACK_LINE(1146)
				if (((alphaArray == null()))){
					HX_STACK_LINE(1146)
					c1 = (int(pixelValue) & int((int)-16777216));
				}
				else{
					HX_STACK_LINE(1146)
					c1 = alphaArray->__get((int((int(pixelValue) >> int((int)24))) & int((int)255)));
				}
				HX_STACK_LINE(1147)
				if (((redArray == null()))){
					HX_STACK_LINE(1147)
					c2 = (int(pixelValue) & int((int)16711680));
				}
				else{
					HX_STACK_LINE(1147)
					c2 = redArray->__get((int((int(pixelValue) >> int((int)16))) & int((int)255)));
				}
				HX_STACK_LINE(1148)
				if (((greenArray == null()))){
					HX_STACK_LINE(1148)
					c3 = (int(pixelValue) & int((int)65280));
				}
				else{
					HX_STACK_LINE(1148)
					c3 = greenArray->__get((int((int(pixelValue) >> int((int)8))) & int((int)255)));
				}
				HX_STACK_LINE(1149)
				if (((blueArray == null()))){
					HX_STACK_LINE(1149)
					c4 = (int(pixelValue) & int((int)255));
				}
				else{
					HX_STACK_LINE(1149)
					c4 = blueArray->__get((int(pixelValue) & int((int)255)));
				}
				HX_STACK_LINE(1151)
				a = (((((int((int(c1) >> int((int)24))) & int((int)255))) + ((int((int(c2) >> int((int)24))) & int((int)255)))) + ((int((int(c3) >> int((int)24))) & int((int)255)))) + ((int((int(c4) >> int((int)24))) & int((int)255))));
				HX_STACK_LINE(1152)
				if (((a > (int)255))){
					HX_STACK_LINE(1152)
					(a == (int)255);
				}
				HX_STACK_LINE(1154)
				r = (((((int((int(c1) >> int((int)16))) & int((int)255))) + ((int((int(c2) >> int((int)16))) & int((int)255)))) + ((int((int(c3) >> int((int)16))) & int((int)255)))) + ((int((int(c4) >> int((int)16))) & int((int)255))));
				HX_STACK_LINE(1155)
				if (((r > (int)255))){
					HX_STACK_LINE(1155)
					(r == (int)255);
				}
				HX_STACK_LINE(1157)
				g = (((((int((int(c1) >> int((int)8))) & int((int)255))) + ((int((int(c2) >> int((int)8))) & int((int)255)))) + ((int((int(c3) >> int((int)8))) & int((int)255)))) + ((int((int(c4) >> int((int)8))) & int((int)255))));
				HX_STACK_LINE(1158)
				if (((g > (int)255))){
					HX_STACK_LINE(1158)
					(g == (int)255);
				}
				HX_STACK_LINE(1160)
				b = (((((int(c1) & int((int)255))) + ((int(c2) & int((int)255)))) + ((int(c3) & int((int)255)))) + ((int(c4) & int((int)255))));
				HX_STACK_LINE(1161)
				if (((b > (int)255))){
					HX_STACK_LINE(1161)
					(b == (int)255);
				}
				HX_STACK_LINE(1163)
				color = (int((int((int((int(a) << int((int)24))) | int((int(r) << int((int)16))))) | int((int(g) << int((int)8))))) | int(b));
				HX_STACK_LINE(1165)
				pixels->position = (i * (int)4);
				HX_STACK_LINE(1166)
				pixels->writeUnsignedInt(color);
			}
		}
		HX_STACK_LINE(1170)
		pixels->position = (int)0;
		HX_STACK_LINE(1171)
		::openfl::geom::Rectangle destRect = ::openfl::geom::Rectangle_obj::__new(destPoint->x,destPoint->y,sw,sh);		HX_STACK_VAR(destRect,"destRect");
		HX_STACK_LINE(1172)
		this->setPixels(destRect,pixels);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC7(BitmapData_obj,paletteMap,(void))

Void BitmapData_obj::perlinNoise( Float baseX,Float baseY,int numOctaves,int randomSeed,bool stitch,bool fractalNoise,hx::Null< int >  __o_channelOptions,hx::Null< bool >  __o_grayScale,Array< ::Dynamic > offsets){
int channelOptions = __o_channelOptions.Default(7);
bool grayScale = __o_grayScale.Default(false);
	HX_STACK_FRAME("openfl.display.BitmapData","perlinNoise",0xc682321b,"openfl.display.BitmapData.perlinNoise","openfl/display/BitmapData.hx",1245,0xdd12d5b9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(baseX,"baseX")
	HX_STACK_ARG(baseY,"baseY")
	HX_STACK_ARG(numOctaves,"numOctaves")
	HX_STACK_ARG(randomSeed,"randomSeed")
	HX_STACK_ARG(stitch,"stitch")
	HX_STACK_ARG(fractalNoise,"fractalNoise")
	HX_STACK_ARG(channelOptions,"channelOptions")
	HX_STACK_ARG(grayScale,"grayScale")
	HX_STACK_ARG(offsets,"offsets")
{
		HX_STACK_LINE(1245)
		::openfl::Lib_obj::notImplemented(HX_CSTRING("BitmapData.perlinNoise"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC9(BitmapData_obj,perlinNoise,(void))

Void BitmapData_obj::scroll( int x,int y){
{
		HX_STACK_FRAME("openfl.display.BitmapData","scroll",0x57440678,"openfl.display.BitmapData.scroll","openfl/display/BitmapData.hx",1259,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(1259)
		::openfl::Lib_obj::notImplemented(HX_CSTRING("BitmapData.scroll"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(BitmapData_obj,scroll,(void))

Void BitmapData_obj::setPixel( int x,int y,int color){
{
		HX_STACK_FRAME("openfl.display.BitmapData","setPixel",0xf9b00eaf,"openfl.display.BitmapData.setPixel","openfl/display/BitmapData.hx",1281,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(color,"color")
		HX_STACK_LINE(1283)
		if ((!(this->__isValid))){
			HX_STACK_LINE(1283)
			return null();
		}
		HX_STACK_LINE(1284)
		this->__image->setPixel(x,y,color,(int)1);
		HX_STACK_LINE(1285)
		this->__usingFramebuffer = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(BitmapData_obj,setPixel,(void))

Void BitmapData_obj::setPixel32( int x,int y,int color){
{
		HX_STACK_FRAME("openfl.display.BitmapData","setPixel32",0xd0d4850e,"openfl.display.BitmapData.setPixel32","openfl/display/BitmapData.hx",1321,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(color,"color")
		HX_STACK_LINE(1323)
		if ((!(this->__isValid))){
			HX_STACK_LINE(1323)
			return null();
		}
		HX_STACK_LINE(1324)
		this->__image->setPixel32(x,y,color,(int)1);
		HX_STACK_LINE(1325)
		this->__usingFramebuffer = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(BitmapData_obj,setPixel32,(void))

Void BitmapData_obj::setPixels( ::openfl::geom::Rectangle rect,::lime::utils::ByteArray byteArray){
{
		HX_STACK_FRAME("openfl.display.BitmapData","setPixels",0x805ccae4,"openfl.display.BitmapData.setPixels","openfl/display/BitmapData.hx",1349,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(rect,"rect")
		HX_STACK_ARG(byteArray,"byteArray")
		HX_STACK_LINE(1351)
		if (((bool(!(this->__isValid)) || bool((rect == null()))))){
			HX_STACK_LINE(1351)
			return null();
		}
		HX_STACK_LINE(1352)
		::lime::math::Rectangle _g = rect->__toLimeRectangle();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1352)
		this->__image->setPixels(_g,byteArray,(int)1);
		HX_STACK_LINE(1353)
		this->__usingFramebuffer = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(BitmapData_obj,setPixels,(void))

Void BitmapData_obj::setVector( ::openfl::geom::Rectangle rect,Array< int > inputVector){
{
		HX_STACK_FRAME("openfl.display.BitmapData","setVector",0x8b108c7a,"openfl.display.BitmapData.setVector","openfl/display/BitmapData.hx",1367,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(rect,"rect")
		HX_STACK_ARG(inputVector,"inputVector")
		HX_STACK_LINE(1369)
		::lime::utils::ByteArray byteArray = ::lime::utils::ByteArray_obj::__new(null());		HX_STACK_VAR(byteArray,"byteArray");
		HX_STACK_LINE(1374)
		{
			HX_STACK_LINE(1374)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1374)
			while((true)){
				HX_STACK_LINE(1374)
				if ((!(((_g < inputVector->length))))){
					HX_STACK_LINE(1374)
					break;
				}
				HX_STACK_LINE(1374)
				Dynamic color = inputVector->__get(_g);		HX_STACK_VAR(color,"color");
				HX_STACK_LINE(1374)
				++(_g);
				HX_STACK_LINE(1376)
				byteArray->writeUnsignedInt(color);
			}
		}
		HX_STACK_LINE(1380)
		byteArray->position = (int)0;
		HX_STACK_LINE(1381)
		this->setPixels(rect,byteArray);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(BitmapData_obj,setVector,(void))

int BitmapData_obj::threshold( ::openfl::display::BitmapData sourceBitmapData,::openfl::geom::Rectangle sourceRect,::openfl::geom::Point destPoint,::String operation,int threshold,hx::Null< int >  __o_color,hx::Null< int >  __o_mask,hx::Null< bool >  __o_copySource){
int color = __o_color.Default(0);
int mask = __o_mask.Default(-1);
bool copySource = __o_copySource.Default(false);
	HX_STACK_FRAME("openfl.display.BitmapData","threshold",0xc8af2a20,"openfl.display.BitmapData.threshold","openfl/display/BitmapData.hx",1438,0xdd12d5b9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(sourceBitmapData,"sourceBitmapData")
	HX_STACK_ARG(sourceRect,"sourceRect")
	HX_STACK_ARG(destPoint,"destPoint")
	HX_STACK_ARG(operation,"operation")
	HX_STACK_ARG(threshold,"threshold")
	HX_STACK_ARG(color,"color")
	HX_STACK_ARG(mask,"mask")
	HX_STACK_ARG(copySource,"copySource")
{
		HX_STACK_LINE(1438)
		if (((  (((  (((  (((sourceBitmapData == hx::ObjectPtr<OBJ_>(this)))) ? bool(sourceRect->equals(this->rect)) : bool(false) ))) ? bool((destPoint->x == (int)0)) : bool(false) ))) ? bool((destPoint->y == (int)0)) : bool(false) ))){
			HX_STACK_LINE(1440)
			int hits = (int)0;		HX_STACK_VAR(hits,"hits");
			HX_STACK_LINE(1442)
			threshold = (int((int((int((int(((int(threshold) & int((int)255)))) << int((int)24))) | int((int(((int((int(threshold) >> int((int)8))) & int((int)255)))) << int((int)16))))) | int((int(((int((int(threshold) >> int((int)16))) & int((int)255)))) << int((int)8))))) | int((int((int(threshold) >> int((int)24))) & int((int)255))));
			HX_STACK_LINE(1443)
			color = (int((int((int((int(((int(color) & int((int)255)))) << int((int)24))) | int((int(((int((int(color) >> int((int)8))) & int((int)255)))) << int((int)16))))) | int((int(((int((int(color) >> int((int)16))) & int((int)255)))) << int((int)8))))) | int((int((int(color) >> int((int)24))) & int((int)255))));
			HX_STACK_LINE(1445)
			::lime::utils::ByteArray memory = ::lime::utils::ByteArray_obj::__new(null());		HX_STACK_VAR(memory,"memory");
			HX_STACK_LINE(1449)
			::lime::utils::ByteArray _g = this->getPixels(this->rect);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1449)
			memory = _g;
			HX_STACK_LINE(1450)
			memory->position = (int)0;
			HX_STACK_LINE(1451)
			::openfl::Memory_obj::select(memory);
			HX_STACK_LINE(1453)
			int thresholdMask = (int(threshold) & int(mask));		HX_STACK_VAR(thresholdMask,"thresholdMask");
			HX_STACK_LINE(1455)
			int width_yy;		HX_STACK_VAR(width_yy,"width_yy");
			HX_STACK_LINE(1455)
			int position;		HX_STACK_VAR(position,"position");
			HX_STACK_LINE(1455)
			int pixelMask;		HX_STACK_VAR(pixelMask,"pixelMask");
			HX_STACK_LINE(1455)
			int pixelValue;		HX_STACK_VAR(pixelValue,"pixelValue");
			HX_STACK_LINE(1455)
			int i;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(1455)
			bool test;		HX_STACK_VAR(test,"test");
			HX_STACK_LINE(1457)
			{
				HX_STACK_LINE(1457)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(1457)
				int _g2 = this->height;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(1457)
				while((true)){
					HX_STACK_LINE(1457)
					if ((!(((_g1 < _g2))))){
						HX_STACK_LINE(1457)
						break;
					}
					HX_STACK_LINE(1457)
					int yy = (_g1)++;		HX_STACK_VAR(yy,"yy");
					HX_STACK_LINE(1459)
					width_yy = (this->width * yy);
					HX_STACK_LINE(1461)
					{
						HX_STACK_LINE(1461)
						int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
						HX_STACK_LINE(1461)
						int _g21 = this->width;		HX_STACK_VAR(_g21,"_g21");
						HX_STACK_LINE(1461)
						while((true)){
							HX_STACK_LINE(1461)
							if ((!(((_g3 < _g21))))){
								HX_STACK_LINE(1461)
								break;
							}
							HX_STACK_LINE(1461)
							int xx = (_g3)++;		HX_STACK_VAR(xx,"xx");
							HX_STACK_LINE(1463)
							position = (((width_yy + xx)) * (int)4);

							HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_6_1)
							int run(){
								HX_STACK_FRAME("*","_Function_6_1",0x5204b87c,"*._Function_6_1","openfl/display/BitmapData.hx",1464,0xdd12d5b9)
								{
									HX_STACK_LINE(1464)
									return ::openfl::Memory_obj::gcRef->readInt();
								}
								return null();
							}
							HX_END_LOCAL_FUNC0(return)

							HX_STACK_LINE(1464)
							int _g11 = ::openfl::Memory_obj::_setPositionTemporarily(position, Dynamic(new _Function_6_1()));		HX_STACK_VAR(_g11,"_g11");
							HX_STACK_LINE(1464)
							pixelValue = _g11;
							HX_STACK_LINE(1465)
							pixelMask = (int(pixelValue) & int(mask));
							HX_STACK_LINE(1467)
							int _g22 = ::openfl::display::BitmapData_obj::__ucompare(pixelMask,thresholdMask);		HX_STACK_VAR(_g22,"_g22");
							HX_STACK_LINE(1467)
							i = _g22;
							HX_STACK_LINE(1468)
							test = false;
							HX_STACK_LINE(1470)
							if (((operation == HX_CSTRING("==")))){
								HX_STACK_LINE(1470)
								test = (i == (int)0);
							}
							else{
								HX_STACK_LINE(1471)
								if (((operation == HX_CSTRING("<")))){
									HX_STACK_LINE(1471)
									test = (i == (int)-1);
								}
								else{
									HX_STACK_LINE(1472)
									if (((operation == HX_CSTRING(">")))){
										HX_STACK_LINE(1472)
										test = (i == (int)1);
									}
									else{
										HX_STACK_LINE(1473)
										if (((operation == HX_CSTRING("!=")))){
											HX_STACK_LINE(1473)
											test = (i != (int)0);
										}
										else{
											HX_STACK_LINE(1474)
											if (((operation == HX_CSTRING("<=")))){
												HX_STACK_LINE(1474)
												test = (bool((i == (int)0)) || bool((i == (int)-1)));
											}
											else{
												HX_STACK_LINE(1475)
												if (((operation == HX_CSTRING(">=")))){
													HX_STACK_LINE(1475)
													test = (bool((i == (int)0)) || bool((i == (int)1)));
												}
											}
										}
									}
								}
							}
							HX_STACK_LINE(1477)
							if ((test)){
								HX_STACK_LINE(1479)
								{
									HX_STACK_LINE(1479)
									Array< int > v = Array_obj< int >::__new().Add(color);		HX_STACK_VAR(v,"v");

									HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_8_1,Array< int >,v)
									Void run(){
										HX_STACK_FRAME("*","_Function_8_1",0x52063cfe,"*._Function_8_1","openfl/display/BitmapData.hx",1479,0xdd12d5b9)
										{
											HX_STACK_LINE(1479)
											::openfl::Memory_obj::gcRef->writeInt(v->__get((int)0));
										}
										return null();
									}
									HX_END_LOCAL_FUNC0((void))

									HX_STACK_LINE(1479)
									::openfl::Memory_obj::_setPositionTemporarily(position, Dynamic(new _Function_8_1(v)));
								}
								HX_STACK_LINE(1480)
								(hits)++;
							}
						}
					}
				}
			}
			HX_STACK_LINE(1488)
			memory->position = (int)0;
			HX_STACK_LINE(1489)
			this->setPixels(this->rect,memory);
			HX_STACK_LINE(1490)
			::openfl::Memory_obj::select(null());
			HX_STACK_LINE(1491)
			return hits;
		}
		else{
			HX_STACK_LINE(1495)
			int sx = ::Std_obj::_int(sourceRect->x);		HX_STACK_VAR(sx,"sx");
			HX_STACK_LINE(1496)
			int sy = ::Std_obj::_int(sourceRect->y);		HX_STACK_VAR(sy,"sy");
			HX_STACK_LINE(1497)
			int sw = ::Std_obj::_int(sourceBitmapData->width);		HX_STACK_VAR(sw,"sw");
			HX_STACK_LINE(1498)
			int sh = ::Std_obj::_int(sourceBitmapData->height);		HX_STACK_VAR(sh,"sh");
			HX_STACK_LINE(1500)
			int dx = ::Std_obj::_int(destPoint->x);		HX_STACK_VAR(dx,"dx");
			HX_STACK_LINE(1501)
			int dy = ::Std_obj::_int(destPoint->y);		HX_STACK_VAR(dy,"dy");
			HX_STACK_LINE(1503)
			int bw = ((this->width - sw) - dx);		HX_STACK_VAR(bw,"bw");
			HX_STACK_LINE(1504)
			int bh = ((this->height - sh) - dy);		HX_STACK_VAR(bh,"bh");
			HX_STACK_LINE(1506)
			int dw;		HX_STACK_VAR(dw,"dw");
			HX_STACK_LINE(1506)
			if (((bw < (int)0))){
				HX_STACK_LINE(1506)
				dw = (sw + (((this->width - sw) - dx)));
			}
			else{
				HX_STACK_LINE(1506)
				dw = sw;
			}
			HX_STACK_LINE(1507)
			int dh;		HX_STACK_VAR(dh,"dh");
			HX_STACK_LINE(1507)
			if (((bw < (int)0))){
				HX_STACK_LINE(1507)
				dh = (sh + (((this->height - sh) - dy)));
			}
			else{
				HX_STACK_LINE(1507)
				dh = sh;
			}
			HX_STACK_LINE(1509)
			int hits = (int)0;		HX_STACK_VAR(hits,"hits");
			HX_STACK_LINE(1511)
			threshold = (int((int((int((int(((int(threshold) & int((int)255)))) << int((int)24))) | int((int(((int((int(threshold) >> int((int)8))) & int((int)255)))) << int((int)16))))) | int((int(((int((int(threshold) >> int((int)16))) & int((int)255)))) << int((int)8))))) | int((int((int(threshold) >> int((int)24))) & int((int)255))));
			HX_STACK_LINE(1512)
			color = (int((int((int((int(((int(color) & int((int)255)))) << int((int)24))) | int((int(((int((int(color) >> int((int)8))) & int((int)255)))) << int((int)16))))) | int((int(((int((int(color) >> int((int)16))) & int((int)255)))) << int((int)8))))) | int((int((int(color) >> int((int)24))) & int((int)255))));
			HX_STACK_LINE(1514)
			int canvasMemory = ((sw * sh) * (int)4);		HX_STACK_VAR(canvasMemory,"canvasMemory");
			HX_STACK_LINE(1515)
			int sourceMemory = (int)0;		HX_STACK_VAR(sourceMemory,"sourceMemory");
			HX_STACK_LINE(1517)
			if ((copySource)){
				HX_STACK_LINE(1519)
				sourceMemory = ((sw * sh) * (int)4);
			}
			HX_STACK_LINE(1523)
			int totalMemory = (canvasMemory + sourceMemory);		HX_STACK_VAR(totalMemory,"totalMemory");
			HX_STACK_LINE(1524)
			::lime::utils::ByteArray memory = ::lime::utils::ByteArray_obj::__new(null());		HX_STACK_VAR(memory,"memory");
			HX_STACK_LINE(1528)
			memory->position = (int)0;
			HX_STACK_LINE(1529)
			::openfl::display::BitmapData bitmapData = sourceBitmapData->clone();		HX_STACK_VAR(bitmapData,"bitmapData");
			HX_STACK_LINE(1530)
			::lime::utils::ByteArray pixels = bitmapData->getPixels(sourceRect);		HX_STACK_VAR(pixels,"pixels");
			HX_STACK_LINE(1531)
			memory->writeBytes(pixels,null(),null());
			HX_STACK_LINE(1532)
			memory->position = canvasMemory;
			HX_STACK_LINE(1534)
			if ((copySource)){
				HX_STACK_LINE(1536)
				memory->writeBytes(pixels,null(),null());
			}
			HX_STACK_LINE(1540)
			memory->position = (int)0;
			HX_STACK_LINE(1541)
			::openfl::Memory_obj::select(memory);
			HX_STACK_LINE(1543)
			int thresholdMask = (int(threshold) & int(mask));		HX_STACK_VAR(thresholdMask,"thresholdMask");
			HX_STACK_LINE(1545)
			int position;		HX_STACK_VAR(position,"position");
			HX_STACK_LINE(1545)
			int pixelMask;		HX_STACK_VAR(pixelMask,"pixelMask");
			HX_STACK_LINE(1545)
			int pixelValue;		HX_STACK_VAR(pixelValue,"pixelValue");
			HX_STACK_LINE(1545)
			int i;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(1545)
			bool test;		HX_STACK_VAR(test,"test");
			HX_STACK_LINE(1547)
			{
				HX_STACK_LINE(1547)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(1547)
				while((true)){
					HX_STACK_LINE(1547)
					if ((!(((_g < dh))))){
						HX_STACK_LINE(1547)
						break;
					}
					HX_STACK_LINE(1547)
					int yy = (_g)++;		HX_STACK_VAR(yy,"yy");
					HX_STACK_LINE(1549)
					{
						HX_STACK_LINE(1549)
						int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(1549)
						while((true)){
							HX_STACK_LINE(1549)
							if ((!(((_g1 < dw))))){
								HX_STACK_LINE(1549)
								break;
							}
							HX_STACK_LINE(1549)
							int xx = (_g1)++;		HX_STACK_VAR(xx,"xx");
							HX_STACK_LINE(1551)
							position = ((((xx + sx) + (((yy + sy)) * sw))) * (int)4);

							HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_6_1)
							int run(){
								HX_STACK_FRAME("*","_Function_6_1",0x5204b87c,"*._Function_6_1","openfl/display/BitmapData.hx",1552,0xdd12d5b9)
								{
									HX_STACK_LINE(1552)
									return ::openfl::Memory_obj::gcRef->readInt();
								}
								return null();
							}
							HX_END_LOCAL_FUNC0(return)

							HX_STACK_LINE(1552)
							int _g3 = ::openfl::Memory_obj::_setPositionTemporarily(position, Dynamic(new _Function_6_1()));		HX_STACK_VAR(_g3,"_g3");
							HX_STACK_LINE(1552)
							pixelValue = _g3;
							HX_STACK_LINE(1553)
							pixelMask = (int(pixelValue) & int(mask));
							HX_STACK_LINE(1555)
							int _g4 = ::openfl::display::BitmapData_obj::__ucompare(pixelMask,thresholdMask);		HX_STACK_VAR(_g4,"_g4");
							HX_STACK_LINE(1555)
							i = _g4;
							HX_STACK_LINE(1556)
							test = false;
							HX_STACK_LINE(1558)
							if (((operation == HX_CSTRING("==")))){
								HX_STACK_LINE(1558)
								test = (i == (int)0);
							}
							else{
								HX_STACK_LINE(1559)
								if (((operation == HX_CSTRING("<")))){
									HX_STACK_LINE(1559)
									test = (i == (int)-1);
								}
								else{
									HX_STACK_LINE(1560)
									if (((operation == HX_CSTRING(">")))){
										HX_STACK_LINE(1560)
										test = (i == (int)1);
									}
									else{
										HX_STACK_LINE(1561)
										if (((operation == HX_CSTRING("!=")))){
											HX_STACK_LINE(1561)
											test = (i != (int)0);
										}
										else{
											HX_STACK_LINE(1562)
											if (((operation == HX_CSTRING("<=")))){
												HX_STACK_LINE(1562)
												test = (bool((i == (int)0)) || bool((i == (int)-1)));
											}
											else{
												HX_STACK_LINE(1563)
												if (((operation == HX_CSTRING(">=")))){
													HX_STACK_LINE(1563)
													test = (bool((i == (int)0)) || bool((i == (int)1)));
												}
											}
										}
									}
								}
							}
							HX_STACK_LINE(1565)
							if ((test)){
								HX_STACK_LINE(1567)
								{
									HX_STACK_LINE(1567)
									Array< int > v = Array_obj< int >::__new().Add(color);		HX_STACK_VAR(v,"v");

									HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_8_1,Array< int >,v)
									Void run(){
										HX_STACK_FRAME("*","_Function_8_1",0x52063cfe,"*._Function_8_1","openfl/display/BitmapData.hx",1567,0xdd12d5b9)
										{
											HX_STACK_LINE(1567)
											::openfl::Memory_obj::gcRef->writeInt(v->__get((int)0));
										}
										return null();
									}
									HX_END_LOCAL_FUNC0((void))

									HX_STACK_LINE(1567)
									::openfl::Memory_obj::_setPositionTemporarily(position, Dynamic(new _Function_8_1(v)));
								}
								HX_STACK_LINE(1568)
								(hits)++;
							}
							else{
								HX_STACK_LINE(1570)
								if ((copySource)){

									HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_8_1)
									int run(){
										HX_STACK_FRAME("*","_Function_8_1",0x52063cfe,"*._Function_8_1","openfl/display/BitmapData.hx",1572,0xdd12d5b9)
										{
											HX_STACK_LINE(1572)
											return ::openfl::Memory_obj::gcRef->readInt();
										}
										return null();
									}
									HX_END_LOCAL_FUNC0(return)

									HX_STACK_LINE(1572)
									Array< int > v = Array_obj< int >::__new().Add(::openfl::Memory_obj::_setPositionTemporarily((canvasMemory + position), Dynamic(new _Function_8_1())));		HX_STACK_VAR(v,"v");

									HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_8_2,Array< int >,v)
									Void run(){
										HX_STACK_FRAME("*","_Function_8_2",0x52063cff,"*._Function_8_2","openfl/display/BitmapData.hx",1572,0xdd12d5b9)
										{
											HX_STACK_LINE(1572)
											::openfl::Memory_obj::gcRef->writeInt(v->__get((int)0));
										}
										return null();
									}
									HX_END_LOCAL_FUNC0((void))

									HX_STACK_LINE(1572)
									::openfl::Memory_obj::_setPositionTemporarily(position, Dynamic(new _Function_8_2(v)));
								}
							}
						}
					}
				}
			}
			HX_STACK_LINE(1580)
			memory->position = (int)0;
			HX_STACK_LINE(1581)
			bitmapData->setPixels(sourceRect,memory);
			HX_STACK_LINE(1582)
			this->copyPixels(bitmapData,bitmapData->rect,destPoint,null(),null(),null());
			HX_STACK_LINE(1583)
			::openfl::Memory_obj::select(null());
			HX_STACK_LINE(1584)
			return hits;
		}
		HX_STACK_LINE(1438)
		return (int)0;
	}
}


HX_DEFINE_DYNAMIC_FUNC8(BitmapData_obj,threshold,return )

Void BitmapData_obj::unlock( ::openfl::geom::Rectangle changeRect){
{
		HX_STACK_FRAME("openfl.display.BitmapData","unlock",0x756bd12f,"openfl.display.BitmapData.unlock","openfl/display/BitmapData.hx",1603,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(changeRect,"changeRect")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,unlock,(void))

Void BitmapData_obj::__createUVs( ){
{
		HX_STACK_FRAME("openfl.display.BitmapData","__createUVs",0xb29ce00b,"openfl.display.BitmapData.__createUVs","openfl/display/BitmapData.hx",1610,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1612)
		if (((this->__uvData == null()))){
			HX_STACK_LINE(1612)
			::openfl::display::TextureUvs _g = ::openfl::display::TextureUvs_obj::__new();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1612)
			this->__uvData = _g;
		}
		HX_STACK_LINE(1614)
		this->__uvData->x0 = (int)0;
		HX_STACK_LINE(1615)
		this->__uvData->y0 = (int)0;
		HX_STACK_LINE(1616)
		this->__uvData->x1 = (int)1;
		HX_STACK_LINE(1617)
		this->__uvData->y1 = (int)0;
		HX_STACK_LINE(1618)
		this->__uvData->x2 = (int)1;
		HX_STACK_LINE(1619)
		this->__uvData->y2 = (int)1;
		HX_STACK_LINE(1620)
		this->__uvData->x3 = (int)0;
		HX_STACK_LINE(1621)
		this->__uvData->y3 = (int)1;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapData_obj,__createUVs,(void))

Void BitmapData_obj::__drawGL( ::openfl::_internal::renderer::RenderSession renderSession,int width,int height,::openfl::display::IBitmapDrawable source,::openfl::geom::Matrix matrix,::openfl::geom::ColorTransform colorTransform,::openfl::display::BlendMode blendMode,::openfl::geom::Rectangle clipRect,hx::Null< bool >  __o_smoothing,hx::Null< bool >  __o_drawSelf,hx::Null< bool >  __o_clearBuffer,hx::Null< bool >  __o_readPixels){
bool smoothing = __o_smoothing.Default(false);
bool drawSelf = __o_drawSelf.Default(false);
bool clearBuffer = __o_clearBuffer.Default(false);
bool readPixels = __o_readPixels.Default(false);
	HX_STACK_FRAME("openfl.display.BitmapData","__drawGL",0xb0ddbd74,"openfl.display.BitmapData.__drawGL","openfl/display/BitmapData.hx",1626,0xdd12d5b9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(renderSession,"renderSession")
	HX_STACK_ARG(width,"width")
	HX_STACK_ARG(height,"height")
	HX_STACK_ARG(source,"source")
	HX_STACK_ARG(matrix,"matrix")
	HX_STACK_ARG(colorTransform,"colorTransform")
	HX_STACK_ARG(blendMode,"blendMode")
	HX_STACK_ARG(clipRect,"clipRect")
	HX_STACK_ARG(smoothing,"smoothing")
	HX_STACK_ARG(drawSelf,"drawSelf")
	HX_STACK_ARG(clearBuffer,"clearBuffer")
	HX_STACK_ARG(readPixels,"readPixels")
{
		HX_STACK_LINE(1628)
		::openfl::_internal::renderer::AbstractRenderer renderer = ::openfl::Lib_obj::current->stage->__renderer;		HX_STACK_VAR(renderer,"renderer");
		HX_STACK_LINE(1629)
		if (((renderer == null()))){
			HX_STACK_LINE(1629)
			return null();
		}
		HX_STACK_LINE(1631)
		::openfl::_internal::renderer::RenderSession renderSession1 = renderer->renderSession;		HX_STACK_VAR(renderSession1,"renderSession1");
		HX_STACK_LINE(1632)
		::lime::graphics::GLRenderContext gl = renderSession1->gl;		HX_STACK_VAR(gl,"gl");
		HX_STACK_LINE(1633)
		if (((gl == null()))){
			HX_STACK_LINE(1633)
			return null();
		}
		HX_STACK_LINE(1635)
		::openfl::_internal::renderer::opengl::utils::SpriteBatch spritebatch = renderSession1->spriteBatch;		HX_STACK_VAR(spritebatch,"spritebatch");
		HX_STACK_LINE(1636)
		bool renderTransparent = renderSession1->renderer->transparent;		HX_STACK_VAR(renderTransparent,"renderTransparent");
		HX_STACK_LINE(1638)
		::openfl::geom::Rectangle tmpRect;		HX_STACK_VAR(tmpRect,"tmpRect");
		HX_STACK_LINE(1638)
		if (((clipRect == null()))){
			HX_STACK_LINE(1638)
			tmpRect = ::openfl::geom::Rectangle_obj::__new((int)0,(int)0,width,height);
		}
		else{
			HX_STACK_LINE(1638)
			tmpRect = clipRect->clone();
		}
		HX_STACK_LINE(1640)
		renderSession1->renderer->transparent = this->transparent;
		HX_STACK_LINE(1642)
		if (((this->__framebuffer == null()))){
			HX_STACK_LINE(1644)
			::openfl::_internal::renderer::opengl::utils::FilterTexture _g = ::openfl::_internal::renderer::opengl::utils::FilterTexture_obj::__new(gl,width,height,smoothing);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1644)
			this->__framebuffer = _g;
		}
		HX_STACK_LINE(1648)
		this->__framebuffer->resize(width,height);
		HX_STACK_LINE(1649)
		{
			HX_STACK_LINE(1649)
			::lime::graphics::opengl::GLFramebuffer framebuffer = this->__framebuffer->frameBuffer;		HX_STACK_VAR(framebuffer,"framebuffer");
			HX_STACK_LINE(1649)
			::lime::graphics::opengl::GL_obj::lime_gl_bind_framebuffer(gl->FRAMEBUFFER,(  (((framebuffer == null()))) ? int((int)0) : int(framebuffer->id) ));
		}
		HX_STACK_LINE(1651)
		renderer->setViewport((int)0,(int)0,width,height);
		HX_STACK_LINE(1653)
		spritebatch->begin(renderSession1,(  ((drawSelf)) ? ::openfl::geom::Rectangle(null()) : ::openfl::geom::Rectangle(tmpRect) ));
		HX_STACK_LINE(1656)
		::lime::graphics::opengl::GL_obj::lime_gl_color_mask(true,true,true,true);
		HX_STACK_LINE(1657)
		renderSession1->blendModeManager->setBlendMode(::openfl::display::BlendMode_obj::NORMAL,null());
		HX_STACK_LINE(1659)
		renderSession1->shaderManager->setShader(renderSession1->shaderManager->defaultShader,true);
		HX_STACK_LINE(1661)
		if (((bool(clearBuffer) || bool(drawSelf)))){
			HX_STACK_LINE(1663)
			this->__framebuffer->clear();
		}
		HX_STACK_LINE(1667)
		if ((drawSelf)){
			HX_STACK_LINE(1669)
			this->__worldTransform->identity();
			HX_STACK_LINE(1670)
			{
				HX_STACK_LINE(1670)
				::openfl::geom::Matrix m = this->__worldTransform;		HX_STACK_VAR(m,"m");
				HX_STACK_LINE(1670)
				Float tx = m->tx;		HX_STACK_VAR(tx,"tx");
				HX_STACK_LINE(1670)
				Float ty = m->ty;		HX_STACK_VAR(ty,"ty");
				HX_STACK_LINE(1670)
				m->tx = (int)0;
				HX_STACK_LINE(1670)
				m->ty = (int)0;
				HX_STACK_LINE(1670)
				m->scale((int)1,(int)-1);
				HX_STACK_LINE(1670)
				m->translate((int)0,this->height);
				HX_STACK_LINE(1670)
				hx::AddEq(m->tx,tx);
				HX_STACK_LINE(1670)
				hx::SubEq(m->ty,ty);
			}
			HX_STACK_LINE(1671)
			this->__renderGL(renderSession1);
			HX_STACK_LINE(1672)
			spritebatch->stop();
			HX_STACK_LINE(1673)
			{
				HX_STACK_LINE(1673)
				::lime::graphics::opengl::GLTexture texture = this->__texture;		HX_STACK_VAR(texture,"texture");
				HX_STACK_LINE(1673)
				{
					HX_STACK_LINE(1673)
					::lime::graphics::opengl::GL_obj::lime_gl_delete_texture(texture->id);
					HX_STACK_LINE(1673)
					texture->invalidate();
				}
			}
			HX_STACK_LINE(1674)
			spritebatch->start(tmpRect);
		}
		HX_STACK_LINE(1678)
		::openfl::geom::ColorTransform ctCache = source->__Field(HX_CSTRING("__worldColorTransform"),true);		HX_STACK_VAR(ctCache,"ctCache");
		HX_STACK_LINE(1679)
		::openfl::geom::Matrix matrixCache = source->__Field(HX_CSTRING("__worldTransform"),true);		HX_STACK_VAR(matrixCache,"matrixCache");
		HX_STACK_LINE(1680)
		::openfl::display::BlendMode blendModeCache = source->__Field(HX_CSTRING("__blendMode"),true);		HX_STACK_VAR(blendModeCache,"blendModeCache");
		HX_STACK_LINE(1681)
		bool cached = source->__Field(HX_CSTRING("__cacheAsBitmap"),true);		HX_STACK_VAR(cached,"cached");
		HX_STACK_LINE(1683)
		::openfl::geom::Matrix m;		HX_STACK_VAR(m,"m");
		HX_STACK_LINE(1683)
		if (((matrix != null()))){
			HX_STACK_LINE(1683)
			m = ::openfl::geom::Matrix_obj::__new(matrix->a,matrix->b,matrix->c,matrix->d,matrix->tx,matrix->ty);
		}
		else{
			HX_STACK_LINE(1683)
			m = ::openfl::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());
		}
		HX_STACK_LINE(1685)
		{
			HX_STACK_LINE(1685)
			Float tx = m->tx;		HX_STACK_VAR(tx,"tx");
			HX_STACK_LINE(1685)
			Float ty = m->ty;		HX_STACK_VAR(ty,"ty");
			HX_STACK_LINE(1685)
			m->tx = (int)0;
			HX_STACK_LINE(1685)
			m->ty = (int)0;
			HX_STACK_LINE(1685)
			m->scale((int)1,(int)-1);
			HX_STACK_LINE(1685)
			m->translate((int)0,this->height);
			HX_STACK_LINE(1685)
			hx::AddEq(m->tx,tx);
			HX_STACK_LINE(1685)
			hx::SubEq(m->ty,ty);
		}
		HX_STACK_LINE(1687)
		source->__FieldRef(HX_CSTRING("__worldTransform")) = m;
		HX_STACK_LINE(1688)
		::openfl::geom::ColorTransform _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(1688)
		if (((colorTransform != null()))){
			HX_STACK_LINE(1688)
			_g1 = colorTransform;
		}
		else{
			HX_STACK_LINE(1688)
			_g1 = ::openfl::geom::ColorTransform_obj::__new(null(),null(),null(),null(),null(),null(),null(),null());
		}
		HX_STACK_LINE(1688)
		source->__FieldRef(HX_CSTRING("__worldColorTransform")) = _g1;
		HX_STACK_LINE(1689)
		source->__FieldRef(HX_CSTRING("__blendMode")) = blendMode;
		HX_STACK_LINE(1690)
		source->__FieldRef(HX_CSTRING("__cacheAsBitmap")) = false;
		HX_STACK_LINE(1692)
		source->__updateChildren(false);
		HX_STACK_LINE(1694)
		source->__renderGL(renderSession1);
		HX_STACK_LINE(1696)
		source->__FieldRef(HX_CSTRING("__worldColorTransform")) = ctCache;
		HX_STACK_LINE(1697)
		source->__FieldRef(HX_CSTRING("__worldTransform")) = matrixCache;
		HX_STACK_LINE(1698)
		source->__FieldRef(HX_CSTRING("__blendMode")) = blendModeCache;
		HX_STACK_LINE(1699)
		source->__FieldRef(HX_CSTRING("__cacheAsBitmap")) = cached;
		HX_STACK_LINE(1701)
		source->__updateChildren(true);
		HX_STACK_LINE(1703)
		spritebatch->finish();
		HX_STACK_LINE(1705)
		if ((readPixels)){
			HX_STACK_LINE(1708)
			if (((bool((this->__image->width != width)) || bool((this->__image->height != height))))){
				HX_STACK_LINE(1710)
				this->__image->resize(width,height);
			}
			HX_STACK_LINE(1714)
			{
				HX_STACK_LINE(1714)
				::lime::utils::ArrayBufferView pixels = this->__image->buffer->data;		HX_STACK_VAR(pixels,"pixels");
				HX_STACK_LINE(1714)
				{
					HX_STACK_LINE(1714)
					::lime::utils::ByteArray _g2;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(1714)
					if (((pixels == null()))){
						HX_STACK_LINE(1714)
						_g2 = null();
					}
					else{
						HX_STACK_LINE(1714)
						_g2 = pixels->getByteBuffer();
					}
					HX_STACK_LINE(1714)
					Dynamic _g3;		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(1714)
					if (((pixels == null()))){
						HX_STACK_LINE(1714)
						_g3 = null();
					}
					else{
						HX_STACK_LINE(1714)
						_g3 = pixels->getStart();
					}
					HX_STACK_LINE(1714)
					::lime::graphics::opengl::GL_obj::lime_gl_read_pixels((int)0,(int)0,width,height,gl->RGBA,gl->UNSIGNED_BYTE,_g2,_g3);
				}
			}
		}
		HX_STACK_LINE(1718)
		{
			HX_STACK_LINE(1718)
			::lime::graphics::opengl::GLFramebuffer framebuffer = renderSession1->defaultFramebuffer;		HX_STACK_VAR(framebuffer,"framebuffer");
			HX_STACK_LINE(1718)
			::lime::graphics::opengl::GL_obj::lime_gl_bind_framebuffer(gl->FRAMEBUFFER,(  (((framebuffer == null()))) ? int((int)0) : int(framebuffer->id) ));
		}
		HX_STACK_LINE(1720)
		renderer->setViewport((int)0,(int)0,renderSession1->renderer->width,renderSession1->renderer->height);
		HX_STACK_LINE(1722)
		renderSession1->renderer->transparent = renderTransparent;
		HX_STACK_LINE(1724)
		::lime::graphics::opengl::GL_obj::lime_gl_color_mask(true,true,true,renderSession1->renderer->transparent);
		HX_STACK_LINE(1726)
		this->__usingFramebuffer = true;
		HX_STACK_LINE(1728)
		if (((this->__image != null()))){
			HX_STACK_LINE(1730)
			this->__image->dirty = false;
			HX_STACK_LINE(1731)
			this->__image->set_premultiplied(true);
		}
		HX_STACK_LINE(1735)
		this->__createUVs();
		HX_STACK_LINE(1736)
		this->__isValid = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC12(BitmapData_obj,__drawGL,(void))

Void BitmapData_obj::__flipMatrix( ::openfl::geom::Matrix m){
{
		HX_STACK_FRAME("openfl.display.BitmapData","__flipMatrix",0x69774899,"openfl.display.BitmapData.__flipMatrix","openfl/display/BitmapData.hx",1741,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(m,"m")
		HX_STACK_LINE(1743)
		Float tx = m->tx;		HX_STACK_VAR(tx,"tx");
		HX_STACK_LINE(1744)
		Float ty = m->ty;		HX_STACK_VAR(ty,"ty");
		HX_STACK_LINE(1745)
		m->tx = (int)0;
		HX_STACK_LINE(1746)
		m->ty = (int)0;
		HX_STACK_LINE(1747)
		m->scale((int)1,(int)-1);
		HX_STACK_LINE(1748)
		m->translate((int)0,this->height);
		HX_STACK_LINE(1749)
		hx::AddEq(m->tx,tx);
		HX_STACK_LINE(1750)
		hx::SubEq(m->ty,ty);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,__flipMatrix,(void))

Void BitmapData_obj::__fromBase64( ::String base64,::String type,Dynamic onload){
{
		HX_STACK_FRAME("openfl.display.BitmapData","__fromBase64",0xceedce64,"openfl.display.BitmapData.__fromBase64","openfl/display/BitmapData.hx",1762,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(base64,"base64")
		HX_STACK_ARG(type,"type")
		HX_STACK_ARG(onload,"onload")
		HX_STACK_LINE(1762)
		Dynamic onload1 = Dynamic( Array_obj<Dynamic>::__new().Add(onload));		HX_STACK_VAR(onload1,"onload1");
		HX_STACK_LINE(1762)
		Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new().Add(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g,"_g");

		HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_1_1,Array< ::Dynamic >,_g,Dynamic,onload1)
		Void run(::lime::graphics::Image image){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","openfl/display/BitmapData.hx",1764,0xdd12d5b9)
			HX_STACK_ARG(image,"image")
			{
				HX_STACK_LINE(1766)
				_g->__get((int)0).StaticCast< ::openfl::display::BitmapData >()->__fromImage(image);
				HX_STACK_LINE(1768)
				if (((onload1->__GetItem((int)0) != null()))){
					HX_STACK_LINE(1770)
					onload1->__GetItem((int)0)(_g->__get((int)0).StaticCast< ::openfl::display::BitmapData >()).Cast< Void >();
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(1764)
		::lime::graphics::Image_obj::fromBase64(base64,type, Dynamic(new _Function_1_1(_g,onload1)));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(BitmapData_obj,__fromBase64,(void))

Void BitmapData_obj::__fromBytes( ::lime::utils::ByteArray bytes,::lime::utils::ByteArray rawAlpha,Dynamic onload){
{
		HX_STACK_FRAME("openfl.display.BitmapData","__fromBytes",0xdad6e936,"openfl.display.BitmapData.__fromBytes","openfl/display/BitmapData.hx",1779,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bytes,"bytes")
		HX_STACK_ARG(rawAlpha,"rawAlpha")
		HX_STACK_ARG(onload,"onload")
		HX_STACK_LINE(1779)
		Dynamic onload1 = Dynamic( Array_obj<Dynamic>::__new().Add(onload));		HX_STACK_VAR(onload1,"onload1");
		HX_STACK_LINE(1779)
		Array< ::Dynamic > rawAlpha1 = Array_obj< ::Dynamic >::__new().Add(rawAlpha);		HX_STACK_VAR(rawAlpha1,"rawAlpha1");
		HX_STACK_LINE(1779)
		Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new().Add(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g,"_g");

		HX_BEGIN_LOCAL_FUNC_S3(hx::LocalFunc,_Function_1_1,Array< ::Dynamic >,rawAlpha1,Array< ::Dynamic >,_g,Dynamic,onload1)
		Void run(::lime::graphics::Image image){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","openfl/display/BitmapData.hx",1781,0xdd12d5b9)
			HX_STACK_ARG(image,"image")
			{
				HX_STACK_LINE(1783)
				_g->__get((int)0).StaticCast< ::openfl::display::BitmapData >()->__fromImage(image);
				HX_STACK_LINE(1785)
				if (((rawAlpha1->__get((int)0).StaticCast< ::lime::utils::ByteArray >() != null()))){
					HX_STACK_LINE(1792)
					::lime::utils::UInt8Array data = _g->__get((int)0).StaticCast< ::openfl::display::BitmapData >()->__image->buffer->data;		HX_STACK_VAR(data,"data");
					HX_STACK_LINE(1794)
					{
						HX_STACK_LINE(1794)
						int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(1794)
						int _g1 = rawAlpha1->__get((int)0).StaticCast< ::lime::utils::ByteArray >()->length;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(1794)
						while(((_g2 < _g1))){
							HX_STACK_LINE(1794)
							int i = (_g2)++;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(1796)
							if (((rawAlpha1->__get((int)0).StaticCast< ::lime::utils::ByteArray >()->position < rawAlpha1->__get((int)0).StaticCast< ::lime::utils::ByteArray >()->length))){
								HX_STACK_LINE(1796)
								int pos = (rawAlpha1->__get((int)0).StaticCast< ::lime::utils::ByteArray >()->position)++;		HX_STACK_VAR(pos,"pos");
								HX_STACK_LINE(1796)
								hx::__ArrayImplRef(data,((i * (int)4) + (int)3)) = rawAlpha1->__get((int)0).StaticCast< ::lime::utils::ByteArray >()->b->__get(pos);
							}
							else{
								HX_STACK_LINE(1796)
								hx::__ArrayImplRef(data,((i * (int)4) + (int)3)) = rawAlpha1->__get((int)0).StaticCast< ::lime::utils::ByteArray >()->ThrowEOFi();
							}
						}
					}
					HX_STACK_LINE(1800)
					_g->__get((int)0).StaticCast< ::openfl::display::BitmapData >()->__image->dirty = true;
				}
				HX_STACK_LINE(1804)
				if (((onload1->__GetItem((int)0) != null()))){
					HX_STACK_LINE(1806)
					onload1->__GetItem((int)0)(_g->__get((int)0).StaticCast< ::openfl::display::BitmapData >()).Cast< Void >();
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(1781)
		::lime::graphics::Image_obj::fromBytes(bytes, Dynamic(new _Function_1_1(rawAlpha1,_g,onload1)));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(BitmapData_obj,__fromBytes,(void))

Void BitmapData_obj::__fromFile( ::String path,Dynamic onload,Dynamic onerror){
{
		HX_STACK_FRAME("openfl.display.BitmapData","__fromFile",0x3aae5011,"openfl.display.BitmapData.__fromFile","openfl/display/BitmapData.hx",1815,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(path,"path")
		HX_STACK_ARG(onload,"onload")
		HX_STACK_ARG(onerror,"onerror")
		HX_STACK_LINE(1815)
		Dynamic onload1 = Dynamic( Array_obj<Dynamic>::__new().Add(onload));		HX_STACK_VAR(onload1,"onload1");
		HX_STACK_LINE(1815)
		Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new().Add(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g,"_g");

		HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_1_1,Array< ::Dynamic >,_g,Dynamic,onload1)
		Void run(::lime::graphics::Image image){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","openfl/display/BitmapData.hx",1817,0xdd12d5b9)
			HX_STACK_ARG(image,"image")
			{
				HX_STACK_LINE(1819)
				_g->__get((int)0).StaticCast< ::openfl::display::BitmapData >()->__fromImage(image);
				HX_STACK_LINE(1821)
				if (((onload1->__GetItem((int)0) != null()))){
					HX_STACK_LINE(1823)
					onload1->__GetItem((int)0)(_g->__get((int)0).StaticCast< ::openfl::display::BitmapData >()).Cast< Void >();
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(1817)
		::lime::graphics::Image_obj::fromFile(path, Dynamic(new _Function_1_1(_g,onload1)),onerror);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(BitmapData_obj,__fromFile,(void))

Void BitmapData_obj::__fromImage( ::lime::graphics::Image image){
{
		HX_STACK_FRAME("openfl.display.BitmapData","__fromImage",0xdaa80026,"openfl.display.BitmapData.__fromImage","openfl/display/BitmapData.hx",1832,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(image,"image")
		HX_STACK_LINE(1834)
		this->__image = image;
		HX_STACK_LINE(1836)
		this->width = image->width;
		HX_STACK_LINE(1837)
		this->height = image->height;
		HX_STACK_LINE(1838)
		::openfl::geom::Rectangle _g = ::openfl::geom::Rectangle_obj::__new((int)0,(int)0,image->width,image->height);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1838)
		this->rect = _g;
		HX_STACK_LINE(1839)
		this->__isValid = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,__fromImage,(void))

Void BitmapData_obj::__renderCairo( ::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl.display.BitmapData","__renderCairo",0x87dae327,"openfl.display.BitmapData.__renderCairo","openfl/display/BitmapData.hx",1844,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(1846)
		if ((!(this->__isValid))){
			HX_STACK_LINE(1846)
			return null();
		}
		HX_STACK_LINE(1848)
		::lime::graphics::cairo::Cairo cairo = renderSession->cairo;		HX_STACK_VAR(cairo,"cairo");
		HX_STACK_LINE(1850)
		if (((this->__worldTransform == null()))){
			HX_STACK_LINE(1850)
			::openfl::geom::Matrix _g = ::openfl::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1850)
			this->__worldTransform = _g;
		}
		HX_STACK_LINE(1853)
		::openfl::geom::Matrix transform = this->__worldTransform;		HX_STACK_VAR(transform,"transform");
		HX_STACK_LINE(1855)
		if ((renderSession->roundPixels)){
			HX_STACK_LINE(1857)
			::lime::math::Matrix3 matrix = transform->__toMatrix3();		HX_STACK_VAR(matrix,"matrix");
			HX_STACK_LINE(1858)
			int _g1 = ::Math_obj::round(matrix->tx);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(1858)
			matrix->tx = _g1;
			HX_STACK_LINE(1859)
			int _g2 = ::Math_obj::round(matrix->ty);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(1859)
			matrix->ty = _g2;
			HX_STACK_LINE(1860)
			cairo->set_matrix(matrix);
		}
		else{
			HX_STACK_LINE(1865)
			::lime::math::Matrix3 _g3 = transform->__toMatrix3();		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(1865)
			cairo->set_matrix(_g3);
		}
		HX_STACK_LINE(1870)
		Dynamic surface = this->getSurface(null());		HX_STACK_VAR(surface,"surface");
		HX_STACK_LINE(1872)
		if (((surface != null()))){
			HX_STACK_LINE(1874)
			cairo->setSourceSurface(surface,(int)0,(int)0);
			HX_STACK_LINE(1875)
			cairo->paint();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,__renderCairo,(void))

Void BitmapData_obj::__renderCairoMask( ::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl.display.BitmapData","__renderCairoMask",0x1a586fb3,"openfl.display.BitmapData.__renderCairoMask","openfl/display/BitmapData.hx",1882,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,__renderCairoMask,(void))

Void BitmapData_obj::__renderCanvas( ::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl.display.BitmapData","__renderCanvas",0x5afced59,"openfl.display.BitmapData.__renderCanvas","openfl/display/BitmapData.hx",1889,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,__renderCanvas,(void))

Void BitmapData_obj::__renderCanvasMask( ::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl.display.BitmapData","__renderCanvasMask",0xf2507ae5,"openfl.display.BitmapData.__renderCanvasMask","openfl/display/BitmapData.hx",1919,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,__renderCanvasMask,(void))

Void BitmapData_obj::__renderGL( ::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl.display.BitmapData","__renderGL",0x4c025e06,"openfl.display.BitmapData.__renderGL","openfl/display/BitmapData.hx",1928,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(1928)
		renderSession->spriteBatch->renderBitmapData(hx::ObjectPtr<OBJ_>(this),false,this->__worldTransform,this->__worldColorTransform,this->__worldColorTransform->alphaMultiplier,this->__blendMode,null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,__renderGL,(void))

Void BitmapData_obj::__sync( ){
{
		HX_STACK_FRAME("openfl.display.BitmapData","__sync",0x0b374be6,"openfl.display.BitmapData.__sync","openfl/display/BitmapData.hx",1933,0xdd12d5b9)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapData_obj,__sync,(void))

Void BitmapData_obj::__updateChildren( bool transformOnly){
{
		HX_STACK_FRAME("openfl.display.BitmapData","__updateChildren",0xeaaf19b3,"openfl.display.BitmapData.__updateChildren","openfl/display/BitmapData.hx",1996,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(transformOnly,"transformOnly")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,__updateChildren,(void))

Void BitmapData_obj::__updateMask( ::openfl::display::Graphics maskGraphics){
{
		HX_STACK_FRAME("openfl.display.BitmapData","__updateMask",0x378cf760,"openfl.display.BitmapData.__updateMask","openfl/display/BitmapData.hx",2003,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(maskGraphics,"maskGraphics")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,__updateMask,(void))

Dynamic BitmapData_obj::__supportsBGRA;

::openfl::display::BitmapData BitmapData_obj::fromBase64( ::String base64,::String type,Dynamic onload){
	HX_STACK_FRAME("openfl.display.BitmapData","fromBase64",0x8e5a4284,"openfl.display.BitmapData.fromBase64","openfl/display/BitmapData.hx",670,0xdd12d5b9)
	HX_STACK_ARG(base64,"base64")
	HX_STACK_ARG(type,"type")
	HX_STACK_ARG(onload,"onload")
	HX_STACK_LINE(672)
	::openfl::display::BitmapData bitmapData = ::openfl::display::BitmapData_obj::__new((int)0,(int)0,true,null());		HX_STACK_VAR(bitmapData,"bitmapData");
	HX_STACK_LINE(673)
	{
		HX_STACK_LINE(673)
		Dynamic onload1 = Dynamic( Array_obj<Dynamic>::__new().Add(onload));		HX_STACK_VAR(onload1,"onload1");
		HX_STACK_LINE(673)
		Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new().Add(bitmapData);		HX_STACK_VAR(_g,"_g");

		HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,Array< ::Dynamic >,_g,Dynamic,onload1)
		Void run(::lime::graphics::Image image){
			HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","openfl/display/BitmapData.hx",673,0xdd12d5b9)
			HX_STACK_ARG(image,"image")
			{
				HX_STACK_LINE(673)
				_g->__get((int)0).StaticCast< ::openfl::display::BitmapData >()->__fromImage(image);
				HX_STACK_LINE(673)
				if (((onload1->__GetItem((int)0) != null()))){
					HX_STACK_LINE(673)
					onload1->__GetItem((int)0)(_g->__get((int)0).StaticCast< ::openfl::display::BitmapData >()).Cast< Void >();
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(673)
		::lime::graphics::Image_obj::fromBase64(base64,type, Dynamic(new _Function_2_1(_g,onload1)));
	}
	HX_STACK_LINE(674)
	return bitmapData;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(BitmapData_obj,fromBase64,return )

::openfl::display::BitmapData BitmapData_obj::fromBytes( ::lime::utils::ByteArray bytes,::lime::utils::ByteArray rawAlpha,Dynamic onload){
	HX_STACK_FRAME("openfl.display.BitmapData","fromBytes",0x062c5916,"openfl.display.BitmapData.fromBytes","openfl/display/BitmapData.hx",679,0xdd12d5b9)
	HX_STACK_ARG(bytes,"bytes")
	HX_STACK_ARG(rawAlpha,"rawAlpha")
	HX_STACK_ARG(onload,"onload")
	HX_STACK_LINE(681)
	::openfl::display::BitmapData bitmapData = ::openfl::display::BitmapData_obj::__new((int)0,(int)0,true,null());		HX_STACK_VAR(bitmapData,"bitmapData");
	HX_STACK_LINE(682)
	{
		HX_STACK_LINE(682)
		Array< ::Dynamic > rawAlpha1 = Array_obj< ::Dynamic >::__new().Add(rawAlpha);		HX_STACK_VAR(rawAlpha1,"rawAlpha1");
		HX_STACK_LINE(682)
		Dynamic onload1 = Dynamic( Array_obj<Dynamic>::__new().Add(onload));		HX_STACK_VAR(onload1,"onload1");
		HX_STACK_LINE(682)
		Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new().Add(bitmapData);		HX_STACK_VAR(_g,"_g");

		HX_BEGIN_LOCAL_FUNC_S3(hx::LocalFunc,_Function_2_1,Array< ::Dynamic >,rawAlpha1,Array< ::Dynamic >,_g,Dynamic,onload1)
		Void run(::lime::graphics::Image image){
			HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","openfl/display/BitmapData.hx",682,0xdd12d5b9)
			HX_STACK_ARG(image,"image")
			{
				HX_STACK_LINE(682)
				_g->__get((int)0).StaticCast< ::openfl::display::BitmapData >()->__fromImage(image);
				HX_STACK_LINE(682)
				if (((rawAlpha1->__get((int)0).StaticCast< ::lime::utils::ByteArray >() != null()))){
					HX_STACK_LINE(682)
					::lime::utils::UInt8Array data = _g->__get((int)0).StaticCast< ::openfl::display::BitmapData >()->__image->buffer->data;		HX_STACK_VAR(data,"data");
					HX_STACK_LINE(682)
					{
						HX_STACK_LINE(682)
						int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(682)
						int _g1 = rawAlpha1->__get((int)0).StaticCast< ::lime::utils::ByteArray >()->length;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(682)
						while(((_g2 < _g1))){
							HX_STACK_LINE(682)
							int i = (_g2)++;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(682)
							if (((rawAlpha1->__get((int)0).StaticCast< ::lime::utils::ByteArray >()->position < rawAlpha1->__get((int)0).StaticCast< ::lime::utils::ByteArray >()->length))){
								HX_STACK_LINE(682)
								int pos = (rawAlpha1->__get((int)0).StaticCast< ::lime::utils::ByteArray >()->position)++;		HX_STACK_VAR(pos,"pos");
								HX_STACK_LINE(682)
								hx::__ArrayImplRef(data,((i * (int)4) + (int)3)) = rawAlpha1->__get((int)0).StaticCast< ::lime::utils::ByteArray >()->b->__get(pos);
							}
							else{
								HX_STACK_LINE(682)
								hx::__ArrayImplRef(data,((i * (int)4) + (int)3)) = rawAlpha1->__get((int)0).StaticCast< ::lime::utils::ByteArray >()->ThrowEOFi();
							}
						}
					}
					HX_STACK_LINE(682)
					_g->__get((int)0).StaticCast< ::openfl::display::BitmapData >()->__image->dirty = true;
				}
				HX_STACK_LINE(682)
				if (((onload1->__GetItem((int)0) != null()))){
					HX_STACK_LINE(682)
					onload1->__GetItem((int)0)(_g->__get((int)0).StaticCast< ::openfl::display::BitmapData >()).Cast< Void >();
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(682)
		::lime::graphics::Image_obj::fromBytes(bytes, Dynamic(new _Function_2_1(rawAlpha1,_g,onload1)));
	}
	HX_STACK_LINE(683)
	return bitmapData;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(BitmapData_obj,fromBytes,return )

::openfl::display::BitmapData BitmapData_obj::fromFile( ::String path,Dynamic onload,Dynamic onerror){
	HX_STACK_FRAME("openfl.display.BitmapData","fromFile",0xca5f7c31,"openfl.display.BitmapData.fromFile","openfl/display/BitmapData.hx",700,0xdd12d5b9)
	HX_STACK_ARG(path,"path")
	HX_STACK_ARG(onload,"onload")
	HX_STACK_ARG(onerror,"onerror")
	HX_STACK_LINE(702)
	::openfl::display::BitmapData bitmapData = ::openfl::display::BitmapData_obj::__new((int)0,(int)0,true,null());		HX_STACK_VAR(bitmapData,"bitmapData");
	HX_STACK_LINE(703)
	bitmapData->__fromFile(path,onload,onerror);
	HX_STACK_LINE(704)
	return bitmapData;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(BitmapData_obj,fromFile,return )

::openfl::display::BitmapData BitmapData_obj::fromImage( ::lime::graphics::Image image,hx::Null< bool >  __o_transparent){
bool transparent = __o_transparent.Default(true);
	HX_STACK_FRAME("openfl.display.BitmapData","fromImage",0x05fd7006,"openfl.display.BitmapData.fromImage","openfl/display/BitmapData.hx",709,0xdd12d5b9)
	HX_STACK_ARG(image,"image")
	HX_STACK_ARG(transparent,"transparent")
{
		HX_STACK_LINE(711)
		::openfl::display::BitmapData bitmapData = ::openfl::display::BitmapData_obj::__new((int)0,(int)0,transparent,null());		HX_STACK_VAR(bitmapData,"bitmapData");
		HX_STACK_LINE(712)
		bitmapData->__fromImage(image);
		HX_STACK_LINE(713)
		bitmapData->__image->set_transparent(transparent);
		HX_STACK_LINE(714)
		return bitmapData;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(BitmapData_obj,fromImage,return )

int BitmapData_obj::__flipPixel( int pixel){
	HX_STACK_FRAME("openfl.display.BitmapData","__flipPixel",0xc245472e,"openfl.display.BitmapData.__flipPixel","openfl/display/BitmapData.hx",1757,0xdd12d5b9)
	HX_STACK_ARG(pixel,"pixel")
	HX_STACK_LINE(1757)
	return (int((int((int((int(((int(pixel) & int((int)255)))) << int((int)24))) | int((int(((int((int(pixel) >> int((int)8))) & int((int)255)))) << int((int)16))))) | int((int(((int((int(pixel) >> int((int)16))) & int((int)255)))) << int((int)8))))) | int((int((int(pixel) >> int((int)24))) & int((int)255))));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,__flipPixel,return )

int BitmapData_obj::__ucompare( int n1,int n2){
	HX_STACK_FRAME("openfl.display.BitmapData","__ucompare",0x409df3db,"openfl.display.BitmapData.__ucompare","openfl/display/BitmapData.hx",1942,0xdd12d5b9)
	HX_STACK_ARG(n1,"n1")
	HX_STACK_ARG(n2,"n2")
	HX_STACK_LINE(1944)
	int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1945)
	int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1947)
	tmp1 = (int((int(n1) >> int((int)24))) & int((int)255));
	HX_STACK_LINE(1948)
	tmp2 = (int((int(n2) >> int((int)24))) & int((int)255));
	HX_STACK_LINE(1950)
	if (((tmp1 != tmp2))){
		HX_STACK_LINE(1952)
		if (((tmp1 > tmp2))){
			HX_STACK_LINE(1952)
			return (int)1;
		}
		else{
			HX_STACK_LINE(1952)
			return (int)-1;
		}
	}
	else{
		HX_STACK_LINE(1956)
		tmp1 = (int((int(n1) >> int((int)16))) & int((int)255));
		HX_STACK_LINE(1957)
		tmp2 = (int((int(n2) >> int((int)16))) & int((int)255));
		HX_STACK_LINE(1959)
		if (((tmp1 != tmp2))){
			HX_STACK_LINE(1961)
			if (((tmp1 > tmp2))){
				HX_STACK_LINE(1961)
				return (int)1;
			}
			else{
				HX_STACK_LINE(1961)
				return (int)-1;
			}
		}
		else{
			HX_STACK_LINE(1965)
			tmp1 = (int((int(n1) >> int((int)8))) & int((int)255));
			HX_STACK_LINE(1966)
			tmp2 = (int((int(n2) >> int((int)8))) & int((int)255));
			HX_STACK_LINE(1968)
			if (((tmp1 != tmp2))){
				HX_STACK_LINE(1970)
				if (((tmp1 > tmp2))){
					HX_STACK_LINE(1970)
					return (int)1;
				}
				else{
					HX_STACK_LINE(1970)
					return (int)-1;
				}
			}
			else{
				HX_STACK_LINE(1974)
				tmp1 = (int(n1) & int((int)255));
				HX_STACK_LINE(1975)
				tmp2 = (int(n2) & int((int)255));
				HX_STACK_LINE(1977)
				if (((tmp1 != tmp2))){
					HX_STACK_LINE(1979)
					if (((tmp1 > tmp2))){
						HX_STACK_LINE(1979)
						return (int)1;
					}
					else{
						HX_STACK_LINE(1979)
						return (int)-1;
					}
				}
				else{
					HX_STACK_LINE(1983)
					return (int)0;
				}
			}
		}
	}
	HX_STACK_LINE(1950)
	return (int)0;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(BitmapData_obj,__ucompare,return )


BitmapData_obj::BitmapData_obj()
{
}

void BitmapData_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BitmapData);
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(rect,"rect");
	HX_MARK_MEMBER_NAME(transparent,"transparent");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(__worldTransform,"__worldTransform");
	HX_MARK_MEMBER_NAME(__worldColorTransform,"__worldColorTransform");
	HX_MARK_MEMBER_NAME(__cacheAsBitmap,"__cacheAsBitmap");
	HX_MARK_MEMBER_NAME(__bgra,"__bgra");
	HX_MARK_MEMBER_NAME(__blendMode,"__blendMode");
	HX_MARK_MEMBER_NAME(__buffer,"__buffer");
	HX_MARK_MEMBER_NAME(__image,"__image");
	HX_MARK_MEMBER_NAME(__isValid,"__isValid");
	HX_MARK_MEMBER_NAME(__surface,"__surface");
	HX_MARK_MEMBER_NAME(__surfaceImage,"__surfaceImage");
	HX_MARK_MEMBER_NAME(__texture,"__texture");
	HX_MARK_MEMBER_NAME(__textureImage,"__textureImage");
	HX_MARK_MEMBER_NAME(__framebuffer,"__framebuffer");
	HX_MARK_MEMBER_NAME(__uvData,"__uvData");
	HX_MARK_MEMBER_NAME(__usingFramebuffer,"__usingFramebuffer");
	HX_MARK_END_CLASS();
}

void BitmapData_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(rect,"rect");
	HX_VISIT_MEMBER_NAME(transparent,"transparent");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(__worldTransform,"__worldTransform");
	HX_VISIT_MEMBER_NAME(__worldColorTransform,"__worldColorTransform");
	HX_VISIT_MEMBER_NAME(__cacheAsBitmap,"__cacheAsBitmap");
	HX_VISIT_MEMBER_NAME(__bgra,"__bgra");
	HX_VISIT_MEMBER_NAME(__blendMode,"__blendMode");
	HX_VISIT_MEMBER_NAME(__buffer,"__buffer");
	HX_VISIT_MEMBER_NAME(__image,"__image");
	HX_VISIT_MEMBER_NAME(__isValid,"__isValid");
	HX_VISIT_MEMBER_NAME(__surface,"__surface");
	HX_VISIT_MEMBER_NAME(__surfaceImage,"__surfaceImage");
	HX_VISIT_MEMBER_NAME(__texture,"__texture");
	HX_VISIT_MEMBER_NAME(__textureImage,"__textureImage");
	HX_VISIT_MEMBER_NAME(__framebuffer,"__framebuffer");
	HX_VISIT_MEMBER_NAME(__uvData,"__uvData");
	HX_VISIT_MEMBER_NAME(__usingFramebuffer,"__usingFramebuffer");
}

Dynamic BitmapData_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"rect") ) { return rect; }
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		if (HX_FIELD_EQ(inName,"lock") ) { return lock_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		if (HX_FIELD_EQ(inName,"merge") ) { return merge_dyn(); }
		if (HX_FIELD_EQ(inName,"noise") ) { return noise_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		if (HX_FIELD_EQ(inName,"__bgra") ) { return __bgra; }
		if (HX_FIELD_EQ(inName,"encode") ) { return encode_dyn(); }
		if (HX_FIELD_EQ(inName,"scroll") ) { return scroll_dyn(); }
		if (HX_FIELD_EQ(inName,"unlock") ) { return unlock_dyn(); }
		if (HX_FIELD_EQ(inName,"__sync") ) { return __sync_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"__image") ) { return __image; }
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		if (HX_FIELD_EQ(inName,"hitTest") ) { return hitTest_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"fromFile") ) { return fromFile_dyn(); }
		if (HX_FIELD_EQ(inName,"__buffer") ) { return __buffer; }
		if (HX_FIELD_EQ(inName,"__uvData") ) { return __uvData; }
		if (HX_FIELD_EQ(inName,"fillRect") ) { return fillRect_dyn(); }
		if (HX_FIELD_EQ(inName,"getPixel") ) { return getPixel_dyn(); }
		if (HX_FIELD_EQ(inName,"setPixel") ) { return setPixel_dyn(); }
		if (HX_FIELD_EQ(inName,"__drawGL") ) { return __drawGL_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fromBytes") ) { return fromBytes_dyn(); }
		if (HX_FIELD_EQ(inName,"fromImage") ) { return fromImage_dyn(); }
		if (HX_FIELD_EQ(inName,"__isValid") ) { return __isValid; }
		if (HX_FIELD_EQ(inName,"__surface") ) { return __surface; }
		if (HX_FIELD_EQ(inName,"__texture") ) { return __texture; }
		if (HX_FIELD_EQ(inName,"floodFill") ) { return floodFill_dyn(); }
		if (HX_FIELD_EQ(inName,"getBuffer") ) { return getBuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"getPixels") ) { return getPixels_dyn(); }
		if (HX_FIELD_EQ(inName,"getVector") ) { return getVector_dyn(); }
		if (HX_FIELD_EQ(inName,"histogram") ) { return histogram_dyn(); }
		if (HX_FIELD_EQ(inName,"setPixels") ) { return setPixels_dyn(); }
		if (HX_FIELD_EQ(inName,"setVector") ) { return setVector_dyn(); }
		if (HX_FIELD_EQ(inName,"threshold") ) { return threshold_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fromBase64") ) { return fromBase64_dyn(); }
		if (HX_FIELD_EQ(inName,"__ucompare") ) { return __ucompare_dyn(); }
		if (HX_FIELD_EQ(inName,"copyPixels") ) { return copyPixels_dyn(); }
		if (HX_FIELD_EQ(inName,"getPixel32") ) { return getPixel32_dyn(); }
		if (HX_FIELD_EQ(inName,"getSurface") ) { return getSurface_dyn(); }
		if (HX_FIELD_EQ(inName,"getTexture") ) { return getTexture_dyn(); }
		if (HX_FIELD_EQ(inName,"paletteMap") ) { return paletteMap_dyn(); }
		if (HX_FIELD_EQ(inName,"setPixel32") ) { return setPixel32_dyn(); }
		if (HX_FIELD_EQ(inName,"__fromFile") ) { return __fromFile_dyn(); }
		if (HX_FIELD_EQ(inName,"__renderGL") ) { return __renderGL_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__flipPixel") ) { return __flipPixel_dyn(); }
		if (HX_FIELD_EQ(inName,"transparent") ) { return transparent; }
		if (HX_FIELD_EQ(inName,"__blendMode") ) { return __blendMode; }
		if (HX_FIELD_EQ(inName,"applyFilter") ) { return applyFilter_dyn(); }
		if (HX_FIELD_EQ(inName,"copyChannel") ) { return copyChannel_dyn(); }
		if (HX_FIELD_EQ(inName,"perlinNoise") ) { return perlinNoise_dyn(); }
		if (HX_FIELD_EQ(inName,"__createUVs") ) { return __createUVs_dyn(); }
		if (HX_FIELD_EQ(inName,"__fromBytes") ) { return __fromBytes_dyn(); }
		if (HX_FIELD_EQ(inName,"__fromImage") ) { return __fromImage_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__flipMatrix") ) { return __flipMatrix_dyn(); }
		if (HX_FIELD_EQ(inName,"__fromBase64") ) { return __fromBase64_dyn(); }
		if (HX_FIELD_EQ(inName,"__updateMask") ) { return __updateMask_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__framebuffer") ) { return __framebuffer; }
		if (HX_FIELD_EQ(inName,"__renderCairo") ) { return __renderCairo_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__supportsBGRA") ) { return __supportsBGRA; }
		if (HX_FIELD_EQ(inName,"__surfaceImage") ) { return __surfaceImage; }
		if (HX_FIELD_EQ(inName,"__textureImage") ) { return __textureImage; }
		if (HX_FIELD_EQ(inName,"colorTransform") ) { return colorTransform_dyn(); }
		if (HX_FIELD_EQ(inName,"__renderCanvas") ) { return __renderCanvas_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__cacheAsBitmap") ) { return __cacheAsBitmap; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__worldTransform") ) { return __worldTransform; }
		if (HX_FIELD_EQ(inName,"__updateChildren") ) { return __updateChildren_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__renderCairoMask") ) { return __renderCairoMask_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__usingFramebuffer") ) { return __usingFramebuffer; }
		if (HX_FIELD_EQ(inName,"generateFilterRect") ) { return generateFilterRect_dyn(); }
		if (HX_FIELD_EQ(inName,"getColorBoundsRect") ) { return getColorBoundsRect_dyn(); }
		if (HX_FIELD_EQ(inName,"__renderCanvasMask") ) { return __renderCanvasMask_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"__worldColorTransform") ) { return __worldColorTransform; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic BitmapData_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"rect") ) { rect=inValue.Cast< ::openfl::geom::Rectangle >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__bgra") ) { __bgra=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"__image") ) { __image=inValue.Cast< ::lime::graphics::Image >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__buffer") ) { __buffer=inValue.Cast< ::lime::graphics::opengl::GLBuffer >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__uvData") ) { __uvData=inValue.Cast< ::openfl::display::TextureUvs >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__isValid") ) { __isValid=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__surface") ) { __surface=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__texture") ) { __texture=inValue.Cast< ::lime::graphics::opengl::GLTexture >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"transparent") ) { transparent=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__blendMode") ) { __blendMode=inValue.Cast< ::openfl::display::BlendMode >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__framebuffer") ) { __framebuffer=inValue.Cast< ::openfl::_internal::renderer::opengl::utils::FilterTexture >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__supportsBGRA") ) { __supportsBGRA=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__surfaceImage") ) { __surfaceImage=inValue.Cast< ::lime::graphics::Image >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__textureImage") ) { __textureImage=inValue.Cast< ::lime::graphics::Image >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__cacheAsBitmap") ) { __cacheAsBitmap=inValue.Cast< bool >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__worldTransform") ) { __worldTransform=inValue.Cast< ::openfl::geom::Matrix >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__usingFramebuffer") ) { __usingFramebuffer=inValue.Cast< bool >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"__worldColorTransform") ) { __worldColorTransform=inValue.Cast< ::openfl::geom::ColorTransform >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BitmapData_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("height"));
	outFields->push(HX_CSTRING("rect"));
	outFields->push(HX_CSTRING("transparent"));
	outFields->push(HX_CSTRING("width"));
	outFields->push(HX_CSTRING("__worldTransform"));
	outFields->push(HX_CSTRING("__worldColorTransform"));
	outFields->push(HX_CSTRING("__cacheAsBitmap"));
	outFields->push(HX_CSTRING("__bgra"));
	outFields->push(HX_CSTRING("__blendMode"));
	outFields->push(HX_CSTRING("__buffer"));
	outFields->push(HX_CSTRING("__image"));
	outFields->push(HX_CSTRING("__isValid"));
	outFields->push(HX_CSTRING("__surface"));
	outFields->push(HX_CSTRING("__surfaceImage"));
	outFields->push(HX_CSTRING("__texture"));
	outFields->push(HX_CSTRING("__textureImage"));
	outFields->push(HX_CSTRING("__framebuffer"));
	outFields->push(HX_CSTRING("__uvData"));
	outFields->push(HX_CSTRING("__usingFramebuffer"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("__supportsBGRA"),
	HX_CSTRING("fromBase64"),
	HX_CSTRING("fromBytes"),
	HX_CSTRING("fromFile"),
	HX_CSTRING("fromImage"),
	HX_CSTRING("__flipPixel"),
	HX_CSTRING("__ucompare"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(BitmapData_obj,height),HX_CSTRING("height")},
	{hx::fsObject /*::openfl::geom::Rectangle*/ ,(int)offsetof(BitmapData_obj,rect),HX_CSTRING("rect")},
	{hx::fsBool,(int)offsetof(BitmapData_obj,transparent),HX_CSTRING("transparent")},
	{hx::fsInt,(int)offsetof(BitmapData_obj,width),HX_CSTRING("width")},
	{hx::fsObject /*::openfl::geom::Matrix*/ ,(int)offsetof(BitmapData_obj,__worldTransform),HX_CSTRING("__worldTransform")},
	{hx::fsObject /*::openfl::geom::ColorTransform*/ ,(int)offsetof(BitmapData_obj,__worldColorTransform),HX_CSTRING("__worldColorTransform")},
	{hx::fsBool,(int)offsetof(BitmapData_obj,__cacheAsBitmap),HX_CSTRING("__cacheAsBitmap")},
	{hx::fsBool,(int)offsetof(BitmapData_obj,__bgra),HX_CSTRING("__bgra")},
	{hx::fsObject /*::openfl::display::BlendMode*/ ,(int)offsetof(BitmapData_obj,__blendMode),HX_CSTRING("__blendMode")},
	{hx::fsObject /*::lime::graphics::opengl::GLBuffer*/ ,(int)offsetof(BitmapData_obj,__buffer),HX_CSTRING("__buffer")},
	{hx::fsObject /*::lime::graphics::Image*/ ,(int)offsetof(BitmapData_obj,__image),HX_CSTRING("__image")},
	{hx::fsBool,(int)offsetof(BitmapData_obj,__isValid),HX_CSTRING("__isValid")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(BitmapData_obj,__surface),HX_CSTRING("__surface")},
	{hx::fsObject /*::lime::graphics::Image*/ ,(int)offsetof(BitmapData_obj,__surfaceImage),HX_CSTRING("__surfaceImage")},
	{hx::fsObject /*::lime::graphics::opengl::GLTexture*/ ,(int)offsetof(BitmapData_obj,__texture),HX_CSTRING("__texture")},
	{hx::fsObject /*::lime::graphics::Image*/ ,(int)offsetof(BitmapData_obj,__textureImage),HX_CSTRING("__textureImage")},
	{hx::fsObject /*::openfl::_internal::renderer::opengl::utils::FilterTexture*/ ,(int)offsetof(BitmapData_obj,__framebuffer),HX_CSTRING("__framebuffer")},
	{hx::fsObject /*::openfl::display::TextureUvs*/ ,(int)offsetof(BitmapData_obj,__uvData),HX_CSTRING("__uvData")},
	{hx::fsBool,(int)offsetof(BitmapData_obj,__usingFramebuffer),HX_CSTRING("__usingFramebuffer")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("height"),
	HX_CSTRING("rect"),
	HX_CSTRING("transparent"),
	HX_CSTRING("width"),
	HX_CSTRING("__worldTransform"),
	HX_CSTRING("__worldColorTransform"),
	HX_CSTRING("__cacheAsBitmap"),
	HX_CSTRING("__bgra"),
	HX_CSTRING("__blendMode"),
	HX_CSTRING("__buffer"),
	HX_CSTRING("__image"),
	HX_CSTRING("__isValid"),
	HX_CSTRING("__surface"),
	HX_CSTRING("__surfaceImage"),
	HX_CSTRING("__texture"),
	HX_CSTRING("__textureImage"),
	HX_CSTRING("__framebuffer"),
	HX_CSTRING("__uvData"),
	HX_CSTRING("__usingFramebuffer"),
	HX_CSTRING("applyFilter"),
	HX_CSTRING("clone"),
	HX_CSTRING("colorTransform"),
	HX_CSTRING("copyChannel"),
	HX_CSTRING("copyPixels"),
	HX_CSTRING("dispose"),
	HX_CSTRING("draw"),
	HX_CSTRING("encode"),
	HX_CSTRING("fillRect"),
	HX_CSTRING("floodFill"),
	HX_CSTRING("generateFilterRect"),
	HX_CSTRING("getBuffer"),
	HX_CSTRING("getColorBoundsRect"),
	HX_CSTRING("getPixel"),
	HX_CSTRING("getPixel32"),
	HX_CSTRING("getPixels"),
	HX_CSTRING("getSurface"),
	HX_CSTRING("getTexture"),
	HX_CSTRING("getVector"),
	HX_CSTRING("histogram"),
	HX_CSTRING("hitTest"),
	HX_CSTRING("lock"),
	HX_CSTRING("merge"),
	HX_CSTRING("noise"),
	HX_CSTRING("paletteMap"),
	HX_CSTRING("perlinNoise"),
	HX_CSTRING("scroll"),
	HX_CSTRING("setPixel"),
	HX_CSTRING("setPixel32"),
	HX_CSTRING("setPixels"),
	HX_CSTRING("setVector"),
	HX_CSTRING("threshold"),
	HX_CSTRING("unlock"),
	HX_CSTRING("__createUVs"),
	HX_CSTRING("__drawGL"),
	HX_CSTRING("__flipMatrix"),
	HX_CSTRING("__fromBase64"),
	HX_CSTRING("__fromBytes"),
	HX_CSTRING("__fromFile"),
	HX_CSTRING("__fromImage"),
	HX_CSTRING("__renderCairo"),
	HX_CSTRING("__renderCairoMask"),
	HX_CSTRING("__renderCanvas"),
	HX_CSTRING("__renderCanvasMask"),
	HX_CSTRING("__renderGL"),
	HX_CSTRING("__sync"),
	HX_CSTRING("__updateChildren"),
	HX_CSTRING("__updateMask"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BitmapData_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(BitmapData_obj::__supportsBGRA,"__supportsBGRA");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BitmapData_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(BitmapData_obj::__supportsBGRA,"__supportsBGRA");
};

#endif

Class BitmapData_obj::__mClass;

void BitmapData_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl.display.BitmapData"), hx::TCanCast< BitmapData_obj> ,sStaticFields,sMemberFields,
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

void BitmapData_obj::__boot()
{
}

} // end namespace openfl
} // end namespace display
