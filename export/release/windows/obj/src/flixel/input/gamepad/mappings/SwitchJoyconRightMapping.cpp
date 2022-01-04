#include <hxcpp.h>

#ifndef INCLUDED_flixel_input_gamepad_FlxGamepadAnalogStick
#include <flixel/input/gamepad/FlxGamepadAnalogStick.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_FlxGamepadAttachment
#include <flixel/input/gamepad/FlxGamepadAttachment.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_id_SwitchJoyconRightID
#include <flixel/input/gamepad/id/SwitchJoyconRightID.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_mappings_FlxGamepadMapping
#include <flixel/input/gamepad/mappings/FlxGamepadMapping.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_mappings_SwitchJoyconRightMapping
#include <flixel/input/gamepad/mappings/SwitchJoyconRightMapping.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_41147a5694d65537_9_new,"flixel.input.gamepad.mappings.SwitchJoyconRightMapping","new",0xb7cf0aec,"flixel.input.gamepad.mappings.SwitchJoyconRightMapping.new","flixel/input/gamepad/mappings/SwitchJoyconRightMapping.hx",9,0xb5e5a3e6)
HX_LOCAL_STACK_FRAME(_hx_pos_41147a5694d65537_23_initValues,"flixel.input.gamepad.mappings.SwitchJoyconRightMapping","initValues",0x0752ce06,"flixel.input.gamepad.mappings.SwitchJoyconRightMapping.initValues","flixel/input/gamepad/mappings/SwitchJoyconRightMapping.hx",23,0xb5e5a3e6)
HX_LOCAL_STACK_FRAME(_hx_pos_41147a5694d65537_31_getID,"flixel.input.gamepad.mappings.SwitchJoyconRightMapping","getID",0x8a08877d,"flixel.input.gamepad.mappings.SwitchJoyconRightMapping.getID","flixel/input/gamepad/mappings/SwitchJoyconRightMapping.hx",31,0xb5e5a3e6)
HX_LOCAL_STACK_FRAME(_hx_pos_41147a5694d65537_54_getRawID,"flixel.input.gamepad.mappings.SwitchJoyconRightMapping","getRawID",0x3b867941,"flixel.input.gamepad.mappings.SwitchJoyconRightMapping.getRawID","flixel/input/gamepad/mappings/SwitchJoyconRightMapping.hx",54,0xb5e5a3e6)
HX_LOCAL_STACK_FRAME(_hx_pos_41147a5694d65537_81_getInputLabel,"flixel.input.gamepad.mappings.SwitchJoyconRightMapping","getInputLabel",0x2786934c,"flixel.input.gamepad.mappings.SwitchJoyconRightMapping.getInputLabel","flixel/input/gamepad/mappings/SwitchJoyconRightMapping.hx",81,0xb5e5a3e6)
namespace flixel{
namespace input{
namespace gamepad{
namespace mappings{

void SwitchJoyconRightMapping_obj::__construct( ::flixel::input::gamepad::FlxGamepadAttachment attachment){
            	HX_STACKFRAME(&_hx_pos_41147a5694d65537_9_new)
HXDLIN(   9)		super::__construct(attachment);
            	}

Dynamic SwitchJoyconRightMapping_obj::__CreateEmpty() { return new SwitchJoyconRightMapping_obj; }

void *SwitchJoyconRightMapping_obj::_hx_vtable = 0;

Dynamic SwitchJoyconRightMapping_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< SwitchJoyconRightMapping_obj > _hx_result = new SwitchJoyconRightMapping_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool SwitchJoyconRightMapping_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x21e2b607) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x21e2b607;
	} else {
		return inClassId==(int)0x31a9a2ec;
	}
}

void SwitchJoyconRightMapping_obj::initValues(){
            	HX_STACKFRAME(&_hx_pos_41147a5694d65537_23_initValues)
HXLINE(  24)		this->leftStick = ::flixel::input::gamepad::id::SwitchJoyconRightID_obj::LEFT_ANALOG_STICK;
HXLINE(  25)		this->supportsMotion = true;
HXLINE(  26)		this->supportsPointer = false;
            	}


int SwitchJoyconRightMapping_obj::getID(int rawID){
            	HX_STACKFRAME(&_hx_pos_41147a5694d65537_31_getID)
HXDLIN(  31)		switch((int)(rawID)){
            			case (int)5: {
HXLINE(  42)				return 18;
            			}
            			break;
            			case (int)6: {
HXLINE(  33)				return 0;
            			}
            			break;
            			case (int)7: {
HXLINE(  35)				return 1;
            			}
            			break;
            			case (int)8: {
HXLINE(  34)				return 2;
            			}
            			break;
            			case (int)9: {
HXLINE(  36)				return 3;
            			}
            			break;
            			case (int)10: {
HXLINE(  43)				return 30;
            			}
            			break;
            			case (int)11: {
HXLINE(  37)				return 10;
            			}
            			break;
            			case (int)12: {
HXLINE(  38)				return 7;
            			}
            			break;
            			case (int)13: {
HXLINE(  39)				return 8;
            			}
            			break;
            			case (int)15: {
HXLINE(  40)				return 4;
            			}
            			break;
            			case (int)16: {
HXLINE(  41)				return 5;
            			}
            			break;
            			default:{
HXLINE(  44)				int id = rawID;
HXDLIN(  44)				if ((id == this->leftStick->rawUp)) {
HXLINE(  44)					return 34;
            				}
            				else {
HXLINE(  45)					int id = rawID;
HXDLIN(  45)					if ((id == this->leftStick->rawDown)) {
HXLINE(  45)						return 36;
            					}
            					else {
HXLINE(  46)						int id = rawID;
HXDLIN(  46)						if ((id == this->leftStick->rawLeft)) {
HXLINE(  46)							return 37;
            						}
            						else {
HXLINE(  47)							int id = rawID;
HXDLIN(  47)							if ((id == this->leftStick->rawRight)) {
HXLINE(  47)								return 35;
            							}
            							else {
HXLINE(  48)								return -1;
            							}
            						}
            					}
            				}
            			}
            		}
HXLINE(  31)		return null();
            	}


int SwitchJoyconRightMapping_obj::getRawID(int ID){
            	HX_STACKFRAME(&_hx_pos_41147a5694d65537_54_getRawID)
HXDLIN(  54)		switch((int)(ID)){
            			case (int)0: {
HXLINE(  56)				return 6;
            			}
            			break;
            			case (int)1: {
HXLINE(  57)				return 7;
            			}
            			break;
            			case (int)2: {
HXLINE(  58)				return 8;
            			}
            			break;
            			case (int)3: {
HXLINE(  59)				return 9;
            			}
            			break;
            			case (int)4: {
HXLINE(  63)				return 15;
            			}
            			break;
            			case (int)5: {
HXLINE(  64)				return 16;
            			}
            			break;
            			case (int)7: {
HXLINE(  61)				return 12;
            			}
            			break;
            			case (int)8: {
HXLINE(  62)				return 13;
            			}
            			break;
            			case (int)10: {
HXLINE(  60)				return 11;
            			}
            			break;
            			case (int)18: {
HXLINE(  66)				return 5;
            			}
            			break;
            			case (int)30: {
HXLINE(  65)				return 10;
            			}
            			break;
            			case (int)34: {
HXLINE(  67)				return ::flixel::input::gamepad::id::SwitchJoyconRightID_obj::LEFT_ANALOG_STICK->rawUp;
            			}
            			break;
            			case (int)35: {
HXLINE(  70)				return ::flixel::input::gamepad::id::SwitchJoyconRightID_obj::LEFT_ANALOG_STICK->rawRight;
            			}
            			break;
            			case (int)36: {
HXLINE(  68)				return ::flixel::input::gamepad::id::SwitchJoyconRightID_obj::LEFT_ANALOG_STICK->rawDown;
            			}
            			break;
            			case (int)37: {
HXLINE(  69)				return ::flixel::input::gamepad::id::SwitchJoyconRightID_obj::LEFT_ANALOG_STICK->rawLeft;
            			}
            			break;
            			default:{
HXLINE(  75)				return -1;
            			}
            		}
HXLINE(  54)		return 0;
            	}


::String SwitchJoyconRightMapping_obj::getInputLabel(int id){
            	HX_STACKFRAME(&_hx_pos_41147a5694d65537_81_getInputLabel)
HXDLIN(  81)		switch((int)(id)){
            			case (int)0: {
HXLINE(  83)				return HX_("a",61,00,00,00);
            			}
            			break;
            			case (int)1: {
HXLINE(  84)				return HX_("x",78,00,00,00);
            			}
            			break;
            			case (int)2: {
HXLINE(  85)				return HX_("b",62,00,00,00);
            			}
            			break;
            			case (int)3: {
HXLINE(  86)				return HX_("y",79,00,00,00);
            			}
            			break;
            			case (int)4: {
HXLINE(  89)				return HX_("sl",99,64,00,00);
            			}
            			break;
            			case (int)5: {
HXLINE(  90)				return HX_("sr",9f,64,00,00);
            			}
            			break;
            			case (int)7: {
HXLINE(  88)				return HX_("plus",5a,3f,5a,4a);
            			}
            			break;
            			case (int)10: {
HXLINE(  87)				return HX_("home",1f,ca,12,45);
            			}
            			break;
            			case (int)18: {
HXLINE(  91)				return HX_("zr",b8,6a,00,00);
            			}
            			break;
            			case (int)30: {
HXLINE(  92)				return HX_("r",72,00,00,00);
            			}
            			break;
            			default:{
HXLINE(  93)				return this->super::getInputLabel(id);
            			}
            		}
HXLINE(  81)		return null();
            	}



::hx::ObjectPtr< SwitchJoyconRightMapping_obj > SwitchJoyconRightMapping_obj::__new( ::flixel::input::gamepad::FlxGamepadAttachment attachment) {
	::hx::ObjectPtr< SwitchJoyconRightMapping_obj > __this = new SwitchJoyconRightMapping_obj();
	__this->__construct(attachment);
	return __this;
}

::hx::ObjectPtr< SwitchJoyconRightMapping_obj > SwitchJoyconRightMapping_obj::__alloc(::hx::Ctx *_hx_ctx, ::flixel::input::gamepad::FlxGamepadAttachment attachment) {
	SwitchJoyconRightMapping_obj *__this = (SwitchJoyconRightMapping_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(SwitchJoyconRightMapping_obj), true, "flixel.input.gamepad.mappings.SwitchJoyconRightMapping"));
	*(void **)__this = SwitchJoyconRightMapping_obj::_hx_vtable;
	__this->__construct(attachment);
	return __this;
}

SwitchJoyconRightMapping_obj::SwitchJoyconRightMapping_obj()
{
}

::hx::Val SwitchJoyconRightMapping_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"getID") ) { return ::hx::Val( getID_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getRawID") ) { return ::hx::Val( getRawID_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"initValues") ) { return ::hx::Val( initValues_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getInputLabel") ) { return ::hx::Val( getInputLabel_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *SwitchJoyconRightMapping_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *SwitchJoyconRightMapping_obj_sStaticStorageInfo = 0;
#endif

static ::String SwitchJoyconRightMapping_obj_sMemberFields[] = {
	HX_("initValues",12,5f,fc,53),
	HX_("getID",f1,91,60,91),
	HX_("getRawID",4d,6f,fd,43),
	HX_("getInputLabel",c0,31,5c,4a),
	::String(null()) };

::hx::Class SwitchJoyconRightMapping_obj::__mClass;

void SwitchJoyconRightMapping_obj::__register()
{
	SwitchJoyconRightMapping_obj _hx_dummy;
	SwitchJoyconRightMapping_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.input.gamepad.mappings.SwitchJoyconRightMapping",fa,64,e4,52);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(SwitchJoyconRightMapping_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< SwitchJoyconRightMapping_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SwitchJoyconRightMapping_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SwitchJoyconRightMapping_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace input
} // end namespace gamepad
} // end namespace mappings
