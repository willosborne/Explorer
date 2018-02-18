// Generated by Haxe 3.4.5
#ifndef INCLUDED_openfl__legacy_net_URLLoader
#define INCLUDED_openfl__legacy_net_URLLoader

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
HX_DECLARE_CLASS3(openfl,_legacy,events,Event)
HX_DECLARE_CLASS3(openfl,_legacy,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,events,IEventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,net,URLLoader)
HX_DECLARE_CLASS3(openfl,_legacy,net,URLRequest)

namespace openfl{
namespace _legacy{
namespace net{


class HXCPP_CLASS_ATTRIBUTES URLLoader_obj : public  ::openfl::_legacy::events::EventDispatcher_obj
{
	public:
		typedef  ::openfl::_legacy::events::EventDispatcher_obj super;
		typedef URLLoader_obj OBJ_;
		URLLoader_obj();

	public:
		enum { _hx_ClassId = 0x7e9d2345 };

		void __construct( ::openfl::_legacy::net::URLRequest request);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl._legacy.net.URLLoader")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"openfl._legacy.net.URLLoader"); }
		static hx::ObjectPtr< URLLoader_obj > __new( ::openfl::_legacy::net::URLRequest request);
		static hx::ObjectPtr< URLLoader_obj > __alloc(hx::Ctx *_hx_ctx, ::openfl::_legacy::net::URLRequest request);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~URLLoader_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("URLLoader","\xc2","\x68","\xb3","\x41"); }

		static void __boot();
		static int urlInvalid;
		static int urlInit;
		static int urlLoading;
		static int urlComplete;
		static int urlError;
		static ::Array< ::Dynamic> eventsQueue;
		static bool hasActive();
		static ::Dynamic hasActive_dyn();

		static void initialize(::String caCertFilePath);
		static ::Dynamic initialize_dyn();

		static bool _hx___loadPending();
		static ::Dynamic _hx___loadPending_dyn();

		static void enqueueEvent( ::openfl::_legacy::net::URLLoader loader, ::openfl::_legacy::events::Event event);
		static ::Dynamic enqueueEvent_dyn();

		static void _hx___pollData();
		static ::Dynamic _hx___pollData_dyn();

		int bytesLoaded;
		int bytesTotal;
		 ::Dynamic data;
		 ::Dynamic dataFormat;
		int state;
		 ::Dynamic _hx___handle;
		 ::Dynamic _hx___onComplete;
		Dynamic _hx___onComplete_dyn() { return _hx___onComplete;}
		void close();
		::Dynamic close_dyn();

		void dispatchHTTPStatus(int code);
		::Dynamic dispatchHTTPStatus_dyn();

		::Array< ::String > getCookies();
		::Dynamic getCookies_dyn();

		virtual void load( ::openfl::_legacy::net::URLRequest request);
		::Dynamic load_dyn();

		void loadInCURLThread( ::openfl::_legacy::net::URLRequest request);
		::Dynamic loadInCURLThread_dyn();

		void onError(::String msg);
		::Dynamic onError_dyn();

		void update();
		::Dynamic update_dyn();

		void _hx___dataComplete();
		::Dynamic _hx___dataComplete_dyn();

};

} // end namespace openfl
} // end namespace _legacy
} // end namespace net

#endif /* INCLUDED_openfl__legacy_net_URLLoader */ 
