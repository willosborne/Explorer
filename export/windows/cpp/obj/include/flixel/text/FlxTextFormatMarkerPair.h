// Generated by Haxe 3.4.5
#ifndef INCLUDED_flixel_text_FlxTextFormatMarkerPair
#define INCLUDED_flixel_text_FlxTextFormatMarkerPair

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(flixel,text,FlxTextFormat)
HX_DECLARE_CLASS2(flixel,text,FlxTextFormatMarkerPair)

namespace flixel{
namespace text{


class HXCPP_CLASS_ATTRIBUTES FlxTextFormatMarkerPair_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef FlxTextFormatMarkerPair_obj OBJ_;
		FlxTextFormatMarkerPair_obj();

	public:
		enum { _hx_ClassId = 0x681229bd };

		void __construct( ::flixel::text::FlxTextFormat format,::String marker);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.text.FlxTextFormatMarkerPair")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"flixel.text.FlxTextFormatMarkerPair"); }
		static hx::ObjectPtr< FlxTextFormatMarkerPair_obj > __new( ::flixel::text::FlxTextFormat format,::String marker);
		static hx::ObjectPtr< FlxTextFormatMarkerPair_obj > __alloc(hx::Ctx *_hx_ctx, ::flixel::text::FlxTextFormat format,::String marker);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxTextFormatMarkerPair_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("FlxTextFormatMarkerPair","\x4a","\x91","\x32","\x4f"); }

		 ::flixel::text::FlxTextFormat format;
		::String marker;
};

} // end namespace flixel
} // end namespace text

#endif /* INCLUDED_flixel_text_FlxTextFormatMarkerPair */ 