// Generated by Haxe 3.4.5
#ifndef INCLUDED_openfl__legacy_text_TextFormatAlign
#define INCLUDED_openfl__legacy_text_TextFormatAlign

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(openfl,_legacy,text,TextFormatAlign)

namespace openfl{
namespace _legacy{
namespace text{


class HXCPP_CLASS_ATTRIBUTES TextFormatAlign_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef TextFormatAlign_obj OBJ_;
		TextFormatAlign_obj();

	public:
		enum { _hx_ClassId = 0x6a130adc };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="openfl._legacy.text.TextFormatAlign")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"openfl._legacy.text.TextFormatAlign"); }

		hx::ObjectPtr< TextFormatAlign_obj > __new() {
			hx::ObjectPtr< TextFormatAlign_obj > __this = new TextFormatAlign_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< TextFormatAlign_obj > __alloc(hx::Ctx *_hx_ctx) {
			TextFormatAlign_obj *__this = (TextFormatAlign_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(TextFormatAlign_obj), false, "openfl._legacy.text.TextFormatAlign"));
			*(void **)__this = TextFormatAlign_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TextFormatAlign_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("TextFormatAlign","\x41","\x18","\xc8","\xec"); }

		static void __boot();
		static ::String LEFT;
		static ::String RIGHT;
		static ::String CENTER;
		static ::String JUSTIFY;
		static ::String START;
		static ::String END;
};

} // end namespace openfl
} // end namespace _legacy
} // end namespace text

#endif /* INCLUDED_openfl__legacy_text_TextFormatAlign */ 
