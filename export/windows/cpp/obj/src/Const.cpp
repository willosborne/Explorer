// Generated by Haxe 3.4.5
#include <hxcpp.h>

#ifndef INCLUDED_Const
#include <Const.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_a3c09597a4bb86d5_4_boot,"Const","boot",0x2aeb573d,"Const.boot","Const.hx",4,0x7f28c55b)
HX_LOCAL_STACK_FRAME(_hx_pos_a3c09597a4bb86d5_5_boot,"Const","boot",0x2aeb573d,"Const.boot","Const.hx",5,0x7f28c55b)
HX_LOCAL_STACK_FRAME(_hx_pos_a3c09597a4bb86d5_6_boot,"Const","boot",0x2aeb573d,"Const.boot","Const.hx",6,0x7f28c55b)
HX_LOCAL_STACK_FRAME(_hx_pos_a3c09597a4bb86d5_7_boot,"Const","boot",0x2aeb573d,"Const.boot","Const.hx",7,0x7f28c55b)
HX_LOCAL_STACK_FRAME(_hx_pos_a3c09597a4bb86d5_8_boot,"Const","boot",0x2aeb573d,"Const.boot","Const.hx",8,0x7f28c55b)
HX_LOCAL_STACK_FRAME(_hx_pos_a3c09597a4bb86d5_10_boot,"Const","boot",0x2aeb573d,"Const.boot","Const.hx",10,0x7f28c55b)

void Const_obj::__construct() { }

Dynamic Const_obj::__CreateEmpty() { return new Const_obj; }

void *Const_obj::_hx_vtable = 0;

Dynamic Const_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Const_obj > _hx_result = new Const_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Const_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7ead39ab;
}

int Const_obj::TILE_SIZE;

int Const_obj::GAME_TILES_WIDTH;

int Const_obj::GAME_TILES_HEIGHT;

int Const_obj::GAME_SCREEN_WIDTH;

int Const_obj::GAME_SCREEN_HEIGHT;

int Const_obj::TILESET_WIDTH;


Const_obj::Const_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *Const_obj_sMemberStorageInfo = 0;
static hx::StaticInfo Const_obj_sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &Const_obj::TILE_SIZE,HX_HCSTRING("TILE_SIZE","\xb2","\xaa","\xbd","\x5f")},
	{hx::fsInt,(void *) &Const_obj::GAME_TILES_WIDTH,HX_HCSTRING("GAME_TILES_WIDTH","\x3f","\x91","\x75","\xbb")},
	{hx::fsInt,(void *) &Const_obj::GAME_TILES_HEIGHT,HX_HCSTRING("GAME_TILES_HEIGHT","\x6e","\xfe","\xb8","\x01")},
	{hx::fsInt,(void *) &Const_obj::GAME_SCREEN_WIDTH,HX_HCSTRING("GAME_SCREEN_WIDTH","\x40","\x3d","\x3c","\xe8")},
	{hx::fsInt,(void *) &Const_obj::GAME_SCREEN_HEIGHT,HX_HCSTRING("GAME_SCREEN_HEIGHT","\x4d","\xd3","\xc8","\x02")},
	{hx::fsInt,(void *) &Const_obj::TILESET_WIDTH,HX_HCSTRING("TILESET_WIDTH","\x3b","\x91","\xfa","\x70")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void Const_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Const_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Const_obj::TILE_SIZE,"TILE_SIZE");
	HX_MARK_MEMBER_NAME(Const_obj::GAME_TILES_WIDTH,"GAME_TILES_WIDTH");
	HX_MARK_MEMBER_NAME(Const_obj::GAME_TILES_HEIGHT,"GAME_TILES_HEIGHT");
	HX_MARK_MEMBER_NAME(Const_obj::GAME_SCREEN_WIDTH,"GAME_SCREEN_WIDTH");
	HX_MARK_MEMBER_NAME(Const_obj::GAME_SCREEN_HEIGHT,"GAME_SCREEN_HEIGHT");
	HX_MARK_MEMBER_NAME(Const_obj::TILESET_WIDTH,"TILESET_WIDTH");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Const_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Const_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Const_obj::TILE_SIZE,"TILE_SIZE");
	HX_VISIT_MEMBER_NAME(Const_obj::GAME_TILES_WIDTH,"GAME_TILES_WIDTH");
	HX_VISIT_MEMBER_NAME(Const_obj::GAME_TILES_HEIGHT,"GAME_TILES_HEIGHT");
	HX_VISIT_MEMBER_NAME(Const_obj::GAME_SCREEN_WIDTH,"GAME_SCREEN_WIDTH");
	HX_VISIT_MEMBER_NAME(Const_obj::GAME_SCREEN_HEIGHT,"GAME_SCREEN_HEIGHT");
	HX_VISIT_MEMBER_NAME(Const_obj::TILESET_WIDTH,"TILESET_WIDTH");
};

#endif

hx::Class Const_obj::__mClass;

static ::String Const_obj_sStaticFields[] = {
	HX_HCSTRING("TILE_SIZE","\xb2","\xaa","\xbd","\x5f"),
	HX_HCSTRING("GAME_TILES_WIDTH","\x3f","\x91","\x75","\xbb"),
	HX_HCSTRING("GAME_TILES_HEIGHT","\x6e","\xfe","\xb8","\x01"),
	HX_HCSTRING("GAME_SCREEN_WIDTH","\x40","\x3d","\x3c","\xe8"),
	HX_HCSTRING("GAME_SCREEN_HEIGHT","\x4d","\xd3","\xc8","\x02"),
	HX_HCSTRING("TILESET_WIDTH","\x3b","\x91","\xfa","\x70"),
	::String(null())
};

void Const_obj::__register()
{
	hx::Object *dummy = new Const_obj;
	Const_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("Const","\x43","\x69","\x8b","\xdd");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Const_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Const_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Const_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Const_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Const_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Const_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Const_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_a3c09597a4bb86d5_4_boot)
HXDLIN(   4)		TILE_SIZE = (int)24;
            	}
{
            	HX_STACKFRAME(&_hx_pos_a3c09597a4bb86d5_5_boot)
HXDLIN(   5)		GAME_TILES_WIDTH = (int)24;
            	}
{
            	HX_STACKFRAME(&_hx_pos_a3c09597a4bb86d5_6_boot)
HXDLIN(   6)		GAME_TILES_HEIGHT = (int)10;
            	}
{
            	HX_STACKFRAME(&_hx_pos_a3c09597a4bb86d5_7_boot)
HXDLIN(   7)		GAME_SCREEN_WIDTH = (int)600;
            	}
{
            	HX_STACKFRAME(&_hx_pos_a3c09597a4bb86d5_8_boot)
HXDLIN(   8)		GAME_SCREEN_HEIGHT = (int)240;
            	}
{
            	HX_STACKFRAME(&_hx_pos_a3c09597a4bb86d5_10_boot)
HXDLIN(  10)		TILESET_WIDTH = (int)16;
            	}
}
