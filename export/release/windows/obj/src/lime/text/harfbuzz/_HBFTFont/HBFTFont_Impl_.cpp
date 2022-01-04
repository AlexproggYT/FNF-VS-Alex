#include <hxcpp.h>

#ifndef INCLUDED_lime__internal_backend_native_NativeCFFI
#include <lime/_internal/backend/native/NativeCFFI.h>
#endif
#ifndef INCLUDED_lime_text_Font
#include <lime/text/Font.h>
#endif
#ifndef INCLUDED_lime_text_harfbuzz__HBFTFont_HBFTFont_Impl_
#include <lime/text/harfbuzz/_HBFTFont/HBFTFont_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_81c0fd5da51325f5_14__new,"lime.text.harfbuzz._HBFTFont.HBFTFont_Impl_","_new",0xd8f4aeda,"lime.text.harfbuzz._HBFTFont.HBFTFont_Impl_._new","lime/text/harfbuzz/HBFTFont.hx",14,0x01297080)
HX_LOCAL_STACK_FRAME(_hx_pos_81c0fd5da51325f5_35_get_loadFlags,"lime.text.harfbuzz._HBFTFont.HBFTFont_Impl_","get_loadFlags",0x47893a7f,"lime.text.harfbuzz._HBFTFont.HBFTFont_Impl_.get_loadFlags","lime/text/harfbuzz/HBFTFont.hx",35,0x01297080)
HX_LOCAL_STACK_FRAME(_hx_pos_81c0fd5da51325f5_42_set_loadFlags,"lime.text.harfbuzz._HBFTFont.HBFTFont_Impl_","set_loadFlags",0x8c8f1c8b,"lime.text.harfbuzz._HBFTFont.HBFTFont_Impl_.set_loadFlags","lime/text/harfbuzz/HBFTFont.hx",42,0x01297080)
namespace lime{
namespace text{
namespace harfbuzz{
namespace _HBFTFont{

void HBFTFont_Impl__obj::__construct() { }

Dynamic HBFTFont_Impl__obj::__CreateEmpty() { return new HBFTFont_Impl__obj; }

void *HBFTFont_Impl__obj::_hx_vtable = 0;

Dynamic HBFTFont_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< HBFTFont_Impl__obj > _hx_result = new HBFTFont_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool HBFTFont_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x774c06eb;
}

 ::Dynamic HBFTFont_Impl__obj::_new( ::lime::text::Font font){
            	HX_STACKFRAME(&_hx_pos_81c0fd5da51325f5_14__new)
HXDLIN(  14)		 ::Dynamic this1;
HXLINE(  16)		if (::hx::IsNotNull( font->src )) {
HXLINE(  20)			this1 = ( ( ::Dynamic)(::lime::_internal::backend::native::NativeCFFI_obj::lime_hb_ft_font_create_referenced(::hx::DynamicPtr(font->src))) );
            		}
            		else {
HXLINE(  27)			this1 = null();
            		}
HXLINE(  14)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(HBFTFont_Impl__obj,_new,return )

int HBFTFont_Impl__obj::get_loadFlags( ::Dynamic this1){
            	HX_STACKFRAME(&_hx_pos_81c0fd5da51325f5_35_get_loadFlags)
HXDLIN(  35)		return ::lime::_internal::backend::native::NativeCFFI_obj::lime_hb_ft_font_get_load_flags(::hx::DynamicPtr(this1));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(HBFTFont_Impl__obj,get_loadFlags,return )

int HBFTFont_Impl__obj::set_loadFlags( ::Dynamic this1,int value){
            	HX_STACKFRAME(&_hx_pos_81c0fd5da51325f5_42_set_loadFlags)
HXLINE(  44)		::lime::_internal::backend::native::NativeCFFI_obj::lime_hb_ft_font_set_load_flags(::hx::DynamicPtr(this1),value);
HXLINE(  46)		return value;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(HBFTFont_Impl__obj,set_loadFlags,return )


HBFTFont_Impl__obj::HBFTFont_Impl__obj()
{
}

bool HBFTFont_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_loadFlags") ) { outValue = get_loadFlags_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"set_loadFlags") ) { outValue = set_loadFlags_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *HBFTFont_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *HBFTFont_Impl__obj_sStaticStorageInfo = 0;
#endif

::hx::Class HBFTFont_Impl__obj::__mClass;

static ::String HBFTFont_Impl__obj_sStaticFields[] = {
	HX_("_new",61,15,1f,3f),
	HX_("get_loadFlags",18,4b,27,df),
	HX_("set_loadFlags",24,2d,2d,24),
	::String(null())
};

void HBFTFont_Impl__obj::__register()
{
	HBFTFont_Impl__obj _hx_dummy;
	HBFTFont_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime.text.harfbuzz._HBFTFont.HBFTFont_Impl_",95,39,f7,cd);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &HBFTFont_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(HBFTFont_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< HBFTFont_Impl__obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = HBFTFont_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = HBFTFont_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace text
} // end namespace harfbuzz
} // end namespace _HBFTFont
