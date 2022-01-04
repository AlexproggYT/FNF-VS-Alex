#ifndef INCLUDED_openfl_display__LineScaleMode_LineScaleMode_Impl_
#define INCLUDED_openfl_display__LineScaleMode_LineScaleMode_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(openfl,display,_LineScaleMode,LineScaleMode_Impl_)

namespace openfl{
namespace display{
namespace _LineScaleMode{


class HXCPP_CLASS_ATTRIBUTES LineScaleMode_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef LineScaleMode_Impl__obj OBJ_;
		LineScaleMode_Impl__obj();

	public:
		enum { _hx_ClassId = 0x2e37a0ed };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="openfl.display._LineScaleMode.LineScaleMode_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"openfl.display._LineScaleMode.LineScaleMode_Impl_"); }

		inline static ::hx::ObjectPtr< LineScaleMode_Impl__obj > __new() {
			::hx::ObjectPtr< LineScaleMode_Impl__obj > __this = new LineScaleMode_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< LineScaleMode_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			LineScaleMode_Impl__obj *__this = (LineScaleMode_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(LineScaleMode_Impl__obj), false, "openfl.display._LineScaleMode.LineScaleMode_Impl_"));
			*(void **)__this = LineScaleMode_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~LineScaleMode_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("LineScaleMode_Impl_",b9,d9,f9,d7); }

		static void __boot();
		static  ::Dynamic HORIZONTAL;
		static  ::Dynamic NONE;
		static  ::Dynamic NORMAL;
		static  ::Dynamic VERTICAL;
		static  ::Dynamic fromInt( ::Dynamic value);
		static ::Dynamic fromInt_dyn();

		static  ::Dynamic fromString(::String value);
		static ::Dynamic fromString_dyn();

		static  ::Dynamic toInt( ::Dynamic this1);
		static ::Dynamic toInt_dyn();

		static ::String toString( ::Dynamic this1);
		static ::Dynamic toString_dyn();

};

} // end namespace openfl
} // end namespace display
} // end namespace _LineScaleMode

#endif /* INCLUDED_openfl_display__LineScaleMode_LineScaleMode_Impl_ */ 
