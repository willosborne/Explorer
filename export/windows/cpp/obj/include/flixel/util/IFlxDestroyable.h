// Generated by Haxe 3.4.5
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#define INCLUDED_flixel_util_IFlxDestroyable

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)

namespace flixel{
namespace util{


class HXCPP_CLASS_ATTRIBUTES IFlxDestroyable_obj {
	public:
		typedef hx::Object super;
		HX_DO_INTERFACE_RTTI;

		void (hx::Object :: *_hx_destroy)(); 
		static inline void destroy( ::Dynamic _hx_) {
			(_hx_.mPtr->*( static_cast< ::flixel::util::IFlxDestroyable_obj *>(_hx_.mPtr->_hx_getInterface(0xd4fe2fcd)))->_hx_destroy)();
		}
};

} // end namespace flixel
} // end namespace util

#endif /* INCLUDED_flixel_util_IFlxDestroyable */ 
