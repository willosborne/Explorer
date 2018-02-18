// Generated by Haxe 3.4.5
#include <hxcpp.h>

#ifndef INCLUDED_flixel_input_gamepad_FlxGamepadDeadZoneMode
#include <flixel/input/gamepad/FlxGamepadDeadZoneMode.h>
#endif
namespace flixel{
namespace input{
namespace gamepad{

::flixel::input::gamepad::FlxGamepadDeadZoneMode FlxGamepadDeadZoneMode_obj::CIRCULAR;

::flixel::input::gamepad::FlxGamepadDeadZoneMode FlxGamepadDeadZoneMode_obj::INDEPENDENT_AXES;

bool FlxGamepadDeadZoneMode_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	if (inName==HX_("CIRCULAR",5f,36,58,69)) { outValue = FlxGamepadDeadZoneMode_obj::CIRCULAR; return true; }
	if (inName==HX_("INDEPENDENT_AXES",6a,31,50,25)) { outValue = FlxGamepadDeadZoneMode_obj::INDEPENDENT_AXES; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(FlxGamepadDeadZoneMode_obj)

int FlxGamepadDeadZoneMode_obj::__FindIndex(::String inName)
{
	if (inName==HX_("CIRCULAR",5f,36,58,69)) return 1;
	if (inName==HX_("INDEPENDENT_AXES",6a,31,50,25)) return 0;
	return super::__FindIndex(inName);
}

int FlxGamepadDeadZoneMode_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("CIRCULAR",5f,36,58,69)) return 0;
	if (inName==HX_("INDEPENDENT_AXES",6a,31,50,25)) return 0;
	return super::__FindArgCount(inName);
}

hx::Val FlxGamepadDeadZoneMode_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_("CIRCULAR",5f,36,58,69)) return CIRCULAR;
	if (inName==HX_("INDEPENDENT_AXES",6a,31,50,25)) return INDEPENDENT_AXES;
	return super::__Field(inName,inCallProp);
}

static ::String FlxGamepadDeadZoneMode_obj_sStaticFields[] = {
	HX_("INDEPENDENT_AXES",6a,31,50,25),
	HX_("CIRCULAR",5f,36,58,69),
	::String(null())
};

static void FlxGamepadDeadZoneMode_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxGamepadDeadZoneMode_obj::CIRCULAR,"CIRCULAR");
	HX_MARK_MEMBER_NAME(FlxGamepadDeadZoneMode_obj::INDEPENDENT_AXES,"INDEPENDENT_AXES");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FlxGamepadDeadZoneMode_obj_sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxGamepadDeadZoneMode_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxGamepadDeadZoneMode_obj::CIRCULAR,"CIRCULAR");
	HX_VISIT_MEMBER_NAME(FlxGamepadDeadZoneMode_obj::INDEPENDENT_AXES,"INDEPENDENT_AXES");
};
#endif

hx::Class FlxGamepadDeadZoneMode_obj::__mClass;

Dynamic __Create_FlxGamepadDeadZoneMode_obj() { return new FlxGamepadDeadZoneMode_obj; }

void FlxGamepadDeadZoneMode_obj::__register()
{

hx::Static(__mClass) = hx::_hx_RegisterClass(HX_HCSTRING("flixel.input.gamepad.FlxGamepadDeadZoneMode","\xe5","\xe8","\x21","\x95"), hx::TCanCast< FlxGamepadDeadZoneMode_obj >,FlxGamepadDeadZoneMode_obj_sStaticFields,0,
	&__Create_FlxGamepadDeadZoneMode_obj, &__Create,
	&super::__SGetClass(), &CreateFlxGamepadDeadZoneMode_obj, FlxGamepadDeadZoneMode_obj_sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , FlxGamepadDeadZoneMode_obj_sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &FlxGamepadDeadZoneMode_obj::__GetStatic;
}

void FlxGamepadDeadZoneMode_obj::__boot()
{
CIRCULAR = hx::CreateEnum< FlxGamepadDeadZoneMode_obj >(HX_HCSTRING("CIRCULAR","\x5f","\x36","\x58","\x69"),1,0);
INDEPENDENT_AXES = hx::CreateEnum< FlxGamepadDeadZoneMode_obj >(HX_HCSTRING("INDEPENDENT_AXES","\x6a","\x31","\x50","\x25"),0,0);
}


} // end namespace flixel
} // end namespace input
} // end namespace gamepad
