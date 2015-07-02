#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_lime_graphics_GLRenderContext
#include <lime/graphics/GLRenderContext.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_AbstractRenderer
#include <openfl/_internal/renderer/AbstractRenderer.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_GLRenderer
#include <openfl/_internal/renderer/opengl/GLRenderer.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_DrawPath
#include <openfl/_internal/renderer/opengl/utils/DrawPath.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_FillType
#include <openfl/_internal/renderer/opengl/utils/FillType.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_GLStack
#include <openfl/_internal/renderer/opengl/utils/GLStack.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_GraphicType
#include <openfl/_internal/renderer/opengl/utils/GraphicType.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_LineStyle
#include <openfl/_internal/renderer/opengl/utils/LineStyle.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_PathBuiler
#include <openfl/_internal/renderer/opengl/utils/PathBuiler.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_CapsStyle
#include <openfl/display/CapsStyle.h>
#endif
#ifndef INCLUDED_openfl_display_DrawCommand
#include <openfl/display/DrawCommand.h>
#endif
#ifndef INCLUDED_openfl_display_Graphics
#include <openfl/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl_display_GraphicsPathWinding
#include <openfl/display/GraphicsPathWinding.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_JointStyle
#include <openfl/display/JointStyle.h>
#endif
#ifndef INCLUDED_openfl_display_LineScaleMode
#include <openfl/display/LineScaleMode.h>
#endif
#ifndef INCLUDED_openfl_display_Tilesheet
#include <openfl/display/Tilesheet.h>
#endif
#ifndef INCLUDED_openfl_display_TriangleCulling
#include <openfl/display/TriangleCulling.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
namespace openfl{
namespace _internal{
namespace renderer{
namespace opengl{
namespace utils{

Void PathBuiler_obj::__construct()
{
	return null();
}

//PathBuiler_obj::~PathBuiler_obj() { }

Dynamic PathBuiler_obj::__CreateEmpty() { return  new PathBuiler_obj; }
hx::ObjectPtr< PathBuiler_obj > PathBuiler_obj::__new()
{  hx::ObjectPtr< PathBuiler_obj > result = new PathBuiler_obj();
	result->__construct();
	return result;}

Dynamic PathBuiler_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PathBuiler_obj > result = new PathBuiler_obj();
	result->__construct();
	return result;}

::openfl::_internal::renderer::opengl::utils::DrawPath PathBuiler_obj::__currentPath;

int PathBuiler_obj::__currentWinding;

Array< ::Dynamic > PathBuiler_obj::__drawPaths;

::openfl::_internal::renderer::opengl::utils::LineStyle PathBuiler_obj::__line;

::openfl::_internal::renderer::opengl::utils::FillType PathBuiler_obj::__fill;

int PathBuiler_obj::__fillIndex;

Void PathBuiler_obj::closePath( ){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.PathBuiler","closePath",0x65da1ed8,"openfl._internal.renderer.opengl.utils.PathBuiler.closePath","openfl/_internal/renderer/opengl/utils/DrawPath.hx",76,0xf0fd7951)
		HX_STACK_LINE(77)
		int l = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath->points->length;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(78)
		if (((l <= (int)0))){
			HX_STACK_LINE(78)
			return null();
		}
		HX_STACK_LINE(80)
		if (((bool((::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath->type == ::openfl::_internal::renderer::opengl::utils::GraphicType_obj::Polygon)) && bool((::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath->fill != ::openfl::_internal::renderer::opengl::utils::FillType_obj::None))))){
			HX_STACK_LINE(81)
			Float sx = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath->points->__get((int)0);		HX_STACK_VAR(sx,"sx");
			HX_STACK_LINE(82)
			Float sy = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath->points->__get((int)1);		HX_STACK_VAR(sy,"sy");
			HX_STACK_LINE(83)
			Float ex = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath->points->__get((l - (int)2));		HX_STACK_VAR(ex,"ex");
			HX_STACK_LINE(84)
			Float ey = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath->points->__get((l - (int)1));		HX_STACK_VAR(ey,"ey");
			HX_STACK_LINE(86)
			if ((!(((bool((sx == ex)) && bool((sy == ey))))))){
				HX_STACK_LINE(87)
				Array< Float > points = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath->points;		HX_STACK_VAR(points,"points");
				HX_STACK_LINE(87)
				bool push_point = true;		HX_STACK_VAR(push_point,"push_point");
				HX_STACK_LINE(87)
				if (((points->length > (int)1))){
					HX_STACK_LINE(87)
					Float lastX = points->__get((points->length - (int)2));		HX_STACK_VAR(lastX,"lastX");
					HX_STACK_LINE(87)
					Float lastY = points->__get((points->length - (int)1));		HX_STACK_VAR(lastY,"lastY");
					HX_STACK_LINE(87)
					if (((bool((lastX == sx)) && bool((lastY == sy))))){
						HX_STACK_LINE(87)
						push_point = false;
					}
				}
				HX_STACK_LINE(87)
				if (((push_point == true))){
					HX_STACK_LINE(87)
					::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath->points->push(sx);
					HX_STACK_LINE(87)
					::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath->points->push(sy);
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(PathBuiler_obj,closePath,(void))

Void PathBuiler_obj::endFill( ){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.PathBuiler","endFill",0xe6a5a499,"openfl._internal.renderer.opengl.utils.PathBuiler.endFill","openfl/_internal/renderer/opengl/utils/DrawPath.hx",92,0xf0fd7951)
		HX_STACK_LINE(94)
		::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fill = ::openfl::_internal::renderer::opengl::utils::FillType_obj::None;
		HX_STACK_LINE(95)
		(::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fillIndex)++;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(PathBuiler_obj,endFill,(void))

Void PathBuiler_obj::moveTo( Float x,Float y){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.PathBuiler","moveTo",0x360182b1,"openfl._internal.renderer.opengl.utils.PathBuiler.moveTo","openfl/_internal/renderer/opengl/utils/DrawPath.hx",99,0xf0fd7951)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(101)
		if (((bool(::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath->isRemovable) && bool((::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath->points->length == (int)0))))){
			HX_STACK_LINE(101)
			::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->pop().StaticCast< ::openfl::_internal::renderer::opengl::utils::DrawPath >();
		}
		else{
			HX_STACK_LINE(101)
			::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::closePath();
		}
		HX_STACK_LINE(102)
		::openfl::_internal::renderer::opengl::utils::DrawPath _g = ::openfl::_internal::renderer::opengl::utils::DrawPath_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(102)
		::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath = _g;
		HX_STACK_LINE(103)
		::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath->update(::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__line,::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fill,::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fillIndex,::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentWinding);
		HX_STACK_LINE(104)
		::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath->type = ::openfl::_internal::renderer::opengl::utils::GraphicType_obj::Polygon;
		HX_STACK_LINE(105)
		::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath->points->push(x);
		HX_STACK_LINE(106)
		::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath->points->push(y);
		HX_STACK_LINE(108)
		::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->push(::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(PathBuiler_obj,moveTo,(void))

Void PathBuiler_obj::lineTo( Float x,Float y){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.PathBuiler","lineTo",0x55f4f654,"openfl._internal.renderer.opengl.utils.PathBuiler.lineTo","openfl/_internal/renderer/opengl/utils/DrawPath.hx",112,0xf0fd7951)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(113)
		Array< Float > points = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath->points;		HX_STACK_VAR(points,"points");
		HX_STACK_LINE(114)
		bool push_point = true;		HX_STACK_VAR(push_point,"push_point");
		HX_STACK_LINE(117)
		if (((points->length > (int)1))){
			HX_STACK_LINE(118)
			Float lastX = points->__get((points->length - (int)2));		HX_STACK_VAR(lastX,"lastX");
			HX_STACK_LINE(119)
			Float lastY = points->__get((points->length - (int)1));		HX_STACK_VAR(lastY,"lastY");
			HX_STACK_LINE(120)
			if (((bool((lastX == x)) && bool((lastY == y))))){
				HX_STACK_LINE(121)
				push_point = false;
			}
		}
		HX_STACK_LINE(125)
		if (((push_point == true))){
			HX_STACK_LINE(126)
			::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath->points->push(x);
			HX_STACK_LINE(127)
			::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath->points->push(y);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(PathBuiler_obj,lineTo,(void))

Void PathBuiler_obj::curveTo( Float cx,Float cy,Float x,Float y){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.PathBuiler","curveTo",0x8f4d7ca5,"openfl._internal.renderer.opengl.utils.PathBuiler.curveTo","openfl/_internal/renderer/opengl/utils/DrawPath.hx",131,0xf0fd7951)
		HX_STACK_ARG(cx,"cx")
		HX_STACK_ARG(cy,"cy")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(132)
		if (((::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath->points->length == (int)0))){
			HX_STACK_LINE(134)
			if (((bool(::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath->isRemovable) && bool((::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath->points->length == (int)0))))){
				HX_STACK_LINE(134)
				::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->pop().StaticCast< ::openfl::_internal::renderer::opengl::utils::DrawPath >();
			}
			else{
				HX_STACK_LINE(134)
				::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::closePath();
			}
			HX_STACK_LINE(134)
			::openfl::_internal::renderer::opengl::utils::DrawPath _g = ::openfl::_internal::renderer::opengl::utils::DrawPath_obj::__new();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(134)
			::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath = _g;
			HX_STACK_LINE(134)
			::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath->update(::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__line,::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fill,::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fillIndex,::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentWinding);
			HX_STACK_LINE(134)
			::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath->type = ::openfl::_internal::renderer::opengl::utils::GraphicType_obj::Polygon;
			HX_STACK_LINE(134)
			::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath->points->push((int)0);
			HX_STACK_LINE(134)
			::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath->points->push((int)0);
			HX_STACK_LINE(134)
			::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->push(::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath);
		}
		HX_STACK_LINE(138)
		Float xa = (int)0;		HX_STACK_VAR(xa,"xa");
		HX_STACK_LINE(139)
		Float ya = (int)0;		HX_STACK_VAR(ya,"ya");
		HX_STACK_LINE(140)
		int n = (int)20;		HX_STACK_VAR(n,"n");
		HX_STACK_LINE(142)
		Array< Float > points = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath->points;		HX_STACK_VAR(points,"points");
		HX_STACK_LINE(143)
		Float fromX = points->__get((points->length - (int)2));		HX_STACK_VAR(fromX,"fromX");
		HX_STACK_LINE(144)
		Float fromY = points->__get((points->length - (int)1));		HX_STACK_VAR(fromY,"fromY");
		HX_STACK_LINE(146)
		Float px = (int)0;		HX_STACK_VAR(px,"px");
		HX_STACK_LINE(147)
		Float py = (int)0;		HX_STACK_VAR(py,"py");
		HX_STACK_LINE(149)
		Float tmp = (int)0;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(151)
		{
			HX_STACK_LINE(151)
			int _g1 = (int)1;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(151)
			int _g = (n + (int)1);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(151)
			while((true)){
				HX_STACK_LINE(151)
				if ((!(((_g1 < _g))))){
					HX_STACK_LINE(151)
					break;
				}
				HX_STACK_LINE(151)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(153)
				tmp = (Float(i) / Float(n));
				HX_STACK_LINE(155)
				xa = (fromX + (((cx - fromX)) * tmp));
				HX_STACK_LINE(156)
				ya = (fromY + (((cy - fromY)) * tmp));
				HX_STACK_LINE(158)
				px = (xa + ((((cx + (((x - cx)) * tmp)) - xa)) * tmp));
				HX_STACK_LINE(159)
				py = (ya + ((((cy + (((y - cy)) * tmp)) - ya)) * tmp));
				HX_STACK_LINE(161)
				points->push(px);
				HX_STACK_LINE(162)
				points->push(py);
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(PathBuiler_obj,curveTo,(void))

Void PathBuiler_obj::cubicCurveTo( Float cx,Float cy,Float cx2,Float cy2,Float x,Float y){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.PathBuiler","cubicCurveTo",0x7b165965,"openfl._internal.renderer.opengl.utils.PathBuiler.cubicCurveTo","openfl/_internal/renderer/opengl/utils/DrawPath.hx",167,0xf0fd7951)
		HX_STACK_ARG(cx,"cx")
		HX_STACK_ARG(cy,"cy")
		HX_STACK_ARG(cx2,"cx2")
		HX_STACK_ARG(cy2,"cy2")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(168)
		if (((::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath->points->length == (int)0))){
			HX_STACK_LINE(170)
			if (((bool(::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath->isRemovable) && bool((::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath->points->length == (int)0))))){
				HX_STACK_LINE(170)
				::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->pop().StaticCast< ::openfl::_internal::renderer::opengl::utils::DrawPath >();
			}
			else{
				HX_STACK_LINE(170)
				::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::closePath();
			}
			HX_STACK_LINE(170)
			::openfl::_internal::renderer::opengl::utils::DrawPath _g = ::openfl::_internal::renderer::opengl::utils::DrawPath_obj::__new();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(170)
			::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath = _g;
			HX_STACK_LINE(170)
			::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath->update(::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__line,::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fill,::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fillIndex,::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentWinding);
			HX_STACK_LINE(170)
			::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath->type = ::openfl::_internal::renderer::opengl::utils::GraphicType_obj::Polygon;
			HX_STACK_LINE(170)
			::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath->points->push((int)0);
			HX_STACK_LINE(170)
			::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath->points->push((int)0);
			HX_STACK_LINE(170)
			::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->push(::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath);
		}
		HX_STACK_LINE(174)
		int n = (int)20;		HX_STACK_VAR(n,"n");
		HX_STACK_LINE(175)
		Float dt = (int)0;		HX_STACK_VAR(dt,"dt");
		HX_STACK_LINE(176)
		Float dt2 = (int)0;		HX_STACK_VAR(dt2,"dt2");
		HX_STACK_LINE(177)
		Float dt3 = (int)0;		HX_STACK_VAR(dt3,"dt3");
		HX_STACK_LINE(178)
		Float t2 = (int)0;		HX_STACK_VAR(t2,"t2");
		HX_STACK_LINE(179)
		Float t3 = (int)0;		HX_STACK_VAR(t3,"t3");
		HX_STACK_LINE(181)
		Array< Float > points = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath->points;		HX_STACK_VAR(points,"points");
		HX_STACK_LINE(182)
		Float fromX = points->__get((points->length - (int)2));		HX_STACK_VAR(fromX,"fromX");
		HX_STACK_LINE(183)
		Float fromY = points->__get((points->length - (int)1));		HX_STACK_VAR(fromY,"fromY");
		HX_STACK_LINE(185)
		Float px = (int)0;		HX_STACK_VAR(px,"px");
		HX_STACK_LINE(186)
		Float py = (int)0;		HX_STACK_VAR(py,"py");
		HX_STACK_LINE(188)
		Float tmp = (int)0;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(190)
		{
			HX_STACK_LINE(190)
			int _g1 = (int)1;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(190)
			int _g = (n + (int)1);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(190)
			while((true)){
				HX_STACK_LINE(190)
				if ((!(((_g1 < _g))))){
					HX_STACK_LINE(190)
					break;
				}
				HX_STACK_LINE(190)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(192)
				tmp = (Float(i) / Float(n));
				HX_STACK_LINE(194)
				dt = ((int)1 - tmp);
				HX_STACK_LINE(195)
				dt2 = (dt * dt);
				HX_STACK_LINE(196)
				dt3 = (dt2 * dt);
				HX_STACK_LINE(198)
				t2 = (tmp * tmp);
				HX_STACK_LINE(199)
				t3 = (t2 * tmp);
				HX_STACK_LINE(201)
				px = ((((dt3 * fromX) + ((((int)3 * dt2) * tmp) * cx)) + ((((int)3 * dt) * t2) * cx2)) + (t3 * x));
				HX_STACK_LINE(202)
				py = ((((dt3 * fromY) + ((((int)3 * dt2) * tmp) * cy)) + ((((int)3 * dt) * t2) * cy2)) + (t3 * y));
				HX_STACK_LINE(204)
				points->push(px);
				HX_STACK_LINE(205)
				points->push(py);
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(PathBuiler_obj,cubicCurveTo,(void))

Void PathBuiler_obj::graphicDataPop( ){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.PathBuiler","graphicDataPop",0x871be484,"openfl._internal.renderer.opengl.utils.PathBuiler.graphicDataPop","openfl/_internal/renderer/opengl/utils/DrawPath.hx",212,0xf0fd7951)
		HX_STACK_LINE(212)
		if (((bool(::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath->isRemovable) && bool((::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath->points->length == (int)0))))){
			HX_STACK_LINE(213)
			::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->pop().StaticCast< ::openfl::_internal::renderer::opengl::utils::DrawPath >();
		}
		else{
			HX_STACK_LINE(215)
			::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::closePath();
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(PathBuiler_obj,graphicDataPop,(void))

::openfl::_internal::renderer::opengl::utils::GLStack PathBuiler_obj::build( ::openfl::display::Graphics graphics,::lime::graphics::GLRenderContext gl){
	HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.PathBuiler","build",0xe0200b09,"openfl._internal.renderer.opengl.utils.PathBuiler.build","openfl/_internal/renderer/opengl/utils/DrawPath.hx",220,0xf0fd7951)
	HX_STACK_ARG(graphics,"graphics")
	HX_STACK_ARG(gl,"gl")
	HX_STACK_LINE(222)
	::openfl::_internal::renderer::opengl::utils::GLStack glStack = null();		HX_STACK_VAR(glStack,"glStack");
	HX_STACK_LINE(223)
	::openfl::geom::Rectangle bounds = graphics->__bounds;		HX_STACK_VAR(bounds,"bounds");
	HX_STACK_LINE(225)
	Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(225)
	::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths = _g;
	HX_STACK_LINE(226)
	::openfl::_internal::renderer::opengl::utils::DrawPath _g1 = ::openfl::_internal::renderer::opengl::utils::DrawPath_obj::__new();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(226)
	::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath = _g1;
	HX_STACK_LINE(227)
	::openfl::_internal::renderer::opengl::utils::LineStyle _g2 = ::openfl::_internal::renderer::opengl::utils::LineStyle_obj::__new();		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(227)
	::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__line = _g2;
	HX_STACK_LINE(228)
	::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fill = ::openfl::_internal::renderer::opengl::utils::FillType_obj::None;
	HX_STACK_LINE(229)
	::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fillIndex = (int)0;
	HX_STACK_LINE(231)
	glStack = graphics->__glStack->__get(::openfl::_internal::renderer::opengl::GLRenderer_obj::glContextId).StaticCast< ::openfl::_internal::renderer::opengl::utils::GLStack >();
	HX_STACK_LINE(233)
	if (((glStack == null()))){
		HX_STACK_LINE(235)
		::openfl::_internal::renderer::opengl::utils::GLStack _g3 = graphics->__glStack[::openfl::_internal::renderer::opengl::GLRenderer_obj::glContextId] = ::openfl::_internal::renderer::opengl::utils::GLStack_obj::__new(gl);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(235)
		glStack = _g3;
	}
	HX_STACK_LINE(239)
	if (((bool((bool((bool((bool(!(graphics->__visible)) || bool((graphics->__commands->length == (int)0)))) || bool((bounds == null())))) || bool((bounds->width == (int)0)))) || bool((bounds->height == (int)0))))){
	}
	else{
		HX_STACK_LINE(245)
		{
			HX_STACK_LINE(245)
			int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(245)
			Array< ::Dynamic > _g11 = graphics->__commands;		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(245)
			while((true)){
				HX_STACK_LINE(245)
				if ((!(((_g3 < _g11->length))))){
					HX_STACK_LINE(245)
					break;
				}
				HX_STACK_LINE(245)
				::openfl::display::DrawCommand command = _g11->__get(_g3).StaticCast< ::openfl::display::DrawCommand >();		HX_STACK_VAR(command,"command");
				HX_STACK_LINE(245)
				++(_g3);
				HX_STACK_LINE(247)
				switch( (int)(command->__Index())){
					case (int)0: {
						HX_STACK_LINE(247)
						bool smooth = (::openfl::display::DrawCommand(command))->__Param(3);		HX_STACK_VAR(smooth,"smooth");
						HX_STACK_LINE(247)
						bool repeat = (::openfl::display::DrawCommand(command))->__Param(2);		HX_STACK_VAR(repeat,"repeat");
						HX_STACK_LINE(247)
						::openfl::geom::Matrix matrix = (::openfl::display::DrawCommand(command))->__Param(1);		HX_STACK_VAR(matrix,"matrix");
						HX_STACK_LINE(247)
						::openfl::display::BitmapData bitmap = (::openfl::display::DrawCommand(command))->__Param(0);		HX_STACK_VAR(bitmap,"bitmap");
						HX_STACK_LINE(249)
						{
							HX_STACK_LINE(251)
							::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::endFill();
							HX_STACK_LINE(252)
							::openfl::_internal::renderer::opengl::utils::FillType _g4;		HX_STACK_VAR(_g4,"_g4");
							HX_STACK_LINE(252)
							if (((bitmap != null()))){
								HX_STACK_LINE(252)
								_g4 = ::openfl::_internal::renderer::opengl::utils::FillType_obj::Texture(bitmap,matrix,repeat,smooth);
							}
							else{
								HX_STACK_LINE(252)
								_g4 = ::openfl::_internal::renderer::opengl::utils::FillType_obj::None;
							}
							HX_STACK_LINE(252)
							::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fill = _g4;
							HX_STACK_LINE(254)
							if (((::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath->points->length == (int)0))){
								HX_STACK_LINE(255)
								if (((bool(::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath->isRemovable) && bool((::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath->points->length == (int)0))))){
									HX_STACK_LINE(255)
									::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->pop().StaticCast< ::openfl::_internal::renderer::opengl::utils::DrawPath >();
								}
								else{
									HX_STACK_LINE(255)
									::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::closePath();
								}
								HX_STACK_LINE(256)
								::openfl::_internal::renderer::opengl::utils::DrawPath _g5 = ::openfl::_internal::renderer::opengl::utils::DrawPath_obj::__new();		HX_STACK_VAR(_g5,"_g5");
								HX_STACK_LINE(256)
								::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath = _g5;
								HX_STACK_LINE(257)
								::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath->update(::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__line,::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fill,::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fillIndex,::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentWinding);
								HX_STACK_LINE(258)
								::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath->points = Array_obj< Float >::__new();
								HX_STACK_LINE(259)
								::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath->type = ::openfl::_internal::renderer::opengl::utils::GraphicType_obj::Polygon;
								HX_STACK_LINE(260)
								::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->push(::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath);
							}
						}
					}
					;break;
					case (int)1: {
						HX_STACK_LINE(247)
						Float alpha = (::openfl::display::DrawCommand(command))->__Param(1);		HX_STACK_VAR(alpha,"alpha");
						HX_STACK_LINE(247)
						int rgb = (::openfl::display::DrawCommand(command))->__Param(0);		HX_STACK_VAR(rgb,"rgb");
						HX_STACK_LINE(263)
						{
							HX_STACK_LINE(265)
							::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::endFill();
							HX_STACK_LINE(266)
							::openfl::_internal::renderer::opengl::utils::FillType _g6;		HX_STACK_VAR(_g6,"_g6");
							HX_STACK_LINE(266)
							if (((alpha > (int)0))){
								HX_STACK_LINE(266)
								_g6 = ::openfl::_internal::renderer::opengl::utils::FillType_obj::Color((int(rgb) & int((int)16777215)),alpha);
							}
							else{
								HX_STACK_LINE(266)
								_g6 = ::openfl::_internal::renderer::opengl::utils::FillType_obj::None;
							}
							HX_STACK_LINE(266)
							::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fill = _g6;
							HX_STACK_LINE(268)
							if (((::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath->points->length == (int)0))){
								HX_STACK_LINE(269)
								if (((bool(::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath->isRemovable) && bool((::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath->points->length == (int)0))))){
									HX_STACK_LINE(269)
									::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->pop().StaticCast< ::openfl::_internal::renderer::opengl::utils::DrawPath >();
								}
								else{
									HX_STACK_LINE(269)
									::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::closePath();
								}
								HX_STACK_LINE(270)
								::openfl::_internal::renderer::opengl::utils::DrawPath _g7 = ::openfl::_internal::renderer::opengl::utils::DrawPath_obj::__new();		HX_STACK_VAR(_g7,"_g7");
								HX_STACK_LINE(270)
								::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath = _g7;
								HX_STACK_LINE(271)
								::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath->update(::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__line,::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fill,::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fillIndex,::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentWinding);
								HX_STACK_LINE(272)
								::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath->points = Array_obj< Float >::__new();
								HX_STACK_LINE(273)
								::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath->type = ::openfl::_internal::renderer::opengl::utils::GraphicType_obj::Polygon;
								HX_STACK_LINE(274)
								::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->push(::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath);
							}
						}
					}
					;break;
					case (int)3: {
						HX_STACK_LINE(247)
						Float y = (::openfl::display::DrawCommand(command))->__Param(5);		HX_STACK_VAR(y,"y");
						HX_STACK_LINE(247)
						Float x = (::openfl::display::DrawCommand(command))->__Param(4);		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(247)
						Float cy2 = (::openfl::display::DrawCommand(command))->__Param(3);		HX_STACK_VAR(cy2,"cy2");
						HX_STACK_LINE(247)
						Float cx2 = (::openfl::display::DrawCommand(command))->__Param(2);		HX_STACK_VAR(cx2,"cx2");
						HX_STACK_LINE(247)
						Float cy = (::openfl::display::DrawCommand(command))->__Param(1);		HX_STACK_VAR(cy,"cy");
						HX_STACK_LINE(247)
						Float cx = (::openfl::display::DrawCommand(command))->__Param(0);		HX_STACK_VAR(cx,"cx");
						HX_STACK_LINE(279)
						{
							HX_STACK_LINE(279)
							if (((::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath->points->length == (int)0))){
								HX_STACK_LINE(279)
								if (((bool(::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath->isRemovable) && bool((::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath->points->length == (int)0))))){
									HX_STACK_LINE(279)
									::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->pop().StaticCast< ::openfl::_internal::renderer::opengl::utils::DrawPath >();
								}
								else{
									HX_STACK_LINE(279)
									::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::closePath();
								}
								HX_STACK_LINE(279)
								::openfl::_internal::renderer::opengl::utils::DrawPath _g8 = ::openfl::_internal::renderer::opengl::utils::DrawPath_obj::__new();		HX_STACK_VAR(_g8,"_g8");
								HX_STACK_LINE(279)
								::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath = _g8;
								HX_STACK_LINE(279)
								::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath->update(::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__line,::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fill,::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fillIndex,::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentWinding);
								HX_STACK_LINE(279)
								::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath->type = ::openfl::_internal::renderer::opengl::utils::GraphicType_obj::Polygon;
								HX_STACK_LINE(279)
								::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath->points->push((int)0);
								HX_STACK_LINE(279)
								::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath->points->push((int)0);
								HX_STACK_LINE(279)
								::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->push(::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath);
							}
							HX_STACK_LINE(279)
							int n = (int)20;		HX_STACK_VAR(n,"n");
							HX_STACK_LINE(279)
							Float dt = (int)0;		HX_STACK_VAR(dt,"dt");
							HX_STACK_LINE(279)
							Float dt2 = (int)0;		HX_STACK_VAR(dt2,"dt2");
							HX_STACK_LINE(279)
							Float dt3 = (int)0;		HX_STACK_VAR(dt3,"dt3");
							HX_STACK_LINE(279)
							Float t2 = (int)0;		HX_STACK_VAR(t2,"t2");
							HX_STACK_LINE(279)
							Float t3 = (int)0;		HX_STACK_VAR(t3,"t3");
							HX_STACK_LINE(279)
							Array< Float > points = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath->points;		HX_STACK_VAR(points,"points");
							HX_STACK_LINE(279)
							Float fromX = points->__get((points->length - (int)2));		HX_STACK_VAR(fromX,"fromX");
							HX_STACK_LINE(279)
							Float fromY = points->__get((points->length - (int)1));		HX_STACK_VAR(fromY,"fromY");
							HX_STACK_LINE(279)
							Float px = (int)0;		HX_STACK_VAR(px,"px");
							HX_STACK_LINE(279)
							Float py = (int)0;		HX_STACK_VAR(py,"py");
							HX_STACK_LINE(279)
							Float tmp = (int)0;		HX_STACK_VAR(tmp,"tmp");
							HX_STACK_LINE(279)
							{
								HX_STACK_LINE(279)
								int _g12 = (int)1;		HX_STACK_VAR(_g12,"_g12");
								HX_STACK_LINE(279)
								int _g4 = (n + (int)1);		HX_STACK_VAR(_g4,"_g4");
								HX_STACK_LINE(279)
								while((true)){
									HX_STACK_LINE(279)
									if ((!(((_g12 < _g4))))){
										HX_STACK_LINE(279)
										break;
									}
									HX_STACK_LINE(279)
									int i = (_g12)++;		HX_STACK_VAR(i,"i");
									HX_STACK_LINE(279)
									tmp = (Float(i) / Float(n));
									HX_STACK_LINE(279)
									dt = ((int)1 - tmp);
									HX_STACK_LINE(279)
									dt2 = (dt * dt);
									HX_STACK_LINE(279)
									dt3 = (dt2 * dt);
									HX_STACK_LINE(279)
									t2 = (tmp * tmp);
									HX_STACK_LINE(279)
									t3 = (t2 * tmp);
									HX_STACK_LINE(279)
									px = ((((dt3 * fromX) + ((((int)3 * dt2) * tmp) * cx)) + ((((int)3 * dt) * t2) * cx2)) + (t3 * x));
									HX_STACK_LINE(279)
									py = ((((dt3 * fromY) + ((((int)3 * dt2) * tmp) * cy)) + ((((int)3 * dt) * t2) * cy2)) + (t3 * y));
									HX_STACK_LINE(279)
									points->push(px);
									HX_STACK_LINE(279)
									points->push(py);
								}
							}
						}
					}
					;break;
					case (int)4: {
						HX_STACK_LINE(247)
						Float y = (::openfl::display::DrawCommand(command))->__Param(3);		HX_STACK_VAR(y,"y");
						HX_STACK_LINE(247)
						Float x = (::openfl::display::DrawCommand(command))->__Param(2);		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(247)
						Float cy = (::openfl::display::DrawCommand(command))->__Param(1);		HX_STACK_VAR(cy,"cy");
						HX_STACK_LINE(247)
						Float cx = (::openfl::display::DrawCommand(command))->__Param(0);		HX_STACK_VAR(cx,"cx");
						HX_STACK_LINE(283)
						{
							HX_STACK_LINE(283)
							if (((::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath->points->length == (int)0))){
								HX_STACK_LINE(283)
								if (((bool(::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath->isRemovable) && bool((::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath->points->length == (int)0))))){
									HX_STACK_LINE(283)
									::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->pop().StaticCast< ::openfl::_internal::renderer::opengl::utils::DrawPath >();
								}
								else{
									HX_STACK_LINE(283)
									::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::closePath();
								}
								HX_STACK_LINE(283)
								::openfl::_internal::renderer::opengl::utils::DrawPath _g9 = ::openfl::_internal::renderer::opengl::utils::DrawPath_obj::__new();		HX_STACK_VAR(_g9,"_g9");
								HX_STACK_LINE(283)
								::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath = _g9;
								HX_STACK_LINE(283)
								::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath->update(::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__line,::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fill,::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fillIndex,::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentWinding);
								HX_STACK_LINE(283)
								::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath->type = ::openfl::_internal::renderer::opengl::utils::GraphicType_obj::Polygon;
								HX_STACK_LINE(283)
								::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath->points->push((int)0);
								HX_STACK_LINE(283)
								::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath->points->push((int)0);
								HX_STACK_LINE(283)
								::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->push(::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath);
							}
							HX_STACK_LINE(283)
							Float xa = (int)0;		HX_STACK_VAR(xa,"xa");
							HX_STACK_LINE(283)
							Float ya = (int)0;		HX_STACK_VAR(ya,"ya");
							HX_STACK_LINE(283)
							int n = (int)20;		HX_STACK_VAR(n,"n");
							HX_STACK_LINE(283)
							Array< Float > points = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath->points;		HX_STACK_VAR(points,"points");
							HX_STACK_LINE(283)
							Float fromX = points->__get((points->length - (int)2));		HX_STACK_VAR(fromX,"fromX");
							HX_STACK_LINE(283)
							Float fromY = points->__get((points->length - (int)1));		HX_STACK_VAR(fromY,"fromY");
							HX_STACK_LINE(283)
							Float px = (int)0;		HX_STACK_VAR(px,"px");
							HX_STACK_LINE(283)
							Float py = (int)0;		HX_STACK_VAR(py,"py");
							HX_STACK_LINE(283)
							Float tmp = (int)0;		HX_STACK_VAR(tmp,"tmp");
							HX_STACK_LINE(283)
							{
								HX_STACK_LINE(283)
								int _g12 = (int)1;		HX_STACK_VAR(_g12,"_g12");
								HX_STACK_LINE(283)
								int _g4 = (n + (int)1);		HX_STACK_VAR(_g4,"_g4");
								HX_STACK_LINE(283)
								while((true)){
									HX_STACK_LINE(283)
									if ((!(((_g12 < _g4))))){
										HX_STACK_LINE(283)
										break;
									}
									HX_STACK_LINE(283)
									int i = (_g12)++;		HX_STACK_VAR(i,"i");
									HX_STACK_LINE(283)
									tmp = (Float(i) / Float(n));
									HX_STACK_LINE(283)
									xa = (fromX + (((cx - fromX)) * tmp));
									HX_STACK_LINE(283)
									ya = (fromY + (((cy - fromY)) * tmp));
									HX_STACK_LINE(283)
									px = (xa + ((((cx + (((x - cx)) * tmp)) - xa)) * tmp));
									HX_STACK_LINE(283)
									py = (ya + ((((cy + (((y - cy)) * tmp)) - ya)) * tmp));
									HX_STACK_LINE(283)
									points->push(px);
									HX_STACK_LINE(283)
									points->push(py);
								}
							}
						}
					}
					;break;
					case (int)5: {
						HX_STACK_LINE(247)
						Float radius = (::openfl::display::DrawCommand(command))->__Param(2);		HX_STACK_VAR(radius,"radius");
						HX_STACK_LINE(247)
						Float y = (::openfl::display::DrawCommand(command))->__Param(1);		HX_STACK_VAR(y,"y");
						HX_STACK_LINE(247)
						Float x = (::openfl::display::DrawCommand(command))->__Param(0);		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(285)
						{
							HX_STACK_LINE(287)
							if (((bool(::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath->isRemovable) && bool((::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath->points->length == (int)0))))){
								HX_STACK_LINE(287)
								::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->pop().StaticCast< ::openfl::_internal::renderer::opengl::utils::DrawPath >();
							}
							else{
								HX_STACK_LINE(287)
								::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::closePath();
							}
							HX_STACK_LINE(289)
							::openfl::_internal::renderer::opengl::utils::DrawPath _g10 = ::openfl::_internal::renderer::opengl::utils::DrawPath_obj::__new();		HX_STACK_VAR(_g10,"_g10");
							HX_STACK_LINE(289)
							::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath = _g10;
							HX_STACK_LINE(290)
							::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath->update(::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__line,::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fill,::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fillIndex,::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentWinding);
							HX_STACK_LINE(291)
							::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath->type = ::openfl::_internal::renderer::opengl::utils::GraphicType_obj::Circle;
							HX_STACK_LINE(292)
							::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath->points = Array_obj< Float >::__new().Add(x).Add(y).Add(radius);
							HX_STACK_LINE(294)
							::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->push(::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath);
						}
					}
					;break;
					case (int)6: {
						HX_STACK_LINE(247)
						Float height = (::openfl::display::DrawCommand(command))->__Param(3);		HX_STACK_VAR(height,"height");
						HX_STACK_LINE(247)
						Float width = (::openfl::display::DrawCommand(command))->__Param(2);		HX_STACK_VAR(width,"width");
						HX_STACK_LINE(247)
						Float y = (::openfl::display::DrawCommand(command))->__Param(1);		HX_STACK_VAR(y,"y");
						HX_STACK_LINE(247)
						Float x = (::openfl::display::DrawCommand(command))->__Param(0);		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(296)
						{
							HX_STACK_LINE(298)
							if (((bool(::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath->isRemovable) && bool((::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath->points->length == (int)0))))){
								HX_STACK_LINE(298)
								::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->pop().StaticCast< ::openfl::_internal::renderer::opengl::utils::DrawPath >();
							}
							else{
								HX_STACK_LINE(298)
								::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::closePath();
							}
							HX_STACK_LINE(300)
							::openfl::_internal::renderer::opengl::utils::DrawPath _g111 = ::openfl::_internal::renderer::opengl::utils::DrawPath_obj::__new();		HX_STACK_VAR(_g111,"_g111");
							HX_STACK_LINE(300)
							::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath = _g111;
							HX_STACK_LINE(301)
							::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath->update(::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__line,::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fill,::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fillIndex,::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentWinding);
							HX_STACK_LINE(302)
							::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath->type = ::openfl::_internal::renderer::opengl::utils::GraphicType_obj::Ellipse;
							HX_STACK_LINE(303)
							::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath->points = Array_obj< Float >::__new().Add(x).Add(y).Add(width).Add(height);
							HX_STACK_LINE(305)
							::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->push(::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath);
						}
					}
					;break;
					case (int)7: {
						HX_STACK_LINE(247)
						Float height = (::openfl::display::DrawCommand(command))->__Param(3);		HX_STACK_VAR(height,"height");
						HX_STACK_LINE(247)
						Float width = (::openfl::display::DrawCommand(command))->__Param(2);		HX_STACK_VAR(width,"width");
						HX_STACK_LINE(247)
						Float y = (::openfl::display::DrawCommand(command))->__Param(1);		HX_STACK_VAR(y,"y");
						HX_STACK_LINE(247)
						Float x = (::openfl::display::DrawCommand(command))->__Param(0);		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(307)
						{
							HX_STACK_LINE(309)
							if (((bool(::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath->isRemovable) && bool((::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath->points->length == (int)0))))){
								HX_STACK_LINE(309)
								::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->pop().StaticCast< ::openfl::_internal::renderer::opengl::utils::DrawPath >();
							}
							else{
								HX_STACK_LINE(309)
								::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::closePath();
							}
							HX_STACK_LINE(311)
							::openfl::_internal::renderer::opengl::utils::DrawPath _g12 = ::openfl::_internal::renderer::opengl::utils::DrawPath_obj::__new();		HX_STACK_VAR(_g12,"_g12");
							HX_STACK_LINE(311)
							::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath = _g12;
							HX_STACK_LINE(312)
							::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath->update(::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__line,::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fill,::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fillIndex,::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentWinding);
							HX_STACK_LINE(313)
							::openfl::_internal::renderer::opengl::utils::GraphicType _g13 = ::openfl::_internal::renderer::opengl::utils::GraphicType_obj::Rectangle(false);		HX_STACK_VAR(_g13,"_g13");
							HX_STACK_LINE(313)
							::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath->type = _g13;
							HX_STACK_LINE(314)
							::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath->points = Array_obj< Float >::__new().Add(x).Add(y).Add(width).Add(height);
							HX_STACK_LINE(316)
							::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->push(::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath);
						}
					}
					;break;
					case (int)8: {
						HX_STACK_LINE(247)
						Float ry = (::openfl::display::DrawCommand(command))->__Param(5);		HX_STACK_VAR(ry,"ry");
						HX_STACK_LINE(247)
						Float rx = (::openfl::display::DrawCommand(command))->__Param(4);		HX_STACK_VAR(rx,"rx");
						HX_STACK_LINE(247)
						Float height = (::openfl::display::DrawCommand(command))->__Param(3);		HX_STACK_VAR(height,"height");
						HX_STACK_LINE(247)
						Float width = (::openfl::display::DrawCommand(command))->__Param(2);		HX_STACK_VAR(width,"width");
						HX_STACK_LINE(247)
						Float y = (::openfl::display::DrawCommand(command))->__Param(1);		HX_STACK_VAR(y,"y");
						HX_STACK_LINE(247)
						Float x = (::openfl::display::DrawCommand(command))->__Param(0);		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(318)
						{
							HX_STACK_LINE(320)
							if (((ry == (int)-1))){
								HX_STACK_LINE(320)
								ry = rx;
							}
							HX_STACK_LINE(322)
							hx::MultEq(rx,0.5);
							HX_STACK_LINE(323)
							hx::MultEq(ry,0.5);
							HX_STACK_LINE(325)
							if (((rx > (Float(width) / Float((int)2))))){
								HX_STACK_LINE(325)
								rx = (Float(width) / Float((int)2));
							}
							HX_STACK_LINE(326)
							if (((ry > (Float(height) / Float((int)2))))){
								HX_STACK_LINE(326)
								ry = (Float(height) / Float((int)2));
							}
							HX_STACK_LINE(328)
							if (((bool(::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath->isRemovable) && bool((::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath->points->length == (int)0))))){
								HX_STACK_LINE(328)
								::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->pop().StaticCast< ::openfl::_internal::renderer::opengl::utils::DrawPath >();
							}
							else{
								HX_STACK_LINE(328)
								::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::closePath();
							}
							HX_STACK_LINE(330)
							::openfl::_internal::renderer::opengl::utils::DrawPath _g14 = ::openfl::_internal::renderer::opengl::utils::DrawPath_obj::__new();		HX_STACK_VAR(_g14,"_g14");
							HX_STACK_LINE(330)
							::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath = _g14;
							HX_STACK_LINE(331)
							::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath->update(::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__line,::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fill,::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fillIndex,::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentWinding);
							HX_STACK_LINE(332)
							::openfl::_internal::renderer::opengl::utils::GraphicType _g15 = ::openfl::_internal::renderer::opengl::utils::GraphicType_obj::Rectangle(true);		HX_STACK_VAR(_g15,"_g15");
							HX_STACK_LINE(332)
							::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath->type = _g15;
							HX_STACK_LINE(333)
							::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath->points = Array_obj< Float >::__new().Add(x).Add(y).Add(width).Add(height).Add(rx).Add(ry);
							HX_STACK_LINE(335)
							::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->push(::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath);
						}
					}
					;break;
					case (int)11: {
						HX_STACK_LINE(339)
						::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::endFill();
					}
					;break;
					case (int)12: {
						HX_STACK_LINE(247)
						Dynamic miterLimit = (::openfl::display::DrawCommand(command))->__Param(7);		HX_STACK_VAR(miterLimit,"miterLimit");
						HX_STACK_LINE(247)
						::openfl::display::JointStyle joints = (::openfl::display::DrawCommand(command))->__Param(6);		HX_STACK_VAR(joints,"joints");
						HX_STACK_LINE(247)
						::openfl::display::CapsStyle caps = (::openfl::display::DrawCommand(command))->__Param(5);		HX_STACK_VAR(caps,"caps");
						HX_STACK_LINE(247)
						::openfl::display::LineScaleMode scaleMode = (::openfl::display::DrawCommand(command))->__Param(4);		HX_STACK_VAR(scaleMode,"scaleMode");
						HX_STACK_LINE(247)
						Dynamic pixelHinting = (::openfl::display::DrawCommand(command))->__Param(3);		HX_STACK_VAR(pixelHinting,"pixelHinting");
						HX_STACK_LINE(247)
						Dynamic alpha = (::openfl::display::DrawCommand(command))->__Param(2);		HX_STACK_VAR(alpha,"alpha");
						HX_STACK_LINE(247)
						Dynamic color = (::openfl::display::DrawCommand(command))->__Param(1);		HX_STACK_VAR(color,"color");
						HX_STACK_LINE(247)
						Dynamic thickness = (::openfl::display::DrawCommand(command))->__Param(0);		HX_STACK_VAR(thickness,"thickness");
						HX_STACK_LINE(341)
						{
							HX_STACK_LINE(343)
							::openfl::_internal::renderer::opengl::utils::LineStyle _g16 = ::openfl::_internal::renderer::opengl::utils::LineStyle_obj::__new();		HX_STACK_VAR(_g16,"_g16");
							HX_STACK_LINE(343)
							::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__line = _g16;
							HX_STACK_LINE(345)
							if (((  ((!(((  ((!(((thickness == null()))))) ? bool(::Math_obj::isNaN(thickness)) : bool(true) ))))) ? bool((thickness < (int)0)) : bool(true) ))){
								HX_STACK_LINE(347)
								::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__line->width = (int)0;
							}
							else{
								HX_STACK_LINE(349)
								if (((thickness == (int)0))){
									HX_STACK_LINE(351)
									::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__line->width = (int)1;
								}
								else{
									HX_STACK_LINE(355)
									::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__line->width = thickness;
								}
							}
							HX_STACK_LINE(359)
							if (((bool(::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath->isRemovable) && bool((::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath->points->length == (int)0))))){
								HX_STACK_LINE(359)
								::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->pop().StaticCast< ::openfl::_internal::renderer::opengl::utils::DrawPath >();
							}
							else{
								HX_STACK_LINE(359)
								::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::closePath();
							}
							HX_STACK_LINE(361)
							if (((color == null()))){
								HX_STACK_LINE(361)
								::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__line->color = (int)0;
							}
							else{
								HX_STACK_LINE(361)
								::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__line->color = color;
							}
							HX_STACK_LINE(362)
							if (((alpha == null()))){
								HX_STACK_LINE(362)
								::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__line->alpha = (int)1;
							}
							else{
								HX_STACK_LINE(362)
								::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__line->alpha = alpha;
							}
							HX_STACK_LINE(363)
							::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__line->scaleMode = scaleMode;
							HX_STACK_LINE(364)
							::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__line->caps = caps;
							HX_STACK_LINE(365)
							::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__line->joints = joints;
							HX_STACK_LINE(366)
							::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__line->miterLimit = miterLimit;
							HX_STACK_LINE(368)
							::openfl::_internal::renderer::opengl::utils::DrawPath _g17 = ::openfl::_internal::renderer::opengl::utils::DrawPath_obj::__new();		HX_STACK_VAR(_g17,"_g17");
							HX_STACK_LINE(368)
							::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath = _g17;
							HX_STACK_LINE(369)
							::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath->update(::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__line,::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fill,::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fillIndex,::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentWinding);
							HX_STACK_LINE(370)
							::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath->points = Array_obj< Float >::__new();
							HX_STACK_LINE(371)
							::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath->type = ::openfl::_internal::renderer::opengl::utils::GraphicType_obj::Polygon;
							HX_STACK_LINE(373)
							::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->push(::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath);
						}
					}
					;break;
					case (int)15: {
						HX_STACK_LINE(247)
						Float y = (::openfl::display::DrawCommand(command))->__Param(1);		HX_STACK_VAR(y,"y");
						HX_STACK_LINE(247)
						Float x = (::openfl::display::DrawCommand(command))->__Param(0);		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(377)
						{
							HX_STACK_LINE(377)
							Array< Float > points = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath->points;		HX_STACK_VAR(points,"points");
							HX_STACK_LINE(377)
							bool push_point = true;		HX_STACK_VAR(push_point,"push_point");
							HX_STACK_LINE(377)
							if (((points->length > (int)1))){
								HX_STACK_LINE(377)
								Float lastX = points->__get((points->length - (int)2));		HX_STACK_VAR(lastX,"lastX");
								HX_STACK_LINE(377)
								Float lastY = points->__get((points->length - (int)1));		HX_STACK_VAR(lastY,"lastY");
								HX_STACK_LINE(377)
								if (((bool((lastX == x)) && bool((lastY == y))))){
									HX_STACK_LINE(377)
									push_point = false;
								}
							}
							HX_STACK_LINE(377)
							if (((push_point == true))){
								HX_STACK_LINE(377)
								::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath->points->push(x);
								HX_STACK_LINE(377)
								::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath->points->push(y);
							}
						}
					}
					;break;
					case (int)16: {
						HX_STACK_LINE(247)
						Float y = (::openfl::display::DrawCommand(command))->__Param(1);		HX_STACK_VAR(y,"y");
						HX_STACK_LINE(247)
						Float x = (::openfl::display::DrawCommand(command))->__Param(0);		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(381)
						{
							HX_STACK_LINE(381)
							if (((bool(::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath->isRemovable) && bool((::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath->points->length == (int)0))))){
								HX_STACK_LINE(381)
								::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->pop().StaticCast< ::openfl::_internal::renderer::opengl::utils::DrawPath >();
							}
							else{
								HX_STACK_LINE(381)
								::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::closePath();
							}
							HX_STACK_LINE(381)
							::openfl::_internal::renderer::opengl::utils::DrawPath _g18 = ::openfl::_internal::renderer::opengl::utils::DrawPath_obj::__new();		HX_STACK_VAR(_g18,"_g18");
							HX_STACK_LINE(381)
							::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath = _g18;
							HX_STACK_LINE(381)
							::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath->update(::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__line,::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fill,::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fillIndex,::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentWinding);
							HX_STACK_LINE(381)
							::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath->type = ::openfl::_internal::renderer::opengl::utils::GraphicType_obj::Polygon;
							HX_STACK_LINE(381)
							::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath->points->push(x);
							HX_STACK_LINE(381)
							::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath->points->push(y);
							HX_STACK_LINE(381)
							::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->push(::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath);
						}
					}
					;break;
					case (int)10: {
						HX_STACK_LINE(247)
						int blendMode = (::openfl::display::DrawCommand(command))->__Param(5);		HX_STACK_VAR(blendMode,"blendMode");
						HX_STACK_LINE(247)
						Array< int > colors = (::openfl::display::DrawCommand(command))->__Param(4);		HX_STACK_VAR(colors,"colors");
						HX_STACK_LINE(247)
						::openfl::display::TriangleCulling culling = (::openfl::display::DrawCommand(command))->__Param(3);		HX_STACK_VAR(culling,"culling");
						HX_STACK_LINE(247)
						Array< Float > uvtData = (::openfl::display::DrawCommand(command))->__Param(2);		HX_STACK_VAR(uvtData,"uvtData");
						HX_STACK_LINE(247)
						Array< int > indices = (::openfl::display::DrawCommand(command))->__Param(1);		HX_STACK_VAR(indices,"indices");
						HX_STACK_LINE(247)
						Array< Float > vertices = (::openfl::display::DrawCommand(command))->__Param(0);		HX_STACK_VAR(vertices,"vertices");
						HX_STACK_LINE(383)
						{
							HX_STACK_LINE(385)
							bool isColor;		HX_STACK_VAR(isColor,"isColor");
							HX_STACK_LINE(385)
							{
								HX_STACK_LINE(385)
								::openfl::_internal::renderer::opengl::utils::FillType _g21 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fill;		HX_STACK_VAR(_g21,"_g21");
								HX_STACK_LINE(385)
								switch( (int)(_g21->__Index())){
									case (int)1: {
										HX_STACK_LINE(385)
										isColor = true;
									}
									;break;
									default: {
										HX_STACK_LINE(385)
										isColor = false;
									}
								}
							}
							HX_STACK_LINE(386)
							if (((bool(isColor) && bool((uvtData != null()))))){
								HX_STACK_LINE(388)
								continue;
							}
							HX_STACK_LINE(391)
							if (((bool(::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath->isRemovable) && bool((::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath->points->length == (int)0))))){
								HX_STACK_LINE(391)
								::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->pop().StaticCast< ::openfl::_internal::renderer::opengl::utils::DrawPath >();
							}
							else{
								HX_STACK_LINE(391)
								::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::closePath();
							}
							HX_STACK_LINE(393)
							::openfl::_internal::renderer::opengl::utils::DrawPath _g19 = ::openfl::_internal::renderer::opengl::utils::DrawPath_obj::__new();		HX_STACK_VAR(_g19,"_g19");
							HX_STACK_LINE(393)
							::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath = _g19;
							HX_STACK_LINE(394)
							::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath->update(::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__line,::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fill,::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fillIndex,::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentWinding);
							HX_STACK_LINE(395)
							if (((uvtData == null()))){
								HX_STACK_LINE(396)
								Array< Float > _g21;		HX_STACK_VAR(_g21,"_g21");
								struct _Function_7_1{
									inline static Array< Float > Block( ){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_internal/renderer/opengl/utils/DrawPath.hx",396,0xf0fd7951)
										{
											HX_STACK_LINE(396)
											Array< Float > this1;		HX_STACK_VAR(this1,"this1");
											HX_STACK_LINE(396)
											Array< Float > _g20 = Array_obj< Float >::__new()->__SetSizeExact(null());		HX_STACK_VAR(_g20,"_g20");
											HX_STACK_LINE(396)
											this1 = _g20;
											HX_STACK_LINE(396)
											return this1;
										}
										return null();
									}
								};
								HX_STACK_LINE(396)
								_g21 = _Function_7_1::Block();
								HX_STACK_LINE(396)
								uvtData = _g21;
								HX_STACK_LINE(397)
								{
									HX_STACK_LINE(397)
									::openfl::_internal::renderer::opengl::utils::FillType _g22 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fill;		HX_STACK_VAR(_g22,"_g22");
									HX_STACK_LINE(397)
									switch( (int)(_g22->__Index())){
										case (int)2: {
											HX_STACK_LINE(397)
											::openfl::display::BitmapData b = (::openfl::_internal::renderer::opengl::utils::FillType(_g22))->__Param(0);		HX_STACK_VAR(b,"b");
											HX_STACK_LINE(399)
											{
												HX_STACK_LINE(399)
												int _g4 = (int)0;		HX_STACK_VAR(_g4,"_g4");
												HX_STACK_LINE(399)
												int _g31 = ::Std_obj::_int((Float(vertices->length) / Float((int)2)));		HX_STACK_VAR(_g31,"_g31");
												HX_STACK_LINE(399)
												while((true)){
													HX_STACK_LINE(399)
													if ((!(((_g4 < _g31))))){
														HX_STACK_LINE(399)
														break;
													}
													HX_STACK_LINE(399)
													int i = (_g4)++;		HX_STACK_VAR(i,"i");
													HX_STACK_LINE(400)
													uvtData->push((Float(vertices->__get((i * (int)2))) / Float(b->width)));
													HX_STACK_LINE(401)
													uvtData->push((Float(vertices->__get(((i * (int)2) + (int)1))) / Float(b->height)));
												}
											}
										}
										;break;
										default: {
										}
									}
								}
							}
							HX_STACK_LINE(406)
							::openfl::_internal::renderer::opengl::utils::GraphicType _g22 = ::openfl::_internal::renderer::opengl::utils::GraphicType_obj::DrawTriangles(vertices,indices,uvtData,culling,colors,blendMode);		HX_STACK_VAR(_g22,"_g22");
							HX_STACK_LINE(406)
							::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath->type = _g22;
							HX_STACK_LINE(407)
							::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath->isRemovable = false;
							HX_STACK_LINE(408)
							::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->push(::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath);
						}
					}
					;break;
					case (int)9: {
						HX_STACK_LINE(247)
						int count = (::openfl::display::DrawCommand(command))->__Param(4);		HX_STACK_VAR(count,"count");
						HX_STACK_LINE(247)
						int flags = (::openfl::display::DrawCommand(command))->__Param(3);		HX_STACK_VAR(flags,"flags");
						HX_STACK_LINE(247)
						bool smooth = (::openfl::display::DrawCommand(command))->__Param(2);		HX_STACK_VAR(smooth,"smooth");
						HX_STACK_LINE(247)
						Array< Float > tileData = (::openfl::display::DrawCommand(command))->__Param(1);		HX_STACK_VAR(tileData,"tileData");
						HX_STACK_LINE(247)
						::openfl::display::Tilesheet sheet = (::openfl::display::DrawCommand(command))->__Param(0);		HX_STACK_VAR(sheet,"sheet");
						HX_STACK_LINE(410)
						{
							HX_STACK_LINE(411)
							if (((bool(::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath->isRemovable) && bool((::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath->points->length == (int)0))))){
								HX_STACK_LINE(411)
								::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->pop().StaticCast< ::openfl::_internal::renderer::opengl::utils::DrawPath >();
							}
							else{
								HX_STACK_LINE(411)
								::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::closePath();
							}
							HX_STACK_LINE(413)
							(::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fillIndex)++;
							HX_STACK_LINE(414)
							::openfl::_internal::renderer::opengl::utils::DrawPath _g23 = ::openfl::_internal::renderer::opengl::utils::DrawPath_obj::__new();		HX_STACK_VAR(_g23,"_g23");
							HX_STACK_LINE(414)
							::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath = _g23;
							HX_STACK_LINE(415)
							::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath->update(::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__line,::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fill,::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fillIndex,::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentWinding);
							HX_STACK_LINE(416)
							::openfl::_internal::renderer::opengl::utils::GraphicType _g24 = ::openfl::_internal::renderer::opengl::utils::GraphicType_obj::DrawTiles(sheet,tileData,smooth,flags,count);		HX_STACK_VAR(_g24,"_g24");
							HX_STACK_LINE(416)
							::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath->type = _g24;
							HX_STACK_LINE(417)
							::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath->isRemovable = false;
							HX_STACK_LINE(418)
							::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->push(::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath);
						}
					}
					;break;
					case (int)17: {
						HX_STACK_LINE(247)
						::openfl::display::GraphicsPathWinding winding = (::openfl::display::DrawCommand(command))->__Param(2);		HX_STACK_VAR(winding,"winding");
						HX_STACK_LINE(247)
						Array< Float > data = (::openfl::display::DrawCommand(command))->__Param(1);		HX_STACK_VAR(data,"data");
						HX_STACK_LINE(247)
						Array< int > commands = (::openfl::display::DrawCommand(command))->__Param(0);		HX_STACK_VAR(commands,"commands");
						HX_STACK_LINE(421)
						{
							HX_STACK_LINE(422)
							if (((bool(::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath->isRemovable) && bool((::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath->points->length == (int)0))))){
								HX_STACK_LINE(422)
								::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->pop().StaticCast< ::openfl::_internal::renderer::opengl::utils::DrawPath >();
							}
							else{
								HX_STACK_LINE(422)
								::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::closePath();
							}
							HX_STACK_LINE(424)
							::openfl::display::GraphicsPathWinding _switch_1 = (winding);
							if (  ( _switch_1==::openfl::display::GraphicsPathWinding_obj::EVEN_ODD)){
								HX_STACK_LINE(426)
								::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentWinding = (int)0;
							}
							else if (  ( _switch_1==::openfl::display::GraphicsPathWinding_obj::NON_ZERO)){
								HX_STACK_LINE(428)
								::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentWinding = (int)1;
							}
							else  {
								HX_STACK_LINE(430)
								::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentWinding = (int)0;
							}
;
;
							HX_STACK_LINE(433)
							int command1;		HX_STACK_VAR(command1,"command1");
							HX_STACK_LINE(434)
							Float cx;		HX_STACK_VAR(cx,"cx");
							HX_STACK_LINE(434)
							Float cy;		HX_STACK_VAR(cy,"cy");
							HX_STACK_LINE(435)
							Float cx2;		HX_STACK_VAR(cx2,"cx2");
							HX_STACK_LINE(435)
							Float cy2;		HX_STACK_VAR(cy2,"cy2");
							HX_STACK_LINE(436)
							Float ax;		HX_STACK_VAR(ax,"ax");
							HX_STACK_LINE(436)
							Float ay;		HX_STACK_VAR(ay,"ay");
							HX_STACK_LINE(437)
							int idx = (int)0;		HX_STACK_VAR(idx,"idx");
							HX_STACK_LINE(438)
							{
								HX_STACK_LINE(438)
								int _g31 = (int)0;		HX_STACK_VAR(_g31,"_g31");
								HX_STACK_LINE(438)
								int _g21 = commands->length;		HX_STACK_VAR(_g21,"_g21");
								HX_STACK_LINE(438)
								while((true)){
									HX_STACK_LINE(438)
									if ((!(((_g31 < _g21))))){
										HX_STACK_LINE(438)
										break;
									}
									HX_STACK_LINE(438)
									int i = (_g31)++;		HX_STACK_VAR(i,"i");
									HX_STACK_LINE(439)
									command1 = commands->__get(i);
									HX_STACK_LINE(440)
									switch( (int)(command1)){
										case (int)1: {
											HX_STACK_LINE(442)
											ax = data->__get(idx);
											HX_STACK_LINE(443)
											ay = data->__get((idx + (int)1));
											HX_STACK_LINE(444)
											hx::AddEq(idx,(int)2);
											HX_STACK_LINE(445)
											{
												HX_STACK_LINE(445)
												if (((bool(::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath->isRemovable) && bool((::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath->points->length == (int)0))))){
													HX_STACK_LINE(445)
													::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->pop().StaticCast< ::openfl::_internal::renderer::opengl::utils::DrawPath >();
												}
												else{
													HX_STACK_LINE(445)
													::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::closePath();
												}
												HX_STACK_LINE(445)
												::openfl::_internal::renderer::opengl::utils::DrawPath _g25 = ::openfl::_internal::renderer::opengl::utils::DrawPath_obj::__new();		HX_STACK_VAR(_g25,"_g25");
												HX_STACK_LINE(445)
												::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath = _g25;
												HX_STACK_LINE(445)
												::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath->update(::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__line,::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fill,::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fillIndex,::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentWinding);
												HX_STACK_LINE(445)
												::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath->type = ::openfl::_internal::renderer::opengl::utils::GraphicType_obj::Polygon;
												HX_STACK_LINE(445)
												::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath->points->push(ax);
												HX_STACK_LINE(445)
												::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath->points->push(ay);
												HX_STACK_LINE(445)
												::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->push(::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath);
											}
										}
										;break;
										case (int)4: {
											HX_STACK_LINE(447)
											ax = data->__get((idx + (int)2));
											HX_STACK_LINE(448)
											ay = data->__get((idx + (int)3));
											HX_STACK_LINE(449)
											hx::AddEq(idx,(int)4);
											HX_STACK_LINE(450)
											{
												HX_STACK_LINE(450)
												if (((bool(::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath->isRemovable) && bool((::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath->points->length == (int)0))))){
													HX_STACK_LINE(450)
													::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->pop().StaticCast< ::openfl::_internal::renderer::opengl::utils::DrawPath >();
												}
												else{
													HX_STACK_LINE(450)
													::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::closePath();
												}
												HX_STACK_LINE(450)
												::openfl::_internal::renderer::opengl::utils::DrawPath _g26 = ::openfl::_internal::renderer::opengl::utils::DrawPath_obj::__new();		HX_STACK_VAR(_g26,"_g26");
												HX_STACK_LINE(450)
												::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath = _g26;
												HX_STACK_LINE(450)
												::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath->update(::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__line,::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fill,::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fillIndex,::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentWinding);
												HX_STACK_LINE(450)
												::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath->type = ::openfl::_internal::renderer::opengl::utils::GraphicType_obj::Polygon;
												HX_STACK_LINE(450)
												::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath->points->push(ax);
												HX_STACK_LINE(450)
												::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath->points->push(ay);
												HX_STACK_LINE(450)
												::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->push(::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath);
											}
										}
										;break;
										case (int)2: {
											HX_STACK_LINE(452)
											ax = data->__get(idx);
											HX_STACK_LINE(453)
											ay = data->__get((idx + (int)1));
											HX_STACK_LINE(454)
											hx::AddEq(idx,(int)2);
											HX_STACK_LINE(455)
											{
												HX_STACK_LINE(455)
												Array< Float > points = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath->points;		HX_STACK_VAR(points,"points");
												HX_STACK_LINE(455)
												bool push_point = true;		HX_STACK_VAR(push_point,"push_point");
												HX_STACK_LINE(455)
												if (((points->length > (int)1))){
													HX_STACK_LINE(455)
													Float lastX = points->__get((points->length - (int)2));		HX_STACK_VAR(lastX,"lastX");
													HX_STACK_LINE(455)
													Float lastY = points->__get((points->length - (int)1));		HX_STACK_VAR(lastY,"lastY");
													HX_STACK_LINE(455)
													if (((bool((lastX == ax)) && bool((lastY == ay))))){
														HX_STACK_LINE(455)
														push_point = false;
													}
												}
												HX_STACK_LINE(455)
												if (((push_point == true))){
													HX_STACK_LINE(455)
													::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath->points->push(ax);
													HX_STACK_LINE(455)
													::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath->points->push(ay);
												}
											}
										}
										;break;
										case (int)5: {
											HX_STACK_LINE(457)
											ax = data->__get((idx + (int)2));
											HX_STACK_LINE(458)
											ay = data->__get((idx + (int)3));
											HX_STACK_LINE(459)
											hx::AddEq(idx,(int)4);
											HX_STACK_LINE(460)
											{
												HX_STACK_LINE(460)
												Array< Float > points = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath->points;		HX_STACK_VAR(points,"points");
												HX_STACK_LINE(460)
												bool push_point = true;		HX_STACK_VAR(push_point,"push_point");
												HX_STACK_LINE(460)
												if (((points->length > (int)1))){
													HX_STACK_LINE(460)
													Float lastX = points->__get((points->length - (int)2));		HX_STACK_VAR(lastX,"lastX");
													HX_STACK_LINE(460)
													Float lastY = points->__get((points->length - (int)1));		HX_STACK_VAR(lastY,"lastY");
													HX_STACK_LINE(460)
													if (((bool((lastX == ax)) && bool((lastY == ay))))){
														HX_STACK_LINE(460)
														push_point = false;
													}
												}
												HX_STACK_LINE(460)
												if (((push_point == true))){
													HX_STACK_LINE(460)
													::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath->points->push(ax);
													HX_STACK_LINE(460)
													::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath->points->push(ay);
												}
											}
										}
										;break;
										case (int)3: {
											HX_STACK_LINE(462)
											cx = data->__get(idx);
											HX_STACK_LINE(463)
											cy = data->__get((idx + (int)1));
											HX_STACK_LINE(464)
											ax = data->__get((idx + (int)2));
											HX_STACK_LINE(465)
											ay = data->__get((idx + (int)3));
											HX_STACK_LINE(466)
											hx::AddEq(idx,(int)4);
											HX_STACK_LINE(467)
											{
												HX_STACK_LINE(467)
												if (((::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath->points->length == (int)0))){
													HX_STACK_LINE(467)
													if (((bool(::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath->isRemovable) && bool((::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath->points->length == (int)0))))){
														HX_STACK_LINE(467)
														::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->pop().StaticCast< ::openfl::_internal::renderer::opengl::utils::DrawPath >();
													}
													else{
														HX_STACK_LINE(467)
														::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::closePath();
													}
													HX_STACK_LINE(467)
													::openfl::_internal::renderer::opengl::utils::DrawPath _g27 = ::openfl::_internal::renderer::opengl::utils::DrawPath_obj::__new();		HX_STACK_VAR(_g27,"_g27");
													HX_STACK_LINE(467)
													::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath = _g27;
													HX_STACK_LINE(467)
													::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath->update(::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__line,::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fill,::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fillIndex,::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentWinding);
													HX_STACK_LINE(467)
													::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath->type = ::openfl::_internal::renderer::opengl::utils::GraphicType_obj::Polygon;
													HX_STACK_LINE(467)
													::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath->points->push((int)0);
													HX_STACK_LINE(467)
													::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath->points->push((int)0);
													HX_STACK_LINE(467)
													::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->push(::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath);
												}
												HX_STACK_LINE(467)
												Float xa = (int)0;		HX_STACK_VAR(xa,"xa");
												HX_STACK_LINE(467)
												Float ya = (int)0;		HX_STACK_VAR(ya,"ya");
												HX_STACK_LINE(467)
												int n = (int)20;		HX_STACK_VAR(n,"n");
												HX_STACK_LINE(467)
												Array< Float > points = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath->points;		HX_STACK_VAR(points,"points");
												HX_STACK_LINE(467)
												Float fromX = points->__get((points->length - (int)2));		HX_STACK_VAR(fromX,"fromX");
												HX_STACK_LINE(467)
												Float fromY = points->__get((points->length - (int)1));		HX_STACK_VAR(fromY,"fromY");
												HX_STACK_LINE(467)
												Float px = (int)0;		HX_STACK_VAR(px,"px");
												HX_STACK_LINE(467)
												Float py = (int)0;		HX_STACK_VAR(py,"py");
												HX_STACK_LINE(467)
												Float tmp = (int)0;		HX_STACK_VAR(tmp,"tmp");
												HX_STACK_LINE(467)
												{
													HX_STACK_LINE(467)
													int _g12 = (int)1;		HX_STACK_VAR(_g12,"_g12");
													HX_STACK_LINE(467)
													int _g4 = (n + (int)1);		HX_STACK_VAR(_g4,"_g4");
													HX_STACK_LINE(467)
													while((true)){
														HX_STACK_LINE(467)
														if ((!(((_g12 < _g4))))){
															HX_STACK_LINE(467)
															break;
														}
														HX_STACK_LINE(467)
														int i1 = (_g12)++;		HX_STACK_VAR(i1,"i1");
														HX_STACK_LINE(467)
														tmp = (Float(i1) / Float(n));
														HX_STACK_LINE(467)
														xa = (fromX + (((cx - fromX)) * tmp));
														HX_STACK_LINE(467)
														ya = (fromY + (((cy - fromY)) * tmp));
														HX_STACK_LINE(467)
														px = (xa + ((((cx + (((ax - cx)) * tmp)) - xa)) * tmp));
														HX_STACK_LINE(467)
														py = (ya + ((((cy + (((ay - cy)) * tmp)) - ya)) * tmp));
														HX_STACK_LINE(467)
														points->push(px);
														HX_STACK_LINE(467)
														points->push(py);
													}
												}
											}
										}
										;break;
										case (int)6: {
											HX_STACK_LINE(469)
											cx = data->__get(idx);
											HX_STACK_LINE(470)
											cy = data->__get((idx + (int)1));
											HX_STACK_LINE(471)
											cx2 = data->__get((idx + (int)2));
											HX_STACK_LINE(472)
											cy2 = data->__get((idx + (int)3));
											HX_STACK_LINE(473)
											ax = data->__get((idx + (int)4));
											HX_STACK_LINE(474)
											ay = data->__get((idx + (int)5));
											HX_STACK_LINE(475)
											hx::AddEq(idx,(int)6);
											HX_STACK_LINE(476)
											{
												HX_STACK_LINE(476)
												if (((::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath->points->length == (int)0))){
													HX_STACK_LINE(476)
													if (((bool(::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath->isRemovable) && bool((::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath->points->length == (int)0))))){
														HX_STACK_LINE(476)
														::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->pop().StaticCast< ::openfl::_internal::renderer::opengl::utils::DrawPath >();
													}
													else{
														HX_STACK_LINE(476)
														::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::closePath();
													}
													HX_STACK_LINE(476)
													::openfl::_internal::renderer::opengl::utils::DrawPath _g28 = ::openfl::_internal::renderer::opengl::utils::DrawPath_obj::__new();		HX_STACK_VAR(_g28,"_g28");
													HX_STACK_LINE(476)
													::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath = _g28;
													HX_STACK_LINE(476)
													::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath->update(::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__line,::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fill,::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fillIndex,::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentWinding);
													HX_STACK_LINE(476)
													::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath->type = ::openfl::_internal::renderer::opengl::utils::GraphicType_obj::Polygon;
													HX_STACK_LINE(476)
													::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath->points->push((int)0);
													HX_STACK_LINE(476)
													::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath->points->push((int)0);
													HX_STACK_LINE(476)
													::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->push(::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath);
												}
												HX_STACK_LINE(476)
												int n = (int)20;		HX_STACK_VAR(n,"n");
												HX_STACK_LINE(476)
												Float dt = (int)0;		HX_STACK_VAR(dt,"dt");
												HX_STACK_LINE(476)
												Float dt2 = (int)0;		HX_STACK_VAR(dt2,"dt2");
												HX_STACK_LINE(476)
												Float dt3 = (int)0;		HX_STACK_VAR(dt3,"dt3");
												HX_STACK_LINE(476)
												Float t2 = (int)0;		HX_STACK_VAR(t2,"t2");
												HX_STACK_LINE(476)
												Float t3 = (int)0;		HX_STACK_VAR(t3,"t3");
												HX_STACK_LINE(476)
												Array< Float > points = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath->points;		HX_STACK_VAR(points,"points");
												HX_STACK_LINE(476)
												Float fromX = points->__get((points->length - (int)2));		HX_STACK_VAR(fromX,"fromX");
												HX_STACK_LINE(476)
												Float fromY = points->__get((points->length - (int)1));		HX_STACK_VAR(fromY,"fromY");
												HX_STACK_LINE(476)
												Float px = (int)0;		HX_STACK_VAR(px,"px");
												HX_STACK_LINE(476)
												Float py = (int)0;		HX_STACK_VAR(py,"py");
												HX_STACK_LINE(476)
												Float tmp = (int)0;		HX_STACK_VAR(tmp,"tmp");
												HX_STACK_LINE(476)
												{
													HX_STACK_LINE(476)
													int _g12 = (int)1;		HX_STACK_VAR(_g12,"_g12");
													HX_STACK_LINE(476)
													int _g4 = (n + (int)1);		HX_STACK_VAR(_g4,"_g4");
													HX_STACK_LINE(476)
													while((true)){
														HX_STACK_LINE(476)
														if ((!(((_g12 < _g4))))){
															HX_STACK_LINE(476)
															break;
														}
														HX_STACK_LINE(476)
														int i1 = (_g12)++;		HX_STACK_VAR(i1,"i1");
														HX_STACK_LINE(476)
														tmp = (Float(i1) / Float(n));
														HX_STACK_LINE(476)
														dt = ((int)1 - tmp);
														HX_STACK_LINE(476)
														dt2 = (dt * dt);
														HX_STACK_LINE(476)
														dt3 = (dt2 * dt);
														HX_STACK_LINE(476)
														t2 = (tmp * tmp);
														HX_STACK_LINE(476)
														t3 = (t2 * tmp);
														HX_STACK_LINE(476)
														px = ((((dt3 * fromX) + ((((int)3 * dt2) * tmp) * cx)) + ((((int)3 * dt) * t2) * cx2)) + (t3 * ax));
														HX_STACK_LINE(476)
														py = ((((dt3 * fromY) + ((((int)3 * dt2) * tmp) * cy)) + ((((int)3 * dt) * t2) * cy2)) + (t3 * ay));
														HX_STACK_LINE(476)
														points->push(px);
														HX_STACK_LINE(476)
														points->push(py);
													}
												}
											}
										}
										;break;
										default: {
										}
									}
								}
							}
							HX_STACK_LINE(482)
							::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentWinding = (int)0;
						}
					}
					;break;
					case (int)18: {
						HX_STACK_LINE(247)
						::openfl::geom::Matrix m = (::openfl::display::DrawCommand(command))->__Param(0);		HX_STACK_VAR(m,"m");
						HX_STACK_LINE(484)
						{
							HX_STACK_LINE(485)
							if (((bool(::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath->isRemovable) && bool((::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath->points->length == (int)0))))){
								HX_STACK_LINE(485)
								::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->pop().StaticCast< ::openfl::_internal::renderer::opengl::utils::DrawPath >();
							}
							else{
								HX_STACK_LINE(485)
								::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::closePath();
							}
							HX_STACK_LINE(487)
							::openfl::_internal::renderer::opengl::utils::DrawPath _g29 = ::openfl::_internal::renderer::opengl::utils::DrawPath_obj::__new();		HX_STACK_VAR(_g29,"_g29");
							HX_STACK_LINE(487)
							::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath = _g29;
							HX_STACK_LINE(488)
							::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath->update(::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__line,::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fill,::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fillIndex,::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentWinding);
							HX_STACK_LINE(489)
							::openfl::_internal::renderer::opengl::utils::GraphicType _g30 = ::openfl::_internal::renderer::opengl::utils::GraphicType_obj::OverrideMatrix(m);		HX_STACK_VAR(_g30,"_g30");
							HX_STACK_LINE(489)
							::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath->type = _g30;
							HX_STACK_LINE(490)
							::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath->isRemovable = false;
							HX_STACK_LINE(491)
							::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->push(::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath);
						}
					}
					;break;
					default: {
					}
				}
			}
		}
		HX_STACK_LINE(498)
		::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::closePath();
	}
	HX_STACK_LINE(502)
	graphics->__drawPaths = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths;
	HX_STACK_LINE(504)
	return glStack;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(PathBuiler_obj,build,return )


PathBuiler_obj::PathBuiler_obj()
{
}

Dynamic PathBuiler_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"build") ) { return build_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"__line") ) { return __line; }
		if (HX_FIELD_EQ(inName,"__fill") ) { return __fill; }
		if (HX_FIELD_EQ(inName,"moveTo") ) { return moveTo_dyn(); }
		if (HX_FIELD_EQ(inName,"lineTo") ) { return lineTo_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"endFill") ) { return endFill_dyn(); }
		if (HX_FIELD_EQ(inName,"curveTo") ) { return curveTo_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"closePath") ) { return closePath_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__drawPaths") ) { return __drawPaths; }
		if (HX_FIELD_EQ(inName,"__fillIndex") ) { return __fillIndex; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"cubicCurveTo") ) { return cubicCurveTo_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__currentPath") ) { return __currentPath; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"graphicDataPop") ) { return graphicDataPop_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__currentWinding") ) { return __currentWinding; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic PathBuiler_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"__line") ) { __line=inValue.Cast< ::openfl::_internal::renderer::opengl::utils::LineStyle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__fill") ) { __fill=inValue.Cast< ::openfl::_internal::renderer::opengl::utils::FillType >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__drawPaths") ) { __drawPaths=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__fillIndex") ) { __fillIndex=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__currentPath") ) { __currentPath=inValue.Cast< ::openfl::_internal::renderer::opengl::utils::DrawPath >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__currentWinding") ) { __currentWinding=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PathBuiler_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("__currentPath"),
	HX_CSTRING("__currentWinding"),
	HX_CSTRING("__drawPaths"),
	HX_CSTRING("__line"),
	HX_CSTRING("__fill"),
	HX_CSTRING("__fillIndex"),
	HX_CSTRING("closePath"),
	HX_CSTRING("endFill"),
	HX_CSTRING("moveTo"),
	HX_CSTRING("lineTo"),
	HX_CSTRING("curveTo"),
	HX_CSTRING("cubicCurveTo"),
	HX_CSTRING("graphicDataPop"),
	HX_CSTRING("build"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PathBuiler_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(PathBuiler_obj::__currentPath,"__currentPath");
	HX_MARK_MEMBER_NAME(PathBuiler_obj::__currentWinding,"__currentWinding");
	HX_MARK_MEMBER_NAME(PathBuiler_obj::__drawPaths,"__drawPaths");
	HX_MARK_MEMBER_NAME(PathBuiler_obj::__line,"__line");
	HX_MARK_MEMBER_NAME(PathBuiler_obj::__fill,"__fill");
	HX_MARK_MEMBER_NAME(PathBuiler_obj::__fillIndex,"__fillIndex");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PathBuiler_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(PathBuiler_obj::__currentPath,"__currentPath");
	HX_VISIT_MEMBER_NAME(PathBuiler_obj::__currentWinding,"__currentWinding");
	HX_VISIT_MEMBER_NAME(PathBuiler_obj::__drawPaths,"__drawPaths");
	HX_VISIT_MEMBER_NAME(PathBuiler_obj::__line,"__line");
	HX_VISIT_MEMBER_NAME(PathBuiler_obj::__fill,"__fill");
	HX_VISIT_MEMBER_NAME(PathBuiler_obj::__fillIndex,"__fillIndex");
};

#endif

Class PathBuiler_obj::__mClass;

void PathBuiler_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl._internal.renderer.opengl.utils.PathBuiler"), hx::TCanCast< PathBuiler_obj> ,sStaticFields,sMemberFields,
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

void PathBuiler_obj::__boot()
{
	__currentWinding= (int)0;
	__fillIndex= (int)0;
}

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace opengl
} // end namespace utils
