#include <hxcpp.h>

#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_lime_graphics_CanvasRenderContext
#include <lime/graphics/CanvasRenderContext.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_RenderSession
#include <openfl/_internal/renderer/RenderSession.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_canvas_CanvasGraphics
#include <openfl/_internal/renderer/canvas/CanvasGraphics.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
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
#ifndef INCLUDED_openfl_display_SpreadMethod
#include <openfl/display/SpreadMethod.h>
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
namespace canvas{

Void CanvasGraphics_obj::__construct()
{
	return null();
}

//CanvasGraphics_obj::~CanvasGraphics_obj() { }

Dynamic CanvasGraphics_obj::__CreateEmpty() { return  new CanvasGraphics_obj; }
hx::ObjectPtr< CanvasGraphics_obj > CanvasGraphics_obj::__new()
{  hx::ObjectPtr< CanvasGraphics_obj > result = new CanvasGraphics_obj();
	result->__construct();
	return result;}

Dynamic CanvasGraphics_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CanvasGraphics_obj > result = new CanvasGraphics_obj();
	result->__construct();
	return result;}

Float CanvasGraphics_obj::SIN45;

Float CanvasGraphics_obj::TAN22;

::openfl::display::BitmapData CanvasGraphics_obj::bitmapFill;

::openfl::display::BitmapData CanvasGraphics_obj::bitmapStroke;

bool CanvasGraphics_obj::bitmapRepeat;

::openfl::geom::Rectangle CanvasGraphics_obj::bounds;

Array< ::Dynamic > CanvasGraphics_obj::fillCommands;

::openfl::display::Graphics CanvasGraphics_obj::graphics;

bool CanvasGraphics_obj::hasFill;

bool CanvasGraphics_obj::hasStroke;

::openfl::geom::Matrix CanvasGraphics_obj::inversePendingMatrix;

::openfl::geom::Matrix CanvasGraphics_obj::pendingMatrix;

Array< ::Dynamic > CanvasGraphics_obj::strokeCommands;

Dynamic CanvasGraphics_obj::createBitmapFill( ::openfl::display::BitmapData bitmap,bool bitmapRepeat){
	HX_STACK_FRAME("openfl._internal.renderer.canvas.CanvasGraphics","createBitmapFill",0x2a5c3b1e,"openfl._internal.renderer.canvas.CanvasGraphics.createBitmapFill","openfl/_internal/renderer/canvas/CanvasGraphics.hx",66,0x0b9ff65e)
	HX_STACK_ARG(bitmap,"bitmap")
	HX_STACK_ARG(bitmapRepeat,"bitmapRepeat")
	HX_STACK_LINE(66)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CanvasGraphics_obj,createBitmapFill,return )

Void CanvasGraphics_obj::createTempPatternCanvas( ::openfl::display::BitmapData bitmap,bool repeat,int width,int height){
{
		HX_STACK_FRAME("openfl._internal.renderer.canvas.CanvasGraphics","createTempPatternCanvas",0x07b48808,"openfl._internal.renderer.canvas.CanvasGraphics.createTempPatternCanvas","openfl/_internal/renderer/canvas/CanvasGraphics.hx",70,0x0b9ff65e)
		HX_STACK_ARG(bitmap,"bitmap")
		HX_STACK_ARG(repeat,"repeat")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(CanvasGraphics_obj,createTempPatternCanvas,(void))

Void CanvasGraphics_obj::endFill( ){
{
		HX_STACK_FRAME("openfl._internal.renderer.canvas.CanvasGraphics","endFill",0x3478970e,"openfl._internal.renderer.canvas.CanvasGraphics.endFill","openfl/_internal/renderer/canvas/CanvasGraphics.hx",96,0x0b9ff65e)
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(CanvasGraphics_obj,endFill,(void))

Void CanvasGraphics_obj::endStroke( ){
{
		HX_STACK_FRAME("openfl._internal.renderer.canvas.CanvasGraphics","endStroke",0x411cf503,"openfl._internal.renderer.canvas.CanvasGraphics.endStroke","openfl/_internal/renderer/canvas/CanvasGraphics.hx",107,0x0b9ff65e)
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(CanvasGraphics_obj,endStroke,(void))

Void CanvasGraphics_obj::closePath( ){
{
		HX_STACK_FRAME("openfl._internal.renderer.canvas.CanvasGraphics","closePath",0x0426588d,"openfl._internal.renderer.canvas.CanvasGraphics.closePath","openfl/_internal/renderer/canvas/CanvasGraphics.hx",119,0x0b9ff65e)
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(CanvasGraphics_obj,closePath,(void))

Void CanvasGraphics_obj::drawRoundRect( Float x,Float y,Float width,Float height,Float rx,Float ry){
{
		HX_STACK_FRAME("openfl._internal.renderer.canvas.CanvasGraphics","drawRoundRect",0x4e8f7efe,"openfl._internal.renderer.canvas.CanvasGraphics.drawRoundRect","openfl/_internal/renderer/canvas/CanvasGraphics.hx",133,0x0b9ff65e)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_ARG(rx,"rx")
		HX_STACK_ARG(ry,"ry")
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(CanvasGraphics_obj,drawRoundRect,(void))

bool CanvasGraphics_obj::isCCW( Float x1,Float y1,Float x2,Float y2,Float x3,Float y3){
	HX_STACK_FRAME("openfl._internal.renderer.canvas.CanvasGraphics","isCCW",0xce74af1d,"openfl._internal.renderer.canvas.CanvasGraphics.isCCW","openfl/_internal/renderer/canvas/CanvasGraphics.hx",171,0x0b9ff65e)
	HX_STACK_ARG(x1,"x1")
	HX_STACK_ARG(y1,"y1")
	HX_STACK_ARG(x2,"x2")
	HX_STACK_ARG(y2,"y2")
	HX_STACK_ARG(x3,"x3")
	HX_STACK_ARG(y3,"y3")
	HX_STACK_LINE(171)
	return (((((x2 - x1)) * ((y3 - y1))) - (((y2 - y1)) * ((x3 - x1)))) < (int)0);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(CanvasGraphics_obj,isCCW,return )

Dynamic CanvasGraphics_obj::normalizeUVT( Array< Float > uvt,hx::Null< bool >  __o_skipT){
bool skipT = __o_skipT.Default(false);
	HX_STACK_FRAME("openfl._internal.renderer.canvas.CanvasGraphics","normalizeUVT",0x11b66056,"openfl._internal.renderer.canvas.CanvasGraphics.normalizeUVT","openfl/_internal/renderer/canvas/CanvasGraphics.hx",176,0x0b9ff65e)
	HX_STACK_ARG(uvt,"uvt")
	HX_STACK_ARG(skipT,"skipT")
{
		HX_STACK_LINE(178)
		Float max = ::Math_obj::NEGATIVE_INFINITY;		HX_STACK_VAR(max,"max");
		HX_STACK_LINE(179)
		Float tmp = ::Math_obj::NEGATIVE_INFINITY;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(180)
		int len = uvt->length;		HX_STACK_VAR(len,"len");
		HX_STACK_LINE(182)
		{
			HX_STACK_LINE(182)
			int _g1 = (int)1;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(182)
			int _g = (len + (int)1);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(182)
			while((true)){
				HX_STACK_LINE(182)
				if ((!(((_g1 < _g))))){
					HX_STACK_LINE(182)
					break;
				}
				HX_STACK_LINE(182)
				int t = (_g1)++;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(184)
				if (((bool(skipT) && bool((hx::Mod(t,(int)3) == (int)0))))){
					HX_STACK_LINE(186)
					continue;
				}
				HX_STACK_LINE(190)
				tmp = uvt->__get((t - (int)1));
				HX_STACK_LINE(192)
				if (((max < tmp))){
					HX_STACK_LINE(194)
					max = tmp;
				}
			}
		}
		HX_STACK_LINE(200)
		Array< Float > result;		HX_STACK_VAR(result,"result");
		struct _Function_1_1{
			inline static Array< Float > Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_internal/renderer/canvas/CanvasGraphics.hx",200,0x0b9ff65e)
				{
					HX_STACK_LINE(200)
					Array< Float > this1;		HX_STACK_VAR(this1,"this1");
					HX_STACK_LINE(200)
					Array< Float > _g = Array_obj< Float >::__new()->__SetSizeExact(null());		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(200)
					this1 = _g;
					HX_STACK_LINE(200)
					return this1;
				}
				return null();
			}
		};
		HX_STACK_LINE(200)
		result = _Function_1_1::Block();
		HX_STACK_LINE(202)
		{
			HX_STACK_LINE(202)
			int _g1 = (int)1;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(202)
			int _g = (len + (int)1);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(202)
			while((true)){
				HX_STACK_LINE(202)
				if ((!(((_g1 < _g))))){
					HX_STACK_LINE(202)
					break;
				}
				HX_STACK_LINE(202)
				int t = (_g1)++;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(204)
				if (((bool(skipT) && bool((hx::Mod(t,(int)3) == (int)0))))){
					HX_STACK_LINE(206)
					continue;
				}
				HX_STACK_LINE(210)
				result->push((Float(uvt->__get((t - (int)1))) / Float(max)));
			}
		}
		struct _Function_1_2{
			inline static Dynamic Block( Array< Float > &result,Float &max){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_internal/renderer/canvas/CanvasGraphics.hx",214,0x0b9ff65e)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("max") , max,false);
					__result->Add(HX_CSTRING("uvt") , result,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(214)
		return _Function_1_2::Block(result,max);
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CanvasGraphics_obj,normalizeUVT,return )

Void CanvasGraphics_obj::playCommands( Array< ::Dynamic > commands,hx::Null< bool >  __o_stroke){
bool stroke = __o_stroke.Default(false);
	HX_STACK_FRAME("openfl._internal.renderer.canvas.CanvasGraphics","playCommands",0x147605cc,"openfl._internal.renderer.canvas.CanvasGraphics.playCommands","openfl/_internal/renderer/canvas/CanvasGraphics.hx",219,0x0b9ff65e)
	HX_STACK_ARG(commands,"commands")
	HX_STACK_ARG(stroke,"stroke")
{
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CanvasGraphics_obj,playCommands,(void))

Void CanvasGraphics_obj::createGradientPattern( ::openfl::display::GradientType type,Dynamic colors,Dynamic alphas,Dynamic ratios,::openfl::geom::Matrix matrix,::openfl::display::SpreadMethod spreadMethod,::openfl::display::InterpolationMethod interpolationMethod,Dynamic focalPointRatio){
{
		HX_STACK_FRAME("openfl._internal.renderer.canvas.CanvasGraphics","createGradientPattern",0x6cf339b4,"openfl._internal.renderer.canvas.CanvasGraphics.createGradientPattern","openfl/_internal/renderer/canvas/CanvasGraphics.hx",515,0x0b9ff65e)
		HX_STACK_ARG(type,"type")
		HX_STACK_ARG(colors,"colors")
		HX_STACK_ARG(alphas,"alphas")
		HX_STACK_ARG(ratios,"ratios")
		HX_STACK_ARG(matrix,"matrix")
		HX_STACK_ARG(spreadMethod,"spreadMethod")
		HX_STACK_ARG(interpolationMethod,"interpolationMethod")
		HX_STACK_ARG(focalPointRatio,"focalPointRatio")
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC8(CanvasGraphics_obj,createGradientPattern,(void))

Void CanvasGraphics_obj::render( ::openfl::display::Graphics graphics,::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl._internal.renderer.canvas.CanvasGraphics","render",0x7dc3ee46,"openfl._internal.renderer.canvas.CanvasGraphics.render","openfl/_internal/renderer/canvas/CanvasGraphics.hx",561,0x0b9ff65e)
		HX_STACK_ARG(graphics,"graphics")
		HX_STACK_ARG(renderSession,"renderSession")
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CanvasGraphics_obj,render,(void))

Void CanvasGraphics_obj::renderMask( ::openfl::display::Graphics graphics,::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl._internal.renderer.canvas.CanvasGraphics","renderMask",0xfa8ef652,"openfl._internal.renderer.canvas.CanvasGraphics.renderMask","openfl/_internal/renderer/canvas/CanvasGraphics.hx",953,0x0b9ff65e)
		HX_STACK_ARG(graphics,"graphics")
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(953)
		if (((graphics->__commands->length != (int)0))){
			HX_STACK_LINE(955)
			::lime::graphics::CanvasRenderContext context = renderSession->context;		HX_STACK_VAR(context,"context");
			HX_STACK_LINE(957)
			Float positionX = 0.0;		HX_STACK_VAR(positionX,"positionX");
			HX_STACK_LINE(958)
			Float positionY = 0.0;		HX_STACK_VAR(positionY,"positionY");
			HX_STACK_LINE(960)
			int offsetX = (int)0;		HX_STACK_VAR(offsetX,"offsetX");
			HX_STACK_LINE(961)
			int offsetY = (int)0;		HX_STACK_VAR(offsetY,"offsetY");
			HX_STACK_LINE(963)
			{
				HX_STACK_LINE(963)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(963)
				Array< ::Dynamic > _g1 = graphics->__commands;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(963)
				while((true)){
					HX_STACK_LINE(963)
					if ((!(((_g < _g1->length))))){
						HX_STACK_LINE(963)
						break;
					}
					HX_STACK_LINE(963)
					::openfl::display::DrawCommand command = _g1->__get(_g).StaticCast< ::openfl::display::DrawCommand >();		HX_STACK_VAR(command,"command");
					HX_STACK_LINE(963)
					++(_g);
					HX_STACK_LINE(965)
					switch( (int)(command->__Index())){
						case (int)3: {
							HX_STACK_LINE(965)
							Float y = (::openfl::display::DrawCommand(command))->__Param(5);		HX_STACK_VAR(y,"y");
							HX_STACK_LINE(965)
							Float x = (::openfl::display::DrawCommand(command))->__Param(4);		HX_STACK_VAR(x,"x");
							HX_STACK_LINE(965)
							Float cy2 = (::openfl::display::DrawCommand(command))->__Param(3);		HX_STACK_VAR(cy2,"cy2");
							HX_STACK_LINE(965)
							Float cy1 = (::openfl::display::DrawCommand(command))->__Param(2);		HX_STACK_VAR(cy1,"cy1");
							HX_STACK_LINE(965)
							Float cx2 = (::openfl::display::DrawCommand(command))->__Param(1);		HX_STACK_VAR(cx2,"cx2");
							HX_STACK_LINE(965)
							Float cx1 = (::openfl::display::DrawCommand(command))->__Param(0);		HX_STACK_VAR(cx1,"cx1");
							HX_STACK_LINE(967)
							{
								HX_STACK_LINE(969)
								context->bezierCurveTo((cx1 - offsetX),(cy1 - offsetY),(cx2 - offsetX),(cy2 - offsetY),(x - offsetX),(y - offsetY));
								HX_STACK_LINE(970)
								positionX = x;
								HX_STACK_LINE(971)
								positionY = y;
							}
						}
						;break;
						case (int)4: {
							HX_STACK_LINE(965)
							Float y = (::openfl::display::DrawCommand(command))->__Param(3);		HX_STACK_VAR(y,"y");
							HX_STACK_LINE(965)
							Float x = (::openfl::display::DrawCommand(command))->__Param(2);		HX_STACK_VAR(x,"x");
							HX_STACK_LINE(965)
							Float cy = (::openfl::display::DrawCommand(command))->__Param(1);		HX_STACK_VAR(cy,"cy");
							HX_STACK_LINE(965)
							Float cx = (::openfl::display::DrawCommand(command))->__Param(0);		HX_STACK_VAR(cx,"cx");
							HX_STACK_LINE(973)
							{
								HX_STACK_LINE(975)
								context->quadraticCurveTo((cx - offsetX),(cy - offsetY),(x - offsetX),(y - offsetY));
								HX_STACK_LINE(976)
								positionX = x;
								HX_STACK_LINE(977)
								positionY = y;
							}
						}
						;break;
						case (int)5: {
							HX_STACK_LINE(965)
							Float radius = (::openfl::display::DrawCommand(command))->__Param(2);		HX_STACK_VAR(radius,"radius");
							HX_STACK_LINE(965)
							Float y = (::openfl::display::DrawCommand(command))->__Param(1);		HX_STACK_VAR(y,"y");
							HX_STACK_LINE(965)
							Float x = (::openfl::display::DrawCommand(command))->__Param(0);		HX_STACK_VAR(x,"x");
							HX_STACK_LINE(981)
							context->arc((x - offsetX),(y - offsetY),radius,(int)0,(::Math_obj::PI * (int)2),true);
						}
						;break;
						case (int)6: {
							HX_STACK_LINE(965)
							Float height = (::openfl::display::DrawCommand(command))->__Param(3);		HX_STACK_VAR(height,"height");
							HX_STACK_LINE(965)
							Float width = (::openfl::display::DrawCommand(command))->__Param(2);		HX_STACK_VAR(width,"width");
							HX_STACK_LINE(965)
							Float y = (::openfl::display::DrawCommand(command))->__Param(1);		HX_STACK_VAR(y,"y");
							HX_STACK_LINE(965)
							Float x = (::openfl::display::DrawCommand(command))->__Param(0);		HX_STACK_VAR(x,"x");
							HX_STACK_LINE(983)
							{
								HX_STACK_LINE(985)
								hx::SubEq(x,offsetX);
								HX_STACK_LINE(986)
								hx::SubEq(y,offsetY);
								HX_STACK_LINE(988)
								Float kappa = .5522848;		HX_STACK_VAR(kappa,"kappa");
								HX_STACK_LINE(989)
								Float ox = ((Float(width) / Float((int)2)) * kappa);		HX_STACK_VAR(ox,"ox");
								HX_STACK_LINE(990)
								Float oy = ((Float(height) / Float((int)2)) * kappa);		HX_STACK_VAR(oy,"oy");
								HX_STACK_LINE(991)
								Float xe = (x + width);		HX_STACK_VAR(xe,"xe");
								HX_STACK_LINE(992)
								Float ye = (y + height);		HX_STACK_VAR(ye,"ye");
								HX_STACK_LINE(993)
								Float xm = (x + (Float(width) / Float((int)2)));		HX_STACK_VAR(xm,"xm");
								HX_STACK_LINE(994)
								Float ym = (y + (Float(height) / Float((int)2)));		HX_STACK_VAR(ym,"ym");
								HX_STACK_LINE(998)
								context->moveTo(x,ym);
								HX_STACK_LINE(999)
								context->bezierCurveTo(x,(ym - oy),(xm - ox),y,xm,y);
								HX_STACK_LINE(1000)
								context->bezierCurveTo((xm + ox),y,xe,(ym - oy),xe,ym);
								HX_STACK_LINE(1001)
								context->bezierCurveTo(xe,(ym + oy),(xm + ox),ye,xm,ye);
								HX_STACK_LINE(1002)
								context->bezierCurveTo((xm - ox),ye,x,(ym + oy),x,ym);
							}
						}
						;break;
						case (int)7: {
							HX_STACK_LINE(965)
							Float height = (::openfl::display::DrawCommand(command))->__Param(3);		HX_STACK_VAR(height,"height");
							HX_STACK_LINE(965)
							Float width = (::openfl::display::DrawCommand(command))->__Param(2);		HX_STACK_VAR(width,"width");
							HX_STACK_LINE(965)
							Float y = (::openfl::display::DrawCommand(command))->__Param(1);		HX_STACK_VAR(y,"y");
							HX_STACK_LINE(965)
							Float x = (::openfl::display::DrawCommand(command))->__Param(0);		HX_STACK_VAR(x,"x");
							HX_STACK_LINE(1007)
							context->rect((x - offsetX),(y - offsetY),width,height);
						}
						;break;
						case (int)8: {
							HX_STACK_LINE(965)
							Float ry = (::openfl::display::DrawCommand(command))->__Param(5);		HX_STACK_VAR(ry,"ry");
							HX_STACK_LINE(965)
							Float rx = (::openfl::display::DrawCommand(command))->__Param(4);		HX_STACK_VAR(rx,"rx");
							HX_STACK_LINE(965)
							Float height = (::openfl::display::DrawCommand(command))->__Param(3);		HX_STACK_VAR(height,"height");
							HX_STACK_LINE(965)
							Float width = (::openfl::display::DrawCommand(command))->__Param(2);		HX_STACK_VAR(width,"width");
							HX_STACK_LINE(965)
							Float y = (::openfl::display::DrawCommand(command))->__Param(1);		HX_STACK_VAR(y,"y");
							HX_STACK_LINE(965)
							Float x = (::openfl::display::DrawCommand(command))->__Param(0);		HX_STACK_VAR(x,"x");
							HX_STACK_LINE(1011)
							::openfl::_internal::renderer::canvas::CanvasGraphics_obj::drawRoundRect((x - offsetX),(y - offsetY),width,height,rx,ry);
						}
						;break;
						case (int)15: {
							HX_STACK_LINE(965)
							Float y = (::openfl::display::DrawCommand(command))->__Param(1);		HX_STACK_VAR(y,"y");
							HX_STACK_LINE(965)
							Float x = (::openfl::display::DrawCommand(command))->__Param(0);		HX_STACK_VAR(x,"x");
							HX_STACK_LINE(1013)
							{
								HX_STACK_LINE(1015)
								context->lineTo((x - offsetX),(y - offsetY));
								HX_STACK_LINE(1016)
								positionX = x;
								HX_STACK_LINE(1017)
								positionY = y;
							}
						}
						;break;
						case (int)16: {
							HX_STACK_LINE(965)
							Float y = (::openfl::display::DrawCommand(command))->__Param(1);		HX_STACK_VAR(y,"y");
							HX_STACK_LINE(965)
							Float x = (::openfl::display::DrawCommand(command))->__Param(0);		HX_STACK_VAR(x,"x");
							HX_STACK_LINE(1019)
							{
								HX_STACK_LINE(1021)
								context->moveTo((x - offsetX),(y - offsetY));
								HX_STACK_LINE(1022)
								positionX = x;
								HX_STACK_LINE(1023)
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


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CanvasGraphics_obj,renderMask,(void))


CanvasGraphics_obj::CanvasGraphics_obj()
{
}

Dynamic CanvasGraphics_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"SIN45") ) { return SIN45; }
		if (HX_FIELD_EQ(inName,"TAN22") ) { return TAN22; }
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
	case 12:
		if (HX_FIELD_EQ(inName,"bitmapStroke") ) { return bitmapStroke; }
		if (HX_FIELD_EQ(inName,"bitmapRepeat") ) { return bitmapRepeat; }
		if (HX_FIELD_EQ(inName,"fillCommands") ) { return fillCommands; }
		if (HX_FIELD_EQ(inName,"normalizeUVT") ) { return normalizeUVT_dyn(); }
		if (HX_FIELD_EQ(inName,"playCommands") ) { return playCommands_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"pendingMatrix") ) { return pendingMatrix; }
		if (HX_FIELD_EQ(inName,"drawRoundRect") ) { return drawRoundRect_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"strokeCommands") ) { return strokeCommands; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"createBitmapFill") ) { return createBitmapFill_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"inversePendingMatrix") ) { return inversePendingMatrix; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"createGradientPattern") ) { return createGradientPattern_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"createTempPatternCanvas") ) { return createTempPatternCanvas_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic CanvasGraphics_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"SIN45") ) { SIN45=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TAN22") ) { TAN22=inValue.Cast< Float >(); return inValue; }
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
	case 12:
		if (HX_FIELD_EQ(inName,"bitmapStroke") ) { bitmapStroke=inValue.Cast< ::openfl::display::BitmapData >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bitmapRepeat") ) { bitmapRepeat=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fillCommands") ) { fillCommands=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"pendingMatrix") ) { pendingMatrix=inValue.Cast< ::openfl::geom::Matrix >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"strokeCommands") ) { strokeCommands=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"inversePendingMatrix") ) { inversePendingMatrix=inValue.Cast< ::openfl::geom::Matrix >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CanvasGraphics_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("SIN45"),
	HX_CSTRING("TAN22"),
	HX_CSTRING("bitmapFill"),
	HX_CSTRING("bitmapStroke"),
	HX_CSTRING("bitmapRepeat"),
	HX_CSTRING("bounds"),
	HX_CSTRING("fillCommands"),
	HX_CSTRING("graphics"),
	HX_CSTRING("hasFill"),
	HX_CSTRING("hasStroke"),
	HX_CSTRING("inversePendingMatrix"),
	HX_CSTRING("pendingMatrix"),
	HX_CSTRING("strokeCommands"),
	HX_CSTRING("createBitmapFill"),
	HX_CSTRING("createTempPatternCanvas"),
	HX_CSTRING("endFill"),
	HX_CSTRING("endStroke"),
	HX_CSTRING("closePath"),
	HX_CSTRING("drawRoundRect"),
	HX_CSTRING("isCCW"),
	HX_CSTRING("normalizeUVT"),
	HX_CSTRING("playCommands"),
	HX_CSTRING("createGradientPattern"),
	HX_CSTRING("render"),
	HX_CSTRING("renderMask"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CanvasGraphics_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(CanvasGraphics_obj::SIN45,"SIN45");
	HX_MARK_MEMBER_NAME(CanvasGraphics_obj::TAN22,"TAN22");
	HX_MARK_MEMBER_NAME(CanvasGraphics_obj::bitmapFill,"bitmapFill");
	HX_MARK_MEMBER_NAME(CanvasGraphics_obj::bitmapStroke,"bitmapStroke");
	HX_MARK_MEMBER_NAME(CanvasGraphics_obj::bitmapRepeat,"bitmapRepeat");
	HX_MARK_MEMBER_NAME(CanvasGraphics_obj::bounds,"bounds");
	HX_MARK_MEMBER_NAME(CanvasGraphics_obj::fillCommands,"fillCommands");
	HX_MARK_MEMBER_NAME(CanvasGraphics_obj::graphics,"graphics");
	HX_MARK_MEMBER_NAME(CanvasGraphics_obj::hasFill,"hasFill");
	HX_MARK_MEMBER_NAME(CanvasGraphics_obj::hasStroke,"hasStroke");
	HX_MARK_MEMBER_NAME(CanvasGraphics_obj::inversePendingMatrix,"inversePendingMatrix");
	HX_MARK_MEMBER_NAME(CanvasGraphics_obj::pendingMatrix,"pendingMatrix");
	HX_MARK_MEMBER_NAME(CanvasGraphics_obj::strokeCommands,"strokeCommands");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CanvasGraphics_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(CanvasGraphics_obj::SIN45,"SIN45");
	HX_VISIT_MEMBER_NAME(CanvasGraphics_obj::TAN22,"TAN22");
	HX_VISIT_MEMBER_NAME(CanvasGraphics_obj::bitmapFill,"bitmapFill");
	HX_VISIT_MEMBER_NAME(CanvasGraphics_obj::bitmapStroke,"bitmapStroke");
	HX_VISIT_MEMBER_NAME(CanvasGraphics_obj::bitmapRepeat,"bitmapRepeat");
	HX_VISIT_MEMBER_NAME(CanvasGraphics_obj::bounds,"bounds");
	HX_VISIT_MEMBER_NAME(CanvasGraphics_obj::fillCommands,"fillCommands");
	HX_VISIT_MEMBER_NAME(CanvasGraphics_obj::graphics,"graphics");
	HX_VISIT_MEMBER_NAME(CanvasGraphics_obj::hasFill,"hasFill");
	HX_VISIT_MEMBER_NAME(CanvasGraphics_obj::hasStroke,"hasStroke");
	HX_VISIT_MEMBER_NAME(CanvasGraphics_obj::inversePendingMatrix,"inversePendingMatrix");
	HX_VISIT_MEMBER_NAME(CanvasGraphics_obj::pendingMatrix,"pendingMatrix");
	HX_VISIT_MEMBER_NAME(CanvasGraphics_obj::strokeCommands,"strokeCommands");
};

#endif

Class CanvasGraphics_obj::__mClass;

void CanvasGraphics_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl._internal.renderer.canvas.CanvasGraphics"), hx::TCanCast< CanvasGraphics_obj> ,sStaticFields,sMemberFields,
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

void CanvasGraphics_obj::__boot()
{
	SIN45= 0.70710678118654752440084436210485;
	TAN22= 0.4142135623730950488016887242097;
}

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace canvas
