// Generated by Haxe 3.4.5
#include <hxcpp.h>

#ifndef INCLUDED_openfl_display3D_Context3DProgramType
#include <openfl/display3D/Context3DProgramType.h>
#endif
namespace openfl{
namespace display3D{

::openfl::display3D::Context3DProgramType Context3DProgramType_obj::FRAGMENT;

::openfl::display3D::Context3DProgramType Context3DProgramType_obj::VERTEX;

bool Context3DProgramType_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	if (inName==HX_("FRAGMENT",d0,ef,6a,07)) { outValue = Context3DProgramType_obj::FRAGMENT; return true; }
	if (inName==HX_("VERTEX",64,87,ca,53)) { outValue = Context3DProgramType_obj::VERTEX; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(Context3DProgramType_obj)

int Context3DProgramType_obj::__FindIndex(::String inName)
{
	if (inName==HX_("FRAGMENT",d0,ef,6a,07)) return 1;
	if (inName==HX_("VERTEX",64,87,ca,53)) return 0;
	return super::__FindIndex(inName);
}

int Context3DProgramType_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("FRAGMENT",d0,ef,6a,07)) return 0;
	if (inName==HX_("VERTEX",64,87,ca,53)) return 0;
	return super::__FindArgCount(inName);
}

hx::Val Context3DProgramType_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_("FRAGMENT",d0,ef,6a,07)) return FRAGMENT;
	if (inName==HX_("VERTEX",64,87,ca,53)) return VERTEX;
	return super::__Field(inName,inCallProp);
}

static ::String Context3DProgramType_obj_sStaticFields[] = {
	HX_("VERTEX",64,87,ca,53),
	HX_("FRAGMENT",d0,ef,6a,07),
	::String(null())
};

static void Context3DProgramType_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Context3DProgramType_obj::FRAGMENT,"FRAGMENT");
	HX_MARK_MEMBER_NAME(Context3DProgramType_obj::VERTEX,"VERTEX");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Context3DProgramType_obj_sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Context3DProgramType_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Context3DProgramType_obj::FRAGMENT,"FRAGMENT");
	HX_VISIT_MEMBER_NAME(Context3DProgramType_obj::VERTEX,"VERTEX");
};
#endif

hx::Class Context3DProgramType_obj::__mClass;

Dynamic __Create_Context3DProgramType_obj() { return new Context3DProgramType_obj; }

void Context3DProgramType_obj::__register()
{

hx::Static(__mClass) = hx::_hx_RegisterClass(HX_HCSTRING("openfl.display3D.Context3DProgramType","\xf7","\xb6","\x69","\x13"), hx::TCanCast< Context3DProgramType_obj >,Context3DProgramType_obj_sStaticFields,0,
	&__Create_Context3DProgramType_obj, &__Create,
	&super::__SGetClass(), &CreateContext3DProgramType_obj, Context3DProgramType_obj_sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , Context3DProgramType_obj_sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &Context3DProgramType_obj::__GetStatic;
}

void Context3DProgramType_obj::__boot()
{
FRAGMENT = hx::CreateEnum< Context3DProgramType_obj >(HX_HCSTRING("FRAGMENT","\xd0","\xef","\x6a","\x07"),1,0);
VERTEX = hx::CreateEnum< Context3DProgramType_obj >(HX_HCSTRING("VERTEX","\x64","\x87","\xca","\x53"),0,0);
}


} // end namespace openfl
} // end namespace display3D
