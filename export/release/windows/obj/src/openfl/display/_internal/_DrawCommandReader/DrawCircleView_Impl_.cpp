#include <hxcpp.h>

#ifndef INCLUDED_openfl_display__internal_DrawCommandBuffer
#include <openfl/display/_internal/DrawCommandBuffer.h>
#endif
#ifndef INCLUDED_openfl_display__internal_DrawCommandReader
#include <openfl/display/_internal/DrawCommandReader.h>
#endif
#ifndef INCLUDED_openfl_display__internal__DrawCommandReader_DrawCircleView_Impl_
#include <openfl/display/_internal/_DrawCommandReader/DrawCircleView_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_c4c10c39864eebc6_558__new,"openfl.display._internal._DrawCommandReader.DrawCircleView_Impl_","_new",0x6f17464f,"openfl.display._internal._DrawCommandReader.DrawCircleView_Impl_._new","openfl/display/_internal/DrawCommandReader.hx",558,0x29f77eb3)
HX_LOCAL_STACK_FRAME(_hx_pos_c4c10c39864eebc6_567_get_x,"openfl.display._internal._DrawCommandReader.DrawCircleView_Impl_","get_x",0x5a9344a1,"openfl.display._internal._DrawCommandReader.DrawCircleView_Impl_.get_x","openfl/display/_internal/DrawCommandReader.hx",567,0x29f77eb3)
HX_LOCAL_STACK_FRAME(_hx_pos_c4c10c39864eebc6_574_get_y,"openfl.display._internal._DrawCommandReader.DrawCircleView_Impl_","get_y",0x5a9344a2,"openfl.display._internal._DrawCommandReader.DrawCircleView_Impl_.get_y","openfl/display/_internal/DrawCommandReader.hx",574,0x29f77eb3)
HX_LOCAL_STACK_FRAME(_hx_pos_c4c10c39864eebc6_581_get_radius,"openfl.display._internal._DrawCommandReader.DrawCircleView_Impl_","get_radius",0xcaaed789,"openfl.display._internal._DrawCommandReader.DrawCircleView_Impl_.get_radius","openfl/display/_internal/DrawCommandReader.hx",581,0x29f77eb3)
namespace openfl{
namespace display{
namespace _internal{
namespace _DrawCommandReader{

void DrawCircleView_Impl__obj::__construct() { }

Dynamic DrawCircleView_Impl__obj::__CreateEmpty() { return new DrawCircleView_Impl__obj; }

void *DrawCircleView_Impl__obj::_hx_vtable = 0;

Dynamic DrawCircleView_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< DrawCircleView_Impl__obj > _hx_result = new DrawCircleView_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool DrawCircleView_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x2b84d64e;
}

 ::openfl::display::_internal::DrawCommandReader DrawCircleView_Impl__obj::_new( ::openfl::display::_internal::DrawCommandReader d){
            	HX_STACKFRAME(&_hx_pos_c4c10c39864eebc6_558__new)
HXDLIN( 558)		 ::openfl::display::_internal::DrawCommandReader this1 = d;
HXDLIN( 558)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(DrawCircleView_Impl__obj,_new,return )

Float DrawCircleView_Impl__obj::get_x( ::openfl::display::_internal::DrawCommandReader this1){
            	HX_STACKFRAME(&_hx_pos_c4c10c39864eebc6_567_get_x)
HXDLIN( 567)		return this1->buffer->f->__get(this1->fPos);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(DrawCircleView_Impl__obj,get_x,return )

Float DrawCircleView_Impl__obj::get_y( ::openfl::display::_internal::DrawCommandReader this1){
            	HX_STACKFRAME(&_hx_pos_c4c10c39864eebc6_574_get_y)
HXDLIN( 574)		return this1->buffer->f->__get((this1->fPos + 1));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(DrawCircleView_Impl__obj,get_y,return )

Float DrawCircleView_Impl__obj::get_radius( ::openfl::display::_internal::DrawCommandReader this1){
            	HX_STACKFRAME(&_hx_pos_c4c10c39864eebc6_581_get_radius)
HXDLIN( 581)		return this1->buffer->f->__get((this1->fPos + 2));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(DrawCircleView_Impl__obj,get_radius,return )


DrawCircleView_Impl__obj::DrawCircleView_Impl__obj()
{
}

bool DrawCircleView_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"get_x") ) { outValue = get_x_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_y") ) { outValue = get_y_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_radius") ) { outValue = get_radius_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *DrawCircleView_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *DrawCircleView_Impl__obj_sStaticStorageInfo = 0;
#endif

::hx::Class DrawCircleView_Impl__obj::__mClass;

static ::String DrawCircleView_Impl__obj_sStaticFields[] = {
	HX_("_new",61,15,1f,3f),
	HX_("get_x",4f,a5,60,91),
	HX_("get_y",50,a5,60,91),
	HX_("get_radius",1b,40,7e,a1),
	::String(null())
};

void DrawCircleView_Impl__obj::__register()
{
	DrawCircleView_Impl__obj _hx_dummy;
	DrawCircleView_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.display._internal._DrawCommandReader.DrawCircleView_Impl_",40,d6,65,34);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &DrawCircleView_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(DrawCircleView_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< DrawCircleView_Impl__obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DrawCircleView_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DrawCircleView_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace display
} // end namespace _internal
} // end namespace _DrawCommandReader
