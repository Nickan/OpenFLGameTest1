#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_graphics_Image
#include <lime/graphics/Image.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo_Cairo
#include <lime/graphics/cairo/Cairo.h>
#endif
#ifndef INCLUDED_openfl_Lib
#include <openfl/Lib.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_DrawPath
#include <openfl/_internal/renderer/opengl/utils/DrawPath.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_FilterTexture
#include <openfl/_internal/renderer/opengl/utils/FilterTexture.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_GLStack
#include <openfl/_internal/renderer/opengl/utils/GLStack.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_CapsStyle
#include <openfl/display/CapsStyle.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
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
#ifndef INCLUDED_openfl_display_GraphicsPathWinding
#include <openfl/display/GraphicsPathWinding.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_IGraphicsData
#include <openfl/display/IGraphicsData.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
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
#ifndef INCLUDED_openfl_display_MovieClip
#include <openfl/display/MovieClip.h>
#endif
#ifndef INCLUDED_openfl_display_SpreadMethod
#include <openfl/display/SpreadMethod.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_display_Tilesheet
#include <openfl/display/Tilesheet.h>
#endif
#ifndef INCLUDED_openfl_display_TriangleCulling
#include <openfl/display/TriangleCulling.h>
#endif
#ifndef INCLUDED_openfl_errors_ArgumentError
#include <openfl/errors/ArgumentError.h>
#endif
#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
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
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
namespace openfl{
namespace display{

Void Graphics_obj::__construct()
{
HX_STACK_FRAME("openfl.display.Graphics","new",0x7fd846a7,"openfl.display.Graphics.new","openfl/display/Graphics.hx",37,0x8d299ce7)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(61)
	this->__visible = true;
	HX_STACK_LINE(54)
	this->__glStack = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(53)
	this->__dirty = true;
	HX_STACK_LINE(52)
	this->__commands = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(76)
	Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(76)
	this->__commands = _g;
	HX_STACK_LINE(77)
	this->__halfStrokeWidth = (int)0;
	HX_STACK_LINE(78)
	this->__positionX = (int)0;
	HX_STACK_LINE(79)
	this->__positionY = (int)0;
	HX_STACK_LINE(80)
	this->__hardware = true;
}
;
	return null();
}

//Graphics_obj::~Graphics_obj() { }

Dynamic Graphics_obj::__CreateEmpty() { return  new Graphics_obj; }
hx::ObjectPtr< Graphics_obj > Graphics_obj::__new()
{  hx::ObjectPtr< Graphics_obj > result = new Graphics_obj();
	result->__construct();
	return result;}

Dynamic Graphics_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Graphics_obj > result = new Graphics_obj();
	result->__construct();
	return result;}

Void Graphics_obj::beginBitmapFill( ::openfl::display::BitmapData bitmap,::openfl::geom::Matrix matrix,hx::Null< bool >  __o_repeat,hx::Null< bool >  __o_smooth){
bool repeat = __o_repeat.Default(true);
bool smooth = __o_smooth.Default(false);
	HX_STACK_FRAME("openfl.display.Graphics","beginBitmapFill",0x31c80e62,"openfl.display.Graphics.beginBitmapFill","openfl/display/Graphics.hx",125,0x8d299ce7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(bitmap,"bitmap")
	HX_STACK_ARG(matrix,"matrix")
	HX_STACK_ARG(repeat,"repeat")
	HX_STACK_ARG(smooth,"smooth")
{
		HX_STACK_LINE(127)
		::openfl::geom::Matrix _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(127)
		if (((matrix != null()))){
			HX_STACK_LINE(127)
			_g = ::openfl::geom::Matrix_obj::__new(matrix->a,matrix->b,matrix->c,matrix->d,matrix->tx,matrix->ty);
		}
		else{
			HX_STACK_LINE(127)
			_g = null();
		}
		HX_STACK_LINE(127)
		::openfl::display::DrawCommand _g1 = ::openfl::display::DrawCommand_obj::BeginBitmapFill(bitmap,_g,repeat,smooth);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(127)
		this->__commands->push(_g1);
		HX_STACK_LINE(129)
		this->__visible = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Graphics_obj,beginBitmapFill,(void))

Void Graphics_obj::beginFill( hx::Null< int >  __o_color,hx::Null< Float >  __o_alpha){
int color = __o_color.Default(0);
Float alpha = __o_alpha.Default(1);
	HX_STACK_FRAME("openfl.display.Graphics","beginFill",0xf44a92d3,"openfl.display.Graphics.beginFill","openfl/display/Graphics.hx",148,0x8d299ce7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(color,"color")
	HX_STACK_ARG(alpha,"alpha")
{
		HX_STACK_LINE(150)
		::openfl::display::DrawCommand _g = ::openfl::display::DrawCommand_obj::BeginFill((int(color) & int((int)16777215)),alpha);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(150)
		this->__commands->push(_g);
		HX_STACK_LINE(152)
		if (((alpha > (int)0))){
			HX_STACK_LINE(152)
			this->__visible = true;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Graphics_obj,beginFill,(void))

Void Graphics_obj::beginGradientFill( ::openfl::display::GradientType type,Dynamic colors,Dynamic alphas,Dynamic ratios,::openfl::geom::Matrix matrix,::openfl::display::SpreadMethod spreadMethod,::openfl::display::InterpolationMethod interpolationMethod,Dynamic focalPointRatio){
{
		HX_STACK_FRAME("openfl.display.Graphics","beginGradientFill",0x99f380e3,"openfl.display.Graphics.beginGradientFill","openfl/display/Graphics.hx",222,0x8d299ce7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(type,"type")
		HX_STACK_ARG(colors,"colors")
		HX_STACK_ARG(alphas,"alphas")
		HX_STACK_ARG(ratios,"ratios")
		HX_STACK_ARG(matrix,"matrix")
		HX_STACK_ARG(spreadMethod,"spreadMethod")
		HX_STACK_ARG(interpolationMethod,"interpolationMethod")
		HX_STACK_ARG(focalPointRatio,"focalPointRatio")
		HX_STACK_LINE(224)
		::openfl::display::DrawCommand _g = ::openfl::display::DrawCommand_obj::BeginGradientFill(type,colors,alphas,ratios,matrix,spreadMethod,interpolationMethod,focalPointRatio);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(224)
		this->__commands->push(_g);
		HX_STACK_LINE(225)
		this->__hardware = false;
		HX_STACK_LINE(227)
		{
			HX_STACK_LINE(227)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(227)
			while((true)){
				HX_STACK_LINE(227)
				if ((!(((_g1 < alphas->__Field(HX_CSTRING("length"),true)))))){
					HX_STACK_LINE(227)
					break;
				}
				HX_STACK_LINE(227)
				Dynamic alpha = alphas->__GetItem(_g1);		HX_STACK_VAR(alpha,"alpha");
				HX_STACK_LINE(227)
				++(_g1);
				HX_STACK_LINE(229)
				if (((alpha > (int)0))){
					HX_STACK_LINE(231)
					this->__visible = true;
					HX_STACK_LINE(232)
					break;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC8(Graphics_obj,beginGradientFill,(void))

Void Graphics_obj::clear( ){
{
		HX_STACK_FRAME("openfl.display.Graphics","clear",0x0a9f4794,"openfl.display.Graphics.clear","openfl/display/Graphics.hx",246,0x8d299ce7)
		HX_STACK_THIS(this)
		HX_STACK_LINE(248)
		Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(248)
		this->__commands = _g;
		HX_STACK_LINE(249)
		this->__halfStrokeWidth = (int)0;
		HX_STACK_LINE(251)
		if (((this->__bounds != null()))){
			HX_STACK_LINE(253)
			this->set___dirty(true);
			HX_STACK_LINE(254)
			this->__transformDirty = true;
			HX_STACK_LINE(255)
			this->__bounds = null();
		}
		HX_STACK_LINE(259)
		this->__visible = false;
		HX_STACK_LINE(260)
		this->__hardware = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Graphics_obj,clear,(void))

Void Graphics_obj::copyFrom( ::openfl::display::Graphics sourceGraphics){
{
		HX_STACK_FRAME("openfl.display.Graphics","copyFrom",0x0a477418,"openfl.display.Graphics.copyFrom","openfl/display/Graphics.hx",268,0x8d299ce7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(sourceGraphics,"sourceGraphics")
		HX_STACK_LINE(270)
		::openfl::geom::Rectangle _g = sourceGraphics->__bounds->clone();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(270)
		this->__bounds = _g;
		HX_STACK_LINE(271)
		Array< ::Dynamic > _g1 = sourceGraphics->__commands->copy();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(271)
		this->__commands = _g1;
		HX_STACK_LINE(272)
		this->set___dirty(true);
		HX_STACK_LINE(273)
		this->__halfStrokeWidth = sourceGraphics->__halfStrokeWidth;
		HX_STACK_LINE(274)
		this->__positionX = sourceGraphics->__positionX;
		HX_STACK_LINE(275)
		this->__positionY = sourceGraphics->__positionY;
		HX_STACK_LINE(276)
		this->__transformDirty = true;
		HX_STACK_LINE(277)
		this->__visible = sourceGraphics->__visible;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Graphics_obj,copyFrom,(void))

Void Graphics_obj::cubicCurveTo( Float controlX1,Float controlY1,Float controlX2,Float controlY2,Float anchorX,Float anchorY){
{
		HX_STACK_FRAME("openfl.display.Graphics","cubicCurveTo",0x467410b9,"openfl.display.Graphics.cubicCurveTo","openfl/display/Graphics.hx",282,0x8d299ce7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(controlX1,"controlX1")
		HX_STACK_ARG(controlY1,"controlY1")
		HX_STACK_ARG(controlX2,"controlX2")
		HX_STACK_ARG(controlY2,"controlY2")
		HX_STACK_ARG(anchorX,"anchorX")
		HX_STACK_ARG(anchorY,"anchorY")
		HX_STACK_LINE(284)
		this->__inflateBounds((this->__positionX - this->__halfStrokeWidth),(this->__positionY - this->__halfStrokeWidth));
		HX_STACK_LINE(285)
		this->__inflateBounds((this->__positionX + this->__halfStrokeWidth),(this->__positionY + this->__halfStrokeWidth));
		HX_STACK_LINE(288)
		Float ix1;		HX_STACK_VAR(ix1,"ix1");
		HX_STACK_LINE(288)
		Float iy1;		HX_STACK_VAR(iy1,"iy1");
		HX_STACK_LINE(288)
		Float ix2;		HX_STACK_VAR(ix2,"ix2");
		HX_STACK_LINE(288)
		Float iy2;		HX_STACK_VAR(iy2,"iy2");
		HX_STACK_LINE(290)
		ix1 = anchorX;
		HX_STACK_LINE(291)
		ix2 = anchorX;
		HX_STACK_LINE(293)
		if ((!(((bool(((bool((bool((controlX1 < anchorX)) && bool((controlX1 > this->__positionX)))) || bool((bool((controlX1 > anchorX)) && bool((controlX1 < this->__positionX))))))) && bool(((bool((bool((controlX2 < anchorX)) && bool((controlX2 > this->__positionX)))) || bool((bool((controlX2 > anchorX)) && bool((controlX2 < this->__positionX)))))))))))){
			HX_STACK_LINE(295)
			Float u = ((((int)2 * this->__positionX) - ((int)4 * controlX1)) + ((int)2 * controlX2));		HX_STACK_VAR(u,"u");
			HX_STACK_LINE(296)
			Float v = (controlX1 - this->__positionX);		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(297)
			Float w = (((-(this->__positionX) + ((int)3 * controlX1)) + anchorX) - ((int)3 * controlX2));		HX_STACK_VAR(w,"w");
			HX_STACK_LINE(299)
			Float _g = ::Math_obj::sqrt(((u * u) - (((int)4 * v) * w)));		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(299)
			Float _g1 = (-(u) + _g);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(299)
			Float t1 = (Float(_g1) / Float((((int)2 * w))));		HX_STACK_VAR(t1,"t1");
			HX_STACK_LINE(300)
			Float _g2 = ::Math_obj::sqrt(((u * u) - (((int)4 * v) * w)));		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(300)
			Float _g3 = (-(u) - _g2);		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(300)
			Float t2 = (Float(_g3) / Float((((int)2 * w))));		HX_STACK_VAR(t2,"t2");
			HX_STACK_LINE(302)
			if (((bool((t1 > (int)0)) && bool((t1 < (int)1))))){
				HX_STACK_LINE(303)
				Float _g4 = this->__calculateBezierCubicPoint(t1,this->__positionX,controlX1,controlX2,anchorX);		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(303)
				ix1 = _g4;
			}
			HX_STACK_LINE(305)
			if (((bool((t2 > (int)0)) && bool((t2 < (int)1))))){
				HX_STACK_LINE(306)
				Float _g5 = this->__calculateBezierCubicPoint(t2,this->__positionX,controlX1,controlX2,anchorX);		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(306)
				ix2 = _g5;
			}
		}
		HX_STACK_LINE(309)
		iy1 = anchorY;
		HX_STACK_LINE(310)
		iy2 = anchorY;
		HX_STACK_LINE(312)
		if ((!(((bool(((bool((bool((controlY1 < anchorY)) && bool((controlY1 > this->__positionX)))) || bool((bool((controlY1 > anchorY)) && bool((controlY1 < this->__positionX))))))) && bool(((bool((bool((controlY2 < anchorY)) && bool((controlY2 > this->__positionX)))) || bool((bool((controlY2 > anchorY)) && bool((controlY2 < this->__positionX)))))))))))){
			HX_STACK_LINE(314)
			Float u = ((((int)2 * this->__positionX) - ((int)4 * controlY1)) + ((int)2 * controlY2));		HX_STACK_VAR(u,"u");
			HX_STACK_LINE(315)
			Float v = (controlY1 - this->__positionX);		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(316)
			Float w = (((-(this->__positionX) + ((int)3 * controlY1)) + anchorY) - ((int)3 * controlY2));		HX_STACK_VAR(w,"w");
			HX_STACK_LINE(318)
			Float _g6 = ::Math_obj::sqrt(((u * u) - (((int)4 * v) * w)));		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(318)
			Float _g7 = (-(u) + _g6);		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(318)
			Float t1 = (Float(_g7) / Float((((int)2 * w))));		HX_STACK_VAR(t1,"t1");
			HX_STACK_LINE(319)
			Float _g8 = ::Math_obj::sqrt(((u * u) - (((int)4 * v) * w)));		HX_STACK_VAR(_g8,"_g8");
			HX_STACK_LINE(319)
			Float _g9 = (-(u) - _g8);		HX_STACK_VAR(_g9,"_g9");
			HX_STACK_LINE(319)
			Float t2 = (Float(_g9) / Float((((int)2 * w))));		HX_STACK_VAR(t2,"t2");
			HX_STACK_LINE(321)
			if (((bool((t1 > (int)0)) && bool((t1 < (int)1))))){
				HX_STACK_LINE(322)
				Float _g10 = this->__calculateBezierCubicPoint(t1,this->__positionX,controlY1,controlY2,anchorY);		HX_STACK_VAR(_g10,"_g10");
				HX_STACK_LINE(322)
				iy1 = _g10;
			}
			HX_STACK_LINE(324)
			if (((bool((t2 > (int)0)) && bool((t2 < (int)1))))){
				HX_STACK_LINE(325)
				Float _g11 = this->__calculateBezierCubicPoint(t2,this->__positionX,controlY1,controlY2,anchorY);		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(325)
				iy2 = _g11;
			}
		}
		HX_STACK_LINE(328)
		this->__inflateBounds((ix1 - this->__halfStrokeWidth),(iy1 - this->__halfStrokeWidth));
		HX_STACK_LINE(329)
		this->__inflateBounds((ix1 + this->__halfStrokeWidth),(iy1 + this->__halfStrokeWidth));
		HX_STACK_LINE(330)
		this->__inflateBounds((ix2 - this->__halfStrokeWidth),(iy2 - this->__halfStrokeWidth));
		HX_STACK_LINE(331)
		this->__inflateBounds((ix2 + this->__halfStrokeWidth),(iy2 + this->__halfStrokeWidth));
		HX_STACK_LINE(333)
		this->__positionX = anchorX;
		HX_STACK_LINE(334)
		this->__positionY = anchorY;
		HX_STACK_LINE(336)
		::openfl::display::DrawCommand _g12 = ::openfl::display::DrawCommand_obj::CubicCurveTo(controlX1,controlY1,controlX2,controlY2,anchorX,anchorY);		HX_STACK_VAR(_g12,"_g12");
		HX_STACK_LINE(336)
		this->__commands->push(_g12);
		HX_STACK_LINE(338)
		this->__hardware = false;
		HX_STACK_LINE(339)
		this->set___dirty(true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(Graphics_obj,cubicCurveTo,(void))

Void Graphics_obj::curveTo( Float controlX,Float controlY,Float anchorX,Float anchorY){
{
		HX_STACK_FRAME("openfl.display.Graphics","curveTo",0x89f305d1,"openfl.display.Graphics.curveTo","openfl/display/Graphics.hx",374,0x8d299ce7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(controlX,"controlX")
		HX_STACK_ARG(controlY,"controlY")
		HX_STACK_ARG(anchorX,"anchorX")
		HX_STACK_ARG(anchorY,"anchorY")
		HX_STACK_LINE(376)
		this->__inflateBounds((this->__positionX - this->__halfStrokeWidth),(this->__positionY - this->__halfStrokeWidth));
		HX_STACK_LINE(377)
		this->__inflateBounds((this->__positionX + this->__halfStrokeWidth),(this->__positionY + this->__halfStrokeWidth));
		HX_STACK_LINE(380)
		Float ix;		HX_STACK_VAR(ix,"ix");
		HX_STACK_LINE(380)
		Float iy;		HX_STACK_VAR(iy,"iy");
		HX_STACK_LINE(382)
		if (((bool((bool((controlX < anchorX)) && bool((controlX > this->__positionX)))) || bool((bool((controlX > anchorX)) && bool((controlX < this->__positionX))))))){
			HX_STACK_LINE(384)
			ix = anchorX;
		}
		else{
			HX_STACK_LINE(388)
			Float tx = (Float(((this->__positionX - controlX))) / Float((((this->__positionX - ((int)2 * controlX)) + anchorX))));		HX_STACK_VAR(tx,"tx");
			HX_STACK_LINE(389)
			Float _g = this->__calculateBezierQuadPoint(tx,this->__positionX,controlX,anchorX);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(389)
			ix = _g;
		}
		HX_STACK_LINE(392)
		if (((bool((bool((controlY < anchorY)) && bool((controlY > this->__positionY)))) || bool((bool((controlY > anchorY)) && bool((controlY < this->__positionY))))))){
			HX_STACK_LINE(394)
			iy = anchorY;
		}
		else{
			HX_STACK_LINE(398)
			Float ty = (Float(((this->__positionY - controlY))) / Float((((this->__positionY - ((int)2 * controlY)) + anchorY))));		HX_STACK_VAR(ty,"ty");
			HX_STACK_LINE(399)
			Float _g1 = this->__calculateBezierQuadPoint(ty,this->__positionY,controlY,anchorY);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(399)
			iy = _g1;
		}
		HX_STACK_LINE(402)
		this->__inflateBounds((ix - this->__halfStrokeWidth),(iy - this->__halfStrokeWidth));
		HX_STACK_LINE(403)
		this->__inflateBounds((ix + this->__halfStrokeWidth),(iy + this->__halfStrokeWidth));
		HX_STACK_LINE(405)
		this->__positionX = anchorX;
		HX_STACK_LINE(406)
		this->__positionY = anchorY;
		HX_STACK_LINE(408)
		::openfl::display::DrawCommand _g2 = ::openfl::display::DrawCommand_obj::CurveTo(controlX,controlY,anchorX,anchorY);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(408)
		this->__commands->push(_g2);
		HX_STACK_LINE(410)
		this->__hardware = false;
		HX_STACK_LINE(411)
		this->set___dirty(true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Graphics_obj,curveTo,(void))

Void Graphics_obj::drawCircle( Float x,Float y,Float radius){
{
		HX_STACK_FRAME("openfl.display.Graphics","drawCircle",0xee64ddcd,"openfl.display.Graphics.drawCircle","openfl/display/Graphics.hx",430,0x8d299ce7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(radius,"radius")
		HX_STACK_LINE(432)
		if (((radius <= (int)0))){
			HX_STACK_LINE(432)
			return null();
		}
		HX_STACK_LINE(434)
		this->__inflateBounds(((x - radius) - this->__halfStrokeWidth),((y - radius) - this->__halfStrokeWidth));
		HX_STACK_LINE(435)
		this->__inflateBounds(((x + radius) + this->__halfStrokeWidth),((y + radius) + this->__halfStrokeWidth));
		HX_STACK_LINE(437)
		::openfl::display::DrawCommand _g = ::openfl::display::DrawCommand_obj::DrawCircle(x,y,radius);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(437)
		this->__commands->push(_g);
		HX_STACK_LINE(439)
		this->__hardware = false;
		HX_STACK_LINE(440)
		this->set___dirty(true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Graphics_obj,drawCircle,(void))

Void Graphics_obj::drawEllipse( Float x,Float y,Float width,Float height){
{
		HX_STACK_FRAME("openfl.display.Graphics","drawEllipse",0xbfad1a81,"openfl.display.Graphics.drawEllipse","openfl/display/Graphics.hx",461,0x8d299ce7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_LINE(463)
		if (((bool((width <= (int)0)) || bool((height <= (int)0))))){
			HX_STACK_LINE(463)
			return null();
		}
		HX_STACK_LINE(465)
		this->__inflateBounds((x - this->__halfStrokeWidth),(y - this->__halfStrokeWidth));
		HX_STACK_LINE(466)
		this->__inflateBounds(((x + width) + this->__halfStrokeWidth),((y + height) + this->__halfStrokeWidth));
		HX_STACK_LINE(468)
		::openfl::display::DrawCommand _g = ::openfl::display::DrawCommand_obj::DrawEllipse(x,y,width,height);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(468)
		this->__commands->push(_g);
		HX_STACK_LINE(470)
		this->__hardware = false;
		HX_STACK_LINE(471)
		this->set___dirty(true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Graphics_obj,drawEllipse,(void))

Void Graphics_obj::drawGraphicsData( Array< ::openfl::display::IGraphicsData > graphicsData){
{
		HX_STACK_FRAME("openfl.display.Graphics","drawGraphicsData",0x60ea9412,"openfl.display.Graphics.drawGraphicsData","openfl/display/Graphics.hx",490,0x8d299ce7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(graphicsData,"graphicsData")
		HX_STACK_LINE(490)
		::openfl::Lib_obj::notImplemented(HX_CSTRING("Graphics.drawGraphicsData"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Graphics_obj,drawGraphicsData,(void))

Void Graphics_obj::drawPath( Array< int > commands,Array< Float > data,::openfl::display::GraphicsPathWinding winding){
{
		HX_STACK_FRAME("openfl.display.Graphics","drawPath",0xa0a1f822,"openfl.display.Graphics.drawPath","openfl/display/Graphics.hx",540,0x8d299ce7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(commands,"commands")
		HX_STACK_ARG(data,"data")
		HX_STACK_ARG(winding,"winding")
		HX_STACK_LINE(542)
		int dataIndex = (int)0;		HX_STACK_VAR(dataIndex,"dataIndex");
		HX_STACK_LINE(544)
		{
			HX_STACK_LINE(544)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(544)
			while((true)){
				HX_STACK_LINE(544)
				if ((!(((_g < commands->length))))){
					HX_STACK_LINE(544)
					break;
				}
				HX_STACK_LINE(544)
				Dynamic command = commands->__get(_g);		HX_STACK_VAR(command,"command");
				HX_STACK_LINE(544)
				++(_g);
				HX_STACK_LINE(546)
				switch( (int)(command)){
					case (int)1: {
						HX_STACK_LINE(550)
						this->moveTo(data->__get(dataIndex),data->__get((dataIndex + (int)1)));
						HX_STACK_LINE(551)
						hx::AddEq(dataIndex,(int)2);
					}
					;break;
					case (int)2: {
						HX_STACK_LINE(555)
						this->lineTo(data->__get(dataIndex),data->__get((dataIndex + (int)1)));
						HX_STACK_LINE(556)
						hx::AddEq(dataIndex,(int)2);
					}
					;break;
					case (int)3: {
						HX_STACK_LINE(560)
						this->curveTo(data->__get(dataIndex),data->__get((dataIndex + (int)1)),data->__get((dataIndex + (int)2)),data->__get((dataIndex + (int)3)));
						HX_STACK_LINE(561)
						hx::AddEq(dataIndex,(int)4);
					}
					;break;
					case (int)6: {
						HX_STACK_LINE(565)
						this->cubicCurveTo(data->__get(dataIndex),data->__get((dataIndex + (int)1)),data->__get((dataIndex + (int)2)),data->__get((dataIndex + (int)3)),data->__get((dataIndex + (int)4)),data->__get((dataIndex + (int)5)));
						HX_STACK_LINE(566)
						hx::AddEq(dataIndex,(int)6);
					}
					;break;
					default: {
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Graphics_obj,drawPath,(void))

Void Graphics_obj::drawRect( Float x,Float y,Float width,Float height){
{
		HX_STACK_FRAME("openfl.display.Graphics","drawRect",0xa1f75fa1,"openfl.display.Graphics.drawRect","openfl/display/Graphics.hx",594,0x8d299ce7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_LINE(596)
		if (((bool((width <= (int)0)) || bool((height <= (int)0))))){
			HX_STACK_LINE(596)
			return null();
		}
		HX_STACK_LINE(598)
		this->__inflateBounds((x - this->__halfStrokeWidth),(y - this->__halfStrokeWidth));
		HX_STACK_LINE(599)
		this->__inflateBounds(((x + width) + this->__halfStrokeWidth),((y + height) + this->__halfStrokeWidth));
		HX_STACK_LINE(601)
		::openfl::display::DrawCommand _g = ::openfl::display::DrawCommand_obj::DrawRect(x,y,width,height);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(601)
		this->__commands->push(_g);
		HX_STACK_LINE(603)
		this->set___dirty(true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Graphics_obj,drawRect,(void))

Void Graphics_obj::drawRoundRect( Float x,Float y,Float width,Float height,Float rx,hx::Null< Float >  __o_ry){
Float ry = __o_ry.Default(-1);
	HX_STACK_FRAME("openfl.display.Graphics","drawRoundRect",0xb24e78f5,"openfl.display.Graphics.drawRoundRect","openfl/display/Graphics.hx",634,0x8d299ce7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(width,"width")
	HX_STACK_ARG(height,"height")
	HX_STACK_ARG(rx,"rx")
	HX_STACK_ARG(ry,"ry")
{
		HX_STACK_LINE(636)
		if (((bool((width <= (int)0)) || bool((height <= (int)0))))){
			HX_STACK_LINE(636)
			return null();
		}
		HX_STACK_LINE(638)
		this->__inflateBounds((x - this->__halfStrokeWidth),(y - this->__halfStrokeWidth));
		HX_STACK_LINE(639)
		this->__inflateBounds(((x + width) + this->__halfStrokeWidth),((y + height) + this->__halfStrokeWidth));
		HX_STACK_LINE(641)
		::openfl::display::DrawCommand _g = ::openfl::display::DrawCommand_obj::DrawRoundRect(x,y,width,height,rx,ry);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(641)
		this->__commands->push(_g);
		HX_STACK_LINE(643)
		this->__hardware = false;
		HX_STACK_LINE(644)
		this->set___dirty(true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(Graphics_obj,drawRoundRect,(void))

Void Graphics_obj::drawRoundRectComplex( Float x,Float y,Float width,Float height,Float topLeftRadius,Float topRightRadius,Float bottomLeftRadius,Float bottomRightRadius){
{
		HX_STACK_FRAME("openfl.display.Graphics","drawRoundRectComplex",0x06fa4dbb,"openfl.display.Graphics.drawRoundRectComplex","openfl/display/Graphics.hx",651,0x8d299ce7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_ARG(topLeftRadius,"topLeftRadius")
		HX_STACK_ARG(topRightRadius,"topRightRadius")
		HX_STACK_ARG(bottomLeftRadius,"bottomLeftRadius")
		HX_STACK_ARG(bottomRightRadius,"bottomRightRadius")
		HX_STACK_LINE(651)
		::openfl::Lib_obj::notImplemented(HX_CSTRING("Graphics.drawRoundRectComplex"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC8(Graphics_obj,drawRoundRectComplex,(void))

Void Graphics_obj::drawTiles( ::openfl::display::Tilesheet sheet,Array< Float > tileData,hx::Null< bool >  __o_smooth,hx::Null< int >  __o_flags,hx::Null< int >  __o_count){
bool smooth = __o_smooth.Default(false);
int flags = __o_flags.Default(0);
int count = __o_count.Default(-1);
	HX_STACK_FRAME("openfl.display.Graphics","drawTiles",0x3ff51868,"openfl.display.Graphics.drawTiles","openfl/display/Graphics.hx",656,0x8d299ce7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(sheet,"sheet")
	HX_STACK_ARG(tileData,"tileData")
	HX_STACK_ARG(smooth,"smooth")
	HX_STACK_ARG(flags,"flags")
	HX_STACK_ARG(count,"count")
{
		HX_STACK_LINE(661)
		this->__inflateBounds((int)0,(int)0);
		HX_STACK_LINE(662)
		this->__inflateBounds(::openfl::Lib_obj::current->stage->stageWidth,::openfl::Lib_obj::current->stage->stageHeight);
		HX_STACK_LINE(664)
		::openfl::display::DrawCommand _g = ::openfl::display::DrawCommand_obj::DrawTiles(sheet,tileData,smooth,flags,count);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(664)
		this->__commands->push(_g);
		HX_STACK_LINE(666)
		this->set___dirty(true);
		HX_STACK_LINE(667)
		this->__visible = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(Graphics_obj,drawTiles,(void))

Void Graphics_obj::drawTriangles( Array< Float > vertices,Array< int > indices,Array< Float > uvtData,::openfl::display::TriangleCulling culling,Array< int > colors,hx::Null< int >  __o_blendMode){
int blendMode = __o_blendMode.Default(0);
	HX_STACK_FRAME("openfl.display.Graphics","drawTriangles",0xae0bf90e,"openfl.display.Graphics.drawTriangles","openfl/display/Graphics.hx",690,0x8d299ce7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(vertices,"vertices")
	HX_STACK_ARG(indices,"indices")
	HX_STACK_ARG(uvtData,"uvtData")
	HX_STACK_ARG(culling,"culling")
	HX_STACK_ARG(colors,"colors")
	HX_STACK_ARG(blendMode,"blendMode")
{
		HX_STACK_LINE(692)
		int vlen = ::Std_obj::_int((Float(vertices->length) / Float((int)2)));		HX_STACK_VAR(vlen,"vlen");
		HX_STACK_LINE(694)
		if (((culling == null()))){
			HX_STACK_LINE(695)
			culling = ::openfl::display::TriangleCulling_obj::NONE;
		}
		HX_STACK_LINE(698)
		if (((indices == null()))){
			HX_STACK_LINE(699)
			if (((hx::Mod(vlen,(int)3) != (int)0))){
				HX_STACK_LINE(700)
				HX_STACK_DO_THROW(::openfl::errors::ArgumentError_obj::__new(HX_CSTRING("Not enough vertices to close a triangle.")));
			}
			HX_STACK_LINE(702)
			Array< int > _g1;		HX_STACK_VAR(_g1,"_g1");
			struct _Function_2_1{
				inline static Array< int > Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/display/Graphics.hx",702,0x8d299ce7)
					{
						HX_STACK_LINE(702)
						Array< int > this1;		HX_STACK_VAR(this1,"this1");
						HX_STACK_LINE(702)
						Array< int > _g = Array_obj< int >::__new()->__SetSizeExact(null());		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(702)
						this1 = _g;
						HX_STACK_LINE(702)
						return this1;
					}
					return null();
				}
			};
			HX_STACK_LINE(702)
			_g1 = _Function_2_1::Block();
			HX_STACK_LINE(702)
			indices = _g1;
			HX_STACK_LINE(704)
			{
				HX_STACK_LINE(704)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(704)
				while((true)){
					HX_STACK_LINE(704)
					if ((!(((_g < vlen))))){
						HX_STACK_LINE(704)
						break;
					}
					HX_STACK_LINE(704)
					int i = (_g)++;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(705)
					indices->push(i);
				}
			}
		}
		HX_STACK_LINE(709)
		this->__inflateBounds((int)0,(int)0);
		HX_STACK_LINE(711)
		Float tmpx = ::Math_obj::NEGATIVE_INFINITY;		HX_STACK_VAR(tmpx,"tmpx");
		HX_STACK_LINE(712)
		Float tmpy = ::Math_obj::NEGATIVE_INFINITY;		HX_STACK_VAR(tmpy,"tmpy");
		HX_STACK_LINE(713)
		Float maxX = ::Math_obj::NEGATIVE_INFINITY;		HX_STACK_VAR(maxX,"maxX");
		HX_STACK_LINE(714)
		Float maxY = ::Math_obj::NEGATIVE_INFINITY;		HX_STACK_VAR(maxY,"maxY");
		HX_STACK_LINE(716)
		{
			HX_STACK_LINE(716)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(716)
			while((true)){
				HX_STACK_LINE(716)
				if ((!(((_g < vlen))))){
					HX_STACK_LINE(716)
					break;
				}
				HX_STACK_LINE(716)
				int i = (_g)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(717)
				tmpx = vertices->__get((i * (int)2));
				HX_STACK_LINE(718)
				tmpy = vertices->__get(((i * (int)2) + (int)1));
				HX_STACK_LINE(719)
				if (((maxX < tmpx))){
					HX_STACK_LINE(719)
					maxX = tmpx;
				}
				HX_STACK_LINE(720)
				if (((maxY < tmpy))){
					HX_STACK_LINE(720)
					maxY = tmpy;
				}
			}
		}
		HX_STACK_LINE(723)
		this->__inflateBounds(maxX,maxY);
		HX_STACK_LINE(724)
		::openfl::display::DrawCommand _g2 = ::openfl::display::DrawCommand_obj::DrawTriangles(vertices,indices,uvtData,culling,colors,blendMode);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(724)
		this->__commands->push(_g2);
		HX_STACK_LINE(725)
		this->set___dirty(true);
		HX_STACK_LINE(726)
		this->__visible = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(Graphics_obj,drawTriangles,(void))

Void Graphics_obj::endFill( ){
{
		HX_STACK_FRAME("openfl.display.Graphics","endFill",0xe14b2dc5,"openfl.display.Graphics.endFill","openfl/display/Graphics.hx",744,0x8d299ce7)
		HX_STACK_THIS(this)
		HX_STACK_LINE(744)
		this->__commands->push(::openfl::display::DrawCommand_obj::EndFill);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Graphics_obj,endFill,(void))

Void Graphics_obj::lineBitmapStyle( ::openfl::display::BitmapData bitmap,::openfl::geom::Matrix matrix,hx::Null< bool >  __o_repeat,hx::Null< bool >  __o_smooth){
bool repeat = __o_repeat.Default(true);
bool smooth = __o_smooth.Default(false);
	HX_STACK_FRAME("openfl.display.Graphics","lineBitmapStyle",0x0ce183f5,"openfl.display.Graphics.lineBitmapStyle","openfl/display/Graphics.hx",778,0x8d299ce7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(bitmap,"bitmap")
	HX_STACK_ARG(matrix,"matrix")
	HX_STACK_ARG(repeat,"repeat")
	HX_STACK_ARG(smooth,"smooth")
{
		HX_STACK_LINE(780)
		::openfl::geom::Matrix _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(780)
		if (((matrix != null()))){
			HX_STACK_LINE(780)
			_g = ::openfl::geom::Matrix_obj::__new(matrix->a,matrix->b,matrix->c,matrix->d,matrix->tx,matrix->ty);
		}
		else{
			HX_STACK_LINE(780)
			_g = null();
		}
		HX_STACK_LINE(780)
		::openfl::display::DrawCommand _g1 = ::openfl::display::DrawCommand_obj::LineBitmapStyle(bitmap,_g,repeat,smooth);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(780)
		this->__commands->push(_g1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Graphics_obj,lineBitmapStyle,(void))

Void Graphics_obj::lineGradientStyle( ::openfl::display::GradientType type,Dynamic colors,Dynamic alphas,Dynamic ratios,::openfl::geom::Matrix matrix,::openfl::display::SpreadMethod spreadMethod,::openfl::display::InterpolationMethod interpolationMethod,Dynamic focalPointRatio){
{
		HX_STACK_FRAME("openfl.display.Graphics","lineGradientStyle",0x2de26914,"openfl.display.Graphics.lineGradientStyle","openfl/display/Graphics.hx",837,0x8d299ce7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(type,"type")
		HX_STACK_ARG(colors,"colors")
		HX_STACK_ARG(alphas,"alphas")
		HX_STACK_ARG(ratios,"ratios")
		HX_STACK_ARG(matrix,"matrix")
		HX_STACK_ARG(spreadMethod,"spreadMethod")
		HX_STACK_ARG(interpolationMethod,"interpolationMethod")
		HX_STACK_ARG(focalPointRatio,"focalPointRatio")
		HX_STACK_LINE(839)
		::openfl::display::DrawCommand _g = ::openfl::display::DrawCommand_obj::LineGradientStyle(type,colors,alphas,ratios,matrix,spreadMethod,interpolationMethod,focalPointRatio);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(839)
		this->__commands->push(_g);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC8(Graphics_obj,lineGradientStyle,(void))

Void Graphics_obj::lineStyle( Dynamic thickness,Dynamic color,Dynamic alpha,Dynamic pixelHinting,::openfl::display::LineScaleMode scaleMode,::openfl::display::CapsStyle caps,::openfl::display::JointStyle joints,Dynamic miterLimit){
{
		HX_STACK_FRAME("openfl.display.Graphics","lineStyle",0x32cd8e24,"openfl.display.Graphics.lineStyle","openfl/display/Graphics.hx",983,0x8d299ce7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(thickness,"thickness")
		HX_STACK_ARG(color,"color")
		HX_STACK_ARG(alpha,"alpha")
		HX_STACK_ARG(pixelHinting,"pixelHinting")
		HX_STACK_ARG(scaleMode,"scaleMode")
		HX_STACK_ARG(caps,"caps")
		HX_STACK_ARG(joints,"joints")
		HX_STACK_ARG(miterLimit,"miterLimit")
		HX_STACK_LINE(985)
		if (((thickness > this->__halfStrokeWidth))){
			HX_STACK_LINE(985)
			this->__halfStrokeWidth = (Float(thickness) / Float((int)2));
		}
		else{
			HX_STACK_LINE(985)
			this->__halfStrokeWidth = this->__halfStrokeWidth;
		}
		HX_STACK_LINE(986)
		::openfl::display::DrawCommand _g = ::openfl::display::DrawCommand_obj::LineStyle(thickness,color,alpha,pixelHinting,scaleMode,caps,joints,miterLimit);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(986)
		this->__commands->push(_g);
		HX_STACK_LINE(988)
		if (((thickness != null()))){
			HX_STACK_LINE(988)
			this->__visible = true;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC8(Graphics_obj,lineStyle,(void))

Void Graphics_obj::lineTo( Float x,Float y){
{
		HX_STACK_FRAME("openfl.display.Graphics","lineTo",0x25b7b6a8,"openfl.display.Graphics.lineTo","openfl/display/Graphics.hx",1009,0x8d299ce7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(1013)
		this->__inflateBounds((this->__positionX - this->__halfStrokeWidth),(this->__positionY - this->__halfStrokeWidth));
		HX_STACK_LINE(1014)
		this->__inflateBounds((this->__positionX + this->__halfStrokeWidth),(this->__positionY + this->__halfStrokeWidth));
		HX_STACK_LINE(1016)
		this->__positionX = x;
		HX_STACK_LINE(1017)
		this->__positionY = y;
		HX_STACK_LINE(1019)
		this->__inflateBounds((this->__positionX - this->__halfStrokeWidth),(this->__positionY - this->__halfStrokeWidth));
		HX_STACK_LINE(1020)
		this->__inflateBounds((this->__positionX + this->__halfStrokeWidth),(this->__positionY + this->__halfStrokeWidth));
		HX_STACK_LINE(1022)
		::openfl::display::DrawCommand _g = ::openfl::display::DrawCommand_obj::LineTo(x,y);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1022)
		this->__commands->push(_g);
		HX_STACK_LINE(1024)
		this->__hardware = false;
		HX_STACK_LINE(1025)
		this->set___dirty(true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Graphics_obj,lineTo,(void))

Void Graphics_obj::moveTo( Float x,Float y){
{
		HX_STACK_FRAME("openfl.display.Graphics","moveTo",0x05c44305,"openfl.display.Graphics.moveTo","openfl/display/Graphics.hx",1040,0x8d299ce7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(1042)
		this->__positionX = x;
		HX_STACK_LINE(1043)
		this->__positionY = y;
		HX_STACK_LINE(1045)
		::openfl::display::DrawCommand _g = ::openfl::display::DrawCommand_obj::MoveTo(x,y);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1045)
		this->__commands->push(_g);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Graphics_obj,moveTo,(void))

Float Graphics_obj::__calculateBezierQuadPoint( Float t,Float p1,Float p2,Float p3){
	HX_STACK_FRAME("openfl.display.Graphics","__calculateBezierQuadPoint",0x2414b8dd,"openfl.display.Graphics.__calculateBezierQuadPoint","openfl/display/Graphics.hx",1049,0x8d299ce7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(t,"t")
	HX_STACK_ARG(p1,"p1")
	HX_STACK_ARG(p2,"p2")
	HX_STACK_ARG(p3,"p3")
	HX_STACK_LINE(1050)
	Float iT = ((int)1 - t);		HX_STACK_VAR(iT,"iT");
	HX_STACK_LINE(1051)
	return ((((iT * iT) * p1) + ((((int)2 * iT) * t) * p2)) + ((t * t) * p3));
}


HX_DEFINE_DYNAMIC_FUNC4(Graphics_obj,__calculateBezierQuadPoint,return )

Float Graphics_obj::__calculateBezierCubicPoint( Float t,Float p1,Float p2,Float p3,Float p4){
	HX_STACK_FRAME("openfl.display.Graphics","__calculateBezierCubicPoint",0xb6679552,"openfl.display.Graphics.__calculateBezierCubicPoint","openfl/display/Graphics.hx",1054,0x8d299ce7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(t,"t")
	HX_STACK_ARG(p1,"p1")
	HX_STACK_ARG(p2,"p2")
	HX_STACK_ARG(p3,"p3")
	HX_STACK_ARG(p4,"p4")
	HX_STACK_LINE(1055)
	Float iT = ((int)1 - t);		HX_STACK_VAR(iT,"iT");
	HX_STACK_LINE(1056)
	return ((((p1 * (((iT * iT) * iT))) + ((((int)3 * p2) * t) * ((iT * iT)))) + ((((int)3 * p3) * iT) * ((t * t)))) + (p4 * (((t * t) * t))));
}


HX_DEFINE_DYNAMIC_FUNC5(Graphics_obj,__calculateBezierCubicPoint,return )

Void Graphics_obj::__getBounds( ::openfl::geom::Rectangle rect,::openfl::geom::Matrix matrix){
{
		HX_STACK_FRAME("openfl.display.Graphics","__getBounds",0x7b7eedd2,"openfl.display.Graphics.__getBounds","openfl/display/Graphics.hx",1059,0x8d299ce7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(rect,"rect")
		HX_STACK_ARG(matrix,"matrix")
		HX_STACK_LINE(1061)
		if (((this->__bounds == null()))){
			HX_STACK_LINE(1061)
			return null();
		}
		HX_STACK_LINE(1063)
		::openfl::geom::Rectangle bounds = this->__bounds->transform(matrix);		HX_STACK_VAR(bounds,"bounds");
		HX_STACK_LINE(1064)
		rect->__expand(bounds->x,bounds->y,bounds->width,bounds->height);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Graphics_obj,__getBounds,(void))

bool Graphics_obj::__hitTest( Float x,Float y,bool shapeFlag,::openfl::geom::Matrix matrix){
	HX_STACK_FRAME("openfl.display.Graphics","__hitTest",0xcb8296ac,"openfl.display.Graphics.__hitTest","openfl/display/Graphics.hx",1069,0x8d299ce7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(shapeFlag,"shapeFlag")
	HX_STACK_ARG(matrix,"matrix")
	HX_STACK_LINE(1073)
	if (((this->__bounds == null()))){
		HX_STACK_LINE(1073)
		return false;
	}
	HX_STACK_LINE(1075)
	::openfl::geom::Rectangle bounds = this->__bounds->transform(matrix);		HX_STACK_VAR(bounds,"bounds");
	struct _Function_1_1{
		inline static bool Block( Float &x,::openfl::geom::Rectangle &bounds){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/display/Graphics.hx",1076,0x8d299ce7)
			{
				HX_STACK_LINE(1076)
				Float _g = bounds->get_right();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(1076)
				return (x <= _g);
			}
			return null();
		}
	};
	HX_STACK_LINE(1076)
	if (((  (((bool((x > bounds->x)) && bool((y > bounds->y))))) ? bool(_Function_1_1::Block(x,bounds)) : bool(false) ))){
		HX_STACK_LINE(1076)
		Float _g1 = bounds->get_bottom();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(1076)
		return (y <= _g1);
	}
	else{
		HX_STACK_LINE(1076)
		return false;
	}
	HX_STACK_LINE(1076)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC4(Graphics_obj,__hitTest,return )

Void Graphics_obj::__inflateBounds( Float x,Float y){
{
		HX_STACK_FRAME("openfl.display.Graphics","__inflateBounds",0x7eaeb403,"openfl.display.Graphics.__inflateBounds","openfl/display/Graphics.hx",1080,0x8d299ce7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(1082)
		if (((this->__bounds == null()))){
			HX_STACK_LINE(1084)
			::openfl::geom::Rectangle _g = ::openfl::geom::Rectangle_obj::__new(x,y,(int)0,(int)0);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1084)
			this->__bounds = _g;
			HX_STACK_LINE(1085)
			this->__transformDirty = true;
			HX_STACK_LINE(1086)
			return null();
		}
		HX_STACK_LINE(1090)
		if (((x < this->__bounds->x))){
			HX_STACK_LINE(1092)
			hx::AddEq(this->__bounds->width,(this->__bounds->x - x));
			HX_STACK_LINE(1093)
			this->__bounds->x = x;
			HX_STACK_LINE(1094)
			this->__transformDirty = true;
		}
		HX_STACK_LINE(1098)
		if (((y < this->__bounds->y))){
			HX_STACK_LINE(1100)
			hx::AddEq(this->__bounds->height,(this->__bounds->y - y));
			HX_STACK_LINE(1101)
			this->__bounds->y = y;
			HX_STACK_LINE(1102)
			this->__transformDirty = true;
		}
		HX_STACK_LINE(1106)
		if (((x > (this->__bounds->x + this->__bounds->width)))){
			HX_STACK_LINE(1108)
			this->__bounds->width = (x - this->__bounds->x);
		}
		HX_STACK_LINE(1112)
		if (((y > (this->__bounds->y + this->__bounds->height)))){
			HX_STACK_LINE(1114)
			this->__bounds->height = (y - this->__bounds->y);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Graphics_obj,__inflateBounds,(void))

bool Graphics_obj::set___dirty( bool value){
	HX_STACK_FRAME("openfl.display.Graphics","set___dirty",0x3f74a55c,"openfl.display.Graphics.set___dirty","openfl/display/Graphics.hx",1121,0x8d299ce7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1122)
	if (((bool(value) && bool((this->__owner != null()))))){
		HX_STACK_LINE(1123)
		::openfl::display::DisplayObject _this = this->__owner;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(1123)
		if ((!(_this->__renderDirty))){
			HX_STACK_LINE(1123)
			_this->__renderDirty = true;
			HX_STACK_LINE(1123)
			(::openfl::display::DisplayObject_obj::__worldRenderDirty)++;
		}
	}
	HX_STACK_LINE(1125)
	return this->__dirty = value;
}


HX_DEFINE_DYNAMIC_FUNC1(Graphics_obj,set___dirty,return )

int Graphics_obj::TILE_SCALE;

int Graphics_obj::TILE_ROTATION;

int Graphics_obj::TILE_RGB;

int Graphics_obj::TILE_ALPHA;

int Graphics_obj::TILE_TRANS_2x2;

int Graphics_obj::TILE_RECT;

int Graphics_obj::TILE_ORIGIN;

int Graphics_obj::TILE_BLEND_NORMAL;

int Graphics_obj::TILE_BLEND_ADD;


Graphics_obj::Graphics_obj()
{
}

void Graphics_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Graphics);
	HX_MARK_MEMBER_NAME(__hardware,"__hardware");
	HX_MARK_MEMBER_NAME(__bounds,"__bounds");
	HX_MARK_MEMBER_NAME(__commands,"__commands");
	HX_MARK_MEMBER_NAME(__dirty,"__dirty");
	HX_MARK_MEMBER_NAME(__glStack,"__glStack");
	HX_MARK_MEMBER_NAME(__drawPaths,"__drawPaths");
	HX_MARK_MEMBER_NAME(__halfStrokeWidth,"__halfStrokeWidth");
	HX_MARK_MEMBER_NAME(__image,"__image");
	HX_MARK_MEMBER_NAME(__positionX,"__positionX");
	HX_MARK_MEMBER_NAME(__positionY,"__positionY");
	HX_MARK_MEMBER_NAME(__transformDirty,"__transformDirty");
	HX_MARK_MEMBER_NAME(__visible,"__visible");
	HX_MARK_MEMBER_NAME(__cachedTexture,"__cachedTexture");
	HX_MARK_MEMBER_NAME(__owner,"__owner");
	HX_MARK_MEMBER_NAME(__cairo,"__cairo");
	HX_MARK_MEMBER_NAME(__bitmap,"__bitmap");
	HX_MARK_END_CLASS();
}

void Graphics_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(__hardware,"__hardware");
	HX_VISIT_MEMBER_NAME(__bounds,"__bounds");
	HX_VISIT_MEMBER_NAME(__commands,"__commands");
	HX_VISIT_MEMBER_NAME(__dirty,"__dirty");
	HX_VISIT_MEMBER_NAME(__glStack,"__glStack");
	HX_VISIT_MEMBER_NAME(__drawPaths,"__drawPaths");
	HX_VISIT_MEMBER_NAME(__halfStrokeWidth,"__halfStrokeWidth");
	HX_VISIT_MEMBER_NAME(__image,"__image");
	HX_VISIT_MEMBER_NAME(__positionX,"__positionX");
	HX_VISIT_MEMBER_NAME(__positionY,"__positionY");
	HX_VISIT_MEMBER_NAME(__transformDirty,"__transformDirty");
	HX_VISIT_MEMBER_NAME(__visible,"__visible");
	HX_VISIT_MEMBER_NAME(__cachedTexture,"__cachedTexture");
	HX_VISIT_MEMBER_NAME(__owner,"__owner");
	HX_VISIT_MEMBER_NAME(__cairo,"__cairo");
	HX_VISIT_MEMBER_NAME(__bitmap,"__bitmap");
}

Dynamic Graphics_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"lineTo") ) { return lineTo_dyn(); }
		if (HX_FIELD_EQ(inName,"moveTo") ) { return moveTo_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"__dirty") ) { return __dirty; }
		if (HX_FIELD_EQ(inName,"__image") ) { return __image; }
		if (HX_FIELD_EQ(inName,"__owner") ) { return __owner; }
		if (HX_FIELD_EQ(inName,"__cairo") ) { return __cairo; }
		if (HX_FIELD_EQ(inName,"curveTo") ) { return curveTo_dyn(); }
		if (HX_FIELD_EQ(inName,"endFill") ) { return endFill_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__bounds") ) { return __bounds; }
		if (HX_FIELD_EQ(inName,"__bitmap") ) { return __bitmap; }
		if (HX_FIELD_EQ(inName,"copyFrom") ) { return copyFrom_dyn(); }
		if (HX_FIELD_EQ(inName,"drawPath") ) { return drawPath_dyn(); }
		if (HX_FIELD_EQ(inName,"drawRect") ) { return drawRect_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__glStack") ) { return __glStack; }
		if (HX_FIELD_EQ(inName,"__visible") ) { return __visible; }
		if (HX_FIELD_EQ(inName,"beginFill") ) { return beginFill_dyn(); }
		if (HX_FIELD_EQ(inName,"drawTiles") ) { return drawTiles_dyn(); }
		if (HX_FIELD_EQ(inName,"lineStyle") ) { return lineStyle_dyn(); }
		if (HX_FIELD_EQ(inName,"__hitTest") ) { return __hitTest_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__hardware") ) { return __hardware; }
		if (HX_FIELD_EQ(inName,"__commands") ) { return __commands; }
		if (HX_FIELD_EQ(inName,"drawCircle") ) { return drawCircle_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__drawPaths") ) { return __drawPaths; }
		if (HX_FIELD_EQ(inName,"__positionX") ) { return __positionX; }
		if (HX_FIELD_EQ(inName,"__positionY") ) { return __positionY; }
		if (HX_FIELD_EQ(inName,"drawEllipse") ) { return drawEllipse_dyn(); }
		if (HX_FIELD_EQ(inName,"__getBounds") ) { return __getBounds_dyn(); }
		if (HX_FIELD_EQ(inName,"set___dirty") ) { return set___dirty_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"cubicCurveTo") ) { return cubicCurveTo_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"drawRoundRect") ) { return drawRoundRect_dyn(); }
		if (HX_FIELD_EQ(inName,"drawTriangles") ) { return drawTriangles_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__cachedTexture") ) { return __cachedTexture; }
		if (HX_FIELD_EQ(inName,"beginBitmapFill") ) { return beginBitmapFill_dyn(); }
		if (HX_FIELD_EQ(inName,"lineBitmapStyle") ) { return lineBitmapStyle_dyn(); }
		if (HX_FIELD_EQ(inName,"__inflateBounds") ) { return __inflateBounds_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__transformDirty") ) { return __transformDirty; }
		if (HX_FIELD_EQ(inName,"drawGraphicsData") ) { return drawGraphicsData_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__halfStrokeWidth") ) { return __halfStrokeWidth; }
		if (HX_FIELD_EQ(inName,"beginGradientFill") ) { return beginGradientFill_dyn(); }
		if (HX_FIELD_EQ(inName,"lineGradientStyle") ) { return lineGradientStyle_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"drawRoundRectComplex") ) { return drawRoundRectComplex_dyn(); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"__calculateBezierQuadPoint") ) { return __calculateBezierQuadPoint_dyn(); }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"__calculateBezierCubicPoint") ) { return __calculateBezierCubicPoint_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Graphics_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"__dirty") ) { if (inCallProp) return set___dirty(inValue);__dirty=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__image") ) { __image=inValue.Cast< ::lime::graphics::Image >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__owner") ) { __owner=inValue.Cast< ::openfl::display::DisplayObject >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__cairo") ) { __cairo=inValue.Cast< ::lime::graphics::cairo::Cairo >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__bounds") ) { __bounds=inValue.Cast< ::openfl::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__bitmap") ) { __bitmap=inValue.Cast< ::openfl::display::BitmapData >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__glStack") ) { __glStack=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__visible") ) { __visible=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__hardware") ) { __hardware=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__commands") ) { __commands=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__drawPaths") ) { __drawPaths=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__positionX") ) { __positionX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__positionY") ) { __positionY=inValue.Cast< Float >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__cachedTexture") ) { __cachedTexture=inValue.Cast< ::openfl::_internal::renderer::opengl::utils::FilterTexture >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__transformDirty") ) { __transformDirty=inValue.Cast< bool >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__halfStrokeWidth") ) { __halfStrokeWidth=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Graphics_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("__hardware"));
	outFields->push(HX_CSTRING("__bounds"));
	outFields->push(HX_CSTRING("__commands"));
	outFields->push(HX_CSTRING("__dirty"));
	outFields->push(HX_CSTRING("__glStack"));
	outFields->push(HX_CSTRING("__drawPaths"));
	outFields->push(HX_CSTRING("__halfStrokeWidth"));
	outFields->push(HX_CSTRING("__image"));
	outFields->push(HX_CSTRING("__positionX"));
	outFields->push(HX_CSTRING("__positionY"));
	outFields->push(HX_CSTRING("__transformDirty"));
	outFields->push(HX_CSTRING("__visible"));
	outFields->push(HX_CSTRING("__cachedTexture"));
	outFields->push(HX_CSTRING("__owner"));
	outFields->push(HX_CSTRING("__cairo"));
	outFields->push(HX_CSTRING("__bitmap"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("TILE_SCALE"),
	HX_CSTRING("TILE_ROTATION"),
	HX_CSTRING("TILE_RGB"),
	HX_CSTRING("TILE_ALPHA"),
	HX_CSTRING("TILE_TRANS_2x2"),
	HX_CSTRING("TILE_RECT"),
	HX_CSTRING("TILE_ORIGIN"),
	HX_CSTRING("TILE_BLEND_NORMAL"),
	HX_CSTRING("TILE_BLEND_ADD"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(Graphics_obj,__hardware),HX_CSTRING("__hardware")},
	{hx::fsObject /*::openfl::geom::Rectangle*/ ,(int)offsetof(Graphics_obj,__bounds),HX_CSTRING("__bounds")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Graphics_obj,__commands),HX_CSTRING("__commands")},
	{hx::fsBool,(int)offsetof(Graphics_obj,__dirty),HX_CSTRING("__dirty")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Graphics_obj,__glStack),HX_CSTRING("__glStack")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Graphics_obj,__drawPaths),HX_CSTRING("__drawPaths")},
	{hx::fsFloat,(int)offsetof(Graphics_obj,__halfStrokeWidth),HX_CSTRING("__halfStrokeWidth")},
	{hx::fsObject /*::lime::graphics::Image*/ ,(int)offsetof(Graphics_obj,__image),HX_CSTRING("__image")},
	{hx::fsFloat,(int)offsetof(Graphics_obj,__positionX),HX_CSTRING("__positionX")},
	{hx::fsFloat,(int)offsetof(Graphics_obj,__positionY),HX_CSTRING("__positionY")},
	{hx::fsBool,(int)offsetof(Graphics_obj,__transformDirty),HX_CSTRING("__transformDirty")},
	{hx::fsBool,(int)offsetof(Graphics_obj,__visible),HX_CSTRING("__visible")},
	{hx::fsObject /*::openfl::_internal::renderer::opengl::utils::FilterTexture*/ ,(int)offsetof(Graphics_obj,__cachedTexture),HX_CSTRING("__cachedTexture")},
	{hx::fsObject /*::openfl::display::DisplayObject*/ ,(int)offsetof(Graphics_obj,__owner),HX_CSTRING("__owner")},
	{hx::fsObject /*::lime::graphics::cairo::Cairo*/ ,(int)offsetof(Graphics_obj,__cairo),HX_CSTRING("__cairo")},
	{hx::fsObject /*::openfl::display::BitmapData*/ ,(int)offsetof(Graphics_obj,__bitmap),HX_CSTRING("__bitmap")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("__hardware"),
	HX_CSTRING("__bounds"),
	HX_CSTRING("__commands"),
	HX_CSTRING("__dirty"),
	HX_CSTRING("__glStack"),
	HX_CSTRING("__drawPaths"),
	HX_CSTRING("__halfStrokeWidth"),
	HX_CSTRING("__image"),
	HX_CSTRING("__positionX"),
	HX_CSTRING("__positionY"),
	HX_CSTRING("__transformDirty"),
	HX_CSTRING("__visible"),
	HX_CSTRING("__cachedTexture"),
	HX_CSTRING("__owner"),
	HX_CSTRING("__cairo"),
	HX_CSTRING("__bitmap"),
	HX_CSTRING("beginBitmapFill"),
	HX_CSTRING("beginFill"),
	HX_CSTRING("beginGradientFill"),
	HX_CSTRING("clear"),
	HX_CSTRING("copyFrom"),
	HX_CSTRING("cubicCurveTo"),
	HX_CSTRING("curveTo"),
	HX_CSTRING("drawCircle"),
	HX_CSTRING("drawEllipse"),
	HX_CSTRING("drawGraphicsData"),
	HX_CSTRING("drawPath"),
	HX_CSTRING("drawRect"),
	HX_CSTRING("drawRoundRect"),
	HX_CSTRING("drawRoundRectComplex"),
	HX_CSTRING("drawTiles"),
	HX_CSTRING("drawTriangles"),
	HX_CSTRING("endFill"),
	HX_CSTRING("lineBitmapStyle"),
	HX_CSTRING("lineGradientStyle"),
	HX_CSTRING("lineStyle"),
	HX_CSTRING("lineTo"),
	HX_CSTRING("moveTo"),
	HX_CSTRING("__calculateBezierQuadPoint"),
	HX_CSTRING("__calculateBezierCubicPoint"),
	HX_CSTRING("__getBounds"),
	HX_CSTRING("__hitTest"),
	HX_CSTRING("__inflateBounds"),
	HX_CSTRING("set___dirty"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Graphics_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Graphics_obj::TILE_SCALE,"TILE_SCALE");
	HX_MARK_MEMBER_NAME(Graphics_obj::TILE_ROTATION,"TILE_ROTATION");
	HX_MARK_MEMBER_NAME(Graphics_obj::TILE_RGB,"TILE_RGB");
	HX_MARK_MEMBER_NAME(Graphics_obj::TILE_ALPHA,"TILE_ALPHA");
	HX_MARK_MEMBER_NAME(Graphics_obj::TILE_TRANS_2x2,"TILE_TRANS_2x2");
	HX_MARK_MEMBER_NAME(Graphics_obj::TILE_RECT,"TILE_RECT");
	HX_MARK_MEMBER_NAME(Graphics_obj::TILE_ORIGIN,"TILE_ORIGIN");
	HX_MARK_MEMBER_NAME(Graphics_obj::TILE_BLEND_NORMAL,"TILE_BLEND_NORMAL");
	HX_MARK_MEMBER_NAME(Graphics_obj::TILE_BLEND_ADD,"TILE_BLEND_ADD");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Graphics_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Graphics_obj::TILE_SCALE,"TILE_SCALE");
	HX_VISIT_MEMBER_NAME(Graphics_obj::TILE_ROTATION,"TILE_ROTATION");
	HX_VISIT_MEMBER_NAME(Graphics_obj::TILE_RGB,"TILE_RGB");
	HX_VISIT_MEMBER_NAME(Graphics_obj::TILE_ALPHA,"TILE_ALPHA");
	HX_VISIT_MEMBER_NAME(Graphics_obj::TILE_TRANS_2x2,"TILE_TRANS_2x2");
	HX_VISIT_MEMBER_NAME(Graphics_obj::TILE_RECT,"TILE_RECT");
	HX_VISIT_MEMBER_NAME(Graphics_obj::TILE_ORIGIN,"TILE_ORIGIN");
	HX_VISIT_MEMBER_NAME(Graphics_obj::TILE_BLEND_NORMAL,"TILE_BLEND_NORMAL");
	HX_VISIT_MEMBER_NAME(Graphics_obj::TILE_BLEND_ADD,"TILE_BLEND_ADD");
};

#endif

Class Graphics_obj::__mClass;

void Graphics_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl.display.Graphics"), hx::TCanCast< Graphics_obj> ,sStaticFields,sMemberFields,
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

void Graphics_obj::__boot()
{
	TILE_SCALE= (int)1;
	TILE_ROTATION= (int)2;
	TILE_RGB= (int)4;
	TILE_ALPHA= (int)8;
	TILE_TRANS_2x2= (int)16;
	TILE_RECT= (int)32;
	TILE_ORIGIN= (int)64;
	TILE_BLEND_NORMAL= (int)0;
	TILE_BLEND_ADD= (int)65536;
}

} // end namespace openfl
} // end namespace display
