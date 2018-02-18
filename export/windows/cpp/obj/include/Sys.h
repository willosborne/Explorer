// Generated by Haxe 3.4.5
#ifndef INCLUDED_Sys
#define INCLUDED_Sys

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Sys)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS2(haxe,io,Input)
HX_DECLARE_CLASS2(haxe,io,Output)



class HXCPP_CLASS_ATTRIBUTES Sys_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Sys_obj OBJ_;
		Sys_obj();

	public:
		enum { _hx_ClassId = 0x003f64ed };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="Sys")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"Sys"); }

		hx::ObjectPtr< Sys_obj > __new() {
			hx::ObjectPtr< Sys_obj > __this = new Sys_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< Sys_obj > __alloc(hx::Ctx *_hx_ctx) {
			Sys_obj *__this = (Sys_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Sys_obj), false, "Sys"));
			*(void **)__this = Sys_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Sys_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("Sys","\xed","\x64","\x3f","\x00"); }

		static void print( ::Dynamic v);
		static ::Dynamic print_dyn();

		static void println( ::Dynamic v);
		static ::Dynamic println_dyn();

		static  ::haxe::io::Input _hx_stdin();
		static ::Dynamic _hx_stdin_dyn();

		static  ::haxe::io::Output _hx_stdout();
		static ::Dynamic _hx_stdout_dyn();

		static  ::haxe::io::Output _hx_stderr();
		static ::Dynamic _hx_stderr_dyn();

		static int getChar(bool echo);
		static ::Dynamic getChar_dyn();

		static ::Array< ::String > args();
		static ::Dynamic args_dyn();

		static ::String getEnv(::String s);
		static ::Dynamic getEnv_dyn();

		static void putEnv(::String s,::String v);
		static ::Dynamic putEnv_dyn();

		static void sleep(Float seconds);
		static ::Dynamic sleep_dyn();

		static bool setTimeLocale(::String loc);
		static ::Dynamic setTimeLocale_dyn();

		static ::String getCwd();
		static ::Dynamic getCwd_dyn();

		static void setCwd(::String s);
		static ::Dynamic setCwd_dyn();

		static ::String systemName();
		static ::Dynamic systemName_dyn();

		static int command(::String cmd,::Array< ::String > args);
		static ::Dynamic command_dyn();

		static void exit(int code);
		static ::Dynamic exit_dyn();

		static Float time();
		static ::Dynamic time_dyn();

		static Float cpuTime();
		static ::Dynamic cpuTime_dyn();

		static ::String executablePath();
		static ::Dynamic executablePath_dyn();

		static ::String programPath();
		static ::Dynamic programPath_dyn();

		static  ::haxe::ds::StringMap environment();
		static ::Dynamic environment_dyn();

};


#endif /* INCLUDED_Sys */ 
