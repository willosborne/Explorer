// Generated by Haxe 3.4.5
#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_BitmapData
#include <openfl/_legacy/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Point
#include <openfl/_legacy/geom/Point.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Rectangle
#include <openfl/_legacy/geom/Rectangle.h>
#endif
#ifndef INCLUDED_openfl__legacy_gl_GL
#include <openfl/_legacy/gl/GL.h>
#endif
#ifndef INCLUDED_openfl__legacy_gl_GLObject
#include <openfl/_legacy/gl/GLObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_gl_GLTexture
#include <openfl/_legacy/gl/GLTexture.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_ArrayBufferView
#include <openfl/_legacy/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_ByteArray
#include <openfl/_legacy/utils/ByteArray.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_IDataInput
#include <openfl/_legacy/utils/IDataInput.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_IDataOutput
#include <openfl/_legacy/utils/IDataOutput.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_IMemoryRange
#include <openfl/_legacy/utils/IMemoryRange.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_UInt8Array
#include <openfl/_legacy/utils/UInt8Array.h>
#endif
#ifndef INCLUDED_openfl_display3D_Context3D
#include <openfl/display3D/Context3D.h>
#endif
#ifndef INCLUDED_openfl_display3D_textures_CubeTexture
#include <openfl/display3D/textures/CubeTexture.h>
#endif
#ifndef INCLUDED_openfl_display3D_textures_TextureBase
#include <openfl/display3D/textures/TextureBase.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_ccb53fcc86b81631_22_new,"openfl.display3D.textures.CubeTexture","new",0x2100f37b,"openfl.display3D.textures.CubeTexture.new","openfl/display3D/textures/CubeTexture.hx",22,0xffe9b114)
HX_LOCAL_STACK_FRAME(_hx_pos_ccb53fcc86b81631_41_glTextureAt,"openfl.display3D.textures.CubeTexture","glTextureAt",0xa081fde4,"openfl.display3D.textures.CubeTexture.glTextureAt","openfl/display3D/textures/CubeTexture.hx",41,0xffe9b114)
HX_LOCAL_STACK_FRAME(_hx_pos_ccb53fcc86b81631_46_uploadCompressedTextureFromByteArray,"openfl.display3D.textures.CubeTexture","uploadCompressedTextureFromByteArray",0x47d49053,"openfl.display3D.textures.CubeTexture.uploadCompressedTextureFromByteArray","openfl/display3D/textures/CubeTexture.hx",46,0xffe9b114)
HX_LOCAL_STACK_FRAME(_hx_pos_ccb53fcc86b81631_53_uploadFromBitmapData,"openfl.display3D.textures.CubeTexture","uploadFromBitmapData",0xf44b3429,"openfl.display3D.textures.CubeTexture.uploadFromBitmapData","openfl/display3D/textures/CubeTexture.hx",53,0xffe9b114)
HX_LOCAL_STACK_FRAME(_hx_pos_ccb53fcc86b81631_102_uploadFromByteArray,"openfl.display3D.textures.CubeTexture","uploadFromByteArray",0x1e356101,"openfl.display3D.textures.CubeTexture.uploadFromByteArray","openfl/display3D/textures/CubeTexture.hx",102,0xffe9b114)
namespace openfl{
namespace display3D{
namespace textures{

void CubeTexture_obj::__construct( ::openfl::display3D::Context3D context, ::openfl::_legacy::gl::GLTexture glTexture,int size){
            	HX_GC_STACKFRAME(&_hx_pos_ccb53fcc86b81631_22_new)
HXLINE(  24)		super::__construct(context,glTexture,size,size);
HXLINE(  25)		this->size = size;
HXLINE(  26)		this->mipmapsGenerated = false;
HXLINE(  28)		this->_textures = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  30)		{
HXLINE(  30)			int _g = (int)0;
HXDLIN(  30)			while((_g < (int)6)){
HXLINE(  30)				_g = (_g + (int)1);
HXDLIN(  30)				int i = (_g - (int)1);
HXLINE(  32)				::Array< ::Dynamic> _hx_tmp = this->_textures;
HXDLIN(  32)				int _hx_tmp1 = ::openfl::_legacy::gl::GL_obj::get_version();
HXDLIN(  32)				_hx_tmp[i] =  ::openfl::_legacy::gl::GLTexture_obj::__alloc( HX_CTX ,_hx_tmp1,::openfl::_legacy::gl::GL_obj::lime_gl_create_texture());
            			}
            		}
            	}

Dynamic CubeTexture_obj::__CreateEmpty() { return new CubeTexture_obj; }

void *CubeTexture_obj::_hx_vtable = 0;

Dynamic CubeTexture_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< CubeTexture_obj > _hx_result = new CubeTexture_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool CubeTexture_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x25b00754) {
		if (inClassId<=(int)0x19affbf1) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x19affbf1;
		} else {
			return inClassId==(int)0x25b00754;
		}
	} else {
		return inClassId==(int)0x2d6abef7;
	}
}

 ::openfl::_legacy::gl::GLTexture CubeTexture_obj::glTextureAt(int index){
            	HX_STACKFRAME(&_hx_pos_ccb53fcc86b81631_41_glTextureAt)
HXDLIN(  41)		return this->_textures->__get(index).StaticCast<  ::openfl::_legacy::gl::GLTexture >();
            	}


HX_DEFINE_DYNAMIC_FUNC1(CubeTexture_obj,glTextureAt,return )

void CubeTexture_obj::uploadCompressedTextureFromByteArray( ::openfl::_legacy::utils::ByteArray data,int byteArrayOffset,hx::Null< bool >  __o_async){
bool async = __o_async.Default(false);
            	HX_STACKFRAME(&_hx_pos_ccb53fcc86b81631_46_uploadCompressedTextureFromByteArray)
            	}


HX_DEFINE_DYNAMIC_FUNC3(CubeTexture_obj,uploadCompressedTextureFromByteArray,(void))

void CubeTexture_obj::uploadFromBitmapData( ::openfl::_legacy::display::BitmapData bitmapData,int side,hx::Null< int >  __o_miplevel){
int miplevel = __o_miplevel.Default(0);
            	HX_GC_STACKFRAME(&_hx_pos_ccb53fcc86b81631_53_uploadFromBitmapData)
HXLINE(  58)		int rgbaData = bitmapData->get_width();
HXDLIN(  58)		int rgbaData1 = bitmapData->get_height();
HXDLIN(  58)		 ::openfl::_legacy::display::BitmapData rgbaData2 =  ::openfl::_legacy::display::BitmapData_obj::__alloc( HX_CTX ,rgbaData,rgbaData1,bitmapData->get_transparent(),null(),null());
HXDLIN(  58)		 ::openfl::_legacy::geom::Rectangle rect = bitmapData->get_rect();
HXDLIN(  58)		 ::openfl::_legacy::geom::Point point =  ::openfl::_legacy::geom::Point_obj::__alloc( HX_CTX ,(int)0,(int)0);
HXDLIN(  58)		rgbaData2->copyChannel(bitmapData,rect,point,(int)2,(int)1);
HXDLIN(  58)		rgbaData2->copyChannel(bitmapData,rect,point,(int)4,(int)2);
HXDLIN(  58)		rgbaData2->copyChannel(bitmapData,rect,point,(int)8,(int)4);
HXDLIN(  58)		rgbaData2->copyChannel(bitmapData,rect,point,(int)1,(int)8);
HXDLIN(  58)		 ::openfl::_legacy::utils::UInt8Array source =  ::openfl::_legacy::utils::UInt8Array_obj::__alloc( HX_CTX ,rgbaData2->getPixels(rect),null(),null());
HXLINE(  63)		{
HXLINE(  63)			 ::openfl::_legacy::gl::GLTexture texture = this->glTexture;
HXDLIN(  63)			 ::Dynamic _hx_tmp;
HXDLIN(  63)			if (hx::IsNull( texture )) {
HXLINE(  63)				_hx_tmp = null();
            			}
            			else {
HXLINE(  63)				_hx_tmp = texture->id;
            			}
HXDLIN(  63)			::openfl::_legacy::gl::GL_obj::lime_gl_bind_texture((int)34067,_hx_tmp);
            		}
HXLINE(  65)		switch((int)(side)){
            			case (int)0: {
HXLINE(  69)				int width = bitmapData->get_width();
HXDLIN(  69)				int height = bitmapData->get_height();
HXDLIN(  69)				 ::Dynamic _hx_tmp1 = hx::ClassOf< ::openfl::_legacy::gl::GL >();
HXDLIN(  69)				 ::openfl::_legacy::utils::ByteArray _hx_tmp2;
HXDLIN(  69)				if (hx::IsNull( source )) {
HXLINE(  69)					_hx_tmp2 = null();
            				}
            				else {
HXLINE(  69)					_hx_tmp2 = source->getByteBuffer();
            				}
HXDLIN(  69)				 ::Dynamic _hx_tmp3;
HXDLIN(  69)				if (hx::IsNull( source )) {
HXLINE(  69)					_hx_tmp3 = null();
            				}
            				else {
HXLINE(  69)					_hx_tmp3 = source->getStart();
            				}
HXDLIN(  69)				::openfl::_legacy::gl::GL_obj::lime_gl_tex_image_2d((int)34069,miplevel,(int)6408,width,height,(int)0,(int)6408,(int)5121,_hx_tmp2,_hx_tmp3);
            			}
            			break;
            			case (int)1: {
HXLINE(  73)				int width1 = bitmapData->get_width();
HXDLIN(  73)				int height1 = bitmapData->get_height();
HXDLIN(  73)				 ::Dynamic _hx_tmp4 = hx::ClassOf< ::openfl::_legacy::gl::GL >();
HXDLIN(  73)				 ::openfl::_legacy::utils::ByteArray _hx_tmp5;
HXDLIN(  73)				if (hx::IsNull( source )) {
HXLINE(  73)					_hx_tmp5 = null();
            				}
            				else {
HXLINE(  73)					_hx_tmp5 = source->getByteBuffer();
            				}
HXDLIN(  73)				 ::Dynamic _hx_tmp6;
HXDLIN(  73)				if (hx::IsNull( source )) {
HXLINE(  73)					_hx_tmp6 = null();
            				}
            				else {
HXLINE(  73)					_hx_tmp6 = source->getStart();
            				}
HXDLIN(  73)				::openfl::_legacy::gl::GL_obj::lime_gl_tex_image_2d((int)34070,miplevel,(int)6408,width1,height1,(int)0,(int)6408,(int)5121,_hx_tmp5,_hx_tmp6);
            			}
            			break;
            			case (int)2: {
HXLINE(  77)				int width2 = bitmapData->get_width();
HXDLIN(  77)				int height2 = bitmapData->get_height();
HXDLIN(  77)				 ::Dynamic _hx_tmp7 = hx::ClassOf< ::openfl::_legacy::gl::GL >();
HXDLIN(  77)				 ::openfl::_legacy::utils::ByteArray _hx_tmp8;
HXDLIN(  77)				if (hx::IsNull( source )) {
HXLINE(  77)					_hx_tmp8 = null();
            				}
            				else {
HXLINE(  77)					_hx_tmp8 = source->getByteBuffer();
            				}
HXDLIN(  77)				 ::Dynamic _hx_tmp9;
HXDLIN(  77)				if (hx::IsNull( source )) {
HXLINE(  77)					_hx_tmp9 = null();
            				}
            				else {
HXLINE(  77)					_hx_tmp9 = source->getStart();
            				}
HXDLIN(  77)				::openfl::_legacy::gl::GL_obj::lime_gl_tex_image_2d((int)34071,miplevel,(int)6408,width2,height2,(int)0,(int)6408,(int)5121,_hx_tmp8,_hx_tmp9);
            			}
            			break;
            			case (int)3: {
HXLINE(  81)				int width3 = bitmapData->get_width();
HXDLIN(  81)				int height3 = bitmapData->get_height();
HXDLIN(  81)				 ::Dynamic _hx_tmp10 = hx::ClassOf< ::openfl::_legacy::gl::GL >();
HXDLIN(  81)				 ::openfl::_legacy::utils::ByteArray _hx_tmp11;
HXDLIN(  81)				if (hx::IsNull( source )) {
HXLINE(  81)					_hx_tmp11 = null();
            				}
            				else {
HXLINE(  81)					_hx_tmp11 = source->getByteBuffer();
            				}
HXDLIN(  81)				 ::Dynamic _hx_tmp12;
HXDLIN(  81)				if (hx::IsNull( source )) {
HXLINE(  81)					_hx_tmp12 = null();
            				}
            				else {
HXLINE(  81)					_hx_tmp12 = source->getStart();
            				}
HXDLIN(  81)				::openfl::_legacy::gl::GL_obj::lime_gl_tex_image_2d((int)34072,miplevel,(int)6408,width3,height3,(int)0,(int)6408,(int)5121,_hx_tmp11,_hx_tmp12);
            			}
            			break;
            			case (int)4: {
HXLINE(  85)				int width4 = bitmapData->get_width();
HXDLIN(  85)				int height4 = bitmapData->get_height();
HXDLIN(  85)				 ::Dynamic _hx_tmp13 = hx::ClassOf< ::openfl::_legacy::gl::GL >();
HXDLIN(  85)				 ::openfl::_legacy::utils::ByteArray _hx_tmp14;
HXDLIN(  85)				if (hx::IsNull( source )) {
HXLINE(  85)					_hx_tmp14 = null();
            				}
            				else {
HXLINE(  85)					_hx_tmp14 = source->getByteBuffer();
            				}
HXDLIN(  85)				 ::Dynamic _hx_tmp15;
HXDLIN(  85)				if (hx::IsNull( source )) {
HXLINE(  85)					_hx_tmp15 = null();
            				}
            				else {
HXLINE(  85)					_hx_tmp15 = source->getStart();
            				}
HXDLIN(  85)				::openfl::_legacy::gl::GL_obj::lime_gl_tex_image_2d((int)34073,miplevel,(int)6408,width4,height4,(int)0,(int)6408,(int)5121,_hx_tmp14,_hx_tmp15);
            			}
            			break;
            			case (int)5: {
HXLINE(  89)				int width5 = bitmapData->get_width();
HXDLIN(  89)				int height5 = bitmapData->get_height();
HXDLIN(  89)				 ::Dynamic _hx_tmp16 = hx::ClassOf< ::openfl::_legacy::gl::GL >();
HXDLIN(  89)				 ::openfl::_legacy::utils::ByteArray _hx_tmp17;
HXDLIN(  89)				if (hx::IsNull( source )) {
HXLINE(  89)					_hx_tmp17 = null();
            				}
            				else {
HXLINE(  89)					_hx_tmp17 = source->getByteBuffer();
            				}
HXDLIN(  89)				 ::Dynamic _hx_tmp18;
HXDLIN(  89)				if (hx::IsNull( source )) {
HXLINE(  89)					_hx_tmp18 = null();
            				}
            				else {
HXLINE(  89)					_hx_tmp18 = source->getStart();
            				}
HXDLIN(  89)				::openfl::_legacy::gl::GL_obj::lime_gl_tex_image_2d((int)34074,miplevel,(int)6408,width5,height5,(int)0,(int)6408,(int)5121,_hx_tmp17,_hx_tmp18);
            			}
            			break;
            			default:{
HXLINE(  93)				HX_STACK_DO_THROW(HX_("unknown side type",cd,01,86,25));
            			}
            		}
HXLINE(  97)		::openfl::_legacy::gl::GL_obj::lime_gl_bind_texture((int)34067,null());
            	}


HX_DEFINE_DYNAMIC_FUNC3(CubeTexture_obj,uploadFromBitmapData,(void))

void CubeTexture_obj::uploadFromByteArray( ::openfl::_legacy::utils::ByteArray data,int byteArrayOffset,int side,hx::Null< int >  __o_miplevel){
int miplevel = __o_miplevel.Default(0);
            	HX_STACKFRAME(&_hx_pos_ccb53fcc86b81631_102_uploadFromByteArray)
            	}


HX_DEFINE_DYNAMIC_FUNC4(CubeTexture_obj,uploadFromByteArray,(void))


hx::ObjectPtr< CubeTexture_obj > CubeTexture_obj::__new( ::openfl::display3D::Context3D context, ::openfl::_legacy::gl::GLTexture glTexture,int size) {
	hx::ObjectPtr< CubeTexture_obj > __this = new CubeTexture_obj();
	__this->__construct(context,glTexture,size);
	return __this;
}

hx::ObjectPtr< CubeTexture_obj > CubeTexture_obj::__alloc(hx::Ctx *_hx_ctx, ::openfl::display3D::Context3D context, ::openfl::_legacy::gl::GLTexture glTexture,int size) {
	CubeTexture_obj *__this = (CubeTexture_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(CubeTexture_obj), true, "openfl.display3D.textures.CubeTexture"));
	*(void **)__this = CubeTexture_obj::_hx_vtable;
	__this->__construct(context,glTexture,size);
	return __this;
}

CubeTexture_obj::CubeTexture_obj()
{
}

void CubeTexture_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CubeTexture);
	HX_MARK_MEMBER_NAME(size,"size");
	HX_MARK_MEMBER_NAME(_textures,"_textures");
	HX_MARK_MEMBER_NAME(mipmapsGenerated,"mipmapsGenerated");
	 ::openfl::display3D::textures::TextureBase_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void CubeTexture_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(size,"size");
	HX_VISIT_MEMBER_NAME(_textures,"_textures");
	HX_VISIT_MEMBER_NAME(mipmapsGenerated,"mipmapsGenerated");
	 ::openfl::display3D::textures::TextureBase_obj::__Visit(HX_VISIT_ARG);
}

hx::Val CubeTexture_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"size") ) { return hx::Val( size ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_textures") ) { return hx::Val( _textures ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"glTextureAt") ) { return hx::Val( glTextureAt_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"mipmapsGenerated") ) { return hx::Val( mipmapsGenerated ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"uploadFromByteArray") ) { return hx::Val( uploadFromByteArray_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"uploadFromBitmapData") ) { return hx::Val( uploadFromBitmapData_dyn() ); }
		break;
	case 36:
		if (HX_FIELD_EQ(inName,"uploadCompressedTextureFromByteArray") ) { return hx::Val( uploadCompressedTextureFromByteArray_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val CubeTexture_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"size") ) { size=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_textures") ) { _textures=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"mipmapsGenerated") ) { mipmapsGenerated=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CubeTexture_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c"));
	outFields->push(HX_HCSTRING("_textures","\x97","\xee","\x64","\xad"));
	outFields->push(HX_HCSTRING("mipmapsGenerated","\x24","\x10","\x0f","\xac"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo CubeTexture_obj_sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(CubeTexture_obj,size),HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(CubeTexture_obj,_textures),HX_HCSTRING("_textures","\x97","\xee","\x64","\xad")},
	{hx::fsBool,(int)offsetof(CubeTexture_obj,mipmapsGenerated),HX_HCSTRING("mipmapsGenerated","\x24","\x10","\x0f","\xac")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *CubeTexture_obj_sStaticStorageInfo = 0;
#endif

static ::String CubeTexture_obj_sMemberFields[] = {
	HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c"),
	HX_HCSTRING("_textures","\x97","\xee","\x64","\xad"),
	HX_HCSTRING("mipmapsGenerated","\x24","\x10","\x0f","\xac"),
	HX_HCSTRING("glTextureAt","\xc9","\xc7","\x03","\x4a"),
	HX_HCSTRING("uploadCompressedTextureFromByteArray","\xce","\xc7","\x86","\xc5"),
	HX_HCSTRING("uploadFromBitmapData","\xa4","\x85","\x65","\x0d"),
	HX_HCSTRING("uploadFromByteArray","\xe6","\x17","\x1b","\xee"),
	::String(null()) };

static void CubeTexture_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CubeTexture_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void CubeTexture_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CubeTexture_obj::__mClass,"__mClass");
};

#endif

hx::Class CubeTexture_obj::__mClass;

void CubeTexture_obj::__register()
{
	hx::Object *dummy = new CubeTexture_obj;
	CubeTexture_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display3D.textures.CubeTexture","\x09","\x1a","\x15","\x3a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = CubeTexture_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(CubeTexture_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< CubeTexture_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = CubeTexture_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CubeTexture_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CubeTexture_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace display3D
} // end namespace textures
