// Generated by Haxe 3.4.5
#include <hxcpp.h>

#ifndef INCLUDED_flixel_input_IFlxInput
#include <flixel/input/IFlxInput.h>
#endif

namespace flixel{
namespace input{


static ::String IFlxInput_obj_sMemberFields[] = {
	HX_HCSTRING("get_justPressed","\x6d","\xc5","\x88","\xb3"),
	HX_HCSTRING("get_pressed","\xb9","\x32","\xe1","\xbf"),
	HX_HCSTRING("get_released","\xc6","\x3c","\x01","\x2c"),
	HX_HCSTRING("get_justReleased","\x92","\x07","\xfa","\x6a"),
	::String(null()) };

static void IFlxInput_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(IFlxInput_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void IFlxInput_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(IFlxInput_obj::__mClass,"__mClass");
};

#endif

hx::Class IFlxInput_obj::__mClass;

void IFlxInput_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.input.IFlxInput","\x2b","\x5c","\x36","\xba");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMarkFunc = IFlxInput_obj_sMarkStatics;
	__mClass->mMembers = hx::Class_obj::dupFunctions(IFlxInput_obj_sMemberFields);
	__mClass->mCanCast = hx::TIsInterface< (int)0x52baf533 >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = IFlxInput_obj_sVisitStatics;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace input
