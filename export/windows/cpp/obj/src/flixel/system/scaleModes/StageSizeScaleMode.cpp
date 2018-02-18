// Generated by Haxe 3.4.5
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_system_scaleModes_BaseScaleMode
#include <flixel/system/scaleModes/BaseScaleMode.h>
#endif
#ifndef INCLUDED_flixel_system_scaleModes_StageSizeScaleMode
#include <flixel/system/scaleModes/StageSizeScaleMode.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_85578e200ca34a5d_5_new,"flixel.system.scaleModes.StageSizeScaleMode","new",0x27e1f43b,"flixel.system.scaleModes.StageSizeScaleMode.new","flixel/system/scaleModes/StageSizeScaleMode.hx",5,0x13b5e814)
HX_LOCAL_STACK_FRAME(_hx_pos_85578e200ca34a5d_8_onMeasure,"flixel.system.scaleModes.StageSizeScaleMode","onMeasure",0x5cbbae1a,"flixel.system.scaleModes.StageSizeScaleMode.onMeasure","flixel/system/scaleModes/StageSizeScaleMode.hx",8,0x13b5e814)
namespace flixel{
namespace _hx_system{
namespace scaleModes{

void StageSizeScaleMode_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_85578e200ca34a5d_5_new)
HXDLIN(   5)		super::__construct();
            	}

Dynamic StageSizeScaleMode_obj::__CreateEmpty() { return new StageSizeScaleMode_obj; }

void *StageSizeScaleMode_obj::_hx_vtable = 0;

Dynamic StageSizeScaleMode_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< StageSizeScaleMode_obj > _hx_result = new StageSizeScaleMode_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool StageSizeScaleMode_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2a5138eb) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x2a5138eb;
	} else {
		return inClassId==(int)0x377b85df;
	}
}

void StageSizeScaleMode_obj::onMeasure(int Width,int Height){
            	HX_STACKFRAME(&_hx_pos_85578e200ca34a5d_8_onMeasure)
HXLINE(   9)		::flixel::FlxG_obj::width = Width;
HXLINE(  10)		::flixel::FlxG_obj::height = Height;
HXLINE(  12)		this->scale->set((int)1,(int)1);
HXLINE(  13)		 ::flixel::FlxGame _hx_tmp = ::flixel::FlxG_obj::game;
HXDLIN(  13)		_hx_tmp->set_x(::flixel::FlxG_obj::game->set_y((int)0));
HXLINE(  15)		if (hx::IsNotNull( ::flixel::FlxG_obj::camera )) {
HXLINE(  17)			int oldW = ::flixel::FlxG_obj::camera->width;
HXLINE(  18)			int oldH = ::flixel::FlxG_obj::camera->height;
HXLINE(  20)			int newW = ::Math_obj::ceil(((Float)Width / (Float)::flixel::FlxG_obj::camera->zoom));
HXLINE(  21)			int newH = ::Math_obj::ceil(((Float)Height / (Float)::flixel::FlxG_obj::camera->zoom));
HXLINE(  23)			{
HXLINE(  23)				 ::flixel::FlxCamera _this = ::flixel::FlxG_obj::camera;
HXDLIN(  23)				_this->set_width(newW);
HXDLIN(  23)				_this->set_height(newH);
            			}
HXLINE(  24)			{
HXLINE(  24)				 ::openfl::_legacy::display::Sprite _g = ::flixel::FlxG_obj::camera->flashSprite;
HXDLIN(  24)				Float _hx_tmp1 = _g->get_x();
HXDLIN(  24)				_g->set_x((_hx_tmp1 + ((Float)(newW - oldW) / (Float)(int)2)));
            			}
HXLINE(  25)			{
HXLINE(  25)				 ::openfl::_legacy::display::Sprite _g1 = ::flixel::FlxG_obj::camera->flashSprite;
HXDLIN(  25)				Float _hx_tmp2 = _g1->get_y();
HXDLIN(  25)				_g1->set_y((_hx_tmp2 + ((Float)(newH - oldH) / (Float)(int)2)));
            			}
            		}
            	}



hx::ObjectPtr< StageSizeScaleMode_obj > StageSizeScaleMode_obj::__new() {
	hx::ObjectPtr< StageSizeScaleMode_obj > __this = new StageSizeScaleMode_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< StageSizeScaleMode_obj > StageSizeScaleMode_obj::__alloc(hx::Ctx *_hx_ctx) {
	StageSizeScaleMode_obj *__this = (StageSizeScaleMode_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(StageSizeScaleMode_obj), true, "flixel.system.scaleModes.StageSizeScaleMode"));
	*(void **)__this = StageSizeScaleMode_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

StageSizeScaleMode_obj::StageSizeScaleMode_obj()
{
}

hx::Val StageSizeScaleMode_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"onMeasure") ) { return hx::Val( onMeasure_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *StageSizeScaleMode_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *StageSizeScaleMode_obj_sStaticStorageInfo = 0;
#endif

static ::String StageSizeScaleMode_obj_sMemberFields[] = {
	HX_HCSTRING("onMeasure","\xff","\xb3","\x94","\x14"),
	::String(null()) };

static void StageSizeScaleMode_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(StageSizeScaleMode_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void StageSizeScaleMode_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(StageSizeScaleMode_obj::__mClass,"__mClass");
};

#endif

hx::Class StageSizeScaleMode_obj::__mClass;

void StageSizeScaleMode_obj::__register()
{
	hx::Object *dummy = new StageSizeScaleMode_obj;
	StageSizeScaleMode_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.system.scaleModes.StageSizeScaleMode","\xc9","\xba","\xb6","\x32");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = StageSizeScaleMode_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(StageSizeScaleMode_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< StageSizeScaleMode_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = StageSizeScaleMode_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = StageSizeScaleMode_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = StageSizeScaleMode_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace system
} // end namespace scaleModes