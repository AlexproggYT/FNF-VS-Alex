#ifndef INCLUDED_openfl_display_FPS
#define INCLUDED_openfl_display_FPS

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_text_TextField
#include <openfl/text/TextField.h>
#endif
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,FPS)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,text,TextField)

namespace openfl{
namespace display{


class HXCPP_CLASS_ATTRIBUTES FPS_obj : public  ::openfl::text::TextField_obj
{
	public:
		typedef  ::openfl::text::TextField_obj super;
		typedef FPS_obj OBJ_;
		FPS_obj();

	public:
		enum { _hx_ClassId = 0x014db497 };

		void __construct(::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y,::hx::Null< int >  __o_color);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl.display.FPS")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"openfl.display.FPS"); }
		static ::hx::ObjectPtr< FPS_obj > __new(::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y,::hx::Null< int >  __o_color);
		static ::hx::ObjectPtr< FPS_obj > __alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y,::hx::Null< int >  __o_color);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FPS_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FPS",c9,63,35,00); }

		int currentFPS;
		int cacheCount;
		Float currentTime;
		::Array< Float > times;
		void _hx___enterFrame(int _tmp_deltaTime);

};

} // end namespace openfl
} // end namespace display

#endif /* INCLUDED_openfl_display_FPS */ 
