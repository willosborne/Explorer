// Generated by Haxe 3.4.5
#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_FlxSubState
#include <flixel/FlxSubState.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_CameraFrontEnd
#include <flixel/system/frontEnds/CameraFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_InputFrontEnd
#include <flixel/system/frontEnds/InputFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_1b8de2909b3ba780_11_new,"flixel.FlxState","new",0x7e613e23,"flixel.FlxState.new","flixel/FlxState.hx",11,0xdf96844c)
HX_LOCAL_STACK_FRAME(_hx_pos_1b8de2909b3ba780_65_create,"flixel.FlxState","create",0x1148b519,"flixel.FlxState.create","flixel/FlxState.hx",65,0xdf96844c)
HX_LOCAL_STACK_FRAME(_hx_pos_1b8de2909b3ba780_68_draw,"flixel.FlxState","draw",0x1022c8e1,"flixel.FlxState.draw","flixel/FlxState.hx",68,0xdf96844c)
HX_LOCAL_STACK_FRAME(_hx_pos_1b8de2909b3ba780_77_openSubState,"flixel.FlxState","openSubState",0x3d5ea838,"flixel.FlxState.openSubState","flixel/FlxState.hx",77,0xdf96844c)
HX_LOCAL_STACK_FRAME(_hx_pos_1b8de2909b3ba780_87_closeSubState,"flixel.FlxState","closeSubState",0x519577cc,"flixel.FlxState.closeSubState","flixel/FlxState.hx",87,0xdf96844c)
HX_LOCAL_STACK_FRAME(_hx_pos_1b8de2909b3ba780_94_resetSubState,"flixel.FlxState","resetSubState",0x772d18e3,"flixel.FlxState.resetSubState","flixel/FlxState.hx",94,0xdf96844c)
HX_LOCAL_STACK_FRAME(_hx_pos_1b8de2909b3ba780_128_destroy,"flixel.FlxState","destroy",0x2171383d,"flixel.FlxState.destroy","flixel/FlxState.hx",128,0xdf96844c)
HX_LOCAL_STACK_FRAME(_hx_pos_1b8de2909b3ba780_145_switchTo,"flixel.FlxState","switchTo",0x5e95c7ec,"flixel.FlxState.switchTo","flixel/FlxState.hx",145,0xdf96844c)
HX_LOCAL_STACK_FRAME(_hx_pos_1b8de2909b3ba780_152_onFocusLost,"flixel.FlxState","onFocusLost",0x8c2b4d80,"flixel.FlxState.onFocusLost","flixel/FlxState.hx",152,0xdf96844c)
HX_LOCAL_STACK_FRAME(_hx_pos_1b8de2909b3ba780_158_onFocus,"flixel.FlxState","onFocus",0x97b2097c,"flixel.FlxState.onFocus","flixel/FlxState.hx",158,0xdf96844c)
HX_LOCAL_STACK_FRAME(_hx_pos_1b8de2909b3ba780_166_onResize,"flixel.FlxState","onResize",0x38e71fd0,"flixel.FlxState.onResize","flixel/FlxState.hx",166,0xdf96844c)
HX_LOCAL_STACK_FRAME(_hx_pos_1b8de2909b3ba780_170_tryUpdate,"flixel.FlxState","tryUpdate",0xc75023a7,"flixel.FlxState.tryUpdate","flixel/FlxState.hx",170,0xdf96844c)
HX_LOCAL_STACK_FRAME(_hx_pos_1b8de2909b3ba780_188_get_bgColor,"flixel.FlxState","get_bgColor",0xc8234a38,"flixel.FlxState.get_bgColor","flixel/FlxState.hx",188,0xdf96844c)
HX_LOCAL_STACK_FRAME(_hx_pos_1b8de2909b3ba780_194_set_bgColor,"flixel.FlxState","set_bgColor",0xd2905144,"flixel.FlxState.set_bgColor","flixel/FlxState.hx",194,0xdf96844c)
namespace flixel{

void FlxState_obj::__construct( ::Dynamic MaxSize){
            	HX_STACKFRAME(&_hx_pos_1b8de2909b3ba780_11_new)
HXLINE(  58)		this->_requestSubStateReset = false;
HXLINE(  36)		this->destroySubStates = true;
HXLINE(  30)		this->persistentDraw = true;
HXLINE(  19)		this->persistentUpdate = false;
HXLINE(  11)		super::__construct(MaxSize);
            	}

Dynamic FlxState_obj::__CreateEmpty() { return new FlxState_obj; }

void *FlxState_obj::_hx_vtable = 0;

Dynamic FlxState_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< FlxState_obj > _hx_result = new FlxState_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool FlxState_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x25a685e0) {
		if (inClassId<=(int)0x2335d9a7) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x2335d9a7;
		} else {
			return inClassId==(int)0x25a685e0;
		}
	} else {
		return inClassId==(int)0x3634c52c;
	}
}

void FlxState_obj::create(){
            	HX_STACKFRAME(&_hx_pos_1b8de2909b3ba780_65_create)
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxState_obj,create,(void))

void FlxState_obj::draw(){
            	HX_STACKFRAME(&_hx_pos_1b8de2909b3ba780_68_draw)
HXLINE(  69)		bool _hx_tmp;
HXDLIN(  69)		if (!(this->persistentDraw)) {
HXLINE(  69)			_hx_tmp = hx::IsNull( this->subState );
            		}
            		else {
HXLINE(  69)			_hx_tmp = true;
            		}
HXDLIN(  69)		if (_hx_tmp) {
HXLINE(  70)			this->super::draw();
            		}
HXLINE(  72)		if (hx::IsNotNull( this->subState )) {
HXLINE(  73)			this->subState->draw();
            		}
            	}


void FlxState_obj::openSubState( ::flixel::FlxSubState SubState){
            	HX_STACKFRAME(&_hx_pos_1b8de2909b3ba780_77_openSubState)
HXLINE(  78)		this->_requestSubStateReset = true;
HXLINE(  79)		this->_requestedSubState = SubState;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxState_obj,openSubState,(void))

void FlxState_obj::closeSubState(){
            	HX_STACKFRAME(&_hx_pos_1b8de2909b3ba780_87_closeSubState)
HXDLIN(  87)		this->_requestSubStateReset = true;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxState_obj,closeSubState,(void))

void FlxState_obj::resetSubState(){
            	HX_STACKFRAME(&_hx_pos_1b8de2909b3ba780_94_resetSubState)
HXLINE(  96)		if (hx::IsNotNull( this->subState )) {
HXLINE(  98)			if (hx::IsNotNull( this->subState->closeCallback )) {
HXLINE(  99)				this->subState->closeCallback();
            			}
HXLINE( 101)			if (this->destroySubStates) {
HXLINE( 102)				this->subState->destroy();
            			}
            		}
HXLINE( 106)		this->subState = this->_requestedSubState;
HXLINE( 107)		this->_requestedSubState = null();
HXLINE( 109)		if (hx::IsNotNull( this->subState )) {
HXLINE( 112)			if (!(this->persistentUpdate)) {
HXLINE( 113)				::flixel::FlxG_obj::inputs->onStateSwitch();
            			}
HXLINE( 115)			this->subState->_parentState = hx::ObjectPtr<OBJ_>(this);
HXLINE( 117)			if (!(this->subState->_created)) {
HXLINE( 119)				this->subState->_created = true;
HXLINE( 120)				this->subState->create();
            			}
HXLINE( 122)			if (hx::IsNotNull( this->subState->openCallback )) {
HXLINE( 123)				this->subState->openCallback();
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxState_obj,resetSubState,(void))

void FlxState_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_1b8de2909b3ba780_128_destroy)
HXLINE( 129)		if (hx::IsNotNull( this->subState )) {
HXLINE( 131)			this->subState->destroy();
HXLINE( 132)			this->subState = null();
            		}
HXLINE( 134)		this->super::destroy();
            	}


bool FlxState_obj::switchTo( ::flixel::FlxState nextState){
            	HX_STACKFRAME(&_hx_pos_1b8de2909b3ba780_145_switchTo)
HXDLIN( 145)		return true;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxState_obj,switchTo,return )

void FlxState_obj::onFocusLost(){
            	HX_STACKFRAME(&_hx_pos_1b8de2909b3ba780_152_onFocusLost)
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxState_obj,onFocusLost,(void))

void FlxState_obj::onFocus(){
            	HX_STACKFRAME(&_hx_pos_1b8de2909b3ba780_158_onFocus)
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxState_obj,onFocus,(void))

void FlxState_obj::onResize(int Width,int Height){
            	HX_STACKFRAME(&_hx_pos_1b8de2909b3ba780_166_onResize)
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxState_obj,onResize,(void))

void FlxState_obj::tryUpdate(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_1b8de2909b3ba780_170_tryUpdate)
HXLINE( 171)		bool _hx_tmp;
HXDLIN( 171)		if (!(this->persistentUpdate)) {
HXLINE( 171)			_hx_tmp = hx::IsNull( this->subState );
            		}
            		else {
HXLINE( 171)			_hx_tmp = true;
            		}
HXDLIN( 171)		if (_hx_tmp) {
HXLINE( 172)			this->update(elapsed);
            		}
HXLINE( 174)		if (this->_requestSubStateReset) {
HXLINE( 176)			this->_requestSubStateReset = false;
HXLINE( 177)			this->resetSubState();
            		}
            		else {
HXLINE( 179)			if (hx::IsNotNull( this->subState )) {
HXLINE( 181)				this->subState->tryUpdate(elapsed);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxState_obj,tryUpdate,(void))

int FlxState_obj::get_bgColor(){
            	HX_STACKFRAME(&_hx_pos_1b8de2909b3ba780_188_get_bgColor)
HXDLIN( 188)		return ::flixel::FlxG_obj::cameras->get_bgColor();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxState_obj,get_bgColor,return )

int FlxState_obj::set_bgColor(int Value){
            	HX_STACKFRAME(&_hx_pos_1b8de2909b3ba780_194_set_bgColor)
HXDLIN( 194)		return ::flixel::FlxG_obj::cameras->set_bgColor(Value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxState_obj,set_bgColor,return )


hx::ObjectPtr< FlxState_obj > FlxState_obj::__new( ::Dynamic MaxSize) {
	hx::ObjectPtr< FlxState_obj > __this = new FlxState_obj();
	__this->__construct(MaxSize);
	return __this;
}

hx::ObjectPtr< FlxState_obj > FlxState_obj::__alloc(hx::Ctx *_hx_ctx, ::Dynamic MaxSize) {
	FlxState_obj *__this = (FlxState_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(FlxState_obj), true, "flixel.FlxState"));
	*(void **)__this = FlxState_obj::_hx_vtable;
	__this->__construct(MaxSize);
	return __this;
}

FlxState_obj::FlxState_obj()
{
}

void FlxState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxState);
	HX_MARK_MEMBER_NAME(persistentUpdate,"persistentUpdate");
	HX_MARK_MEMBER_NAME(persistentDraw,"persistentDraw");
	HX_MARK_MEMBER_NAME(destroySubStates,"destroySubStates");
	HX_MARK_MEMBER_NAME(subState,"subState");
	HX_MARK_MEMBER_NAME(_requestedSubState,"_requestedSubState");
	HX_MARK_MEMBER_NAME(_requestSubStateReset,"_requestSubStateReset");
	 ::flixel::group::FlxTypedGroup_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(persistentUpdate,"persistentUpdate");
	HX_VISIT_MEMBER_NAME(persistentDraw,"persistentDraw");
	HX_VISIT_MEMBER_NAME(destroySubStates,"destroySubStates");
	HX_VISIT_MEMBER_NAME(subState,"subState");
	HX_VISIT_MEMBER_NAME(_requestedSubState,"_requestedSubState");
	HX_VISIT_MEMBER_NAME(_requestSubStateReset,"_requestSubStateReset");
	 ::flixel::group::FlxTypedGroup_obj::__Visit(HX_VISIT_ARG);
}

hx::Val FlxState_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"draw") ) { return hx::Val( draw_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return hx::Val( create_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"bgColor") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_bgColor() ); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return hx::Val( destroy_dyn() ); }
		if (HX_FIELD_EQ(inName,"onFocus") ) { return hx::Val( onFocus_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"subState") ) { return hx::Val( subState ); }
		if (HX_FIELD_EQ(inName,"switchTo") ) { return hx::Val( switchTo_dyn() ); }
		if (HX_FIELD_EQ(inName,"onResize") ) { return hx::Val( onResize_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"tryUpdate") ) { return hx::Val( tryUpdate_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"onFocusLost") ) { return hx::Val( onFocusLost_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_bgColor") ) { return hx::Val( get_bgColor_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_bgColor") ) { return hx::Val( set_bgColor_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"openSubState") ) { return hx::Val( openSubState_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"closeSubState") ) { return hx::Val( closeSubState_dyn() ); }
		if (HX_FIELD_EQ(inName,"resetSubState") ) { return hx::Val( resetSubState_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"persistentDraw") ) { return hx::Val( persistentDraw ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"persistentUpdate") ) { return hx::Val( persistentUpdate ); }
		if (HX_FIELD_EQ(inName,"destroySubStates") ) { return hx::Val( destroySubStates ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_requestedSubState") ) { return hx::Val( _requestedSubState ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_requestSubStateReset") ) { return hx::Val( _requestSubStateReset ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val FlxState_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"bgColor") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_bgColor(inValue.Cast< int >()) ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"subState") ) { subState=inValue.Cast<  ::flixel::FlxSubState >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"persistentDraw") ) { persistentDraw=inValue.Cast< bool >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"persistentUpdate") ) { persistentUpdate=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"destroySubStates") ) { destroySubStates=inValue.Cast< bool >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_requestedSubState") ) { _requestedSubState=inValue.Cast<  ::flixel::FlxSubState >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_requestSubStateReset") ) { _requestSubStateReset=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("persistentUpdate","\xc0","\x3b","\x6b","\x50"));
	outFields->push(HX_HCSTRING("persistentDraw","\xfb","\x35","\xc6","\xc2"));
	outFields->push(HX_HCSTRING("destroySubStates","\x88","\x5a","\x28","\x5e"));
	outFields->push(HX_HCSTRING("bgColor","\x5e","\x81","\x83","\xf7"));
	outFields->push(HX_HCSTRING("subState","\x71","\xcc","\x2a","\xf9"));
	outFields->push(HX_HCSTRING("_requestedSubState","\xc0","\x34","\x35","\xff"));
	outFields->push(HX_HCSTRING("_requestSubStateReset","\xae","\x08","\x1f","\x03"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo FlxState_obj_sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(FlxState_obj,persistentUpdate),HX_HCSTRING("persistentUpdate","\xc0","\x3b","\x6b","\x50")},
	{hx::fsBool,(int)offsetof(FlxState_obj,persistentDraw),HX_HCSTRING("persistentDraw","\xfb","\x35","\xc6","\xc2")},
	{hx::fsBool,(int)offsetof(FlxState_obj,destroySubStates),HX_HCSTRING("destroySubStates","\x88","\x5a","\x28","\x5e")},
	{hx::fsObject /*::flixel::FlxSubState*/ ,(int)offsetof(FlxState_obj,subState),HX_HCSTRING("subState","\x71","\xcc","\x2a","\xf9")},
	{hx::fsObject /*::flixel::FlxSubState*/ ,(int)offsetof(FlxState_obj,_requestedSubState),HX_HCSTRING("_requestedSubState","\xc0","\x34","\x35","\xff")},
	{hx::fsBool,(int)offsetof(FlxState_obj,_requestSubStateReset),HX_HCSTRING("_requestSubStateReset","\xae","\x08","\x1f","\x03")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *FlxState_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxState_obj_sMemberFields[] = {
	HX_HCSTRING("persistentUpdate","\xc0","\x3b","\x6b","\x50"),
	HX_HCSTRING("persistentDraw","\xfb","\x35","\xc6","\xc2"),
	HX_HCSTRING("destroySubStates","\x88","\x5a","\x28","\x5e"),
	HX_HCSTRING("subState","\x71","\xcc","\x2a","\xf9"),
	HX_HCSTRING("_requestedSubState","\xc0","\x34","\x35","\xff"),
	HX_HCSTRING("_requestSubStateReset","\xae","\x08","\x1f","\x03"),
	HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"),
	HX_HCSTRING("draw","\x04","\x2c","\x70","\x42"),
	HX_HCSTRING("openSubState","\x5b","\x66","\x48","\x37"),
	HX_HCSTRING("closeSubState","\x49","\x18","\x32","\x04"),
	HX_HCSTRING("resetSubState","\x60","\xb9","\xc9","\x29"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("switchTo","\x8f","\xf8","\xd6","\x0d"),
	HX_HCSTRING("onFocusLost","\xbd","\xe4","\x85","\x41"),
	HX_HCSTRING("onFocus","\x39","\xfe","\xc6","\x9a"),
	HX_HCSTRING("onResize","\x73","\x50","\x28","\xe8"),
	HX_HCSTRING("tryUpdate","\xa4","\x81","\x19","\x71"),
	HX_HCSTRING("get_bgColor","\x75","\xe1","\x7d","\x7d"),
	HX_HCSTRING("set_bgColor","\x81","\xe8","\xea","\x87"),
	::String(null()) };

static void FlxState_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxState_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FlxState_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxState_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxState_obj::__mClass;

void FlxState_obj::__register()
{
	hx::Object *dummy = new FlxState_obj;
	FlxState_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.FlxState","\xb1","\xf0","\x80","\x0a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = FlxState_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(FlxState_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxState_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FlxState_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxState_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
