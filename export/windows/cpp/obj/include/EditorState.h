// Generated by Haxe 3.4.5
#ifndef INCLUDED_EditorState
#define INCLUDED_EditorState

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
HX_DECLARE_CLASS0(EditorState)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,input,IFlxInput)
HX_DECLARE_CLASS2(flixel,math,FlxRect)
HX_DECLARE_CLASS2(flixel,text,FlxText)
HX_DECLARE_CLASS2(flixel,tile,FlxBaseTilemap)
HX_DECLARE_CLASS2(flixel,tile,FlxTilemap)
HX_DECLARE_CLASS2(flixel,ui,FlxBitmapTextButton)
HX_DECLARE_CLASS2(flixel,ui,FlxTypedButton_flixel_text_FlxBitmapText)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxPooled)



class HXCPP_CLASS_ATTRIBUTES EditorState_obj : public  ::flixel::FlxState_obj
{
	public:
		typedef  ::flixel::FlxState_obj super;
		typedef EditorState_obj OBJ_;
		EditorState_obj();

	public:
		enum { _hx_ClassId = 0x5a2dad3c };

		void __construct( ::Dynamic MaxSize);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="EditorState")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"EditorState"); }
		static hx::ObjectPtr< EditorState_obj > __new( ::Dynamic MaxSize);
		static hx::ObjectPtr< EditorState_obj > __alloc(hx::Ctx *_hx_ctx, ::Dynamic MaxSize);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~EditorState_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("EditorState","\x04","\x09","\xa0","\xfc"); }

		 ::flixel::text::FlxText titleText;
		 ::flixel::tile::FlxTilemap tilesBG;
		 ::flixel::tile::FlxTilemap tilesFG;
		 ::flixel::tile::FlxTilemap tilesCollision;
		::Array< ::Dynamic> tilemaps;
		 ::flixel::group::FlxTypedGroup objectsBG;
		 ::flixel::group::FlxTypedGroup objects;
		 ::flixel::group::FlxTypedGroup objectsFG;
		::Array< ::Dynamic> objectGroups;
		 ::flixel::FlxSprite currentTileset;
		 ::flixel::FlxSprite currentTileReticle;
		 ::flixel::FlxSprite tilePlacementReticle;
		 ::flixel::math::FlxRect levelRect;
		int currentTileIndex;
		 ::flixel::tile::FlxTilemap activeTilemap;
		 ::flixel::group::FlxTypedGroup activeObjectGroup;
		 ::flixel::ui::FlxBitmapTextButton layer0Button;
		 ::flixel::ui::FlxBitmapTextButton layer1Button;
		 ::flixel::ui::FlxBitmapTextButton layer2Button;
		 ::flixel::text::FlxText layer0Label;
		 ::flixel::text::FlxText layer1Label;
		 ::flixel::text::FlxText layer2Label;
		::Array< ::Dynamic> layerLabels;
		 ::flixel::FlxSprite background;
		int activeLayer;
		 ::Dynamic layerPicker;
		int roomX;
		int roomY;
		void create();

		void setActiveLayer( ::flixel::text::FlxText label,int layer);
		::Dynamic setActiveLayer_dyn();

		void saveLevel();
		::Dynamic saveLevel_dyn();

		void update(Float elapsed);

};


#endif /* INCLUDED_EditorState */ 
