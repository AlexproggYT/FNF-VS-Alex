#ifndef INCLUDED_flixel_util_FlxStringUtil
#define INCLUDED_flixel_util_FlxStringUtil

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(flixel,util,FlxStringUtil)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,LabelValuePair)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)

namespace flixel{
namespace util{


class HXCPP_CLASS_ATTRIBUTES FlxStringUtil_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef FlxStringUtil_obj OBJ_;
		FlxStringUtil_obj();

	public:
		enum { _hx_ClassId = 0x168d68bf };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="flixel.util.FlxStringUtil")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"flixel.util.FlxStringUtil"); }

		inline static ::hx::ObjectPtr< FlxStringUtil_obj > __new() {
			::hx::ObjectPtr< FlxStringUtil_obj > __this = new FlxStringUtil_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< FlxStringUtil_obj > __alloc(::hx::Ctx *_hx_ctx) {
			FlxStringUtil_obj *__this = (FlxStringUtil_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxStringUtil_obj), false, "flixel.util.FlxStringUtil"));
			*(void **)__this = FlxStringUtil_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxStringUtil_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FlxStringUtil",65,c4,02,2e); }

		static ::String formatTicks(int StartTicks,int EndTicks);
		static ::Dynamic formatTicks_dyn();

		static ::String formatTime(Float Seconds,::hx::Null< bool >  ShowMS);
		static ::Dynamic formatTime_dyn();

		static ::String formatArray(::cpp::VirtualArray AnyArray);
		static ::Dynamic formatArray_dyn();

		static ::String formatStringMap( ::haxe::ds::StringMap AnyMap);
		static ::Dynamic formatStringMap_dyn();

		static ::String formatMoney(Float Amount,::hx::Null< bool >  ShowDecimal,::hx::Null< bool >  EnglishStyle);
		static ::Dynamic formatMoney_dyn();

		static ::String formatBytes(Float Bytes,::hx::Null< int >  Precision);
		static ::Dynamic formatBytes_dyn();

		static ::String filterDigits(::String Input);
		static ::Dynamic filterDigits_dyn();

		static ::String htmlFormat(::String Text,::hx::Null< int >  Size,::String Color,::hx::Null< bool >  Bold,::hx::Null< bool >  Italic,::hx::Null< bool >  Underlined);
		static ::Dynamic htmlFormat_dyn();

		static ::String getClassName( ::Dynamic objectOrClass,::hx::Null< bool >  simple);
		static ::Dynamic getClassName_dyn();

		static ::String getEnumName( ::Dynamic enumValueOrEnum,::hx::Null< bool >  simple);
		static ::Dynamic getEnumName_dyn();

		static ::String formatPackage(::String s,bool simple);
		static ::Dynamic formatPackage_dyn();

		static ::String getHost(::String url);
		static ::Dynamic getHost_dyn();

		static ::String getDomain(::String url);
		static ::Dynamic getDomain_dyn();

		static bool sameClassName( ::Dynamic Obj1, ::Dynamic Obj2,::hx::Null< bool >  Simple);
		static ::Dynamic sameClassName_dyn();

		static ::Array< int > toIntArray(::String Data);
		static ::Dynamic toIntArray_dyn();

		static ::Array< Float > toFloatArray(::String Data);
		static ::Dynamic toFloatArray_dyn();

		static ::String arrayToCSV(::Array< int > Data,int Width,::hx::Null< bool >  Invert);
		static ::Dynamic arrayToCSV_dyn();

		static ::String bitmapToCSV( ::openfl::display::BitmapData Bitmap,::hx::Null< bool >  Invert,::hx::Null< int >  Scale,::Array< int > ColorMap);
		static ::Dynamic bitmapToCSV_dyn();

		static ::String imageToCSV( ::Dynamic ImageFile,::hx::Null< bool >  Invert,::hx::Null< int >  Scale,::Array< int > ColorMap);
		static ::Dynamic imageToCSV_dyn();

		static ::String getDebugString(::Array< ::Dynamic> LabelValuePairs);
		static ::Dynamic getDebugString_dyn();

		static bool contains(::String s,::String str);
		static ::Dynamic contains_dyn();

		static ::String remove(::String s,::String sub);
		static ::Dynamic remove_dyn();

		static ::String insert(::String s,int pos,::String insertion);
		static ::Dynamic insert_dyn();

		static ::Array< ::String > sortAlphabetically(::Array< ::String > list);
		static ::Dynamic sortAlphabetically_dyn();

		static bool isNullOrEmpty(::String s);
		static ::Dynamic isNullOrEmpty_dyn();

};

} // end namespace flixel
} // end namespace util

#endif /* INCLUDED_flixel_util_FlxStringUtil */ 
