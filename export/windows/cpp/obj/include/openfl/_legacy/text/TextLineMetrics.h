// Generated by Haxe 3.4.5
#ifndef INCLUDED_openfl__legacy_text_TextLineMetrics
#define INCLUDED_openfl__legacy_text_TextLineMetrics

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_69f5fc14b8fec595_15_new)
HX_DECLARE_CLASS3(openfl,_legacy,text,TextLineMetrics)

namespace openfl{
namespace _legacy{
namespace text{


class HXCPP_CLASS_ATTRIBUTES TextLineMetrics_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef TextLineMetrics_obj OBJ_;
		TextLineMetrics_obj();

	public:
		enum { _hx_ClassId = 0x5a459a45 };

		void __construct(hx::Null< Float >  __o_x,hx::Null< Float >  __o_width,hx::Null< Float >  __o_height,hx::Null< Float >  __o_ascent,hx::Null< Float >  __o_descent,hx::Null< Float >  __o_leading);
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="openfl._legacy.text.TextLineMetrics")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"openfl._legacy.text.TextLineMetrics"); }

		hx::ObjectPtr< TextLineMetrics_obj > __new(hx::Null< Float >  __o_x,hx::Null< Float >  __o_width,hx::Null< Float >  __o_height,hx::Null< Float >  __o_ascent,hx::Null< Float >  __o_descent,hx::Null< Float >  __o_leading) {
			hx::ObjectPtr< TextLineMetrics_obj > __this = new TextLineMetrics_obj();
			__this->__construct(__o_x,__o_width,__o_height,__o_ascent,__o_descent,__o_leading);
			return __this;
		}

		static hx::ObjectPtr< TextLineMetrics_obj > __alloc(hx::Ctx *_hx_ctx,hx::Null< Float >  __o_x,hx::Null< Float >  __o_width,hx::Null< Float >  __o_height,hx::Null< Float >  __o_ascent,hx::Null< Float >  __o_descent,hx::Null< Float >  __o_leading) {
			TextLineMetrics_obj *__this = (TextLineMetrics_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(TextLineMetrics_obj), false, "openfl._legacy.text.TextLineMetrics"));
			*(void **)__this = TextLineMetrics_obj::_hx_vtable;
{
Float x = __o_x.Default(0);
Float width = __o_width.Default(0);
Float height = __o_height.Default(0);
Float ascent = __o_ascent.Default(0);
Float descent = __o_descent.Default(0);
Float leading = __o_leading.Default(0);
            	HX_STACKFRAME(&_hx_pos_69f5fc14b8fec595_15_new)
HXLINE(  17)		( ( ::openfl::_legacy::text::TextLineMetrics)(__this) )->x = x;
HXLINE(  18)		( ( ::openfl::_legacy::text::TextLineMetrics)(__this) )->width = width;
HXLINE(  19)		( ( ::openfl::_legacy::text::TextLineMetrics)(__this) )->height = height;
HXLINE(  20)		( ( ::openfl::_legacy::text::TextLineMetrics)(__this) )->ascent = ascent;
HXLINE(  21)		( ( ::openfl::_legacy::text::TextLineMetrics)(__this) )->descent = descent;
HXLINE(  22)		( ( ::openfl::_legacy::text::TextLineMetrics)(__this) )->leading = leading;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TextLineMetrics_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("TextLineMetrics","\xe2","\xc0","\x45","\x7d"); }

		Float ascent;
		Float descent;
		Float height;
		Float leading;
		Float width;
		Float x;
};

} // end namespace openfl
} // end namespace _legacy
} // end namespace text

#endif /* INCLUDED_openfl__legacy_text_TextLineMetrics */ 
