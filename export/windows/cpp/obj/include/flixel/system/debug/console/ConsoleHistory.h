// Generated by Haxe 3.4.5
#ifndef INCLUDED_flixel_system_debug_console_ConsoleHistory
#define INCLUDED_flixel_system_debug_console_ConsoleHistory

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(flixel,_hx_system,debug,console,ConsoleHistory)

namespace flixel{
namespace _hx_system{
namespace debug{
namespace console{


class HXCPP_CLASS_ATTRIBUTES ConsoleHistory_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef ConsoleHistory_obj OBJ_;
		ConsoleHistory_obj();

	public:
		enum { _hx_ClassId = 0x13f7fc4c };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.system.debug.console.ConsoleHistory")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"flixel.system.debug.console.ConsoleHistory"); }
		static hx::ObjectPtr< ConsoleHistory_obj > __new();
		static hx::ObjectPtr< ConsoleHistory_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ConsoleHistory_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("ConsoleHistory","\xdd","\x2e","\xa0","\x76"); }

		static void __boot();
		static int MAX_LENGTH;
		::Array< ::String > commands;
		int index;
		::String getPreviousCommand();
		::Dynamic getPreviousCommand_dyn();

		::String getNextCommand();
		::Dynamic getNextCommand_dyn();

		void addCommand(::String command);
		::Dynamic addCommand_dyn();

		void clear();
		::Dynamic clear_dyn();

		bool get_isEmpty();
		::Dynamic get_isEmpty_dyn();

};

} // end namespace flixel
} // end namespace system
} // end namespace debug
} // end namespace console

#endif /* INCLUDED_flixel_system_debug_console_ConsoleHistory */ 
