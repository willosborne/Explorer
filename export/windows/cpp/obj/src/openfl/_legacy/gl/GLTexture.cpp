// Generated by Haxe 3.4.5
#include <hxcpp.h>

#ifndef INCLUDED_openfl__legacy_gl_GLObject
#include <openfl/_legacy/gl/GLObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_gl_GLTexture
#include <openfl/_legacy/gl/GLTexture.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_9f614fea56ab1524_9_new,"openfl._legacy.gl.GLTexture","new",0xd729c103,"openfl._legacy.gl.GLTexture.new","openfl/_legacy/gl/GLTexture.hx",9,0x6f86168c)
HX_LOCAL_STACK_FRAME(_hx_pos_9f614fea56ab1524_16_getType,"openfl._legacy.gl.GLTexture","getType",0x8a6a2093,"openfl._legacy.gl.GLTexture.getType","openfl/_legacy/gl/GLTexture.hx",16,0x6f86168c)
namespace openfl{
namespace _legacy{
namespace gl{

void GLTexture_obj::__construct(int version, ::Dynamic id){
            	HX_STACKFRAME(&_hx_pos_9f614fea56ab1524_9_new)
HXDLIN(   9)		super::__construct(version,id);
            	}

Dynamic GLTexture_obj::__CreateEmpty() { return new GLTexture_obj; }

void *GLTexture_obj::_hx_vtable = 0;

Dynamic GLTexture_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< GLTexture_obj > _hx_result = new GLTexture_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool GLTexture_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x00e22919) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x00e22919;
	} else {
		return inClassId==(int)0x2ef17041;
	}
}

::String GLTexture_obj::getType(){
            	HX_STACKFRAME(&_hx_pos_9f614fea56ab1524_16_getType)
HXDLIN(  16)		return HX_("Texture",bb,f0,31,6c);
            	}



hx::ObjectPtr< GLTexture_obj > GLTexture_obj::__new(int version, ::Dynamic id) {
	hx::ObjectPtr< GLTexture_obj > __this = new GLTexture_obj();
	__this->__construct(version,id);
	return __this;
}

hx::ObjectPtr< GLTexture_obj > GLTexture_obj::__alloc(hx::Ctx *_hx_ctx,int version, ::Dynamic id) {
	GLTexture_obj *__this = (GLTexture_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(GLTexture_obj), true, "openfl._legacy.gl.GLTexture"));
	*(void **)__this = GLTexture_obj::_hx_vtable;
	__this->__construct(version,id);
	return __this;
}

GLTexture_obj::GLTexture_obj()
{
}

hx::Val GLTexture_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"getType") ) { return hx::Val( getType_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *GLTexture_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *GLTexture_obj_sStaticStorageInfo = 0;
#endif

static ::String GLTexture_obj_sMemberFields[] = {
	HX_HCSTRING("getType","\x70","\xa2","\x8b","\x1f"),
	::String(null()) };

static void GLTexture_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GLTexture_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void GLTexture_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GLTexture_obj::__mClass,"__mClass");
};

#endif

hx::Class GLTexture_obj::__mClass;

void GLTexture_obj::__register()
{
	hx::Object *dummy = new GLTexture_obj;
	GLTexture_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._legacy.gl.GLTexture","\x91","\x83","\x56","\xda");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = GLTexture_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(GLTexture_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< GLTexture_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = GLTexture_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GLTexture_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GLTexture_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace _legacy
} // end namespace gl
