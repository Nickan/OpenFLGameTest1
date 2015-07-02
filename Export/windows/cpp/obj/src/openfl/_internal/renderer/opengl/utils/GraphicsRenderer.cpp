#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
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
#ifndef INCLUDED_lime_graphics_opengl_GLTexture
#include <lime/graphics/opengl/GLTexture.h>
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
#ifndef INCLUDED_lime_utils_UInt32Array
#include <lime/utils/UInt32Array.h>
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
#ifndef INCLUDED_openfl__internal_renderer_opengl_shaders2_DrawTrianglesShader
#include <openfl/_internal/renderer/opengl/shaders2/DrawTrianglesShader.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_shaders2_FillShader
#include <openfl/_internal/renderer/opengl/shaders2/FillShader.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_shaders2_PatternFillShader
#include <openfl/_internal/renderer/opengl/shaders2/PatternFillShader.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_shaders2_PrimitiveShader
#include <openfl/_internal/renderer/opengl/shaders2/PrimitiveShader.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_shaders2_Shader
#include <openfl/_internal/renderer/opengl/shaders2/Shader.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_BlendModeManager
#include <openfl/_internal/renderer/opengl/utils/BlendModeManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_BucketDataType
#include <openfl/_internal/renderer/opengl/utils/BucketDataType.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_BucketMode
#include <openfl/_internal/renderer/opengl/utils/BucketMode.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_DrawPath
#include <openfl/_internal/renderer/opengl/utils/DrawPath.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_FillType
#include <openfl/_internal/renderer/opengl/utils/FillType.h>
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
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_GraphicType
#include <openfl/_internal/renderer/opengl/utils/GraphicType.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_GraphicsRenderer
#include <openfl/_internal/renderer/opengl/utils/GraphicsRenderer.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_LineStyle
#include <openfl/_internal/renderer/opengl/utils/LineStyle.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_PolyK
#include <openfl/_internal/renderer/opengl/utils/PolyK.h>
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
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_VertexArray
#include <openfl/_internal/renderer/opengl/utils/VertexArray.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_VertexAttribute
#include <openfl/_internal/renderer/opengl/utils/VertexAttribute.h>
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
#ifndef INCLUDED_openfl_display_DrawCommand
#include <openfl/display/DrawCommand.h>
#endif
#ifndef INCLUDED_openfl_display_Graphics
#include <openfl/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_Tilesheet
#include <openfl/display/Tilesheet.h>
#endif
#ifndef INCLUDED_openfl_display_TriangleCulling
#include <openfl/display/TriangleCulling.h>
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
namespace utils{

Void GraphicsRenderer_obj::__construct()
{
	return null();
}

//GraphicsRenderer_obj::~GraphicsRenderer_obj() { }

Dynamic GraphicsRenderer_obj::__CreateEmpty() { return  new GraphicsRenderer_obj; }
hx::ObjectPtr< GraphicsRenderer_obj > GraphicsRenderer_obj::__new()
{  hx::ObjectPtr< GraphicsRenderer_obj > result = new GraphicsRenderer_obj();
	result->__construct();
	return result;}

Dynamic GraphicsRenderer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GraphicsRenderer_obj > result = new GraphicsRenderer_obj();
	result->__construct();
	return result;}

Array< ::Dynamic > GraphicsRenderer_obj::fillVertexAttributes;

Array< ::Dynamic > GraphicsRenderer_obj::drawTrianglesVertexAttributes;

Array< ::Dynamic > GraphicsRenderer_obj::primitiveVertexAttributes;

Array< ::Dynamic > GraphicsRenderer_obj::graphicsDataPool;

Array< ::Dynamic > GraphicsRenderer_obj::bucketPool;

Float GraphicsRenderer_obj::SIN45;

Float GraphicsRenderer_obj::TAN22;

::openfl::geom::Point GraphicsRenderer_obj::objectPosition;

::openfl::geom::Rectangle GraphicsRenderer_obj::objectBounds;

::lime::graphics::opengl::GLBuffer GraphicsRenderer_obj::lastVertsBuffer;

::openfl::_internal::renderer::opengl::utils::BucketMode GraphicsRenderer_obj::lastBucketMode;

::lime::graphics::opengl::GLTexture GraphicsRenderer_obj::lastTexture;

bool GraphicsRenderer_obj::lastTextureRepeat;

bool GraphicsRenderer_obj::lastTextureSmooth;

::openfl::geom::Matrix GraphicsRenderer_obj::overrideMatrix;

Void GraphicsRenderer_obj::buildCircle( ::openfl::_internal::renderer::opengl::utils::DrawPath path,::openfl::_internal::renderer::opengl::utils::GLStack glStack,hx::Null< bool >  __o_localCoords){
bool localCoords = __o_localCoords.Default(false);
	HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.GraphicsRenderer","buildCircle",0x5396c8ff,"openfl._internal.renderer.opengl.utils.GraphicsRenderer.buildCircle","openfl/_internal/renderer/opengl/utils/GraphicsRenderer.hx",78,0xd295150c)
	HX_STACK_ARG(path,"path")
	HX_STACK_ARG(glStack,"glStack")
	HX_STACK_ARG(localCoords,"localCoords")
{
		HX_STACK_LINE(79)
		Array< Float > rectData = path->points;		HX_STACK_VAR(rectData,"rectData");
		HX_STACK_LINE(81)
		Float x = rectData->__get((int)0);		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(82)
		Float y = rectData->__get((int)1);		HX_STACK_VAR(y,"y");
		HX_STACK_LINE(83)
		Float width = rectData->__get((int)2);		HX_STACK_VAR(width,"width");
		HX_STACK_LINE(84)
		Float height;		HX_STACK_VAR(height,"height");
		HX_STACK_LINE(84)
		if (((rectData->length == (int)3))){
			HX_STACK_LINE(84)
			height = width;
		}
		else{
			HX_STACK_LINE(84)
			height = rectData->__get((int)3);
		}
		HX_STACK_LINE(86)
		if (((path->type == ::openfl::_internal::renderer::opengl::utils::GraphicType_obj::Ellipse))){
			HX_STACK_LINE(87)
			hx::DivEq(width,(int)2);
			HX_STACK_LINE(88)
			hx::DivEq(height,(int)2);
			HX_STACK_LINE(89)
			hx::AddEq(x,width);
			HX_STACK_LINE(90)
			hx::AddEq(y,height);
		}
		HX_STACK_LINE(93)
		if ((localCoords)){
			HX_STACK_LINE(94)
			hx::SubEq(x,::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::objectBounds->x);
			HX_STACK_LINE(95)
			hx::SubEq(y,::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::objectBounds->y);
		}
		HX_STACK_LINE(98)
		int totalSegs = (int)40;		HX_STACK_VAR(totalSegs,"totalSegs");
		HX_STACK_LINE(99)
		Float seg = (Float((::Math_obj::PI * (int)2)) / Float(totalSegs));		HX_STACK_VAR(seg,"seg");
		HX_STACK_LINE(101)
		::openfl::_internal::renderer::opengl::utils::GLBucket bucket = ::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::prepareBucket(path,glStack);		HX_STACK_VAR(bucket,"bucket");
		HX_STACK_LINE(102)
		::openfl::_internal::renderer::opengl::utils::GLBucketData fill = bucket->getData(::openfl::_internal::renderer::opengl::utils::BucketDataType_obj::Fill);		HX_STACK_VAR(fill,"fill");
		HX_STACK_LINE(104)
		if (((fill != null()))){
			HX_STACK_LINE(105)
			Array< Float > verts = fill->verts;		HX_STACK_VAR(verts,"verts");
			HX_STACK_LINE(106)
			Array< int > indices = fill->indices;		HX_STACK_VAR(indices,"indices");
			HX_STACK_LINE(108)
			int vertPos = ::Std_obj::_int((Float(verts->length) / Float((int)2)));		HX_STACK_VAR(vertPos,"vertPos");
			HX_STACK_LINE(110)
			indices->push(vertPos);
			HX_STACK_LINE(112)
			{
				HX_STACK_LINE(112)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(112)
				int _g = (totalSegs + (int)1);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(112)
				while((true)){
					HX_STACK_LINE(112)
					if ((!(((_g1 < _g))))){
						HX_STACK_LINE(112)
						break;
					}
					HX_STACK_LINE(112)
					int i = (_g1)++;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(114)
					verts->push(x);
					HX_STACK_LINE(115)
					verts->push(y);
					HX_STACK_LINE(117)
					Float _g2 = ::Math_obj::sin((seg * i));		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(117)
					Float _g11 = (_g2 * width);		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(117)
					Float _g21 = (x + _g11);		HX_STACK_VAR(_g21,"_g21");
					HX_STACK_LINE(117)
					verts->push(_g21);
					HX_STACK_LINE(118)
					Float _g3 = ::Math_obj::cos((seg * i));		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(118)
					Float _g4 = (_g3 * height);		HX_STACK_VAR(_g4,"_g4");
					HX_STACK_LINE(118)
					Float _g5 = (y + _g4);		HX_STACK_VAR(_g5,"_g5");
					HX_STACK_LINE(118)
					verts->push(_g5);
					HX_STACK_LINE(120)
					int _g6 = (vertPos)++;		HX_STACK_VAR(_g6,"_g6");
					HX_STACK_LINE(120)
					indices->push(_g6);
					HX_STACK_LINE(121)
					int _g7 = (vertPos)++;		HX_STACK_VAR(_g7,"_g7");
					HX_STACK_LINE(121)
					indices->push(_g7);
				}
			}
			HX_STACK_LINE(125)
			indices->push((vertPos - (int)1));
		}
		HX_STACK_LINE(130)
		if (((path->line->width > (int)0))){
			HX_STACK_LINE(132)
			Array< Float > tempPoints = path->points;		HX_STACK_VAR(tempPoints,"tempPoints");
			HX_STACK_LINE(133)
			path->points = Array_obj< Float >::__new();
			HX_STACK_LINE(135)
			{
				HX_STACK_LINE(135)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(135)
				int _g = (totalSegs + (int)1);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(135)
				while((true)){
					HX_STACK_LINE(135)
					if ((!(((_g1 < _g))))){
						HX_STACK_LINE(135)
						break;
					}
					HX_STACK_LINE(135)
					int i = (_g1)++;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(137)
					Float _g8 = ::Math_obj::sin((seg * i));		HX_STACK_VAR(_g8,"_g8");
					HX_STACK_LINE(137)
					Float _g9 = (_g8 * width);		HX_STACK_VAR(_g9,"_g9");
					HX_STACK_LINE(137)
					Float _g10 = (x + _g9);		HX_STACK_VAR(_g10,"_g10");
					HX_STACK_LINE(137)
					path->points->push(_g10);
					HX_STACK_LINE(138)
					Float _g11 = ::Math_obj::cos((seg * i));		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(138)
					Float _g12 = (_g11 * height);		HX_STACK_VAR(_g12,"_g12");
					HX_STACK_LINE(138)
					Float _g13 = (y + _g12);		HX_STACK_VAR(_g13,"_g13");
					HX_STACK_LINE(138)
					path->points->push(_g13);
				}
			}
			HX_STACK_LINE(142)
			::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::buildLine(path,bucket,null());
			HX_STACK_LINE(143)
			path->points = tempPoints;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GraphicsRenderer_obj,buildCircle,(void))

Void GraphicsRenderer_obj::buildComplexPoly( ::openfl::_internal::renderer::opengl::utils::DrawPath path,::openfl::_internal::renderer::opengl::utils::GLStack glStack,hx::Null< bool >  __o_localCoords){
bool localCoords = __o_localCoords.Default(false);
	HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.GraphicsRenderer","buildComplexPoly",0xd9b80f4d,"openfl._internal.renderer.opengl.utils.GraphicsRenderer.buildComplexPoly","openfl/_internal/renderer/opengl/utils/GraphicsRenderer.hx",149,0xd295150c)
	HX_STACK_ARG(path,"path")
	HX_STACK_ARG(glStack,"glStack")
	HX_STACK_ARG(localCoords,"localCoords")
{
		HX_STACK_LINE(151)
		::openfl::_internal::renderer::opengl::utils::GLBucket bucket = null();		HX_STACK_VAR(bucket,"bucket");
		HX_STACK_LINE(153)
		if (((path->points->length >= (int)6))){
			HX_STACK_LINE(154)
			Array< Float > points = path->points->copy();		HX_STACK_VAR(points,"points");
			HX_STACK_LINE(156)
			if ((localCoords)){
				HX_STACK_LINE(157)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(157)
				int _g = ::Std_obj::_int((Float(points->length) / Float((int)2)));		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(157)
				while((true)){
					HX_STACK_LINE(157)
					if ((!(((_g1 < _g))))){
						HX_STACK_LINE(157)
						break;
					}
					HX_STACK_LINE(157)
					int i = (_g1)++;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(158)
					hx::SubEq(points[(i * (int)2)],::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::objectBounds->x);
					HX_STACK_LINE(159)
					hx::SubEq(points[((i * (int)2) + (int)1)],::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::objectBounds->y);
				}
			}
			HX_STACK_LINE(164)
			::openfl::_internal::renderer::opengl::utils::GLBucket _g = ::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::prepareBucket(path,glStack);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(164)
			bucket = _g;
			HX_STACK_LINE(165)
			::openfl::_internal::renderer::opengl::utils::GLBucketData fill = bucket->getData(::openfl::_internal::renderer::opengl::utils::BucketDataType_obj::Fill);		HX_STACK_VAR(fill,"fill");
			HX_STACK_LINE(166)
			fill->drawMode = glStack->gl->TRIANGLE_FAN;
			HX_STACK_LINE(167)
			fill->verts = points;
			HX_STACK_LINE(169)
			Array< int > indices = fill->indices;		HX_STACK_VAR(indices,"indices");
			HX_STACK_LINE(170)
			int length = ::Std_obj::_int((Float(points->length) / Float((int)2)));		HX_STACK_VAR(length,"length");
			HX_STACK_LINE(171)
			{
				HX_STACK_LINE(171)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(171)
				while((true)){
					HX_STACK_LINE(171)
					if ((!(((_g1 < length))))){
						HX_STACK_LINE(171)
						break;
					}
					HX_STACK_LINE(171)
					int i = (_g1)++;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(173)
					indices->push(i);
				}
			}
		}
		HX_STACK_LINE(178)
		if (((path->line->width > (int)0))){
			HX_STACK_LINE(180)
			if (((bucket == null()))){
				HX_STACK_LINE(181)
				::openfl::_internal::renderer::opengl::utils::GLBucket _g1 = ::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::prepareBucket(path,glStack);		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(181)
				bucket = _g1;
			}
			HX_STACK_LINE(183)
			::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::buildLine(path,bucket,localCoords);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GraphicsRenderer_obj,buildComplexPoly,(void))

Void GraphicsRenderer_obj::buildLine( ::openfl::_internal::renderer::opengl::utils::DrawPath path,::openfl::_internal::renderer::opengl::utils::GLBucket bucket,hx::Null< bool >  __o_localCoords){
bool localCoords = __o_localCoords.Default(false);
	HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.GraphicsRenderer","buildLine",0xe6638523,"openfl._internal.renderer.opengl.utils.GraphicsRenderer.buildLine","openfl/_internal/renderer/opengl/utils/GraphicsRenderer.hx",188,0xd295150c)
	HX_STACK_ARG(path,"path")
	HX_STACK_ARG(bucket,"bucket")
	HX_STACK_ARG(localCoords,"localCoords")
{
		HX_STACK_LINE(190)
		Array< Float > points = path->points;		HX_STACK_VAR(points,"points");
		HX_STACK_LINE(191)
		if (((points->length == (int)0))){
			HX_STACK_LINE(191)
			return null();
		}
		HX_STACK_LINE(193)
		::openfl::_internal::renderer::opengl::utils::GLBucketData line = bucket->getData(::openfl::_internal::renderer::opengl::utils::BucketDataType_obj::Line);		HX_STACK_VAR(line,"line");
		HX_STACK_LINE(195)
		if ((localCoords)){
			HX_STACK_LINE(196)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(196)
			int _g = ::Std_obj::_int((Float(points->length) / Float((int)2)));		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(196)
			while((true)){
				HX_STACK_LINE(196)
				if ((!(((_g1 < _g))))){
					HX_STACK_LINE(196)
					break;
				}
				HX_STACK_LINE(196)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(197)
				hx::SubEq(points[(i * (int)2)],::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::objectBounds->x);
				HX_STACK_LINE(198)
				hx::SubEq(points[((i * (int)2) + (int)1)],::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::objectBounds->y);
			}
		}
		HX_STACK_LINE(215)
		::openfl::geom::Point firstPoint = ::openfl::geom::Point_obj::__new(points->__get((int)0),points->__get((int)1));		HX_STACK_VAR(firstPoint,"firstPoint");
		HX_STACK_LINE(216)
		int _g = ::Std_obj::_int((points->length - (int)2));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(216)
		Float _g1 = points->__get(_g);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(216)
		int _g2 = ::Std_obj::_int((points->length - (int)1));		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(216)
		Float _g3 = points->__get(_g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(216)
		::openfl::geom::Point lastPoint = ::openfl::geom::Point_obj::__new(_g1,_g3);		HX_STACK_VAR(lastPoint,"lastPoint");
		HX_STACK_LINE(218)
		if (((bool((firstPoint->x == lastPoint->x)) && bool((firstPoint->y == lastPoint->y))))){
			HX_STACK_LINE(220)
			Array< Float > _g4 = points->copy();		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(220)
			points = _g4;
			HX_STACK_LINE(222)
			points->pop();
			HX_STACK_LINE(223)
			points->pop();
			HX_STACK_LINE(225)
			int _g5 = ::Std_obj::_int((points->length - (int)2));		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(225)
			Float _g6 = points->__get(_g5);		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(225)
			int _g7 = ::Std_obj::_int((points->length - (int)1));		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(225)
			Float _g8 = points->__get(_g7);		HX_STACK_VAR(_g8,"_g8");
			HX_STACK_LINE(225)
			::openfl::geom::Point _g9 = ::openfl::geom::Point_obj::__new(_g6,_g8);		HX_STACK_VAR(_g9,"_g9");
			HX_STACK_LINE(225)
			lastPoint = _g9;
			HX_STACK_LINE(227)
			Float midPointX = (lastPoint->x + (((firstPoint->x - lastPoint->x)) * 0.5));		HX_STACK_VAR(midPointX,"midPointX");
			HX_STACK_LINE(228)
			Float midPointY = (lastPoint->y + (((firstPoint->y - lastPoint->y)) * 0.5));		HX_STACK_VAR(midPointY,"midPointY");
			HX_STACK_LINE(230)
			points->unshift(midPointY);
			HX_STACK_LINE(231)
			points->unshift(midPointX);
			HX_STACK_LINE(232)
			points->push(midPointX);
			HX_STACK_LINE(233)
			points->push(midPointY);
		}
		HX_STACK_LINE(237)
		Array< Float > verts = line->verts;		HX_STACK_VAR(verts,"verts");
		HX_STACK_LINE(238)
		Array< int > indices = line->indices;		HX_STACK_VAR(indices,"indices");
		HX_STACK_LINE(239)
		int length = ::Std_obj::_int((Float(points->length) / Float((int)2)));		HX_STACK_VAR(length,"length");
		HX_STACK_LINE(240)
		int indexCount = points->length;		HX_STACK_VAR(indexCount,"indexCount");
		HX_STACK_LINE(241)
		int indexStart = ::Std_obj::_int((Float(verts->length) / Float((int)6)));		HX_STACK_VAR(indexStart,"indexStart");
		HX_STACK_LINE(243)
		Float width = (Float(path->line->width) / Float((int)2));		HX_STACK_VAR(width,"width");
		HX_STACK_LINE(245)
		Array< Float > color;		HX_STACK_VAR(color,"color");
		HX_STACK_LINE(245)
		{
			HX_STACK_LINE(245)
			Dynamic hex = path->line->color;		HX_STACK_VAR(hex,"hex");
			HX_STACK_LINE(245)
			if (((hex == null()))){
				HX_STACK_LINE(245)
				color = Array_obj< Float >::__new().Add((int)1).Add((int)1).Add((int)1);
			}
			else{
				HX_STACK_LINE(245)
				color = Array_obj< Float >::__new().Add((Float(((int((int(hex) >> int((int)16))) & int((int)255)))) / Float((int)255))).Add((Float(((int((int(hex) >> int((int)8))) & int((int)255)))) / Float((int)255))).Add((Float(((int(hex) & int((int)255)))) / Float((int)255)));
			}
		}
		HX_STACK_LINE(246)
		Dynamic alpha = path->line->alpha;		HX_STACK_VAR(alpha,"alpha");
		HX_STACK_LINE(247)
		Float r = color->__get((int)0);		HX_STACK_VAR(r,"r");
		HX_STACK_LINE(248)
		Float g = color->__get((int)1);		HX_STACK_VAR(g,"g");
		HX_STACK_LINE(249)
		Float b = color->__get((int)2);		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(251)
		Float px;		HX_STACK_VAR(px,"px");
		HX_STACK_LINE(251)
		Float py;		HX_STACK_VAR(py,"py");
		HX_STACK_LINE(251)
		Float p1x;		HX_STACK_VAR(p1x,"p1x");
		HX_STACK_LINE(251)
		Float p1y;		HX_STACK_VAR(p1y,"p1y");
		HX_STACK_LINE(251)
		Float p2x;		HX_STACK_VAR(p2x,"p2x");
		HX_STACK_LINE(251)
		Float p2y;		HX_STACK_VAR(p2y,"p2y");
		HX_STACK_LINE(251)
		Float p3x;		HX_STACK_VAR(p3x,"p3x");
		HX_STACK_LINE(251)
		Float p3y;		HX_STACK_VAR(p3y,"p3y");
		HX_STACK_LINE(252)
		Float perpx;		HX_STACK_VAR(perpx,"perpx");
		HX_STACK_LINE(252)
		Float perpy;		HX_STACK_VAR(perpy,"perpy");
		HX_STACK_LINE(252)
		Float perp2x;		HX_STACK_VAR(perp2x,"perp2x");
		HX_STACK_LINE(252)
		Float perp2y;		HX_STACK_VAR(perp2y,"perp2y");
		HX_STACK_LINE(252)
		Float perp3x;		HX_STACK_VAR(perp3x,"perp3x");
		HX_STACK_LINE(252)
		Float perp3y;		HX_STACK_VAR(perp3y,"perp3y");
		HX_STACK_LINE(253)
		Float a1;		HX_STACK_VAR(a1,"a1");
		HX_STACK_LINE(253)
		Float b1;		HX_STACK_VAR(b1,"b1");
		HX_STACK_LINE(253)
		Float c1;		HX_STACK_VAR(c1,"c1");
		HX_STACK_LINE(253)
		Float a2;		HX_STACK_VAR(a2,"a2");
		HX_STACK_LINE(253)
		Float b2;		HX_STACK_VAR(b2,"b2");
		HX_STACK_LINE(253)
		Float c2;		HX_STACK_VAR(c2,"c2");
		HX_STACK_LINE(254)
		Float denom;		HX_STACK_VAR(denom,"denom");
		HX_STACK_LINE(254)
		Float pdist;		HX_STACK_VAR(pdist,"pdist");
		HX_STACK_LINE(254)
		Float dist;		HX_STACK_VAR(dist,"dist");
		HX_STACK_LINE(256)
		p1x = points->__get((int)0);
		HX_STACK_LINE(257)
		p1y = points->__get((int)1);
		HX_STACK_LINE(259)
		p2x = points->__get((int)2);
		HX_STACK_LINE(260)
		p2y = points->__get((int)3);
		HX_STACK_LINE(262)
		perpx = -(((p1y - p2y)));
		HX_STACK_LINE(263)
		perpy = (p1x - p2x);
		HX_STACK_LINE(265)
		Float _g10 = ::Math_obj::abs(((perpx * perpx) + (perpy * perpy)));		HX_STACK_VAR(_g10,"_g10");
		HX_STACK_LINE(265)
		Float _g11 = ::Math_obj::sqrt(_g10);		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(265)
		dist = _g11;
		HX_STACK_LINE(267)
		perpx = (Float(perpx) / Float(dist));
		HX_STACK_LINE(268)
		perpy = (Float(perpy) / Float(dist));
		HX_STACK_LINE(269)
		perpx = (perpx * width);
		HX_STACK_LINE(270)
		perpy = (perpy * width);
		HX_STACK_LINE(272)
		verts->push((p1x - perpx));
		HX_STACK_LINE(273)
		verts->push((p1y - perpy));
		HX_STACK_LINE(274)
		verts->push(r);
		HX_STACK_LINE(275)
		verts->push(g);
		HX_STACK_LINE(276)
		verts->push(b);
		HX_STACK_LINE(277)
		verts->push(alpha);
		HX_STACK_LINE(279)
		verts->push((p1x + perpx));
		HX_STACK_LINE(280)
		verts->push((p1y + perpy));
		HX_STACK_LINE(281)
		verts->push(r);
		HX_STACK_LINE(282)
		verts->push(g);
		HX_STACK_LINE(283)
		verts->push(b);
		HX_STACK_LINE(284)
		verts->push(alpha);
		HX_STACK_LINE(286)
		{
			HX_STACK_LINE(286)
			int _g12 = (int)1;		HX_STACK_VAR(_g12,"_g12");
			HX_STACK_LINE(286)
			int _g4 = (length - (int)1);		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(286)
			while((true)){
				HX_STACK_LINE(286)
				if ((!(((_g12 < _g4))))){
					HX_STACK_LINE(286)
					break;
				}
				HX_STACK_LINE(286)
				int i = (_g12)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(288)
				p1x = points->__get((((i - (int)1)) * (int)2));
				HX_STACK_LINE(289)
				p1y = points->__get(((((i - (int)1)) * (int)2) + (int)1));
				HX_STACK_LINE(290)
				p2x = points->__get((i * (int)2));
				HX_STACK_LINE(291)
				p2y = points->__get(((i * (int)2) + (int)1));
				HX_STACK_LINE(292)
				p3x = points->__get((((i + (int)1)) * (int)2));
				HX_STACK_LINE(293)
				p3y = points->__get(((((i + (int)1)) * (int)2) + (int)1));
				HX_STACK_LINE(295)
				perpx = -(((p1y - p2y)));
				HX_STACK_LINE(296)
				perpy = (p1x - p2x);
				HX_STACK_LINE(298)
				Float _g121 = ::Math_obj::abs(((perpx * perpx) + (perpy * perpy)));		HX_STACK_VAR(_g121,"_g121");
				HX_STACK_LINE(298)
				Float _g13 = ::Math_obj::sqrt(_g121);		HX_STACK_VAR(_g13,"_g13");
				HX_STACK_LINE(298)
				dist = _g13;
				HX_STACK_LINE(299)
				perpx = (Float(perpx) / Float(dist));
				HX_STACK_LINE(300)
				perpy = (Float(perpy) / Float(dist));
				HX_STACK_LINE(301)
				perpx = (perpx * width);
				HX_STACK_LINE(302)
				perpy = (perpy * width);
				HX_STACK_LINE(304)
				perp2x = -(((p2y - p3y)));
				HX_STACK_LINE(305)
				perp2y = (p2x - p3x);
				HX_STACK_LINE(307)
				Float _g14 = ::Math_obj::abs(((perp2x * perp2x) + (perp2y * perp2y)));		HX_STACK_VAR(_g14,"_g14");
				HX_STACK_LINE(307)
				Float _g15 = ::Math_obj::sqrt(_g14);		HX_STACK_VAR(_g15,"_g15");
				HX_STACK_LINE(307)
				dist = _g15;
				HX_STACK_LINE(308)
				perp2x = (Float(perp2x) / Float(dist));
				HX_STACK_LINE(309)
				perp2y = (Float(perp2y) / Float(dist));
				HX_STACK_LINE(310)
				perp2x = (perp2x * width);
				HX_STACK_LINE(311)
				perp2y = (perp2y * width);
				HX_STACK_LINE(313)
				a1 = ((-(perpy) + p1y) - ((-(perpy) + p2y)));
				HX_STACK_LINE(314)
				b1 = ((-(perpx) + p2x) - ((-(perpx) + p1x)));
				HX_STACK_LINE(315)
				c1 = ((((-(perpx) + p1x)) * ((-(perpy) + p2y))) - (((-(perpx) + p2x)) * ((-(perpy) + p1y))));
				HX_STACK_LINE(316)
				a2 = ((-(perp2y) + p3y) - ((-(perp2y) + p2y)));
				HX_STACK_LINE(317)
				b2 = ((-(perp2x) + p2x) - ((-(perp2x) + p3x)));
				HX_STACK_LINE(318)
				c2 = ((((-(perp2x) + p3x)) * ((-(perp2y) + p2y))) - (((-(perp2x) + p2x)) * ((-(perp2y) + p3y))));
				HX_STACK_LINE(320)
				denom = ((a1 * b2) - (a2 * b1));
				HX_STACK_LINE(322)
				Float _g16 = ::Math_obj::abs(denom);		HX_STACK_VAR(_g16,"_g16");
				HX_STACK_LINE(322)
				if (((_g16 < 0.1))){
					HX_STACK_LINE(324)
					hx::AddEq(denom,10.1);
					HX_STACK_LINE(326)
					verts->push((p2x - perpx));
					HX_STACK_LINE(327)
					verts->push((p2y - perpy));
					HX_STACK_LINE(328)
					verts->push(r);
					HX_STACK_LINE(329)
					verts->push(g);
					HX_STACK_LINE(330)
					verts->push(b);
					HX_STACK_LINE(331)
					verts->push(alpha);
					HX_STACK_LINE(333)
					verts->push((p2x + perpx));
					HX_STACK_LINE(334)
					verts->push((p2y + perpy));
					HX_STACK_LINE(335)
					verts->push(r);
					HX_STACK_LINE(336)
					verts->push(g);
					HX_STACK_LINE(337)
					verts->push(b);
					HX_STACK_LINE(338)
					verts->push(alpha);
					HX_STACK_LINE(340)
					continue;
				}
				HX_STACK_LINE(344)
				px = (Float((((b1 * c2) - (b2 * c1)))) / Float(denom));
				HX_STACK_LINE(345)
				py = (Float((((a2 * c1) - (a1 * c2)))) / Float(denom));
				HX_STACK_LINE(347)
				pdist = (((((px - p2x)) * ((px - p2x))) + ((py - p2y))) + ((py - p2y)));
				HX_STACK_LINE(349)
				if (((pdist > (int)19600))){
					HX_STACK_LINE(351)
					perp3x = (perpx - perp2x);
					HX_STACK_LINE(352)
					perp3y = (perpy - perp2y);
					HX_STACK_LINE(354)
					Float _g17 = ::Math_obj::abs(((perp3x * perp3x) + (perp3y * perp3y)));		HX_STACK_VAR(_g17,"_g17");
					HX_STACK_LINE(354)
					Float _g18 = ::Math_obj::sqrt(_g17);		HX_STACK_VAR(_g18,"_g18");
					HX_STACK_LINE(354)
					dist = _g18;
					HX_STACK_LINE(355)
					perp3x = (Float(perp3x) / Float(dist));
					HX_STACK_LINE(356)
					perp3y = (Float(perp3y) / Float(dist));
					HX_STACK_LINE(357)
					perp3x = (perp3x * width);
					HX_STACK_LINE(358)
					perp3y = (perp3y * width);
					HX_STACK_LINE(360)
					verts->push((p2x - perp3x));
					HX_STACK_LINE(361)
					verts->push((p2y - perp3y));
					HX_STACK_LINE(362)
					verts->push(r);
					HX_STACK_LINE(363)
					verts->push(g);
					HX_STACK_LINE(364)
					verts->push(b);
					HX_STACK_LINE(365)
					verts->push(alpha);
					HX_STACK_LINE(367)
					verts->push((p2x + perp3x));
					HX_STACK_LINE(368)
					verts->push((p2y + perp3y));
					HX_STACK_LINE(369)
					verts->push(r);
					HX_STACK_LINE(370)
					verts->push(g);
					HX_STACK_LINE(371)
					verts->push(b);
					HX_STACK_LINE(372)
					verts->push(alpha);
					HX_STACK_LINE(374)
					verts->push((p2x - perp3x));
					HX_STACK_LINE(375)
					verts->push((p2y - perp3y));
					HX_STACK_LINE(376)
					verts->push(r);
					HX_STACK_LINE(377)
					verts->push(g);
					HX_STACK_LINE(378)
					verts->push(b);
					HX_STACK_LINE(379)
					verts->push(alpha);
					HX_STACK_LINE(381)
					(indexCount)++;
				}
				else{
					HX_STACK_LINE(385)
					verts->push(px);
					HX_STACK_LINE(386)
					verts->push(py);
					HX_STACK_LINE(387)
					verts->push(r);
					HX_STACK_LINE(388)
					verts->push(g);
					HX_STACK_LINE(389)
					verts->push(b);
					HX_STACK_LINE(390)
					verts->push(alpha);
					HX_STACK_LINE(392)
					verts->push((p2x - ((px - p2x))));
					HX_STACK_LINE(393)
					verts->push((p2y - ((py - p2y))));
					HX_STACK_LINE(394)
					verts->push(r);
					HX_STACK_LINE(395)
					verts->push(g);
					HX_STACK_LINE(396)
					verts->push(b);
					HX_STACK_LINE(397)
					verts->push(alpha);
				}
			}
		}
		HX_STACK_LINE(403)
		p1x = points->__get((((length - (int)2)) * (int)2));
		HX_STACK_LINE(404)
		p1y = points->__get(((((length - (int)2)) * (int)2) + (int)1));
		HX_STACK_LINE(405)
		p2x = points->__get((((length - (int)1)) * (int)2));
		HX_STACK_LINE(406)
		p2y = points->__get(((((length - (int)1)) * (int)2) + (int)1));
		HX_STACK_LINE(407)
		perpx = -(((p1y - p2y)));
		HX_STACK_LINE(408)
		perpy = (p1x - p2x);
		HX_STACK_LINE(410)
		Float _g19 = ::Math_obj::abs(((perpx * perpx) + (perpy * perpy)));		HX_STACK_VAR(_g19,"_g19");
		HX_STACK_LINE(410)
		Float _g20 = ::Math_obj::sqrt(_g19);		HX_STACK_VAR(_g20,"_g20");
		HX_STACK_LINE(410)
		dist = _g20;
		HX_STACK_LINE(411)
		if ((!(::Math_obj::isFinite(dist)))){
			HX_STACK_LINE(411)
			::haxe::Log_obj::trace(((perpx * perpx) + (perpy * perpy)),hx::SourceInfo(HX_CSTRING("GraphicsRenderer.hx"),411,HX_CSTRING("openfl._internal.renderer.opengl.utils.GraphicsRenderer"),HX_CSTRING("buildLine")));
		}
		HX_STACK_LINE(412)
		perpx = (Float(perpx) / Float(dist));
		HX_STACK_LINE(413)
		perpy = (Float(perpy) / Float(dist));
		HX_STACK_LINE(414)
		perpx = (perpx * width);
		HX_STACK_LINE(415)
		perpy = (perpy * width);
		HX_STACK_LINE(417)
		verts->push((p2x - perpx));
		HX_STACK_LINE(418)
		verts->push((p2y - perpy));
		HX_STACK_LINE(419)
		verts->push(r);
		HX_STACK_LINE(420)
		verts->push(g);
		HX_STACK_LINE(421)
		verts->push(b);
		HX_STACK_LINE(422)
		verts->push(alpha);
		HX_STACK_LINE(424)
		verts->push((p2x + perpx));
		HX_STACK_LINE(425)
		verts->push((p2y + perpy));
		HX_STACK_LINE(426)
		verts->push(r);
		HX_STACK_LINE(427)
		verts->push(g);
		HX_STACK_LINE(428)
		verts->push(b);
		HX_STACK_LINE(429)
		verts->push(alpha);
		HX_STACK_LINE(431)
		indices->push(indexStart);
		HX_STACK_LINE(433)
		{
			HX_STACK_LINE(433)
			int _g4 = (int)0;		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(433)
			while((true)){
				HX_STACK_LINE(433)
				if ((!(((_g4 < indexCount))))){
					HX_STACK_LINE(433)
					break;
				}
				HX_STACK_LINE(433)
				int i = (_g4)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(435)
				int _g21 = (indexStart)++;		HX_STACK_VAR(_g21,"_g21");
				HX_STACK_LINE(435)
				indices->push(_g21);
			}
		}
		HX_STACK_LINE(439)
		indices->push((indexStart - (int)1));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GraphicsRenderer_obj,buildLine,(void))

Void GraphicsRenderer_obj::buildPoly( ::openfl::_internal::renderer::opengl::utils::DrawPath path,::openfl::_internal::renderer::opengl::utils::GLStack glStack){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.GraphicsRenderer","buildPoly",0xe90ceb7b,"openfl._internal.renderer.opengl.utils.GraphicsRenderer.buildPoly","openfl/_internal/renderer/opengl/utils/GraphicsRenderer.hx",442,0xd295150c)
		HX_STACK_ARG(path,"path")
		HX_STACK_ARG(glStack,"glStack")
		HX_STACK_LINE(443)
		if (((path->points->length < (int)6))){
			HX_STACK_LINE(443)
			return null();
		}
		HX_STACK_LINE(444)
		Array< Float > points = path->points;		HX_STACK_VAR(points,"points");
		HX_STACK_LINE(446)
		int l = points->length;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(447)
		Float sx = points->__get((int)0);		HX_STACK_VAR(sx,"sx");
		HX_STACK_LINE(447)
		Float sy = points->__get((int)1);		HX_STACK_VAR(sy,"sy");
		HX_STACK_LINE(448)
		Float ex = points->__get((l - (int)2));		HX_STACK_VAR(ex,"ex");
		HX_STACK_LINE(448)
		Float ey = points->__get((l - (int)1));		HX_STACK_VAR(ey,"ey");
		HX_STACK_LINE(450)
		if (((bool((sx != ex)) || bool((sy != ey))))){
			HX_STACK_LINE(451)
			points->push(sx);
			HX_STACK_LINE(452)
			points->push(sy);
		}
		HX_STACK_LINE(455)
		int length = ::Std_obj::_int((Float(points->length) / Float((int)2)));		HX_STACK_VAR(length,"length");
		HX_STACK_LINE(457)
		::openfl::_internal::renderer::opengl::utils::GLBucket bucket = ::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::prepareBucket(path,glStack);		HX_STACK_VAR(bucket,"bucket");
		HX_STACK_LINE(458)
		::openfl::_internal::renderer::opengl::utils::GLBucketData fill = bucket->getData(::openfl::_internal::renderer::opengl::utils::BucketDataType_obj::Fill);		HX_STACK_VAR(fill,"fill");
		HX_STACK_LINE(459)
		Array< Float > verts = fill->verts;		HX_STACK_VAR(verts,"verts");
		HX_STACK_LINE(460)
		Array< int > indices = fill->indices;		HX_STACK_VAR(indices,"indices");
		HX_STACK_LINE(462)
		if (((fill != null()))){
			HX_STACK_LINE(463)
			Array< int > triangles = ::openfl::_internal::renderer::opengl::utils::PolyK_obj::triangulate(points);		HX_STACK_VAR(triangles,"triangles");
			HX_STACK_LINE(464)
			Float vertPos = (Float(verts->length) / Float((int)2));		HX_STACK_VAR(vertPos,"vertPos");
			HX_STACK_LINE(466)
			int i = (int)0;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(467)
			while((true)){
				HX_STACK_LINE(467)
				if ((!(((i < triangles->length))))){
					HX_STACK_LINE(467)
					break;
				}
				HX_STACK_LINE(469)
				int _g = ::Std_obj::_int((triangles->__get(i) + vertPos));		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(469)
				indices->push(_g);
				HX_STACK_LINE(470)
				int _g1 = ::Std_obj::_int((triangles->__get(i) + vertPos));		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(470)
				indices->push(_g1);
				HX_STACK_LINE(471)
				int _g2 = ::Std_obj::_int((triangles->__get((i + (int)1)) + vertPos));		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(471)
				indices->push(_g2);
				HX_STACK_LINE(472)
				int _g3 = ::Std_obj::_int((triangles->__get((i + (int)2)) + vertPos));		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(472)
				indices->push(_g3);
				HX_STACK_LINE(473)
				int _g4 = ::Std_obj::_int((triangles->__get((i + (int)2)) + vertPos));		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(473)
				indices->push(_g4);
				HX_STACK_LINE(474)
				hx::AddEq(i,(int)3);
			}
			HX_STACK_LINE(478)
			{
				HX_STACK_LINE(478)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(478)
				while((true)){
					HX_STACK_LINE(478)
					if ((!(((_g < length))))){
						HX_STACK_LINE(478)
						break;
					}
					HX_STACK_LINE(478)
					int i1 = (_g)++;		HX_STACK_VAR(i1,"i1");
					HX_STACK_LINE(480)
					verts->push(points->__get((i1 * (int)2)));
					HX_STACK_LINE(481)
					verts->push(points->__get(((i1 * (int)2) + (int)1)));
				}
			}
		}
		HX_STACK_LINE(486)
		if (((path->line->width > (int)0))){
			HX_STACK_LINE(488)
			::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::buildLine(path,bucket,null());
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GraphicsRenderer_obj,buildPoly,(void))

Void GraphicsRenderer_obj::buildRectangle( ::openfl::_internal::renderer::opengl::utils::DrawPath path,::openfl::_internal::renderer::opengl::utils::GLStack glStack,hx::Null< bool >  __o_localCoords){
bool localCoords = __o_localCoords.Default(false);
	HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.GraphicsRenderer","buildRectangle",0xede73ca0,"openfl._internal.renderer.opengl.utils.GraphicsRenderer.buildRectangle","openfl/_internal/renderer/opengl/utils/GraphicsRenderer.hx",493,0xd295150c)
	HX_STACK_ARG(path,"path")
	HX_STACK_ARG(glStack,"glStack")
	HX_STACK_ARG(localCoords,"localCoords")
{
		HX_STACK_LINE(494)
		Array< Float > rectData = path->points;		HX_STACK_VAR(rectData,"rectData");
		HX_STACK_LINE(495)
		Float x = rectData->__get((int)0);		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(496)
		Float y = rectData->__get((int)1);		HX_STACK_VAR(y,"y");
		HX_STACK_LINE(497)
		Float width = rectData->__get((int)2);		HX_STACK_VAR(width,"width");
		HX_STACK_LINE(498)
		Float height = rectData->__get((int)3);		HX_STACK_VAR(height,"height");
		HX_STACK_LINE(500)
		if ((localCoords)){
			HX_STACK_LINE(501)
			hx::SubEq(x,::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::objectBounds->x);
			HX_STACK_LINE(502)
			hx::SubEq(y,::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::objectBounds->y);
		}
		HX_STACK_LINE(505)
		::openfl::_internal::renderer::opengl::utils::GLBucket bucket = ::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::prepareBucket(path,glStack);		HX_STACK_VAR(bucket,"bucket");
		HX_STACK_LINE(506)
		::openfl::_internal::renderer::opengl::utils::GLBucketData fill = bucket->getData(::openfl::_internal::renderer::opengl::utils::BucketDataType_obj::Fill);		HX_STACK_VAR(fill,"fill");
		HX_STACK_LINE(508)
		if (((fill != null()))){
			HX_STACK_LINE(509)
			Array< Float > verts = fill->verts;		HX_STACK_VAR(verts,"verts");
			HX_STACK_LINE(510)
			Array< int > indices = fill->indices;		HX_STACK_VAR(indices,"indices");
			HX_STACK_LINE(512)
			int vertPos = ::Std_obj::_int((Float(verts->length) / Float((int)2)));		HX_STACK_VAR(vertPos,"vertPos");
			HX_STACK_LINE(514)
			verts->push(x);
			HX_STACK_LINE(515)
			verts->push(y);
			HX_STACK_LINE(516)
			verts->push((x + width));
			HX_STACK_LINE(517)
			verts->push(y);
			HX_STACK_LINE(518)
			verts->push(x);
			HX_STACK_LINE(519)
			verts->push((y + height));
			HX_STACK_LINE(520)
			verts->push((x + width));
			HX_STACK_LINE(521)
			verts->push((y + height));
			HX_STACK_LINE(523)
			indices->push(vertPos);
			HX_STACK_LINE(524)
			indices->push(vertPos);
			HX_STACK_LINE(525)
			indices->push((vertPos + (int)1));
			HX_STACK_LINE(526)
			indices->push((vertPos + (int)2));
			HX_STACK_LINE(527)
			indices->push((vertPos + (int)3));
			HX_STACK_LINE(528)
			indices->push((vertPos + (int)3));
		}
		HX_STACK_LINE(532)
		if (((path->line->width > (int)0))){
			HX_STACK_LINE(534)
			Array< Float > tempPoints = path->points;		HX_STACK_VAR(tempPoints,"tempPoints");
			HX_STACK_LINE(535)
			path->points = Array_obj< Float >::__new().Add(x).Add(y).Add((x + width)).Add(y).Add((x + width)).Add((y + height)).Add(x).Add((y + height)).Add(x).Add(y);
			HX_STACK_LINE(536)
			::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::buildLine(path,bucket,null());
			HX_STACK_LINE(537)
			path->points = tempPoints;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GraphicsRenderer_obj,buildRectangle,(void))

Void GraphicsRenderer_obj::buildRoundedRectangle( ::openfl::_internal::renderer::opengl::utils::DrawPath path,::openfl::_internal::renderer::opengl::utils::GLStack glStack,hx::Null< bool >  __o_localCoords){
bool localCoords = __o_localCoords.Default(false);
	HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.GraphicsRenderer","buildRoundedRectangle",0x47de3df1,"openfl._internal.renderer.opengl.utils.GraphicsRenderer.buildRoundedRectangle","openfl/_internal/renderer/opengl/utils/GraphicsRenderer.hx",542,0xd295150c)
	HX_STACK_ARG(path,"path")
	HX_STACK_ARG(glStack,"glStack")
	HX_STACK_ARG(localCoords,"localCoords")
{
		HX_STACK_LINE(543)
		Array< Float > points = path->points->copy();		HX_STACK_VAR(points,"points");
		HX_STACK_LINE(544)
		Float x = points->__get((int)0);		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(545)
		Float y = points->__get((int)1);		HX_STACK_VAR(y,"y");
		HX_STACK_LINE(546)
		Float width = points->__get((int)2);		HX_STACK_VAR(width,"width");
		HX_STACK_LINE(547)
		Float height = points->__get((int)3);		HX_STACK_VAR(height,"height");
		HX_STACK_LINE(548)
		Float rx = points->__get((int)4);		HX_STACK_VAR(rx,"rx");
		HX_STACK_LINE(549)
		Float ry = points->__get((int)5);		HX_STACK_VAR(ry,"ry");
		HX_STACK_LINE(551)
		if ((localCoords)){
			HX_STACK_LINE(552)
			hx::SubEq(x,::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::objectBounds->x);
			HX_STACK_LINE(553)
			hx::SubEq(y,::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::objectBounds->y);
		}
		HX_STACK_LINE(556)
		Float xe = (x + width);		HX_STACK_VAR(xe,"xe");
		HX_STACK_LINE(557)
		Float ye = (y + height);		HX_STACK_VAR(ye,"ye");
		HX_STACK_LINE(558)
		Float cx1 = (-(rx) + (rx * ::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::SIN45));		HX_STACK_VAR(cx1,"cx1");
		HX_STACK_LINE(559)
		Float cx2 = (-(rx) + (rx * ::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::TAN22));		HX_STACK_VAR(cx2,"cx2");
		HX_STACK_LINE(560)
		Float cy1 = (-(ry) + (ry * ::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::SIN45));		HX_STACK_VAR(cy1,"cy1");
		HX_STACK_LINE(561)
		Float cy2 = (-(ry) + (ry * ::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::TAN22));		HX_STACK_VAR(cy2,"cy2");
		HX_STACK_LINE(563)
		Array< Float > recPoints = Array_obj< Float >::__new();		HX_STACK_VAR(recPoints,"recPoints");
		HX_STACK_LINE(565)
		recPoints->push(xe);
		HX_STACK_LINE(566)
		recPoints->push((ye - ry));
		HX_STACK_LINE(567)
		::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::curveTo(recPoints,xe,(ye + cy2),(xe + cx1),(ye + cy1));
		HX_STACK_LINE(568)
		::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::curveTo(recPoints,(xe + cx2),ye,(xe - rx),ye);
		HX_STACK_LINE(569)
		recPoints->push((x + rx));
		HX_STACK_LINE(570)
		recPoints->push(ye);
		HX_STACK_LINE(571)
		::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::curveTo(recPoints,(x - cx2),ye,(x - cx1),(ye + cy1));
		HX_STACK_LINE(572)
		::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::curveTo(recPoints,x,(ye + cy2),x,(ye - ry));
		HX_STACK_LINE(573)
		recPoints->push(x);
		HX_STACK_LINE(574)
		recPoints->push((y + ry));
		HX_STACK_LINE(575)
		::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::curveTo(recPoints,x,(y - cy2),(x - cx1),(y - cy1));
		HX_STACK_LINE(576)
		::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::curveTo(recPoints,(x - cx2),y,(x + rx),y);
		HX_STACK_LINE(577)
		recPoints->push((xe - rx));
		HX_STACK_LINE(578)
		recPoints->push(y);
		HX_STACK_LINE(579)
		::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::curveTo(recPoints,(xe + cx2),y,(xe + cx1),(y - cy1));
		HX_STACK_LINE(580)
		::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::curveTo(recPoints,xe,(y - cy2),xe,(y + ry));
		HX_STACK_LINE(581)
		recPoints->push(xe);
		HX_STACK_LINE(582)
		recPoints->push((ye - ry));
		HX_STACK_LINE(584)
		::openfl::_internal::renderer::opengl::utils::GLBucket bucket = ::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::prepareBucket(path,glStack);		HX_STACK_VAR(bucket,"bucket");
		HX_STACK_LINE(585)
		::openfl::_internal::renderer::opengl::utils::GLBucketData fill = bucket->getData(::openfl::_internal::renderer::opengl::utils::BucketDataType_obj::Fill);		HX_STACK_VAR(fill,"fill");
		HX_STACK_LINE(587)
		if (((fill != null()))){
			HX_STACK_LINE(588)
			Array< Float > verts = fill->verts;		HX_STACK_VAR(verts,"verts");
			HX_STACK_LINE(589)
			Array< int > indices = fill->indices;		HX_STACK_VAR(indices,"indices");
			HX_STACK_LINE(591)
			Float vecPos = (Float(verts->length) / Float((int)2));		HX_STACK_VAR(vecPos,"vecPos");
			HX_STACK_LINE(593)
			Array< int > triangles = ::openfl::_internal::renderer::opengl::utils::PolyK_obj::triangulate(recPoints);		HX_STACK_VAR(triangles,"triangles");
			HX_STACK_LINE(595)
			int i = (int)0;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(596)
			while((true)){
				HX_STACK_LINE(596)
				if ((!(((i < triangles->length))))){
					HX_STACK_LINE(596)
					break;
				}
				HX_STACK_LINE(598)
				int _g = ::Std_obj::_int((triangles->__get(i) + vecPos));		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(598)
				indices->push(_g);
				HX_STACK_LINE(599)
				int _g1 = ::Std_obj::_int((triangles->__get(i) + vecPos));		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(599)
				indices->push(_g1);
				HX_STACK_LINE(600)
				int _g2 = ::Std_obj::_int((triangles->__get((i + (int)1)) + vecPos));		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(600)
				indices->push(_g2);
				HX_STACK_LINE(601)
				int _g3 = ::Std_obj::_int((triangles->__get((i + (int)2)) + vecPos));		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(601)
				indices->push(_g3);
				HX_STACK_LINE(602)
				int _g4 = ::Std_obj::_int((triangles->__get((i + (int)2)) + vecPos));		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(602)
				indices->push(_g4);
				HX_STACK_LINE(603)
				hx::AddEq(i,(int)3);
			}
			HX_STACK_LINE(607)
			i = (int)0;
			HX_STACK_LINE(608)
			while((true)){
				HX_STACK_LINE(608)
				if ((!(((i < recPoints->length))))){
					HX_STACK_LINE(608)
					break;
				}
				HX_STACK_LINE(610)
				verts->push(recPoints->__get(i));
				HX_STACK_LINE(611)
				int _g5 = ++(i);		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(611)
				Float _g6 = recPoints->__get(_g5);		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(611)
				verts->push(_g6);
				HX_STACK_LINE(612)
				(i)++;
			}
		}
		HX_STACK_LINE(616)
		if (((path->line->width > (int)0))){
			HX_STACK_LINE(618)
			Array< Float > tempPoints = path->points;		HX_STACK_VAR(tempPoints,"tempPoints");
			HX_STACK_LINE(619)
			path->points = recPoints;
			HX_STACK_LINE(620)
			::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::buildLine(path,bucket,null());
			HX_STACK_LINE(621)
			path->points = tempPoints;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GraphicsRenderer_obj,buildRoundedRectangle,(void))

Void GraphicsRenderer_obj::buildDrawTriangles( ::openfl::_internal::renderer::opengl::utils::DrawPath path,::openfl::display::DisplayObject object,::openfl::_internal::renderer::opengl::utils::GLStack glStack,hx::Null< bool >  __o_localCoords){
bool localCoords = __o_localCoords.Default(false);
	HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.GraphicsRenderer","buildDrawTriangles",0xec6e38f8,"openfl._internal.renderer.opengl.utils.GraphicsRenderer.buildDrawTriangles","openfl/_internal/renderer/opengl/utils/GraphicsRenderer.hx",626,0xd295150c)
	HX_STACK_ARG(path,"path")
	HX_STACK_ARG(object,"object")
	HX_STACK_ARG(glStack,"glStack")
	HX_STACK_ARG(localCoords,"localCoords")
{
		HX_STACK_LINE(628)
		Dynamic args = ::Type_obj::enumParameters(path->type);		HX_STACK_VAR(args,"args");
		HX_STACK_LINE(630)
		Array< Float > vertices = args->__GetItem((int)0);		HX_STACK_VAR(vertices,"vertices");
		HX_STACK_LINE(631)
		Array< int > indices = args->__GetItem((int)1);		HX_STACK_VAR(indices,"indices");
		HX_STACK_LINE(632)
		Array< Float > uvtData = args->__GetItem((int)2);		HX_STACK_VAR(uvtData,"uvtData");
		HX_STACK_LINE(633)
		::openfl::display::TriangleCulling culling = args->__GetItem((int)3);		HX_STACK_VAR(culling,"culling");
		HX_STACK_LINE(634)
		Array< int > colors = args->__GetItem((int)4);		HX_STACK_VAR(colors,"colors");
		HX_STACK_LINE(635)
		int blendMode = args->__GetItem((int)5);		HX_STACK_VAR(blendMode,"blendMode");
		HX_STACK_LINE(637)
		Float a;		HX_STACK_VAR(a,"a");
		HX_STACK_LINE(637)
		Float b;		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(637)
		Float c;		HX_STACK_VAR(c,"c");
		HX_STACK_LINE(637)
		Float d;		HX_STACK_VAR(d,"d");
		HX_STACK_LINE(637)
		Float tx;		HX_STACK_VAR(tx,"tx");
		HX_STACK_LINE(637)
		Float ty;		HX_STACK_VAR(ty,"ty");
		HX_STACK_LINE(639)
		if ((localCoords)){
			HX_STACK_LINE(640)
			a = 1.0;
			HX_STACK_LINE(641)
			b = 0.0;
			HX_STACK_LINE(642)
			c = 0.0;
			HX_STACK_LINE(643)
			d = 1.0;
			HX_STACK_LINE(644)
			tx = 0.0;
			HX_STACK_LINE(645)
			ty = 0.0;
		}
		else{
			HX_STACK_LINE(647)
			a = object->__worldTransform->a;
			HX_STACK_LINE(648)
			b = object->__worldTransform->b;
			HX_STACK_LINE(649)
			c = object->__worldTransform->c;
			HX_STACK_LINE(650)
			d = object->__worldTransform->d;
			HX_STACK_LINE(651)
			tx = object->__worldTransform->tx;
			HX_STACK_LINE(652)
			ty = object->__worldTransform->ty;
		}
		HX_STACK_LINE(655)
		bool hasColors = (bool((colors != null())) && bool((colors->length > (int)0)));		HX_STACK_VAR(hasColors,"hasColors");
		HX_STACK_LINE(657)
		::openfl::_internal::renderer::opengl::utils::GLBucket bucket = ::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::prepareBucket(path,glStack);		HX_STACK_VAR(bucket,"bucket");
		HX_STACK_LINE(658)
		::openfl::_internal::renderer::opengl::utils::GLBucketData fill = bucket->getData(::openfl::_internal::renderer::opengl::utils::BucketDataType_obj::Fill);		HX_STACK_VAR(fill,"fill");
		HX_STACK_LINE(659)
		::openfl::_internal::renderer::opengl::utils::VertexAttribute colorAttrib = fill->vertexArray->attributes->__get((int)2).StaticCast< ::openfl::_internal::renderer::opengl::utils::VertexAttribute >();		HX_STACK_VAR(colorAttrib,"colorAttrib");
		HX_STACK_LINE(660)
		colorAttrib->enabled = hasColors;
		HX_STACK_LINE(661)
		::lime::utils::Float32Array _g = ::lime::utils::Float32Array_obj::__new(Array_obj< int >::__new().Add((int)1).Add((int)1).Add((int)1).Add((int)1),null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(661)
		colorAttrib->defaultValue = _g;
		HX_STACK_LINE(663)
		fill->rawVerts = true;
		HX_STACK_LINE(664)
		fill->glLength = indices->length;
		HX_STACK_LINE(665)
		int _g1 = fill->vertexArray->get_stride();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(665)
		Float _g2 = (Float(_g1) / Float((int)4));		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(665)
		int _g3 = ::Std_obj::_int(_g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(665)
		fill->stride = _g3;
		HX_STACK_LINE(667)
		int vertsLength = (fill->glLength * fill->stride);		HX_STACK_VAR(vertsLength,"vertsLength");
		HX_STACK_LINE(668)
		::lime::utils::Float32Array verts;		HX_STACK_VAR(verts,"verts");
		HX_STACK_LINE(670)
		if (((bool((fill->glVerts == null())) || bool((fill->glVerts->length < vertsLength))))){
			HX_STACK_LINE(671)
			::lime::utils::Float32Array _g4 = ::lime::utils::Float32Array_obj::__new(vertsLength,null(),null());		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(671)
			verts = _g4;
			HX_STACK_LINE(672)
			fill->glVerts = verts;
		}
		else{
			HX_STACK_LINE(674)
			verts = fill->glVerts;
		}
		HX_STACK_LINE(677)
		::lime::utils::UInt32Array glColors = ::lime::utils::UInt32Array_obj::__new(verts->buffer,null(),null());		HX_STACK_VAR(glColors,"glColors");
		HX_STACK_LINE(679)
		int v0 = (int)0;		HX_STACK_VAR(v0,"v0");
		HX_STACK_LINE(679)
		int v1 = (int)0;		HX_STACK_VAR(v1,"v1");
		HX_STACK_LINE(679)
		int v2 = (int)0;		HX_STACK_VAR(v2,"v2");
		HX_STACK_LINE(680)
		int i0 = (int)0;		HX_STACK_VAR(i0,"i0");
		HX_STACK_LINE(680)
		int i1 = (int)0;		HX_STACK_VAR(i1,"i1");
		HX_STACK_LINE(680)
		int i2 = (int)0;		HX_STACK_VAR(i2,"i2");
		HX_STACK_LINE(682)
		Float x0 = 0.0;		HX_STACK_VAR(x0,"x0");
		HX_STACK_LINE(682)
		Float y0 = 0.0;		HX_STACK_VAR(y0,"y0");
		HX_STACK_LINE(683)
		Float x1 = 0.0;		HX_STACK_VAR(x1,"x1");
		HX_STACK_LINE(683)
		Float y1 = 0.0;		HX_STACK_VAR(y1,"y1");
		HX_STACK_LINE(684)
		Float x2 = 0.0;		HX_STACK_VAR(x2,"x2");
		HX_STACK_LINE(684)
		Float y2 = 0.0;		HX_STACK_VAR(y2,"y2");
		HX_STACK_LINE(686)
		int idx = (int)0;		HX_STACK_VAR(idx,"idx");
		HX_STACK_LINE(687)
		{
			HX_STACK_LINE(687)
			int _g11 = (int)0;		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(687)
			int _g4 = ::Std_obj::_int((Float(indices->length) / Float((int)3)));		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(687)
			while((true)){
				HX_STACK_LINE(687)
				if ((!(((_g11 < _g4))))){
					HX_STACK_LINE(687)
					break;
				}
				HX_STACK_LINE(687)
				int i = (_g11)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(689)
				i0 = indices->__get((i * (int)3));
				HX_STACK_LINE(689)
				i1 = indices->__get(((i * (int)3) + (int)1));
				HX_STACK_LINE(689)
				i2 = indices->__get(((i * (int)3) + (int)2));
				HX_STACK_LINE(690)
				v0 = (i0 * (int)2);
				HX_STACK_LINE(690)
				v1 = (i1 * (int)2);
				HX_STACK_LINE(690)
				v2 = (i2 * (int)2);
				HX_STACK_LINE(692)
				x0 = vertices->__get(v0);
				HX_STACK_LINE(692)
				y0 = vertices->__get((v0 + (int)1));
				HX_STACK_LINE(693)
				x1 = vertices->__get(v1);
				HX_STACK_LINE(693)
				y1 = vertices->__get((v1 + (int)1));
				HX_STACK_LINE(694)
				x2 = vertices->__get(v2);
				HX_STACK_LINE(694)
				y2 = vertices->__get((v2 + (int)1));
				HX_STACK_LINE(696)
				if ((localCoords)){
					HX_STACK_LINE(697)
					hx::SubEq(x0,::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::objectBounds->x);
					HX_STACK_LINE(698)
					hx::SubEq(y0,::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::objectBounds->y);
					HX_STACK_LINE(699)
					hx::SubEq(x1,::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::objectBounds->x);
					HX_STACK_LINE(700)
					hx::SubEq(y1,::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::objectBounds->y);
					HX_STACK_LINE(701)
					hx::SubEq(x2,::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::objectBounds->x);
					HX_STACK_LINE(702)
					hx::SubEq(y2,::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::objectBounds->y);
				}
				HX_STACK_LINE(705)
				switch( (int)(culling->__Index())){
					case (int)2: {
						HX_STACK_LINE(707)
						if ((!(((((((x1 - x0)) * ((y2 - y0))) - (((y1 - y0)) * ((x2 - x0)))) < (int)0))))){
							HX_STACK_LINE(707)
							continue;
						}
					}
					;break;
					case (int)0: {
						HX_STACK_LINE(709)
						if (((((((x1 - x0)) * ((y2 - y0))) - (((y1 - y0)) * ((x2 - x0)))) < (int)0))){
							HX_STACK_LINE(709)
							continue;
						}
					}
					;break;
					default: {
					}
				}
				HX_STACK_LINE(713)
				int _g5 = (idx)++;		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(713)
				hx::__ArrayImplRef(verts,_g5) = (((a * x0) + (c * y0)) + tx);
				HX_STACK_LINE(714)
				int _g6 = (idx)++;		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(714)
				hx::__ArrayImplRef(verts,_g6) = (((b * x0) + (d * y0)) + ty);
				HX_STACK_LINE(715)
				int _g7 = (idx)++;		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(715)
				hx::__ArrayImplRef(verts,_g7) = uvtData->__get(v0);
				HX_STACK_LINE(716)
				int _g8 = (idx)++;		HX_STACK_VAR(_g8,"_g8");
				HX_STACK_LINE(716)
				hx::__ArrayImplRef(verts,_g8) = uvtData->__get((v0 + (int)1));
				HX_STACK_LINE(717)
				if ((hasColors)){
					HX_STACK_LINE(718)
					int _g9 = (idx)++;		HX_STACK_VAR(_g9,"_g9");
					HX_STACK_LINE(718)
					hx::__ArrayImplRef(glColors,_g9) = colors->__get(i0);
				}
				HX_STACK_LINE(721)
				int _g10 = (idx)++;		HX_STACK_VAR(_g10,"_g10");
				HX_STACK_LINE(721)
				hx::__ArrayImplRef(verts,_g10) = (((a * x1) + (c * y1)) + tx);
				HX_STACK_LINE(722)
				int _g111 = (idx)++;		HX_STACK_VAR(_g111,"_g111");
				HX_STACK_LINE(722)
				hx::__ArrayImplRef(verts,_g111) = (((b * x1) + (d * y1)) + ty);
				HX_STACK_LINE(723)
				int _g12 = (idx)++;		HX_STACK_VAR(_g12,"_g12");
				HX_STACK_LINE(723)
				hx::__ArrayImplRef(verts,_g12) = uvtData->__get(v1);
				HX_STACK_LINE(724)
				int _g13 = (idx)++;		HX_STACK_VAR(_g13,"_g13");
				HX_STACK_LINE(724)
				hx::__ArrayImplRef(verts,_g13) = uvtData->__get((v1 + (int)1));
				HX_STACK_LINE(725)
				if ((hasColors)){
					HX_STACK_LINE(726)
					int _g14 = (idx)++;		HX_STACK_VAR(_g14,"_g14");
					HX_STACK_LINE(726)
					hx::__ArrayImplRef(glColors,_g14) = colors->__get(i1);
				}
				HX_STACK_LINE(729)
				int _g15 = (idx)++;		HX_STACK_VAR(_g15,"_g15");
				HX_STACK_LINE(729)
				hx::__ArrayImplRef(verts,_g15) = (((a * x2) + (c * y2)) + tx);
				HX_STACK_LINE(730)
				int _g16 = (idx)++;		HX_STACK_VAR(_g16,"_g16");
				HX_STACK_LINE(730)
				hx::__ArrayImplRef(verts,_g16) = (((b * x2) + (d * y2)) + ty);
				HX_STACK_LINE(731)
				int _g17 = (idx)++;		HX_STACK_VAR(_g17,"_g17");
				HX_STACK_LINE(731)
				hx::__ArrayImplRef(verts,_g17) = uvtData->__get(v2);
				HX_STACK_LINE(732)
				int _g18 = (idx)++;		HX_STACK_VAR(_g18,"_g18");
				HX_STACK_LINE(732)
				hx::__ArrayImplRef(verts,_g18) = uvtData->__get((v2 + (int)1));
				HX_STACK_LINE(733)
				if ((hasColors)){
					HX_STACK_LINE(734)
					int _g19 = (idx)++;		HX_STACK_VAR(_g19,"_g19");
					HX_STACK_LINE(734)
					hx::__ArrayImplRef(glColors,_g19) = colors->__get(i2);
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(GraphicsRenderer_obj,buildDrawTriangles,(void))

Void GraphicsRenderer_obj::buildDrawTiles( ::openfl::_internal::renderer::opengl::utils::DrawPath path,::openfl::_internal::renderer::opengl::utils::GLStack glStack){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.GraphicsRenderer","buildDrawTiles",0xacaa9b52,"openfl._internal.renderer.opengl.utils.GraphicsRenderer.buildDrawTiles","openfl/_internal/renderer/opengl/utils/GraphicsRenderer.hx",742,0xd295150c)
		HX_STACK_ARG(path,"path")
		HX_STACK_ARG(glStack,"glStack")
		HX_STACK_LINE(742)
		::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::prepareBucket(path,glStack);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GraphicsRenderer_obj,buildDrawTiles,(void))

Void GraphicsRenderer_obj::curveTo( Array< Float > points,Float cx,Float cy,Float x,Float y){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.GraphicsRenderer","curveTo",0x7da76cab,"openfl._internal.renderer.opengl.utils.GraphicsRenderer.curveTo","openfl/_internal/renderer/opengl/utils/GraphicsRenderer.hx",746,0xd295150c)
		HX_STACK_ARG(points,"points")
		HX_STACK_ARG(cx,"cx")
		HX_STACK_ARG(cy,"cy")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(748)
		Float xa = (int)0;		HX_STACK_VAR(xa,"xa");
		HX_STACK_LINE(749)
		Float ya = (int)0;		HX_STACK_VAR(ya,"ya");
		HX_STACK_LINE(750)
		int n = (int)20;		HX_STACK_VAR(n,"n");
		HX_STACK_LINE(752)
		Float fromX = points->__get((points->length - (int)2));		HX_STACK_VAR(fromX,"fromX");
		HX_STACK_LINE(753)
		Float fromY = points->__get((points->length - (int)1));		HX_STACK_VAR(fromY,"fromY");
		HX_STACK_LINE(755)
		Float px = (int)0;		HX_STACK_VAR(px,"px");
		HX_STACK_LINE(756)
		Float py = (int)0;		HX_STACK_VAR(py,"py");
		HX_STACK_LINE(758)
		Float tmp = (int)0;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(760)
		{
			HX_STACK_LINE(760)
			int _g1 = (int)1;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(760)
			int _g = (n + (int)1);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(760)
			while((true)){
				HX_STACK_LINE(760)
				if ((!(((_g1 < _g))))){
					HX_STACK_LINE(760)
					break;
				}
				HX_STACK_LINE(760)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(762)
				tmp = (Float(i) / Float(n));
				HX_STACK_LINE(764)
				xa = (fromX + (((cx - fromX)) * tmp));
				HX_STACK_LINE(765)
				ya = (fromY + (((cy - fromY)) * tmp));
				HX_STACK_LINE(767)
				px = (xa + ((((cx + (((x - cx)) * tmp)) - xa)) * tmp));
				HX_STACK_LINE(768)
				py = (ya + ((((cy + (((y - cy)) * tmp)) - ya)) * tmp));
				HX_STACK_LINE(770)
				points->push(px);
				HX_STACK_LINE(771)
				points->push(py);
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(GraphicsRenderer_obj,curveTo,(void))

Array< Float > GraphicsRenderer_obj::quadraticBezierCurve( Float fromX,Float fromY,Float cpX,Float cpY,Float toX,Float toY){
	HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.GraphicsRenderer","quadraticBezierCurve",0x90de5ad7,"openfl._internal.renderer.opengl.utils.GraphicsRenderer.quadraticBezierCurve","openfl/_internal/renderer/opengl/utils/GraphicsRenderer.hx",776,0xd295150c)
	HX_STACK_ARG(fromX,"fromX")
	HX_STACK_ARG(fromY,"fromY")
	HX_STACK_ARG(cpX,"cpX")
	HX_STACK_ARG(cpY,"cpY")
	HX_STACK_ARG(toX,"toX")
	HX_STACK_ARG(toY,"toY")
	HX_STACK_LINE(778)
	Float xa;		HX_STACK_VAR(xa,"xa");
	HX_STACK_LINE(778)
	Float ya;		HX_STACK_VAR(ya,"ya");
	HX_STACK_LINE(778)
	Float xb;		HX_STACK_VAR(xb,"xb");
	HX_STACK_LINE(778)
	Float yb;		HX_STACK_VAR(yb,"yb");
	HX_STACK_LINE(778)
	Float x;		HX_STACK_VAR(x,"x");
	HX_STACK_LINE(778)
	Float y;		HX_STACK_VAR(y,"y");
	HX_STACK_LINE(779)
	int n = (int)20;		HX_STACK_VAR(n,"n");
	HX_STACK_LINE(780)
	Array< Float > points = Array_obj< Float >::__new();		HX_STACK_VAR(points,"points");

	HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
	Float run(Float n1,Float n2,Float perc){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","openfl/_internal/renderer/opengl/utils/GraphicsRenderer.hx",782,0xd295150c)
		HX_STACK_ARG(n1,"n1")
		HX_STACK_ARG(n2,"n2")
		HX_STACK_ARG(perc,"perc")
		{
			HX_STACK_LINE(784)
			Float diff = (n2 - n1);		HX_STACK_VAR(diff,"diff");
			HX_STACK_LINE(785)
			return (n1 + (diff * perc));
		}
		return null();
	}
	HX_END_LOCAL_FUNC3(return)

	HX_STACK_LINE(782)
	Dynamic getPt =  Dynamic(new _Function_1_1());		HX_STACK_VAR(getPt,"getPt");
	HX_STACK_LINE(789)
	Float j = 0.0;		HX_STACK_VAR(j,"j");
	HX_STACK_LINE(790)
	{
		HX_STACK_LINE(790)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(790)
		int _g = (n + (int)1);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(790)
		while((true)){
			HX_STACK_LINE(790)
			if ((!(((_g1 < _g))))){
				HX_STACK_LINE(790)
				break;
			}
			HX_STACK_LINE(790)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(792)
			j = (Float(i) / Float(n));
			HX_STACK_LINE(794)
			Float _g2 = getPt(fromX,cpX,j).Cast< Float >();		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(794)
			xa = _g2;
			HX_STACK_LINE(795)
			Float _g11 = getPt(fromY,cpY,j).Cast< Float >();		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(795)
			ya = _g11;
			HX_STACK_LINE(796)
			Float _g21 = getPt(cpX,toX,j).Cast< Float >();		HX_STACK_VAR(_g21,"_g21");
			HX_STACK_LINE(796)
			xb = _g21;
			HX_STACK_LINE(797)
			Float _g3 = getPt(cpY,toY,j).Cast< Float >();		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(797)
			yb = _g3;
			HX_STACK_LINE(799)
			Float _g4 = getPt(xa,xb,j).Cast< Float >();		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(799)
			x = _g4;
			HX_STACK_LINE(800)
			Float _g5 = getPt(ya,yb,j).Cast< Float >();		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(800)
			y = _g5;
			HX_STACK_LINE(802)
			points->push(x);
			HX_STACK_LINE(803)
			points->push(y);
		}
	}
	HX_STACK_LINE(807)
	return points;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(GraphicsRenderer_obj,quadraticBezierCurve,return )

Void GraphicsRenderer_obj::render( ::openfl::display::DisplayObject object,::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.GraphicsRenderer","render",0xf1488dd5,"openfl._internal.renderer.opengl.utils.GraphicsRenderer.render","openfl/_internal/renderer/opengl/utils/GraphicsRenderer.hx",811,0xd295150c)
		HX_STACK_ARG(object,"object")
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(812)
		::openfl::display::Graphics graphics = object->__graphics;		HX_STACK_VAR(graphics,"graphics");
		HX_STACK_LINE(813)
		::openfl::_internal::renderer::opengl::utils::SpriteBatch spritebatch = renderSession->spriteBatch;		HX_STACK_VAR(spritebatch,"spritebatch");
		HX_STACK_LINE(814)
		bool dirty = graphics->__dirty;		HX_STACK_VAR(dirty,"dirty");
		HX_STACK_LINE(815)
		if (((graphics->__commands->length <= (int)0))){
			HX_STACK_LINE(816)
			return null();
		}
		HX_STACK_LINE(819)
		if ((dirty)){
			HX_STACK_LINE(820)
			::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::updateGraphics(object,object->__graphics,renderSession->gl,object->cacheAsBitmap);
		}
		HX_STACK_LINE(862)
		::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::renderGraphics(object,renderSession,false);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GraphicsRenderer_obj,render,(void))

Void GraphicsRenderer_obj::renderGraphics( ::openfl::display::DisplayObject object,::openfl::_internal::renderer::RenderSession renderSession,Dynamic __o_localCoords){
Dynamic localCoords = __o_localCoords.Default(false);
	HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.GraphicsRenderer","renderGraphics",0xdf139fc0,"openfl._internal.renderer.opengl.utils.GraphicsRenderer.renderGraphics","openfl/_internal/renderer/opengl/utils/GraphicsRenderer.hx",866,0xd295150c)
	HX_STACK_ARG(object,"object")
	HX_STACK_ARG(renderSession,"renderSession")
	HX_STACK_ARG(localCoords,"localCoords")
{
		HX_STACK_LINE(867)
		::openfl::display::Graphics graphics = object->__graphics;		HX_STACK_VAR(graphics,"graphics");
		HX_STACK_LINE(868)
		::lime::graphics::GLRenderContext gl = renderSession->gl;		HX_STACK_VAR(gl,"gl");
		HX_STACK_LINE(870)
		::openfl::_internal::renderer::opengl::utils::GLStack glStack = graphics->__glStack->__get(::openfl::_internal::renderer::opengl::GLRenderer_obj::glContextId).StaticCast< ::openfl::_internal::renderer::opengl::utils::GLStack >();		HX_STACK_VAR(glStack,"glStack");
		HX_STACK_LINE(871)
		::openfl::_internal::renderer::opengl::utils::GLBucket bucket;		HX_STACK_VAR(bucket,"bucket");
		HX_STACK_LINE(873)
		::openfl::geom::Matrix translationMatrix;		HX_STACK_VAR(translationMatrix,"translationMatrix");
		HX_STACK_LINE(874)
		if ((localCoords)){
			HX_STACK_LINE(875)
			translationMatrix = ::openfl::geom::Matrix_obj::__identity;
		}
		else{
			HX_STACK_LINE(877)
			translationMatrix = object->__worldTransform;
		}
		HX_STACK_LINE(880)
		::openfl::geom::Rectangle clipRect = renderSession->spriteBatch->clipRect;		HX_STACK_VAR(clipRect,"clipRect");
		HX_STACK_LINE(881)
		bool batchDrawing = renderSession->spriteBatch->drawing;		HX_STACK_VAR(batchDrawing,"batchDrawing");
		HX_STACK_LINE(883)
		batchDrawing = renderSession->spriteBatch->drawing;
		HX_STACK_LINE(885)
		{
			HX_STACK_LINE(885)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(885)
			int _g = glStack->buckets->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(885)
			while((true)){
				HX_STACK_LINE(885)
				if ((!(((_g1 < _g))))){
					HX_STACK_LINE(885)
					break;
				}
				HX_STACK_LINE(885)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(886)
				batchDrawing = renderSession->spriteBatch->drawing;
				HX_STACK_LINE(888)
				if (((bool(batchDrawing) && bool(!(localCoords))))){
					HX_STACK_LINE(889)
					renderSession->spriteBatch->finish();
				}
				HX_STACK_LINE(892)
				renderSession->blendModeManager->setBlendMode(object->__blendMode,null());
				HX_STACK_LINE(894)
				if (((clipRect != null()))){
					HX_STACK_LINE(895)
					::lime::graphics::opengl::GL_obj::lime_gl_enable(gl->SCISSOR_TEST);
					HX_STACK_LINE(896)
					{
						HX_STACK_LINE(896)
						int x = ::Math_obj::floor(clipRect->x);		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(897)
						int y = ::Math_obj::floor(clipRect->y);		HX_STACK_VAR(y,"y");
						HX_STACK_LINE(898)
						int width = ::Math_obj::floor(clipRect->width);		HX_STACK_VAR(width,"width");
						HX_STACK_LINE(899)
						int height = ::Math_obj::floor(clipRect->height);		HX_STACK_VAR(height,"height");
						HX_STACK_LINE(896)
						::lime::graphics::opengl::GL_obj::lime_gl_scissor(x,y,width,height);
					}
				}
				HX_STACK_LINE(903)
				bucket = glStack->buckets->__get(i).StaticCast< ::openfl::_internal::renderer::opengl::utils::GLBucket >();
				HX_STACK_LINE(905)
				{
					HX_STACK_LINE(905)
					::openfl::_internal::renderer::opengl::utils::BucketMode _g2 = bucket->mode;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(905)
					switch( (int)(_g2->__Index())){
						case (int)1: case (int)2: {
							HX_STACK_LINE(907)
							::lime::utils::Float32Array _g3 = translationMatrix->toArray(true);		HX_STACK_VAR(_g3,"_g3");
							HX_STACK_LINE(907)
							renderSession->stencilManager->pushBucket(bucket,renderSession,_g3,null());
							HX_STACK_LINE(908)
							::lime::utils::Float32Array _g11 = translationMatrix->toArray(true);		HX_STACK_VAR(_g11,"_g11");
							HX_STACK_LINE(908)
							::openfl::_internal::renderer::opengl::shaders2::Shader shader = ::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::prepareShader(bucket,renderSession,object,_g11);		HX_STACK_VAR(shader,"shader");
							HX_STACK_LINE(909)
							::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::renderFill(bucket,shader,renderSession);
							HX_STACK_LINE(910)
							renderSession->stencilManager->popBucket(object,bucket,renderSession);
						}
						;break;
						case (int)5: {
							HX_STACK_LINE(912)
							::openfl::_internal::renderer::opengl::shaders2::Shader shader = ::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::prepareShader(bucket,renderSession,object,null());		HX_STACK_VAR(shader,"shader");
							HX_STACK_LINE(913)
							::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::renderDrawTriangles(bucket,shader,renderSession);
						}
						;break;
						case (int)6: {
							HX_STACK_LINE(915)
							if ((!(batchDrawing))){
								HX_STACK_LINE(916)
								renderSession->spriteBatch->begin(renderSession,clipRect);
							}
							HX_STACK_LINE(918)
							Dynamic args = ::Type_obj::enumParameters(bucket->graphicType);		HX_STACK_VAR(args,"args");
							HX_STACK_LINE(919)
							renderSession->spriteBatch->renderTiles(object,args->__GetItem((int)0),args->__GetItem((int)1),args->__GetItem((int)2),args->__GetItem((int)3),args->__GetItem((int)4));
							HX_STACK_LINE(921)
							renderSession->spriteBatch->finish();
						}
						;break;
						default: {
						}
					}
				}
				HX_STACK_LINE(925)
				::openfl::geom::ColorTransform ct = object->__worldColorTransform;		HX_STACK_VAR(ct,"ct");
				HX_STACK_LINE(926)
				{
					HX_STACK_LINE(926)
					int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(926)
					Array< ::Dynamic > _g3 = bucket->lines;		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(926)
					while((true)){
						HX_STACK_LINE(926)
						if ((!(((_g2 < _g3->length))))){
							HX_STACK_LINE(926)
							break;
						}
						HX_STACK_LINE(926)
						::openfl::_internal::renderer::opengl::utils::GLBucketData line = _g3->__get(_g2).StaticCast< ::openfl::_internal::renderer::opengl::utils::GLBucketData >();		HX_STACK_VAR(line,"line");
						HX_STACK_LINE(926)
						++(_g2);
						HX_STACK_LINE(927)
						if (((bool((line != null())) && bool((line->verts->length > (int)0))))){
							HX_STACK_LINE(928)
							::openfl::_internal::renderer::opengl::shaders2::PrimitiveShader shader = renderSession->shaderManager->primitiveShader;		HX_STACK_VAR(shader,"shader");
							HX_STACK_LINE(930)
							renderSession->shaderManager->setShader(shader,null());
							HX_STACK_LINE(932)
							{
								HX_STACK_LINE(932)
								int location = shader->getUniformLocation(HX_CSTRING("uTranslationMatrix"));		HX_STACK_VAR(location,"location");
								HX_STACK_LINE(932)
								::lime::utils::Float32Array v = translationMatrix->toArray(true);		HX_STACK_VAR(v,"v");
								HX_STACK_LINE(932)
								{
									HX_STACK_LINE(932)
									::lime::utils::ByteArray _g21 = v->getByteBuffer();		HX_STACK_VAR(_g21,"_g21");
									HX_STACK_LINE(932)
									::lime::graphics::opengl::GL_obj::lime_gl_uniform_matrix(location,false,_g21,(int)3);
								}
							}
							HX_STACK_LINE(933)
							{
								HX_STACK_LINE(933)
								int location = shader->getUniformLocation(HX_CSTRING("uProjectionMatrix"));		HX_STACK_VAR(location,"location");
								HX_STACK_LINE(933)
								::lime::utils::Float32Array v = renderSession->projectionMatrix->toArray(true);		HX_STACK_VAR(v,"v");
								HX_STACK_LINE(933)
								{
									HX_STACK_LINE(933)
									::lime::utils::ByteArray _g31 = v->getByteBuffer();		HX_STACK_VAR(_g31,"_g31");
									HX_STACK_LINE(933)
									::lime::graphics::opengl::GL_obj::lime_gl_uniform_matrix(location,false,_g31,(int)3);
								}
							}
							HX_STACK_LINE(934)
							{
								HX_STACK_LINE(934)
								int location = shader->getUniformLocation(HX_CSTRING("uAlpha"));		HX_STACK_VAR(location,"location");
								HX_STACK_LINE(934)
								::lime::graphics::opengl::GL_obj::lime_gl_uniform1f(location,(int)1);
							}
							HX_STACK_LINE(936)
							{
								HX_STACK_LINE(936)
								int location = shader->getUniformLocation(HX_CSTRING("uColorMultiplier"));		HX_STACK_VAR(location,"location");
								HX_STACK_LINE(936)
								::lime::graphics::opengl::GL_obj::lime_gl_uniform4f(location,ct->redMultiplier,ct->greenMultiplier,ct->blueMultiplier,ct->alphaMultiplier);
							}
							HX_STACK_LINE(937)
							{
								HX_STACK_LINE(937)
								int location = shader->getUniformLocation(HX_CSTRING("uColorOffset"));		HX_STACK_VAR(location,"location");
								HX_STACK_LINE(937)
								::lime::graphics::opengl::GL_obj::lime_gl_uniform4f(location,(Float(ct->redOffset) / Float((int)255)),(Float(ct->greenOffset) / Float((int)255)),(Float(ct->blueOffset) / Float((int)255)),(Float(ct->alphaOffset) / Float((int)255)));
							}
							HX_STACK_LINE(939)
							{
								HX_STACK_LINE(939)
								::openfl::_internal::renderer::opengl::utils::VertexArray _this = line->vertexArray;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(939)
								{
									HX_STACK_LINE(939)
									::lime::graphics::opengl::GLBuffer buffer = _this->glBuffer;		HX_STACK_VAR(buffer,"buffer");
									HX_STACK_LINE(939)
									::lime::graphics::opengl::GL_obj::lime_gl_bind_buffer(_this->gl->ARRAY_BUFFER,(  (((buffer == null()))) ? int((int)0) : int(buffer->id) ));
								}
							}
							HX_STACK_LINE(940)
							shader->bindVertexArray(line->vertexArray);
							HX_STACK_LINE(942)
							{
								HX_STACK_LINE(942)
								::lime::graphics::opengl::GLBuffer buffer = line->indexBuffer;		HX_STACK_VAR(buffer,"buffer");
								HX_STACK_LINE(942)
								::lime::graphics::opengl::GL_obj::lime_gl_bind_buffer(gl->ELEMENT_ARRAY_BUFFER,(  (((buffer == null()))) ? int((int)0) : int(buffer->id) ));
							}
							HX_STACK_LINE(943)
							::lime::graphics::opengl::GL_obj::lime_gl_draw_elements(gl->TRIANGLE_STRIP,line->indices->length,gl->UNSIGNED_SHORT,(int)0);
						}
					}
				}
				HX_STACK_LINE(947)
				if (((clipRect != null()))){
					HX_STACK_LINE(948)
					::lime::graphics::opengl::GL_obj::lime_gl_disable(gl->SCISSOR_TEST);
				}
				HX_STACK_LINE(951)
				batchDrawing = renderSession->spriteBatch->drawing;
				HX_STACK_LINE(952)
				if (((bool(!(batchDrawing)) && bool(!(localCoords))))){
					HX_STACK_LINE(953)
					renderSession->spriteBatch->begin(renderSession,clipRect);
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GraphicsRenderer_obj,renderGraphics,(void))

Void GraphicsRenderer_obj::updateGraphics( ::openfl::display::DisplayObject object,::openfl::display::Graphics graphics,::lime::graphics::GLRenderContext gl,Dynamic __o_localCoords){
Dynamic localCoords = __o_localCoords.Default(false);
	HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.GraphicsRenderer","updateGraphics",0xa0662573,"openfl._internal.renderer.opengl.utils.GraphicsRenderer.updateGraphics","openfl/_internal/renderer/opengl/utils/GraphicsRenderer.hx",958,0xd295150c)
	HX_STACK_ARG(object,"object")
	HX_STACK_ARG(graphics,"graphics")
	HX_STACK_ARG(gl,"gl")
	HX_STACK_ARG(localCoords,"localCoords")
{
		HX_STACK_LINE(960)
		{
			HX_STACK_LINE(960)
			::openfl::geom::Point _this = ::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::objectPosition;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(960)
			Float xa = object->get_x();		HX_STACK_VAR(xa,"xa");
			HX_STACK_LINE(960)
			Float ya = object->get_y();		HX_STACK_VAR(ya,"ya");
			HX_STACK_LINE(960)
			_this->x = xa;
			HX_STACK_LINE(960)
			_this->y = ya;
		}
		HX_STACK_LINE(962)
		if (((graphics->__bounds == null()))){
			HX_STACK_LINE(963)
			::openfl::geom::Rectangle _g = ::openfl::geom::Rectangle_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(963)
			::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::objectBounds = _g;
		}
		else{
			HX_STACK_LINE(965)
			::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::objectBounds->copyFrom(graphics->__bounds);
		}
		HX_STACK_LINE(968)
		::openfl::_internal::renderer::opengl::utils::GLStack glStack = null();		HX_STACK_VAR(glStack,"glStack");
		HX_STACK_LINE(970)
		if ((graphics->__dirty)){
			HX_STACK_LINE(972)
			::openfl::_internal::renderer::opengl::utils::GLStack _g1 = ::openfl::_internal::renderer::opengl::utils::DrawPath_obj::getStack(graphics,gl);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(972)
			glStack = _g1;
		}
		HX_STACK_LINE(976)
		graphics->set___dirty(false);
		HX_STACK_LINE(978)
		{
			HX_STACK_LINE(978)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(978)
			Array< ::Dynamic > _g1 = glStack->buckets;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(978)
			while((true)){
				HX_STACK_LINE(978)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(978)
					break;
				}
				HX_STACK_LINE(978)
				::openfl::_internal::renderer::opengl::utils::GLBucket data = _g1->__get(_g).StaticCast< ::openfl::_internal::renderer::opengl::utils::GLBucket >();		HX_STACK_VAR(data,"data");
				HX_STACK_LINE(978)
				++(_g);
				HX_STACK_LINE(979)
				data->reset();
				HX_STACK_LINE(980)
				::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::bucketPool->push(data);
			}
		}
		HX_STACK_LINE(983)
		glStack->reset();
		HX_STACK_LINE(985)
		{
			HX_STACK_LINE(985)
			int _g1 = glStack->lastIndex;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(985)
			int _g = graphics->__drawPaths->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(985)
			while((true)){
				HX_STACK_LINE(985)
				if ((!(((_g1 < _g))))){
					HX_STACK_LINE(985)
					break;
				}
				HX_STACK_LINE(985)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(986)
				::openfl::_internal::renderer::opengl::utils::DrawPath path = graphics->__drawPaths->__get(i).StaticCast< ::openfl::_internal::renderer::opengl::utils::DrawPath >();		HX_STACK_VAR(path,"path");
				HX_STACK_LINE(988)
				{
					HX_STACK_LINE(988)
					::openfl::_internal::renderer::opengl::utils::GraphicType _g2 = path->type;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(988)
					switch( (int)(_g2->__Index())){
						case (int)0: {
							HX_STACK_LINE(990)
							::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::buildComplexPoly(path,glStack,localCoords);
						}
						;break;
						case (int)1: {
							HX_STACK_LINE(988)
							bool rounded = (::openfl::_internal::renderer::opengl::utils::GraphicType(_g2))->__Param(0);		HX_STACK_VAR(rounded,"rounded");
							HX_STACK_LINE(992)
							if ((rounded)){
								HX_STACK_LINE(993)
								::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::buildRoundedRectangle(path,glStack,localCoords);
							}
							else{
								HX_STACK_LINE(995)
								::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::buildRectangle(path,glStack,localCoords);
							}
						}
						;break;
						case (int)2: case (int)3: {
							HX_STACK_LINE(998)
							::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::buildCircle(path,glStack,localCoords);
						}
						;break;
						case (int)4: {
							HX_STACK_LINE(1000)
							::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::buildDrawTriangles(path,object,glStack,localCoords);
						}
						;break;
						case (int)5: {
							HX_STACK_LINE(1002)
							::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::prepareBucket(path,glStack);
						}
						;break;
						case (int)6: {
							HX_STACK_LINE(988)
							::openfl::geom::Matrix m = (::openfl::_internal::renderer::opengl::utils::GraphicType(_g2))->__Param(0);		HX_STACK_VAR(m,"m");
							HX_STACK_LINE(1004)
							::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::overrideMatrix = m;
						}
						;break;
					}
				}
				HX_STACK_LINE(1008)
				(glStack->lastIndex)++;
			}
		}
		HX_STACK_LINE(1011)
		{
			HX_STACK_LINE(1011)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1011)
			Array< ::Dynamic > _g1 = glStack->buckets;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(1011)
			while((true)){
				HX_STACK_LINE(1011)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(1011)
					break;
				}
				HX_STACK_LINE(1011)
				::openfl::_internal::renderer::opengl::utils::GLBucket bucket = _g1->__get(_g).StaticCast< ::openfl::_internal::renderer::opengl::utils::GLBucket >();		HX_STACK_VAR(bucket,"bucket");
				HX_STACK_LINE(1011)
				++(_g);
				HX_STACK_LINE(1013)
				if ((bucket->uploadTileBuffer)){
					HX_STACK_LINE(1016)
					Float _g2 = ::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::objectBounds->get_left();		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(1016)
					int _g3 = ::Math_obj::ceil(_g2);		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(1017)
					Float _g4 = ::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::objectBounds->get_top();		HX_STACK_VAR(_g4,"_g4");
					HX_STACK_LINE(1017)
					int _g5 = ::Math_obj::ceil(_g4);		HX_STACK_VAR(_g5,"_g5");
					HX_STACK_LINE(1018)
					Float _g6 = ::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::objectBounds->get_right();		HX_STACK_VAR(_g6,"_g6");
					HX_STACK_LINE(1018)
					int _g7 = ::Math_obj::floor(_g6);		HX_STACK_VAR(_g7,"_g7");
					HX_STACK_LINE(1019)
					Float _g8 = ::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::objectBounds->get_bottom();		HX_STACK_VAR(_g8,"_g8");
					HX_STACK_LINE(1019)
					int _g9 = ::Math_obj::floor(_g8);		HX_STACK_VAR(_g9,"_g9");
					HX_STACK_LINE(1015)
					bucket->uploadTile(_g3,_g5,_g7,_g9);
				}
				HX_STACK_LINE(1024)
				bucket->optimize();
			}
		}
		HX_STACK_LINE(1027)
		glStack->upload();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(GraphicsRenderer_obj,updateGraphics,(void))

::openfl::_internal::renderer::opengl::utils::GLBucket GraphicsRenderer_obj::prepareBucket( ::openfl::_internal::renderer::opengl::utils::DrawPath path,::openfl::_internal::renderer::opengl::utils::GLStack glStack){
	HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.GraphicsRenderer","prepareBucket",0x0dd304b2,"openfl._internal.renderer.opengl.utils.GraphicsRenderer.prepareBucket","openfl/_internal/renderer/opengl/utils/GraphicsRenderer.hx",1031,0xd295150c)
	HX_STACK_ARG(path,"path")
	HX_STACK_ARG(glStack,"glStack")
	HX_STACK_LINE(1032)
	::openfl::_internal::renderer::opengl::utils::GLBucket bucket = null();		HX_STACK_VAR(bucket,"bucket");
	HX_STACK_LINE(1033)
	{
		HX_STACK_LINE(1033)
		::openfl::_internal::renderer::opengl::utils::FillType _g = path->fill;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1033)
		switch( (int)(_g->__Index())){
			case (int)1: {
				HX_STACK_LINE(1033)
				Float a = (::openfl::_internal::renderer::opengl::utils::FillType(_g))->__Param(1);		HX_STACK_VAR(a,"a");
				HX_STACK_LINE(1033)
				int c = (::openfl::_internal::renderer::opengl::utils::FillType(_g))->__Param(0);		HX_STACK_VAR(c,"c");
				HX_STACK_LINE(1034)
				{
					HX_STACK_LINE(1035)
					::openfl::_internal::renderer::opengl::utils::GLBucket _g1 = ::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::switchBucket(path->fillIndex,glStack,::openfl::_internal::renderer::opengl::utils::BucketMode_obj::Fill);		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(1035)
					bucket = _g1;
					HX_STACK_LINE(1036)
					if (((c == null()))){
						HX_STACK_LINE(1036)
						bucket->color = Array_obj< Float >::__new().Add((int)1).Add((int)1).Add((int)1);
					}
					else{
						HX_STACK_LINE(1036)
						bucket->color = Array_obj< Float >::__new().Add((Float(((int((int(c) >> int((int)16))) & int((int)255)))) / Float((int)255))).Add((Float(((int((int(c) >> int((int)8))) & int((int)255)))) / Float((int)255))).Add((Float(((int(c) & int((int)255)))) / Float((int)255)));
					}
					HX_STACK_LINE(1037)
					bucket->color[(int)3] = a;
					HX_STACK_LINE(1038)
					bucket->uploadTileBuffer = true;
				}
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(1033)
				bool s = (::openfl::_internal::renderer::opengl::utils::FillType(_g))->__Param(3);		HX_STACK_VAR(s,"s");
				HX_STACK_LINE(1033)
				bool r = (::openfl::_internal::renderer::opengl::utils::FillType(_g))->__Param(2);		HX_STACK_VAR(r,"r");
				HX_STACK_LINE(1033)
				::openfl::geom::Matrix m = (::openfl::_internal::renderer::opengl::utils::FillType(_g))->__Param(1);		HX_STACK_VAR(m,"m");
				HX_STACK_LINE(1033)
				::openfl::display::BitmapData b = (::openfl::_internal::renderer::opengl::utils::FillType(_g))->__Param(0);		HX_STACK_VAR(b,"b");
				HX_STACK_LINE(1040)
				{
					HX_STACK_LINE(1041)
					::openfl::_internal::renderer::opengl::utils::GLBucket _g1 = ::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::switchBucket(path->fillIndex,glStack,::openfl::_internal::renderer::opengl::utils::BucketMode_obj::PatternFill);		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(1041)
					bucket = _g1;
					HX_STACK_LINE(1042)
					bucket->bitmap = b;
					HX_STACK_LINE(1043)
					bucket->textureRepeat = r;
					HX_STACK_LINE(1044)
					bucket->textureSmooth = s;
					HX_STACK_LINE(1045)
					::lime::graphics::opengl::GLTexture _g2 = b->getTexture(glStack->gl);		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(1045)
					bucket->texture = _g2;
					HX_STACK_LINE(1046)
					bucket->uploadTileBuffer = true;
					HX_STACK_LINE(1049)
					::openfl::geom::Matrix pMatrix;		HX_STACK_VAR(pMatrix,"pMatrix");
					HX_STACK_LINE(1050)
					if (((m == null()))){
						HX_STACK_LINE(1051)
						::openfl::geom::Matrix _g3 = ::openfl::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(_g3,"_g3");
						HX_STACK_LINE(1051)
						pMatrix = _g3;
					}
					else{
						HX_STACK_LINE(1053)
						::openfl::geom::Matrix _g4 = ::openfl::geom::Matrix_obj::__new(m->a,m->b,m->c,m->d,m->tx,m->ty);		HX_STACK_VAR(_g4,"_g4");
						HX_STACK_LINE(1053)
						pMatrix = _g4;
					}
					HX_STACK_LINE(1056)
					pMatrix->invert();
					HX_STACK_LINE(1057)
					pMatrix->scale((Float((int)1) / Float(b->width)),(Float((int)1) / Float(b->height)));
					HX_STACK_LINE(1058)
					Float tx = pMatrix->tx;		HX_STACK_VAR(tx,"tx");
					HX_STACK_LINE(1059)
					Float ty = pMatrix->ty;		HX_STACK_VAR(ty,"ty");
					HX_STACK_LINE(1060)
					pMatrix->tx = (int)0;
					HX_STACK_LINE(1061)
					pMatrix->ty = (int)0;
					HX_STACK_LINE(1063)
					bucket->textureTL->x = tx;
					HX_STACK_LINE(1064)
					bucket->textureTL->y = ty;
					HX_STACK_LINE(1065)
					bucket->textureBR->x = (tx + (int)1);
					HX_STACK_LINE(1066)
					bucket->textureBR->y = (ty + (int)1);
					HX_STACK_LINE(1068)
					bucket->textureMatrix = pMatrix;
				}
			}
			;break;
			default: {
				HX_STACK_LINE(1070)
				::openfl::_internal::renderer::opengl::utils::GLBucket _g5 = ::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::switchBucket(path->fillIndex,glStack,::openfl::_internal::renderer::opengl::utils::BucketMode_obj::Line);		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(1070)
				bucket = _g5;
				HX_STACK_LINE(1071)
				bucket->uploadTileBuffer = false;
			}
		}
	}
	HX_STACK_LINE(1074)
	{
		HX_STACK_LINE(1074)
		::openfl::_internal::renderer::opengl::utils::GraphicType _g = path->type;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1074)
		switch( (int)(_g->__Index())){
			case (int)4: {
				HX_STACK_LINE(1076)
				bucket->mode = ::openfl::_internal::renderer::opengl::utils::BucketMode_obj::DrawTriangles;
				HX_STACK_LINE(1077)
				bucket->uploadTileBuffer = false;
			}
			;break;
			case (int)5: {
				HX_STACK_LINE(1079)
				bucket->mode = ::openfl::_internal::renderer::opengl::utils::BucketMode_obj::DrawTiles;
				HX_STACK_LINE(1080)
				bucket->uploadTileBuffer = false;
			}
			;break;
			default: {
			}
		}
	}
	HX_STACK_LINE(1084)
	bucket->graphicType = path->type;
	HX_STACK_LINE(1085)
	bucket->overrideMatrix = ::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::overrideMatrix;
	HX_STACK_LINE(1087)
	return bucket;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GraphicsRenderer_obj,prepareBucket,return )

::openfl::_internal::renderer::opengl::utils::GLBucket GraphicsRenderer_obj::getBucket( ::openfl::_internal::renderer::opengl::utils::GLStack glStack,::openfl::_internal::renderer::opengl::utils::BucketMode mode){
	HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.GraphicsRenderer","getBucket",0x4967a481,"openfl._internal.renderer.opengl.utils.GraphicsRenderer.getBucket","openfl/_internal/renderer/opengl/utils/GraphicsRenderer.hx",1090,0xd295150c)
	HX_STACK_ARG(glStack,"glStack")
	HX_STACK_ARG(mode,"mode")
	HX_STACK_LINE(1091)
	::openfl::_internal::renderer::opengl::utils::GLBucket b = ::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::bucketPool->pop().StaticCast< ::openfl::_internal::renderer::opengl::utils::GLBucket >();		HX_STACK_VAR(b,"b");
	HX_STACK_LINE(1092)
	if (((b == null()))){
		HX_STACK_LINE(1093)
		::openfl::_internal::renderer::opengl::utils::GLBucket _g = ::openfl::_internal::renderer::opengl::utils::GLBucket_obj::__new(glStack->gl);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1093)
		b = _g;
	}
	HX_STACK_LINE(1095)
	b->mode = mode;
	HX_STACK_LINE(1096)
	glStack->buckets->push(b);
	HX_STACK_LINE(1097)
	return b;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GraphicsRenderer_obj,getBucket,return )

::openfl::_internal::renderer::opengl::utils::GLBucket GraphicsRenderer_obj::switchBucket( int fillIndex,::openfl::_internal::renderer::opengl::utils::GLStack glStack,::openfl::_internal::renderer::opengl::utils::BucketMode mode){
	HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.GraphicsRenderer","switchBucket",0xb3071d3d,"openfl._internal.renderer.opengl.utils.GraphicsRenderer.switchBucket","openfl/_internal/renderer/opengl/utils/GraphicsRenderer.hx",1100,0xd295150c)
	HX_STACK_ARG(fillIndex,"fillIndex")
	HX_STACK_ARG(glStack,"glStack")
	HX_STACK_ARG(mode,"mode")
	HX_STACK_LINE(1102)
	::openfl::_internal::renderer::opengl::utils::GLBucket bucket = null();		HX_STACK_VAR(bucket,"bucket");
	HX_STACK_LINE(1104)
	{
		HX_STACK_LINE(1104)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1104)
		Array< ::Dynamic > _g1 = glStack->buckets;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(1104)
		while((true)){
			HX_STACK_LINE(1104)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(1104)
				break;
			}
			HX_STACK_LINE(1104)
			::openfl::_internal::renderer::opengl::utils::GLBucket b = _g1->__get(_g).StaticCast< ::openfl::_internal::renderer::opengl::utils::GLBucket >();		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(1104)
			++(_g);
			HX_STACK_LINE(1105)
			if (((b->fillIndex == fillIndex))){
				HX_STACK_LINE(1106)
				bucket = b;
				HX_STACK_LINE(1107)
				break;
			}
		}
	}
	HX_STACK_LINE(1111)
	if (((bucket == null()))){
		HX_STACK_LINE(1112)
		::openfl::_internal::renderer::opengl::utils::GLBucket _g = ::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::getBucket(glStack,mode);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1112)
		bucket = _g;
	}
	HX_STACK_LINE(1115)
	bucket->dirty = true;
	HX_STACK_LINE(1116)
	bucket->fillIndex = fillIndex;
	HX_STACK_LINE(1118)
	return bucket;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GraphicsRenderer_obj,switchBucket,return )

::openfl::_internal::renderer::opengl::shaders2::Shader GraphicsRenderer_obj::prepareShader( ::openfl::_internal::renderer::opengl::utils::GLBucket bucket,::openfl::_internal::renderer::RenderSession renderSession,::openfl::display::DisplayObject object,::lime::utils::Float32Array translationMatrix){
	HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.GraphicsRenderer","prepareShader",0x5c56df6d,"openfl._internal.renderer.opengl.utils.GraphicsRenderer.prepareShader","openfl/_internal/renderer/opengl/utils/GraphicsRenderer.hx",1121,0xd295150c)
	HX_STACK_ARG(bucket,"bucket")
	HX_STACK_ARG(renderSession,"renderSession")
	HX_STACK_ARG(object,"object")
	HX_STACK_ARG(translationMatrix,"translationMatrix")
	HX_STACK_LINE(1122)
	::lime::graphics::GLRenderContext gl = renderSession->gl;		HX_STACK_VAR(gl,"gl");
	HX_STACK_LINE(1123)
	::openfl::_internal::renderer::opengl::shaders2::Shader shader = null();		HX_STACK_VAR(shader,"shader");
	HX_STACK_LINE(1125)
	::openfl::_internal::renderer::opengl::shaders2::Shader _g;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(1125)
	{
		HX_STACK_LINE(1125)
		::openfl::_internal::renderer::opengl::utils::BucketMode _g1 = bucket->mode;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(1125)
		switch( (int)(_g1->__Index())){
			case (int)1: {
				HX_STACK_LINE(1127)
				_g = renderSession->shaderManager->fillShader;
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(1129)
				_g = renderSession->shaderManager->patternFillShader;
			}
			;break;
			case (int)5: {
				HX_STACK_LINE(1131)
				_g = renderSession->shaderManager->drawTrianglesShader;
			}
			;break;
			default: {
				HX_STACK_LINE(1133)
				_g = null();
			}
		}
	}
	HX_STACK_LINE(1125)
	shader = _g;
	HX_STACK_LINE(1136)
	if (((shader == null()))){
		HX_STACK_LINE(1136)
		return null();
	}
	HX_STACK_LINE(1138)
	bool newShader = renderSession->shaderManager->setShader(shader,null());		HX_STACK_VAR(newShader,"newShader");
	HX_STACK_LINE(1141)
	{
		HX_STACK_LINE(1141)
		int location = shader->getUniformLocation(HX_CSTRING("uAlpha"));		HX_STACK_VAR(location,"location");
		HX_STACK_LINE(1141)
		::lime::graphics::opengl::GL_obj::lime_gl_uniform1f(location,object->__worldAlpha);
	}
	HX_STACK_LINE(1142)
	{
		HX_STACK_LINE(1142)
		int location = shader->getUniformLocation(HX_CSTRING("uProjectionMatrix"));		HX_STACK_VAR(location,"location");
		HX_STACK_LINE(1142)
		::lime::utils::Float32Array v = renderSession->projectionMatrix->toArray(true);		HX_STACK_VAR(v,"v");
		HX_STACK_LINE(1142)
		{
			HX_STACK_LINE(1142)
			::lime::utils::ByteArray _g1 = v->getByteBuffer();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(1142)
			::lime::graphics::opengl::GL_obj::lime_gl_uniform_matrix(location,false,_g1,(int)3);
		}
	}
	HX_STACK_LINE(1144)
	::openfl::geom::ColorTransform ct = object->__worldColorTransform;		HX_STACK_VAR(ct,"ct");
	HX_STACK_LINE(1145)
	{
		HX_STACK_LINE(1145)
		int location = shader->getUniformLocation(HX_CSTRING("uColorMultiplier"));		HX_STACK_VAR(location,"location");
		HX_STACK_LINE(1145)
		::lime::graphics::opengl::GL_obj::lime_gl_uniform4f(location,ct->redMultiplier,ct->greenMultiplier,ct->blueMultiplier,ct->alphaMultiplier);
	}
	HX_STACK_LINE(1146)
	{
		HX_STACK_LINE(1146)
		int location = shader->getUniformLocation(HX_CSTRING("uColorOffset"));		HX_STACK_VAR(location,"location");
		HX_STACK_LINE(1146)
		::lime::graphics::opengl::GL_obj::lime_gl_uniform4f(location,(Float(ct->redOffset) / Float((int)255)),(Float(ct->greenOffset) / Float((int)255)),(Float(ct->blueOffset) / Float((int)255)),(Float(ct->alphaOffset) / Float((int)255)));
	}
	HX_STACK_LINE(1149)
	{
		HX_STACK_LINE(1149)
		::openfl::_internal::renderer::opengl::utils::BucketMode _g1 = bucket->mode;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(1149)
		switch( (int)(_g1->__Index())){
			case (int)1: {
				HX_STACK_LINE(1151)
				{
					HX_STACK_LINE(1151)
					int location = shader->getUniformLocation(HX_CSTRING("uTranslationMatrix"));		HX_STACK_VAR(location,"location");
					HX_STACK_LINE(1151)
					{
						HX_STACK_LINE(1151)
						::lime::utils::ByteArray _g2 = translationMatrix->getByteBuffer();		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(1151)
						::lime::graphics::opengl::GL_obj::lime_gl_uniform_matrix(location,false,_g2,(int)3);
					}
				}
				HX_STACK_LINE(1152)
				{
					HX_STACK_LINE(1152)
					int location = shader->getUniformLocation(HX_CSTRING("uColor"));		HX_STACK_VAR(location,"location");
					HX_STACK_LINE(1152)
					::lime::utils::Float32Array v = ::lime::utils::Float32Array_obj::__new(bucket->color,null(),null());		HX_STACK_VAR(v,"v");
					HX_STACK_LINE(1152)
					{
						HX_STACK_LINE(1152)
						::lime::utils::ByteArray _g3 = v->getByteBuffer();		HX_STACK_VAR(_g3,"_g3");
						HX_STACK_LINE(1152)
						::lime::graphics::opengl::GL_obj::lime_gl_uniform4fv(location,_g3);
					}
				}
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(1154)
				{
					HX_STACK_LINE(1154)
					int location = shader->getUniformLocation(HX_CSTRING("uTranslationMatrix"));		HX_STACK_VAR(location,"location");
					HX_STACK_LINE(1154)
					{
						HX_STACK_LINE(1154)
						::lime::utils::ByteArray _g4 = translationMatrix->getByteBuffer();		HX_STACK_VAR(_g4,"_g4");
						HX_STACK_LINE(1154)
						::lime::graphics::opengl::GL_obj::lime_gl_uniform_matrix(location,false,_g4,(int)3);
					}
				}
				HX_STACK_LINE(1155)
				{
					HX_STACK_LINE(1155)
					int location = shader->getUniformLocation(HX_CSTRING("uPatternTL"));		HX_STACK_VAR(location,"location");
					HX_STACK_LINE(1155)
					::lime::graphics::opengl::GL_obj::lime_gl_uniform2f(location,bucket->textureTL->x,bucket->textureTL->y);
				}
				HX_STACK_LINE(1156)
				{
					HX_STACK_LINE(1156)
					int location = shader->getUniformLocation(HX_CSTRING("uPatternBR"));		HX_STACK_VAR(location,"location");
					HX_STACK_LINE(1156)
					::lime::graphics::opengl::GL_obj::lime_gl_uniform2f(location,bucket->textureBR->x,bucket->textureBR->y);
				}
				HX_STACK_LINE(1157)
				{
					HX_STACK_LINE(1157)
					int location = shader->getUniformLocation(HX_CSTRING("uPatternMatrix"));		HX_STACK_VAR(location,"location");
					HX_STACK_LINE(1157)
					::lime::utils::Float32Array v = bucket->textureMatrix->toArray(true);		HX_STACK_VAR(v,"v");
					HX_STACK_LINE(1157)
					{
						HX_STACK_LINE(1157)
						::lime::utils::ByteArray _g5 = v->getByteBuffer();		HX_STACK_VAR(_g5,"_g5");
						HX_STACK_LINE(1157)
						::lime::graphics::opengl::GL_obj::lime_gl_uniform_matrix(location,false,_g5,(int)3);
					}
				}
			}
			;break;
			case (int)5: {
				HX_STACK_LINE(1159)
				if (((bucket->texture != null()))){
					HX_STACK_LINE(1160)
					int location = shader->getUniformLocation(HX_CSTRING("uUseTexture"));		HX_STACK_VAR(location,"location");
					HX_STACK_LINE(1160)
					::lime::graphics::opengl::GL_obj::lime_gl_uniform1i(location,(int)1);
				}
				else{
					HX_STACK_LINE(1162)
					{
						HX_STACK_LINE(1162)
						int location = shader->getUniformLocation(HX_CSTRING("uUseTexture"));		HX_STACK_VAR(location,"location");
						HX_STACK_LINE(1162)
						::lime::graphics::opengl::GL_obj::lime_gl_uniform1i(location,(int)0);
					}
					HX_STACK_LINE(1163)
					{
						HX_STACK_LINE(1163)
						int location = shader->getUniformLocation(HX_CSTRING("uColor"));		HX_STACK_VAR(location,"location");
						HX_STACK_LINE(1163)
						::lime::utils::Float32Array v = ::lime::utils::Float32Array_obj::__new(bucket->color,null(),null());		HX_STACK_VAR(v,"v");
						HX_STACK_LINE(1163)
						{
							HX_STACK_LINE(1163)
							::lime::utils::ByteArray _g6 = v->getByteBuffer();		HX_STACK_VAR(_g6,"_g6");
							HX_STACK_LINE(1163)
							::lime::graphics::opengl::GL_obj::lime_gl_uniform4fv(location,_g6);
						}
					}
				}
			}
			;break;
			default: {
			}
		}
	}
	HX_STACK_LINE(1168)
	return shader;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(GraphicsRenderer_obj,prepareShader,return )

Void GraphicsRenderer_obj::renderFill( ::openfl::_internal::renderer::opengl::utils::GLBucket bucket,::openfl::_internal::renderer::opengl::shaders2::Shader shader,::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.GraphicsRenderer","renderFill",0x880196f8,"openfl._internal.renderer.opengl.utils.GraphicsRenderer.renderFill","openfl/_internal/renderer/opengl/utils/GraphicsRenderer.hx",1171,0xd295150c)
		HX_STACK_ARG(bucket,"bucket")
		HX_STACK_ARG(shader,"shader")
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(1172)
		::lime::graphics::GLRenderContext gl = renderSession->gl;		HX_STACK_VAR(gl,"gl");
		HX_STACK_LINE(1174)
		if (((bool((bucket->mode == ::openfl::_internal::renderer::opengl::utils::BucketMode_obj::PatternFill)) && bool((bucket->texture != null()))))){
			HX_STACK_LINE(1175)
			::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::bindTexture(gl,bucket);
		}
		HX_STACK_LINE(1178)
		{
			HX_STACK_LINE(1178)
			::lime::graphics::opengl::GLBuffer buffer = bucket->tileBuffer;		HX_STACK_VAR(buffer,"buffer");
			HX_STACK_LINE(1178)
			::lime::graphics::opengl::GL_obj::lime_gl_bind_buffer(gl->ARRAY_BUFFER,(  (((buffer == null()))) ? int((int)0) : int(buffer->id) ));
		}
		HX_STACK_LINE(1179)
		{
			HX_STACK_LINE(1179)
			int indx = shader->getAttribLocation(HX_CSTRING("aPosition"));		HX_STACK_VAR(indx,"indx");
			HX_STACK_LINE(1179)
			::lime::graphics::opengl::GL_obj::lime_gl_vertex_attrib_pointer(indx,(int)4,gl->SHORT,false,(int)0,(int)0);
		}
		HX_STACK_LINE(1180)
		::lime::graphics::opengl::GL_obj::lime_gl_draw_arrays(gl->TRIANGLE_STRIP,(int)0,(int)4);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GraphicsRenderer_obj,renderFill,(void))

Void GraphicsRenderer_obj::renderDrawTriangles( ::openfl::_internal::renderer::opengl::utils::GLBucket bucket,::openfl::_internal::renderer::opengl::shaders2::Shader shader,::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.GraphicsRenderer","renderDrawTriangles",0x793244f2,"openfl._internal.renderer.opengl.utils.GraphicsRenderer.renderDrawTriangles","openfl/_internal/renderer/opengl/utils/GraphicsRenderer.hx",1183,0xd295150c)
		HX_STACK_ARG(bucket,"bucket")
		HX_STACK_ARG(shader,"shader")
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(1184)
		::lime::graphics::GLRenderContext gl = renderSession->gl;		HX_STACK_VAR(gl,"gl");
		HX_STACK_LINE(1186)
		{
			HX_STACK_LINE(1186)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1186)
			Array< ::Dynamic > _g1 = bucket->fills;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(1186)
			while((true)){
				HX_STACK_LINE(1186)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(1186)
					break;
				}
				HX_STACK_LINE(1186)
				::openfl::_internal::renderer::opengl::utils::GLBucketData fill = _g1->__get(_g).StaticCast< ::openfl::_internal::renderer::opengl::utils::GLBucketData >();		HX_STACK_VAR(fill,"fill");
				HX_STACK_LINE(1186)
				++(_g);
				HX_STACK_LINE(1187)
				if ((fill->available)){
					HX_STACK_LINE(1187)
					continue;
				}
				HX_STACK_LINE(1189)
				::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::bindTexture(gl,bucket);
				HX_STACK_LINE(1190)
				{
					HX_STACK_LINE(1190)
					::openfl::_internal::renderer::opengl::utils::VertexArray _this = fill->vertexArray;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1190)
					{
						HX_STACK_LINE(1190)
						::lime::graphics::opengl::GLBuffer buffer = _this->glBuffer;		HX_STACK_VAR(buffer,"buffer");
						HX_STACK_LINE(1190)
						::lime::graphics::opengl::GL_obj::lime_gl_bind_buffer(_this->gl->ARRAY_BUFFER,(  (((buffer == null()))) ? int((int)0) : int(buffer->id) ));
					}
				}
				HX_STACK_LINE(1191)
				shader->bindVertexArray(fill->vertexArray);
				HX_STACK_LINE(1193)
				::lime::graphics::opengl::GL_obj::lime_gl_draw_arrays(gl->TRIANGLES,fill->glStart,fill->glLength);
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GraphicsRenderer_obj,renderDrawTriangles,(void))

Void GraphicsRenderer_obj::bindTexture( ::lime::graphics::GLRenderContext gl,::openfl::_internal::renderer::opengl::utils::GLBucket bucket){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.GraphicsRenderer","bindTexture",0x486a4dbf,"openfl._internal.renderer.opengl.utils.GraphicsRenderer.bindTexture","openfl/_internal/renderer/opengl/utils/GraphicsRenderer.hx",1197,0xd295150c)
		HX_STACK_ARG(gl,"gl")
		HX_STACK_ARG(bucket,"bucket")
		HX_STACK_LINE(1199)
		{
			HX_STACK_LINE(1199)
			::lime::graphics::opengl::GLTexture texture = bucket->texture;		HX_STACK_VAR(texture,"texture");
			HX_STACK_LINE(1199)
			::lime::graphics::opengl::GL_obj::lime_gl_bind_texture(gl->TEXTURE_2D,(  (((texture == null()))) ? int((int)0) : int(texture->id) ));
		}
		HX_STACK_LINE(1202)
		if ((bucket->textureRepeat)){
			HX_STACK_LINE(1203)
			::lime::graphics::opengl::GL_obj::lime_gl_tex_parameteri(gl->TEXTURE_2D,gl->TEXTURE_WRAP_S,gl->REPEAT);
			HX_STACK_LINE(1204)
			::lime::graphics::opengl::GL_obj::lime_gl_tex_parameteri(gl->TEXTURE_2D,gl->TEXTURE_WRAP_T,gl->REPEAT);
		}
		else{
			HX_STACK_LINE(1206)
			::lime::graphics::opengl::GL_obj::lime_gl_tex_parameteri(gl->TEXTURE_2D,gl->TEXTURE_WRAP_S,gl->CLAMP_TO_EDGE);
			HX_STACK_LINE(1207)
			::lime::graphics::opengl::GL_obj::lime_gl_tex_parameteri(gl->TEXTURE_2D,gl->TEXTURE_WRAP_T,gl->CLAMP_TO_EDGE);
		}
		HX_STACK_LINE(1210)
		if ((bucket->textureSmooth)){
			HX_STACK_LINE(1211)
			::lime::graphics::opengl::GL_obj::lime_gl_tex_parameteri(gl->TEXTURE_2D,gl->TEXTURE_MAG_FILTER,gl->LINEAR);
			HX_STACK_LINE(1212)
			::lime::graphics::opengl::GL_obj::lime_gl_tex_parameteri(gl->TEXTURE_2D,gl->TEXTURE_MIN_FILTER,gl->LINEAR);
		}
		else{
			HX_STACK_LINE(1214)
			::lime::graphics::opengl::GL_obj::lime_gl_tex_parameteri(gl->TEXTURE_2D,gl->TEXTURE_MAG_FILTER,gl->NEAREST);
			HX_STACK_LINE(1215)
			::lime::graphics::opengl::GL_obj::lime_gl_tex_parameteri(gl->TEXTURE_2D,gl->TEXTURE_MIN_FILTER,gl->NEAREST);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GraphicsRenderer_obj,bindTexture,(void))

bool GraphicsRenderer_obj::isCCW( Float x1,Float y1,Float x2,Float y2,Float x3,Float y3){
	HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.GraphicsRenderer","isCCW",0xc37e766e,"openfl._internal.renderer.opengl.utils.GraphicsRenderer.isCCW","openfl/_internal/renderer/opengl/utils/GraphicsRenderer.hx",1221,0xd295150c)
	HX_STACK_ARG(x1,"x1")
	HX_STACK_ARG(y1,"y1")
	HX_STACK_ARG(x2,"x2")
	HX_STACK_ARG(y2,"y2")
	HX_STACK_ARG(x3,"x3")
	HX_STACK_ARG(y3,"y3")
	HX_STACK_LINE(1221)
	return (((((x2 - x1)) * ((y3 - y1))) - (((y2 - y1)) * ((x3 - x1)))) < (int)0);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(GraphicsRenderer_obj,isCCW,return )

Array< Float > GraphicsRenderer_obj::hex2rgb( Dynamic hex){
	HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.GraphicsRenderer","hex2rgb",0x2f5bdf17,"openfl._internal.renderer.opengl.utils.GraphicsRenderer.hex2rgb","openfl/_internal/renderer/opengl/utils/GraphicsRenderer.hx",1225,0xd295150c)
	HX_STACK_ARG(hex,"hex")
	HX_STACK_LINE(1225)
	if (((hex == null()))){
		HX_STACK_LINE(1225)
		return Array_obj< Float >::__new().Add((int)1).Add((int)1).Add((int)1);
	}
	else{
		HX_STACK_LINE(1225)
		return Array_obj< Float >::__new().Add((Float(((int((int(hex) >> int((int)16))) & int((int)255)))) / Float((int)255))).Add((Float(((int((int(hex) >> int((int)8))) & int((int)255)))) / Float((int)255))).Add((Float(((int(hex) & int((int)255)))) / Float((int)255)));
	}
	HX_STACK_LINE(1225)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GraphicsRenderer_obj,hex2rgb,return )

Array< Float > GraphicsRenderer_obj::hex2rgba( Dynamic hex){
	HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.GraphicsRenderer","hex2rgba",0x4107556a,"openfl._internal.renderer.opengl.utils.GraphicsRenderer.hex2rgba","openfl/_internal/renderer/opengl/utils/GraphicsRenderer.hx",1229,0xd295150c)
	HX_STACK_ARG(hex,"hex")
	HX_STACK_LINE(1229)
	if (((hex == null()))){
		HX_STACK_LINE(1229)
		return Array_obj< Float >::__new().Add((int)1).Add((int)1).Add((int)1).Add((int)1);
	}
	else{
		HX_STACK_LINE(1229)
		return Array_obj< Float >::__new().Add((Float(((int((int(hex) >> int((int)16))) & int((int)255)))) / Float((int)255))).Add((Float(((int((int(hex) >> int((int)8))) & int((int)255)))) / Float((int)255))).Add((Float(((int(hex) & int((int)255)))) / Float((int)255))).Add((Float(((int((int(hex) >> int((int)24))) & int((int)255)))) / Float((int)255)));
	}
	HX_STACK_LINE(1229)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GraphicsRenderer_obj,hex2rgba,return )


GraphicsRenderer_obj::GraphicsRenderer_obj()
{
}

Dynamic GraphicsRenderer_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"SIN45") ) { return SIN45; }
		if (HX_FIELD_EQ(inName,"TAN22") ) { return TAN22; }
		if (HX_FIELD_EQ(inName,"isCCW") ) { return isCCW_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"curveTo") ) { return curveTo_dyn(); }
		if (HX_FIELD_EQ(inName,"hex2rgb") ) { return hex2rgb_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"hex2rgba") ) { return hex2rgba_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"buildLine") ) { return buildLine_dyn(); }
		if (HX_FIELD_EQ(inName,"buildPoly") ) { return buildPoly_dyn(); }
		if (HX_FIELD_EQ(inName,"getBucket") ) { return getBucket_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bucketPool") ) { return bucketPool; }
		if (HX_FIELD_EQ(inName,"renderFill") ) { return renderFill_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"lastTexture") ) { return lastTexture; }
		if (HX_FIELD_EQ(inName,"buildCircle") ) { return buildCircle_dyn(); }
		if (HX_FIELD_EQ(inName,"bindTexture") ) { return bindTexture_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"objectBounds") ) { return objectBounds; }
		if (HX_FIELD_EQ(inName,"switchBucket") ) { return switchBucket_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"prepareBucket") ) { return prepareBucket_dyn(); }
		if (HX_FIELD_EQ(inName,"prepareShader") ) { return prepareShader_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"objectPosition") ) { return objectPosition; }
		if (HX_FIELD_EQ(inName,"lastBucketMode") ) { return lastBucketMode; }
		if (HX_FIELD_EQ(inName,"overrideMatrix") ) { return overrideMatrix; }
		if (HX_FIELD_EQ(inName,"buildRectangle") ) { return buildRectangle_dyn(); }
		if (HX_FIELD_EQ(inName,"buildDrawTiles") ) { return buildDrawTiles_dyn(); }
		if (HX_FIELD_EQ(inName,"renderGraphics") ) { return renderGraphics_dyn(); }
		if (HX_FIELD_EQ(inName,"updateGraphics") ) { return updateGraphics_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"lastVertsBuffer") ) { return lastVertsBuffer; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"graphicsDataPool") ) { return graphicsDataPool; }
		if (HX_FIELD_EQ(inName,"buildComplexPoly") ) { return buildComplexPoly_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"lastTextureRepeat") ) { return lastTextureRepeat; }
		if (HX_FIELD_EQ(inName,"lastTextureSmooth") ) { return lastTextureSmooth; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"buildDrawTriangles") ) { return buildDrawTriangles_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"renderDrawTriangles") ) { return renderDrawTriangles_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"fillVertexAttributes") ) { return fillVertexAttributes; }
		if (HX_FIELD_EQ(inName,"quadraticBezierCurve") ) { return quadraticBezierCurve_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"buildRoundedRectangle") ) { return buildRoundedRectangle_dyn(); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"primitiveVertexAttributes") ) { return primitiveVertexAttributes; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"drawTrianglesVertexAttributes") ) { return drawTrianglesVertexAttributes; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic GraphicsRenderer_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"SIN45") ) { SIN45=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TAN22") ) { TAN22=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bucketPool") ) { bucketPool=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"lastTexture") ) { lastTexture=inValue.Cast< ::lime::graphics::opengl::GLTexture >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"objectBounds") ) { objectBounds=inValue.Cast< ::openfl::geom::Rectangle >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"objectPosition") ) { objectPosition=inValue.Cast< ::openfl::geom::Point >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lastBucketMode") ) { lastBucketMode=inValue.Cast< ::openfl::_internal::renderer::opengl::utils::BucketMode >(); return inValue; }
		if (HX_FIELD_EQ(inName,"overrideMatrix") ) { overrideMatrix=inValue.Cast< ::openfl::geom::Matrix >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"lastVertsBuffer") ) { lastVertsBuffer=inValue.Cast< ::lime::graphics::opengl::GLBuffer >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"graphicsDataPool") ) { graphicsDataPool=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"lastTextureRepeat") ) { lastTextureRepeat=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lastTextureSmooth") ) { lastTextureSmooth=inValue.Cast< bool >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"fillVertexAttributes") ) { fillVertexAttributes=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"primitiveVertexAttributes") ) { primitiveVertexAttributes=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"drawTrianglesVertexAttributes") ) { drawTrianglesVertexAttributes=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GraphicsRenderer_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("fillVertexAttributes"),
	HX_CSTRING("drawTrianglesVertexAttributes"),
	HX_CSTRING("primitiveVertexAttributes"),
	HX_CSTRING("graphicsDataPool"),
	HX_CSTRING("bucketPool"),
	HX_CSTRING("SIN45"),
	HX_CSTRING("TAN22"),
	HX_CSTRING("objectPosition"),
	HX_CSTRING("objectBounds"),
	HX_CSTRING("lastVertsBuffer"),
	HX_CSTRING("lastBucketMode"),
	HX_CSTRING("lastTexture"),
	HX_CSTRING("lastTextureRepeat"),
	HX_CSTRING("lastTextureSmooth"),
	HX_CSTRING("overrideMatrix"),
	HX_CSTRING("buildCircle"),
	HX_CSTRING("buildComplexPoly"),
	HX_CSTRING("buildLine"),
	HX_CSTRING("buildPoly"),
	HX_CSTRING("buildRectangle"),
	HX_CSTRING("buildRoundedRectangle"),
	HX_CSTRING("buildDrawTriangles"),
	HX_CSTRING("buildDrawTiles"),
	HX_CSTRING("curveTo"),
	HX_CSTRING("quadraticBezierCurve"),
	HX_CSTRING("render"),
	HX_CSTRING("renderGraphics"),
	HX_CSTRING("updateGraphics"),
	HX_CSTRING("prepareBucket"),
	HX_CSTRING("getBucket"),
	HX_CSTRING("switchBucket"),
	HX_CSTRING("prepareShader"),
	HX_CSTRING("renderFill"),
	HX_CSTRING("renderDrawTriangles"),
	HX_CSTRING("bindTexture"),
	HX_CSTRING("isCCW"),
	HX_CSTRING("hex2rgb"),
	HX_CSTRING("hex2rgba"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GraphicsRenderer_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(GraphicsRenderer_obj::fillVertexAttributes,"fillVertexAttributes");
	HX_MARK_MEMBER_NAME(GraphicsRenderer_obj::drawTrianglesVertexAttributes,"drawTrianglesVertexAttributes");
	HX_MARK_MEMBER_NAME(GraphicsRenderer_obj::primitiveVertexAttributes,"primitiveVertexAttributes");
	HX_MARK_MEMBER_NAME(GraphicsRenderer_obj::graphicsDataPool,"graphicsDataPool");
	HX_MARK_MEMBER_NAME(GraphicsRenderer_obj::bucketPool,"bucketPool");
	HX_MARK_MEMBER_NAME(GraphicsRenderer_obj::SIN45,"SIN45");
	HX_MARK_MEMBER_NAME(GraphicsRenderer_obj::TAN22,"TAN22");
	HX_MARK_MEMBER_NAME(GraphicsRenderer_obj::objectPosition,"objectPosition");
	HX_MARK_MEMBER_NAME(GraphicsRenderer_obj::objectBounds,"objectBounds");
	HX_MARK_MEMBER_NAME(GraphicsRenderer_obj::lastVertsBuffer,"lastVertsBuffer");
	HX_MARK_MEMBER_NAME(GraphicsRenderer_obj::lastBucketMode,"lastBucketMode");
	HX_MARK_MEMBER_NAME(GraphicsRenderer_obj::lastTexture,"lastTexture");
	HX_MARK_MEMBER_NAME(GraphicsRenderer_obj::lastTextureRepeat,"lastTextureRepeat");
	HX_MARK_MEMBER_NAME(GraphicsRenderer_obj::lastTextureSmooth,"lastTextureSmooth");
	HX_MARK_MEMBER_NAME(GraphicsRenderer_obj::overrideMatrix,"overrideMatrix");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GraphicsRenderer_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(GraphicsRenderer_obj::fillVertexAttributes,"fillVertexAttributes");
	HX_VISIT_MEMBER_NAME(GraphicsRenderer_obj::drawTrianglesVertexAttributes,"drawTrianglesVertexAttributes");
	HX_VISIT_MEMBER_NAME(GraphicsRenderer_obj::primitiveVertexAttributes,"primitiveVertexAttributes");
	HX_VISIT_MEMBER_NAME(GraphicsRenderer_obj::graphicsDataPool,"graphicsDataPool");
	HX_VISIT_MEMBER_NAME(GraphicsRenderer_obj::bucketPool,"bucketPool");
	HX_VISIT_MEMBER_NAME(GraphicsRenderer_obj::SIN45,"SIN45");
	HX_VISIT_MEMBER_NAME(GraphicsRenderer_obj::TAN22,"TAN22");
	HX_VISIT_MEMBER_NAME(GraphicsRenderer_obj::objectPosition,"objectPosition");
	HX_VISIT_MEMBER_NAME(GraphicsRenderer_obj::objectBounds,"objectBounds");
	HX_VISIT_MEMBER_NAME(GraphicsRenderer_obj::lastVertsBuffer,"lastVertsBuffer");
	HX_VISIT_MEMBER_NAME(GraphicsRenderer_obj::lastBucketMode,"lastBucketMode");
	HX_VISIT_MEMBER_NAME(GraphicsRenderer_obj::lastTexture,"lastTexture");
	HX_VISIT_MEMBER_NAME(GraphicsRenderer_obj::lastTextureRepeat,"lastTextureRepeat");
	HX_VISIT_MEMBER_NAME(GraphicsRenderer_obj::lastTextureSmooth,"lastTextureSmooth");
	HX_VISIT_MEMBER_NAME(GraphicsRenderer_obj::overrideMatrix,"overrideMatrix");
};

#endif

Class GraphicsRenderer_obj::__mClass;

void GraphicsRenderer_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl._internal.renderer.opengl.utils.GraphicsRenderer"), hx::TCanCast< GraphicsRenderer_obj> ,sStaticFields,sMemberFields,
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

void GraphicsRenderer_obj::__boot()
{
struct _Function_0_1{
	inline static Array< ::Dynamic > Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_internal/renderer/opengl/utils/GraphicsRenderer.hx",49,0xd295150c)
		{
			HX_STACK_LINE(50)
			::openfl::_internal::renderer::opengl::utils::VertexAttribute _g = ::openfl::_internal::renderer::opengl::utils::VertexAttribute_obj::__new((int)2,(int)5126,false,HX_CSTRING("aPosition"),null());		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(49)
			return Array_obj< ::Dynamic >::__new().Add(_g);
		}
		return null();
	}
};
	fillVertexAttributes= _Function_0_1::Block();
struct _Function_0_2{
	inline static Array< ::Dynamic > Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_internal/renderer/opengl/utils/GraphicsRenderer.hx",52,0xd295150c)
		{
			HX_STACK_LINE(53)
			::openfl::_internal::renderer::opengl::utils::VertexAttribute _g = ::openfl::_internal::renderer::opengl::utils::VertexAttribute_obj::__new((int)2,(int)5126,false,HX_CSTRING("aPosition"),null());		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(54)
			::openfl::_internal::renderer::opengl::utils::VertexAttribute _g1 = ::openfl::_internal::renderer::opengl::utils::VertexAttribute_obj::__new((int)2,(int)5126,false,HX_CSTRING("aTexCoord0"),null());		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(55)
			::openfl::_internal::renderer::opengl::utils::VertexAttribute _g2 = ::openfl::_internal::renderer::opengl::utils::VertexAttribute_obj::__new((int)4,(int)5121,true,HX_CSTRING("aColor"),null());		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(52)
			return Array_obj< ::Dynamic >::__new().Add(_g).Add(_g1).Add(_g2);
		}
		return null();
	}
};
	drawTrianglesVertexAttributes= _Function_0_2::Block();
struct _Function_0_3{
	inline static Array< ::Dynamic > Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_internal/renderer/opengl/utils/GraphicsRenderer.hx",57,0xd295150c)
		{
			HX_STACK_LINE(58)
			::openfl::_internal::renderer::opengl::utils::VertexAttribute _g = ::openfl::_internal::renderer::opengl::utils::VertexAttribute_obj::__new((int)2,(int)5126,false,HX_CSTRING("aPosition"),null());		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(59)
			::openfl::_internal::renderer::opengl::utils::VertexAttribute _g1 = ::openfl::_internal::renderer::opengl::utils::VertexAttribute_obj::__new((int)4,(int)5126,false,HX_CSTRING("aColor"),null());		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(57)
			return Array_obj< ::Dynamic >::__new().Add(_g).Add(_g1);
		}
		return null();
	}
};
	primitiveVertexAttributes= _Function_0_3::Block();
	graphicsDataPool= Array_obj< ::Dynamic >::__new();
	bucketPool= Array_obj< ::Dynamic >::__new();
	SIN45= 0.70710678118654752440084436210485;
	TAN22= 0.4142135623730950488016887242097;
	objectPosition= ::openfl::geom::Point_obj::__new(null(),null());
	objectBounds= ::openfl::geom::Rectangle_obj::__new(null(),null(),null(),null());
}

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace opengl
} // end namespace utils
