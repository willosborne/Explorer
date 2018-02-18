// Generated by Haxe 3.4.5
#ifndef INCLUDED_DefaultAssetLibrary
#define INCLUDED_DefaultAssetLibrary

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl__legacy_AssetLibrary
#include <openfl/_legacy/AssetLibrary.h>
#endif
HX_DECLARE_CLASS0(DefaultAssetLibrary)
HX_DECLARE_CLASS2(cpp,vm,Deque)
HX_DECLARE_CLASS2(cpp,vm,Thread)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS1(haxe,Timer)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(openfl,_legacy,AssetLibrary)
HX_DECLARE_CLASS2(openfl,_legacy,AssetType)
HX_DECLARE_CLASS3(openfl,_legacy,display,BitmapData)
HX_DECLARE_CLASS3(openfl,_legacy,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,_legacy,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,events,IEventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,media,Sound)
HX_DECLARE_CLASS3(openfl,_legacy,text,Font)
HX_DECLARE_CLASS3(openfl,_legacy,utils,ByteArray)
HX_DECLARE_CLASS3(openfl,_legacy,utils,IDataInput)
HX_DECLARE_CLASS3(openfl,_legacy,utils,IDataOutput)
HX_DECLARE_CLASS3(openfl,_legacy,utils,IMemoryRange)



class HXCPP_CLASS_ATTRIBUTES DefaultAssetLibrary_obj : public  ::openfl::_legacy::AssetLibrary_obj
{
	public:
		typedef  ::openfl::_legacy::AssetLibrary_obj super;
		typedef DefaultAssetLibrary_obj OBJ_;
		DefaultAssetLibrary_obj();

	public:
		enum { _hx_ClassId = 0x3a783d2c };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="DefaultAssetLibrary")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"DefaultAssetLibrary"); }
		static hx::ObjectPtr< DefaultAssetLibrary_obj > __new();
		static hx::ObjectPtr< DefaultAssetLibrary_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~DefaultAssetLibrary_obj();

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
		::String __ToString() const { return HX_HCSTRING("DefaultAssetLibrary","\x2c","\x3d","\x78","\x3a"); }

		static void __boot();
		static int loaded;
		static int loading;
		static  ::cpp::vm::Deque workerIncomingQueue;
		static  ::cpp::vm::Deque workerResult;
		static  ::cpp::vm::Thread workerThread;
		static void _hx___doWork();
		static ::Dynamic _hx___doWork_dyn();

		static void _hx___poll();
		static ::Dynamic _hx___poll_dyn();

		 ::haxe::ds::StringMap className;
		 ::haxe::ds::StringMap path;
		 ::haxe::ds::StringMap type;
		Float lastModified;
		 ::haxe::Timer timer;
		bool exists(::String id, ::openfl::_legacy::AssetType type);

		 ::openfl::_legacy::display::BitmapData getBitmapData(::String id);

		 ::openfl::_legacy::utils::ByteArray getBytes(::String id);

		 ::openfl::_legacy::text::Font getFont(::String id);

		 ::openfl::_legacy::media::Sound getMusic(::String id);

		::String getPath(::String id);

		 ::openfl::_legacy::media::Sound getSound(::String id);

		::String getText(::String id);

		bool isLocal(::String id, ::openfl::_legacy::AssetType type);

		::Array< ::String > list( ::openfl::_legacy::AssetType type);

		void loadBitmapData(::String id, ::Dynamic handler);

		void loadBytes(::String id, ::Dynamic handler);

		void loadFont(::String id, ::Dynamic handler);

		void loadManifest();
		::Dynamic loadManifest_dyn();

		void loadMusic(::String id, ::Dynamic handler);

		void loadSound(::String id, ::Dynamic handler);

		void loadText(::String id, ::Dynamic handler);

		void _hx___load( ::Dynamic getMethod,::String id, ::Dynamic handler);
		::Dynamic _hx___load_dyn();

};


#endif /* INCLUDED_DefaultAssetLibrary */ 
