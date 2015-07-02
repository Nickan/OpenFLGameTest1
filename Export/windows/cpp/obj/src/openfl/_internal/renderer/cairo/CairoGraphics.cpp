#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_lime_graphics_Image
#include <lime/graphics/Image.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo_Cairo
#include <lime/graphics/cairo/Cairo.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo__CairoPattern_CairoPattern_Impl_
#include <lime/graphics/cairo/_CairoPattern/CairoPattern_Impl_.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo__CairoSurface_CairoSurface_Impl_
#include <lime/graphics/cairo/_CairoSurface/CairoSurface_Impl_.h>
#endif
#ifndef INCLUDED_lime_math_Matrix3
#include <lime/math/Matrix3.h>
#endif
#ifndef INCLUDED_lime_math_Vector2
#include <lime/math/Vector2.h>
#endif
#ifndef INCLUDED_openfl_Lib
#include <openfl/Lib.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_RenderSession
#include <openfl/_internal/renderer/RenderSession.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_cairo_CairoGraphics
#include <openfl/_internal/renderer/cairo/CairoGraphics.h>
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
#ifndef INCLUDED_openfl_display_GradientType
#include <openfl/display/GradientType.h>
#endif
#ifndef INCLUDED_openfl_display_Graphics
#include <openfl/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InterpolationMethod
#include <openfl/display/InterpolationMethod.h>
#endif
#ifndef INCLUDED_openfl_display_JointStyle
#include <openfl/display/JointStyle.h>
#endif
#ifndef INCLUDED_openfl_display_LineScaleMode
#include <openfl/display/LineScaleMode.h>
#endif
#ifndef INCLUDED_openfl_display_SpreadMethod
#include <openfl/display/SpreadMethod.h>
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
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
namespace openfl{
namespace _internal{
namespace renderer{
namespace cairo{

Void CairoGraphics_obj::__construct()
{
	return null();
}

//CairoGraphics_obj::~CairoGraphics_obj() { }

Dynamic CairoGraphics_obj::__CreateEmpty() { return  new CairoGraphics_obj; }
hx::ObjectPtr< CairoGraphics_obj > CairoGraphics_obj::__new()
{  hx::ObjectPtr< CairoGraphics_obj > result = new CairoGraphics_obj();
	result->__construct();
	return result;}

Dynamic CairoGraphics_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CairoGraphics_obj > result = new CairoGraphics_obj();
	result->__construct();
	return result;}

Float CairoGraphics_obj::SIN45;

Float CairoGraphics_obj::TAN22;

::openfl::geom::Rectangle CairoGraphics_obj::bounds;

::lime::graphics::cairo::Cairo CairoGraphics_obj::cairo;

Array< ::Dynamic > CairoGraphics_obj::fillCommands;

Dynamic CairoGraphics_obj::fillPattern;

::openfl::geom::Matrix CairoGraphics_obj::fillPatternMatrix;

::openfl::display::Graphics CairoGraphics_obj::graphics;

bool CairoGraphics_obj::hasFill;

bool CairoGraphics_obj::hasStroke;

::openfl::geom::Matrix CairoGraphics_obj::inversePendingMatrix;

::openfl::geom::Matrix CairoGraphics_obj::pendingMatrix;

Array< ::Dynamic > CairoGraphics_obj::strokeCommands;

Dynamic CairoGraphics_obj::strokePattern;

::openfl::display::BitmapData CairoGraphics_obj::bitmapFill;

bool CairoGraphics_obj::bitmapRepeat;

Void CairoGraphics_obj::endFill( ){
{
		HX_STACK_FRAME("openfl._internal.renderer.cairo.CairoGraphics","endFill",0x21233e02,"openfl._internal.renderer.cairo.CairoGraphics.endFill","openfl/_internal/renderer/cairo/CairoGraphics.hx",53,0x744ae94c)
		HX_STACK_LINE(55)
		::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo->newPath();
		HX_STACK_LINE(56)
		::openfl::_internal::renderer::cairo::CairoGraphics_obj::playCommands(::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillCommands,false);
		HX_STACK_LINE(57)
		::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillCommands = Array_obj< ::Dynamic >::__new();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(CairoGraphics_obj,endFill,(void))

Void CairoGraphics_obj::endStroke( ){
{
		HX_STACK_FRAME("openfl._internal.renderer.cairo.CairoGraphics","endStroke",0xaaf640f7,"openfl._internal.renderer.cairo.CairoGraphics.endStroke","openfl/_internal/renderer/cairo/CairoGraphics.hx",61,0x744ae94c)
		HX_STACK_LINE(63)
		::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo->newPath();
		HX_STACK_LINE(64)
		::openfl::_internal::renderer::cairo::CairoGraphics_obj::playCommands(::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokeCommands,true);
		HX_STACK_LINE(65)
		::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo->closePath();
		HX_STACK_LINE(66)
		::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokeCommands = Array_obj< ::Dynamic >::__new();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(CairoGraphics_obj,endStroke,(void))

Void CairoGraphics_obj::drawRoundRect( Float x,Float y,Float width,Float height,Float rx,Float ry){
{
		HX_STACK_FRAME("openfl._internal.renderer.cairo.CairoGraphics","drawRoundRect",0xa42fd4f2,"openfl._internal.renderer.cairo.CairoGraphics.drawRoundRect","openfl/_internal/renderer/cairo/CairoGraphics.hx",70,0x744ae94c)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_ARG(rx,"rx")
		HX_STACK_ARG(ry,"ry")
		HX_STACK_LINE(72)
		if (((ry == (int)-1))){
			HX_STACK_LINE(72)
			ry = rx;
		}
		HX_STACK_LINE(74)
		hx::MultEq(rx,0.5);
		HX_STACK_LINE(75)
		hx::MultEq(ry,0.5);
		HX_STACK_LINE(77)
		if (((rx > (Float(width) / Float((int)2))))){
			HX_STACK_LINE(77)
			rx = (Float(width) / Float((int)2));
		}
		HX_STACK_LINE(78)
		if (((ry > (Float(height) / Float((int)2))))){
			HX_STACK_LINE(78)
			ry = (Float(height) / Float((int)2));
		}
		HX_STACK_LINE(80)
		Float xe = (x + width);		HX_STACK_VAR(xe,"xe");
		HX_STACK_LINE(81)
		Float ye = (y + height);		HX_STACK_VAR(ye,"ye");
		HX_STACK_LINE(82)
		Float cx1 = (-(rx) + (rx * ::openfl::_internal::renderer::cairo::CairoGraphics_obj::SIN45));		HX_STACK_VAR(cx1,"cx1");
		HX_STACK_LINE(83)
		Float cx2 = (-(rx) + (rx * ::openfl::_internal::renderer::cairo::CairoGraphics_obj::TAN22));		HX_STACK_VAR(cx2,"cx2");
		HX_STACK_LINE(84)
		Float cy1 = (-(ry) + (ry * ::openfl::_internal::renderer::cairo::CairoGraphics_obj::SIN45));		HX_STACK_VAR(cy1,"cy1");
		HX_STACK_LINE(85)
		Float cy2 = (-(ry) + (ry * ::openfl::_internal::renderer::cairo::CairoGraphics_obj::TAN22));		HX_STACK_VAR(cy2,"cy2");
		HX_STACK_LINE(87)
		::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo->moveTo(xe,(ye - ry));
		HX_STACK_LINE(88)
		::openfl::_internal::renderer::cairo::CairoGraphics_obj::quadraticCurveTo(xe,(ye + cy2),(xe + cx1),(ye + cy1));
		HX_STACK_LINE(89)
		::openfl::_internal::renderer::cairo::CairoGraphics_obj::quadraticCurveTo((xe + cx2),ye,(xe - rx),ye);
		HX_STACK_LINE(90)
		::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo->lineTo((x + rx),ye);
		HX_STACK_LINE(91)
		::openfl::_internal::renderer::cairo::CairoGraphics_obj::quadraticCurveTo((x - cx2),ye,(x - cx1),(ye + cy1));
		HX_STACK_LINE(92)
		::openfl::_internal::renderer::cairo::CairoGraphics_obj::quadraticCurveTo(x,(ye + cy2),x,(ye - ry));
		HX_STACK_LINE(93)
		::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo->lineTo(x,(y + ry));
		HX_STACK_LINE(94)
		::openfl::_internal::renderer::cairo::CairoGraphics_obj::quadraticCurveTo(x,(y - cy2),(x - cx1),(y - cy1));
		HX_STACK_LINE(95)
		::openfl::_internal::renderer::cairo::CairoGraphics_obj::quadraticCurveTo((x - cx2),y,(x + rx),y);
		HX_STACK_LINE(96)
		::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo->lineTo((xe - rx),y);
		HX_STACK_LINE(97)
		::openfl::_internal::renderer::cairo::CairoGraphics_obj::quadraticCurveTo((xe + cx2),y,(xe + cx1),(y - cy1));
		HX_STACK_LINE(98)
		::openfl::_internal::renderer::cairo::CairoGraphics_obj::quadraticCurveTo(xe,(y - cy2),xe,(y + ry));
		HX_STACK_LINE(99)
		::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo->lineTo(xe,(ye - ry));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(CairoGraphics_obj,drawRoundRect,(void))

bool CairoGraphics_obj::isCCW( Float x1,Float y1,Float x2,Float y2,Float x3,Float y3){
	HX_STACK_FRAME("openfl._internal.renderer.cairo.CairoGraphics","isCCW",0x5353f111,"openfl._internal.renderer.cairo.CairoGraphics.isCCW","openfl/_internal/renderer/cairo/CairoGraphics.hx",106,0x744ae94c)
	HX_STACK_ARG(x1,"x1")
	HX_STACK_ARG(y1,"y1")
	HX_STACK_ARG(x2,"x2")
	HX_STACK_ARG(y2,"y2")
	HX_STACK_ARG(x3,"x3")
	HX_STACK_ARG(y3,"y3")
	HX_STACK_LINE(106)
	return (((((x2 - x1)) * ((y3 - y1))) - (((y2 - y1)) * ((x3 - x1)))) < (int)0);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(CairoGraphics_obj,isCCW,return )

Dynamic CairoGraphics_obj::normalizeUVT( Array< Float > uvt,hx::Null< bool >  __o_skipT){
bool skipT = __o_skipT.Default(false);
	HX_STACK_FRAME("openfl._internal.renderer.cairo.CairoGraphics","normalizeUVT",0xc9c604e2,"openfl._internal.renderer.cairo.CairoGraphics.normalizeUVT","openfl/_internal/renderer/cairo/CairoGraphics.hx",111,0x744ae94c)
	HX_STACK_ARG(uvt,"uvt")
	HX_STACK_ARG(skipT,"skipT")
{
		HX_STACK_LINE(113)
		Float max = ::Math_obj::NEGATIVE_INFINITY;		HX_STACK_VAR(max,"max");
		HX_STACK_LINE(114)
		Float tmp = ::Math_obj::NEGATIVE_INFINITY;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(115)
		int len = uvt->length;		HX_STACK_VAR(len,"len");
		HX_STACK_LINE(117)
		{
			HX_STACK_LINE(117)
			int _g1 = (int)1;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(117)
			int _g = (len + (int)1);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(117)
			while((true)){
				HX_STACK_LINE(117)
				if ((!(((_g1 < _g))))){
					HX_STACK_LINE(117)
					break;
				}
				HX_STACK_LINE(117)
				int t = (_g1)++;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(119)
				if (((bool(skipT) && bool((hx::Mod(t,(int)3) == (int)0))))){
					HX_STACK_LINE(121)
					continue;
				}
				HX_STACK_LINE(125)
				tmp = uvt->__get((t - (int)1));
				HX_STACK_LINE(127)
				if (((max < tmp))){
					HX_STACK_LINE(129)
					max = tmp;
				}
			}
		}
		HX_STACK_LINE(135)
		Array< Float > result;		HX_STACK_VAR(result,"result");
		struct _Function_1_1{
			inline static Array< Float > Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_internal/renderer/cairo/CairoGraphics.hx",135,0x744ae94c)
				{
					HX_STACK_LINE(135)
					Array< Float > this1;		HX_STACK_VAR(this1,"this1");
					HX_STACK_LINE(135)
					Array< Float > _g = Array_obj< Float >::__new()->__SetSizeExact(null());		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(135)
					this1 = _g;
					HX_STACK_LINE(135)
					return this1;
				}
				return null();
			}
		};
		HX_STACK_LINE(135)
		result = _Function_1_1::Block();
		HX_STACK_LINE(137)
		{
			HX_STACK_LINE(137)
			int _g1 = (int)1;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(137)
			int _g = (len + (int)1);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(137)
			while((true)){
				HX_STACK_LINE(137)
				if ((!(((_g1 < _g))))){
					HX_STACK_LINE(137)
					break;
				}
				HX_STACK_LINE(137)
				int t = (_g1)++;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(139)
				if (((bool(skipT) && bool((hx::Mod(t,(int)3) == (int)0))))){
					HX_STACK_LINE(141)
					continue;
				}
				HX_STACK_LINE(145)
				result->push((Float(uvt->__get((t - (int)1))) / Float(max)));
			}
		}
		struct _Function_1_2{
			inline static Dynamic Block( Array< Float > &result,Float &max){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_internal/renderer/cairo/CairoGraphics.hx",149,0x744ae94c)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("max") , max,false);
					__result->Add(HX_CSTRING("uvt") , result,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(149)
		return _Function_1_2::Block(result,max);
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CairoGraphics_obj,normalizeUVT,return )

Dynamic CairoGraphics_obj::createGradientPattern( ::openfl::display::GradientType type,Dynamic colors,Dynamic alphas,Dynamic ratios,::openfl::geom::Matrix matrix,::openfl::display::SpreadMethod spreadMethod,::openfl::display::InterpolationMethod interpolationMethod,Dynamic focalPointRatio){
	HX_STACK_FRAME("openfl._internal.renderer.cairo.CairoGraphics","createGradientPattern",0x9888a3a8,"openfl._internal.renderer.cairo.CairoGraphics.createGradientPattern","openfl/_internal/renderer/cairo/CairoGraphics.hx",153,0x744ae94c)
	HX_STACK_ARG(type,"type")
	HX_STACK_ARG(colors,"colors")
	HX_STACK_ARG(alphas,"alphas")
	HX_STACK_ARG(ratios,"ratios")
	HX_STACK_ARG(matrix,"matrix")
	HX_STACK_ARG(spreadMethod,"spreadMethod")
	HX_STACK_ARG(interpolationMethod,"interpolationMethod")
	HX_STACK_ARG(focalPointRatio,"focalPointRatio")
	HX_STACK_LINE(155)
	Dynamic pattern = null();		HX_STACK_VAR(pattern,"pattern");
	HX_STACK_LINE(157)
	switch( (int)(type->__Index())){
		case (int)0: {
			HX_STACK_LINE(161)
			if (((matrix == null()))){
				HX_STACK_LINE(161)
				::openfl::geom::Matrix _g = ::openfl::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(161)
				matrix = _g;
			}
			HX_STACK_LINE(163)
			::openfl::geom::Point _g1 = ::openfl::geom::Point_obj::__new(1638.4,(int)0);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(163)
			::openfl::geom::Point point = matrix->transformPoint(_g1);		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(165)
			Float x = (matrix->tx + ::openfl::_internal::renderer::cairo::CairoGraphics_obj::graphics->__bounds->x);		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(166)
			Float y = (matrix->ty + ::openfl::_internal::renderer::cairo::CairoGraphics_obj::graphics->__bounds->y);		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(168)
			Dynamic _g2 = ::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::createRadial(x,y,(int)0,x,y,(Float(((point->x - matrix->tx))) / Float((int)2)));		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(168)
			pattern = _g2;
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(172)
			if (((matrix == null()))){
				HX_STACK_LINE(172)
				::openfl::geom::Matrix _g3 = ::openfl::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(172)
				matrix = _g3;
			}
			HX_STACK_LINE(174)
			::openfl::geom::Point _g4 = ::openfl::geom::Point_obj::__new(-819.2,(int)0);		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(174)
			::openfl::geom::Point point1 = matrix->transformPoint(_g4);		HX_STACK_VAR(point1,"point1");
			HX_STACK_LINE(175)
			::openfl::geom::Point _g5 = ::openfl::geom::Point_obj::__new(819.2,(int)0);		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(175)
			::openfl::geom::Point point2 = matrix->transformPoint(_g5);		HX_STACK_VAR(point2,"point2");
			HX_STACK_LINE(177)
			hx::AddEq(point1->x,::openfl::_internal::renderer::cairo::CairoGraphics_obj::graphics->__bounds->x);
			HX_STACK_LINE(178)
			hx::AddEq(point2->x,::openfl::_internal::renderer::cairo::CairoGraphics_obj::graphics->__bounds->x);
			HX_STACK_LINE(179)
			hx::AddEq(point1->y,::openfl::_internal::renderer::cairo::CairoGraphics_obj::graphics->__bounds->y);
			HX_STACK_LINE(180)
			hx::AddEq(point2->y,::openfl::_internal::renderer::cairo::CairoGraphics_obj::graphics->__bounds->y);
			HX_STACK_LINE(182)
			Dynamic _g6 = ::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::createLinear(point1->x,point1->y,point2->x,point2->y);		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(182)
			pattern = _g6;
		}
		;break;
	}
	HX_STACK_LINE(186)
	{
		HX_STACK_LINE(186)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(186)
		int _g = colors->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(186)
		while((true)){
			HX_STACK_LINE(186)
			if ((!(((_g1 < _g))))){
				HX_STACK_LINE(186)
				break;
			}
			HX_STACK_LINE(186)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(188)
			int rgb = colors->__GetItem(i);		HX_STACK_VAR(rgb,"rgb");
			HX_STACK_LINE(189)
			Float alpha = alphas->__GetItem(i);		HX_STACK_VAR(alpha,"alpha");
			HX_STACK_LINE(190)
			Float r = (Float((hx::UShr(((int(rgb) & int((int)16711680))),(int)16))) / Float((int)255));		HX_STACK_VAR(r,"r");
			HX_STACK_LINE(191)
			Float g = (Float((hx::UShr(((int(rgb) & int((int)65280))),(int)8))) / Float((int)255));		HX_STACK_VAR(g,"g");
			HX_STACK_LINE(192)
			Float b = (Float(((int(rgb) & int((int)255)))) / Float((int)255));		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(194)
			Float ratio = (Float(ratios->__GetItem(i)) / Float((int)255));		HX_STACK_VAR(ratio,"ratio");
			HX_STACK_LINE(195)
			if (((ratio < (int)0))){
				HX_STACK_LINE(195)
				ratio = (int)0;
			}
			HX_STACK_LINE(196)
			if (((ratio > (int)1))){
				HX_STACK_LINE(196)
				ratio = (int)1;
			}
			HX_STACK_LINE(198)
			::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::addColorStopRGBA(pattern,ratio,r,g,b,alpha);
		}
	}
	HX_STACK_LINE(202)
	::lime::math::Matrix3 mat = ::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::get_matrix(pattern);		HX_STACK_VAR(mat,"mat");
	HX_STACK_LINE(204)
	mat->tx = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::bounds->x;
	HX_STACK_LINE(205)
	mat->ty = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::bounds->y;
	HX_STACK_LINE(207)
	::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::set_matrix(pattern,mat);
	HX_STACK_LINE(209)
	return pattern;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC8(CairoGraphics_obj,createGradientPattern,return )

Dynamic CairoGraphics_obj::createImagePattern( ::openfl::display::BitmapData bitmapFill,::openfl::geom::Matrix matrix,bool bitmapRepeat){
	HX_STACK_FRAME("openfl._internal.renderer.cairo.CairoGraphics","createImagePattern",0x42487dcd,"openfl._internal.renderer.cairo.CairoGraphics.createImagePattern","openfl/_internal/renderer/cairo/CairoGraphics.hx",214,0x744ae94c)
	HX_STACK_ARG(bitmapFill,"bitmapFill")
	HX_STACK_ARG(matrix,"matrix")
	HX_STACK_ARG(bitmapRepeat,"bitmapRepeat")
	HX_STACK_LINE(216)
	Dynamic _g = bitmapFill->getSurface(null());		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(216)
	Dynamic pattern = ::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::createForSurface(_g);		HX_STACK_VAR(pattern,"pattern");
	HX_STACK_LINE(218)
	if ((bitmapRepeat)){
		HX_STACK_LINE(220)
		::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::set_extend(pattern,(int)1);
	}
	HX_STACK_LINE(224)
	::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillPatternMatrix = matrix;
	HX_STACK_LINE(226)
	return pattern;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(CairoGraphics_obj,createImagePattern,return )

Void CairoGraphics_obj::closePath( ){
{
		HX_STACK_FRAME("openfl._internal.renderer.cairo.CairoGraphics","closePath",0x6dffa481,"openfl._internal.renderer.cairo.CairoGraphics.closePath","openfl/_internal/renderer/cairo/CairoGraphics.hx",229,0x744ae94c)
		HX_STACK_LINE(231)
		if (((::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokePattern == null()))){
			HX_STACK_LINE(232)
			return null();
		}
		HX_STACK_LINE(234)
		::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo->closePath();
		HX_STACK_LINE(235)
		::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo->set_source(::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokePattern);
		HX_STACK_LINE(236)
		::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo->strokePreserve();
		HX_STACK_LINE(237)
		::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo->newPath();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(CairoGraphics_obj,closePath,(void))

Void CairoGraphics_obj::playCommands( Array< ::Dynamic > commands,hx::Null< bool >  __o_stroke){
bool stroke = __o_stroke.Default(false);
	HX_STACK_FRAME("openfl._internal.renderer.cairo.CairoGraphics","playCommands",0xcc85aa58,"openfl._internal.renderer.cairo.CairoGraphics.playCommands","openfl/_internal/renderer/cairo/CairoGraphics.hx",240,0x744ae94c)
	HX_STACK_ARG(commands,"commands")
	HX_STACK_ARG(stroke,"stroke")
{
		HX_STACK_LINE(242)
		::openfl::_internal::renderer::cairo::CairoGraphics_obj::bounds = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::graphics->__bounds;
		HX_STACK_LINE(244)
		Float offsetX = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::bounds->x;		HX_STACK_VAR(offsetX,"offsetX");
		HX_STACK_LINE(245)
		Float offsetY = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::bounds->y;		HX_STACK_VAR(offsetY,"offsetY");
		HX_STACK_LINE(247)
		Float positionX = 0.0;		HX_STACK_VAR(positionX,"positionX");
		HX_STACK_LINE(248)
		Float positionY = 0.0;		HX_STACK_VAR(positionY,"positionY");
		HX_STACK_LINE(250)
		bool closeGap = false;		HX_STACK_VAR(closeGap,"closeGap");
		HX_STACK_LINE(251)
		Float startX = 0.0;		HX_STACK_VAR(startX,"startX");
		HX_STACK_LINE(252)
		Float startY = 0.0;		HX_STACK_VAR(startY,"startY");
		HX_STACK_LINE(254)
		::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo->set_fillRule((int)1);
		HX_STACK_LINE(255)
		::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo->set_antialias((int)3);
		HX_STACK_LINE(257)
		bool hasPath = false;		HX_STACK_VAR(hasPath,"hasPath");
		HX_STACK_LINE(259)
		{
			HX_STACK_LINE(259)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(259)
			while((true)){
				HX_STACK_LINE(259)
				if ((!(((_g < commands->length))))){
					HX_STACK_LINE(259)
					break;
				}
				HX_STACK_LINE(259)
				::openfl::display::DrawCommand command = commands->__get(_g).StaticCast< ::openfl::display::DrawCommand >();		HX_STACK_VAR(command,"command");
				HX_STACK_LINE(259)
				++(_g);
				HX_STACK_LINE(261)
				int _switch_1 = (command->__Index());
				if (  ( _switch_1==(int)3)){
					HX_STACK_LINE(261)
					Float y = (::openfl::display::DrawCommand(command))->__Param(5);		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(261)
					Float x = (::openfl::display::DrawCommand(command))->__Param(4);		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(261)
					Float cy2 = (::openfl::display::DrawCommand(command))->__Param(3);		HX_STACK_VAR(cy2,"cy2");
					HX_STACK_LINE(261)
					Float cx2 = (::openfl::display::DrawCommand(command))->__Param(2);		HX_STACK_VAR(cx2,"cx2");
					HX_STACK_LINE(261)
					Float cy1 = (::openfl::display::DrawCommand(command))->__Param(1);		HX_STACK_VAR(cy1,"cy1");
					HX_STACK_LINE(261)
					Float cx1 = (::openfl::display::DrawCommand(command))->__Param(0);		HX_STACK_VAR(cx1,"cx1");
					HX_STACK_LINE(263)
					{
						HX_STACK_LINE(265)
						hasPath = true;
						HX_STACK_LINE(266)
						::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo->curveTo((cx1 - offsetX),(cy1 - offsetY),(cx2 - offsetX),(cy2 - offsetY),(x - offsetX),(y - offsetY));
					}
				}
				else if (  ( _switch_1==(int)4)){
					HX_STACK_LINE(261)
					Float y = (::openfl::display::DrawCommand(command))->__Param(3);		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(261)
					Float x = (::openfl::display::DrawCommand(command))->__Param(2);		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(261)
					Float cy = (::openfl::display::DrawCommand(command))->__Param(1);		HX_STACK_VAR(cy,"cy");
					HX_STACK_LINE(261)
					Float cx = (::openfl::display::DrawCommand(command))->__Param(0);		HX_STACK_VAR(cx,"cx");
					HX_STACK_LINE(268)
					{
						HX_STACK_LINE(270)
						hasPath = true;
						HX_STACK_LINE(271)
						::openfl::_internal::renderer::cairo::CairoGraphics_obj::quadraticCurveTo((cx - offsetX),(cy - offsetY),(x - offsetX),(y - offsetY));
					}
				}
				else if (  ( _switch_1==(int)5)){
					HX_STACK_LINE(261)
					Float radius = (::openfl::display::DrawCommand(command))->__Param(2);		HX_STACK_VAR(radius,"radius");
					HX_STACK_LINE(261)
					Float y = (::openfl::display::DrawCommand(command))->__Param(1);		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(261)
					Float x = (::openfl::display::DrawCommand(command))->__Param(0);		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(273)
					{
						HX_STACK_LINE(275)
						hasPath = true;
						HX_STACK_LINE(276)
						::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo->moveTo(((x - offsetX) + radius),(y - offsetY));
						HX_STACK_LINE(277)
						::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo->arc((x - offsetX),(y - offsetY),radius,(int)0,(::Math_obj::PI * (int)2));
					}
				}
				else if (  ( _switch_1==(int)7)){
					HX_STACK_LINE(261)
					Float height = (::openfl::display::DrawCommand(command))->__Param(3);		HX_STACK_VAR(height,"height");
					HX_STACK_LINE(261)
					Float width = (::openfl::display::DrawCommand(command))->__Param(2);		HX_STACK_VAR(width,"width");
					HX_STACK_LINE(261)
					Float y = (::openfl::display::DrawCommand(command))->__Param(1);		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(261)
					Float x = (::openfl::display::DrawCommand(command))->__Param(0);		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(279)
					{
						HX_STACK_LINE(281)
						hasPath = true;
						HX_STACK_LINE(282)
						::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo->rectangle((x - offsetX),(y - offsetY),width,height);
					}
				}
				else if (  ( _switch_1==(int)6)){
					HX_STACK_LINE(261)
					Float height = (::openfl::display::DrawCommand(command))->__Param(3);		HX_STACK_VAR(height,"height");
					HX_STACK_LINE(261)
					Float width = (::openfl::display::DrawCommand(command))->__Param(2);		HX_STACK_VAR(width,"width");
					HX_STACK_LINE(261)
					Float y = (::openfl::display::DrawCommand(command))->__Param(1);		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(261)
					Float x = (::openfl::display::DrawCommand(command))->__Param(0);		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(284)
					{
						HX_STACK_LINE(286)
						hasPath = true;
						HX_STACK_LINE(288)
						hx::SubEq(x,offsetX);
						HX_STACK_LINE(289)
						hx::SubEq(y,offsetY);
						HX_STACK_LINE(291)
						Float kappa = .5522848;		HX_STACK_VAR(kappa,"kappa");
						HX_STACK_LINE(292)
						Float ox = ((Float(width) / Float((int)2)) * kappa);		HX_STACK_VAR(ox,"ox");
						HX_STACK_LINE(293)
						Float oy = ((Float(height) / Float((int)2)) * kappa);		HX_STACK_VAR(oy,"oy");
						HX_STACK_LINE(294)
						Float xe = (x + width);		HX_STACK_VAR(xe,"xe");
						HX_STACK_LINE(295)
						Float ye = (y + height);		HX_STACK_VAR(ye,"ye");
						HX_STACK_LINE(296)
						Float xm = (x + (Float(width) / Float((int)2)));		HX_STACK_VAR(xm,"xm");
						HX_STACK_LINE(297)
						Float ym = (y + (Float(height) / Float((int)2)));		HX_STACK_VAR(ym,"ym");
						HX_STACK_LINE(299)
						::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo->moveTo(x,ym);
						HX_STACK_LINE(300)
						::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo->curveTo(x,(ym - oy),(xm - ox),y,xm,y);
						HX_STACK_LINE(301)
						::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo->curveTo((xm + ox),y,xe,(ym - oy),xe,ym);
						HX_STACK_LINE(302)
						::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo->curveTo(xe,(ym + oy),(xm + ox),ye,xm,ye);
						HX_STACK_LINE(303)
						::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo->curveTo((xm - ox),ye,x,(ym + oy),x,ym);
					}
				}
				else if (  ( _switch_1==(int)8)){
					HX_STACK_LINE(261)
					Float ry = (::openfl::display::DrawCommand(command))->__Param(5);		HX_STACK_VAR(ry,"ry");
					HX_STACK_LINE(261)
					Float rx = (::openfl::display::DrawCommand(command))->__Param(4);		HX_STACK_VAR(rx,"rx");
					HX_STACK_LINE(261)
					Float height = (::openfl::display::DrawCommand(command))->__Param(3);		HX_STACK_VAR(height,"height");
					HX_STACK_LINE(261)
					Float width = (::openfl::display::DrawCommand(command))->__Param(2);		HX_STACK_VAR(width,"width");
					HX_STACK_LINE(261)
					Float y = (::openfl::display::DrawCommand(command))->__Param(1);		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(261)
					Float x = (::openfl::display::DrawCommand(command))->__Param(0);		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(305)
					{
						HX_STACK_LINE(307)
						hasPath = true;
						HX_STACK_LINE(308)
						::openfl::_internal::renderer::cairo::CairoGraphics_obj::drawRoundRect((x - offsetX),(y - offsetY),width,height,rx,ry);
					}
				}
				else if (  ( _switch_1==(int)15)){
					HX_STACK_LINE(261)
					Float y = (::openfl::display::DrawCommand(command))->__Param(1);		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(261)
					Float x = (::openfl::display::DrawCommand(command))->__Param(0);		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(310)
					{
						HX_STACK_LINE(312)
						hasPath = true;
						HX_STACK_LINE(313)
						::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo->lineTo((x - offsetX),(y - offsetY));
						HX_STACK_LINE(315)
						positionX = x;
						HX_STACK_LINE(316)
						positionY = y;
					}
				}
				else if (  ( _switch_1==(int)16)){
					HX_STACK_LINE(261)
					Float y = (::openfl::display::DrawCommand(command))->__Param(1);		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(261)
					Float x = (::openfl::display::DrawCommand(command))->__Param(0);		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(318)
					{
						HX_STACK_LINE(320)
						::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo->moveTo((x - offsetX),(y - offsetY));
						HX_STACK_LINE(322)
						positionX = x;
						HX_STACK_LINE(323)
						positionY = y;
						HX_STACK_LINE(325)
						closeGap = true;
						HX_STACK_LINE(326)
						startX = x;
						HX_STACK_LINE(327)
						startY = y;
					}
				}
				else if (  ( _switch_1==(int)12)){
					HX_STACK_LINE(261)
					Dynamic miterLimit = (::openfl::display::DrawCommand(command))->__Param(7);		HX_STACK_VAR(miterLimit,"miterLimit");
					HX_STACK_LINE(261)
					::openfl::display::JointStyle joints = (::openfl::display::DrawCommand(command))->__Param(6);		HX_STACK_VAR(joints,"joints");
					HX_STACK_LINE(261)
					::openfl::display::CapsStyle caps = (::openfl::display::DrawCommand(command))->__Param(5);		HX_STACK_VAR(caps,"caps");
					HX_STACK_LINE(261)
					::openfl::display::LineScaleMode scaleMode = (::openfl::display::DrawCommand(command))->__Param(4);		HX_STACK_VAR(scaleMode,"scaleMode");
					HX_STACK_LINE(261)
					Dynamic pixelHinting = (::openfl::display::DrawCommand(command))->__Param(3);		HX_STACK_VAR(pixelHinting,"pixelHinting");
					HX_STACK_LINE(261)
					Dynamic alpha = (::openfl::display::DrawCommand(command))->__Param(2);		HX_STACK_VAR(alpha,"alpha");
					HX_STACK_LINE(261)
					Dynamic color = (::openfl::display::DrawCommand(command))->__Param(1);		HX_STACK_VAR(color,"color");
					HX_STACK_LINE(261)
					Dynamic thickness = (::openfl::display::DrawCommand(command))->__Param(0);		HX_STACK_VAR(thickness,"thickness");
					HX_STACK_LINE(329)
					{
						HX_STACK_LINE(331)
						if (((bool(stroke) && bool(::openfl::_internal::renderer::cairo::CairoGraphics_obj::hasStroke)))){
							HX_STACK_LINE(332)
							::openfl::_internal::renderer::cairo::CairoGraphics_obj::closePath();
						}
						HX_STACK_LINE(334)
						::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo->moveTo((positionX - offsetX),(positionY - offsetY));
						HX_STACK_LINE(336)
						if (((thickness == null()))){
							HX_STACK_LINE(338)
							::openfl::_internal::renderer::cairo::CairoGraphics_obj::hasStroke = false;
						}
						else{
							HX_STACK_LINE(342)
							::openfl::_internal::renderer::cairo::CairoGraphics_obj::hasStroke = true;
							HX_STACK_LINE(344)
							::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo->set_lineWidth(thickness);
							HX_STACK_LINE(346)
							if (((joints == null()))){
								HX_STACK_LINE(348)
								::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo->set_lineJoin((int)1);
							}
							else{
								HX_STACK_LINE(352)
								int _g1;		HX_STACK_VAR(_g1,"_g1");
								HX_STACK_LINE(352)
								switch( (int)(joints->__Index())){
									case (int)0: {
										HX_STACK_LINE(354)
										_g1 = (int)0;
									}
									;break;
									case (int)2: {
										HX_STACK_LINE(355)
										_g1 = (int)2;
									}
									;break;
									default: {
										HX_STACK_LINE(356)
										_g1 = (int)1;
									}
								}
								HX_STACK_LINE(352)
								::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo->set_lineJoin(_g1);
							}
							HX_STACK_LINE(362)
							if (((caps == null()))){
								HX_STACK_LINE(364)
								::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo->set_lineCap((int)1);
							}
							else{
								HX_STACK_LINE(368)
								int _g1;		HX_STACK_VAR(_g1,"_g1");
								HX_STACK_LINE(368)
								switch( (int)(caps->__Index())){
									case (int)0: {
										HX_STACK_LINE(370)
										_g1 = (int)0;
									}
									;break;
									case (int)2: {
										HX_STACK_LINE(371)
										_g1 = (int)2;
									}
									;break;
									default: {
										HX_STACK_LINE(372)
										_g1 = (int)1;
									}
								}
								HX_STACK_LINE(368)
								::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo->set_lineCap(_g1);
							}
							HX_STACK_LINE(378)
							::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo->set_miterLimit((  (((miterLimit == null()))) ? Float((int)3) : Float(miterLimit) ));
							HX_STACK_LINE(380)
							if (((color != null()))){
								HX_STACK_LINE(382)
								Float r = (Float((hx::UShr(((int(color) & int((int)16711680))),(int)16))) / Float((int)255));		HX_STACK_VAR(r,"r");
								HX_STACK_LINE(383)
								Float g = (Float((hx::UShr(((int(color) & int((int)65280))),(int)8))) / Float((int)255));		HX_STACK_VAR(g,"g");
								HX_STACK_LINE(384)
								Float b = (Float(((int(color) & int((int)255)))) / Float((int)255));		HX_STACK_VAR(b,"b");
								HX_STACK_LINE(387)
								if (((::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokePattern != null()))){
									HX_STACK_LINE(388)
									::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::destroy(::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokePattern);
								}
								HX_STACK_LINE(391)
								if (((bool((alpha == (int)1)) || bool((alpha == null()))))){
									HX_STACK_LINE(393)
									Dynamic _g2 = ::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::createRGB(r,g,b);		HX_STACK_VAR(_g2,"_g2");
									HX_STACK_LINE(393)
									::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokePattern = _g2;
								}
								else{
									HX_STACK_LINE(397)
									Dynamic _g3 = ::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::createRGBA(r,g,b,alpha);		HX_STACK_VAR(_g3,"_g3");
									HX_STACK_LINE(397)
									::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokePattern = _g3;
								}
							}
						}
					}
				}
				else if (  ( _switch_1==(int)14)){
					HX_STACK_LINE(261)
					Dynamic focalPointRatio = (::openfl::display::DrawCommand(command))->__Param(7);		HX_STACK_VAR(focalPointRatio,"focalPointRatio");
					HX_STACK_LINE(261)
					::openfl::display::InterpolationMethod interpolationMethod = (::openfl::display::DrawCommand(command))->__Param(6);		HX_STACK_VAR(interpolationMethod,"interpolationMethod");
					HX_STACK_LINE(261)
					::openfl::display::SpreadMethod spreadMethod = (::openfl::display::DrawCommand(command))->__Param(5);		HX_STACK_VAR(spreadMethod,"spreadMethod");
					HX_STACK_LINE(261)
					::openfl::geom::Matrix matrix = (::openfl::display::DrawCommand(command))->__Param(4);		HX_STACK_VAR(matrix,"matrix");
					HX_STACK_LINE(261)
					Dynamic ratios = (::openfl::display::DrawCommand(command))->__Param(3);		HX_STACK_VAR(ratios,"ratios");
					HX_STACK_LINE(261)
					Dynamic alphas = (::openfl::display::DrawCommand(command))->__Param(2);		HX_STACK_VAR(alphas,"alphas");
					HX_STACK_LINE(261)
					Dynamic colors = (::openfl::display::DrawCommand(command))->__Param(1);		HX_STACK_VAR(colors,"colors");
					HX_STACK_LINE(261)
					::openfl::display::GradientType type = (::openfl::display::DrawCommand(command))->__Param(0);		HX_STACK_VAR(type,"type");
					HX_STACK_LINE(402)
					{
						HX_STACK_LINE(404)
						if (((bool(stroke) && bool(::openfl::_internal::renderer::cairo::CairoGraphics_obj::hasStroke)))){
							HX_STACK_LINE(405)
							::openfl::_internal::renderer::cairo::CairoGraphics_obj::closePath();
						}
						HX_STACK_LINE(408)
						if (((::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokePattern != null()))){
							HX_STACK_LINE(409)
							::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::destroy(::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokePattern);
						}
						HX_STACK_LINE(412)
						::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo->moveTo((positionX - offsetX),(positionY - offsetY));
						HX_STACK_LINE(414)
						Dynamic _g4 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::createGradientPattern(type,colors,alphas,ratios,matrix,spreadMethod,interpolationMethod,focalPointRatio);		HX_STACK_VAR(_g4,"_g4");
						HX_STACK_LINE(414)
						::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokePattern = _g4;
						HX_STACK_LINE(416)
						::openfl::_internal::renderer::cairo::CairoGraphics_obj::hasStroke = true;
					}
				}
				else if (  ( _switch_1==(int)13)){
					HX_STACK_LINE(261)
					bool smooth = (::openfl::display::DrawCommand(command))->__Param(3);		HX_STACK_VAR(smooth,"smooth");
					HX_STACK_LINE(261)
					bool repeat = (::openfl::display::DrawCommand(command))->__Param(2);		HX_STACK_VAR(repeat,"repeat");
					HX_STACK_LINE(261)
					::openfl::geom::Matrix matrix = (::openfl::display::DrawCommand(command))->__Param(1);		HX_STACK_VAR(matrix,"matrix");
					HX_STACK_LINE(261)
					::openfl::display::BitmapData bitmap = (::openfl::display::DrawCommand(command))->__Param(0);		HX_STACK_VAR(bitmap,"bitmap");
					HX_STACK_LINE(418)
					{
						HX_STACK_LINE(420)
						if (((bool(stroke) && bool(::openfl::_internal::renderer::cairo::CairoGraphics_obj::hasStroke)))){
							HX_STACK_LINE(421)
							::openfl::_internal::renderer::cairo::CairoGraphics_obj::closePath();
						}
						HX_STACK_LINE(424)
						if (((::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokePattern != null()))){
							HX_STACK_LINE(425)
							::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::destroy(::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokePattern);
						}
						HX_STACK_LINE(428)
						::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo->moveTo((positionX - offsetX),(positionY - offsetY));
						HX_STACK_LINE(430)
						Dynamic _g5 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::createImagePattern(bitmap,matrix,repeat);		HX_STACK_VAR(_g5,"_g5");
						HX_STACK_LINE(430)
						::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokePattern = _g5;
						HX_STACK_LINE(432)
						::openfl::_internal::renderer::cairo::CairoGraphics_obj::hasStroke = true;
					}
				}
				else if (  ( _switch_1==(int)0)){
					HX_STACK_LINE(261)
					bool smooth = (::openfl::display::DrawCommand(command))->__Param(3);		HX_STACK_VAR(smooth,"smooth");
					HX_STACK_LINE(261)
					bool repeat = (::openfl::display::DrawCommand(command))->__Param(2);		HX_STACK_VAR(repeat,"repeat");
					HX_STACK_LINE(261)
					::openfl::geom::Matrix matrix = (::openfl::display::DrawCommand(command))->__Param(1);		HX_STACK_VAR(matrix,"matrix");
					HX_STACK_LINE(261)
					::openfl::display::BitmapData bitmap = (::openfl::display::DrawCommand(command))->__Param(0);		HX_STACK_VAR(bitmap,"bitmap");
					HX_STACK_LINE(434)
					{
						HX_STACK_LINE(436)
						if (((::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillPattern != null()))){
							HX_STACK_LINE(438)
							::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::destroy(::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillPattern);
						}
						HX_STACK_LINE(442)
						Dynamic _g6 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::createImagePattern(bitmap,matrix,repeat);		HX_STACK_VAR(_g6,"_g6");
						HX_STACK_LINE(442)
						::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillPattern = _g6;
						HX_STACK_LINE(444)
						::openfl::_internal::renderer::cairo::CairoGraphics_obj::bitmapFill = bitmap;
						HX_STACK_LINE(445)
						::openfl::_internal::renderer::cairo::CairoGraphics_obj::bitmapRepeat = repeat;
						HX_STACK_LINE(447)
						::openfl::_internal::renderer::cairo::CairoGraphics_obj::hasFill = true;
					}
				}
				else if (  ( _switch_1==(int)1)){
					HX_STACK_LINE(261)
					Float alpha = (::openfl::display::DrawCommand(command))->__Param(1);		HX_STACK_VAR(alpha,"alpha");
					HX_STACK_LINE(261)
					int rgb = (::openfl::display::DrawCommand(command))->__Param(0);		HX_STACK_VAR(rgb,"rgb");
					HX_STACK_LINE(449)
					{
						HX_STACK_LINE(451)
						if (((alpha < 0.005))){
							HX_STACK_LINE(453)
							::openfl::_internal::renderer::cairo::CairoGraphics_obj::hasFill = false;
						}
						else{
							HX_STACK_LINE(457)
							if (((::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillPattern != null()))){
								HX_STACK_LINE(459)
								::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::destroy(::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillPattern);
								HX_STACK_LINE(460)
								::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillPatternMatrix = null();
							}
							HX_STACK_LINE(464)
							Dynamic _g7 = ::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::createRGBA((Float((hx::UShr(((int(rgb) & int((int)16711680))),(int)16))) / Float((int)255)),(Float((hx::UShr(((int(rgb) & int((int)65280))),(int)8))) / Float((int)255)),(Float(((int(rgb) & int((int)255)))) / Float((int)255)),alpha);		HX_STACK_VAR(_g7,"_g7");
							HX_STACK_LINE(464)
							::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillPattern = _g7;
							HX_STACK_LINE(465)
							::openfl::_internal::renderer::cairo::CairoGraphics_obj::hasFill = true;
						}
						HX_STACK_LINE(469)
						::openfl::_internal::renderer::cairo::CairoGraphics_obj::bitmapFill = null();
					}
				}
				else if (  ( _switch_1==(int)2)){
					HX_STACK_LINE(261)
					Dynamic focalPointRatio = (::openfl::display::DrawCommand(command))->__Param(7);		HX_STACK_VAR(focalPointRatio,"focalPointRatio");
					HX_STACK_LINE(261)
					::openfl::display::InterpolationMethod interpolationMethod = (::openfl::display::DrawCommand(command))->__Param(6);		HX_STACK_VAR(interpolationMethod,"interpolationMethod");
					HX_STACK_LINE(261)
					::openfl::display::SpreadMethod spreadMethod = (::openfl::display::DrawCommand(command))->__Param(5);		HX_STACK_VAR(spreadMethod,"spreadMethod");
					HX_STACK_LINE(261)
					::openfl::geom::Matrix matrix = (::openfl::display::DrawCommand(command))->__Param(4);		HX_STACK_VAR(matrix,"matrix");
					HX_STACK_LINE(261)
					Dynamic ratios = (::openfl::display::DrawCommand(command))->__Param(3);		HX_STACK_VAR(ratios,"ratios");
					HX_STACK_LINE(261)
					Dynamic alphas = (::openfl::display::DrawCommand(command))->__Param(2);		HX_STACK_VAR(alphas,"alphas");
					HX_STACK_LINE(261)
					Dynamic colors = (::openfl::display::DrawCommand(command))->__Param(1);		HX_STACK_VAR(colors,"colors");
					HX_STACK_LINE(261)
					::openfl::display::GradientType type = (::openfl::display::DrawCommand(command))->__Param(0);		HX_STACK_VAR(type,"type");
					HX_STACK_LINE(472)
					{
						HX_STACK_LINE(474)
						if (((::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillPattern != null()))){
							HX_STACK_LINE(476)
							::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::destroy(::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillPattern);
							HX_STACK_LINE(477)
							::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillPatternMatrix = null();
						}
						HX_STACK_LINE(481)
						Dynamic _g8 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::createGradientPattern(type,colors,alphas,ratios,matrix,spreadMethod,interpolationMethod,focalPointRatio);		HX_STACK_VAR(_g8,"_g8");
						HX_STACK_LINE(481)
						::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillPattern = _g8;
						HX_STACK_LINE(483)
						::openfl::_internal::renderer::cairo::CairoGraphics_obj::hasFill = true;
						HX_STACK_LINE(484)
						::openfl::_internal::renderer::cairo::CairoGraphics_obj::bitmapFill = null();
					}
				}
				else if (  ( _switch_1==(int)10)){
					HX_STACK_LINE(261)
					::openfl::display::TriangleCulling culling = (::openfl::display::DrawCommand(command))->__Param(3);		HX_STACK_VAR(culling,"culling");
					HX_STACK_LINE(261)
					Array< Float > uvtData = (::openfl::display::DrawCommand(command))->__Param(2);		HX_STACK_VAR(uvtData,"uvtData");
					HX_STACK_LINE(261)
					Array< int > indices = (::openfl::display::DrawCommand(command))->__Param(1);		HX_STACK_VAR(indices,"indices");
					HX_STACK_LINE(261)
					Array< Float > vertices = (::openfl::display::DrawCommand(command))->__Param(0);		HX_STACK_VAR(vertices,"vertices");
					HX_STACK_LINE(486)
					{
						HX_STACK_LINE(488)
						Array< Float > v = vertices;		HX_STACK_VAR(v,"v");
						HX_STACK_LINE(489)
						Array< int > ind = indices;		HX_STACK_VAR(ind,"ind");
						HX_STACK_LINE(490)
						Array< Float > uvt = uvtData;		HX_STACK_VAR(uvt,"uvt");
						HX_STACK_LINE(491)
						bool colorFill = (::openfl::_internal::renderer::cairo::CairoGraphics_obj::bitmapFill == null());		HX_STACK_VAR(colorFill,"colorFill");
						HX_STACK_LINE(493)
						if (((bool(colorFill) && bool((uvt != null()))))){
							HX_STACK_LINE(495)
							break;
						}
						HX_STACK_LINE(498)
						int width = (int)0;		HX_STACK_VAR(width,"width");
						HX_STACK_LINE(499)
						int height = (int)0;		HX_STACK_VAR(height,"height");
						HX_STACK_LINE(501)
						if ((!(colorFill))){
							HX_STACK_LINE(505)
							if (((uvtData == null()))){
								HX_STACK_LINE(507)
								Array< Float > _g10;		HX_STACK_VAR(_g10,"_g10");
								struct _Function_7_1{
									inline static Array< Float > Block( ){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_internal/renderer/cairo/CairoGraphics.hx",507,0x744ae94c)
										{
											HX_STACK_LINE(507)
											Array< Float > this1;		HX_STACK_VAR(this1,"this1");
											HX_STACK_LINE(507)
											Array< Float > _g9 = Array_obj< Float >::__new()->__SetSizeExact(null());		HX_STACK_VAR(_g9,"_g9");
											HX_STACK_LINE(507)
											this1 = _g9;
											HX_STACK_LINE(507)
											return this1;
										}
										return null();
									}
								};
								HX_STACK_LINE(507)
								_g10 = _Function_7_1::Block();
								HX_STACK_LINE(507)
								uvtData = _g10;
								HX_STACK_LINE(509)
								{
									HX_STACK_LINE(509)
									int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
									HX_STACK_LINE(509)
									int _g1 = ::Std_obj::_int((Float(v->length) / Float((int)2)));		HX_STACK_VAR(_g1,"_g1");
									HX_STACK_LINE(509)
									while((true)){
										HX_STACK_LINE(509)
										if ((!(((_g2 < _g1))))){
											HX_STACK_LINE(509)
											break;
										}
										HX_STACK_LINE(509)
										int i = (_g2)++;		HX_STACK_VAR(i,"i");
										HX_STACK_LINE(511)
										uvtData->push((Float(v->__get((i * (int)2))) / Float(::openfl::_internal::renderer::cairo::CairoGraphics_obj::bitmapFill->width)));
										HX_STACK_LINE(512)
										uvtData->push((Float(v->__get(((i * (int)2) + (int)1))) / Float(::openfl::_internal::renderer::cairo::CairoGraphics_obj::bitmapFill->height)));
									}
								}
							}
							HX_STACK_LINE(518)
							bool skipT = (uvtData->length != v->length);		HX_STACK_VAR(skipT,"skipT");
							HX_STACK_LINE(519)
							Dynamic normalizedUVT = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::normalizeUVT(uvtData,skipT);		HX_STACK_VAR(normalizedUVT,"normalizedUVT");
							HX_STACK_LINE(520)
							Float maxUVT = normalizedUVT->__Field(HX_CSTRING("max"),true);		HX_STACK_VAR(maxUVT,"maxUVT");
							HX_STACK_LINE(521)
							uvt = normalizedUVT->__Field(HX_CSTRING("uvt"),true);
							HX_STACK_LINE(523)
							if (((maxUVT > (int)1))){
								HX_STACK_LINE(524)
								int _g11 = ::Std_obj::_int(::openfl::_internal::renderer::cairo::CairoGraphics_obj::bounds->width);		HX_STACK_VAR(_g11,"_g11");
								HX_STACK_LINE(524)
								width = _g11;
								HX_STACK_LINE(525)
								int _g12 = ::Std_obj::_int(::openfl::_internal::renderer::cairo::CairoGraphics_obj::bounds->height);		HX_STACK_VAR(_g12,"_g12");
								HX_STACK_LINE(525)
								height = _g12;
							}
							else{
								HX_STACK_LINE(530)
								width = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::bitmapFill->width;
								HX_STACK_LINE(531)
								height = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::bitmapFill->height;
							}
						}
						HX_STACK_LINE(536)
						int i = (int)0;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(537)
						int l = ind->length;		HX_STACK_VAR(l,"l");
						HX_STACK_LINE(539)
						int a;		HX_STACK_VAR(a,"a");
						HX_STACK_LINE(539)
						int b;		HX_STACK_VAR(b,"b");
						HX_STACK_LINE(539)
						int c;		HX_STACK_VAR(c,"c");
						HX_STACK_LINE(540)
						int iax;		HX_STACK_VAR(iax,"iax");
						HX_STACK_LINE(540)
						int iay;		HX_STACK_VAR(iay,"iay");
						HX_STACK_LINE(540)
						int ibx;		HX_STACK_VAR(ibx,"ibx");
						HX_STACK_LINE(540)
						int iby;		HX_STACK_VAR(iby,"iby");
						HX_STACK_LINE(540)
						int icx;		HX_STACK_VAR(icx,"icx");
						HX_STACK_LINE(540)
						int icy;		HX_STACK_VAR(icy,"icy");
						HX_STACK_LINE(541)
						Float x1;		HX_STACK_VAR(x1,"x1");
						HX_STACK_LINE(541)
						Float y1;		HX_STACK_VAR(y1,"y1");
						HX_STACK_LINE(541)
						Float x2;		HX_STACK_VAR(x2,"x2");
						HX_STACK_LINE(541)
						Float y2;		HX_STACK_VAR(y2,"y2");
						HX_STACK_LINE(541)
						Float x3;		HX_STACK_VAR(x3,"x3");
						HX_STACK_LINE(541)
						Float y3;		HX_STACK_VAR(y3,"y3");
						HX_STACK_LINE(542)
						Float uvx1;		HX_STACK_VAR(uvx1,"uvx1");
						HX_STACK_LINE(542)
						Float uvy1;		HX_STACK_VAR(uvy1,"uvy1");
						HX_STACK_LINE(542)
						Float uvx2;		HX_STACK_VAR(uvx2,"uvx2");
						HX_STACK_LINE(542)
						Float uvy2;		HX_STACK_VAR(uvy2,"uvy2");
						HX_STACK_LINE(542)
						Float uvx3;		HX_STACK_VAR(uvx3,"uvx3");
						HX_STACK_LINE(542)
						Float uvy3;		HX_STACK_VAR(uvy3,"uvy3");
						HX_STACK_LINE(543)
						Float denom;		HX_STACK_VAR(denom,"denom");
						HX_STACK_LINE(544)
						Float t1;		HX_STACK_VAR(t1,"t1");
						HX_STACK_LINE(544)
						Float t2;		HX_STACK_VAR(t2,"t2");
						HX_STACK_LINE(544)
						Float t3;		HX_STACK_VAR(t3,"t3");
						HX_STACK_LINE(544)
						Float t4;		HX_STACK_VAR(t4,"t4");
						HX_STACK_LINE(545)
						Float dx;		HX_STACK_VAR(dx,"dx");
						HX_STACK_LINE(545)
						Float dy;		HX_STACK_VAR(dy,"dy");
						HX_STACK_LINE(547)
						::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo->set_antialias((int)1);
						HX_STACK_LINE(549)
						while((true)){
							HX_STACK_LINE(549)
							if ((!(((i < l))))){
								HX_STACK_LINE(549)
								break;
							}
							HX_STACK_LINE(551)
							a = i;
							HX_STACK_LINE(552)
							b = (i + (int)1);
							HX_STACK_LINE(553)
							c = (i + (int)2);
							HX_STACK_LINE(555)
							iax = (ind->__get(a) * (int)2);
							HX_STACK_LINE(556)
							iay = ((ind->__get(a) * (int)2) + (int)1);
							HX_STACK_LINE(557)
							ibx = (ind->__get(b) * (int)2);
							HX_STACK_LINE(558)
							iby = ((ind->__get(b) * (int)2) + (int)1);
							HX_STACK_LINE(559)
							icx = (ind->__get(c) * (int)2);
							HX_STACK_LINE(560)
							icy = ((ind->__get(c) * (int)2) + (int)1);
							HX_STACK_LINE(562)
							x1 = v->__get(iax);
							HX_STACK_LINE(563)
							y1 = v->__get(iay);
							HX_STACK_LINE(564)
							x2 = v->__get(ibx);
							HX_STACK_LINE(565)
							y2 = v->__get(iby);
							HX_STACK_LINE(566)
							x3 = v->__get(icx);
							HX_STACK_LINE(567)
							y3 = v->__get(icy);
							HX_STACK_LINE(569)
							switch( (int)(culling->__Index())){
								case (int)2: {
									HX_STACK_LINE(573)
									if ((!(((((((x2 - x1)) * ((y3 - y1))) - (((y2 - y1)) * ((x3 - x1)))) < (int)0))))){
										HX_STACK_LINE(575)
										hx::AddEq(i,(int)3);
										HX_STACK_LINE(576)
										continue;
									}
								}
								;break;
								case (int)0: {
									HX_STACK_LINE(582)
									if (((((((x2 - x1)) * ((y3 - y1))) - (((y2 - y1)) * ((x3 - x1)))) < (int)0))){
										HX_STACK_LINE(584)
										hx::AddEq(i,(int)3);
										HX_STACK_LINE(585)
										continue;
									}
								}
								;break;
								default: {
								}
							}
							HX_STACK_LINE(593)
							if ((colorFill)){
								HX_STACK_LINE(595)
								::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo->newPath();
								HX_STACK_LINE(596)
								::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo->moveTo(x1,y1);
								HX_STACK_LINE(597)
								::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo->lineTo(x2,y2);
								HX_STACK_LINE(598)
								::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo->lineTo(x3,y3);
								HX_STACK_LINE(599)
								::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo->closePath();
								HX_STACK_LINE(600)
								::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo->fillPreserve();
								HX_STACK_LINE(601)
								hx::AddEq(i,(int)3);
								HX_STACK_LINE(602)
								continue;
							}
							HX_STACK_LINE(606)
							::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo->identityMatrix();
							HX_STACK_LINE(609)
							::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo->newPath();
							HX_STACK_LINE(610)
							::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo->moveTo(x1,y1);
							HX_STACK_LINE(611)
							::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo->lineTo(x2,y2);
							HX_STACK_LINE(612)
							::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo->lineTo(x3,y3);
							HX_STACK_LINE(613)
							::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo->closePath();
							HX_STACK_LINE(616)
							uvx1 = (uvt->__get(iax) * width);
							HX_STACK_LINE(617)
							uvx2 = (uvt->__get(ibx) * width);
							HX_STACK_LINE(618)
							uvx3 = (uvt->__get(icx) * width);
							HX_STACK_LINE(619)
							uvy1 = (uvt->__get(iay) * height);
							HX_STACK_LINE(620)
							uvy2 = (uvt->__get(iby) * height);
							HX_STACK_LINE(621)
							uvy3 = (uvt->__get(icy) * height);
							HX_STACK_LINE(623)
							denom = ((((uvx1 * ((uvy3 - uvy2))) - (uvx2 * uvy3)) + (uvx3 * uvy2)) + (((uvx2 - uvx3)) * uvy1));
							HX_STACK_LINE(625)
							if (((denom == (int)0))){
								HX_STACK_LINE(627)
								hx::AddEq(i,(int)3);
								HX_STACK_LINE(628)
								continue;
							}
							HX_STACK_LINE(632)
							t1 = (Float(-((((((uvy1 * ((x3 - x2))) - (uvy2 * x3)) + (uvy3 * x2)) + (((uvy2 - uvy3)) * x1))))) / Float(denom));
							HX_STACK_LINE(633)
							t2 = (Float((((((uvy2 * y3) + (uvy1 * ((y2 - y3)))) - (uvy3 * y2)) + (((uvy3 - uvy2)) * y1)))) / Float(denom));
							HX_STACK_LINE(634)
							t3 = (Float((((((uvx1 * ((x3 - x2))) - (uvx2 * x3)) + (uvx3 * x2)) + (((uvx2 - uvx3)) * x1)))) / Float(denom));
							HX_STACK_LINE(635)
							t4 = (Float(-((((((uvx2 * y3) + (uvx1 * ((y2 - y3)))) - (uvx3 * y2)) + (((uvx3 - uvx2)) * y1))))) / Float(denom));
							HX_STACK_LINE(636)
							dx = (Float(((((uvx1 * (((uvy3 * x2) - (uvy2 * x3)))) + (uvy1 * (((uvx2 * x3) - (uvx3 * x2))))) + ((((uvx3 * uvy2) - (uvx2 * uvy3))) * x1)))) / Float(denom));
							HX_STACK_LINE(637)
							dy = (Float(((((uvx1 * (((uvy3 * y2) - (uvy2 * y3)))) + (uvy1 * (((uvx2 * y3) - (uvx3 * y2))))) + ((((uvx3 * uvy2) - (uvx2 * uvy3))) * y1)))) / Float(denom));
							HX_STACK_LINE(639)
							::lime::math::Matrix3 matrix = ::lime::math::Matrix3_obj::__new(t1,t2,t3,t4,dx,dy);		HX_STACK_VAR(matrix,"matrix");
							HX_STACK_LINE(640)
							::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo->set_matrix(matrix);
							HX_STACK_LINE(641)
							::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo->set_source(::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillPattern);
							HX_STACK_LINE(642)
							::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo->fill();
							HX_STACK_LINE(644)
							hx::AddEq(i,(int)3);
						}
					}
				}
				else if (  ( _switch_1==(int)9)){
					HX_STACK_LINE(261)
					int count = (::openfl::display::DrawCommand(command))->__Param(4);		HX_STACK_VAR(count,"count");
					HX_STACK_LINE(261)
					int flags = (::openfl::display::DrawCommand(command))->__Param(3);		HX_STACK_VAR(flags,"flags");
					HX_STACK_LINE(261)
					bool smooth = (::openfl::display::DrawCommand(command))->__Param(2);		HX_STACK_VAR(smooth,"smooth");
					HX_STACK_LINE(261)
					Array< Float > tileData = (::openfl::display::DrawCommand(command))->__Param(1);		HX_STACK_VAR(tileData,"tileData");
					HX_STACK_LINE(261)
					::openfl::display::Tilesheet sheet = (::openfl::display::DrawCommand(command))->__Param(0);		HX_STACK_VAR(sheet,"sheet");
					HX_STACK_LINE(647)
					{
						HX_STACK_LINE(649)
						bool useScale = (((int(flags) & int((int)1))) > (int)0);		HX_STACK_VAR(useScale,"useScale");
						HX_STACK_LINE(650)
						bool useRotation = (((int(flags) & int((int)2))) > (int)0);		HX_STACK_VAR(useRotation,"useRotation");
						HX_STACK_LINE(651)
						bool useTransform = (((int(flags) & int((int)16))) > (int)0);		HX_STACK_VAR(useTransform,"useTransform");
						HX_STACK_LINE(652)
						bool useRGB = (((int(flags) & int((int)4))) > (int)0);		HX_STACK_VAR(useRGB,"useRGB");
						HX_STACK_LINE(653)
						bool useAlpha = (((int(flags) & int((int)8))) > (int)0);		HX_STACK_VAR(useAlpha,"useAlpha");
						HX_STACK_LINE(654)
						bool useRect = (((int(flags) & int((int)32))) > (int)0);		HX_STACK_VAR(useRect,"useRect");
						HX_STACK_LINE(655)
						bool useOrigin = (((int(flags) & int((int)64))) > (int)0);		HX_STACK_VAR(useOrigin,"useOrigin");
						HX_STACK_LINE(656)
						bool useBlendAdd = (((int(flags) & int((int)65536))) > (int)0);		HX_STACK_VAR(useBlendAdd,"useBlendAdd");
						HX_STACK_LINE(658)
						if ((useTransform)){
							HX_STACK_LINE(658)
							useScale = false;
							HX_STACK_LINE(658)
							useRotation = false;
						}
						HX_STACK_LINE(660)
						int scaleIndex = (int)0;		HX_STACK_VAR(scaleIndex,"scaleIndex");
						HX_STACK_LINE(661)
						int rotationIndex = (int)0;		HX_STACK_VAR(rotationIndex,"rotationIndex");
						HX_STACK_LINE(662)
						int rgbIndex = (int)0;		HX_STACK_VAR(rgbIndex,"rgbIndex");
						HX_STACK_LINE(663)
						int alphaIndex = (int)0;		HX_STACK_VAR(alphaIndex,"alphaIndex");
						HX_STACK_LINE(664)
						int transformIndex = (int)0;		HX_STACK_VAR(transformIndex,"transformIndex");
						HX_STACK_LINE(666)
						int numValues = (int)3;		HX_STACK_VAR(numValues,"numValues");
						HX_STACK_LINE(668)
						if ((useRect)){
							HX_STACK_LINE(668)
							if ((useOrigin)){
								HX_STACK_LINE(668)
								numValues = (int)8;
							}
							else{
								HX_STACK_LINE(668)
								numValues = (int)6;
							}
						}
						HX_STACK_LINE(669)
						if ((useScale)){
							HX_STACK_LINE(669)
							scaleIndex = numValues;
							HX_STACK_LINE(669)
							(numValues)++;
						}
						HX_STACK_LINE(670)
						if ((useRotation)){
							HX_STACK_LINE(670)
							rotationIndex = numValues;
							HX_STACK_LINE(670)
							(numValues)++;
						}
						HX_STACK_LINE(671)
						if ((useTransform)){
							HX_STACK_LINE(671)
							transformIndex = numValues;
							HX_STACK_LINE(671)
							hx::AddEq(numValues,(int)4);
						}
						HX_STACK_LINE(672)
						if ((useRGB)){
							HX_STACK_LINE(672)
							rgbIndex = numValues;
							HX_STACK_LINE(672)
							hx::AddEq(numValues,(int)3);
						}
						HX_STACK_LINE(673)
						if ((useAlpha)){
							HX_STACK_LINE(673)
							alphaIndex = numValues;
							HX_STACK_LINE(673)
							(numValues)++;
						}
						HX_STACK_LINE(675)
						int totalCount = tileData->length;		HX_STACK_VAR(totalCount,"totalCount");
						HX_STACK_LINE(676)
						if (((bool((count >= (int)0)) && bool((totalCount > count))))){
							HX_STACK_LINE(676)
							totalCount = count;
						}
						HX_STACK_LINE(677)
						int itemCount = ::Std_obj::_int((Float(totalCount) / Float(numValues)));		HX_STACK_VAR(itemCount,"itemCount");
						HX_STACK_LINE(678)
						int index = (int)0;		HX_STACK_VAR(index,"index");
						HX_STACK_LINE(680)
						::openfl::geom::Rectangle rect = null();		HX_STACK_VAR(rect,"rect");
						HX_STACK_LINE(681)
						::openfl::geom::Point center = null();		HX_STACK_VAR(center,"center");
						HX_STACK_LINE(682)
						int previousTileID = (int)-1;		HX_STACK_VAR(previousTileID,"previousTileID");
						HX_STACK_LINE(684)
						Dynamic surface;		HX_STACK_VAR(surface,"surface");
						HX_STACK_LINE(685)
						sheet->__bitmap->__sync();
						HX_STACK_LINE(686)
						Dynamic _g13 = sheet->__bitmap->getSurface(null());		HX_STACK_VAR(_g13,"_g13");
						HX_STACK_LINE(686)
						surface = _g13;
						HX_STACK_LINE(688)
						if ((useBlendAdd)){
							HX_STACK_LINE(689)
							::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo->set_operator((int)12);
						}
						HX_STACK_LINE(692)
						while((true)){
							HX_STACK_LINE(692)
							if ((!(((index < totalCount))))){
								HX_STACK_LINE(692)
								break;
							}
							HX_STACK_LINE(702)
							int i = ::Std_obj::_int(tileData->__get((index + (int)2)));		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(705)
							int tileID;		HX_STACK_VAR(tileID,"tileID");
							HX_STACK_LINE(705)
							if ((!(useRect))){
								HX_STACK_LINE(705)
								tileID = i;
							}
							else{
								HX_STACK_LINE(705)
								tileID = (int)-1;
							}
							HX_STACK_LINE(707)
							if (((bool(!(useRect)) && bool((tileID != previousTileID))))){
								HX_STACK_LINE(709)
								rect = sheet->__tileRects->__get(tileID).StaticCast< ::openfl::geom::Rectangle >();
								HX_STACK_LINE(710)
								center = sheet->__centerPoints->__get(tileID).StaticCast< ::openfl::geom::Point >();
								HX_STACK_LINE(712)
								previousTileID = tileID;
							}
							else{
								HX_STACK_LINE(714)
								if ((useRect)){
									HX_STACK_LINE(716)
									rect = sheet->__rectTile;
									HX_STACK_LINE(717)
									rect->setTo(tileData->__get((index + (int)2)),tileData->__get((index + (int)3)),tileData->__get((index + (int)4)),tileData->__get((index + (int)5)));
									HX_STACK_LINE(718)
									center = sheet->__point;
									HX_STACK_LINE(720)
									if ((useOrigin)){
										HX_STACK_LINE(722)
										center->x = tileData->__get((index + (int)6));
										HX_STACK_LINE(722)
										center->y = tileData->__get((index + (int)7));
									}
									else{
										HX_STACK_LINE(726)
										center->x = (int)0;
										HX_STACK_LINE(726)
										center->y = (int)0;
									}
								}
							}
							HX_STACK_LINE(732)
							if (((bool((bool((bool((rect != null())) && bool((rect->width > (int)0)))) && bool((rect->height > (int)0)))) && bool((center != null()))))){
								HX_STACK_LINE(736)
								::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo->identityMatrix();
								HX_STACK_LINE(738)
								if ((useTransform)){
									HX_STACK_LINE(739)
									::lime::math::Matrix3 matrix = ::lime::math::Matrix3_obj::__new(tileData->__get((index + transformIndex)),tileData->__get(((index + transformIndex) + (int)1)),tileData->__get(((index + transformIndex) + (int)2)),tileData->__get(((index + transformIndex) + (int)3)),(int)0,(int)0);		HX_STACK_VAR(matrix,"matrix");
									HX_STACK_LINE(740)
									::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo->set_matrix(matrix);
								}
								HX_STACK_LINE(743)
								::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo->translate(tileData->__get(index),tileData->__get((index + (int)1)));
								HX_STACK_LINE(746)
								if ((useRotation)){
									HX_STACK_LINE(747)
									::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo->rotate(tileData->__get((index + rotationIndex)));
								}
								HX_STACK_LINE(750)
								if ((useScale)){
									HX_STACK_LINE(751)
									Float scale = tileData->__get((index + scaleIndex));		HX_STACK_VAR(scale,"scale");
									HX_STACK_LINE(752)
									::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo->scale(scale,scale);
								}
								HX_STACK_LINE(755)
								::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo->setSourceSurface(surface,(int)0,(int)0);
								HX_STACK_LINE(757)
								if ((useAlpha)){
									HX_STACK_LINE(758)
									::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo->paintWithAlpha(tileData->__get((index + alphaIndex)));
								}
								else{
									HX_STACK_LINE(760)
									::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo->paint();
								}
							}
							HX_STACK_LINE(767)
							hx::AddEq(index,numValues);
						}
						HX_STACK_LINE(771)
						if ((useBlendAdd)){
							HX_STACK_LINE(772)
							::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo->set_operator((int)2);
						}
					}
				}
				else  {
				}
;
;
			}
		}
		HX_STACK_LINE(781)
		if ((hasPath)){
			HX_STACK_LINE(784)
			if (((bool(stroke) && bool(::openfl::_internal::renderer::cairo::CairoGraphics_obj::hasStroke)))){
				HX_STACK_LINE(786)
				if (((bool(::openfl::_internal::renderer::cairo::CairoGraphics_obj::hasFill) && bool(closeGap)))){
					HX_STACK_LINE(788)
					::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo->lineTo((startX - offsetX),(startY - offsetY));
				}
				HX_STACK_LINE(792)
				::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo->set_source(::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokePattern);
				HX_STACK_LINE(793)
				::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo->strokePreserve();
			}
			HX_STACK_LINE(797)
			if (((bool(!(stroke)) && bool(::openfl::_internal::renderer::cairo::CairoGraphics_obj::hasFill)))){
				HX_STACK_LINE(799)
				::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo->translate(-(::openfl::_internal::renderer::cairo::CairoGraphics_obj::bounds->x),-(::openfl::_internal::renderer::cairo::CairoGraphics_obj::bounds->y));
				HX_STACK_LINE(801)
				if (((::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillPatternMatrix != null()))){
					HX_STACK_LINE(803)
					::openfl::geom::Matrix matrix;		HX_STACK_VAR(matrix,"matrix");
					HX_STACK_LINE(803)
					{
						HX_STACK_LINE(803)
						::openfl::geom::Matrix _this = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillPatternMatrix;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(803)
						matrix = ::openfl::geom::Matrix_obj::__new(_this->a,_this->b,_this->c,_this->d,_this->tx,_this->ty);
					}
					HX_STACK_LINE(804)
					matrix->invert();
					HX_STACK_LINE(806)
					if (((::openfl::_internal::renderer::cairo::CairoGraphics_obj::pendingMatrix != null()))){
						HX_STACK_LINE(808)
						matrix->concat(::openfl::_internal::renderer::cairo::CairoGraphics_obj::pendingMatrix);
					}
					HX_STACK_LINE(812)
					::lime::math::Matrix3 _g14 = matrix->__toMatrix3();		HX_STACK_VAR(_g14,"_g14");
					HX_STACK_LINE(812)
					::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::set_matrix(::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillPattern,_g14);
				}
				HX_STACK_LINE(816)
				::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo->set_source(::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillPattern);
				HX_STACK_LINE(818)
				if (((::openfl::_internal::renderer::cairo::CairoGraphics_obj::pendingMatrix != null()))){
					HX_STACK_LINE(820)
					::lime::math::Matrix3 _g15 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::pendingMatrix->__toMatrix3();		HX_STACK_VAR(_g15,"_g15");
					HX_STACK_LINE(820)
					::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo->transform(_g15);
					HX_STACK_LINE(821)
					::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo->fillPreserve();
					HX_STACK_LINE(822)
					::lime::math::Matrix3 _g16 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::inversePendingMatrix->__toMatrix3();		HX_STACK_VAR(_g16,"_g16");
					HX_STACK_LINE(822)
					::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo->transform(_g16);
				}
				else{
					HX_STACK_LINE(826)
					::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo->fillPreserve();
				}
				HX_STACK_LINE(830)
				::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo->translate(::openfl::_internal::renderer::cairo::CairoGraphics_obj::bounds->x,::openfl::_internal::renderer::cairo::CairoGraphics_obj::bounds->y);
				HX_STACK_LINE(831)
				::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo->closePath();
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CairoGraphics_obj,playCommands,(void))

Void CairoGraphics_obj::quadraticCurveTo( Float cx,Float cy,Float x,Float y){
{
		HX_STACK_FRAME("openfl._internal.renderer.cairo.CairoGraphics","quadraticCurveTo",0x01a3b18e,"openfl._internal.renderer.cairo.CairoGraphics.quadraticCurveTo","openfl/_internal/renderer/cairo/CairoGraphics.hx",837,0x744ae94c)
		HX_STACK_ARG(cx,"cx")
		HX_STACK_ARG(cy,"cy")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(839)
		::lime::math::Vector2 current = null();		HX_STACK_VAR(current,"current");
		HX_STACK_LINE(841)
		if ((!(::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo->get_hasCurrentPoint()))){
			HX_STACK_LINE(843)
			::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo->moveTo(cx,cy);
			HX_STACK_LINE(844)
			::lime::math::Vector2 _g = ::lime::math::Vector2_obj::__new(cx,cy);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(844)
			current = _g;
		}
		else{
			HX_STACK_LINE(848)
			::lime::math::Vector2 _g1 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo->get_currentPoint();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(848)
			current = _g1;
		}
		HX_STACK_LINE(852)
		Float cx1 = (current->x + (0.66666666666666663 * ((cx - current->x))));		HX_STACK_VAR(cx1,"cx1");
		HX_STACK_LINE(853)
		Float cy1 = (current->y + (0.66666666666666663 * ((cy - current->y))));		HX_STACK_VAR(cy1,"cy1");
		HX_STACK_LINE(854)
		Float cx2 = (x + (0.66666666666666663 * ((cx - x))));		HX_STACK_VAR(cx2,"cx2");
		HX_STACK_LINE(855)
		Float cy2 = (y + (0.66666666666666663 * ((cy - y))));		HX_STACK_VAR(cy2,"cy2");
		HX_STACK_LINE(857)
		::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo->curveTo(cx1,cy1,cx2,cy2,x,y);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(CairoGraphics_obj,quadraticCurveTo,(void))

Void CairoGraphics_obj::render( ::openfl::display::Graphics graphics,::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl._internal.renderer.cairo.CairoGraphics","render",0x3c3e61d2,"openfl._internal.renderer.cairo.CairoGraphics.render","openfl/_internal/renderer/cairo/CairoGraphics.hx",862,0x744ae94c)
		HX_STACK_ARG(graphics,"graphics")
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(865)
		::openfl::_internal::renderer::cairo::CairoGraphics_obj::graphics = graphics;
		HX_STACK_LINE(867)
		if ((!(graphics->__dirty))){
			HX_STACK_LINE(867)
			return null();
		}
		HX_STACK_LINE(869)
		::openfl::_internal::renderer::cairo::CairoGraphics_obj::bounds = graphics->__bounds;
		HX_STACK_LINE(871)
		if (((bool((bool((bool((bool(!(graphics->__visible)) || bool((graphics->__commands->length == (int)0)))) || bool((::openfl::_internal::renderer::cairo::CairoGraphics_obj::bounds == null())))) || bool((::openfl::_internal::renderer::cairo::CairoGraphics_obj::bounds->width == (int)0)))) || bool((::openfl::_internal::renderer::cairo::CairoGraphics_obj::bounds->height == (int)0))))){
			HX_STACK_LINE(873)
			if (((graphics->__cairo != null()))){
				HX_STACK_LINE(875)
				graphics->__cairo->destroy();
				HX_STACK_LINE(876)
				graphics->__cairo = null();
			}
		}
		else{
			HX_STACK_LINE(882)
			if (((graphics->__cairo != null()))){
				HX_STACK_LINE(884)
				Dynamic surface = graphics->__cairo->get_target();		HX_STACK_VAR(surface,"surface");
				HX_STACK_LINE(886)
				int _g = ::lime::graphics::cairo::_CairoSurface::CairoSurface_Impl__obj::get_width(surface);		HX_STACK_VAR(_g,"_g");
				struct _Function_3_1{
					inline static bool Block( Dynamic &surface){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_internal/renderer/cairo/CairoGraphics.hx",886,0x744ae94c)
						{
							HX_STACK_LINE(886)
							int _g1 = ::lime::graphics::cairo::_CairoSurface::CairoSurface_Impl__obj::get_height(surface);		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(886)
							return (::openfl::_internal::renderer::cairo::CairoGraphics_obj::bounds->height != _g1);
						}
						return null();
					}
				};
				HX_STACK_LINE(886)
				if (((  ((!(((::openfl::_internal::renderer::cairo::CairoGraphics_obj::bounds->width != _g))))) ? bool(_Function_3_1::Block(surface)) : bool(true) ))){
					HX_STACK_LINE(888)
					graphics->__cairo->destroy();
					HX_STACK_LINE(889)
					graphics->__cairo = null();
				}
			}
			HX_STACK_LINE(895)
			if (((graphics->__cairo == null()))){
				HX_STACK_LINE(897)
				int _g2 = ::Math_obj::ceil(::openfl::_internal::renderer::cairo::CairoGraphics_obj::bounds->width);		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(897)
				int _g3 = ::Math_obj::ceil(::openfl::_internal::renderer::cairo::CairoGraphics_obj::bounds->height);		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(897)
				::openfl::display::BitmapData bitmap = ::openfl::display::BitmapData_obj::__new(_g2,_g3,true,null());		HX_STACK_VAR(bitmap,"bitmap");
				HX_STACK_LINE(898)
				Dynamic surface = ::lime::graphics::cairo::_CairoSurface::CairoSurface_Impl__obj::fromImage(bitmap->__image);		HX_STACK_VAR(surface,"surface");
				HX_STACK_LINE(899)
				::lime::graphics::cairo::Cairo _g4 = ::lime::graphics::cairo::Cairo_obj::__new(surface);		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(899)
				graphics->__cairo = _g4;
				HX_STACK_LINE(900)
				::lime::graphics::cairo::_CairoSurface::CairoSurface_Impl__obj::destroy(surface);
				HX_STACK_LINE(902)
				bitmap->__bgra = true;
				HX_STACK_LINE(904)
				graphics->__bitmap = bitmap;
			}
			HX_STACK_LINE(908)
			::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo = graphics->__cairo;
			HX_STACK_LINE(910)
			::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo->set_operator((int)1);
			HX_STACK_LINE(911)
			::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo->setSourceRGBA((int)1,(int)1,(int)1,(int)0);
			HX_STACK_LINE(912)
			::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo->paint();
			HX_STACK_LINE(913)
			::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo->set_operator((int)2);
			HX_STACK_LINE(915)
			Array< ::Dynamic > _g5 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(915)
			::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillCommands = _g5;
			HX_STACK_LINE(916)
			Array< ::Dynamic > _g6 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(916)
			::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokeCommands = _g6;
			HX_STACK_LINE(918)
			::openfl::_internal::renderer::cairo::CairoGraphics_obj::hasFill = false;
			HX_STACK_LINE(919)
			::openfl::_internal::renderer::cairo::CairoGraphics_obj::hasStroke = false;
			HX_STACK_LINE(921)
			::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillPattern = null();
			HX_STACK_LINE(922)
			::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokePattern = null();
			HX_STACK_LINE(924)
			{
				HX_STACK_LINE(924)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(924)
				Array< ::Dynamic > _g1 = graphics->__commands;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(924)
				while((true)){
					HX_STACK_LINE(924)
					if ((!(((_g < _g1->length))))){
						HX_STACK_LINE(924)
						break;
					}
					HX_STACK_LINE(924)
					::openfl::display::DrawCommand command = _g1->__get(_g).StaticCast< ::openfl::display::DrawCommand >();		HX_STACK_VAR(command,"command");
					HX_STACK_LINE(924)
					++(_g);
					HX_STACK_LINE(926)
					switch( (int)(command->__Index())){
						case (int)3: case (int)4: case (int)15: case (int)16: {
							HX_STACK_LINE(930)
							::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillCommands->push(command);
							HX_STACK_LINE(931)
							::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokeCommands->push(command);
						}
						;break;
						case (int)11: {
							HX_STACK_LINE(935)
							::openfl::_internal::renderer::cairo::CairoGraphics_obj::endFill();
							HX_STACK_LINE(936)
							::openfl::_internal::renderer::cairo::CairoGraphics_obj::endStroke();
							HX_STACK_LINE(937)
							::openfl::_internal::renderer::cairo::CairoGraphics_obj::hasFill = false;
							HX_STACK_LINE(938)
							::openfl::_internal::renderer::cairo::CairoGraphics_obj::bitmapFill = null();
						}
						;break;
						case (int)12: case (int)14: case (int)13: {
							HX_STACK_LINE(942)
							::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokeCommands->push(command);
						}
						;break;
						case (int)0: case (int)1: case (int)2: {
							HX_STACK_LINE(946)
							::openfl::_internal::renderer::cairo::CairoGraphics_obj::endFill();
							HX_STACK_LINE(947)
							::openfl::_internal::renderer::cairo::CairoGraphics_obj::endStroke();
							HX_STACK_LINE(949)
							::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillCommands->push(command);
							HX_STACK_LINE(950)
							::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokeCommands->push(command);
						}
						;break;
						case (int)5: case (int)6: case (int)7: case (int)8: {
							HX_STACK_LINE(954)
							::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillCommands->push(command);
							HX_STACK_LINE(955)
							::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokeCommands->push(command);
						}
						;break;
						case (int)9: case (int)10: {
							HX_STACK_LINE(959)
							::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillCommands->push(command);
						}
						;break;
						default: {
							HX_STACK_LINE(963)
							::openfl::Lib_obj::notImplemented(HX_CSTRING("CairoGraphics"));
						}
					}
				}
			}
			HX_STACK_LINE(969)
			if (((::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillCommands->length > (int)0))){
				HX_STACK_LINE(971)
				::openfl::_internal::renderer::cairo::CairoGraphics_obj::endFill();
			}
			HX_STACK_LINE(975)
			if (((::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokeCommands->length > (int)0))){
				HX_STACK_LINE(977)
				::openfl::_internal::renderer::cairo::CairoGraphics_obj::endStroke();
			}
		}
		HX_STACK_LINE(983)
		graphics->__bitmap->__image->dirty = true;
		HX_STACK_LINE(984)
		graphics->set___dirty(false);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CairoGraphics_obj,render,(void))

Void CairoGraphics_obj::renderMask( ::openfl::display::Graphics graphics,::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl._internal.renderer.cairo.CairoGraphics","renderMask",0x2ed81fde,"openfl._internal.renderer.cairo.CairoGraphics.renderMask","openfl/_internal/renderer/cairo/CairoGraphics.hx",993,0x744ae94c)
		HX_STACK_ARG(graphics,"graphics")
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(993)
		if (((graphics->__commands->length != (int)0))){
			HX_STACK_LINE(995)
			::lime::graphics::cairo::Cairo cairo = renderSession->cairo;		HX_STACK_VAR(cairo,"cairo");
			HX_STACK_LINE(997)
			Float positionX = 0.0;		HX_STACK_VAR(positionX,"positionX");
			HX_STACK_LINE(998)
			Float positionY = 0.0;		HX_STACK_VAR(positionY,"positionY");
			HX_STACK_LINE(1000)
			int offsetX = (int)0;		HX_STACK_VAR(offsetX,"offsetX");
			HX_STACK_LINE(1001)
			int offsetY = (int)0;		HX_STACK_VAR(offsetY,"offsetY");
			HX_STACK_LINE(1003)
			{
				HX_STACK_LINE(1003)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(1003)
				Array< ::Dynamic > _g1 = graphics->__commands;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(1003)
				while((true)){
					HX_STACK_LINE(1003)
					if ((!(((_g < _g1->length))))){
						HX_STACK_LINE(1003)
						break;
					}
					HX_STACK_LINE(1003)
					::openfl::display::DrawCommand command = _g1->__get(_g).StaticCast< ::openfl::display::DrawCommand >();		HX_STACK_VAR(command,"command");
					HX_STACK_LINE(1003)
					++(_g);
					HX_STACK_LINE(1005)
					switch( (int)(command->__Index())){
						case (int)3: {
							HX_STACK_LINE(1005)
							Float y = (::openfl::display::DrawCommand(command))->__Param(5);		HX_STACK_VAR(y,"y");
							HX_STACK_LINE(1005)
							Float x = (::openfl::display::DrawCommand(command))->__Param(4);		HX_STACK_VAR(x,"x");
							HX_STACK_LINE(1005)
							Float cy2 = (::openfl::display::DrawCommand(command))->__Param(3);		HX_STACK_VAR(cy2,"cy2");
							HX_STACK_LINE(1005)
							Float cy1 = (::openfl::display::DrawCommand(command))->__Param(2);		HX_STACK_VAR(cy1,"cy1");
							HX_STACK_LINE(1005)
							Float cx2 = (::openfl::display::DrawCommand(command))->__Param(1);		HX_STACK_VAR(cx2,"cx2");
							HX_STACK_LINE(1005)
							Float cx1 = (::openfl::display::DrawCommand(command))->__Param(0);		HX_STACK_VAR(cx1,"cx1");
							HX_STACK_LINE(1007)
							{
								HX_STACK_LINE(1009)
								cairo->curveTo((cx1 - offsetX),(cy1 - offsetY),(cx2 - offsetX),(cy2 - offsetY),(x - offsetX),(y - offsetY));
								HX_STACK_LINE(1010)
								positionX = x;
								HX_STACK_LINE(1011)
								positionY = y;
							}
						}
						;break;
						case (int)4: {
							HX_STACK_LINE(1005)
							Float y = (::openfl::display::DrawCommand(command))->__Param(3);		HX_STACK_VAR(y,"y");
							HX_STACK_LINE(1005)
							Float x = (::openfl::display::DrawCommand(command))->__Param(2);		HX_STACK_VAR(x,"x");
							HX_STACK_LINE(1005)
							Float cy = (::openfl::display::DrawCommand(command))->__Param(1);		HX_STACK_VAR(cy,"cy");
							HX_STACK_LINE(1005)
							Float cx = (::openfl::display::DrawCommand(command))->__Param(0);		HX_STACK_VAR(cx,"cx");
							HX_STACK_LINE(1013)
							{
								HX_STACK_LINE(1015)
								::openfl::_internal::renderer::cairo::CairoGraphics_obj::quadraticCurveTo((cx - offsetX),(cy - offsetY),(x - offsetX),(y - offsetY));
								HX_STACK_LINE(1016)
								positionX = x;
								HX_STACK_LINE(1017)
								positionY = y;
							}
						}
						;break;
						case (int)5: {
							HX_STACK_LINE(1005)
							Float radius = (::openfl::display::DrawCommand(command))->__Param(2);		HX_STACK_VAR(radius,"radius");
							HX_STACK_LINE(1005)
							Float y = (::openfl::display::DrawCommand(command))->__Param(1);		HX_STACK_VAR(y,"y");
							HX_STACK_LINE(1005)
							Float x = (::openfl::display::DrawCommand(command))->__Param(0);		HX_STACK_VAR(x,"x");
							HX_STACK_LINE(1021)
							cairo->arc((x - offsetX),(y - offsetY),radius,(int)0,(::Math_obj::PI * (int)2));
						}
						;break;
						case (int)6: {
							HX_STACK_LINE(1005)
							Float height = (::openfl::display::DrawCommand(command))->__Param(3);		HX_STACK_VAR(height,"height");
							HX_STACK_LINE(1005)
							Float width = (::openfl::display::DrawCommand(command))->__Param(2);		HX_STACK_VAR(width,"width");
							HX_STACK_LINE(1005)
							Float y = (::openfl::display::DrawCommand(command))->__Param(1);		HX_STACK_VAR(y,"y");
							HX_STACK_LINE(1005)
							Float x = (::openfl::display::DrawCommand(command))->__Param(0);		HX_STACK_VAR(x,"x");
							HX_STACK_LINE(1023)
							{
								HX_STACK_LINE(1025)
								hx::SubEq(x,offsetX);
								HX_STACK_LINE(1026)
								hx::SubEq(y,offsetY);
								HX_STACK_LINE(1028)
								Float kappa = .5522848;		HX_STACK_VAR(kappa,"kappa");
								HX_STACK_LINE(1029)
								Float ox = ((Float(width) / Float((int)2)) * kappa);		HX_STACK_VAR(ox,"ox");
								HX_STACK_LINE(1030)
								Float oy = ((Float(height) / Float((int)2)) * kappa);		HX_STACK_VAR(oy,"oy");
								HX_STACK_LINE(1031)
								Float xe = (x + width);		HX_STACK_VAR(xe,"xe");
								HX_STACK_LINE(1032)
								Float ye = (y + height);		HX_STACK_VAR(ye,"ye");
								HX_STACK_LINE(1033)
								Float xm = (x + (Float(width) / Float((int)2)));		HX_STACK_VAR(xm,"xm");
								HX_STACK_LINE(1034)
								Float ym = (y + (Float(height) / Float((int)2)));		HX_STACK_VAR(ym,"ym");
								HX_STACK_LINE(1038)
								cairo->moveTo(x,ym);
								HX_STACK_LINE(1039)
								cairo->curveTo(x,(ym - oy),(xm - ox),y,xm,y);
								HX_STACK_LINE(1040)
								cairo->curveTo((xm + ox),y,xe,(ym - oy),xe,ym);
								HX_STACK_LINE(1041)
								cairo->curveTo(xe,(ym + oy),(xm + ox),ye,xm,ye);
								HX_STACK_LINE(1042)
								cairo->curveTo((xm - ox),ye,x,(ym + oy),x,ym);
							}
						}
						;break;
						case (int)7: {
							HX_STACK_LINE(1005)
							Float height = (::openfl::display::DrawCommand(command))->__Param(3);		HX_STACK_VAR(height,"height");
							HX_STACK_LINE(1005)
							Float width = (::openfl::display::DrawCommand(command))->__Param(2);		HX_STACK_VAR(width,"width");
							HX_STACK_LINE(1005)
							Float y = (::openfl::display::DrawCommand(command))->__Param(1);		HX_STACK_VAR(y,"y");
							HX_STACK_LINE(1005)
							Float x = (::openfl::display::DrawCommand(command))->__Param(0);		HX_STACK_VAR(x,"x");
							HX_STACK_LINE(1047)
							cairo->rectangle((x - offsetX),(y - offsetY),width,height);
						}
						;break;
						case (int)8: {
							HX_STACK_LINE(1005)
							Float ry = (::openfl::display::DrawCommand(command))->__Param(5);		HX_STACK_VAR(ry,"ry");
							HX_STACK_LINE(1005)
							Float rx = (::openfl::display::DrawCommand(command))->__Param(4);		HX_STACK_VAR(rx,"rx");
							HX_STACK_LINE(1005)
							Float height = (::openfl::display::DrawCommand(command))->__Param(3);		HX_STACK_VAR(height,"height");
							HX_STACK_LINE(1005)
							Float width = (::openfl::display::DrawCommand(command))->__Param(2);		HX_STACK_VAR(width,"width");
							HX_STACK_LINE(1005)
							Float y = (::openfl::display::DrawCommand(command))->__Param(1);		HX_STACK_VAR(y,"y");
							HX_STACK_LINE(1005)
							Float x = (::openfl::display::DrawCommand(command))->__Param(0);		HX_STACK_VAR(x,"x");
							HX_STACK_LINE(1051)
							::openfl::_internal::renderer::cairo::CairoGraphics_obj::drawRoundRect((x - offsetX),(y - offsetY),width,height,rx,ry);
						}
						;break;
						case (int)15: {
							HX_STACK_LINE(1005)
							Float y = (::openfl::display::DrawCommand(command))->__Param(1);		HX_STACK_VAR(y,"y");
							HX_STACK_LINE(1005)
							Float x = (::openfl::display::DrawCommand(command))->__Param(0);		HX_STACK_VAR(x,"x");
							HX_STACK_LINE(1053)
							{
								HX_STACK_LINE(1055)
								cairo->lineTo((x - offsetX),(y - offsetY));
								HX_STACK_LINE(1056)
								positionX = x;
								HX_STACK_LINE(1057)
								positionY = y;
							}
						}
						;break;
						case (int)16: {
							HX_STACK_LINE(1005)
							Float y = (::openfl::display::DrawCommand(command))->__Param(1);		HX_STACK_VAR(y,"y");
							HX_STACK_LINE(1005)
							Float x = (::openfl::display::DrawCommand(command))->__Param(0);		HX_STACK_VAR(x,"x");
							HX_STACK_LINE(1059)
							{
								HX_STACK_LINE(1061)
								cairo->moveTo((x - offsetX),(y - offsetY));
								HX_STACK_LINE(1062)
								positionX = x;
								HX_STACK_LINE(1063)
								positionY = y;
							}
						}
						;break;
						default: {
						}
					}
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CairoGraphics_obj,renderMask,(void))


CairoGraphics_obj::CairoGraphics_obj()
{
}

Dynamic CairoGraphics_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"SIN45") ) { return SIN45; }
		if (HX_FIELD_EQ(inName,"TAN22") ) { return TAN22; }
		if (HX_FIELD_EQ(inName,"cairo") ) { return cairo; }
		if (HX_FIELD_EQ(inName,"isCCW") ) { return isCCW_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"bounds") ) { return bounds; }
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"hasFill") ) { return hasFill; }
		if (HX_FIELD_EQ(inName,"endFill") ) { return endFill_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"graphics") ) { return graphics; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"hasStroke") ) { return hasStroke; }
		if (HX_FIELD_EQ(inName,"endStroke") ) { return endStroke_dyn(); }
		if (HX_FIELD_EQ(inName,"closePath") ) { return closePath_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bitmapFill") ) { return bitmapFill; }
		if (HX_FIELD_EQ(inName,"renderMask") ) { return renderMask_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"fillPattern") ) { return fillPattern; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"fillCommands") ) { return fillCommands; }
		if (HX_FIELD_EQ(inName,"bitmapRepeat") ) { return bitmapRepeat; }
		if (HX_FIELD_EQ(inName,"normalizeUVT") ) { return normalizeUVT_dyn(); }
		if (HX_FIELD_EQ(inName,"playCommands") ) { return playCommands_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"pendingMatrix") ) { return pendingMatrix; }
		if (HX_FIELD_EQ(inName,"strokePattern") ) { return strokePattern; }
		if (HX_FIELD_EQ(inName,"drawRoundRect") ) { return drawRoundRect_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"strokeCommands") ) { return strokeCommands; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"quadraticCurveTo") ) { return quadraticCurveTo_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"fillPatternMatrix") ) { return fillPatternMatrix; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"createImagePattern") ) { return createImagePattern_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"inversePendingMatrix") ) { return inversePendingMatrix; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"createGradientPattern") ) { return createGradientPattern_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic CairoGraphics_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"SIN45") ) { SIN45=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TAN22") ) { TAN22=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"cairo") ) { cairo=inValue.Cast< ::lime::graphics::cairo::Cairo >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"bounds") ) { bounds=inValue.Cast< ::openfl::geom::Rectangle >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"hasFill") ) { hasFill=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"graphics") ) { graphics=inValue.Cast< ::openfl::display::Graphics >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"hasStroke") ) { hasStroke=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bitmapFill") ) { bitmapFill=inValue.Cast< ::openfl::display::BitmapData >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"fillPattern") ) { fillPattern=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"fillCommands") ) { fillCommands=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bitmapRepeat") ) { bitmapRepeat=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"pendingMatrix") ) { pendingMatrix=inValue.Cast< ::openfl::geom::Matrix >(); return inValue; }
		if (HX_FIELD_EQ(inName,"strokePattern") ) { strokePattern=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"strokeCommands") ) { strokeCommands=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"fillPatternMatrix") ) { fillPatternMatrix=inValue.Cast< ::openfl::geom::Matrix >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"inversePendingMatrix") ) { inversePendingMatrix=inValue.Cast< ::openfl::geom::Matrix >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CairoGraphics_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("SIN45"),
	HX_CSTRING("TAN22"),
	HX_CSTRING("bounds"),
	HX_CSTRING("cairo"),
	HX_CSTRING("fillCommands"),
	HX_CSTRING("fillPattern"),
	HX_CSTRING("fillPatternMatrix"),
	HX_CSTRING("graphics"),
	HX_CSTRING("hasFill"),
	HX_CSTRING("hasStroke"),
	HX_CSTRING("inversePendingMatrix"),
	HX_CSTRING("pendingMatrix"),
	HX_CSTRING("strokeCommands"),
	HX_CSTRING("strokePattern"),
	HX_CSTRING("bitmapFill"),
	HX_CSTRING("bitmapRepeat"),
	HX_CSTRING("endFill"),
	HX_CSTRING("endStroke"),
	HX_CSTRING("drawRoundRect"),
	HX_CSTRING("isCCW"),
	HX_CSTRING("normalizeUVT"),
	HX_CSTRING("createGradientPattern"),
	HX_CSTRING("createImagePattern"),
	HX_CSTRING("closePath"),
	HX_CSTRING("playCommands"),
	HX_CSTRING("quadraticCurveTo"),
	HX_CSTRING("render"),
	HX_CSTRING("renderMask"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::SIN45,"SIN45");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::TAN22,"TAN22");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::bounds,"bounds");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::cairo,"cairo");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::fillCommands,"fillCommands");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::fillPattern,"fillPattern");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::fillPatternMatrix,"fillPatternMatrix");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::graphics,"graphics");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::hasFill,"hasFill");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::hasStroke,"hasStroke");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::inversePendingMatrix,"inversePendingMatrix");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::pendingMatrix,"pendingMatrix");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::strokeCommands,"strokeCommands");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::strokePattern,"strokePattern");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::bitmapFill,"bitmapFill");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::bitmapRepeat,"bitmapRepeat");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::SIN45,"SIN45");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::TAN22,"TAN22");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::bounds,"bounds");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::cairo,"cairo");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::fillCommands,"fillCommands");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::fillPattern,"fillPattern");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::fillPatternMatrix,"fillPatternMatrix");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::graphics,"graphics");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::hasFill,"hasFill");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::hasStroke,"hasStroke");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::inversePendingMatrix,"inversePendingMatrix");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::pendingMatrix,"pendingMatrix");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::strokeCommands,"strokeCommands");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::strokePattern,"strokePattern");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::bitmapFill,"bitmapFill");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::bitmapRepeat,"bitmapRepeat");
};

#endif

Class CairoGraphics_obj::__mClass;

void CairoGraphics_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl._internal.renderer.cairo.CairoGraphics"), hx::TCanCast< CairoGraphics_obj> ,sStaticFields,sMemberFields,
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

void CairoGraphics_obj::__boot()
{
	SIN45= 0.70710678118654752440084436210485;
	TAN22= 0.4142135623730950488016887242097;
}

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace cairo
