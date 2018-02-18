// Generated by Haxe 3.4.5
#ifndef INCLUDED_openfl_display3D_textures_TextureBase
#define INCLUDED_openfl_display3D_textures_TextureBase

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
HX_DECLARE_CLASS3(openfl,_legacy,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,events,IEventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,gl,GLFramebuffer)
HX_DECLARE_CLASS3(openfl,_legacy,gl,GLObject)
HX_DECLARE_CLASS3(openfl,_legacy,gl,GLTexture)
HX_DECLARE_CLASS2(openfl,display3D,Context3D)
HX_DECLARE_CLASS3(openfl,display3D,textures,TextureBase)

namespace openfl{
namespace display3D{
namespace textures{


class HXCPP_CLASS_ATTRIBUTES TextureBase_obj : public  ::openfl::_legacy::events::EventDispatcher_obj
{
	public:
		typedef  ::openfl::_legacy::events::EventDispatcher_obj super;
		typedef TextureBase_obj OBJ_;
		TextureBase_obj();

	public:
		enum { _hx_ClassId = 0x19affbf1 };

		void __construct( ::openfl::display3D::Context3D context, ::openfl::_legacy::gl::GLTexture glTexture,hx::Null< int >  __o_width,hx::Null< int >  __o_height);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl.display3D.textures.TextureBase")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"openfl.display3D.textures.TextureBase"); }
		static hx::ObjectPtr< TextureBase_obj > __new( ::openfl::display3D::Context3D context, ::openfl::_legacy::gl::GLTexture glTexture,hx::Null< int >  __o_width,hx::Null< int >  __o_height);
		static hx::ObjectPtr< TextureBase_obj > __alloc(hx::Ctx *_hx_ctx, ::openfl::display3D::Context3D context, ::openfl::_legacy::gl::GLTexture glTexture,hx::Null< int >  __o_width,hx::Null< int >  __o_height);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TextureBase_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("TextureBase","\x6c","\x7e","\xc2","\xdb"); }

		 ::openfl::display3D::Context3D context;
		int height;
		 ::openfl::_legacy::gl::GLFramebuffer frameBuffer;
		 ::openfl::_legacy::gl::GLTexture glTexture;
		int width;
		void dispose();
		::Dynamic dispose_dyn();

};

} // end namespace openfl
} // end namespace display3D
} // end namespace textures

#endif /* INCLUDED_openfl_display3D_textures_TextureBase */ 
