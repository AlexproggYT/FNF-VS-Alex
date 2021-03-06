#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_CustomFadeTransition
#include <CustomFadeTransition.h>
#endif
#ifndef INCLUDED_MusicBeatSubstate
#include <MusicBeatSubstate.h>
#endif
#ifndef INCLUDED_Paths
#include <Paths.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_FlxSubState
#include <flixel/FlxSubState.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxEase
#include <flixel/tweens/FlxEase.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_VarTween
#include <flixel/tweens/misc/VarTween.h>
#endif
#ifndef INCLUDED_flixel_util_FlxGradient
#include <flixel/util/FlxGradient.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_11636191a51c3638_17_new,"CustomFadeTransition","new",0x93baefd4,"CustomFadeTransition.new","CustomFadeTransition.hx",17,0xa4d2e61c)
static const int _hx_array_data_00f1b5e2_1[] = {
	(int)0,(int)-16777216,
};
static const int _hx_array_data_00f1b5e2_2[] = {
	(int)-16777216,(int)0,
};
HX_DEFINE_STACK_FRAME(_hx_pos_11636191a51c3638_47_new,"CustomFadeTransition","new",0x93baefd4,"CustomFadeTransition.new","CustomFadeTransition.hx",47,0xa4d2e61c)
HX_DEFINE_STACK_FRAME(_hx_pos_11636191a51c3638_55_new,"CustomFadeTransition","new",0x93baefd4,"CustomFadeTransition.new","CustomFadeTransition.hx",55,0xa4d2e61c)
HX_LOCAL_STACK_FRAME(_hx_pos_11636191a51c3638_69_update,"CustomFadeTransition","update",0x98488715,"CustomFadeTransition.update","CustomFadeTransition.hx",69,0xa4d2e61c)
HX_LOCAL_STACK_FRAME(_hx_pos_11636191a51c3638_83_destroy,"CustomFadeTransition","destroy",0x2de4166e,"CustomFadeTransition.destroy","CustomFadeTransition.hx",83,0xa4d2e61c)

void CustomFadeTransition_obj::__construct(Float duration,bool isTransIn){
            	HX_GC_STACKFRAME(&_hx_pos_11636191a51c3638_17_new)
HXLINE(  21)		this->isTransIn = false;
HXLINE(  19)		this->leTween = null();
HXLINE(  25)		 ::CustomFadeTransition _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  26)		super::__construct();
HXLINE(  28)		this->isTransIn = isTransIn;
HXLINE(  29)		Float zoom = ::Math_obj::max(((Float)0.05),::Math_obj::min(( (Float)(1) ),::flixel::FlxG_obj::camera->zoom));
HXLINE(  30)		int width = ::Std_obj::_hx_int((( (Float)(::flixel::FlxG_obj::width) ) / zoom));
HXLINE(  31)		int height = ::Std_obj::_hx_int((( (Float)(::flixel::FlxG_obj::height) ) / zoom));
HXLINE(  32)		::Array< int > _hx_tmp;
HXDLIN(  32)		if (isTransIn) {
HXLINE(  32)			_hx_tmp = ::Array_obj< int >::fromData( _hx_array_data_00f1b5e2_1,2);
            		}
            		else {
HXLINE(  32)			_hx_tmp = ::Array_obj< int >::fromData( _hx_array_data_00f1b5e2_2,2);
            		}
HXDLIN(  32)		this->transGradient = ::flixel::util::FlxGradient_obj::createGradientFlxSprite(width,height,_hx_tmp,null(),null(),null());
HXLINE(  33)		this->transGradient->scrollFactor->set(null(),null());
HXLINE(  34)		this->add(this->transGradient);
HXLINE(  36)		this->transBlack =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null())->makeGraphic(width,(height + 400),-16777216,null(),null());
HXLINE(  37)		this->transBlack->scrollFactor->set(null(),null());
HXLINE(  38)		this->add(this->transBlack);
HXLINE(  40)		 ::flixel::FlxSprite fh = this->transGradient;
HXDLIN(  40)		fh->set_x((fh->x - (( (Float)((width - ::flixel::FlxG_obj::width)) ) / ( (Float)(2) ))));
HXLINE(  41)		this->transBlack->set_x(this->transGradient->x);
HXLINE(  43)		if (isTransIn) {
            			HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::CustomFadeTransition,_gthis) HXARGC(1)
            			void _hx_run( ::flixel::tweens::FlxTween twn){
            				HX_GC_STACKFRAME(&_hx_pos_11636191a51c3638_47_new)
HXLINE(  47)				_gthis->close();
            			}
            			HX_END_LOCAL_FUNC1((void))

HXLINE(  44)			 ::flixel::FlxSprite _hx_tmp = this->transGradient;
HXDLIN(  44)			Float _hx_tmp1 = this->transBlack->y;
HXDLIN(  44)			_hx_tmp->set_y((_hx_tmp1 - this->transBlack->get_height()));
HXLINE(  45)			 ::flixel::FlxSprite _hx_tmp2 = this->transGradient;
HXDLIN(  45)			Float _hx_tmp3 = (this->transGradient->get_height() + 50);
HXDLIN(  45)			::flixel::tweens::FlxTween_obj::tween(_hx_tmp2, ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("y",79,00,00,00),_hx_tmp3)),duration, ::Dynamic(::hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::linear_dyn())
            				->setFixed(1,HX_("onComplete",f8,d4,7e,5d), ::Dynamic(new _hx_Closure_0(_gthis)))));
            		}
            		else {
            			HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_1) HXARGC(1)
            			void _hx_run( ::flixel::tweens::FlxTween twn){
            				HX_GC_STACKFRAME(&_hx_pos_11636191a51c3638_55_new)
HXLINE(  55)				if (::hx::IsNotNull( ::CustomFadeTransition_obj::finishCallback )) {
HXLINE(  56)					::CustomFadeTransition_obj::finishCallback();
            				}
            			}
            			HX_END_LOCAL_FUNC1((void))

HXLINE(  51)			 ::flixel::FlxSprite _hx_tmp = this->transGradient;
HXDLIN(  51)			_hx_tmp->set_y(-(this->transGradient->get_height()));
HXLINE(  52)			 ::flixel::FlxSprite _hx_tmp1 = this->transBlack;
HXDLIN(  52)			Float _hx_tmp2 = this->transGradient->y;
HXDLIN(  52)			_hx_tmp1->set_y(((_hx_tmp2 - this->transBlack->get_height()) + 50));
HXLINE(  53)			 ::flixel::FlxSprite _hx_tmp3 = this->transGradient;
HXDLIN(  53)			Float _hx_tmp4 = (this->transGradient->get_height() + 50);
HXDLIN(  53)			this->leTween = ::flixel::tweens::FlxTween_obj::tween(_hx_tmp3, ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("y",79,00,00,00),_hx_tmp4)),duration, ::Dynamic(::hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::linear_dyn())
            				->setFixed(1,HX_("onComplete",f8,d4,7e,5d), ::Dynamic(new _hx_Closure_1()))));
            		}
HXLINE(  62)		if (::hx::IsNotNull( ::CustomFadeTransition_obj::nextCamera )) {
HXLINE(  63)			this->transBlack->set_cameras(::Array_obj< ::Dynamic>::__new(1)->init(0,::CustomFadeTransition_obj::nextCamera));
HXLINE(  64)			this->transGradient->set_cameras(::Array_obj< ::Dynamic>::__new(1)->init(0,::CustomFadeTransition_obj::nextCamera));
            		}
HXLINE(  66)		::CustomFadeTransition_obj::nextCamera = null();
            	}

Dynamic CustomFadeTransition_obj::__CreateEmpty() { return new CustomFadeTransition_obj; }

void *CustomFadeTransition_obj::_hx_vtable = 0;

Dynamic CustomFadeTransition_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< CustomFadeTransition_obj > _hx_result = new CustomFadeTransition_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool CustomFadeTransition_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x62817b24) {
		if (inClassId<=(int)0x5661ffbf) {
			if (inClassId<=(int)0x0add7632) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x0add7632;
			} else {
				return inClassId==(int)0x5661ffbf;
			}
		} else {
			return inClassId==(int)0x62817b24;
		}
	} else {
		if (inClassId<=(int)0x7ccf8994) {
			return inClassId==(int)0x7c795c9f || inClassId==(int)0x7ccf8994;
		} else {
			return inClassId==(int)0x7fce3ab0;
		}
	}
}

void CustomFadeTransition_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_11636191a51c3638_69_update)
HXLINE(  70)		if (this->isTransIn) {
HXLINE(  71)			 ::flixel::FlxSprite _hx_tmp = this->transBlack;
HXDLIN(  71)			Float _hx_tmp1 = this->transGradient->y;
HXDLIN(  71)			_hx_tmp->set_y((_hx_tmp1 + this->transGradient->get_height()));
            		}
            		else {
HXLINE(  73)			 ::flixel::FlxSprite _hx_tmp = this->transBlack;
HXDLIN(  73)			Float _hx_tmp1 = this->transGradient->y;
HXDLIN(  73)			_hx_tmp->set_y((_hx_tmp1 - this->transBlack->get_height()));
            		}
HXLINE(  75)		this->super::update(elapsed);
HXLINE(  76)		if (this->isTransIn) {
HXLINE(  77)			 ::flixel::FlxSprite _hx_tmp = this->transBlack;
HXDLIN(  77)			Float _hx_tmp1 = this->transGradient->y;
HXDLIN(  77)			_hx_tmp->set_y((_hx_tmp1 + this->transGradient->get_height()));
            		}
            		else {
HXLINE(  79)			 ::flixel::FlxSprite _hx_tmp = this->transBlack;
HXDLIN(  79)			Float _hx_tmp1 = this->transGradient->y;
HXDLIN(  79)			_hx_tmp->set_y((_hx_tmp1 - this->transBlack->get_height()));
            		}
            	}


void CustomFadeTransition_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_11636191a51c3638_83_destroy)
HXLINE(  84)		if (::hx::IsNotNull( this->leTween )) {
HXLINE(  86)			if (this->isTransIn) {
HXLINE(  87)				::Paths_obj::destroyLoadedImages(null());
            			}
HXLINE(  90)			::CustomFadeTransition_obj::finishCallback();
HXLINE(  91)			this->leTween->cancel();
            		}
HXLINE(  93)		this->super::destroy();
            	}


 ::Dynamic CustomFadeTransition_obj::finishCallback;

 ::flixel::FlxCamera CustomFadeTransition_obj::nextCamera;


::hx::ObjectPtr< CustomFadeTransition_obj > CustomFadeTransition_obj::__new(Float duration,bool isTransIn) {
	::hx::ObjectPtr< CustomFadeTransition_obj > __this = new CustomFadeTransition_obj();
	__this->__construct(duration,isTransIn);
	return __this;
}

::hx::ObjectPtr< CustomFadeTransition_obj > CustomFadeTransition_obj::__alloc(::hx::Ctx *_hx_ctx,Float duration,bool isTransIn) {
	CustomFadeTransition_obj *__this = (CustomFadeTransition_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(CustomFadeTransition_obj), true, "CustomFadeTransition"));
	*(void **)__this = CustomFadeTransition_obj::_hx_vtable;
	__this->__construct(duration,isTransIn);
	return __this;
}

CustomFadeTransition_obj::CustomFadeTransition_obj()
{
}

void CustomFadeTransition_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CustomFadeTransition);
	HX_MARK_MEMBER_NAME(leTween,"leTween");
	HX_MARK_MEMBER_NAME(isTransIn,"isTransIn");
	HX_MARK_MEMBER_NAME(transBlack,"transBlack");
	HX_MARK_MEMBER_NAME(transGradient,"transGradient");
	 ::flixel::FlxSubState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void CustomFadeTransition_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(leTween,"leTween");
	HX_VISIT_MEMBER_NAME(isTransIn,"isTransIn");
	HX_VISIT_MEMBER_NAME(transBlack,"transBlack");
	HX_VISIT_MEMBER_NAME(transGradient,"transGradient");
	 ::flixel::FlxSubState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val CustomFadeTransition_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"leTween") ) { return ::hx::Val( leTween ); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"isTransIn") ) { return ::hx::Val( isTransIn ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"transBlack") ) { return ::hx::Val( transBlack ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"transGradient") ) { return ::hx::Val( transGradient ); }
	}
	return super::__Field(inName,inCallProp);
}

bool CustomFadeTransition_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"nextCamera") ) { outValue = ( nextCamera ); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"finishCallback") ) { outValue = ( finishCallback ); return true; }
	}
	return false;
}

::hx::Val CustomFadeTransition_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"leTween") ) { leTween=inValue.Cast<  ::flixel::tweens::FlxTween >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"isTransIn") ) { isTransIn=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"transBlack") ) { transBlack=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"transGradient") ) { transGradient=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool CustomFadeTransition_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"nextCamera") ) { nextCamera=ioValue.Cast<  ::flixel::FlxCamera >(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"finishCallback") ) { finishCallback=ioValue.Cast<  ::Dynamic >(); return true; }
	}
	return false;
}

void CustomFadeTransition_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("leTween",32,a5,b7,99));
	outFields->push(HX_("isTransIn",63,af,52,93));
	outFields->push(HX_("transBlack",77,1c,bf,de));
	outFields->push(HX_("transGradient",38,f6,20,1d));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo CustomFadeTransition_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::tweens::FlxTween */ ,(int)offsetof(CustomFadeTransition_obj,leTween),HX_("leTween",32,a5,b7,99)},
	{::hx::fsBool,(int)offsetof(CustomFadeTransition_obj,isTransIn),HX_("isTransIn",63,af,52,93)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(CustomFadeTransition_obj,transBlack),HX_("transBlack",77,1c,bf,de)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(CustomFadeTransition_obj,transGradient),HX_("transGradient",38,f6,20,1d)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo CustomFadeTransition_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &CustomFadeTransition_obj::finishCallback,HX_("finishCallback",38,a1,bc,b4)},
	{::hx::fsObject /*  ::flixel::FlxCamera */ ,(void *) &CustomFadeTransition_obj::nextCamera,HX_("nextCamera",f8,f7,bd,6c)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String CustomFadeTransition_obj_sMemberFields[] = {
	HX_("leTween",32,a5,b7,99),
	HX_("isTransIn",63,af,52,93),
	HX_("transBlack",77,1c,bf,de),
	HX_("transGradient",38,f6,20,1d),
	HX_("update",09,86,05,87),
	HX_("destroy",fa,2c,86,24),
	::String(null()) };

static void CustomFadeTransition_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CustomFadeTransition_obj::finishCallback,"finishCallback");
	HX_MARK_MEMBER_NAME(CustomFadeTransition_obj::nextCamera,"nextCamera");
};

#ifdef HXCPP_VISIT_ALLOCS
static void CustomFadeTransition_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CustomFadeTransition_obj::finishCallback,"finishCallback");
	HX_VISIT_MEMBER_NAME(CustomFadeTransition_obj::nextCamera,"nextCamera");
};

#endif

::hx::Class CustomFadeTransition_obj::__mClass;

static ::String CustomFadeTransition_obj_sStaticFields[] = {
	HX_("finishCallback",38,a1,bc,b4),
	HX_("nextCamera",f8,f7,bd,6c),
	::String(null())
};

void CustomFadeTransition_obj::__register()
{
	CustomFadeTransition_obj _hx_dummy;
	CustomFadeTransition_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("CustomFadeTransition",e2,b5,f1,00);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &CustomFadeTransition_obj::__GetStatic;
	__mClass->mSetStaticField = &CustomFadeTransition_obj::__SetStatic;
	__mClass->mMarkFunc = CustomFadeTransition_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(CustomFadeTransition_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(CustomFadeTransition_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< CustomFadeTransition_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = CustomFadeTransition_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CustomFadeTransition_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CustomFadeTransition_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

