// Generated by Haxe 3.4.5
#ifndef INCLUDED_flixel_ui__FlxButton_FlxButtonEvent
#define INCLUDED_flixel_ui__FlxButton_FlxButtonEvent

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS2(flixel,_hx_system,FlxSound)
HX_DECLARE_CLASS3(flixel,ui,_FlxButton,FlxButtonEvent)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)

namespace flixel{
namespace ui{
namespace _FlxButton{


class HXCPP_CLASS_ATTRIBUTES FlxButtonEvent_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef FlxButtonEvent_obj OBJ_;
		FlxButtonEvent_obj();

	public:
		enum { _hx_ClassId = 0x5b7a30f3 };

		void __construct( ::Dynamic Callback, ::flixel::_hx_system::FlxSound sound);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.ui._FlxButton.FlxButtonEvent")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"flixel.ui._FlxButton.FlxButtonEvent"); }
		static hx::ObjectPtr< FlxButtonEvent_obj > __new( ::Dynamic Callback, ::flixel::_hx_system::FlxSound sound);
		static hx::ObjectPtr< FlxButtonEvent_obj > __alloc(hx::Ctx *_hx_ctx, ::Dynamic Callback, ::flixel::_hx_system::FlxSound sound);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxButtonEvent_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_HCSTRING("FlxButtonEvent","\x96","\x41","\xf7","\x21"); }

		 ::Dynamic callback;
		Dynamic callback_dyn() { return callback;}
		 ::flixel::_hx_system::FlxSound sound;
		void destroy();
		::Dynamic destroy_dyn();

		void fire();
		::Dynamic fire_dyn();

};

} // end namespace flixel
} // end namespace ui
} // end namespace _FlxButton

#endif /* INCLUDED_flixel_ui__FlxButton_FlxButtonEvent */ 