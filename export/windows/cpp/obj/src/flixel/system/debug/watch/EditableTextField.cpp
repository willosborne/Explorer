// Generated by Haxe 3.4.5
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_ValueType
#include <ValueType.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_input_FlxKeyManager
#include <flixel/input/FlxKeyManager.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyboard
#include <flixel/input/keyboard/FlxKeyboard.h>
#endif
#ifndef INCLUDED_flixel_math_FlxMath
#include <flixel/math/FlxMath.h>
#endif
#ifndef INCLUDED_flixel_system_debug_watch_EditableTextField
#include <flixel/system/debug/watch/EditableTextField.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_DebuggerFrontEnd
#include <flixel/system/frontEnds/DebuggerFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObject
#include <openfl/_legacy/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_InteractiveObject
#include <openfl/_legacy/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_Event
#include <openfl/_legacy/events/Event.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_KeyboardEvent
#include <openfl/_legacy/events/KeyboardEvent.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_MouseEvent
#include <openfl/_legacy/events/MouseEvent.h>
#endif
#ifndef INCLUDED_openfl__legacy_text_TextField
#include <openfl/_legacy/text/TextField.h>
#endif
#ifndef INCLUDED_openfl__legacy_text_TextFormat
#include <openfl/_legacy/text/TextFormat.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_854bc5222d9920cb_26_new,"flixel.system.debug.watch.EditableTextField","new",0xaaedbff4,"flixel.system.debug.watch.EditableTextField.new","flixel/system/debug/watch/EditableTextField.hx",26,0xd7488fde)
HX_LOCAL_STACK_FRAME(_hx_pos_854bc5222d9920cb_46_destroy,"flixel.system.debug.watch.EditableTextField","destroy",0x8b91768e,"flixel.system.debug.watch.EditableTextField.destroy","flixel/system/debug/watch/EditableTextField.hx",46,0xd7488fde)
HX_LOCAL_STACK_FRAME(_hx_pos_854bc5222d9920cb_57_onMouseUp,"flixel.system.debug.watch.EditableTextField","onMouseUp",0x4fbd8315,"flixel.system.debug.watch.EditableTextField.onMouseUp","flixel/system/debug/watch/EditableTextField.hx",57,0xd7488fde)
HX_LOCAL_STACK_FRAME(_hx_pos_854bc5222d9920cb_62_onKeyUp,"flixel.system.debug.watch.EditableTextField","onKeyUp",0xdc47a1cf,"flixel.system.debug.watch.EditableTextField.onKeyUp","flixel/system/debug/watch/EditableTextField.hx",62,0xd7488fde)
HX_LOCAL_STACK_FRAME(_hx_pos_854bc5222d9920cb_72_onKeyDown,"flixel.system.debug.watch.EditableTextField","onKeyDown",0x2b91f8d6,"flixel.system.debug.watch.EditableTextField.onKeyDown","flixel/system/debug/watch/EditableTextField.hx",72,0xd7488fde)
HX_LOCAL_STACK_FRAME(_hx_pos_854bc5222d9920cb_88_cycleValue,"flixel.system.debug.watch.EditableTextField","cycleValue",0xd5a483d7,"flixel.system.debug.watch.EditableTextField.cycleValue","flixel/system/debug/watch/EditableTextField.hx",88,0xd7488fde)
HX_LOCAL_STACK_FRAME(_hx_pos_854bc5222d9920cb_106_selectEnd,"flixel.system.debug.watch.EditableTextField","selectEnd",0x459f7cd3,"flixel.system.debug.watch.EditableTextField.selectEnd","flixel/system/debug/watch/EditableTextField.hx",106,0xd7488fde)
HX_LOCAL_STACK_FRAME(_hx_pos_854bc5222d9920cb_110_cycleNumericValue,"flixel.system.debug.watch.EditableTextField","cycleNumericValue",0xa550b9be,"flixel.system.debug.watch.EditableTextField.cycleNumericValue","flixel/system/debug/watch/EditableTextField.hx",110,0xd7488fde)
HX_LOCAL_STACK_FRAME(_hx_pos_854bc5222d9920cb_121_cycleEnumValue,"flixel.system.debug.watch.EditableTextField","cycleEnumValue",0x87243016,"flixel.system.debug.watch.EditableTextField.cycleEnumValue","flixel/system/debug/watch/EditableTextField.hx",121,0xd7488fde)
HX_LOCAL_STACK_FRAME(_hx_pos_854bc5222d9920cb_136_onFocusLost,"flixel.system.debug.watch.EditableTextField","onFocusLost",0x01b78851,"flixel.system.debug.watch.EditableTextField.onFocusLost","flixel/system/debug/watch/EditableTextField.hx",136,0xd7488fde)
HX_LOCAL_STACK_FRAME(_hx_pos_854bc5222d9920cb_140_submit,"flixel.system.debug.watch.EditableTextField","submit",0x30df5d04,"flixel.system.debug.watch.EditableTextField.submit","flixel/system/debug/watch/EditableTextField.hx",140,0xd7488fde)
HX_LOCAL_STACK_FRAME(_hx_pos_854bc5222d9920cb_165_setIsEditing,"flixel.system.debug.watch.EditableTextField","setIsEditing",0xb9436038,"flixel.system.debug.watch.EditableTextField.setIsEditing","flixel/system/debug/watch/EditableTextField.hx",165,0xd7488fde)
namespace flixel{
namespace _hx_system{
namespace debug{
namespace watch{

void EditableTextField_obj::__construct(bool allowEditing, ::openfl::_legacy::text::TextFormat defaultFormat, ::Dynamic submitValue, ::ValueType expectedType){
            	HX_GC_STACKFRAME(&_hx_pos_854bc5222d9920cb_26_new)
HXLINE(  27)		super::__construct();
HXLINE(  28)		this->allowEditing = allowEditing;
HXLINE(  29)		this->submitValue = submitValue;
HXLINE(  30)		this->defaultFormat = defaultFormat;
HXLINE(  31)		this->expectedType = expectedType;
HXLINE(  33)		if (allowEditing) {
HXLINE(  35)			this->editFormat =  ::openfl::_legacy::text::TextFormat_obj::__alloc( HX_CTX ,defaultFormat->font,defaultFormat->size,(int)0,null(),null(),null(),null(),null(),null(),null(),null(),null(),null());
HXLINE(  37)			this->addEventListener(::openfl::_legacy::events::KeyboardEvent_obj::KEY_UP,this->onKeyUp_dyn(),null(),null(),null());
HXLINE(  38)			this->addEventListener(::openfl::_legacy::events::KeyboardEvent_obj::KEY_DOWN,this->onKeyDown_dyn(),null(),null(),null());
HXLINE(  39)			this->addEventListener(::openfl::_legacy::events::MouseEvent_obj::MOUSE_UP,this->onMouseUp_dyn(),null(),null(),null());
HXLINE(  40)			this->addEventListener(HX_("focusOut",96,6f,5e,11),this->onFocusLost_dyn(),null(),null(),null());
            		}
            	}

Dynamic EditableTextField_obj::__CreateEmpty() { return new EditableTextField_obj; }

void *EditableTextField_obj::_hx_vtable = 0;

Dynamic EditableTextField_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< EditableTextField_obj > _hx_result = new EditableTextField_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool EditableTextField_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3d2d7617) {
		if (inClassId<=(int)0x25b00754) {
			if (inClassId<=(int)0x11e163b6) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x11e163b6;
			} else {
				return inClassId==(int)0x25b00754;
			}
		} else {
			return inClassId==(int)0x3d2d7617;
		}
	} else {
		return inClassId==(int)0x5fcdb6d3 || inClassId==(int)0x7e48c108;
	}
}

static ::flixel::util::IFlxDestroyable_obj _hx_flixel_system_debug_watch_EditableTextField__hx_flixel_util_IFlxDestroyable= {
	( void (hx::Object::*)())&::flixel::_hx_system::debug::watch::EditableTextField_obj::destroy,
};

void *EditableTextField_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0xd4fe2fcd: return &_hx_flixel_system_debug_watch_EditableTextField__hx_flixel_util_IFlxDestroyable;
	}
	return super::_hx_getInterface(inHash);
}

void EditableTextField_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_854bc5222d9920cb_46_destroy)
HXDLIN(  46)		if (this->allowEditing) {
HXLINE(  48)			this->removeEventListener(::openfl::_legacy::events::KeyboardEvent_obj::KEY_UP,this->onKeyUp_dyn(),null());
HXLINE(  49)			this->removeEventListener(::openfl::_legacy::events::KeyboardEvent_obj::KEY_DOWN,this->onKeyDown_dyn(),null());
HXLINE(  50)			this->removeEventListener(::openfl::_legacy::events::MouseEvent_obj::MOUSE_UP,this->onMouseUp_dyn(),null());
HXLINE(  51)			this->removeEventListener(HX_("focusOut",96,6f,5e,11),this->onFocusLost_dyn(),null());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(EditableTextField_obj,destroy,(void))

void EditableTextField_obj::onMouseUp( ::Dynamic _){
            	HX_STACKFRAME(&_hx_pos_854bc5222d9920cb_57_onMouseUp)
HXDLIN(  57)		this->setIsEditing(true);
            	}


HX_DEFINE_DYNAMIC_FUNC1(EditableTextField_obj,onMouseUp,(void))

void EditableTextField_obj::onKeyUp( ::openfl::_legacy::events::KeyboardEvent e){
            	HX_STACKFRAME(&_hx_pos_854bc5222d9920cb_62_onKeyUp)
HXDLIN(  62)		int _g = e->keyCode;
HXDLIN(  62)		switch((int)(_g)){
            			case (int)13: {
HXLINE(  65)				this->submit();
            			}
            			break;
            			case (int)27: {
HXLINE(  67)				this->setIsEditing(false);
            			}
            			break;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(EditableTextField_obj,onKeyUp,(void))

void EditableTextField_obj::onKeyDown( ::openfl::_legacy::events::KeyboardEvent e){
            	HX_STACKFRAME(&_hx_pos_854bc5222d9920cb_72_onKeyDown)
HXLINE(  73)		Float modifier = ((Float)1.0);
HXLINE(  74)		if (e->altKey) {
HXLINE(  75)			modifier = ((Float)0.1);
            		}
HXLINE(  76)		if (e->shiftKey) {
HXLINE(  77)			modifier = ((Float)10.0);
            		}
HXLINE(  79)		{
HXLINE(  79)			int _g = e->keyCode;
HXDLIN(  79)			switch((int)(_g)){
            				case (int)38: {
HXLINE(  81)					this->cycleValue(modifier,(int)0);
            				}
            				break;
            				case (int)40: {
HXLINE(  82)					this->cycleValue(-(modifier),this->get_text().length);
            				}
            				break;
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(EditableTextField_obj,onKeyDown,(void))

void EditableTextField_obj::cycleValue(Float modifier,int selection){
            	HX_STACKFRAME(&_hx_pos_854bc5222d9920cb_88_cycleValue)
HXDLIN(  88)		 ::ValueType _g = this->expectedType;
HXDLIN(  88)		switch((int)(_hx_getEnumValueIndex(_g))){
            			case (int)1: case (int)2: {
HXLINE(  91)				this->cycleNumericValue(modifier);
HXLINE(  92)				this->selectEnd();
            			}
            			break;
            			case (int)3: {
HXLINE(  94)				::String _hx_tmp;
HXDLIN(  94)				if ((this->get_text() == HX_("true",4e,a7,03,4d))) {
HXLINE(  94)					_hx_tmp = HX_("false",a3,35,4f,fb);
            				}
            				else {
HXLINE(  94)					_hx_tmp = HX_("true",4e,a7,03,4d);
            				}
HXDLIN(  94)				this->set_text(_hx_tmp);
HXLINE(  95)				this->selectEnd();
            			}
            			break;
            			case (int)7: {
HXLINE(  96)				hx::Class e = _g->_hx_getObject(0).StaticCast< hx::Class >();
HXDLIN(  96)				{
HXLINE(  97)					int _hx_tmp1;
HXDLIN(  97)					if ((modifier < (int)0)) {
HXLINE(  97)						_hx_tmp1 = (int)-1;
            					}
            					else {
HXLINE(  97)						_hx_tmp1 = (int)1;
            					}
HXDLIN(  97)					this->cycleEnumValue(e,_hx_tmp1);
HXLINE(  98)					this->selectEnd();
            				}
            			}
            			break;
            			default:{
HXLINE( 100)				this->setSelection(selection,selection);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(EditableTextField_obj,cycleValue,(void))

void EditableTextField_obj::selectEnd(){
            	HX_STACKFRAME(&_hx_pos_854bc5222d9920cb_106_selectEnd)
HXDLIN( 106)		int _hx_tmp = this->get_text().length;
HXDLIN( 106)		this->setSelection(_hx_tmp,this->get_text().length);
            	}


HX_DEFINE_DYNAMIC_FUNC0(EditableTextField_obj,selectEnd,(void))

void EditableTextField_obj::cycleNumericValue(Float modifier){
            	HX_STACKFRAME(&_hx_pos_854bc5222d9920cb_110_cycleNumericValue)
HXLINE( 111)		Float value = ::Std_obj::parseFloat(this->get_text());
HXLINE( 112)		if (::Math_obj::isNaN(value)) {
HXLINE( 113)			return;
            		}
HXLINE( 115)		value = (value + modifier);
HXLINE( 116)		value = ::flixel::math::FlxMath_obj::roundDecimal(value,::flixel::FlxG_obj::debugger->precision);
HXLINE( 117)		this->set_text(::Std_obj::string(value));
            	}


HX_DEFINE_DYNAMIC_FUNC1(EditableTextField_obj,cycleNumericValue,(void))

void EditableTextField_obj::cycleEnumValue(hx::Class e,int modifier){
            	HX_STACKFRAME(&_hx_pos_854bc5222d9920cb_121_cycleEnumValue)
HXLINE( 122)		::Array< ::String > values = ::Type_obj::getEnumConstructs(e);
HXLINE( 123)		int index = values->indexOf(this->get_text(),null());
HXLINE( 124)		if ((index == (int)-1)) {
HXLINE( 125)			index = (int)0;
            		}
            		else {
HXLINE( 128)			index = (index + modifier);
HXLINE( 129)			index = ::Std_obj::_hx_int(::flixel::math::FlxMath_obj::wrap(index,(int)0,(values->length - (int)1)));
            		}
HXLINE( 131)		this->set_text(::Std_obj::string(values->__get(index)));
            	}


HX_DEFINE_DYNAMIC_FUNC2(EditableTextField_obj,cycleEnumValue,(void))

void EditableTextField_obj::onFocusLost( ::Dynamic _){
            	HX_STACKFRAME(&_hx_pos_854bc5222d9920cb_136_onFocusLost)
HXDLIN( 136)		this->setIsEditing(false);
            	}


HX_DEFINE_DYNAMIC_FUNC1(EditableTextField_obj,onFocusLost,(void))

void EditableTextField_obj::submit(){
            	HX_STACKFRAME(&_hx_pos_854bc5222d9920cb_140_submit)
HXLINE( 141)		 ::Dynamic value;
HXDLIN( 141)		 ::ValueType _g = this->expectedType;
HXDLIN( 141)		switch((int)(_hx_getEnumValueIndex(_g))){
            			case (int)3: {
HXLINE( 147)				if ((this->get_text() == HX_("true",4e,a7,03,4d))) {
HXLINE( 141)					value = true;
            				}
            				else {
HXLINE( 148)					if ((this->get_text() == HX_("false",a3,35,4f,fb))) {
HXLINE( 141)						value = false;
            					}
            					else {
HXLINE( 141)						value = this->get_text();
            					}
            				}
            			}
            			break;
            			case (int)7: {
HXLINE( 149)				hx::Class e = _g->_hx_getObject(0).StaticCast< hx::Class >();
HXLINE( 150)				try {
            					HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 141)					value = ::Type_obj::createEnum(e,this->get_text(),null());
            				}
            				catch( ::Dynamic _hx_e){
            					if (_hx_e.IsClass<  ::Dynamic >() ){
            						HX_STACK_BEGIN_CATCH
            						 ::Dynamic _ = _hx_e;
HXLINE( 141)						value = null();
            					}
            					else {
            						HX_STACK_DO_THROW(_hx_e);
            					}
            				}
            			}
            			break;
            			default:{
HXLINE( 141)				value = this->get_text();
            			}
            		}
HXLINE( 155)		try {
            			HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 157)			this->submitValue(value);
            		}
            		catch( ::Dynamic _hx_e){
            			if (_hx_e.IsClass<  ::Dynamic >() ){
            				HX_STACK_BEGIN_CATCH
            				 ::Dynamic e1 = _hx_e;
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
HXLINE( 161)		this->setIsEditing(false);
            	}


HX_DEFINE_DYNAMIC_FUNC0(EditableTextField_obj,submit,(void))

void EditableTextField_obj::setIsEditing(bool isEditing){
            	HX_STACKFRAME(&_hx_pos_854bc5222d9920cb_165_setIsEditing)
HXLINE( 166)		this->isEditing = isEditing;
HXLINE( 169)		::flixel::FlxG_obj::keys->enabled = !(isEditing);
HXLINE( 172)		 ::Dynamic _hx_tmp;
HXDLIN( 172)		if (isEditing) {
HXLINE( 172)			_hx_tmp = (int)1;
            		}
            		else {
HXLINE( 172)			_hx_tmp = (int)0;
            		}
HXDLIN( 172)		this->set_type(_hx_tmp);
HXLINE( 173)		this->set_background(isEditing);
HXLINE( 174)		 ::openfl::_legacy::text::TextFormat _hx_tmp1;
HXDLIN( 174)		if (isEditing) {
HXLINE( 174)			_hx_tmp1 = this->editFormat;
            		}
            		else {
HXLINE( 174)			_hx_tmp1 = this->defaultFormat;
            		}
HXDLIN( 174)		this->set_defaultTextFormat(_hx_tmp1);
HXLINE( 175)		this->setTextFormat(this->get_defaultTextFormat(),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(EditableTextField_obj,setIsEditing,(void))


hx::ObjectPtr< EditableTextField_obj > EditableTextField_obj::__new(bool allowEditing, ::openfl::_legacy::text::TextFormat defaultFormat, ::Dynamic submitValue, ::ValueType expectedType) {
	hx::ObjectPtr< EditableTextField_obj > __this = new EditableTextField_obj();
	__this->__construct(allowEditing,defaultFormat,submitValue,expectedType);
	return __this;
}

hx::ObjectPtr< EditableTextField_obj > EditableTextField_obj::__alloc(hx::Ctx *_hx_ctx,bool allowEditing, ::openfl::_legacy::text::TextFormat defaultFormat, ::Dynamic submitValue, ::ValueType expectedType) {
	EditableTextField_obj *__this = (EditableTextField_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(EditableTextField_obj), true, "flixel.system.debug.watch.EditableTextField"));
	*(void **)__this = EditableTextField_obj::_hx_vtable;
	__this->__construct(allowEditing,defaultFormat,submitValue,expectedType);
	return __this;
}

EditableTextField_obj::EditableTextField_obj()
{
}

void EditableTextField_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(EditableTextField);
	HX_MARK_MEMBER_NAME(isEditing,"isEditing");
	HX_MARK_MEMBER_NAME(allowEditing,"allowEditing");
	HX_MARK_MEMBER_NAME(submitValue,"submitValue");
	HX_MARK_MEMBER_NAME(expectedType,"expectedType");
	HX_MARK_MEMBER_NAME(defaultFormat,"defaultFormat");
	HX_MARK_MEMBER_NAME(editFormat,"editFormat");
	 ::openfl::_legacy::text::TextField_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void EditableTextField_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(isEditing,"isEditing");
	HX_VISIT_MEMBER_NAME(allowEditing,"allowEditing");
	HX_VISIT_MEMBER_NAME(submitValue,"submitValue");
	HX_VISIT_MEMBER_NAME(expectedType,"expectedType");
	HX_VISIT_MEMBER_NAME(defaultFormat,"defaultFormat");
	HX_VISIT_MEMBER_NAME(editFormat,"editFormat");
	 ::openfl::_legacy::text::TextField_obj::__Visit(HX_VISIT_ARG);
}

hx::Val EditableTextField_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"submit") ) { return hx::Val( submit_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return hx::Val( destroy_dyn() ); }
		if (HX_FIELD_EQ(inName,"onKeyUp") ) { return hx::Val( onKeyUp_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"isEditing") ) { return hx::Val( isEditing ); }
		if (HX_FIELD_EQ(inName,"onMouseUp") ) { return hx::Val( onMouseUp_dyn() ); }
		if (HX_FIELD_EQ(inName,"onKeyDown") ) { return hx::Val( onKeyDown_dyn() ); }
		if (HX_FIELD_EQ(inName,"selectEnd") ) { return hx::Val( selectEnd_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"editFormat") ) { return hx::Val( editFormat ); }
		if (HX_FIELD_EQ(inName,"cycleValue") ) { return hx::Val( cycleValue_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"submitValue") ) { return hx::Val( submitValue ); }
		if (HX_FIELD_EQ(inName,"onFocusLost") ) { return hx::Val( onFocusLost_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"allowEditing") ) { return hx::Val( allowEditing ); }
		if (HX_FIELD_EQ(inName,"expectedType") ) { return hx::Val( expectedType ); }
		if (HX_FIELD_EQ(inName,"setIsEditing") ) { return hx::Val( setIsEditing_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"defaultFormat") ) { return hx::Val( defaultFormat ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"cycleEnumValue") ) { return hx::Val( cycleEnumValue_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"cycleNumericValue") ) { return hx::Val( cycleNumericValue_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val EditableTextField_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"isEditing") ) { isEditing=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"editFormat") ) { editFormat=inValue.Cast<  ::openfl::_legacy::text::TextFormat >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"submitValue") ) { submitValue=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"allowEditing") ) { allowEditing=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"expectedType") ) { expectedType=inValue.Cast<  ::ValueType >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"defaultFormat") ) { defaultFormat=inValue.Cast<  ::openfl::_legacy::text::TextFormat >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void EditableTextField_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("isEditing","\x4e","\x22","\xb6","\x29"));
	outFields->push(HX_HCSTRING("allowEditing","\x8f","\xbb","\xf0","\x66"));
	outFields->push(HX_HCSTRING("expectedType","\x52","\xe9","\xd6","\xd6"));
	outFields->push(HX_HCSTRING("defaultFormat","\xd8","\x62","\x07","\xf8"));
	outFields->push(HX_HCSTRING("editFormat","\xe1","\xf0","\x3b","\xc3"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo EditableTextField_obj_sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(EditableTextField_obj,isEditing),HX_HCSTRING("isEditing","\x4e","\x22","\xb6","\x29")},
	{hx::fsBool,(int)offsetof(EditableTextField_obj,allowEditing),HX_HCSTRING("allowEditing","\x8f","\xbb","\xf0","\x66")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(EditableTextField_obj,submitValue),HX_HCSTRING("submitValue","\x39","\x40","\x71","\x15")},
	{hx::fsObject /*::ValueType*/ ,(int)offsetof(EditableTextField_obj,expectedType),HX_HCSTRING("expectedType","\x52","\xe9","\xd6","\xd6")},
	{hx::fsObject /*::openfl::_legacy::text::TextFormat*/ ,(int)offsetof(EditableTextField_obj,defaultFormat),HX_HCSTRING("defaultFormat","\xd8","\x62","\x07","\xf8")},
	{hx::fsObject /*::openfl::_legacy::text::TextFormat*/ ,(int)offsetof(EditableTextField_obj,editFormat),HX_HCSTRING("editFormat","\xe1","\xf0","\x3b","\xc3")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *EditableTextField_obj_sStaticStorageInfo = 0;
#endif

static ::String EditableTextField_obj_sMemberFields[] = {
	HX_HCSTRING("isEditing","\x4e","\x22","\xb6","\x29"),
	HX_HCSTRING("allowEditing","\x8f","\xbb","\xf0","\x66"),
	HX_HCSTRING("submitValue","\x39","\x40","\x71","\x15"),
	HX_HCSTRING("expectedType","\x52","\xe9","\xd6","\xd6"),
	HX_HCSTRING("defaultFormat","\xd8","\x62","\x07","\xf8"),
	HX_HCSTRING("editFormat","\xe1","\xf0","\x3b","\xc3"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("onMouseUp","\x81","\xac","\x1d","\x98"),
	HX_HCSTRING("onKeyUp","\x3b","\x58","\x3c","\x75"),
	HX_HCSTRING("onKeyDown","\x42","\x22","\xf2","\x73"),
	HX_HCSTRING("cycleValue","\xeb","\x98","\x68","\xe1"),
	HX_HCSTRING("selectEnd","\x3f","\xa6","\xff","\x8d"),
	HX_HCSTRING("cycleNumericValue","\x2a","\x2f","\x5a","\xf5"),
	HX_HCSTRING("cycleEnumValue","\x2a","\x5f","\x1a","\xb3"),
	HX_HCSTRING("onFocusLost","\xbd","\xe4","\x85","\x41"),
	HX_HCSTRING("submit","\x18","\x58","\x06","\x9a"),
	HX_HCSTRING("setIsEditing","\x4c","\xe2","\x05","\x4e"),
	::String(null()) };

static void EditableTextField_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(EditableTextField_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void EditableTextField_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(EditableTextField_obj::__mClass,"__mClass");
};

#endif

hx::Class EditableTextField_obj::__mClass;

void EditableTextField_obj::__register()
{
	hx::Object *dummy = new EditableTextField_obj;
	EditableTextField_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.system.debug.watch.EditableTextField","\x02","\xf6","\x31","\x66");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = EditableTextField_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(EditableTextField_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< EditableTextField_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = EditableTextField_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = EditableTextField_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = EditableTextField_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace system
} // end namespace debug
} // end namespace watch