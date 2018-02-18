// Generated by Haxe 3.4.5
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_Event
#include <openfl/_legacy/events/Event.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_HTTPStatusEvent
#include <openfl/_legacy/events/HTTPStatusEvent.h>
#endif
#ifndef INCLUDED_openfl_net_URLRequestHeader
#include <openfl/net/URLRequestHeader.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_b535c9bcb6504c30_14_new,"openfl._legacy.events.HTTPStatusEvent","new",0x2f96f8e1,"openfl._legacy.events.HTTPStatusEvent.new","openfl/_legacy/events/HTTPStatusEvent.hx",14,0xa6d8d4ae)
HX_LOCAL_STACK_FRAME(_hx_pos_b535c9bcb6504c30_25_clone,"openfl._legacy.events.HTTPStatusEvent","clone",0x2d221e1e,"openfl._legacy.events.HTTPStatusEvent.clone","openfl/_legacy/events/HTTPStatusEvent.hx",25,0xa6d8d4ae)
HX_LOCAL_STACK_FRAME(_hx_pos_b535c9bcb6504c30_32_toString,"openfl._legacy.events.HTTPStatusEvent","toString",0xb0c4348b,"openfl._legacy.events.HTTPStatusEvent.toString","openfl/_legacy/events/HTTPStatusEvent.hx",32,0xa6d8d4ae)
HX_LOCAL_STACK_FRAME(_hx_pos_b535c9bcb6504c30_7_boot,"openfl._legacy.events.HTTPStatusEvent","boot",0x6c9bcc91,"openfl._legacy.events.HTTPStatusEvent.boot","openfl/_legacy/events/HTTPStatusEvent.hx",7,0xa6d8d4ae)
namespace openfl{
namespace _legacy{
namespace events{

void HTTPStatusEvent_obj::__construct(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable,hx::Null< int >  __o_status){
bool bubbles = __o_bubbles.Default(false);
bool cancelable = __o_cancelable.Default(false);
int status = __o_status.Default(0);
            	HX_STACKFRAME(&_hx_pos_b535c9bcb6504c30_14_new)
HXLINE(  16)		super::__construct(type,bubbles,cancelable);
HXLINE(  18)		this->status = status;
HXLINE(  19)		this->responseHeaders = ::Array_obj< ::Dynamic>::__new(0);
            	}

Dynamic HTTPStatusEvent_obj::__CreateEmpty() { return new HTTPStatusEvent_obj; }

void *HTTPStatusEvent_obj::_hx_vtable = 0;

Dynamic HTTPStatusEvent_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< HTTPStatusEvent_obj > _hx_result = new HTTPStatusEvent_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool HTTPStatusEvent_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0dd3a6b1) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x0dd3a6b1;
	} else {
		return inClassId==(int)0x2939fabb;
	}
}

 ::openfl::_legacy::events::Event HTTPStatusEvent_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_b535c9bcb6504c30_25_clone)
HXDLIN(  25)		::String _hx_tmp = this->get_type();
HXDLIN(  25)		bool _hx_tmp1 = this->get_bubbles();
HXDLIN(  25)		bool _hx_tmp2 = this->get_cancelable();
HXDLIN(  25)		return  ::openfl::_legacy::events::HTTPStatusEvent_obj::__alloc( HX_CTX ,_hx_tmp,_hx_tmp1,_hx_tmp2,this->status);
            	}


::String HTTPStatusEvent_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_b535c9bcb6504c30_32_toString)
HXDLIN(  32)		::String _hx_tmp = ((HX_("[HTTPStatusEvent type=",c8,a0,6f,f4) + this->get_type()) + HX_(" bubbles=",16,5f,ba,28));
HXDLIN(  32)		::String _hx_tmp1 = ((_hx_tmp + ::Std_obj::string(this->get_bubbles())) + HX_(" cancelable=",89,25,e0,5d));
HXDLIN(  32)		::String _hx_tmp2 = ((_hx_tmp1 + ::Std_obj::string(this->get_cancelable())) + HX_(" status=",ab,a8,bc,5c));
HXDLIN(  32)		return ((_hx_tmp2 + this->status) + HX_("]",5d,00,00,00));
            	}


::String HTTPStatusEvent_obj::HTTP_STATUS;


hx::ObjectPtr< HTTPStatusEvent_obj > HTTPStatusEvent_obj::__new(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable,hx::Null< int >  __o_status) {
	hx::ObjectPtr< HTTPStatusEvent_obj > __this = new HTTPStatusEvent_obj();
	__this->__construct(type,__o_bubbles,__o_cancelable,__o_status);
	return __this;
}

hx::ObjectPtr< HTTPStatusEvent_obj > HTTPStatusEvent_obj::__alloc(hx::Ctx *_hx_ctx,::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable,hx::Null< int >  __o_status) {
	HTTPStatusEvent_obj *__this = (HTTPStatusEvent_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(HTTPStatusEvent_obj), true, "openfl._legacy.events.HTTPStatusEvent"));
	*(void **)__this = HTTPStatusEvent_obj::_hx_vtable;
	__this->__construct(type,__o_bubbles,__o_cancelable,__o_status);
	return __this;
}

HTTPStatusEvent_obj::HTTPStatusEvent_obj()
{
}

void HTTPStatusEvent_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(HTTPStatusEvent);
	HX_MARK_MEMBER_NAME(status,"status");
	HX_MARK_MEMBER_NAME(responseHeaders,"responseHeaders");
	HX_MARK_MEMBER_NAME(responseURL,"responseURL");
	 ::openfl::_legacy::events::Event_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void HTTPStatusEvent_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(status,"status");
	HX_VISIT_MEMBER_NAME(responseHeaders,"responseHeaders");
	HX_VISIT_MEMBER_NAME(responseURL,"responseURL");
	 ::openfl::_legacy::events::Event_obj::__Visit(HX_VISIT_ARG);
}

hx::Val HTTPStatusEvent_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return hx::Val( clone_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"status") ) { return hx::Val( status ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return hx::Val( toString_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"responseURL") ) { return hx::Val( responseURL ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"responseHeaders") ) { return hx::Val( responseHeaders ); }
	}
	return super::__Field(inName,inCallProp);
}

bool HTTPStatusEvent_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"HTTP_STATUS") ) { outValue = ( HTTP_STATUS ); return true; }
	}
	return false;
}

hx::Val HTTPStatusEvent_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"status") ) { status=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"responseURL") ) { responseURL=inValue.Cast< ::String >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"responseHeaders") ) { responseHeaders=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool HTTPStatusEvent_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"HTTP_STATUS") ) { HTTP_STATUS=ioValue.Cast< ::String >(); return true; }
	}
	return false;
}

void HTTPStatusEvent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("status","\x32","\xe7","\xfb","\x05"));
	outFields->push(HX_HCSTRING("responseHeaders","\xc5","\x0d","\xca","\x43"));
	outFields->push(HX_HCSTRING("responseURL","\x6e","\x5f","\x19","\x86"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo HTTPStatusEvent_obj_sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(HTTPStatusEvent_obj,status),HX_HCSTRING("status","\x32","\xe7","\xfb","\x05")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(HTTPStatusEvent_obj,responseHeaders),HX_HCSTRING("responseHeaders","\xc5","\x0d","\xca","\x43")},
	{hx::fsString,(int)offsetof(HTTPStatusEvent_obj,responseURL),HX_HCSTRING("responseURL","\x6e","\x5f","\x19","\x86")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo HTTPStatusEvent_obj_sStaticStorageInfo[] = {
	{hx::fsString,(void *) &HTTPStatusEvent_obj::HTTP_STATUS,HX_HCSTRING("HTTP_STATUS","\x49","\x42","\xed","\x94")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String HTTPStatusEvent_obj_sMemberFields[] = {
	HX_HCSTRING("status","\x32","\xe7","\xfb","\x05"),
	HX_HCSTRING("responseHeaders","\xc5","\x0d","\xca","\x43"),
	HX_HCSTRING("responseURL","\x6e","\x5f","\x19","\x86"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

static void HTTPStatusEvent_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(HTTPStatusEvent_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(HTTPStatusEvent_obj::HTTP_STATUS,"HTTP_STATUS");
};

#ifdef HXCPP_VISIT_ALLOCS
static void HTTPStatusEvent_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(HTTPStatusEvent_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(HTTPStatusEvent_obj::HTTP_STATUS,"HTTP_STATUS");
};

#endif

hx::Class HTTPStatusEvent_obj::__mClass;

static ::String HTTPStatusEvent_obj_sStaticFields[] = {
	HX_HCSTRING("HTTP_STATUS","\x49","\x42","\xed","\x94"),
	::String(null())
};

void HTTPStatusEvent_obj::__register()
{
	hx::Object *dummy = new HTTPStatusEvent_obj;
	HTTPStatusEvent_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._legacy.events.HTTPStatusEvent","\x6f","\xf4","\xd6","\x3e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &HTTPStatusEvent_obj::__GetStatic;
	__mClass->mSetStaticField = &HTTPStatusEvent_obj::__SetStatic;
	__mClass->mMarkFunc = HTTPStatusEvent_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(HTTPStatusEvent_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(HTTPStatusEvent_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< HTTPStatusEvent_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = HTTPStatusEvent_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = HTTPStatusEvent_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = HTTPStatusEvent_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void HTTPStatusEvent_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_b535c9bcb6504c30_7_boot)
HXDLIN(   7)		HTTP_STATUS = HX_("httpStatus",da,4c,74,0a);
            	}
}

} // end namespace openfl
} // end namespace _legacy
} // end namespace events
