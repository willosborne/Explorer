// Generated by Haxe 3.4.5
#include <hxcpp.h>

#ifndef INCLUDED_haxe_lang_Iterator
#include <haxe/lang/Iterator.h>
#endif

namespace haxe{
namespace lang{


static ::String Iterator_obj_sMemberFields[] = {
	HX_HCSTRING("hasNext","\x6d","\xa5","\x46","\x18"),
	HX_HCSTRING("next","\xf3","\x84","\x02","\x49"),
	::String(null()) };

static void Iterator_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Iterator_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Iterator_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Iterator_obj::__mClass,"__mClass");
};

#endif

hx::Class Iterator_obj::__mClass;

void Iterator_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.lang.Iterator","\x46","\x96","\xec","\xa0");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMarkFunc = Iterator_obj_sMarkStatics;
	__mClass->mMembers = hx::Class_obj::dupFunctions(Iterator_obj_sMemberFields);
	__mClass->mCanCast = hx::TIsInterface< (int)0x1f76d722 >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Iterator_obj_sVisitStatics;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace lang
