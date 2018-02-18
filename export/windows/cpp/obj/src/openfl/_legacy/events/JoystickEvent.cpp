// Generated by Haxe 3.4.5
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_Event
#include <openfl/_legacy/events/Event.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_JoystickEvent
#include <openfl/_legacy/events/JoystickEvent.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_34657b2f4d85f4ee_26_new,"openfl._legacy.events.JoystickEvent","new",0x086a2edf,"openfl._legacy.events.JoystickEvent.new","openfl/_legacy/events/JoystickEvent.hx",26,0xf082dab0)
HX_LOCAL_STACK_FRAME(_hx_pos_34657b2f4d85f4ee_43_clone,"openfl._legacy.events.JoystickEvent","clone",0x49ad4f9c,"openfl._legacy.events.JoystickEvent.clone","openfl/_legacy/events/JoystickEvent.hx",43,0xf082dab0)
HX_LOCAL_STACK_FRAME(_hx_pos_34657b2f4d85f4ee_50_toString,"openfl._legacy.events.JoystickEvent","toString",0x73d685cd,"openfl._legacy.events.JoystickEvent.toString","openfl/_legacy/events/JoystickEvent.hx",50,0xf082dab0)
HX_LOCAL_STACK_FRAME(_hx_pos_34657b2f4d85f4ee_10_boot,"openfl._legacy.events.JoystickEvent","boot",0x4c97d4d3,"openfl._legacy.events.JoystickEvent.boot","openfl/_legacy/events/JoystickEvent.hx",10,0xf082dab0)
HX_LOCAL_STACK_FRAME(_hx_pos_34657b2f4d85f4ee_11_boot,"openfl._legacy.events.JoystickEvent","boot",0x4c97d4d3,"openfl._legacy.events.JoystickEvent.boot","openfl/_legacy/events/JoystickEvent.hx",11,0xf082dab0)
HX_LOCAL_STACK_FRAME(_hx_pos_34657b2f4d85f4ee_12_boot,"openfl._legacy.events.JoystickEvent","boot",0x4c97d4d3,"openfl._legacy.events.JoystickEvent.boot","openfl/_legacy/events/JoystickEvent.hx",12,0xf082dab0)
HX_LOCAL_STACK_FRAME(_hx_pos_34657b2f4d85f4ee_13_boot,"openfl._legacy.events.JoystickEvent","boot",0x4c97d4d3,"openfl._legacy.events.JoystickEvent.boot","openfl/_legacy/events/JoystickEvent.hx",13,0xf082dab0)
HX_LOCAL_STACK_FRAME(_hx_pos_34657b2f4d85f4ee_14_boot,"openfl._legacy.events.JoystickEvent","boot",0x4c97d4d3,"openfl._legacy.events.JoystickEvent.boot","openfl/_legacy/events/JoystickEvent.hx",14,0xf082dab0)
HX_LOCAL_STACK_FRAME(_hx_pos_34657b2f4d85f4ee_15_boot,"openfl._legacy.events.JoystickEvent","boot",0x4c97d4d3,"openfl._legacy.events.JoystickEvent.boot","openfl/_legacy/events/JoystickEvent.hx",15,0xf082dab0)
HX_LOCAL_STACK_FRAME(_hx_pos_34657b2f4d85f4ee_16_boot,"openfl._legacy.events.JoystickEvent","boot",0x4c97d4d3,"openfl._legacy.events.JoystickEvent.boot","openfl/_legacy/events/JoystickEvent.hx",16,0xf082dab0)
namespace openfl{
namespace _legacy{
namespace events{

void JoystickEvent_obj::__construct(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable,hx::Null< int >  __o_device,hx::Null< int >  __o_id,hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,hx::Null< Float >  __o_z){
bool bubbles = __o_bubbles.Default(false);
bool cancelable = __o_cancelable.Default(false);
int device = __o_device.Default(0);
int id = __o_id.Default(0);
Float x = __o_x.Default(0);
Float y = __o_y.Default(0);
Float z = __o_z.Default(0);
            	HX_STACKFRAME(&_hx_pos_34657b2f4d85f4ee_26_new)
HXLINE(  28)		super::__construct(type,bubbles,cancelable);
HXLINE(  30)		this->device = device;
HXLINE(  31)		this->id = id;
HXLINE(  32)		this->x = x;
HXLINE(  33)		this->y = y;
HXLINE(  34)		this->z = z;
HXLINE(  36)		this->axis = ::Array_obj< Float >::__new(6)->init(0,x)->init(1,y)->init(2,z)->init(3,(int)0)->init(4,(int)0)->init(5,(int)0);
            	}

Dynamic JoystickEvent_obj::__CreateEmpty() { return new JoystickEvent_obj; }

void *JoystickEvent_obj::_hx_vtable = 0;

Dynamic JoystickEvent_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< JoystickEvent_obj > _hx_result = new JoystickEvent_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7]);
	return _hx_result;
}

bool JoystickEvent_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0dd3a6b1) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x0dd3a6b1;
	} else {
		return inClassId==(int)0x5b19148d;
	}
}

 ::openfl::_legacy::events::Event JoystickEvent_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_34657b2f4d85f4ee_43_clone)
HXDLIN(  43)		::String _hx_tmp = this->get_type();
HXDLIN(  43)		bool _hx_tmp1 = this->get_bubbles();
HXDLIN(  43)		bool _hx_tmp2 = this->get_cancelable();
HXDLIN(  43)		return  ::openfl::_legacy::events::JoystickEvent_obj::__alloc( HX_CTX ,_hx_tmp,_hx_tmp1,_hx_tmp2,this->device,this->id,this->x,this->y,this->z);
            	}


::String JoystickEvent_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_34657b2f4d85f4ee_50_toString)
HXDLIN(  50)		::String _hx_tmp = ((HX_("[JoystickEvent type=\"",9c,a4,f2,d8) + this->get_type()) + HX_("\" bubbles=",b4,4a,9e,b2));
HXDLIN(  50)		::String _hx_tmp1 = ((_hx_tmp + ::Std_obj::string(this->get_bubbles())) + HX_(" cancelable=",89,25,e0,5d));
HXDLIN(  50)		::String _hx_tmp2 = ((_hx_tmp1 + ::Std_obj::string(this->get_cancelable())) + HX_(" device=",c7,6a,b7,fd));
HXDLIN(  50)		return ((((((((((_hx_tmp2 + this->device) + HX_(" id=",e2,d7,76,15)) + this->id) + HX_(" x=",e5,b0,18,00)) + this->x) + HX_(" y=",c4,b1,18,00)) + this->y) + HX_(" z=",a3,b2,18,00)) + this->z) + HX_("]",5d,00,00,00));
            	}


::String JoystickEvent_obj::AXIS_MOVE;

::String JoystickEvent_obj::BALL_MOVE;

::String JoystickEvent_obj::BUTTON_DOWN;

::String JoystickEvent_obj::BUTTON_UP;

::String JoystickEvent_obj::HAT_MOVE;

::String JoystickEvent_obj::DEVICE_ADDED;

::String JoystickEvent_obj::DEVICE_REMOVED;


hx::ObjectPtr< JoystickEvent_obj > JoystickEvent_obj::__new(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable,hx::Null< int >  __o_device,hx::Null< int >  __o_id,hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,hx::Null< Float >  __o_z) {
	hx::ObjectPtr< JoystickEvent_obj > __this = new JoystickEvent_obj();
	__this->__construct(type,__o_bubbles,__o_cancelable,__o_device,__o_id,__o_x,__o_y,__o_z);
	return __this;
}

hx::ObjectPtr< JoystickEvent_obj > JoystickEvent_obj::__alloc(hx::Ctx *_hx_ctx,::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable,hx::Null< int >  __o_device,hx::Null< int >  __o_id,hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,hx::Null< Float >  __o_z) {
	JoystickEvent_obj *__this = (JoystickEvent_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(JoystickEvent_obj), true, "openfl._legacy.events.JoystickEvent"));
	*(void **)__this = JoystickEvent_obj::_hx_vtable;
	__this->__construct(type,__o_bubbles,__o_cancelable,__o_device,__o_id,__o_x,__o_y,__o_z);
	return __this;
}

JoystickEvent_obj::JoystickEvent_obj()
{
}

void JoystickEvent_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(JoystickEvent);
	HX_MARK_MEMBER_NAME(axis,"axis");
	HX_MARK_MEMBER_NAME(device,"device");
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(z,"z");
	 ::openfl::_legacy::events::Event_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void JoystickEvent_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(axis,"axis");
	HX_VISIT_MEMBER_NAME(device,"device");
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(x,"x");
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(z,"z");
	 ::openfl::_legacy::events::Event_obj::__Visit(HX_VISIT_ARG);
}

hx::Val JoystickEvent_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return hx::Val( x ); }
		if (HX_FIELD_EQ(inName,"y") ) { return hx::Val( y ); }
		if (HX_FIELD_EQ(inName,"z") ) { return hx::Val( z ); }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return hx::Val( id ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"axis") ) { return hx::Val( axis ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return hx::Val( clone_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"device") ) { return hx::Val( device ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return hx::Val( toString_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val JoystickEvent_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"z") ) { z=inValue.Cast< Float >(); return inValue; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"axis") ) { axis=inValue.Cast< ::Array< Float > >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"device") ) { device=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void JoystickEvent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("axis","\xa1","\x1c","\x79","\x40"));
	outFields->push(HX_HCSTRING("device","\x96","\xdc","\x77","\x71"));
	outFields->push(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"));
	outFields->push(HX_HCSTRING("x","\x78","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("y","\x79","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("z","\x7a","\x00","\x00","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo JoystickEvent_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(JoystickEvent_obj,axis),HX_HCSTRING("axis","\xa1","\x1c","\x79","\x40")},
	{hx::fsInt,(int)offsetof(JoystickEvent_obj,device),HX_HCSTRING("device","\x96","\xdc","\x77","\x71")},
	{hx::fsInt,(int)offsetof(JoystickEvent_obj,id),HX_HCSTRING("id","\xdb","\x5b","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(JoystickEvent_obj,x),HX_HCSTRING("x","\x78","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(JoystickEvent_obj,y),HX_HCSTRING("y","\x79","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(JoystickEvent_obj,z),HX_HCSTRING("z","\x7a","\x00","\x00","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo JoystickEvent_obj_sStaticStorageInfo[] = {
	{hx::fsString,(void *) &JoystickEvent_obj::AXIS_MOVE,HX_HCSTRING("AXIS_MOVE","\xaf","\x7a","\x13","\x2a")},
	{hx::fsString,(void *) &JoystickEvent_obj::BALL_MOVE,HX_HCSTRING("BALL_MOVE","\x91","\x80","\xbd","\x89")},
	{hx::fsString,(void *) &JoystickEvent_obj::BUTTON_DOWN,HX_HCSTRING("BUTTON_DOWN","\x0f","\x01","\x0b","\xf3")},
	{hx::fsString,(void *) &JoystickEvent_obj::BUTTON_UP,HX_HCSTRING("BUTTON_UP","\xc8","\x15","\x81","\x4b")},
	{hx::fsString,(void *) &JoystickEvent_obj::HAT_MOVE,HX_HCSTRING("HAT_MOVE","\xd5","\x55","\x50","\x21")},
	{hx::fsString,(void *) &JoystickEvent_obj::DEVICE_ADDED,HX_HCSTRING("DEVICE_ADDED","\xf7","\x70","\x3d","\xb6")},
	{hx::fsString,(void *) &JoystickEvent_obj::DEVICE_REMOVED,HX_HCSTRING("DEVICE_REMOVED","\x97","\x5b","\xc2","\x33")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String JoystickEvent_obj_sMemberFields[] = {
	HX_HCSTRING("axis","\xa1","\x1c","\x79","\x40"),
	HX_HCSTRING("device","\x96","\xdc","\x77","\x71"),
	HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"),
	HX_HCSTRING("x","\x78","\x00","\x00","\x00"),
	HX_HCSTRING("y","\x79","\x00","\x00","\x00"),
	HX_HCSTRING("z","\x7a","\x00","\x00","\x00"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

static void JoystickEvent_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(JoystickEvent_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(JoystickEvent_obj::AXIS_MOVE,"AXIS_MOVE");
	HX_MARK_MEMBER_NAME(JoystickEvent_obj::BALL_MOVE,"BALL_MOVE");
	HX_MARK_MEMBER_NAME(JoystickEvent_obj::BUTTON_DOWN,"BUTTON_DOWN");
	HX_MARK_MEMBER_NAME(JoystickEvent_obj::BUTTON_UP,"BUTTON_UP");
	HX_MARK_MEMBER_NAME(JoystickEvent_obj::HAT_MOVE,"HAT_MOVE");
	HX_MARK_MEMBER_NAME(JoystickEvent_obj::DEVICE_ADDED,"DEVICE_ADDED");
	HX_MARK_MEMBER_NAME(JoystickEvent_obj::DEVICE_REMOVED,"DEVICE_REMOVED");
};

#ifdef HXCPP_VISIT_ALLOCS
static void JoystickEvent_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(JoystickEvent_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(JoystickEvent_obj::AXIS_MOVE,"AXIS_MOVE");
	HX_VISIT_MEMBER_NAME(JoystickEvent_obj::BALL_MOVE,"BALL_MOVE");
	HX_VISIT_MEMBER_NAME(JoystickEvent_obj::BUTTON_DOWN,"BUTTON_DOWN");
	HX_VISIT_MEMBER_NAME(JoystickEvent_obj::BUTTON_UP,"BUTTON_UP");
	HX_VISIT_MEMBER_NAME(JoystickEvent_obj::HAT_MOVE,"HAT_MOVE");
	HX_VISIT_MEMBER_NAME(JoystickEvent_obj::DEVICE_ADDED,"DEVICE_ADDED");
	HX_VISIT_MEMBER_NAME(JoystickEvent_obj::DEVICE_REMOVED,"DEVICE_REMOVED");
};

#endif

hx::Class JoystickEvent_obj::__mClass;

static ::String JoystickEvent_obj_sStaticFields[] = {
	HX_HCSTRING("AXIS_MOVE","\xaf","\x7a","\x13","\x2a"),
	HX_HCSTRING("BALL_MOVE","\x91","\x80","\xbd","\x89"),
	HX_HCSTRING("BUTTON_DOWN","\x0f","\x01","\x0b","\xf3"),
	HX_HCSTRING("BUTTON_UP","\xc8","\x15","\x81","\x4b"),
	HX_HCSTRING("HAT_MOVE","\xd5","\x55","\x50","\x21"),
	HX_HCSTRING("DEVICE_ADDED","\xf7","\x70","\x3d","\xb6"),
	HX_HCSTRING("DEVICE_REMOVED","\x97","\x5b","\xc2","\x33"),
	::String(null())
};

void JoystickEvent_obj::__register()
{
	hx::Object *dummy = new JoystickEvent_obj;
	JoystickEvent_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._legacy.events.JoystickEvent","\x6d","\xd3","\x1b","\x71");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = JoystickEvent_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(JoystickEvent_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(JoystickEvent_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< JoystickEvent_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = JoystickEvent_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = JoystickEvent_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = JoystickEvent_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void JoystickEvent_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_34657b2f4d85f4ee_10_boot)
HXDLIN(  10)		AXIS_MOVE = HX_("axisMove",52,90,f4,8f);
            	}
{
            	HX_STACKFRAME(&_hx_pos_34657b2f4d85f4ee_11_boot)
HXDLIN(  11)		BALL_MOVE = HX_("ballMove",b0,5c,fd,37);
            	}
{
            	HX_STACKFRAME(&_hx_pos_34657b2f4d85f4ee_12_boot)
HXDLIN(  12)		BUTTON_DOWN = HX_("buttonDown",74,67,64,ac);
            	}
{
            	HX_STACKFRAME(&_hx_pos_34657b2f4d85f4ee_13_boot)
HXDLIN(  13)		BUTTON_UP = HX_("buttonUp",ed,8c,32,5c);
            	}
{
            	HX_STACKFRAME(&_hx_pos_34657b2f4d85f4ee_14_boot)
HXDLIN(  14)		HAT_MOVE = HX_("hatMove",0c,98,0b,ab);
            	}
{
            	HX_STACKFRAME(&_hx_pos_34657b2f4d85f4ee_15_boot)
HXDLIN(  15)		DEVICE_ADDED = HX_("deviceAdded",4a,08,84,0b);
            	}
{
            	HX_STACKFRAME(&_hx_pos_34657b2f4d85f4ee_16_boot)
HXDLIN(  16)		DEVICE_REMOVED = HX_("deviceRemoved",aa,c9,5b,59);
            	}
}

} // end namespace openfl
} // end namespace _legacy
} // end namespace events
