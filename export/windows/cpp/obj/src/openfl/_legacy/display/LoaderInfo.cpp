// Generated by Haxe 3.4.5
#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObject
#include <openfl/_legacy/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObjectContainer
#include <openfl/_legacy/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_InteractiveObject
#include <openfl/_legacy/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Loader
#include <openfl/_legacy/display/Loader.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_LoaderInfo
#include <openfl/_legacy/display/LoaderInfo.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Sprite
#include <openfl/_legacy/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_Event
#include <openfl/_legacy/events/Event.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_net_URLLoader
#include <openfl/_legacy/net/URLLoader.h>
#endif
#ifndef INCLUDED_openfl__legacy_net_URLRequest
#include <openfl/_legacy/net/URLRequest.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_ByteArray
#include <openfl/_legacy/utils/ByteArray.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_IDataInput
#include <openfl/_legacy/utils/IDataInput.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_IDataOutput
#include <openfl/_legacy/utils/IDataOutput.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_IMemoryRange
#include <openfl/_legacy/utils/IMemoryRange.h>
#endif
#ifndef INCLUDED_openfl_events_UncaughtErrorEvents
#include <openfl/events/UncaughtErrorEvents.h>
#endif
#ifndef INCLUDED_openfl_system_ApplicationDomain
#include <openfl/system/ApplicationDomain.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_f98b58d7b7079c84_37_new,"openfl._legacy.display.LoaderInfo","new",0x87d2e343,"openfl._legacy.display.LoaderInfo.new","openfl/_legacy/display/LoaderInfo.hx",37,0xb6d254aa)
HX_LOCAL_STACK_FRAME(_hx_pos_f98b58d7b7079c84_68_load,"openfl._legacy.display.LoaderInfo","load",0x4f690de3,"openfl._legacy.display.LoaderInfo.load","openfl/_legacy/display/LoaderInfo.hx",68,0xb6d254aa)
HX_LOCAL_STACK_FRAME(_hx_pos_f98b58d7b7079c84_101_this_onComplete,"openfl._legacy.display.LoaderInfo","this_onComplete",0x99e9f7dc,"openfl._legacy.display.LoaderInfo.this_onComplete","openfl/_legacy/display/LoaderInfo.hx",101,0xb6d254aa)
HX_LOCAL_STACK_FRAME(_hx_pos_f98b58d7b7079c84_118_get_bytes,"openfl._legacy.display.LoaderInfo","get_bytes",0x13e243e5,"openfl._legacy.display.LoaderInfo.get_bytes","openfl/_legacy/display/LoaderInfo.hx",118,0xb6d254aa)
HX_LOCAL_STACK_FRAME(_hx_pos_f98b58d7b7079c84_50_create,"openfl._legacy.display.LoaderInfo","create",0xe9d303f9,"openfl._legacy.display.LoaderInfo.create","openfl/_legacy/display/LoaderInfo.hx",50,0xb6d254aa)
namespace openfl{
namespace _legacy{
namespace display{

void LoaderInfo_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_f98b58d7b7079c84_37_new)
HXLINE(  39)		super::__construct(null());
HXLINE(  41)		this->applicationDomain = ::openfl::_hx_system::ApplicationDomain_obj::currentDomain;
HXLINE(  42)		this->childAllowsParent = true;
HXLINE(  43)		this->frameRate = (int)0;
HXLINE(  44)		this->dataFormat = (int)0;
HXLINE(  45)		this->loaderURL = null();
            	}

Dynamic LoaderInfo_obj::__CreateEmpty() { return new LoaderInfo_obj; }

void *LoaderInfo_obj::_hx_vtable = 0;

Dynamic LoaderInfo_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< LoaderInfo_obj > _hx_result = new LoaderInfo_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool LoaderInfo_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x539550eb) {
		if (inClassId<=(int)0x25b00754) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x25b00754;
		} else {
			return inClassId==(int)0x539550eb;
		}
	} else {
		return inClassId==(int)0x7e9d2345;
	}
}

void LoaderInfo_obj::load( ::openfl::_legacy::net::URLRequest request){
            	HX_STACKFRAME(&_hx_pos_f98b58d7b7079c84_68_load)
HXLINE(  70)		this->_hx___pendingURL = request->url;
HXLINE(  71)		int dot = this->_hx___pendingURL.lastIndexOf(HX_(".",2e,00,00,00),null());
HXLINE(  72)		::String extension;
HXDLIN(  72)		if ((dot > (int)0)) {
HXLINE(  72)			::String extension1 = this->_hx___pendingURL;
HXDLIN(  72)			extension = extension1.substr((dot + (int)1),null()).toLowerCase();
            		}
            		else {
HXLINE(  72)			extension = HX_("",00,00,00,00);
            		}
HXLINE(  74)		if ((extension.indexOf(HX_("?",3f,00,00,00),null()) != (int)-1)) {
HXLINE(  75)			extension = extension.split(HX_("?",3f,00,00,00))->__get((int)0);
            		}
HXLINE(  77)		::String _hx_tmp;
HXDLIN(  77)		::String _hx_switch_0 = extension;
            		if (  (_hx_switch_0==HX_("gif",04,84,4e,00)) ){
HXLINE(  77)			_hx_tmp = HX_("image/gif",10,f4,ba,16);
HXDLIN(  77)			goto _hx_goto_1;
            		}
            		if (  (_hx_switch_0==HX_("jpeg",a8,f2,65,46)) ||  (_hx_switch_0==HX_("jpg",e1,d0,50,00)) ){
HXLINE(  77)			_hx_tmp = HX_("image/jpeg",1c,8d,db,ce);
HXDLIN(  77)			goto _hx_goto_1;
            		}
            		if (  (_hx_switch_0==HX_("png",a9,5c,55,00)) ){
HXLINE(  77)			_hx_tmp = HX_("image/png",b5,cc,c1,16);
HXDLIN(  77)			goto _hx_goto_1;
            		}
            		if (  (_hx_switch_0==HX_("swf",42,ab,57,00)) ){
HXLINE(  77)			_hx_tmp = HX_("application/x-shockwave-flash",ea,f3,47,4a);
HXDLIN(  77)			goto _hx_goto_1;
            		}
            		/* default */{
HXLINE(  77)			_hx_tmp = HX_("application/octet-stream",5d,f8,82,30);
            		}
            		_hx_goto_1:;
HXDLIN(  77)		this->contentType = _hx_tmp;
HXLINE(  87)		this->url = null();
HXLINE(  89)		this->super::load(request);
            	}


void LoaderInfo_obj::this_onComplete( ::openfl::_legacy::events::Event event){
            	HX_STACKFRAME(&_hx_pos_f98b58d7b7079c84_101_this_onComplete)
HXLINE( 103)		this->url = this->_hx___pendingURL;
HXLINE( 104)		this->removeEventListener(::openfl::_legacy::events::Event_obj::COMPLETE,this->this_onComplete_dyn(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(LoaderInfo_obj,this_onComplete,(void))

 ::openfl::_legacy::utils::ByteArray LoaderInfo_obj::get_bytes(){
            	HX_STACKFRAME(&_hx_pos_f98b58d7b7079c84_118_get_bytes)
HXDLIN( 118)		return ( ( ::openfl::_legacy::utils::ByteArray)(this->data) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(LoaderInfo_obj,get_bytes,return )

 ::openfl::_legacy::display::LoaderInfo LoaderInfo_obj::create( ::openfl::_legacy::display::Loader loader){
            	HX_GC_STACKFRAME(&_hx_pos_f98b58d7b7079c84_50_create)
HXLINE(  52)		 ::openfl::_legacy::display::LoaderInfo loaderInfo =  ::openfl::_legacy::display::LoaderInfo_obj::__alloc( HX_CTX );
HXLINE(  53)		loaderInfo->loader = loader;
HXLINE(  54)		loaderInfo->uncaughtErrorEvents =  ::openfl::events::UncaughtErrorEvents_obj::__alloc( HX_CTX );
HXLINE(  55)		loaderInfo->addEventListener(::openfl::_legacy::events::Event_obj::COMPLETE,loaderInfo->this_onComplete_dyn(),null(),null(),null());
HXLINE(  57)		if (hx::IsNull( loader )) {
HXLINE(  59)			loaderInfo->url = HX_("",00,00,00,00);
            		}
HXLINE(  63)		return loaderInfo;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(LoaderInfo_obj,create,return )


hx::ObjectPtr< LoaderInfo_obj > LoaderInfo_obj::__new() {
	hx::ObjectPtr< LoaderInfo_obj > __this = new LoaderInfo_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< LoaderInfo_obj > LoaderInfo_obj::__alloc(hx::Ctx *_hx_ctx) {
	LoaderInfo_obj *__this = (LoaderInfo_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(LoaderInfo_obj), true, "openfl._legacy.display.LoaderInfo"));
	*(void **)__this = LoaderInfo_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

LoaderInfo_obj::LoaderInfo_obj()
{
}

void LoaderInfo_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(LoaderInfo);
	HX_MARK_MEMBER_NAME(applicationDomain,"applicationDomain");
	HX_MARK_MEMBER_NAME(bytes,"bytes");
	HX_MARK_MEMBER_NAME(childAllowsParent,"childAllowsParent");
	HX_MARK_MEMBER_NAME(content,"content");
	HX_MARK_MEMBER_NAME(contentType,"contentType");
	HX_MARK_MEMBER_NAME(frameRate,"frameRate");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(loader,"loader");
	HX_MARK_MEMBER_NAME(loaderURL,"loaderURL");
	HX_MARK_MEMBER_NAME(parameters,"parameters");
	HX_MARK_MEMBER_NAME(parentAllowsChild,"parentAllowsChild");
	HX_MARK_MEMBER_NAME(sameDomain,"sameDomain");
	HX_MARK_MEMBER_NAME(sharedEvents,"sharedEvents");
	HX_MARK_MEMBER_NAME(url,"url");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(uncaughtErrorEvents,"uncaughtErrorEvents");
	HX_MARK_MEMBER_NAME(_hx___pendingURL,"__pendingURL");
	 ::openfl::_legacy::net::URLLoader_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void LoaderInfo_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(applicationDomain,"applicationDomain");
	HX_VISIT_MEMBER_NAME(bytes,"bytes");
	HX_VISIT_MEMBER_NAME(childAllowsParent,"childAllowsParent");
	HX_VISIT_MEMBER_NAME(content,"content");
	HX_VISIT_MEMBER_NAME(contentType,"contentType");
	HX_VISIT_MEMBER_NAME(frameRate,"frameRate");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(loader,"loader");
	HX_VISIT_MEMBER_NAME(loaderURL,"loaderURL");
	HX_VISIT_MEMBER_NAME(parameters,"parameters");
	HX_VISIT_MEMBER_NAME(parentAllowsChild,"parentAllowsChild");
	HX_VISIT_MEMBER_NAME(sameDomain,"sameDomain");
	HX_VISIT_MEMBER_NAME(sharedEvents,"sharedEvents");
	HX_VISIT_MEMBER_NAME(url,"url");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(uncaughtErrorEvents,"uncaughtErrorEvents");
	HX_VISIT_MEMBER_NAME(_hx___pendingURL,"__pendingURL");
	 ::openfl::_legacy::net::URLLoader_obj::__Visit(HX_VISIT_ARG);
}

hx::Val LoaderInfo_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"url") ) { return hx::Val( url ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"load") ) { return hx::Val( load_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"bytes") ) { return hx::Val( inCallProp == hx::paccAlways ? get_bytes() : bytes ); }
		if (HX_FIELD_EQ(inName,"width") ) { return hx::Val( width ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return hx::Val( height ); }
		if (HX_FIELD_EQ(inName,"loader") ) { return hx::Val( loader ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"content") ) { return hx::Val( content ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"frameRate") ) { return hx::Val( frameRate ); }
		if (HX_FIELD_EQ(inName,"loaderURL") ) { return hx::Val( loaderURL ); }
		if (HX_FIELD_EQ(inName,"get_bytes") ) { return hx::Val( get_bytes_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"parameters") ) { return hx::Val( parameters ); }
		if (HX_FIELD_EQ(inName,"sameDomain") ) { return hx::Val( sameDomain ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"contentType") ) { return hx::Val( contentType ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"sharedEvents") ) { return hx::Val( sharedEvents ); }
		if (HX_FIELD_EQ(inName,"__pendingURL") ) { return hx::Val( _hx___pendingURL ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"this_onComplete") ) { return hx::Val( this_onComplete_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"applicationDomain") ) { return hx::Val( applicationDomain ); }
		if (HX_FIELD_EQ(inName,"childAllowsParent") ) { return hx::Val( childAllowsParent ); }
		if (HX_FIELD_EQ(inName,"parentAllowsChild") ) { return hx::Val( parentAllowsChild ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"uncaughtErrorEvents") ) { return hx::Val( uncaughtErrorEvents ); }
	}
	return super::__Field(inName,inCallProp);
}

bool LoaderInfo_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { outValue = create_dyn(); return true; }
	}
	return false;
}

hx::Val LoaderInfo_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"url") ) { url=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"bytes") ) { bytes=inValue.Cast<  ::openfl::_legacy::utils::ByteArray >(); return inValue; }
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"loader") ) { loader=inValue.Cast<  ::openfl::_legacy::display::Loader >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"content") ) { content=inValue.Cast<  ::openfl::_legacy::display::DisplayObject >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"frameRate") ) { frameRate=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"loaderURL") ) { loaderURL=inValue.Cast< ::String >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"parameters") ) { parameters=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sameDomain") ) { sameDomain=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"contentType") ) { contentType=inValue.Cast< ::String >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"sharedEvents") ) { sharedEvents=inValue.Cast<  ::openfl::_legacy::events::EventDispatcher >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__pendingURL") ) { _hx___pendingURL=inValue.Cast< ::String >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"applicationDomain") ) { applicationDomain=inValue.Cast<  ::openfl::_hx_system::ApplicationDomain >(); return inValue; }
		if (HX_FIELD_EQ(inName,"childAllowsParent") ) { childAllowsParent=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"parentAllowsChild") ) { parentAllowsChild=inValue.Cast< bool >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"uncaughtErrorEvents") ) { uncaughtErrorEvents=inValue.Cast<  ::openfl::events::UncaughtErrorEvents >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void LoaderInfo_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("applicationDomain","\xb4","\x2c","\xdb","\xa3"));
	outFields->push(HX_HCSTRING("bytes","\x6b","\x08","\x98","\xbd"));
	outFields->push(HX_HCSTRING("childAllowsParent","\x50","\xb0","\x90","\x17"));
	outFields->push(HX_HCSTRING("content","\x39","\x8d","\x77","\x19"));
	outFields->push(HX_HCSTRING("contentType","\x93","\x3c","\x7b","\x2a"));
	outFields->push(HX_HCSTRING("frameRate","\xad","\x11","\x25","\x39"));
	outFields->push(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));
	outFields->push(HX_HCSTRING("loader","\x13","\x48","\x6f","\x58"));
	outFields->push(HX_HCSTRING("loaderURL","\x1c","\x8d","\x1d","\xfb"));
	outFields->push(HX_HCSTRING("parameters","\xaa","\xbe","\x7e","\x51"));
	outFields->push(HX_HCSTRING("parentAllowsChild","\x68","\x78","\xd5","\x78"));
	outFields->push(HX_HCSTRING("sameDomain","\x4a","\x39","\x74","\x73"));
	outFields->push(HX_HCSTRING("sharedEvents","\x9e","\x2b","\x5a","\x49"));
	outFields->push(HX_HCSTRING("url","\x6f","\x2b","\x59","\x00"));
	outFields->push(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));
	outFields->push(HX_HCSTRING("uncaughtErrorEvents","\x6c","\x14","\x2c","\x48"));
	outFields->push(HX_HCSTRING("__pendingURL","\x78","\x3a","\x58","\xfa"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo LoaderInfo_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::_hx_system::ApplicationDomain*/ ,(int)offsetof(LoaderInfo_obj,applicationDomain),HX_HCSTRING("applicationDomain","\xb4","\x2c","\xdb","\xa3")},
	{hx::fsObject /*::openfl::_legacy::utils::ByteArray*/ ,(int)offsetof(LoaderInfo_obj,bytes),HX_HCSTRING("bytes","\x6b","\x08","\x98","\xbd")},
	{hx::fsBool,(int)offsetof(LoaderInfo_obj,childAllowsParent),HX_HCSTRING("childAllowsParent","\x50","\xb0","\x90","\x17")},
	{hx::fsObject /*::openfl::_legacy::display::DisplayObject*/ ,(int)offsetof(LoaderInfo_obj,content),HX_HCSTRING("content","\x39","\x8d","\x77","\x19")},
	{hx::fsString,(int)offsetof(LoaderInfo_obj,contentType),HX_HCSTRING("contentType","\x93","\x3c","\x7b","\x2a")},
	{hx::fsFloat,(int)offsetof(LoaderInfo_obj,frameRate),HX_HCSTRING("frameRate","\xad","\x11","\x25","\x39")},
	{hx::fsInt,(int)offsetof(LoaderInfo_obj,height),HX_HCSTRING("height","\xe7","\x07","\x4c","\x02")},
	{hx::fsObject /*::openfl::_legacy::display::Loader*/ ,(int)offsetof(LoaderInfo_obj,loader),HX_HCSTRING("loader","\x13","\x48","\x6f","\x58")},
	{hx::fsString,(int)offsetof(LoaderInfo_obj,loaderURL),HX_HCSTRING("loaderURL","\x1c","\x8d","\x1d","\xfb")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(LoaderInfo_obj,parameters),HX_HCSTRING("parameters","\xaa","\xbe","\x7e","\x51")},
	{hx::fsBool,(int)offsetof(LoaderInfo_obj,parentAllowsChild),HX_HCSTRING("parentAllowsChild","\x68","\x78","\xd5","\x78")},
	{hx::fsBool,(int)offsetof(LoaderInfo_obj,sameDomain),HX_HCSTRING("sameDomain","\x4a","\x39","\x74","\x73")},
	{hx::fsObject /*::openfl::_legacy::events::EventDispatcher*/ ,(int)offsetof(LoaderInfo_obj,sharedEvents),HX_HCSTRING("sharedEvents","\x9e","\x2b","\x5a","\x49")},
	{hx::fsString,(int)offsetof(LoaderInfo_obj,url),HX_HCSTRING("url","\x6f","\x2b","\x59","\x00")},
	{hx::fsInt,(int)offsetof(LoaderInfo_obj,width),HX_HCSTRING("width","\x06","\xb6","\x62","\xca")},
	{hx::fsObject /*::openfl::events::UncaughtErrorEvents*/ ,(int)offsetof(LoaderInfo_obj,uncaughtErrorEvents),HX_HCSTRING("uncaughtErrorEvents","\x6c","\x14","\x2c","\x48")},
	{hx::fsString,(int)offsetof(LoaderInfo_obj,_hx___pendingURL),HX_HCSTRING("__pendingURL","\x78","\x3a","\x58","\xfa")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *LoaderInfo_obj_sStaticStorageInfo = 0;
#endif

static ::String LoaderInfo_obj_sMemberFields[] = {
	HX_HCSTRING("applicationDomain","\xb4","\x2c","\xdb","\xa3"),
	HX_HCSTRING("bytes","\x6b","\x08","\x98","\xbd"),
	HX_HCSTRING("childAllowsParent","\x50","\xb0","\x90","\x17"),
	HX_HCSTRING("content","\x39","\x8d","\x77","\x19"),
	HX_HCSTRING("contentType","\x93","\x3c","\x7b","\x2a"),
	HX_HCSTRING("frameRate","\xad","\x11","\x25","\x39"),
	HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"),
	HX_HCSTRING("loader","\x13","\x48","\x6f","\x58"),
	HX_HCSTRING("loaderURL","\x1c","\x8d","\x1d","\xfb"),
	HX_HCSTRING("parameters","\xaa","\xbe","\x7e","\x51"),
	HX_HCSTRING("parentAllowsChild","\x68","\x78","\xd5","\x78"),
	HX_HCSTRING("sameDomain","\x4a","\x39","\x74","\x73"),
	HX_HCSTRING("sharedEvents","\x9e","\x2b","\x5a","\x49"),
	HX_HCSTRING("url","\x6f","\x2b","\x59","\x00"),
	HX_HCSTRING("width","\x06","\xb6","\x62","\xca"),
	HX_HCSTRING("uncaughtErrorEvents","\x6c","\x14","\x2c","\x48"),
	HX_HCSTRING("__pendingURL","\x78","\x3a","\x58","\xfa"),
	HX_HCSTRING("load","\x26","\x9a","\xb7","\x47"),
	HX_HCSTRING("this_onComplete","\x79","\x9c","\x68","\xed"),
	HX_HCSTRING("get_bytes","\xc2","\x64","\x41","\x01"),
	::String(null()) };

static void LoaderInfo_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(LoaderInfo_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void LoaderInfo_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(LoaderInfo_obj::__mClass,"__mClass");
};

#endif

hx::Class LoaderInfo_obj::__mClass;

static ::String LoaderInfo_obj_sStaticFields[] = {
	HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"),
	::String(null())
};

void LoaderInfo_obj::__register()
{
	hx::Object *dummy = new LoaderInfo_obj;
	LoaderInfo_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._legacy.display.LoaderInfo","\xd1","\x85","\xb1","\x1a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &LoaderInfo_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = LoaderInfo_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(LoaderInfo_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(LoaderInfo_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< LoaderInfo_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = LoaderInfo_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = LoaderInfo_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = LoaderInfo_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace _legacy
} // end namespace display
