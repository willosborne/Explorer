// Generated by Haxe 3.4.5
#ifndef INCLUDED_flixel_effects_particles_FlxEmitterMode
#define INCLUDED_flixel_effects_particles_FlxEmitterMode

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(flixel,effects,particles,FlxEmitterMode)
namespace flixel{
namespace effects{
namespace particles{


class FlxEmitterMode_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef FlxEmitterMode_obj OBJ_;

	public:
		FlxEmitterMode_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_HCSTRING("flixel.effects.particles.FlxEmitterMode","\x1e","\xd4","\x79","\xe9"); }
		::String __ToString() const { return HX_HCSTRING("FlxEmitterMode.","\x8f","\xea","\x6a","\x22") + _hx_tag; }

		static ::flixel::effects::particles::FlxEmitterMode CIRCLE;
		static inline ::flixel::effects::particles::FlxEmitterMode CIRCLE_dyn() { return CIRCLE; }
		static ::flixel::effects::particles::FlxEmitterMode SQUARE;
		static inline ::flixel::effects::particles::FlxEmitterMode SQUARE_dyn() { return SQUARE; }
};

} // end namespace flixel
} // end namespace effects
} // end namespace particles

#endif /* INCLUDED_flixel_effects_particles_FlxEmitterMode */ 
