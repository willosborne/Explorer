// Generated by Haxe 3.4.5
#ifndef INCLUDED_openfl__legacy_media_InternalAudioType
#define INCLUDED_openfl__legacy_media_InternalAudioType

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(openfl,_legacy,media,InternalAudioType)
namespace openfl{
namespace _legacy{
namespace media{


class InternalAudioType_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef InternalAudioType_obj OBJ_;

	public:
		InternalAudioType_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_HCSTRING("openfl._legacy.media.InternalAudioType","\x25","\xb2","\x5a","\x5e"); }
		::String __ToString() const { return HX_HCSTRING("InternalAudioType.","\x3b","\x7d","\x74","\x2e") + _hx_tag; }

		static ::openfl::_legacy::media::InternalAudioType MUSIC;
		static inline ::openfl::_legacy::media::InternalAudioType MUSIC_dyn() { return MUSIC; }
		static ::openfl::_legacy::media::InternalAudioType SOUND;
		static inline ::openfl::_legacy::media::InternalAudioType SOUND_dyn() { return SOUND; }
		static ::openfl::_legacy::media::InternalAudioType UNKNOWN;
		static inline ::openfl::_legacy::media::InternalAudioType UNKNOWN_dyn() { return UNKNOWN; }
};

} // end namespace openfl
} // end namespace _legacy
} // end namespace media

#endif /* INCLUDED_openfl__legacy_media_InternalAudioType */ 
