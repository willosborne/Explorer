// Generated by Haxe 3.4.5
#include <hxcpp.h>

#ifndef INCLUDED_flixel_system_debug__VCR_GraphicRestart
#include <flixel/system/debug/_VCR/GraphicRestart.h>
#endif
#ifndef INCLUDED_haxe_Resource
#include <haxe/Resource.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_BitmapData
#include <openfl/_legacy/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_c4ba07aab32a948f_2010_new,"flixel.system.debug._VCR.GraphicRestart","new",0x771b64f9,"flixel.system.debug._VCR.GraphicRestart.new","openfl/_legacy/Assets.hx",2010,0x9276b055)
HX_LOCAL_STACK_FRAME(_hx_pos_685a7fe6a537f5f1_1_boot,"flixel.system.debug._VCR.GraphicRestart","boot",0xb8f5f579,"flixel.system.debug._VCR.GraphicRestart.boot","?",1,0x0000003f)
namespace flixel{
namespace _hx_system{
namespace debug{
namespace _VCR{

void GraphicRestart_obj::__construct(int width,int height, ::Dynamic __o_transparent, ::Dynamic __o_fillRGBA){
 ::Dynamic transparent = __o_transparent.Default(true);
 ::Dynamic fillRGBA = __o_fillRGBA.Default(-1);
            	HX_STACKFRAME(&_hx_pos_c4ba07aab32a948f_2010_new)
HXLINE(2076)		super::__construct(width,height,transparent,fillRGBA,null());
HXLINE(2078)		 ::openfl::_legacy::utils::ByteArray byteArray = ::openfl::_legacy::utils::ByteArray_obj::fromBytes(::haxe::Resource_obj::getBytes(::flixel::_hx_system::debug::_VCR::GraphicRestart_obj::resourceName));
HXLINE(2079)		this->_hx___handle = ::openfl::_legacy::display::BitmapData_obj::lime_bitmap_data_from_bytes(byteArray,null());
            	}

Dynamic GraphicRestart_obj::__CreateEmpty() { return new GraphicRestart_obj; }

void *GraphicRestart_obj::_hx_vtable = 0;

Dynamic GraphicRestart_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< GraphicRestart_obj > _hx_result = new GraphicRestart_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool GraphicRestart_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0cd766e7) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x0cd766e7;
	} else {
		return inClassId==(int)0x68b27831;
	}
}

::String GraphicRestart_obj::resourceName;


hx::ObjectPtr< GraphicRestart_obj > GraphicRestart_obj::__new(int width,int height, ::Dynamic __o_transparent, ::Dynamic __o_fillRGBA) {
	hx::ObjectPtr< GraphicRestart_obj > __this = new GraphicRestart_obj();
	__this->__construct(width,height,__o_transparent,__o_fillRGBA);
	return __this;
}

hx::ObjectPtr< GraphicRestart_obj > GraphicRestart_obj::__alloc(hx::Ctx *_hx_ctx,int width,int height, ::Dynamic __o_transparent, ::Dynamic __o_fillRGBA) {
	GraphicRestart_obj *__this = (GraphicRestart_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(GraphicRestart_obj), true, "flixel.system.debug._VCR.GraphicRestart"));
	*(void **)__this = GraphicRestart_obj::_hx_vtable;
	__this->__construct(width,height,__o_transparent,__o_fillRGBA);
	return __this;
}

GraphicRestart_obj::GraphicRestart_obj()
{
}

bool GraphicRestart_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"resourceName") ) { outValue = ( resourceName ); return true; }
	}
	return false;
}

bool GraphicRestart_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"resourceName") ) { resourceName=ioValue.Cast< ::String >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *GraphicRestart_obj_sMemberStorageInfo = 0;
static hx::StaticInfo GraphicRestart_obj_sStaticStorageInfo[] = {
	{hx::fsString,(void *) &GraphicRestart_obj::resourceName,HX_HCSTRING("resourceName","\x39","\x7a","\x62","\x90")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void GraphicRestart_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GraphicRestart_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(GraphicRestart_obj::resourceName,"resourceName");
};

#ifdef HXCPP_VISIT_ALLOCS
static void GraphicRestart_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GraphicRestart_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(GraphicRestart_obj::resourceName,"resourceName");
};

#endif

hx::Class GraphicRestart_obj::__mClass;

static ::String GraphicRestart_obj_sStaticFields[] = {
	HX_HCSTRING("resourceName","\x39","\x7a","\x62","\x90"),
	::String(null())
};

void GraphicRestart_obj::__register()
{
	hx::Object *dummy = new GraphicRestart_obj;
	GraphicRestart_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.system.debug._VCR.GraphicRestart","\x87","\x74","\x7d","\x1f");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &GraphicRestart_obj::__GetStatic;
	__mClass->mSetStaticField = &GraphicRestart_obj::__SetStatic;
	__mClass->mMarkFunc = GraphicRestart_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(GraphicRestart_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< GraphicRestart_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = GraphicRestart_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GraphicRestart_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GraphicRestart_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void GraphicRestart_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_685a7fe6a537f5f1_1_boot)
HXDLIN(   1)		resourceName = HX_("__ASSET__:bitmap_flixel_system_debug__VCR_GraphicRestart",21,e9,41,92);
            	}
}

} // end namespace flixel
} // end namespace system
} // end namespace debug
} // end namespace _VCR
