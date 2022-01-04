#include <hxcpp.h>

#ifndef INCLUDED_flixel_input_actions_FlxInputDevice
#include <flixel/input/actions/FlxInputDevice.h>
#endif
namespace flixel{
namespace input{
namespace actions{

::flixel::input::actions::FlxInputDevice FlxInputDevice_obj::ALL;

::flixel::input::actions::FlxInputDevice FlxInputDevice_obj::ANDROID;

::flixel::input::actions::FlxInputDevice FlxInputDevice_obj::GAMEPAD;

::flixel::input::actions::FlxInputDevice FlxInputDevice_obj::IFLXINPUT_OBJECT;

::flixel::input::actions::FlxInputDevice FlxInputDevice_obj::KEYBOARD;

::flixel::input::actions::FlxInputDevice FlxInputDevice_obj::MOUSE;

::flixel::input::actions::FlxInputDevice FlxInputDevice_obj::MOUSE_WHEEL;

::flixel::input::actions::FlxInputDevice FlxInputDevice_obj::NONE;

::flixel::input::actions::FlxInputDevice FlxInputDevice_obj::OTHER;

::flixel::input::actions::FlxInputDevice FlxInputDevice_obj::STEAM_CONTROLLER;

::flixel::input::actions::FlxInputDevice FlxInputDevice_obj::UNKNOWN;

bool FlxInputDevice_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("ALL",01,95,31,00)) { outValue = FlxInputDevice_obj::ALL; return true; }
	if (inName==HX_("ANDROID",0f,6f,78,1c)) { outValue = FlxInputDevice_obj::ANDROID; return true; }
	if (inName==HX_("GAMEPAD",81,b4,59,09)) { outValue = FlxInputDevice_obj::GAMEPAD; return true; }
	if (inName==HX_("IFLXINPUT_OBJECT",dd,3e,b8,6e)) { outValue = FlxInputDevice_obj::IFLXINPUT_OBJECT; return true; }
	if (inName==HX_("KEYBOARD",a7,4c,af,c1)) { outValue = FlxInputDevice_obj::KEYBOARD; return true; }
	if (inName==HX_("MOUSE",05,4e,53,8a)) { outValue = FlxInputDevice_obj::MOUSE; return true; }
	if (inName==HX_("MOUSE_WHEEL",81,d3,3c,28)) { outValue = FlxInputDevice_obj::MOUSE_WHEEL; return true; }
	if (inName==HX_("NONE",b8,da,ca,33)) { outValue = FlxInputDevice_obj::NONE; return true; }
	if (inName==HX_("OTHER",b0,9e,64,b4)) { outValue = FlxInputDevice_obj::OTHER; return true; }
	if (inName==HX_("STEAM_CONTROLLER",4b,e9,aa,35)) { outValue = FlxInputDevice_obj::STEAM_CONTROLLER; return true; }
	if (inName==HX_("UNKNOWN",6a,f7,4e,61)) { outValue = FlxInputDevice_obj::UNKNOWN; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(FlxInputDevice_obj)

int FlxInputDevice_obj::__FindIndex(::String inName)
{
	if (inName==HX_("ALL",01,95,31,00)) return 9;
	if (inName==HX_("ANDROID",0f,6f,78,1c)) return 8;
	if (inName==HX_("GAMEPAD",81,b4,59,09)) return 4;
	if (inName==HX_("IFLXINPUT_OBJECT",dd,3e,b8,6e)) return 6;
	if (inName==HX_("KEYBOARD",a7,4c,af,c1)) return 3;
	if (inName==HX_("MOUSE",05,4e,53,8a)) return 1;
	if (inName==HX_("MOUSE_WHEEL",81,d3,3c,28)) return 2;
	if (inName==HX_("NONE",b8,da,ca,33)) return 10;
	if (inName==HX_("OTHER",b0,9e,64,b4)) return 7;
	if (inName==HX_("STEAM_CONTROLLER",4b,e9,aa,35)) return 5;
	if (inName==HX_("UNKNOWN",6a,f7,4e,61)) return 0;
	return super::__FindIndex(inName);
}

int FlxInputDevice_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("ALL",01,95,31,00)) return 0;
	if (inName==HX_("ANDROID",0f,6f,78,1c)) return 0;
	if (inName==HX_("GAMEPAD",81,b4,59,09)) return 0;
	if (inName==HX_("IFLXINPUT_OBJECT",dd,3e,b8,6e)) return 0;
	if (inName==HX_("KEYBOARD",a7,4c,af,c1)) return 0;
	if (inName==HX_("MOUSE",05,4e,53,8a)) return 0;
	if (inName==HX_("MOUSE_WHEEL",81,d3,3c,28)) return 0;
	if (inName==HX_("NONE",b8,da,ca,33)) return 0;
	if (inName==HX_("OTHER",b0,9e,64,b4)) return 0;
	if (inName==HX_("STEAM_CONTROLLER",4b,e9,aa,35)) return 0;
	if (inName==HX_("UNKNOWN",6a,f7,4e,61)) return 0;
	return super::__FindArgCount(inName);
}

::hx::Val FlxInputDevice_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("ALL",01,95,31,00)) return ALL;
	if (inName==HX_("ANDROID",0f,6f,78,1c)) return ANDROID;
	if (inName==HX_("GAMEPAD",81,b4,59,09)) return GAMEPAD;
	if (inName==HX_("IFLXINPUT_OBJECT",dd,3e,b8,6e)) return IFLXINPUT_OBJECT;
	if (inName==HX_("KEYBOARD",a7,4c,af,c1)) return KEYBOARD;
	if (inName==HX_("MOUSE",05,4e,53,8a)) return MOUSE;
	if (inName==HX_("MOUSE_WHEEL",81,d3,3c,28)) return MOUSE_WHEEL;
	if (inName==HX_("NONE",b8,da,ca,33)) return NONE;
	if (inName==HX_("OTHER",b0,9e,64,b4)) return OTHER;
	if (inName==HX_("STEAM_CONTROLLER",4b,e9,aa,35)) return STEAM_CONTROLLER;
	if (inName==HX_("UNKNOWN",6a,f7,4e,61)) return UNKNOWN;
	return super::__Field(inName,inCallProp);
}

static ::String FlxInputDevice_obj_sStaticFields[] = {
	HX_("UNKNOWN",6a,f7,4e,61),
	HX_("MOUSE",05,4e,53,8a),
	HX_("MOUSE_WHEEL",81,d3,3c,28),
	HX_("KEYBOARD",a7,4c,af,c1),
	HX_("GAMEPAD",81,b4,59,09),
	HX_("STEAM_CONTROLLER",4b,e9,aa,35),
	HX_("IFLXINPUT_OBJECT",dd,3e,b8,6e),
	HX_("OTHER",b0,9e,64,b4),
	HX_("ANDROID",0f,6f,78,1c),
	HX_("ALL",01,95,31,00),
	HX_("NONE",b8,da,ca,33),
	::String(null())
};

::hx::Class FlxInputDevice_obj::__mClass;

Dynamic __Create_FlxInputDevice_obj() { return new FlxInputDevice_obj; }

void FlxInputDevice_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("flixel.input.actions.FlxInputDevice",95,fb,85,d5), ::hx::TCanCast< FlxInputDevice_obj >,FlxInputDevice_obj_sStaticFields,0,
	&__Create_FlxInputDevice_obj, &__Create,
	&super::__SGetClass(), &CreateFlxInputDevice_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &FlxInputDevice_obj::__GetStatic;
}

void FlxInputDevice_obj::__boot()
{
ALL = ::hx::CreateConstEnum< FlxInputDevice_obj >(HX_("ALL",01,95,31,00),9);
ANDROID = ::hx::CreateConstEnum< FlxInputDevice_obj >(HX_("ANDROID",0f,6f,78,1c),8);
GAMEPAD = ::hx::CreateConstEnum< FlxInputDevice_obj >(HX_("GAMEPAD",81,b4,59,09),4);
IFLXINPUT_OBJECT = ::hx::CreateConstEnum< FlxInputDevice_obj >(HX_("IFLXINPUT_OBJECT",dd,3e,b8,6e),6);
KEYBOARD = ::hx::CreateConstEnum< FlxInputDevice_obj >(HX_("KEYBOARD",a7,4c,af,c1),3);
MOUSE = ::hx::CreateConstEnum< FlxInputDevice_obj >(HX_("MOUSE",05,4e,53,8a),1);
MOUSE_WHEEL = ::hx::CreateConstEnum< FlxInputDevice_obj >(HX_("MOUSE_WHEEL",81,d3,3c,28),2);
NONE = ::hx::CreateConstEnum< FlxInputDevice_obj >(HX_("NONE",b8,da,ca,33),10);
OTHER = ::hx::CreateConstEnum< FlxInputDevice_obj >(HX_("OTHER",b0,9e,64,b4),7);
STEAM_CONTROLLER = ::hx::CreateConstEnum< FlxInputDevice_obj >(HX_("STEAM_CONTROLLER",4b,e9,aa,35),5);
UNKNOWN = ::hx::CreateConstEnum< FlxInputDevice_obj >(HX_("UNKNOWN",6a,f7,4e,61),0);
}


} // end namespace flixel
} // end namespace input
} // end namespace actions
