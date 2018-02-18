// Generated by Haxe 3.4.5
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
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
#ifndef INCLUDED_flixel_util_FlxGradient
#include <flixel/util/FlxGradient.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Bitmap
#include <openfl/_legacy/display/Bitmap.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_BitmapData
#include <openfl/_legacy/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_BlendMode
#include <openfl/_legacy/display/BlendMode.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObject
#include <openfl/_legacy/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_GradientType
#include <openfl/_legacy/display/GradientType.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Graphics
#include <openfl/_legacy/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_InterpolationMethod
#include <openfl/_legacy/display/InterpolationMethod.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_PixelSnapping
#include <openfl/_legacy/display/PixelSnapping.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Shape
#include <openfl/_legacy/display/Shape.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_SpreadMethod
#include <openfl/_legacy/display/SpreadMethod.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_ColorTransform
#include <openfl/_legacy/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Matrix
#include <openfl/_legacy/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Point
#include <openfl/_legacy/geom/Point.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Rectangle
#include <openfl/_legacy/geom/Rectangle.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_5278df5c1114b3d6_26_createGradientMatrix,"flixel.util.FlxGradient","createGradientMatrix",0x11545e53,"flixel.util.FlxGradient.createGradientMatrix","flixel/util/FlxGradient.hx",26,0x5a5037d6)
HX_LOCAL_STACK_FRAME(_hx_pos_5278df5c1114b3d6_70_createGradientArray,"flixel.util.FlxGradient","createGradientArray",0xc5836dc7,"flixel.util.FlxGradient.createGradientArray","flixel/util/FlxGradient.hx",70,0x5a5037d6)
HX_LOCAL_STACK_FRAME(_hx_pos_5278df5c1114b3d6_95_createGradientFlxSprite,"flixel.util.FlxGradient","createGradientFlxSprite",0xca14a545,"flixel.util.FlxGradient.createGradientFlxSprite","flixel/util/FlxGradient.hx",95,0x5a5037d6)
HX_LOCAL_STACK_FRAME(_hx_pos_5278df5c1114b3d6_104_createGradientBitmapData,"flixel.util.FlxGradient","createGradientBitmapData",0xa3b74ecb,"flixel.util.FlxGradient.createGradientBitmapData","flixel/util/FlxGradient.hx",104,0x5a5037d6)
HX_LOCAL_STACK_FRAME(_hx_pos_5278df5c1114b3d6_163_overlayGradientOnFlxSprite,"flixel.util.FlxGradient","overlayGradientOnFlxSprite",0xe400659e,"flixel.util.FlxGradient.overlayGradientOnFlxSprite","flixel/util/FlxGradient.hx",163,0x5a5037d6)
HX_LOCAL_STACK_FRAME(_hx_pos_5278df5c1114b3d6_197_overlayGradientOnBitmapData,"flixel.util.FlxGradient","overlayGradientOnBitmapData",0x3813dc52,"flixel.util.FlxGradient.overlayGradientOnBitmapData","flixel/util/FlxGradient.hx",197,0x5a5037d6)
namespace flixel{
namespace util{

void FlxGradient_obj::__construct() { }

Dynamic FlxGradient_obj::__CreateEmpty() { return new FlxGradient_obj; }

void *FlxGradient_obj::_hx_vtable = 0;

Dynamic FlxGradient_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< FlxGradient_obj > _hx_result = new FlxGradient_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool FlxGradient_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x42ad84c4;
}

 ::Dynamic FlxGradient_obj::createGradientMatrix(int width,int height,::Array< int > colors,hx::Null< int >  __o_chunkSize,hx::Null< int >  __o_rotation){
int chunkSize = __o_chunkSize.Default(1);
int rotation = __o_rotation.Default(90);
            	HX_GC_STACKFRAME(&_hx_pos_5278df5c1114b3d6_26_createGradientMatrix)
HXLINE(  27)		 ::openfl::_legacy::geom::Matrix gradientMatrix =  ::openfl::_legacy::geom::Matrix_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
HXLINE(  30)		Float rot = (rotation * ((Float)::Math_obj::PI / (Float)(int)180));
HXLINE(  33)		int _hx_int = height;
HXDLIN(  33)		Float _hx_tmp;
HXDLIN(  33)		if ((_hx_int < (int)0)) {
HXLINE(  33)			_hx_tmp = (((Float)4294967296.0) + _hx_int);
            		}
            		else {
HXLINE(  33)			_hx_tmp = (_hx_int + ((Float)0.0));
            		}
HXDLIN(  33)		int int1 = chunkSize;
HXDLIN(  33)		Float _hx_tmp1;
HXDLIN(  33)		if ((int1 < (int)0)) {
HXLINE(  33)			_hx_tmp1 = (((Float)4294967296.0) + int1);
            		}
            		else {
HXLINE(  33)			_hx_tmp1 = (int1 + ((Float)0.0));
            		}
HXDLIN(  33)		gradientMatrix->createGradientBox(width,((Float)_hx_tmp / (Float)_hx_tmp1),rot,(int)0,(int)0);
HXLINE(  36)		::Array< Float > alpha = ::Array_obj< Float >::__new();
HXLINE(  38)		{
HXLINE(  38)			int _g1 = (int)0;
HXDLIN(  38)			int _g = colors->length;
HXDLIN(  38)			while((_g1 < _g)){
HXLINE(  38)				_g1 = (_g1 + (int)1);
HXDLIN(  38)				int ai = (_g1 - (int)1);
HXLINE(  40)				alpha->push(((Float)((int)((int)colors->__get(ai) >> (int)(int)24) & (int)(int)255) / (Float)(int)255));
            			}
            		}
HXLINE(  43)		::Array< int > ratio = ::Array_obj< int >::__new();
HXLINE(  45)		if ((colors->length == (int)2)) {
HXLINE(  47)			ratio[(int)0] = (int)0;
HXLINE(  48)			ratio[(int)1] = (int)255;
            		}
            		else {
HXLINE(  53)			int spread = ::Std_obj::_hx_int(((Float)(int)255 / (Float)(colors->length - (int)1)));
HXLINE(  55)			ratio->push((int)0);
HXLINE(  57)			{
HXLINE(  57)				int _g11 = (int)1;
HXDLIN(  57)				int _g2 = (colors->length - (int)1);
HXDLIN(  57)				while((_g11 < _g2)){
HXLINE(  57)					_g11 = (_g11 + (int)1);
HXDLIN(  57)					int ri = (_g11 - (int)1);
HXLINE(  59)					ratio->push((ri * spread));
            				}
            			}
HXLINE(  62)			ratio->push((int)255);
            		}
HXLINE(  65)		return  ::Dynamic(hx::Anon_obj::Create(3)
            			->setFixed(0,HX_("matrix",41,36,c8,bb),gradientMatrix)
            			->setFixed(1,HX_("ratio",0b,35,24,e4),ratio)
            			->setFixed(2,HX_("alpha",5e,a7,96,21),alpha));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(FlxGradient_obj,createGradientMatrix,return )

::Array< int > FlxGradient_obj::createGradientArray(int width,int height,::Array< int > colors,hx::Null< int >  __o_chunkSize,hx::Null< int >  __o_rotation,hx::Null< bool >  __o_interpolate){
int chunkSize = __o_chunkSize.Default(1);
int rotation = __o_rotation.Default(90);
bool interpolate = __o_interpolate.Default(true);
            	HX_STACKFRAME(&_hx_pos_5278df5c1114b3d6_70_createGradientArray)
HXLINE(  71)		 ::openfl::_legacy::display::BitmapData data = ::flixel::util::FlxGradient_obj::createGradientBitmapData(width,height,colors,chunkSize,rotation,interpolate);
HXLINE(  72)		::Array< int > result = ::Array_obj< int >::__new();
HXLINE(  74)		{
HXLINE(  74)			int _g1 = (int)0;
HXDLIN(  74)			int _g = data->get_height();
HXDLIN(  74)			while((_g1 < _g)){
HXLINE(  74)				_g1 = (_g1 + (int)1);
HXDLIN(  74)				int y = (_g1 - (int)1);
HXLINE(  76)				result->push(data->getPixel32((int)0,y));
            			}
            		}
HXLINE(  79)		return result;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(FlxGradient_obj,createGradientArray,return )

 ::flixel::FlxSprite FlxGradient_obj::createGradientFlxSprite(int width,int height,::Array< int > colors,hx::Null< int >  __o_chunkSize,hx::Null< int >  __o_rotation,hx::Null< bool >  __o_interpolate){
int chunkSize = __o_chunkSize.Default(1);
int rotation = __o_rotation.Default(90);
bool interpolate = __o_interpolate.Default(true);
            	HX_GC_STACKFRAME(&_hx_pos_5278df5c1114b3d6_95_createGradientFlxSprite)
HXLINE(  96)		 ::openfl::_legacy::display::BitmapData data = ::flixel::util::FlxGradient_obj::createGradientBitmapData(width,height,colors,chunkSize,rotation,interpolate);
HXLINE(  97)		 ::flixel::FlxSprite dest =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null());
HXLINE(  98)		dest->set_pixels(data);
HXLINE(  99)		return dest;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(FlxGradient_obj,createGradientFlxSprite,return )

 ::openfl::_legacy::display::BitmapData FlxGradient_obj::createGradientBitmapData(int width,int height,::Array< int > colors,hx::Null< int >  __o_chunkSize,hx::Null< int >  __o_rotation,hx::Null< bool >  __o_interpolate){
int chunkSize = __o_chunkSize.Default(1);
int rotation = __o_rotation.Default(90);
bool interpolate = __o_interpolate.Default(true);
            	HX_GC_STACKFRAME(&_hx_pos_5278df5c1114b3d6_104_createGradientBitmapData)
HXLINE( 106)		bool aNeg = ((int)1 < (int)0);
HXDLIN( 106)		bool bNeg = (width < (int)0);
HXDLIN( 106)		bool _hx_tmp;
HXDLIN( 106)		if ((aNeg != bNeg)) {
HXLINE( 106)			_hx_tmp = aNeg;
            		}
            		else {
HXLINE( 106)			_hx_tmp = ((int)1 > width);
            		}
HXDLIN( 106)		if (_hx_tmp) {
HXLINE( 108)			width = (int)1;
            		}
HXLINE( 111)		bool aNeg1 = ((int)1 < (int)0);
HXDLIN( 111)		bool bNeg1 = (height < (int)0);
HXDLIN( 111)		bool _hx_tmp1;
HXDLIN( 111)		if ((aNeg1 != bNeg1)) {
HXLINE( 111)			_hx_tmp1 = aNeg1;
            		}
            		else {
HXLINE( 111)			_hx_tmp1 = ((int)1 > height);
            		}
HXDLIN( 111)		if (_hx_tmp1) {
HXLINE( 113)			height = (int)1;
            		}
HXLINE( 116)		 ::Dynamic gradient = ::flixel::util::FlxGradient_obj::createGradientMatrix(width,height,colors,chunkSize,rotation);
HXLINE( 117)		 ::openfl::_legacy::display::Shape shape =  ::openfl::_legacy::display::Shape_obj::__alloc( HX_CTX );
HXLINE( 118)		 ::openfl::_legacy::display::InterpolationMethod interpolationMethod;
HXDLIN( 118)		if (interpolate) {
HXLINE( 118)			interpolationMethod = ::openfl::_legacy::display::InterpolationMethod_obj::RGB_dyn();
            		}
            		else {
HXLINE( 118)			interpolationMethod = ::openfl::_legacy::display::InterpolationMethod_obj::LINEAR_RGB_dyn();
            		}
HXLINE( 120)		shape->get_graphics()->beginGradientFill(::openfl::_legacy::display::GradientType_obj::LINEAR_dyn(),colors,( (::cpp::VirtualArray)(gradient->__Field(HX_("alpha",5e,a7,96,21),hx::paccDynamic)) ),( (::cpp::VirtualArray)(gradient->__Field(HX_("ratio",0b,35,24,e4),hx::paccDynamic)) ),( ( ::openfl::_legacy::geom::Matrix)(gradient->__Field(HX_("matrix",41,36,c8,bb),hx::paccDynamic)) ),::openfl::_legacy::display::SpreadMethod_obj::PAD_dyn(),interpolationMethod,(int)0);
HXLINE( 123)		 ::openfl::_legacy::display::Graphics _hx_tmp2 = shape->get_graphics();
HXDLIN( 123)		int _hx_int = width;
HXDLIN( 123)		Float _hx_tmp3;
HXDLIN( 123)		if ((_hx_int < (int)0)) {
HXLINE( 123)			_hx_tmp3 = (((Float)4294967296.0) + _hx_int);
            		}
            		else {
HXLINE( 123)			_hx_tmp3 = (_hx_int + ((Float)0.0));
            		}
HXDLIN( 123)		int int1 = height;
HXDLIN( 123)		Float _hx_tmp4;
HXDLIN( 123)		if ((int1 < (int)0)) {
HXLINE( 123)			_hx_tmp4 = (((Float)4294967296.0) + int1);
            		}
            		else {
HXLINE( 123)			_hx_tmp4 = (int1 + ((Float)0.0));
            		}
HXDLIN( 123)		int int2 = chunkSize;
HXDLIN( 123)		Float _hx_tmp5;
HXDLIN( 123)		if ((int2 < (int)0)) {
HXLINE( 123)			_hx_tmp5 = (((Float)4294967296.0) + int2);
            		}
            		else {
HXLINE( 123)			_hx_tmp5 = (int2 + ((Float)0.0));
            		}
HXDLIN( 123)		_hx_tmp2->drawRect((int)0,(int)0,_hx_tmp3,((Float)_hx_tmp4 / (Float)_hx_tmp5));
HXLINE( 125)		 ::openfl::_legacy::display::BitmapData data =  ::openfl::_legacy::display::BitmapData_obj::__alloc( HX_CTX ,width,height,true,(int)0,null());
HXLINE( 127)		if ((chunkSize == (int)1)) {
HXLINE( 129)			data->draw(shape,null(),null(),null(),null(),null());
            		}
            		else {
HXLINE( 133)			int int3 = height;
HXDLIN( 133)			Float tempBitmap;
HXDLIN( 133)			if ((int3 < (int)0)) {
HXLINE( 133)				tempBitmap = (((Float)4294967296.0) + int3);
            			}
            			else {
HXLINE( 133)				tempBitmap = (int3 + ((Float)0.0));
            			}
HXDLIN( 133)			int int4 = chunkSize;
HXDLIN( 133)			Float tempBitmap1;
HXDLIN( 133)			if ((int4 < (int)0)) {
HXLINE( 133)				tempBitmap1 = (((Float)4294967296.0) + int4);
            			}
            			else {
HXLINE( 133)				tempBitmap1 = (int4 + ((Float)0.0));
            			}
HXDLIN( 133)			 ::openfl::_legacy::display::Bitmap tempBitmap2 =  ::openfl::_legacy::display::Bitmap_obj::__alloc( HX_CTX , ::openfl::_legacy::display::BitmapData_obj::__alloc( HX_CTX ,width,::Std_obj::_hx_int(((Float)tempBitmap / (Float)tempBitmap1)),true,(int)0,null()),null(),null());
HXLINE( 134)			tempBitmap2->bitmapData->draw(shape,null(),null(),null(),null(),null());
HXLINE( 135)			int int5 = chunkSize;
HXDLIN( 135)			Float _hx_tmp6;
HXDLIN( 135)			if ((int5 < (int)0)) {
HXLINE( 135)				_hx_tmp6 = (((Float)4294967296.0) + int5);
            			}
            			else {
HXLINE( 135)				_hx_tmp6 = (int5 + ((Float)0.0));
            			}
HXDLIN( 135)			tempBitmap2->set_scaleY(_hx_tmp6);
HXLINE( 137)			 ::openfl::_legacy::geom::Matrix sM =  ::openfl::_legacy::geom::Matrix_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
HXLINE( 138)			Float _hx_tmp7 = tempBitmap2->get_scaleX();
HXDLIN( 138)			sM->scale(_hx_tmp7,tempBitmap2->get_scaleY());
HXLINE( 140)			data->draw(tempBitmap2,sM,null(),null(),null(),null());
            		}
HXLINE( 143)		return data;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(FlxGradient_obj,createGradientBitmapData,return )

 ::flixel::FlxSprite FlxGradient_obj::overlayGradientOnFlxSprite( ::flixel::FlxSprite dest,int width,int height,::Array< int > colors,hx::Null< int >  __o_destX,hx::Null< int >  __o_destY,hx::Null< int >  __o_chunkSize,hx::Null< int >  __o_rotation,hx::Null< bool >  __o_interpolate){
int destX = __o_destX.Default(0);
int destY = __o_destY.Default(0);
int chunkSize = __o_chunkSize.Default(1);
int rotation = __o_rotation.Default(90);
bool interpolate = __o_interpolate.Default(true);
            	HX_STACKFRAME(&_hx_pos_5278df5c1114b3d6_163_overlayGradientOnFlxSprite)
HXLINE( 164)		if ((width > dest->get_width())) {
HXLINE( 166)			width = ::Std_obj::_hx_int(dest->get_width());
            		}
HXLINE( 169)		if ((height > dest->get_height())) {
HXLINE( 171)			height = ::Std_obj::_hx_int(dest->get_height());
            		}
HXLINE( 174)		 ::flixel::FlxSprite source = ::flixel::util::FlxGradient_obj::createGradientFlxSprite(width,height,colors,chunkSize,rotation,interpolate);
HXLINE( 175)		dest->stamp(source,destX,destY);
HXLINE( 176)		source->destroy();
HXLINE( 177)		return dest;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC9(FlxGradient_obj,overlayGradientOnFlxSprite,return )

 ::openfl::_legacy::display::BitmapData FlxGradient_obj::overlayGradientOnBitmapData( ::openfl::_legacy::display::BitmapData dest,int width,int height,::Array< int > colors,hx::Null< int >  __o_destX,hx::Null< int >  __o_destY,hx::Null< int >  __o_chunkSize,hx::Null< int >  __o_rotation,hx::Null< bool >  __o_interpolate){
int destX = __o_destX.Default(0);
int destY = __o_destY.Default(0);
int chunkSize = __o_chunkSize.Default(1);
int rotation = __o_rotation.Default(90);
bool interpolate = __o_interpolate.Default(true);
            	HX_GC_STACKFRAME(&_hx_pos_5278df5c1114b3d6_197_overlayGradientOnBitmapData)
HXLINE( 198)		if ((width > dest->get_width())) {
HXLINE( 200)			width = dest->get_width();
            		}
HXLINE( 203)		if ((height > dest->get_height())) {
HXLINE( 205)			height = dest->get_height();
            		}
HXLINE( 208)		 ::openfl::_legacy::display::BitmapData source = ::flixel::util::FlxGradient_obj::createGradientBitmapData(width,height,colors,chunkSize,rotation,interpolate);
HXLINE( 209)		int _hx_tmp = source->get_width();
HXDLIN( 209)		 ::openfl::_legacy::geom::Rectangle _hx_tmp1 =  ::openfl::_legacy::geom::Rectangle_obj::__alloc( HX_CTX ,(int)0,(int)0,_hx_tmp,source->get_height());
HXDLIN( 209)		dest->copyPixels(source,_hx_tmp1, ::openfl::_legacy::geom::Point_obj::__alloc( HX_CTX ,destX,destY),null(),null(),true);
HXLINE( 210)		source->dispose();
HXLINE( 211)		return dest;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC9(FlxGradient_obj,overlayGradientOnBitmapData,return )


FlxGradient_obj::FlxGradient_obj()
{
}

bool FlxGradient_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 19:
		if (HX_FIELD_EQ(inName,"createGradientArray") ) { outValue = createGradientArray_dyn(); return true; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"createGradientMatrix") ) { outValue = createGradientMatrix_dyn(); return true; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"createGradientFlxSprite") ) { outValue = createGradientFlxSprite_dyn(); return true; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"createGradientBitmapData") ) { outValue = createGradientBitmapData_dyn(); return true; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"overlayGradientOnFlxSprite") ) { outValue = overlayGradientOnFlxSprite_dyn(); return true; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"overlayGradientOnBitmapData") ) { outValue = overlayGradientOnBitmapData_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *FlxGradient_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *FlxGradient_obj_sStaticStorageInfo = 0;
#endif

static void FlxGradient_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxGradient_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FlxGradient_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxGradient_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxGradient_obj::__mClass;

static ::String FlxGradient_obj_sStaticFields[] = {
	HX_HCSTRING("createGradientMatrix","\x6d","\xb4","\x68","\x83"),
	HX_HCSTRING("createGradientArray","\xed","\xd8","\xac","\x37"),
	HX_HCSTRING("createGradientFlxSprite","\x6b","\x9b","\x09","\xc6"),
	HX_HCSTRING("createGradientBitmapData","\xe5","\xb9","\x19","\x1e"),
	HX_HCSTRING("overlayGradientOnFlxSprite","\x38","\x4b","\x27","\x8c"),
	HX_HCSTRING("overlayGradientOnBitmapData","\x78","\xdd","\xf5","\xb1"),
	::String(null())
};

void FlxGradient_obj::__register()
{
	hx::Object *dummy = new FlxGradient_obj;
	FlxGradient_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.util.FlxGradient","\x48","\x2c","\xee","\x6e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxGradient_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = FlxGradient_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(FlxGradient_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< FlxGradient_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FlxGradient_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxGradient_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxGradient_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace util
