// Generated by Haxe 3.4.5
#ifndef INCLUDED_flixel_system_debug_completion_CompletionList
#define INCLUDED_flixel_system_debug_completion_CompletionList

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl__legacy_display_Sprite
#include <openfl/_legacy/display/Sprite.h>
#endif
HX_DECLARE_CLASS4(flixel,_hx_system,debug,completion,CompletionList)
HX_DECLARE_CLASS4(flixel,_hx_system,debug,completion,CompletionListEntry)
HX_DECLARE_CLASS4(flixel,_hx_system,debug,completion,CompletionListScrollBar)
HX_DECLARE_CLASS3(openfl,_legacy,display,DisplayObject)
HX_DECLARE_CLASS3(openfl,_legacy,display,DisplayObjectContainer)
HX_DECLARE_CLASS3(openfl,_legacy,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,_legacy,display,InteractiveObject)
HX_DECLARE_CLASS3(openfl,_legacy,display,Sprite)
HX_DECLARE_CLASS3(openfl,_legacy,events,Event)
HX_DECLARE_CLASS3(openfl,_legacy,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,events,IEventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,events,KeyboardEvent)

namespace flixel{
namespace _hx_system{
namespace debug{
namespace completion{


class HXCPP_CLASS_ATTRIBUTES CompletionList_obj : public  ::openfl::_legacy::display::Sprite_obj
{
	public:
		typedef  ::openfl::_legacy::display::Sprite_obj super;
		typedef CompletionList_obj OBJ_;
		CompletionList_obj();

	public:
		enum { _hx_ClassId = 0x3815113e };

		void __construct(int capacity);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.system.debug.completion.CompletionList")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"flixel.system.debug.completion.CompletionList"); }
		static hx::ObjectPtr< CompletionList_obj > __new(int capacity);
		static hx::ObjectPtr< CompletionList_obj > __alloc(hx::Ctx *_hx_ctx,int capacity);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~CompletionList_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("CompletionList","\xba","\x65","\xb3","\xcd"); }

		 ::Dynamic completed;
		Dynamic completed_dyn() { return completed;}
		 ::Dynamic selectionChanged;
		Dynamic selectionChanged_dyn() { return selectionChanged;}
		 ::Dynamic closed;
		Dynamic closed_dyn() { return closed;}
		::String filter;
		::Array< ::String > items;
		::Array< ::Dynamic> entries;
		::Array< ::String > originalItems;
		int selectedIndex;
		int lowerVisibleIndex;
		int upperVisibleIndex;
		 ::flixel::_hx_system::debug::completion::CompletionListScrollBar scrollBar;
		int actualHeight;
		void show(Float x,::Array< ::String > items);
		::Dynamic show_dyn();

		void setY(Float y);
		::Dynamic setY_dyn();

		void close();
		::Dynamic close_dyn();

		void createPopupEntries(int amount);
		::Dynamic createPopupEntries_dyn();

		void createScrollBar();
		::Dynamic createScrollBar_dyn();

		void onKeyDown( ::openfl::_legacy::events::KeyboardEvent e);
		::Dynamic onKeyDown_dyn();

		void updateIndices(int modifier);
		::Dynamic updateIndices_dyn();

		int bound(int index);
		::Dynamic bound_dyn();

		void updateEntries();
		::Dynamic updateEntries_dyn();

		void updateLabels();
		::Dynamic updateLabels_dyn();

		void updateSelectedItem();
		::Dynamic updateSelectedItem_dyn();

		void setItems(::Array< ::String > items);
		::Dynamic setItems_dyn();

		::Array< ::String > filterItems(::String filter);
		::Dynamic filterItems_dyn();

		::Array< ::String > sortItems(::String filter,::Array< ::String > items);
		::Dynamic sortItems_dyn();

		int startsWithExt(::String s,::String start);
		::Dynamic startsWithExt_dyn();

		::String set_filter(::String filter);
		::Dynamic set_filter_dyn();

};

} // end namespace flixel
} // end namespace system
} // end namespace debug
} // end namespace completion

#endif /* INCLUDED_flixel_system_debug_completion_CompletionList */ 
