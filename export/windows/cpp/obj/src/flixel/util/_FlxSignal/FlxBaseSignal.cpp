// Generated by Haxe 3.4.5
#include <hxcpp.h>

#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxSignal
#include <flixel/util/IFlxSignal.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxBaseSignal
#include <flixel/util/_FlxSignal/FlxBaseSignal.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxSignalHandler
#include <flixel/util/_FlxSignal/FlxSignalHandler.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_06997c0c7386deb2_95_new,"flixel.util._FlxSignal.FlxBaseSignal","new",0x2468c304,"flixel.util._FlxSignal.FlxBaseSignal.new","flixel/util/FlxSignal.hx",95,0x3c758c5e)
HX_LOCAL_STACK_FRAME(_hx_pos_06997c0c7386deb2_114_add,"flixel.util._FlxSignal.FlxBaseSignal","add",0x245ee4c5,"flixel.util._FlxSignal.FlxBaseSignal.add","flixel/util/FlxSignal.hx",114,0x3c758c5e)
HX_LOCAL_STACK_FRAME(_hx_pos_06997c0c7386deb2_120_addOnce,"flixel.util._FlxSignal.FlxBaseSignal","addOnce",0xaa1cd4e6,"flixel.util._FlxSignal.FlxBaseSignal.addOnce","flixel/util/FlxSignal.hx",120,0x3c758c5e)
HX_LOCAL_STACK_FRAME(_hx_pos_06997c0c7386deb2_126_remove,"flixel.util._FlxSignal.FlxBaseSignal","remove",0x06fde820,"flixel.util._FlxSignal.FlxBaseSignal.remove","flixel/util/FlxSignal.hx",126,0x3c758c5e)
HX_LOCAL_STACK_FRAME(_hx_pos_06997c0c7386deb2_144_has,"flixel.util._FlxSignal.FlxBaseSignal","has",0x246431fe,"flixel.util._FlxSignal.FlxBaseSignal.has","flixel/util/FlxSignal.hx",144,0x3c758c5e)
HX_LOCAL_STACK_FRAME(_hx_pos_06997c0c7386deb2_152_removeAll,"flixel.util._FlxSignal.FlxBaseSignal","removeAll",0x23fb9ce1,"flixel.util._FlxSignal.FlxBaseSignal.removeAll","flixel/util/FlxSignal.hx",152,0x3c758c5e)
HX_LOCAL_STACK_FRAME(_hx_pos_06997c0c7386deb2_156_destroy,"flixel.util._FlxSignal.FlxBaseSignal","destroy",0x48b3419e,"flixel.util._FlxSignal.FlxBaseSignal.destroy","flixel/util/FlxSignal.hx",156,0x3c758c5e)
HX_LOCAL_STACK_FRAME(_hx_pos_06997c0c7386deb2_163_registerListener,"flixel.util._FlxSignal.FlxBaseSignal","registerListener",0xa63a34d3,"flixel.util._FlxSignal.FlxBaseSignal.registerListener","flixel/util/FlxSignal.hx",163,0x3c758c5e)
HX_LOCAL_STACK_FRAME(_hx_pos_06997c0c7386deb2_184_getHandler,"flixel.util._FlxSignal.FlxBaseSignal","getHandler",0x2fd59fb0,"flixel.util._FlxSignal.FlxBaseSignal.getHandler","flixel/util/FlxSignal.hx",184,0x3c758c5e)
namespace flixel{
namespace util{
namespace _FlxSignal{

void FlxBaseSignal_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_06997c0c7386deb2_95_new)
HXLINE( 104)		this->processingListeners = false;
HXLINE( 108)		this->handlers = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 109)		this->pendingRemove = ::Array_obj< ::Dynamic>::__new(0);
            	}

Dynamic FlxBaseSignal_obj::__CreateEmpty() { return new FlxBaseSignal_obj; }

void *FlxBaseSignal_obj::_hx_vtable = 0;

Dynamic FlxBaseSignal_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< FlxBaseSignal_obj > _hx_result = new FlxBaseSignal_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool FlxBaseSignal_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x2ca3abce;
}

static ::flixel::util::IFlxSignal_obj _hx_flixel_util__FlxSignal_FlxBaseSignal__hx_flixel_util_IFlxSignal= {
	( void (hx::Object::*)())&::flixel::util::_FlxSignal::FlxBaseSignal_obj::destroy,
	( void (hx::Object::*)( ::Dynamic))&::flixel::util::_FlxSignal::FlxBaseSignal_obj::add,
	( void (hx::Object::*)( ::Dynamic))&::flixel::util::_FlxSignal::FlxBaseSignal_obj::addOnce,
	( void (hx::Object::*)( ::Dynamic))&::flixel::util::_FlxSignal::FlxBaseSignal_obj::remove,
	( void (hx::Object::*)())&::flixel::util::_FlxSignal::FlxBaseSignal_obj::removeAll,
	( bool (hx::Object::*)( ::Dynamic))&::flixel::util::_FlxSignal::FlxBaseSignal_obj::has,
};

static ::flixel::util::IFlxDestroyable_obj _hx_flixel_util__FlxSignal_FlxBaseSignal__hx_flixel_util_IFlxDestroyable= {
	( void (hx::Object::*)())&::flixel::util::_FlxSignal::FlxBaseSignal_obj::destroy,
};

void *FlxBaseSignal_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x540588cf: return &_hx_flixel_util__FlxSignal_FlxBaseSignal__hx_flixel_util_IFlxSignal;
		case (int)0xd4fe2fcd: return &_hx_flixel_util__FlxSignal_FlxBaseSignal__hx_flixel_util_IFlxDestroyable;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

void FlxBaseSignal_obj::add( ::Dynamic listener){
            	HX_STACKFRAME(&_hx_pos_06997c0c7386deb2_114_add)
HXDLIN( 114)		if (hx::IsNotNull( listener )) {
HXLINE( 115)			this->registerListener(listener,false);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxBaseSignal_obj,add,(void))

void FlxBaseSignal_obj::addOnce( ::Dynamic listener){
            	HX_STACKFRAME(&_hx_pos_06997c0c7386deb2_120_addOnce)
HXDLIN( 120)		if (hx::IsNotNull( listener )) {
HXLINE( 121)			this->registerListener(listener,true);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxBaseSignal_obj,addOnce,(void))

void FlxBaseSignal_obj::remove( ::Dynamic listener){
            	HX_STACKFRAME(&_hx_pos_06997c0c7386deb2_126_remove)
HXDLIN( 126)		if (hx::IsNotNull( listener )) {
HXLINE( 128)			 ::flixel::util::_FlxSignal::FlxSignalHandler handler = this->getHandler(listener);
HXLINE( 129)			if (hx::IsNotNull( handler )) {
HXLINE( 131)				if (this->processingListeners) {
HXLINE( 132)					this->pendingRemove->push(handler);
            				}
            				else {
HXLINE( 135)					this->handlers->remove(handler);
HXLINE( 136)					handler->destroy();
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxBaseSignal_obj,remove,(void))

bool FlxBaseSignal_obj::has( ::Dynamic listener){
            	HX_STACKFRAME(&_hx_pos_06997c0c7386deb2_144_has)
HXLINE( 145)		if (hx::IsNull( listener )) {
HXLINE( 146)			return false;
            		}
HXLINE( 147)		return hx::IsNotNull( this->getHandler(listener) );
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxBaseSignal_obj,has,return )

void FlxBaseSignal_obj::removeAll(){
            	HX_STACKFRAME(&_hx_pos_06997c0c7386deb2_152_removeAll)
HXDLIN( 152)		::flixel::util::FlxDestroyUtil_obj::destroyArray(this->handlers);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxBaseSignal_obj,removeAll,(void))

void FlxBaseSignal_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_06997c0c7386deb2_156_destroy)
HXLINE( 157)		::flixel::util::FlxDestroyUtil_obj::destroyArray(this->handlers);
HXLINE( 158)		this->handlers = null();
HXLINE( 159)		this->pendingRemove = null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxBaseSignal_obj,destroy,(void))

 ::flixel::util::_FlxSignal::FlxSignalHandler FlxBaseSignal_obj::registerListener( ::Dynamic listener,bool dispatchOnce){
            	HX_GC_STACKFRAME(&_hx_pos_06997c0c7386deb2_163_registerListener)
HXLINE( 164)		 ::flixel::util::_FlxSignal::FlxSignalHandler handler = this->getHandler(listener);
HXLINE( 166)		if (hx::IsNull( handler )) {
HXLINE( 168)			handler =  ::flixel::util::_FlxSignal::FlxSignalHandler_obj::__alloc( HX_CTX ,listener,dispatchOnce);
HXLINE( 169)			this->handlers->push(handler);
HXLINE( 170)			return handler;
            		}
            		else {
HXLINE( 176)			if ((handler->dispatchOnce != dispatchOnce)) {
HXLINE( 177)				HX_STACK_DO_THROW(HX_("You cannot addOnce() then add() the same listener without removing the relationship first.",19,c7,3c,a5));
            			}
            			else {
HXLINE( 179)				return handler;
            			}
            		}
HXLINE( 166)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxBaseSignal_obj,registerListener,return )

 ::flixel::util::_FlxSignal::FlxSignalHandler FlxBaseSignal_obj::getHandler( ::Dynamic listener){
            	HX_STACKFRAME(&_hx_pos_06997c0c7386deb2_184_getHandler)
HXLINE( 185)		{
HXLINE( 185)			int _g = (int)0;
HXDLIN( 185)			::Array< ::Dynamic> _g1 = this->handlers;
HXDLIN( 185)			while((_g < _g1->length)){
HXLINE( 185)				 ::flixel::util::_FlxSignal::FlxSignalHandler handler = _g1->__get(_g).StaticCast<  ::flixel::util::_FlxSignal::FlxSignalHandler >();
HXDLIN( 185)				_g = (_g + (int)1);
HXLINE( 187)				if (hx::IsEq( handler->listener,listener )) {
HXLINE( 194)					return handler;
            				}
            			}
            		}
HXLINE( 197)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxBaseSignal_obj,getHandler,return )


hx::ObjectPtr< FlxBaseSignal_obj > FlxBaseSignal_obj::__new() {
	hx::ObjectPtr< FlxBaseSignal_obj > __this = new FlxBaseSignal_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< FlxBaseSignal_obj > FlxBaseSignal_obj::__alloc(hx::Ctx *_hx_ctx) {
	FlxBaseSignal_obj *__this = (FlxBaseSignal_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(FlxBaseSignal_obj), true, "flixel.util._FlxSignal.FlxBaseSignal"));
	*(void **)__this = FlxBaseSignal_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

FlxBaseSignal_obj::FlxBaseSignal_obj()
{
}

void FlxBaseSignal_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxBaseSignal);
	HX_MARK_MEMBER_NAME(dispatch,"dispatch");
	HX_MARK_MEMBER_NAME(handlers,"handlers");
	HX_MARK_MEMBER_NAME(pendingRemove,"pendingRemove");
	HX_MARK_MEMBER_NAME(processingListeners,"processingListeners");
	HX_MARK_END_CLASS();
}

void FlxBaseSignal_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(dispatch,"dispatch");
	HX_VISIT_MEMBER_NAME(handlers,"handlers");
	HX_VISIT_MEMBER_NAME(pendingRemove,"pendingRemove");
	HX_VISIT_MEMBER_NAME(processingListeners,"processingListeners");
}

hx::Val FlxBaseSignal_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return hx::Val( add_dyn() ); }
		if (HX_FIELD_EQ(inName,"has") ) { return hx::Val( has_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"remove") ) { return hx::Val( remove_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"addOnce") ) { return hx::Val( addOnce_dyn() ); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return hx::Val( destroy_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"dispatch") ) { return hx::Val( dispatch ); }
		if (HX_FIELD_EQ(inName,"handlers") ) { return hx::Val( handlers ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"removeAll") ) { return hx::Val( removeAll_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"getHandler") ) { return hx::Val( getHandler_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"pendingRemove") ) { return hx::Val( pendingRemove ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"registerListener") ) { return hx::Val( registerListener_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"processingListeners") ) { return hx::Val( processingListeners ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val FlxBaseSignal_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"dispatch") ) { dispatch=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"handlers") ) { handlers=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"pendingRemove") ) { pendingRemove=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"processingListeners") ) { processingListeners=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxBaseSignal_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("dispatch","\xba","\xce","\x63","\x1e"));
	outFields->push(HX_HCSTRING("handlers","\x69","\x21","\x24","\xd5"));
	outFields->push(HX_HCSTRING("pendingRemove","\xfb","\x03","\x57","\xfe"));
	outFields->push(HX_HCSTRING("processingListeners","\x2c","\x99","\x99","\x10"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo FlxBaseSignal_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxBaseSignal_obj,dispatch),HX_HCSTRING("dispatch","\xba","\xce","\x63","\x1e")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(FlxBaseSignal_obj,handlers),HX_HCSTRING("handlers","\x69","\x21","\x24","\xd5")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(FlxBaseSignal_obj,pendingRemove),HX_HCSTRING("pendingRemove","\xfb","\x03","\x57","\xfe")},
	{hx::fsBool,(int)offsetof(FlxBaseSignal_obj,processingListeners),HX_HCSTRING("processingListeners","\x2c","\x99","\x99","\x10")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *FlxBaseSignal_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxBaseSignal_obj_sMemberFields[] = {
	HX_HCSTRING("dispatch","\xba","\xce","\x63","\x1e"),
	HX_HCSTRING("handlers","\x69","\x21","\x24","\xd5"),
	HX_HCSTRING("pendingRemove","\xfb","\x03","\x57","\xfe"),
	HX_HCSTRING("processingListeners","\x2c","\x99","\x99","\x10"),
	HX_HCSTRING("add","\x21","\xf2","\x49","\x00"),
	HX_HCSTRING("addOnce","\x42","\xc0","\xef","\x85"),
	HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"),
	HX_HCSTRING("has","\x5a","\x3f","\x4f","\x00"),
	HX_HCSTRING("removeAll","\x3d","\x17","\xe5","\xca"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("registerListener","\xf7","\xfd","\xf4","\x36"),
	HX_HCSTRING("getHandler","\xd4","\x35","\x37","\x95"),
	::String(null()) };

static void FlxBaseSignal_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxBaseSignal_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FlxBaseSignal_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxBaseSignal_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxBaseSignal_obj::__mClass;

void FlxBaseSignal_obj::__register()
{
	hx::Object *dummy = new FlxBaseSignal_obj;
	FlxBaseSignal_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.util._FlxSignal.FlxBaseSignal","\x12","\x31","\x0a","\xb9");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = FlxBaseSignal_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(FlxBaseSignal_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxBaseSignal_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FlxBaseSignal_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxBaseSignal_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxBaseSignal_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace util
} // end namespace _FlxSignal
