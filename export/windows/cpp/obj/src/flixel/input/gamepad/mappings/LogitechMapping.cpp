// Generated by Haxe 3.4.5
#include <hxcpp.h>

#ifndef INCLUDED_flixel_input_gamepad_FlxGamepadAnalogStick
#include <flixel/input/gamepad/FlxGamepadAnalogStick.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_FlxGamepadAttachment
#include <flixel/input/gamepad/FlxGamepadAttachment.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_id_LogitechID
#include <flixel/input/gamepad/id/LogitechID.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_mappings_FlxGamepadMapping
#include <flixel/input/gamepad/mappings/FlxGamepadMapping.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_mappings_LogitechMapping
#include <flixel/input/gamepad/mappings/LogitechMapping.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_895a9f6ff22a02c8_6_new,"flixel.input.gamepad.mappings.LogitechMapping","new",0x7462c2bf,"flixel.input.gamepad.mappings.LogitechMapping.new","flixel/input/gamepad/mappings/LogitechMapping.hx",6,0x37446fef)
HX_LOCAL_STACK_FRAME(_hx_pos_895a9f6ff22a02c8_17_initValues,"flixel.input.gamepad.mappings.LogitechMapping","initValues",0x87480693,"flixel.input.gamepad.mappings.LogitechMapping.initValues","flixel/input/gamepad/mappings/LogitechMapping.hx",17,0x37446fef)
HX_LOCAL_STACK_FRAME(_hx_pos_895a9f6ff22a02c8_24_getID,"flixel.input.gamepad.mappings.LogitechMapping","getID",0x5cd81a10,"flixel.input.gamepad.mappings.LogitechMapping.getID","flixel/input/gamepad/mappings/LogitechMapping.hx",24,0x37446fef)
HX_LOCAL_STACK_FRAME(_hx_pos_895a9f6ff22a02c8_57_getRawID,"flixel.input.gamepad.mappings.LogitechMapping","getRawID",0xb668848e,"flixel.input.gamepad.mappings.LogitechMapping.getRawID","flixel/input/gamepad/mappings/LogitechMapping.hx",57,0x37446fef)
HX_LOCAL_STACK_FRAME(_hx_pos_895a9f6ff22a02c8_95_axisIndexToRawID,"flixel.input.gamepad.mappings.LogitechMapping","axisIndexToRawID",0xf334b3d8,"flixel.input.gamepad.mappings.LogitechMapping.axisIndexToRawID","flixel/input/gamepad/mappings/LogitechMapping.hx",95,0x37446fef)
HX_LOCAL_STACK_FRAME(_hx_pos_895a9f6ff22a02c8_9_boot,"flixel.input.gamepad.mappings.LogitechMapping","boot",0x5a20a4f3,"flixel.input.gamepad.mappings.LogitechMapping.boot","flixel/input/gamepad/mappings/LogitechMapping.hx",9,0x37446fef)
HX_LOCAL_STACK_FRAME(_hx_pos_895a9f6ff22a02c8_10_boot,"flixel.input.gamepad.mappings.LogitechMapping","boot",0x5a20a4f3,"flixel.input.gamepad.mappings.LogitechMapping.boot","flixel/input/gamepad/mappings/LogitechMapping.hx",10,0x37446fef)
HX_LOCAL_STACK_FRAME(_hx_pos_895a9f6ff22a02c8_12_boot,"flixel.input.gamepad.mappings.LogitechMapping","boot",0x5a20a4f3,"flixel.input.gamepad.mappings.LogitechMapping.boot","flixel/input/gamepad/mappings/LogitechMapping.hx",12,0x37446fef)
HX_LOCAL_STACK_FRAME(_hx_pos_895a9f6ff22a02c8_13_boot,"flixel.input.gamepad.mappings.LogitechMapping","boot",0x5a20a4f3,"flixel.input.gamepad.mappings.LogitechMapping.boot","flixel/input/gamepad/mappings/LogitechMapping.hx",13,0x37446fef)
namespace flixel{
namespace input{
namespace gamepad{
namespace mappings{

void LogitechMapping_obj::__construct( ::flixel::input::gamepad::FlxGamepadAttachment attachment){
            	HX_STACKFRAME(&_hx_pos_895a9f6ff22a02c8_6_new)
HXDLIN(   6)		super::__construct(attachment);
            	}

Dynamic LogitechMapping_obj::__CreateEmpty() { return new LogitechMapping_obj; }

void *LogitechMapping_obj::_hx_vtable = 0;

Dynamic LogitechMapping_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< LogitechMapping_obj > _hx_result = new LogitechMapping_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool LogitechMapping_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x046f8a5b) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x046f8a5b;
	} else {
		return inClassId==(int)0x5f3facff;
	}
}

void LogitechMapping_obj::initValues(){
            	HX_STACKFRAME(&_hx_pos_895a9f6ff22a02c8_17_initValues)
HXLINE(  18)		this->leftStick = ::flixel::input::gamepad::id::LogitechID_obj::LEFT_ANALOG_STICK;
HXLINE(  19)		this->rightStick = ::flixel::input::gamepad::id::LogitechID_obj::RIGHT_ANALOG_STICK;
            	}


int LogitechMapping_obj::getID(int rawID){
            	HX_STACKFRAME(&_hx_pos_895a9f6ff22a02c8_24_getID)
HXDLIN(  24)		switch((int)(rawID)){
            			case (int)-5: {
HXLINE(  42)				return (int)10;
            			}
            			break;
            			case (int)0: {
HXLINE(  28)				return (int)2;
            			}
            			break;
            			case (int)1: {
HXLINE(  26)				return (int)0;
            			}
            			break;
            			case (int)2: {
HXLINE(  27)				return (int)1;
            			}
            			break;
            			case (int)3: {
HXLINE(  29)				return (int)3;
            			}
            			break;
            			case (int)4: {
HXLINE(  34)				return (int)4;
            			}
            			break;
            			case (int)5: {
HXLINE(  35)				return (int)5;
            			}
            			break;
            			case (int)6: {
HXLINE(  36)				return (int)17;
            			}
            			break;
            			case (int)7: {
HXLINE(  37)				return (int)18;
            			}
            			break;
            			case (int)8: {
HXLINE(  30)				return (int)6;
            			}
            			break;
            			case (int)9: {
HXLINE(  31)				return (int)7;
            			}
            			break;
            			case (int)10: {
HXLINE(  32)				return (int)8;
            			}
            			break;
            			case (int)11: {
HXLINE(  33)				return (int)9;
            			}
            			break;
            			case (int)16: {
HXLINE(  41)				return (int)11;
            			}
            			break;
            			case (int)17: {
HXLINE(  38)				return (int)12;
            			}
            			break;
            			case (int)18: {
HXLINE(  39)				return (int)13;
            			}
            			break;
            			case (int)19: {
HXLINE(  40)				return (int)14;
            			}
            			break;
            			default:{
HXLINE(  43)				int id = rawID;
HXDLIN(  43)				if ((id == this->leftStick->rawUp)) {
HXLINE(  43)					return (int)34;
            				}
            				else {
HXLINE(  44)					int id1 = rawID;
HXDLIN(  44)					if ((id1 == this->leftStick->rawDown)) {
HXLINE(  44)						return (int)36;
            					}
            					else {
HXLINE(  45)						int id2 = rawID;
HXDLIN(  45)						if ((id2 == this->leftStick->rawLeft)) {
HXLINE(  45)							return (int)37;
            						}
            						else {
HXLINE(  46)							int id3 = rawID;
HXDLIN(  46)							if ((id3 == this->leftStick->rawRight)) {
HXLINE(  46)								return (int)35;
            							}
            							else {
HXLINE(  47)								int id4 = rawID;
HXDLIN(  47)								if ((id4 == this->rightStick->rawUp)) {
HXLINE(  47)									return (int)38;
            								}
            								else {
HXLINE(  48)									int id5 = rawID;
HXDLIN(  48)									if ((id5 == this->rightStick->rawDown)) {
HXLINE(  48)										return (int)40;
            									}
            									else {
HXLINE(  49)										int id6 = rawID;
HXDLIN(  49)										if ((id6 == this->rightStick->rawLeft)) {
HXLINE(  49)											return (int)41;
            										}
            										else {
HXLINE(  50)											int id7 = rawID;
HXDLIN(  50)											if ((id7 == this->rightStick->rawRight)) {
HXLINE(  50)												return (int)39;
            											}
            											else {
HXLINE(  51)												return (int)-1;
            											}
            										}
            									}
            								}
            							}
            						}
            					}
            				}
            			}
            		}
HXLINE(  24)		return null();
            	}


int LogitechMapping_obj::getRawID(int ID){
            	HX_STACKFRAME(&_hx_pos_895a9f6ff22a02c8_57_getRawID)
HXDLIN(  57)		switch((int)(ID)){
            			case (int)0: {
HXLINE(  59)				return (int)1;
            			}
            			break;
            			case (int)1: {
HXLINE(  60)				return (int)2;
            			}
            			break;
            			case (int)2: {
HXLINE(  61)				return (int)0;
            			}
            			break;
            			case (int)3: {
HXLINE(  62)				return (int)3;
            			}
            			break;
            			case (int)4: {
HXLINE(  68)				return (int)4;
            			}
            			break;
            			case (int)5: {
HXLINE(  69)				return (int)5;
            			}
            			break;
            			case (int)6: {
HXLINE(  63)				return (int)8;
            			}
            			break;
            			case (int)7: {
HXLINE(  65)				return (int)9;
            			}
            			break;
            			case (int)8: {
HXLINE(  66)				return (int)10;
            			}
            			break;
            			case (int)9: {
HXLINE(  67)				return (int)11;
            			}
            			break;
            			case (int)10: {
HXLINE(  64)				return (int)-5;
            			}
            			break;
            			case (int)11: {
HXLINE(  70)				return (int)16;
            			}
            			break;
            			case (int)12: {
HXLINE(  71)				return (int)17;
            			}
            			break;
            			case (int)13: {
HXLINE(  72)				return (int)18;
            			}
            			break;
            			case (int)14: {
HXLINE(  73)				return (int)19;
            			}
            			break;
            			case (int)17: {
HXLINE(  74)				return (int)6;
            			}
            			break;
            			case (int)18: {
HXLINE(  75)				return (int)7;
            			}
            			break;
            			case (int)22: {
HXLINE(  85)				return (int)6;
            			}
            			break;
            			case (int)23: {
HXLINE(  86)				return (int)7;
            			}
            			break;
            			case (int)34: {
HXLINE(  76)				return ::flixel::input::gamepad::id::LogitechID_obj::LEFT_ANALOG_STICK->rawUp;
            			}
            			break;
            			case (int)35: {
HXLINE(  79)				return ::flixel::input::gamepad::id::LogitechID_obj::LEFT_ANALOG_STICK->rawRight;
            			}
            			break;
            			case (int)36: {
HXLINE(  77)				return ::flixel::input::gamepad::id::LogitechID_obj::LEFT_ANALOG_STICK->rawDown;
            			}
            			break;
            			case (int)37: {
HXLINE(  78)				return ::flixel::input::gamepad::id::LogitechID_obj::LEFT_ANALOG_STICK->rawLeft;
            			}
            			break;
            			case (int)38: {
HXLINE(  80)				return ::flixel::input::gamepad::id::LogitechID_obj::RIGHT_ANALOG_STICK->rawUp;
            			}
            			break;
            			case (int)39: {
HXLINE(  83)				return ::flixel::input::gamepad::id::LogitechID_obj::RIGHT_ANALOG_STICK->rawRight;
            			}
            			break;
            			case (int)40: {
HXLINE(  81)				return ::flixel::input::gamepad::id::LogitechID_obj::RIGHT_ANALOG_STICK->rawDown;
            			}
            			break;
            			case (int)41: {
HXLINE(  82)				return ::flixel::input::gamepad::id::LogitechID_obj::RIGHT_ANALOG_STICK->rawLeft;
            			}
            			break;
            			default:{
HXLINE(  88)				return (int)-1;
            			}
            		}
HXLINE(  57)		return (int)0;
            	}


int LogitechMapping_obj::axisIndexToRawID(int axisID){
            	HX_STACKFRAME(&_hx_pos_895a9f6ff22a02c8_95_axisIndexToRawID)
HXDLIN(  95)		if ((axisID == this->leftStick->x)) {
HXDLIN(  95)			return (int)20;
            		}
            		else {
HXLINE(  96)			if ((axisID == this->leftStick->y)) {
HXLINE(  96)				return (int)21;
            			}
            			else {
HXLINE(  97)				if ((axisID == this->rightStick->x)) {
HXLINE(  97)					return (int)22;
            				}
            				else {
HXLINE(  98)					if ((axisID == this->rightStick->y)) {
HXLINE(  98)						return (int)23;
            					}
            					else {
HXLINE(  99)						return axisID;
            					}
            				}
            			}
            		}
HXLINE(  95)		return (int)0;
            	}


int LogitechMapping_obj::LEFT_ANALOG_STICK_FAKE_X;

int LogitechMapping_obj::LEFT_ANALOG_STICK_FAKE_Y;

int LogitechMapping_obj::RIGHT_ANALOG_STICK_FAKE_X;

int LogitechMapping_obj::RIGHT_ANALOG_STICK_FAKE_Y;


hx::ObjectPtr< LogitechMapping_obj > LogitechMapping_obj::__new( ::flixel::input::gamepad::FlxGamepadAttachment attachment) {
	hx::ObjectPtr< LogitechMapping_obj > __this = new LogitechMapping_obj();
	__this->__construct(attachment);
	return __this;
}

hx::ObjectPtr< LogitechMapping_obj > LogitechMapping_obj::__alloc(hx::Ctx *_hx_ctx, ::flixel::input::gamepad::FlxGamepadAttachment attachment) {
	LogitechMapping_obj *__this = (LogitechMapping_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(LogitechMapping_obj), true, "flixel.input.gamepad.mappings.LogitechMapping"));
	*(void **)__this = LogitechMapping_obj::_hx_vtable;
	__this->__construct(attachment);
	return __this;
}

LogitechMapping_obj::LogitechMapping_obj()
{
}

hx::Val LogitechMapping_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"getID") ) { return hx::Val( getID_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getRawID") ) { return hx::Val( getRawID_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"initValues") ) { return hx::Val( initValues_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"axisIndexToRawID") ) { return hx::Val( axisIndexToRawID_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *LogitechMapping_obj_sMemberStorageInfo = 0;
static hx::StaticInfo LogitechMapping_obj_sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &LogitechMapping_obj::LEFT_ANALOG_STICK_FAKE_X,HX_HCSTRING("LEFT_ANALOG_STICK_FAKE_X","\x94","\xb3","\x65","\x38")},
	{hx::fsInt,(void *) &LogitechMapping_obj::LEFT_ANALOG_STICK_FAKE_Y,HX_HCSTRING("LEFT_ANALOG_STICK_FAKE_Y","\x95","\xb3","\x65","\x38")},
	{hx::fsInt,(void *) &LogitechMapping_obj::RIGHT_ANALOG_STICK_FAKE_X,HX_HCSTRING("RIGHT_ANALOG_STICK_FAKE_X","\xc9","\x1f","\x02","\xa1")},
	{hx::fsInt,(void *) &LogitechMapping_obj::RIGHT_ANALOG_STICK_FAKE_Y,HX_HCSTRING("RIGHT_ANALOG_STICK_FAKE_Y","\xca","\x1f","\x02","\xa1")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String LogitechMapping_obj_sMemberFields[] = {
	HX_HCSTRING("initValues","\x12","\x5f","\xfc","\x53"),
	HX_HCSTRING("getID","\xf1","\x91","\x60","\x91"),
	HX_HCSTRING("getRawID","\x4d","\x6f","\xfd","\x43"),
	HX_HCSTRING("axisIndexToRawID","\x97","\xf5","\xe0","\x40"),
	::String(null()) };

static void LogitechMapping_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(LogitechMapping_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(LogitechMapping_obj::LEFT_ANALOG_STICK_FAKE_X,"LEFT_ANALOG_STICK_FAKE_X");
	HX_MARK_MEMBER_NAME(LogitechMapping_obj::LEFT_ANALOG_STICK_FAKE_Y,"LEFT_ANALOG_STICK_FAKE_Y");
	HX_MARK_MEMBER_NAME(LogitechMapping_obj::RIGHT_ANALOG_STICK_FAKE_X,"RIGHT_ANALOG_STICK_FAKE_X");
	HX_MARK_MEMBER_NAME(LogitechMapping_obj::RIGHT_ANALOG_STICK_FAKE_Y,"RIGHT_ANALOG_STICK_FAKE_Y");
};

#ifdef HXCPP_VISIT_ALLOCS
static void LogitechMapping_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(LogitechMapping_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(LogitechMapping_obj::LEFT_ANALOG_STICK_FAKE_X,"LEFT_ANALOG_STICK_FAKE_X");
	HX_VISIT_MEMBER_NAME(LogitechMapping_obj::LEFT_ANALOG_STICK_FAKE_Y,"LEFT_ANALOG_STICK_FAKE_Y");
	HX_VISIT_MEMBER_NAME(LogitechMapping_obj::RIGHT_ANALOG_STICK_FAKE_X,"RIGHT_ANALOG_STICK_FAKE_X");
	HX_VISIT_MEMBER_NAME(LogitechMapping_obj::RIGHT_ANALOG_STICK_FAKE_Y,"RIGHT_ANALOG_STICK_FAKE_Y");
};

#endif

hx::Class LogitechMapping_obj::__mClass;

static ::String LogitechMapping_obj_sStaticFields[] = {
	HX_HCSTRING("LEFT_ANALOG_STICK_FAKE_X","\x94","\xb3","\x65","\x38"),
	HX_HCSTRING("LEFT_ANALOG_STICK_FAKE_Y","\x95","\xb3","\x65","\x38"),
	HX_HCSTRING("RIGHT_ANALOG_STICK_FAKE_X","\xc9","\x1f","\x02","\xa1"),
	HX_HCSTRING("RIGHT_ANALOG_STICK_FAKE_Y","\xca","\x1f","\x02","\xa1"),
	::String(null())
};

void LogitechMapping_obj::__register()
{
	hx::Object *dummy = new LogitechMapping_obj;
	LogitechMapping_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.input.gamepad.mappings.LogitechMapping","\x4d","\xf7","\x84","\x74");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = LogitechMapping_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(LogitechMapping_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(LogitechMapping_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< LogitechMapping_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = LogitechMapping_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = LogitechMapping_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = LogitechMapping_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void LogitechMapping_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_895a9f6ff22a02c8_9_boot)
HXDLIN(   9)		LEFT_ANALOG_STICK_FAKE_X = (int)20;
            	}
{
            	HX_STACKFRAME(&_hx_pos_895a9f6ff22a02c8_10_boot)
HXDLIN(  10)		LEFT_ANALOG_STICK_FAKE_Y = (int)21;
            	}
{
            	HX_STACKFRAME(&_hx_pos_895a9f6ff22a02c8_12_boot)
HXDLIN(  12)		RIGHT_ANALOG_STICK_FAKE_X = (int)22;
            	}
{
            	HX_STACKFRAME(&_hx_pos_895a9f6ff22a02c8_13_boot)
HXDLIN(  13)		RIGHT_ANALOG_STICK_FAKE_Y = (int)23;
            	}
}

} // end namespace flixel
} // end namespace input
} // end namespace gamepad
} // end namespace mappings
