// Generated by Haxe 3.4.5
#include <hxcpp.h>

#ifndef INCLUDED_openfl__legacy_gl_GL
#include <openfl/_legacy/gl/GL.h>
#endif
#ifndef INCLUDED_openfl__legacy_gl_GLObject
#include <openfl/_legacy/gl/GLObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_gl_GLProgram
#include <openfl/_legacy/gl/GLProgram.h>
#endif
#ifndef INCLUDED_openfl__legacy_gl_GLShader
#include <openfl/_legacy/gl/GLShader.h>
#endif
#ifndef INCLUDED_openfl_display3D_Context3D
#include <openfl/display3D/Context3D.h>
#endif
#ifndef INCLUDED_openfl_display3D_Program3D
#include <openfl/display3D/Program3D.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_536f681b10c755a2_16_new,"openfl.display3D.Program3D","new",0xcbd1926e,"openfl.display3D.Program3D.new","openfl/display3D/Program3D.hx",16,0x0a985b04)
HX_LOCAL_STACK_FRAME(_hx_pos_536f681b10c755a2_26_dispose,"openfl.display3D.Program3D","dispose",0x556f61ad,"openfl.display3D.Program3D.dispose","openfl/display3D/Program3D.hx",26,0x0a985b04)
HX_LOCAL_STACK_FRAME(_hx_pos_536f681b10c755a2_31_upload,"openfl.display3D.Program3D","upload",0x91a244b3,"openfl.display3D.Program3D.upload","openfl/display3D/Program3D.hx",31,0x0a985b04)
namespace openfl{
namespace display3D{

void Program3D_obj::__construct( ::openfl::display3D::Context3D context, ::openfl::_legacy::gl::GLProgram program){
            	HX_STACKFRAME(&_hx_pos_536f681b10c755a2_16_new)
HXLINE(  18)		this->context = context;
HXLINE(  19)		this->glProgram = program;
            	}

Dynamic Program3D_obj::__CreateEmpty() { return new Program3D_obj; }

void *Program3D_obj::_hx_vtable = 0;

Dynamic Program3D_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Program3D_obj > _hx_result = new Program3D_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool Program3D_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x28394b12;
}

void Program3D_obj::dispose(){
            	HX_STACKFRAME(&_hx_pos_536f681b10c755a2_26_dispose)
HXDLIN(  26)		this->context->_hx___deleteProgram(hx::ObjectPtr<OBJ_>(this));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Program3D_obj,dispose,(void))

void Program3D_obj::upload( ::openfl::_legacy::gl::GLShader vertexShader, ::openfl::_legacy::gl::GLShader fragmentShader){
            	HX_STACKFRAME(&_hx_pos_536f681b10c755a2_31_upload)
HXLINE(  35)		{
HXLINE(  35)			 ::openfl::_legacy::gl::GLProgram program = this->glProgram;
HXDLIN(  35)			program->attach(vertexShader);
HXDLIN(  35)			::openfl::_legacy::gl::GL_obj::lime_gl_attach_shader(program->id,vertexShader->id);
            		}
HXLINE(  36)		{
HXLINE(  36)			 ::openfl::_legacy::gl::GLProgram program1 = this->glProgram;
HXDLIN(  36)			program1->attach(fragmentShader);
HXDLIN(  36)			::openfl::_legacy::gl::GL_obj::lime_gl_attach_shader(program1->id,fragmentShader->id);
            		}
HXLINE(  37)		::openfl::_legacy::gl::GL_obj::lime_gl_link_program(this->glProgram->id);
HXLINE(  39)		if ((( (int)(::openfl::_legacy::gl::GL_obj::lime_gl_get_program_parameter(this->glProgram->id,(int)35714)) ) == (int)0)) {
HXLINE(  41)			::String result = ( (::String)(::openfl::_legacy::gl::GL_obj::lime_gl_get_program_info_log(this->glProgram->id)) );
HXLINE(  42)			if ((result != HX_("",00,00,00,00))) {
HXLINE(  42)				HX_STACK_DO_THROW(result);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Program3D_obj,upload,(void))


hx::ObjectPtr< Program3D_obj > Program3D_obj::__new( ::openfl::display3D::Context3D context, ::openfl::_legacy::gl::GLProgram program) {
	hx::ObjectPtr< Program3D_obj > __this = new Program3D_obj();
	__this->__construct(context,program);
	return __this;
}

hx::ObjectPtr< Program3D_obj > Program3D_obj::__alloc(hx::Ctx *_hx_ctx, ::openfl::display3D::Context3D context, ::openfl::_legacy::gl::GLProgram program) {
	Program3D_obj *__this = (Program3D_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Program3D_obj), true, "openfl.display3D.Program3D"));
	*(void **)__this = Program3D_obj::_hx_vtable;
	__this->__construct(context,program);
	return __this;
}

Program3D_obj::Program3D_obj()
{
}

void Program3D_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Program3D);
	HX_MARK_MEMBER_NAME(context,"context");
	HX_MARK_MEMBER_NAME(glProgram,"glProgram");
	HX_MARK_END_CLASS();
}

void Program3D_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(context,"context");
	HX_VISIT_MEMBER_NAME(glProgram,"glProgram");
}

hx::Val Program3D_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"upload") ) { return hx::Val( upload_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"context") ) { return hx::Val( context ); }
		if (HX_FIELD_EQ(inName,"dispose") ) { return hx::Val( dispose_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"glProgram") ) { return hx::Val( glProgram ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val Program3D_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"context") ) { context=inValue.Cast<  ::openfl::display3D::Context3D >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"glProgram") ) { glProgram=inValue.Cast<  ::openfl::_legacy::gl::GLProgram >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Program3D_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("context","\xef","\x95","\x77","\x19"));
	outFields->push(HX_HCSTRING("glProgram","\xdf","\xd6","\xb3","\xc1"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo Program3D_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::display3D::Context3D*/ ,(int)offsetof(Program3D_obj,context),HX_HCSTRING("context","\xef","\x95","\x77","\x19")},
	{hx::fsObject /*::openfl::_legacy::gl::GLProgram*/ ,(int)offsetof(Program3D_obj,glProgram),HX_HCSTRING("glProgram","\xdf","\xd6","\xb3","\xc1")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *Program3D_obj_sStaticStorageInfo = 0;
#endif

static ::String Program3D_obj_sMemberFields[] = {
	HX_HCSTRING("context","\xef","\x95","\x77","\x19"),
	HX_HCSTRING("glProgram","\xdf","\xd6","\xb3","\xc1"),
	HX_HCSTRING("dispose","\x9f","\x80","\x4c","\xbb"),
	HX_HCSTRING("upload","\x01","\xca","\x59","\x8c"),
	::String(null()) };

static void Program3D_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Program3D_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Program3D_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Program3D_obj::__mClass,"__mClass");
};

#endif

hx::Class Program3D_obj::__mClass;

void Program3D_obj::__register()
{
	hx::Object *dummy = new Program3D_obj;
	Program3D_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display3D.Program3D","\x7c","\x83","\x68","\xf5");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Program3D_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Program3D_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Program3D_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Program3D_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Program3D_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Program3D_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace display3D
