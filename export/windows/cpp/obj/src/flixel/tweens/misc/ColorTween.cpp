// Generated by Haxe 3.4.5
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTweenManager
#include <flixel/tweens/FlxTweenManager.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_ColorTween
#include <flixel/tweens/misc/ColorTween.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util__FlxColor_FlxColor_Impl_
#include <flixel/util/_FlxColor/FlxColor_Impl_.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_81f6578febd56b01_11_new,"flixel.tweens.misc.ColorTween","new",0x82c0df68,"flixel.tweens.misc.ColorTween.new","flixel/tweens/misc/ColorTween.hx",11,0xe14ed287)
HX_LOCAL_STACK_FRAME(_hx_pos_81f6578febd56b01_26_destroy,"flixel.tweens.misc.ColorTween","destroy",0x7f5b6002,"flixel.tweens.misc.ColorTween.destroy","flixel/tweens/misc/ColorTween.hx",26,0xe14ed287)
HX_LOCAL_STACK_FRAME(_hx_pos_81f6578febd56b01_41_tween,"flixel.tweens.misc.ColorTween","tween",0xdc858b73,"flixel.tweens.misc.ColorTween.tween","flixel/tweens/misc/ColorTween.hx",41,0xe14ed287)
HX_LOCAL_STACK_FRAME(_hx_pos_81f6578febd56b01_51_update,"flixel.tweens.misc.ColorTween","update",0x76358c01,"flixel.tweens.misc.ColorTween.update","flixel/tweens/misc/ColorTween.hx",51,0xe14ed287)
namespace flixel{
namespace tweens{
namespace misc{

void ColorTween_obj::__construct( ::Dynamic Options, ::flixel::tweens::FlxTweenManager manager){
            	HX_STACKFRAME(&_hx_pos_81f6578febd56b01_11_new)
HXDLIN(  11)		super::__construct(Options,manager);
            	}

Dynamic ColorTween_obj::__CreateEmpty() { return new ColorTween_obj; }

void *ColorTween_obj::_hx_vtable = 0;

Dynamic ColorTween_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ColorTween_obj > _hx_result = new ColorTween_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool ColorTween_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x123505a1) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x123505a1;
	} else {
		return inClassId==(int)0x75d566bc;
	}
}

void ColorTween_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_81f6578febd56b01_26_destroy)
HXLINE(  27)		this->super::destroy();
HXLINE(  28)		this->sprite = null();
            	}


 ::flixel::tweens::misc::ColorTween ColorTween_obj::tween(Float Duration,int FromColor,int ToColor, ::flixel::FlxSprite Sprite){
            	HX_STACKFRAME(&_hx_pos_81f6578febd56b01_41_tween)
HXLINE(  42)		this->color = (this->startColor = FromColor);
HXLINE(  43)		this->endColor = ToColor;
HXLINE(  44)		this->duration = Duration;
HXLINE(  45)		this->sprite = Sprite;
HXLINE(  46)		this->start();
HXLINE(  47)		return hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC4(ColorTween_obj,tween,return )

void ColorTween_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_81f6578febd56b01_51_update)
HXLINE(  52)		this->super::update(elapsed);
HXLINE(  53)		int Color1 = this->startColor;
HXDLIN(  53)		int Color2 = this->endColor;
HXDLIN(  53)		Float Factor = this->scale;
HXDLIN(  53)		int r = ::Std_obj::_hx_int((((((int)((int)Color2 >> (int)(int)16) & (int)(int)255) - ((int)((int)Color1 >> (int)(int)16) & (int)(int)255)) * Factor) + ((int)((int)Color1 >> (int)(int)16) & (int)(int)255)));
HXDLIN(  53)		int g = ::Std_obj::_hx_int((((((int)((int)Color2 >> (int)(int)8) & (int)(int)255) - ((int)((int)Color1 >> (int)(int)8) & (int)(int)255)) * Factor) + ((int)((int)Color1 >> (int)(int)8) & (int)(int)255)));
HXDLIN(  53)		int b = ::Std_obj::_hx_int((((((int)Color2 & (int)(int)255) - ((int)Color1 & (int)(int)255)) * Factor) + ((int)Color1 & (int)(int)255)));
HXDLIN(  53)		int a = ::Std_obj::_hx_int((((((int)((int)Color2 >> (int)(int)24) & (int)(int)255) - ((int)((int)Color1 >> (int)(int)24) & (int)(int)255)) * Factor) + ((int)((int)Color1 >> (int)(int)24) & (int)(int)255)));
HXDLIN(  53)		int color = ::flixel::util::_FlxColor::FlxColor_Impl__obj::_new(null());
HXDLIN(  53)		{
HXLINE(  53)			color = ((int)color & (int)(int)-16711681);
HXDLIN(  53)			int color1;
HXDLIN(  53)			if ((r > (int)255)) {
HXLINE(  53)				color1 = (int)255;
            			}
            			else {
HXLINE(  53)				if ((r < (int)0)) {
HXLINE(  53)					color1 = (int)0;
            				}
            				else {
HXLINE(  53)					color1 = r;
            				}
            			}
HXDLIN(  53)			color = ((int)color | (int)((int)color1 << (int)(int)16));
            		}
HXDLIN(  53)		{
HXLINE(  53)			color = ((int)color & (int)(int)-65281);
HXDLIN(  53)			int color2;
HXDLIN(  53)			if ((g > (int)255)) {
HXLINE(  53)				color2 = (int)255;
            			}
            			else {
HXLINE(  53)				if ((g < (int)0)) {
HXLINE(  53)					color2 = (int)0;
            				}
            				else {
HXLINE(  53)					color2 = g;
            				}
            			}
HXDLIN(  53)			color = ((int)color | (int)((int)color2 << (int)(int)8));
            		}
HXDLIN(  53)		{
HXLINE(  53)			color = ((int)color & (int)(int)-256);
HXDLIN(  53)			int color3;
HXDLIN(  53)			if ((b > (int)255)) {
HXLINE(  53)				color3 = (int)255;
            			}
            			else {
HXLINE(  53)				if ((b < (int)0)) {
HXLINE(  53)					color3 = (int)0;
            				}
            				else {
HXLINE(  53)					color3 = b;
            				}
            			}
HXDLIN(  53)			color = ((int)color | (int)color3);
            		}
HXDLIN(  53)		{
HXLINE(  53)			color = ((int)color & (int)(int)16777215);
HXDLIN(  53)			int color4;
HXDLIN(  53)			if ((a > (int)255)) {
HXLINE(  53)				color4 = (int)255;
            			}
            			else {
HXLINE(  53)				if ((a < (int)0)) {
HXLINE(  53)					color4 = (int)0;
            				}
            				else {
HXLINE(  53)					color4 = a;
            				}
            			}
HXDLIN(  53)			color = ((int)color | (int)((int)color4 << (int)(int)24));
            		}
HXDLIN(  53)		this->color = color;
HXLINE(  55)		if (hx::IsNotNull( this->sprite )) {
HXLINE(  57)			this->sprite->set_color(this->color);
HXLINE(  58)			this->sprite->set_alpha(((Float)((int)((int)this->color >> (int)(int)24) & (int)(int)255) / (Float)(int)255));
            		}
            	}



hx::ObjectPtr< ColorTween_obj > ColorTween_obj::__new( ::Dynamic Options, ::flixel::tweens::FlxTweenManager manager) {
	hx::ObjectPtr< ColorTween_obj > __this = new ColorTween_obj();
	__this->__construct(Options,manager);
	return __this;
}

hx::ObjectPtr< ColorTween_obj > ColorTween_obj::__alloc(hx::Ctx *_hx_ctx, ::Dynamic Options, ::flixel::tweens::FlxTweenManager manager) {
	ColorTween_obj *__this = (ColorTween_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(ColorTween_obj), true, "flixel.tweens.misc.ColorTween"));
	*(void **)__this = ColorTween_obj::_hx_vtable;
	__this->__construct(Options,manager);
	return __this;
}

ColorTween_obj::ColorTween_obj()
{
}

void ColorTween_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ColorTween);
	HX_MARK_MEMBER_NAME(color,"color");
	HX_MARK_MEMBER_NAME(startColor,"startColor");
	HX_MARK_MEMBER_NAME(endColor,"endColor");
	HX_MARK_MEMBER_NAME(sprite,"sprite");
	 ::flixel::tweens::FlxTween_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ColorTween_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(color,"color");
	HX_VISIT_MEMBER_NAME(startColor,"startColor");
	HX_VISIT_MEMBER_NAME(endColor,"endColor");
	HX_VISIT_MEMBER_NAME(sprite,"sprite");
	 ::flixel::tweens::FlxTween_obj::__Visit(HX_VISIT_ARG);
}

hx::Val ColorTween_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { return hx::Val( color ); }
		if (HX_FIELD_EQ(inName,"tween") ) { return hx::Val( tween_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"sprite") ) { return hx::Val( sprite ); }
		if (HX_FIELD_EQ(inName,"update") ) { return hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return hx::Val( destroy_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"endColor") ) { return hx::Val( endColor ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"startColor") ) { return hx::Val( startColor ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val ColorTween_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { color=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"sprite") ) { sprite=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"endColor") ) { endColor=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"startColor") ) { startColor=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ColorTween_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"));
	outFields->push(HX_HCSTRING("startColor","\xa1","\x49","\x73","\x66"));
	outFields->push(HX_HCSTRING("endColor","\x88","\x03","\x5a","\x48"));
	outFields->push(HX_HCSTRING("sprite","\x05","\xdc","\x95","\xc3"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo ColorTween_obj_sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(ColorTween_obj,color),HX_HCSTRING("color","\x63","\x71","\x5c","\x4a")},
	{hx::fsInt,(int)offsetof(ColorTween_obj,startColor),HX_HCSTRING("startColor","\xa1","\x49","\x73","\x66")},
	{hx::fsInt,(int)offsetof(ColorTween_obj,endColor),HX_HCSTRING("endColor","\x88","\x03","\x5a","\x48")},
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(ColorTween_obj,sprite),HX_HCSTRING("sprite","\x05","\xdc","\x95","\xc3")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *ColorTween_obj_sStaticStorageInfo = 0;
#endif

static ::String ColorTween_obj_sMemberFields[] = {
	HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"),
	HX_HCSTRING("startColor","\xa1","\x49","\x73","\x66"),
	HX_HCSTRING("endColor","\x88","\x03","\x5a","\x48"),
	HX_HCSTRING("sprite","\x05","\xdc","\x95","\xc3"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("tween","\x6b","\xaa","\x70","\x19"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	::String(null()) };

static void ColorTween_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ColorTween_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ColorTween_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ColorTween_obj::__mClass,"__mClass");
};

#endif

hx::Class ColorTween_obj::__mClass;

void ColorTween_obj::__register()
{
	hx::Object *dummy = new ColorTween_obj;
	ColorTween_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.tweens.misc.ColorTween","\x76","\x4b","\xbb","\x6b");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = ColorTween_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(ColorTween_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ColorTween_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ColorTween_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ColorTween_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ColorTween_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace tweens
} // end namespace misc
