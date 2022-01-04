#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxAtlasFrames
#include <flixel/graphics/frames/FlxAtlasFrames.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFrame
#include <flixel/graphics/frames/FlxFrame.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFrameCollectionType
#include <flixel/graphics/frames/FlxFrameCollectionType.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFramesCollection
#include <flixel/graphics/frames/FlxFramesCollection.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxTileFrames
#include <flixel/graphics/frames/FlxTileFrames.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRect
#include <flixel/math/FlxRect.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_BitmapFrontEnd
#include <flixel/system/frontEnds/BitmapFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_FlxBitmapDataUtil
#include <flixel/util/FlxBitmapDataUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_math_FlxPoint
#include <flixel/util/FlxPool_flixel_math_FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_math_FlxRect
#include <flixel/util/FlxPool_flixel_math_FlxRect.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPool
#include <flixel/util/IFlxPool.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_BalancedTree
#include <haxe/ds/BalancedTree.h>
#endif
#ifndef INCLUDED_haxe_ds_EnumValueMap
#include <haxe/ds/EnumValueMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_43be537ea661b39f_17_new,"flixel.graphics.frames.FlxTileFrames","new",0xee264501,"flixel.graphics.frames.FlxTileFrames.new","flixel/graphics/frames/FlxTileFrames.hx",17,0x562d6bb0)
HX_LOCAL_STACK_FRAME(_hx_pos_43be537ea661b39f_54_getByTilePosition,"flixel.graphics.frames.FlxTileFrames","getByTilePosition",0xcc1d2a05,"flixel.graphics.frames.FlxTileFrames.getByTilePosition","flixel/graphics/frames/FlxTileFrames.hx",54,0x562d6bb0)
HX_LOCAL_STACK_FRAME(_hx_pos_43be537ea661b39f_488_equals,"flixel.graphics.frames.FlxTileFrames","equals",0xd88c543e,"flixel.graphics.frames.FlxTileFrames.equals","flixel/graphics/frames/FlxTileFrames.hx",488,0x562d6bb0)
HX_LOCAL_STACK_FRAME(_hx_pos_43be537ea661b39f_516_addBorder,"flixel.graphics.frames.FlxTileFrames","addBorder",0x145fa54e,"flixel.graphics.frames.FlxTileFrames.addBorder","flixel/graphics/frames/FlxTileFrames.hx",516,0x562d6bb0)
HX_LOCAL_STACK_FRAME(_hx_pos_43be537ea661b39f_541_destroy,"flixel.graphics.frames.FlxTileFrames","destroy",0x9226061b,"flixel.graphics.frames.FlxTileFrames.destroy","flixel/graphics/frames/FlxTileFrames.hx",541,0x562d6bb0)
HX_LOCAL_STACK_FRAME(_hx_pos_43be537ea661b39f_72_fromBitmapAddSpacesAndBorders,"flixel.graphics.frames.FlxTileFrames","fromBitmapAddSpacesAndBorders",0x637393e6,"flixel.graphics.frames.FlxTileFrames.fromBitmapAddSpacesAndBorders","flixel/graphics/frames/FlxTileFrames.hx",72,0x562d6bb0)
HX_LOCAL_STACK_FRAME(_hx_pos_43be537ea661b39f_114_fromFrameAddSpacesAndBorders,"flixel.graphics.frames.FlxTileFrames","fromFrameAddSpacesAndBorders",0x8cf4341a,"flixel.graphics.frames.FlxTileFrames.fromFrameAddSpacesAndBorders","flixel/graphics/frames/FlxTileFrames.hx",114,0x562d6bb0)
HX_LOCAL_STACK_FRAME(_hx_pos_43be537ea661b39f_131_fromFrame,"flixel.graphics.frames.FlxTileFrames","fromFrame",0xb32d85c4,"flixel.graphics.frames.FlxTileFrames.fromFrame","flixel/graphics/frames/FlxTileFrames.hx",131,0x562d6bb0)
HX_LOCAL_STACK_FRAME(_hx_pos_43be537ea661b39f_184_fromFrames,"flixel.graphics.frames.FlxTileFrames","fromFrames",0x14a7862f,"flixel.graphics.frames.FlxTileFrames.fromFrames","flixel/graphics/frames/FlxTileFrames.hx",184,0x562d6bb0)
HX_LOCAL_STACK_FRAME(_hx_pos_43be537ea661b39f_227_fromAtlasByPrefix,"flixel.graphics.frames.FlxTileFrames","fromAtlasByPrefix",0x9481e7cb,"flixel.graphics.frames.FlxTileFrames.fromAtlasByPrefix","flixel/graphics/frames/FlxTileFrames.hx",227,0x562d6bb0)
HX_LOCAL_STACK_FRAME(_hx_pos_43be537ea661b39f_261_fromGraphic,"flixel.graphics.frames.FlxTileFrames","fromGraphic",0x29813bff,"flixel.graphics.frames.FlxTileFrames.fromGraphic","flixel/graphics/frames/FlxTileFrames.hx",261,0x562d6bb0)
HX_LOCAL_STACK_FRAME(_hx_pos_43be537ea661b39f_327_fromRectangle,"flixel.graphics.frames.FlxTileFrames","fromRectangle",0x8a32f946,"flixel.graphics.frames.FlxTileFrames.fromRectangle","flixel/graphics/frames/FlxTileFrames.hx",327,0x562d6bb0)
HX_LOCAL_STACK_FRAME(_hx_pos_43be537ea661b39f_355_combineTileSets,"flixel.graphics.frames.FlxTileFrames","combineTileSets",0x70f3189f,"flixel.graphics.frames.FlxTileFrames.combineTileSets","flixel/graphics/frames/FlxTileFrames.hx",355,0x562d6bb0)
HX_LOCAL_STACK_FRAME(_hx_pos_43be537ea661b39f_384_combineTileFrames,"flixel.graphics.frames.FlxTileFrames","combineTileFrames",0x23605534,"flixel.graphics.frames.FlxTileFrames.combineTileFrames","flixel/graphics/frames/FlxTileFrames.hx",384,0x562d6bb0)
HX_LOCAL_STACK_FRAME(_hx_pos_43be537ea661b39f_472_findFrame,"flixel.graphics.frames.FlxTileFrames","findFrame",0xed9bcc95,"flixel.graphics.frames.FlxTileFrames.findFrame","flixel/graphics/frames/FlxTileFrames.hx",472,0x562d6bb0)
namespace flixel{
namespace graphics{
namespace frames{

void FlxTileFrames_obj::__construct( ::flixel::graphics::FlxGraphic parent, ::flixel::math::FlxPoint border){
            	HX_STACKFRAME(&_hx_pos_43be537ea661b39f_17_new)
HXLINE(  42)		this->numCols = 0;
HXLINE(  40)		this->numRows = 0;
HXLINE(  46)		super::__construct(parent,::flixel::graphics::frames::FlxFrameCollectionType_obj::TILES_dyn(),border);
            	}

Dynamic FlxTileFrames_obj::__CreateEmpty() { return new FlxTileFrames_obj; }

void *FlxTileFrames_obj::_hx_vtable = 0;

Dynamic FlxTileFrames_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxTileFrames_obj > _hx_result = new FlxTileFrames_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool FlxTileFrames_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x05e81255) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x05e81255;
	} else {
		return inClassId==(int)0x7907b929;
	}
}

 ::flixel::graphics::frames::FlxFrame FlxTileFrames_obj::getByTilePosition(int column,int row){
            	HX_STACKFRAME(&_hx_pos_43be537ea661b39f_54_getByTilePosition)
HXDLIN(  54)		return this->frames->__get(((row * this->numCols) + column)).StaticCast<  ::flixel::graphics::frames::FlxFrame >();
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTileFrames_obj,getByTilePosition,return )

bool FlxTileFrames_obj::equals( ::flixel::math::FlxPoint tileSize, ::flixel::math::FlxRect region, ::flixel::graphics::frames::FlxFrame atlasFrame, ::flixel::math::FlxPoint tileSpacing, ::flixel::math::FlxPoint border){
            	HX_STACKFRAME(&_hx_pos_43be537ea661b39f_488_equals)
HXLINE( 489)		bool _hx_tmp;
HXDLIN( 489)		if (::hx::IsNull( this->region )) {
HXLINE( 489)			_hx_tmp = ::hx::IsNull( this->atlasFrame );
            		}
            		else {
HXLINE( 489)			_hx_tmp = false;
            		}
HXDLIN( 489)		if (_hx_tmp) {
HXLINE( 491)			return false;
            		}
HXLINE( 494)		if (::hx::IsNotNull( atlasFrame )) {
HXLINE( 496)			region = atlasFrame->frame;
            		}
HXLINE( 499)		if (::hx::IsNull( region )) {
HXLINE( 500)			Float Width = ( (Float)(this->parent->width) );
HXDLIN( 500)			Float Height = ( (Float)(this->parent->height) );
HXDLIN( 500)			 ::flixel::math::FlxRect _this = ::flixel::math::FlxRect_obj::_pool->get();
HXDLIN( 500)			_this->x = ( (Float)(0) );
HXDLIN( 500)			_this->y = ( (Float)(0) );
HXDLIN( 500)			_this->width = Width;
HXDLIN( 500)			_this->height = Height;
HXDLIN( 500)			 ::flixel::math::FlxRect rect = _this;
HXDLIN( 500)			rect->_inPool = false;
HXDLIN( 500)			 ::flixel::math::FlxRect rect1 = rect;
HXDLIN( 500)			rect1->_weak = true;
HXDLIN( 500)			region = rect1;
            		}
HXLINE( 502)		if (::hx::IsNull( tileSpacing )) {
HXLINE( 503)			 ::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN( 503)			point->_inPool = false;
HXDLIN( 503)			 ::flixel::math::FlxPoint point1 = point;
HXDLIN( 503)			point1->_weak = true;
HXDLIN( 503)			tileSpacing = point1;
            		}
HXLINE( 505)		if (::hx::IsNull( border )) {
HXLINE( 506)			 ::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN( 506)			point->_inPool = false;
HXDLIN( 506)			 ::flixel::math::FlxPoint point1 = point;
HXDLIN( 506)			point1->_weak = true;
HXDLIN( 506)			border = point1;
            		}
HXLINE( 508)		bool _hx_tmp1;
HXDLIN( 508)		bool _hx_tmp2;
HXDLIN( 508)		bool _hx_tmp3;
HXDLIN( 508)		if (::hx::IsInstanceEq( this->atlasFrame,atlasFrame )) {
HXLINE( 509)			 ::flixel::math::FlxRect _this = this->region;
HXDLIN( 509)			bool result;
HXDLIN( 509)			bool result1;
HXDLIN( 509)			bool result2;
HXDLIN( 509)			if ((::Math_obj::abs((_this->x - region->x)) <= ((Float)0.0000001))) {
HXLINE( 509)				result2 = (::Math_obj::abs((_this->y - region->y)) <= ((Float)0.0000001));
            			}
            			else {
HXLINE( 509)				result2 = false;
            			}
HXDLIN( 509)			if (result2) {
HXLINE( 509)				result1 = (::Math_obj::abs((_this->width - region->width)) <= ((Float)0.0000001));
            			}
            			else {
HXLINE( 509)				result1 = false;
            			}
HXDLIN( 509)			if (result1) {
HXLINE( 509)				result = (::Math_obj::abs((_this->height - region->height)) <= ((Float)0.0000001));
            			}
            			else {
HXLINE( 509)				result = false;
            			}
HXDLIN( 509)			if (region->_weak) {
HXLINE( 509)				if (!(region->_inPool)) {
HXLINE( 509)					region->_inPool = true;
HXDLIN( 509)					region->_weak = false;
HXDLIN( 509)					::flixel::math::FlxRect_obj::_pool->putUnsafe(region);
            				}
            			}
HXLINE( 508)			_hx_tmp3 = result;
            		}
            		else {
HXLINE( 508)			_hx_tmp3 = false;
            		}
HXDLIN( 508)		if (_hx_tmp3) {
HXLINE( 510)			 ::flixel::math::FlxPoint _this = this->tileSize;
HXDLIN( 510)			bool result;
HXDLIN( 510)			if ((::Math_obj::abs((_this->x - tileSize->x)) <= ((Float)0.0000001))) {
HXLINE( 510)				result = (::Math_obj::abs((_this->y - tileSize->y)) <= ((Float)0.0000001));
            			}
            			else {
HXLINE( 510)				result = false;
            			}
HXDLIN( 510)			if (tileSize->_weak) {
HXLINE( 510)				tileSize->put();
            			}
HXLINE( 508)			_hx_tmp2 = result;
            		}
            		else {
HXLINE( 508)			_hx_tmp2 = false;
            		}
HXDLIN( 508)		if (_hx_tmp2) {
HXLINE( 511)			 ::flixel::math::FlxPoint _this = this->tileSpacing;
HXDLIN( 511)			bool result;
HXDLIN( 511)			if ((::Math_obj::abs((_this->x - tileSpacing->x)) <= ((Float)0.0000001))) {
HXLINE( 511)				result = (::Math_obj::abs((_this->y - tileSpacing->y)) <= ((Float)0.0000001));
            			}
            			else {
HXLINE( 511)				result = false;
            			}
HXDLIN( 511)			if (tileSpacing->_weak) {
HXLINE( 511)				tileSpacing->put();
            			}
HXLINE( 508)			_hx_tmp1 = result;
            		}
            		else {
HXLINE( 508)			_hx_tmp1 = false;
            		}
HXDLIN( 508)		if (_hx_tmp1) {
HXLINE( 512)			 ::flixel::math::FlxPoint _this = this->border;
HXDLIN( 512)			bool result;
HXDLIN( 512)			if ((::Math_obj::abs((_this->x - border->x)) <= ((Float)0.0000001))) {
HXLINE( 512)				result = (::Math_obj::abs((_this->y - border->y)) <= ((Float)0.0000001));
            			}
            			else {
HXLINE( 512)				result = false;
            			}
HXDLIN( 512)			if (border->_weak) {
HXLINE( 512)				border->put();
            			}
HXDLIN( 512)			return result;
            		}
            		else {
HXLINE( 508)			return false;
            		}
HXDLIN( 508)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC5(FlxTileFrames_obj,equals,return )

 ::flixel::graphics::frames::FlxFramesCollection FlxTileFrames_obj::addBorder( ::flixel::math::FlxPoint border){
            	HX_GC_STACKFRAME(&_hx_pos_43be537ea661b39f_516_addBorder)
HXLINE( 517)		 ::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN( 517)		point->_inPool = false;
HXDLIN( 517)		 ::flixel::math::FlxPoint resultBorder = point->addPoint(this->border)->addPoint(border);
HXLINE( 518)		 ::flixel::math::FlxPoint point1 = ::flixel::math::FlxPoint_obj::_pool->get()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN( 518)		point1->_inPool = false;
HXDLIN( 518)		 ::flixel::math::FlxPoint _this = point1;
HXDLIN( 518)		 ::flixel::math::FlxPoint point2 = this->tileSize;
HXDLIN( 518)		_this->set_x(point2->x);
HXDLIN( 518)		_this->set_y(point2->y);
HXDLIN( 518)		if (point2->_weak) {
HXLINE( 518)			point2->put();
            		}
HXDLIN( 518)		 ::flixel::math::FlxPoint _this1 = _this;
HXDLIN( 518)		Float Y = (( (Float)(2) ) * border->y);
HXDLIN( 518)		_this1->set_x((_this1->x - (( (Float)(2) ) * border->x)));
HXDLIN( 518)		_this1->set_y((_this1->y - Y));
HXDLIN( 518)		 ::flixel::math::FlxPoint resultSize = _this1;
HXLINE( 519)		 ::flixel::graphics::frames::FlxTileFrames tileFrames = ::flixel::graphics::frames::FlxTileFrames_obj::findFrame(this->parent,resultSize,this->region,this->atlasFrame,this->tileSpacing,resultBorder);
HXLINE( 520)		if (::hx::IsNotNull( tileFrames )) {
HXLINE( 522)			resultSize = ( ( ::flixel::math::FlxPoint)(::flixel::util::FlxDestroyUtil_obj::put(resultSize)) );
HXLINE( 523)			return tileFrames;
            		}
HXLINE( 526)		tileFrames =  ::flixel::graphics::frames::FlxTileFrames_obj::__alloc( HX_CTX ,this->parent,resultBorder);
HXLINE( 527)		 ::flixel::math::FlxRect _this2 = ::flixel::math::FlxRect_obj::_pool->get();
HXDLIN( 527)		_this2->x = ( (Float)(0) );
HXDLIN( 527)		_this2->y = ( (Float)(0) );
HXDLIN( 527)		_this2->width = ( (Float)(0) );
HXDLIN( 527)		_this2->height = ( (Float)(0) );
HXDLIN( 527)		 ::flixel::math::FlxRect rect = _this2;
HXDLIN( 527)		rect->_inPool = false;
HXDLIN( 527)		 ::flixel::math::FlxRect _this3 = rect;
HXDLIN( 527)		 ::flixel::math::FlxRect Rect = this->region;
HXDLIN( 527)		_this3->x = Rect->x;
HXDLIN( 527)		_this3->y = Rect->y;
HXDLIN( 527)		_this3->width = Rect->width;
HXDLIN( 527)		_this3->height = Rect->height;
HXDLIN( 527)		if (Rect->_weak) {
HXLINE( 527)			if (!(Rect->_inPool)) {
HXLINE( 527)				Rect->_inPool = true;
HXDLIN( 527)				Rect->_weak = false;
HXDLIN( 527)				::flixel::math::FlxRect_obj::_pool->putUnsafe(Rect);
            			}
            		}
HXDLIN( 527)		tileFrames->region = _this3;
HXLINE( 528)		tileFrames->atlasFrame = this->atlasFrame;
HXLINE( 529)		tileFrames->tileSize = resultSize;
HXLINE( 530)		 ::flixel::math::FlxPoint point3 = ::flixel::math::FlxPoint_obj::_pool->get()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN( 530)		point3->_inPool = false;
HXDLIN( 530)		 ::flixel::math::FlxPoint _this4 = point3;
HXDLIN( 530)		 ::flixel::math::FlxPoint point4 = this->tileSpacing;
HXDLIN( 530)		_this4->set_x(point4->x);
HXDLIN( 530)		_this4->set_y(point4->y);
HXDLIN( 530)		if (point4->_weak) {
HXLINE( 530)			point4->put();
            		}
HXDLIN( 530)		tileFrames->tileSpacing = _this4;
HXLINE( 532)		{
HXLINE( 532)			int _g = 0;
HXDLIN( 532)			::Array< ::Dynamic> _g1 = this->frames;
HXDLIN( 532)			while((_g < _g1->length)){
HXLINE( 532)				 ::flixel::graphics::frames::FlxFrame frame = _g1->__get(_g).StaticCast<  ::flixel::graphics::frames::FlxFrame >();
HXDLIN( 532)				_g = (_g + 1);
HXLINE( 534)				tileFrames->pushFrame(frame->setBorderTo(border,null()));
            			}
            		}
HXLINE( 537)		return tileFrames;
            	}


void FlxTileFrames_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_43be537ea661b39f_541_destroy)
HXLINE( 542)		this->super::destroy();
HXLINE( 543)		this->atlasFrame = null();
HXLINE( 544)		this->region = ( ( ::flixel::math::FlxRect)(::flixel::util::FlxDestroyUtil_obj::put(this->region)) );
HXLINE( 545)		this->tileSize = ( ( ::flixel::math::FlxPoint)(::flixel::util::FlxDestroyUtil_obj::put(this->tileSize)) );
HXLINE( 546)		this->tileSpacing = ( ( ::flixel::math::FlxPoint)(::flixel::util::FlxDestroyUtil_obj::put(this->tileSpacing)) );
            	}


 ::flixel::graphics::frames::FlxTileFrames FlxTileFrames_obj::fromBitmapAddSpacesAndBorders( ::Dynamic source, ::flixel::math::FlxPoint tileSize, ::flixel::math::FlxPoint tileSpacing, ::flixel::math::FlxPoint tileBorder, ::flixel::math::FlxRect region){
            	HX_STACKFRAME(&_hx_pos_43be537ea661b39f_72_fromBitmapAddSpacesAndBorders)
HXLINE(  73)		 ::flixel::graphics::FlxGraphic graphic = ::flixel::FlxG_obj::bitmap->add(source,false,null());
HXLINE(  74)		if (::hx::IsNull( graphic )) {
HXLINE(  75)			return null();
            		}
HXLINE(  77)		::String key = ::flixel::FlxG_obj::bitmap->getKeyWithSpacesAndBorders(graphic->key,tileSize,tileSpacing,tileBorder,region);
HXLINE(  78)		 ::flixel::graphics::FlxGraphic result = ( ( ::flixel::graphics::FlxGraphic)(::flixel::FlxG_obj::bitmap->_cache->get(key)) );
HXLINE(  79)		if (::hx::IsNull( result )) {
HXLINE(  81)			 ::openfl::display::BitmapData bitmap = ::flixel::util::FlxBitmapDataUtil_obj::addSpacesAndBorders(graphic->bitmap,tileSize,tileSpacing,tileBorder,region);
HXLINE(  82)			result = ::flixel::FlxG_obj::bitmap->add(bitmap,false,key);
            		}
HXLINE(  85)		int borderX = 0;
HXLINE(  86)		int borderY = 0;
HXLINE(  88)		if (::hx::IsNotNull( tileBorder )) {
HXLINE(  90)			borderX = ::Std_obj::_hx_int(tileBorder->x);
HXLINE(  91)			borderY = ::Std_obj::_hx_int(tileBorder->y);
            		}
HXLINE(  94)		 ::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN(  94)		point->_inPool = false;
HXDLIN(  94)		 ::flixel::math::FlxPoint _this = point->addPoint(tileSize);
HXDLIN(  94)		_this->set_x((_this->x + (2 * borderX)));
HXDLIN(  94)		_this->set_y((_this->y + (2 * borderY)));
HXDLIN(  94)		 ::flixel::graphics::frames::FlxTileFrames tileFrames = ::flixel::graphics::frames::FlxTileFrames_obj::fromGraphic(result,_this,null(),tileSpacing);
HXLINE(  96)		if (::hx::IsNull( tileBorder )) {
HXLINE(  97)			return tileFrames;
            		}
HXLINE(  99)		return Dynamic( tileFrames->addBorder(tileBorder)).StaticCast<  ::flixel::graphics::frames::FlxTileFrames >();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(FlxTileFrames_obj,fromBitmapAddSpacesAndBorders,return )

 ::flixel::graphics::frames::FlxTileFrames FlxTileFrames_obj::fromFrameAddSpacesAndBorders( ::flixel::graphics::frames::FlxFrame frame, ::flixel::math::FlxPoint tileSize, ::flixel::math::FlxPoint tileSpacing, ::flixel::math::FlxPoint tileBorder){
            	HX_STACKFRAME(&_hx_pos_43be537ea661b39f_114_fromFrameAddSpacesAndBorders)
HXLINE( 115)		 ::openfl::display::BitmapData bitmap = frame->paint(null(),null(),null(),null());
HXLINE( 116)		return ::flixel::graphics::frames::FlxTileFrames_obj::fromBitmapAddSpacesAndBorders(bitmap,tileSize,tileSpacing,tileBorder,null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxTileFrames_obj,fromFrameAddSpacesAndBorders,return )

 ::flixel::graphics::frames::FlxTileFrames FlxTileFrames_obj::fromFrame( ::flixel::graphics::frames::FlxFrame frame, ::flixel::math::FlxPoint tileSize, ::flixel::math::FlxPoint tileSpacing){
            	HX_GC_STACKFRAME(&_hx_pos_43be537ea661b39f_131_fromFrame)
HXLINE( 132)		 ::flixel::graphics::FlxGraphic graphic = frame->parent;
HXLINE( 134)		 ::flixel::graphics::frames::FlxTileFrames tileFrames = ::flixel::graphics::frames::FlxTileFrames_obj::findFrame(graphic,tileSize,null(),frame,tileSpacing,null());
HXLINE( 135)		if (::hx::IsNotNull( tileFrames )) {
HXLINE( 136)			return tileFrames;
            		}
HXLINE( 139)		if (::hx::IsNull( tileSpacing )) {
HXLINE( 139)			 ::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(0,0);
HXDLIN( 139)			point->_inPool = false;
HXDLIN( 139)			tileSpacing = point;
            		}
HXLINE( 141)		tileFrames =  ::flixel::graphics::frames::FlxTileFrames_obj::__alloc( HX_CTX ,graphic,null());
HXLINE( 142)		tileFrames->atlasFrame = frame;
HXLINE( 143)		tileFrames->region = frame->frame;
HXLINE( 144)		tileFrames->tileSize = tileSize;
HXLINE( 145)		tileFrames->tileSpacing = tileSpacing;
HXLINE( 147)		{
HXLINE( 147)			tileSpacing->set_x(( (Float)(::Math_obj::floor(tileSpacing->x)) ));
HXDLIN( 147)			tileSpacing->set_y(( (Float)(::Math_obj::floor(tileSpacing->y)) ));
            		}
HXLINE( 148)		{
HXLINE( 148)			tileSize->set_x(( (Float)(::Math_obj::floor(tileSize->x)) ));
HXDLIN( 148)			tileSize->set_y(( (Float)(::Math_obj::floor(tileSize->y)) ));
            		}
HXLINE( 150)		Float spacedWidth = (tileSize->x + tileSpacing->x);
HXLINE( 151)		Float spacedHeight = (tileSize->y + tileSpacing->y);
HXLINE( 153)		int numRows;
HXDLIN( 153)		if ((tileSize->y == 0)) {
HXLINE( 153)			numRows = 1;
            		}
            		else {
HXLINE( 153)			numRows = ::Std_obj::_hx_int(((frame->sourceSize->y + tileSpacing->y) / spacedHeight));
            		}
HXLINE( 154)		int numCols;
HXDLIN( 154)		if ((tileSize->x == 0)) {
HXLINE( 154)			numCols = 1;
            		}
            		else {
HXLINE( 154)			numCols = ::Std_obj::_hx_int(((frame->sourceSize->x + tileSpacing->x) / spacedWidth));
            		}
HXLINE( 156)		Float Width = tileSize->x;
HXDLIN( 156)		Float Height = tileSize->y;
HXDLIN( 156)		 ::flixel::math::FlxRect _this = ::flixel::math::FlxRect_obj::_pool->get();
HXDLIN( 156)		_this->x = ( (Float)(0) );
HXDLIN( 156)		_this->y = ( (Float)(0) );
HXDLIN( 156)		_this->width = Width;
HXDLIN( 156)		_this->height = Height;
HXDLIN( 156)		 ::flixel::math::FlxRect rect = _this;
HXDLIN( 156)		rect->_inPool = false;
HXDLIN( 156)		 ::flixel::math::FlxRect helperRect = rect;
HXLINE( 158)		{
HXLINE( 158)			int _g = 0;
HXDLIN( 158)			int _g1 = numRows;
HXDLIN( 158)			while((_g < _g1)){
HXLINE( 158)				_g = (_g + 1);
HXDLIN( 158)				int j = (_g - 1);
HXLINE( 160)				{
HXLINE( 160)					int _g1 = 0;
HXDLIN( 160)					int _g2 = numCols;
HXDLIN( 160)					while((_g1 < _g2)){
HXLINE( 160)						_g1 = (_g1 + 1);
HXDLIN( 160)						int i = (_g1 - 1);
HXLINE( 162)						helperRect->x = (spacedWidth * ( (Float)(i) ));
HXLINE( 163)						helperRect->y = (spacedHeight * ( (Float)(j) ));
HXLINE( 164)						tileFrames->pushFrame(frame->subFrameTo(helperRect,null()));
            					}
            				}
            			}
            		}
HXLINE( 168)		helperRect = ( ( ::flixel::math::FlxRect)(::flixel::util::FlxDestroyUtil_obj::put(helperRect)) );
HXLINE( 170)		tileFrames->numCols = numCols;
HXLINE( 171)		tileFrames->numRows = numRows;
HXLINE( 172)		return tileFrames;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxTileFrames_obj,fromFrame,return )

 ::flixel::graphics::frames::FlxTileFrames FlxTileFrames_obj::fromFrames(::Array< ::Dynamic> Frames){
            	HX_GC_STACKFRAME(&_hx_pos_43be537ea661b39f_184_fromFrames)
HXLINE( 185)		 ::flixel::graphics::frames::FlxFrame firstFrame = Frames->__get(0).StaticCast<  ::flixel::graphics::frames::FlxFrame >();
HXLINE( 186)		 ::flixel::graphics::FlxGraphic graphic = firstFrame->parent;
HXLINE( 188)		{
HXLINE( 188)			int _g = 0;
HXDLIN( 188)			while((_g < Frames->length)){
HXLINE( 188)				 ::flixel::graphics::frames::FlxFrame frame = Frames->__get(_g).StaticCast<  ::flixel::graphics::frames::FlxFrame >();
HXDLIN( 188)				_g = (_g + 1);
HXLINE( 190)				bool _hx_tmp;
HXDLIN( 190)				if (::hx::IsInstanceEq( frame->parent,firstFrame->parent )) {
HXLINE( 190)					 ::flixel::math::FlxPoint _this = frame->sourceSize;
HXDLIN( 190)					 ::flixel::math::FlxPoint point = firstFrame->sourceSize;
HXDLIN( 190)					bool result;
HXDLIN( 190)					if ((::Math_obj::abs((_this->x - point->x)) <= ((Float)0.0000001))) {
HXLINE( 190)						result = (::Math_obj::abs((_this->y - point->y)) <= ((Float)0.0000001));
            					}
            					else {
HXLINE( 190)						result = false;
            					}
HXDLIN( 190)					if (point->_weak) {
HXLINE( 190)						point->put();
            					}
HXDLIN( 190)					_hx_tmp = !(result);
            				}
            				else {
HXLINE( 190)					_hx_tmp = true;
            				}
HXDLIN( 190)				if (_hx_tmp) {
HXLINE( 193)					return null();
            				}
            			}
            		}
HXLINE( 197)		 ::flixel::graphics::frames::FlxTileFrames tileFrames =  ::flixel::graphics::frames::FlxTileFrames_obj::__alloc( HX_CTX ,graphic,null());
HXLINE( 199)		tileFrames->region = null();
HXLINE( 200)		tileFrames->atlasFrame = null();
HXLINE( 201)		 ::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN( 201)		point->_inPool = false;
HXDLIN( 201)		 ::flixel::math::FlxPoint _this = point;
HXDLIN( 201)		 ::flixel::math::FlxPoint point1 = firstFrame->sourceSize;
HXDLIN( 201)		_this->set_x(point1->x);
HXDLIN( 201)		_this->set_y(point1->y);
HXDLIN( 201)		if (point1->_weak) {
HXLINE( 201)			point1->put();
            		}
HXDLIN( 201)		tileFrames->tileSize = _this;
HXLINE( 202)		 ::flixel::math::FlxPoint point2 = ::flixel::math::FlxPoint_obj::_pool->get()->set(0,0);
HXDLIN( 202)		point2->_inPool = false;
HXDLIN( 202)		tileFrames->tileSpacing = point2;
HXLINE( 203)		tileFrames->numCols = Frames->length;
HXLINE( 204)		tileFrames->numRows = 1;
HXLINE( 206)		{
HXLINE( 206)			int _g1 = 0;
HXDLIN( 206)			while((_g1 < Frames->length)){
HXLINE( 206)				 ::flixel::graphics::frames::FlxFrame frame = Frames->__get(_g1).StaticCast<  ::flixel::graphics::frames::FlxFrame >();
HXDLIN( 206)				_g1 = (_g1 + 1);
HXLINE( 208)				tileFrames->frames->push(frame);
HXLINE( 210)				if (::hx::IsNotNull( frame->name )) {
HXLINE( 211)					tileFrames->framesHash->set(frame->name,frame);
            				}
            			}
            		}
HXLINE( 214)		return tileFrames;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxTileFrames_obj,fromFrames,return )

 ::flixel::graphics::frames::FlxTileFrames FlxTileFrames_obj::fromAtlasByPrefix( ::flixel::graphics::frames::FlxAtlasFrames Frames,::String Prefix){
            	HX_STACKFRAME(&_hx_pos_43be537ea661b39f_227_fromAtlasByPrefix)
HXLINE( 228)		::Array< ::Dynamic> framesToAdd = ::Array_obj< ::Dynamic>::__new();
HXLINE( 230)		{
HXLINE( 230)			int _g = 0;
HXDLIN( 230)			::Array< ::Dynamic> _g1 = Frames->frames;
HXDLIN( 230)			while((_g < _g1->length)){
HXLINE( 230)				 ::flixel::graphics::frames::FlxFrame frame = _g1->__get(_g).StaticCast<  ::flixel::graphics::frames::FlxFrame >();
HXDLIN( 230)				_g = (_g + 1);
HXLINE( 232)				if (::StringTools_obj::startsWith(frame->name,Prefix)) {
HXLINE( 233)					framesToAdd->push(frame);
            				}
            			}
            		}
HXLINE( 236)		if ((framesToAdd->length > 0)) {
HXLINE( 238)			::String name = framesToAdd->__get(0).StaticCast<  ::flixel::graphics::frames::FlxFrame >()->name;
HXLINE( 239)			int postIndex = name.indexOf(HX_(".",2e,00,00,00),Prefix.length);
HXLINE( 240)			int postFix;
HXDLIN( 240)			if ((postIndex == -1)) {
HXLINE( 240)				postFix = name.length;
            			}
            			else {
HXLINE( 240)				postFix = postIndex;
            			}
HXDLIN( 240)			::String postFix1 = name.substring(postFix,name.length);
HXLINE( 242)			::flixel::graphics::frames::FlxFrame_obj::sort(framesToAdd,Prefix.length,postFix1.length);
HXLINE( 243)			return ::flixel::graphics::frames::FlxTileFrames_obj::fromFrames(framesToAdd);
            		}
HXLINE( 246)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxTileFrames_obj,fromAtlasByPrefix,return )

 ::flixel::graphics::frames::FlxTileFrames FlxTileFrames_obj::fromGraphic( ::flixel::graphics::FlxGraphic graphic, ::flixel::math::FlxPoint tileSize, ::flixel::math::FlxRect region, ::flixel::math::FlxPoint tileSpacing){
            	HX_GC_STACKFRAME(&_hx_pos_43be537ea661b39f_261_fromGraphic)
HXLINE( 263)		 ::flixel::graphics::frames::FlxTileFrames tileFrames = ::flixel::graphics::frames::FlxTileFrames_obj::findFrame(graphic,tileSize,region,null(),tileSpacing,null());
HXLINE( 264)		if (::hx::IsNotNull( tileFrames )) {
HXLINE( 265)			return tileFrames;
            		}
HXLINE( 268)		if (::hx::IsNull( region )) {
HXLINE( 270)			Float Width = ( (Float)(graphic->width) );
HXDLIN( 270)			Float Height = ( (Float)(graphic->height) );
HXDLIN( 270)			 ::flixel::math::FlxRect _this = ::flixel::math::FlxRect_obj::_pool->get();
HXDLIN( 270)			_this->x = ( (Float)(0) );
HXDLIN( 270)			_this->y = ( (Float)(0) );
HXDLIN( 270)			_this->width = Width;
HXDLIN( 270)			_this->height = Height;
HXDLIN( 270)			 ::flixel::math::FlxRect rect = _this;
HXDLIN( 270)			rect->_inPool = false;
HXDLIN( 270)			region = rect;
            		}
            		else {
HXLINE( 274)			if ((region->width == 0)) {
HXLINE( 275)				region->width = (( (Float)(graphic->width) ) - region->x);
            			}
HXLINE( 277)			if ((region->height == 0)) {
HXLINE( 278)				region->height = (( (Float)(graphic->height) ) - region->y);
            			}
            		}
HXLINE( 281)		if (::hx::IsNull( tileSpacing )) {
HXLINE( 281)			 ::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(0,0);
HXDLIN( 281)			point->_inPool = false;
HXDLIN( 281)			tileSpacing = point;
            		}
HXLINE( 283)		tileFrames =  ::flixel::graphics::frames::FlxTileFrames_obj::__alloc( HX_CTX ,graphic,null());
HXLINE( 284)		tileFrames->region = region;
HXLINE( 285)		tileFrames->atlasFrame = null();
HXLINE( 286)		tileFrames->tileSize = tileSize;
HXLINE( 287)		tileFrames->tileSpacing = tileSpacing;
HXLINE( 289)		{
HXLINE( 289)			region->x = ( (Float)(::Math_obj::floor(region->x)) );
HXDLIN( 289)			region->y = ( (Float)(::Math_obj::floor(region->y)) );
HXDLIN( 289)			region->width = ( (Float)(::Math_obj::floor(region->width)) );
HXDLIN( 289)			region->height = ( (Float)(::Math_obj::floor(region->height)) );
            		}
HXLINE( 290)		{
HXLINE( 290)			tileSpacing->set_x(( (Float)(::Math_obj::floor(tileSpacing->x)) ));
HXDLIN( 290)			tileSpacing->set_y(( (Float)(::Math_obj::floor(tileSpacing->y)) ));
            		}
HXLINE( 291)		{
HXLINE( 291)			tileSize->set_x(( (Float)(::Math_obj::floor(tileSize->x)) ));
HXDLIN( 291)			tileSize->set_y(( (Float)(::Math_obj::floor(tileSize->y)) ));
            		}
HXLINE( 293)		Float spacedWidth = (tileSize->x + tileSpacing->x);
HXLINE( 294)		Float spacedHeight = (tileSize->y + tileSpacing->y);
HXLINE( 296)		int numRows;
HXDLIN( 296)		if ((tileSize->y == 0)) {
HXLINE( 296)			numRows = 1;
            		}
            		else {
HXLINE( 296)			numRows = ::Std_obj::_hx_int(((region->height + tileSpacing->y) / spacedHeight));
            		}
HXLINE( 297)		int numCols;
HXDLIN( 297)		if ((tileSize->x == 0)) {
HXLINE( 297)			numCols = 1;
            		}
            		else {
HXLINE( 297)			numCols = ::Std_obj::_hx_int(((region->width + tileSpacing->x) / spacedWidth));
            		}
HXLINE( 299)		 ::flixel::math::FlxRect tileRect;
HXLINE( 301)		{
HXLINE( 301)			int _g = 0;
HXDLIN( 301)			int _g1 = numRows;
HXDLIN( 301)			while((_g < _g1)){
HXLINE( 301)				_g = (_g + 1);
HXDLIN( 301)				int j = (_g - 1);
HXLINE( 303)				{
HXLINE( 303)					int _g1 = 0;
HXDLIN( 303)					int _g2 = numCols;
HXDLIN( 303)					while((_g1 < _g2)){
HXLINE( 303)						_g1 = (_g1 + 1);
HXDLIN( 303)						int i = (_g1 - 1);
HXLINE( 305)						Float X = (region->x + (( (Float)(i) ) * spacedWidth));
HXDLIN( 305)						Float Y = (region->y + (( (Float)(j) ) * spacedHeight));
HXDLIN( 305)						Float Width = tileSize->x;
HXDLIN( 305)						Float Height = tileSize->y;
HXDLIN( 305)						 ::flixel::math::FlxRect _this = ::flixel::math::FlxRect_obj::_pool->get();
HXDLIN( 305)						_this->x = X;
HXDLIN( 305)						_this->y = Y;
HXDLIN( 305)						_this->width = Width;
HXDLIN( 305)						_this->height = Height;
HXDLIN( 305)						 ::flixel::math::FlxRect rect = _this;
HXDLIN( 305)						rect->_inPool = false;
HXDLIN( 305)						tileRect = rect;
HXLINE( 306)						tileFrames->addSpriteSheetFrame(tileRect);
            					}
            				}
            			}
            		}
HXLINE( 310)		tileFrames->numCols = numCols;
HXLINE( 311)		tileFrames->numRows = numRows;
HXLINE( 312)		return tileFrames;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxTileFrames_obj,fromGraphic,return )

 ::flixel::graphics::frames::FlxTileFrames FlxTileFrames_obj::fromRectangle( ::Dynamic source, ::flixel::math::FlxPoint tileSize, ::flixel::math::FlxRect region, ::flixel::math::FlxPoint tileSpacing){
            	HX_STACKFRAME(&_hx_pos_43be537ea661b39f_327_fromRectangle)
HXLINE( 328)		 ::flixel::graphics::FlxGraphic graphic = ::flixel::FlxG_obj::bitmap->add(source,false,null());
HXLINE( 329)		if (::hx::IsNull( graphic )) {
HXLINE( 330)			return null();
            		}
HXLINE( 331)		return ::flixel::graphics::frames::FlxTileFrames_obj::fromGraphic(graphic,tileSize,region,tileSpacing);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxTileFrames_obj,fromRectangle,return )

 ::flixel::graphics::frames::FlxTileFrames FlxTileFrames_obj::combineTileSets(::Array< ::Dynamic> bitmaps, ::flixel::math::FlxPoint tileSize, ::flixel::math::FlxPoint spacing, ::flixel::math::FlxPoint border){
            	HX_STACKFRAME(&_hx_pos_43be537ea661b39f_355_combineTileSets)
HXLINE( 356)		::Array< ::Dynamic> framesCollections = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 358)		{
HXLINE( 358)			int _g = 0;
HXDLIN( 358)			while((_g < bitmaps->length)){
HXLINE( 358)				 ::openfl::display::BitmapData bitmap = bitmaps->__get(_g).StaticCast<  ::openfl::display::BitmapData >();
HXDLIN( 358)				_g = (_g + 1);
HXLINE( 359)				framesCollections->push(::flixel::graphics::frames::FlxTileFrames_obj::fromRectangle(bitmap,tileSize,null(),null()));
            			}
            		}
HXLINE( 361)		return ::flixel::graphics::frames::FlxTileFrames_obj::combineTileFrames(framesCollections,spacing,border);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxTileFrames_obj,combineTileSets,return )

 ::flixel::graphics::frames::FlxTileFrames FlxTileFrames_obj::combineTileFrames(::Array< ::Dynamic> tileframes, ::flixel::math::FlxPoint spacing, ::flixel::math::FlxPoint border){
            	HX_GC_STACKFRAME(&_hx_pos_43be537ea661b39f_384_combineTileFrames)
HXLINE( 386)		int totalArea = 0;
HXLINE( 387)		int rows = 0;
HXLINE( 388)		int cols = 0;
HXLINE( 390)		int tileWidth = ::Std_obj::_hx_int(tileframes->__get(0).StaticCast<  ::flixel::graphics::frames::FlxTileFrames >()->frames->__get(0).StaticCast<  ::flixel::graphics::frames::FlxFrame >()->sourceSize->x);
HXLINE( 391)		int tileHeight = ::Std_obj::_hx_int(tileframes->__get(0).StaticCast<  ::flixel::graphics::frames::FlxTileFrames >()->frames->__get(0).StaticCast<  ::flixel::graphics::frames::FlxFrame >()->sourceSize->y);
HXLINE( 393)		int spaceX = 0;
HXLINE( 394)		int spaceY = 0;
HXLINE( 396)		if (::hx::IsNotNull( spacing )) {
HXLINE( 398)			spaceX = ::Std_obj::_hx_int(spacing->x);
HXLINE( 399)			spaceY = ::Std_obj::_hx_int(spacing->y);
            		}
HXLINE( 402)		int borderX = 0;
HXLINE( 403)		int borderY = 0;
HXLINE( 405)		if (::hx::IsNotNull( border )) {
HXLINE( 407)			borderX = ::Std_obj::_hx_int(border->x);
HXLINE( 408)			borderY = ::Std_obj::_hx_int(border->y);
            		}
HXLINE( 411)		{
HXLINE( 411)			int _g = 0;
HXDLIN( 411)			while((_g < tileframes->length)){
HXLINE( 411)				 ::flixel::graphics::frames::FlxTileFrames collection = tileframes->__get(_g).StaticCast<  ::flixel::graphics::frames::FlxTileFrames >();
HXDLIN( 411)				_g = (_g + 1);
HXLINE( 413)				cols = collection->numCols;
HXLINE( 414)				rows = collection->numRows;
HXLINE( 415)				totalArea = (totalArea + ::Std_obj::_hx_int(( (Float)((((cols * (tileWidth + (2 * borderX))) * rows) * (tileHeight + (2 * borderY)))) )));
            			}
            		}
HXLINE( 418)		Float side = ::Math_obj::sqrt(( (Float)(totalArea) ));
HXLINE( 419)		cols = ::Std_obj::_hx_int((side / ( (Float)((tileWidth + (2 * borderX))) )));
HXLINE( 420)		rows = ::Math_obj::ceil((( (Float)(totalArea) ) / ( (Float)(((cols * (tileWidth + (2 * borderX))) * (tileHeight + (2 * borderY)))) )));
HXLINE( 421)		int width = (::Std_obj::_hx_int(( (Float)((cols * (tileWidth + (2 * borderX)))) )) + ((cols - 1) * spaceX));
HXLINE( 422)		int height = (::Std_obj::_hx_int(( (Float)((rows * (tileHeight + (2 * borderY)))) )) + ((rows - 1) * spaceY));
HXLINE( 425)		 ::openfl::display::BitmapData combined =  ::openfl::display::BitmapData_obj::__alloc( HX_CTX ,width,height,true,0);
HXLINE( 426)		 ::flixel::graphics::FlxGraphic graphic = ::flixel::FlxG_obj::bitmap->add(combined,null(),null());
HXLINE( 427)		 ::flixel::graphics::frames::FlxTileFrames result =  ::flixel::graphics::frames::FlxTileFrames_obj::__alloc( HX_CTX ,graphic,null());
HXLINE( 428)		 ::openfl::geom::Point destPoint =  ::openfl::geom::Point_obj::__alloc( HX_CTX ,borderX,borderY);
HXLINE( 430)		 ::flixel::math::FlxRect _this = ::flixel::math::FlxRect_obj::_pool->get();
HXDLIN( 430)		_this->x = ( (Float)(0) );
HXDLIN( 430)		_this->y = ( (Float)(0) );
HXDLIN( 430)		_this->width = ( (Float)(width) );
HXDLIN( 430)		_this->height = ( (Float)(height) );
HXDLIN( 430)		 ::flixel::math::FlxRect rect = _this;
HXDLIN( 430)		rect->_inPool = false;
HXDLIN( 430)		result->region = rect;
HXLINE( 431)		result->atlasFrame = null();
HXLINE( 432)		 ::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(tileWidth,tileHeight);
HXDLIN( 432)		point->_inPool = false;
HXDLIN( 432)		result->tileSize = point;
HXLINE( 433)		 ::flixel::math::FlxPoint point1 = ::flixel::math::FlxPoint_obj::_pool->get()->set(spaceX,spaceY);
HXDLIN( 433)		point1->_inPool = false;
HXDLIN( 433)		result->tileSpacing = point1;
HXLINE( 434)		result->numCols = cols;
HXLINE( 435)		result->numRows = rows;
HXLINE( 437)		{
HXLINE( 437)			int _g1 = 0;
HXDLIN( 437)			while((_g1 < tileframes->length)){
HXLINE( 437)				 ::flixel::graphics::frames::FlxTileFrames collection = tileframes->__get(_g1).StaticCast<  ::flixel::graphics::frames::FlxTileFrames >();
HXDLIN( 437)				_g1 = (_g1 + 1);
HXLINE( 439)				{
HXLINE( 439)					int _g = 0;
HXDLIN( 439)					::Array< ::Dynamic> _g2 = collection->frames;
HXDLIN( 439)					while((_g < _g2->length)){
HXLINE( 439)						 ::flixel::graphics::frames::FlxFrame frame = _g2->__get(_g).StaticCast<  ::flixel::graphics::frames::FlxFrame >();
HXDLIN( 439)						_g = (_g + 1);
HXLINE( 441)						frame->paint(combined,destPoint,true,null());
HXLINE( 443)						Float X = destPoint->x;
HXDLIN( 443)						Float Y = destPoint->y;
HXDLIN( 443)						 ::flixel::math::FlxRect _this = ::flixel::math::FlxRect_obj::_pool->get();
HXDLIN( 443)						_this->x = X;
HXDLIN( 443)						_this->y = Y;
HXDLIN( 443)						_this->width = ( (Float)(tileWidth) );
HXDLIN( 443)						_this->height = ( (Float)(tileHeight) );
HXDLIN( 443)						 ::flixel::math::FlxRect rect = _this;
HXDLIN( 443)						rect->_inPool = false;
HXDLIN( 443)						 ::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(tileWidth,tileHeight);
HXDLIN( 443)						point->_inPool = false;
HXDLIN( 443)						 ::flixel::math::FlxPoint point1 = ::flixel::math::FlxPoint_obj::_pool->get()->set(0,0);
HXDLIN( 443)						point1->_inPool = false;
HXDLIN( 443)						result->addAtlasFrame(rect,point,point1,null(),null(),null(),null());
HXLINE( 444)						 ::openfl::geom::Point destPoint1 = destPoint;
HXDLIN( 444)						destPoint1->x = (destPoint1->x + ((tileWidth + (2 * borderX)) + spaceX));
HXLINE( 446)						if ((destPoint->x >= combined->width)) {
HXLINE( 448)							destPoint->x = ( (Float)(borderX) );
HXLINE( 449)							 ::openfl::geom::Point destPoint1 = destPoint;
HXDLIN( 449)							destPoint1->y = (destPoint1->y + ((tileHeight + (2 * borderY)) + spaceY));
            						}
            					}
            				}
            			}
            		}
HXLINE( 454)		::flixel::util::FlxBitmapDataUtil_obj::copyBorderPixels(combined,tileWidth,tileHeight,spaceX,spaceY,borderX,borderY,cols,rows);
HXLINE( 455)		return result;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxTileFrames_obj,combineTileFrames,return )

 ::flixel::graphics::frames::FlxTileFrames FlxTileFrames_obj::findFrame( ::flixel::graphics::FlxGraphic graphic, ::flixel::math::FlxPoint tileSize, ::flixel::math::FlxRect region, ::flixel::graphics::frames::FlxFrame atlasFrame, ::flixel::math::FlxPoint tileSpacing, ::flixel::math::FlxPoint border){
            	HX_STACKFRAME(&_hx_pos_43be537ea661b39f_472_findFrame)
HXLINE( 473)		 ::flixel::graphics::frames::FlxFrameCollectionType type = ::flixel::graphics::frames::FlxFrameCollectionType_obj::TILES_dyn();
HXDLIN( 473)		::cpp::VirtualArray collections = ( (::cpp::VirtualArray)(graphic->frameCollections->get(type)) );
HXDLIN( 473)		if (::hx::IsNull( collections )) {
HXLINE( 473)			collections = ::Array_obj< ::Dynamic>::__new();
HXDLIN( 473)			graphic->frameCollections->set(type,collections);
            		}
HXDLIN( 473)		::Array< ::Dynamic> tileFrames = collections;
HXLINE( 475)		{
HXLINE( 475)			int _g = 0;
HXDLIN( 475)			while((_g < tileFrames->length)){
HXLINE( 475)				 ::flixel::graphics::frames::FlxTileFrames sheet = tileFrames->__get(_g).StaticCast<  ::flixel::graphics::frames::FlxTileFrames >();
HXDLIN( 475)				_g = (_g + 1);
HXLINE( 477)				if (sheet->equals(tileSize,region,null(),tileSpacing,border)) {
HXLINE( 478)					return sheet;
            				}
            			}
            		}
HXLINE( 481)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(FlxTileFrames_obj,findFrame,return )


::hx::ObjectPtr< FlxTileFrames_obj > FlxTileFrames_obj::__new( ::flixel::graphics::FlxGraphic parent, ::flixel::math::FlxPoint border) {
	::hx::ObjectPtr< FlxTileFrames_obj > __this = new FlxTileFrames_obj();
	__this->__construct(parent,border);
	return __this;
}

::hx::ObjectPtr< FlxTileFrames_obj > FlxTileFrames_obj::__alloc(::hx::Ctx *_hx_ctx, ::flixel::graphics::FlxGraphic parent, ::flixel::math::FlxPoint border) {
	FlxTileFrames_obj *__this = (FlxTileFrames_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxTileFrames_obj), true, "flixel.graphics.frames.FlxTileFrames"));
	*(void **)__this = FlxTileFrames_obj::_hx_vtable;
	__this->__construct(parent,border);
	return __this;
}

FlxTileFrames_obj::FlxTileFrames_obj()
{
}

void FlxTileFrames_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxTileFrames);
	HX_MARK_MEMBER_NAME(atlasFrame,"atlasFrame");
	HX_MARK_MEMBER_NAME(region,"region");
	HX_MARK_MEMBER_NAME(tileSize,"tileSize");
	HX_MARK_MEMBER_NAME(tileSpacing,"tileSpacing");
	HX_MARK_MEMBER_NAME(numRows,"numRows");
	HX_MARK_MEMBER_NAME(numCols,"numCols");
	 ::flixel::graphics::frames::FlxFramesCollection_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxTileFrames_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(atlasFrame,"atlasFrame");
	HX_VISIT_MEMBER_NAME(region,"region");
	HX_VISIT_MEMBER_NAME(tileSize,"tileSize");
	HX_VISIT_MEMBER_NAME(tileSpacing,"tileSpacing");
	HX_VISIT_MEMBER_NAME(numRows,"numRows");
	HX_VISIT_MEMBER_NAME(numCols,"numCols");
	 ::flixel::graphics::frames::FlxFramesCollection_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val FlxTileFrames_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"region") ) { return ::hx::Val( region ); }
		if (HX_FIELD_EQ(inName,"equals") ) { return ::hx::Val( equals_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"numRows") ) { return ::hx::Val( numRows ); }
		if (HX_FIELD_EQ(inName,"numCols") ) { return ::hx::Val( numCols ); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"tileSize") ) { return ::hx::Val( tileSize ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"addBorder") ) { return ::hx::Val( addBorder_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"atlasFrame") ) { return ::hx::Val( atlasFrame ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"tileSpacing") ) { return ::hx::Val( tileSpacing ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"getByTilePosition") ) { return ::hx::Val( getByTilePosition_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool FlxTileFrames_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"fromFrame") ) { outValue = fromFrame_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"findFrame") ) { outValue = findFrame_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fromFrames") ) { outValue = fromFrames_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"fromGraphic") ) { outValue = fromGraphic_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"fromRectangle") ) { outValue = fromRectangle_dyn(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"combineTileSets") ) { outValue = combineTileSets_dyn(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"fromAtlasByPrefix") ) { outValue = fromAtlasByPrefix_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"combineTileFrames") ) { outValue = combineTileFrames_dyn(); return true; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"fromFrameAddSpacesAndBorders") ) { outValue = fromFrameAddSpacesAndBorders_dyn(); return true; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"fromBitmapAddSpacesAndBorders") ) { outValue = fromBitmapAddSpacesAndBorders_dyn(); return true; }
	}
	return false;
}

::hx::Val FlxTileFrames_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"region") ) { region=inValue.Cast<  ::flixel::math::FlxRect >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"numRows") ) { numRows=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"numCols") ) { numCols=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"tileSize") ) { tileSize=inValue.Cast<  ::flixel::math::FlxPoint >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"atlasFrame") ) { atlasFrame=inValue.Cast<  ::flixel::graphics::frames::FlxFrame >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"tileSpacing") ) { tileSpacing=inValue.Cast<  ::flixel::math::FlxPoint >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxTileFrames_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("atlasFrame",e2,8a,40,e9));
	outFields->push(HX_("region",f4,c0,8c,00));
	outFields->push(HX_("tileSize",0f,c7,59,86));
	outFields->push(HX_("tileSpacing",f5,71,1f,31));
	outFields->push(HX_("numRows",7f,9a,2f,9f));
	outFields->push(HX_("numCols",99,5d,45,95));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxTileFrames_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::graphics::frames::FlxFrame */ ,(int)offsetof(FlxTileFrames_obj,atlasFrame),HX_("atlasFrame",e2,8a,40,e9)},
	{::hx::fsObject /*  ::flixel::math::FlxRect */ ,(int)offsetof(FlxTileFrames_obj,region),HX_("region",f4,c0,8c,00)},
	{::hx::fsObject /*  ::flixel::math::FlxPoint */ ,(int)offsetof(FlxTileFrames_obj,tileSize),HX_("tileSize",0f,c7,59,86)},
	{::hx::fsObject /*  ::flixel::math::FlxPoint */ ,(int)offsetof(FlxTileFrames_obj,tileSpacing),HX_("tileSpacing",f5,71,1f,31)},
	{::hx::fsInt,(int)offsetof(FlxTileFrames_obj,numRows),HX_("numRows",7f,9a,2f,9f)},
	{::hx::fsInt,(int)offsetof(FlxTileFrames_obj,numCols),HX_("numCols",99,5d,45,95)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *FlxTileFrames_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxTileFrames_obj_sMemberFields[] = {
	HX_("atlasFrame",e2,8a,40,e9),
	HX_("region",f4,c0,8c,00),
	HX_("tileSize",0f,c7,59,86),
	HX_("tileSpacing",f5,71,1f,31),
	HX_("numRows",7f,9a,2f,9f),
	HX_("numCols",99,5d,45,95),
	HX_("getByTilePosition",a4,3d,28,5c),
	HX_("equals",3f,ee,f2,bf),
	HX_("addBorder",ed,81,3e,1c),
	HX_("destroy",fa,2c,86,24),
	::String(null()) };

::hx::Class FlxTileFrames_obj::__mClass;

static ::String FlxTileFrames_obj_sStaticFields[] = {
	HX_("fromBitmapAddSpacesAndBorders",05,1a,dd,f3),
	HX_("fromFrameAddSpacesAndBorders",db,16,d1,bd),
	HX_("fromFrame",63,62,0c,bb),
	HX_("fromFrames",b0,b4,c9,ef),
	HX_("fromAtlasByPrefix",6a,fb,8c,24),
	HX_("fromGraphic",5e,be,47,0c),
	HX_("fromRectangle",65,11,66,8d),
	HX_("combineTileSets",7e,b6,33,f9),
	HX_("combineTileFrames",d3,68,6b,b3),
	HX_("findFrame",34,a9,7a,f5),
	::String(null())
};

void FlxTileFrames_obj::__register()
{
	FlxTileFrames_obj _hx_dummy;
	FlxTileFrames_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.graphics.frames.FlxTileFrames",8f,b0,85,cc);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxTileFrames_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(FlxTileFrames_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxTileFrames_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxTileFrames_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxTileFrames_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxTileFrames_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace graphics
} // end namespace frames
