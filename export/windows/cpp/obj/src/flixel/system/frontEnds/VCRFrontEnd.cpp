// Generated by Haxe 3.4.5
#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
#endif
#ifndef INCLUDED_flixel_input_FlxPointer
#include <flixel/input/FlxPointer.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouse
#include <flixel/input/mouse/FlxMouse.h>
#endif
#ifndef INCLUDED_flixel_system_debug_FlxDebugger
#include <flixel/system/debug/FlxDebugger.h>
#endif
#ifndef INCLUDED_flixel_system_debug_VCR
#include <flixel/system/debug/VCR.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_VCRFrontEnd
#include <flixel/system/frontEnds/VCRFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
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
#ifndef INCLUDED_openfl__legacy_display_Sprite
#include <openfl/_legacy/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_ui_Mouse
#include <openfl/_legacy/ui/Mouse.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_9c3075758433de87_19_new,"flixel.system.frontEnds.VCRFrontEnd","new",0x9592d9ef,"flixel.system.frontEnds.VCRFrontEnd.new","flixel/system/frontEnds/VCRFrontEnd.hx",19,0xa1666a42)
HX_LOCAL_STACK_FRAME(_hx_pos_9c3075758433de87_60_pause,"flixel.system.frontEnds.VCRFrontEnd","pause",0x6797a245,"flixel.system.frontEnds.VCRFrontEnd.pause","flixel/system/frontEnds/VCRFrontEnd.hx",60,0xa1666a42)
HX_LOCAL_STACK_FRAME(_hx_pos_9c3075758433de87_80_resume,"flixel.system.frontEnds.VCRFrontEnd","resume",0x5616837e,"flixel.system.frontEnds.VCRFrontEnd.resume","flixel/system/frontEnds/VCRFrontEnd.hx",80,0xa1666a42)
namespace flixel{
namespace _hx_system{
namespace frontEnds{

void VCRFrontEnd_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_9c3075758433de87_19_new)
HXLINE(  53)		this->stepRequested = false;
HXLINE(  49)		this->paused = false;
            	}

Dynamic VCRFrontEnd_obj::__CreateEmpty() { return new VCRFrontEnd_obj; }

void *VCRFrontEnd_obj::_hx_vtable = 0;

Dynamic VCRFrontEnd_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< VCRFrontEnd_obj > _hx_result = new VCRFrontEnd_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool VCRFrontEnd_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x5d659b41;
}

void VCRFrontEnd_obj::pause(){
            	HX_STACKFRAME(&_hx_pos_9c3075758433de87_60_pause)
HXDLIN(  60)		if (!(this->paused)) {
HXLINE(  63)			if (!(::flixel::FlxG_obj::mouse->useSystemCursor)) {
HXLINE(  64)				::openfl::_legacy::ui::Mouse_obj::show();
            			}
HXLINE(  67)			this->paused = true;
HXLINE(  70)			::flixel::FlxG_obj::game->debugger->vcr->onPause();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(VCRFrontEnd_obj,pause,(void))

void VCRFrontEnd_obj::resume(){
            	HX_STACKFRAME(&_hx_pos_9c3075758433de87_80_resume)
HXDLIN(  80)		if (this->paused) {
HXLINE(  83)			if (!(::flixel::FlxG_obj::mouse->useSystemCursor)) {
HXLINE(  84)				::openfl::_legacy::ui::Mouse_obj::hide();
            			}
HXLINE(  87)			this->paused = false;
HXLINE(  90)			::flixel::FlxG_obj::game->debugger->vcr->onResume();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(VCRFrontEnd_obj,resume,(void))


hx::ObjectPtr< VCRFrontEnd_obj > VCRFrontEnd_obj::__new() {
	hx::ObjectPtr< VCRFrontEnd_obj > __this = new VCRFrontEnd_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< VCRFrontEnd_obj > VCRFrontEnd_obj::__alloc(hx::Ctx *_hx_ctx) {
	VCRFrontEnd_obj *__this = (VCRFrontEnd_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(VCRFrontEnd_obj), false, "flixel.system.frontEnds.VCRFrontEnd"));
	*(void **)__this = VCRFrontEnd_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

VCRFrontEnd_obj::VCRFrontEnd_obj()
{
}

hx::Val VCRFrontEnd_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"pause") ) { return hx::Val( pause_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"paused") ) { return hx::Val( paused ); }
		if (HX_FIELD_EQ(inName,"resume") ) { return hx::Val( resume_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"stepRequested") ) { return hx::Val( stepRequested ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val VCRFrontEnd_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"paused") ) { paused=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"stepRequested") ) { stepRequested=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void VCRFrontEnd_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("paused","\xae","\x40","\x84","\xef"));
	outFields->push(HX_HCSTRING("stepRequested","\x82","\x98","\x54","\xd1"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo VCRFrontEnd_obj_sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(VCRFrontEnd_obj,paused),HX_HCSTRING("paused","\xae","\x40","\x84","\xef")},
	{hx::fsBool,(int)offsetof(VCRFrontEnd_obj,stepRequested),HX_HCSTRING("stepRequested","\x82","\x98","\x54","\xd1")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *VCRFrontEnd_obj_sStaticStorageInfo = 0;
#endif

static ::String VCRFrontEnd_obj_sMemberFields[] = {
	HX_HCSTRING("paused","\xae","\x40","\x84","\xef"),
	HX_HCSTRING("stepRequested","\x82","\x98","\x54","\xd1"),
	HX_HCSTRING("pause","\xf6","\xd6","\x57","\xbd"),
	HX_HCSTRING("resume","\xad","\x69","\x84","\x08"),
	::String(null()) };

static void VCRFrontEnd_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(VCRFrontEnd_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void VCRFrontEnd_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(VCRFrontEnd_obj::__mClass,"__mClass");
};

#endif

hx::Class VCRFrontEnd_obj::__mClass;

void VCRFrontEnd_obj::__register()
{
	hx::Object *dummy = new VCRFrontEnd_obj;
	VCRFrontEnd_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.system.frontEnds.VCRFrontEnd","\x7d","\xb6","\xad","\xb5");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = VCRFrontEnd_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(VCRFrontEnd_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< VCRFrontEnd_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = VCRFrontEnd_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = VCRFrontEnd_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = VCRFrontEnd_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace system
} // end namespace frontEnds
