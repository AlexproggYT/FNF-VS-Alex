#ifndef INCLUDED_flixel_addons_ui_FlxMultiKey
#define INCLUDED_flixel_addons_ui_FlxMultiKey

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_addons_ui_FlxBaseMultiInput
#include <flixel/addons/ui/FlxBaseMultiInput.h>
#endif
HX_DECLARE_CLASS3(flixel,addons,ui,FlxBaseMultiInput)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxMultiKey)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)

namespace flixel{
namespace addons{
namespace ui{


class HXCPP_CLASS_ATTRIBUTES FlxMultiKey_obj : public  ::flixel::addons::ui::FlxBaseMultiInput_obj
{
	public:
		typedef  ::flixel::addons::ui::FlxBaseMultiInput_obj super;
		typedef FlxMultiKey_obj OBJ_;
		FlxMultiKey_obj();

	public:
		enum { _hx_ClassId = 0x6d5a3315 };

		void __construct(int Input,::Array< int > Combos,::Array< int > Forbiddens);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.addons.ui.FlxMultiKey")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.addons.ui.FlxMultiKey"); }
		static ::hx::ObjectPtr< FlxMultiKey_obj > __new(int Input,::Array< int > Combos,::Array< int > Forbiddens);
		static ::hx::ObjectPtr< FlxMultiKey_obj > __alloc(::hx::Ctx *_hx_ctx,int Input,::Array< int > Combos,::Array< int > Forbiddens);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxMultiKey_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FlxMultiKey",18,a3,87,b1); }

		bool checkJustPressed();

		bool checkJustReleased();

		bool checkPressed();

		bool checkCombos(bool value);

		bool checkForbiddens(bool value);

};

} // end namespace flixel
} // end namespace addons
} // end namespace ui

#endif /* INCLUDED_flixel_addons_ui_FlxMultiKey */ 
