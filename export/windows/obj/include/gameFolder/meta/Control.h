// Generated by Haxe 4.1.5
#ifndef INCLUDED_gameFolder_meta_Control
#define INCLUDED_gameFolder_meta_Control

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(gameFolder,meta,Control)
namespace gameFolder{
namespace meta{


class Control_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef Control_obj OBJ_;

	public:
		Control_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("gameFolder.meta.Control",82,31,c5,7e); }
		::String __ToString() const { return HX_("Control.",51,42,6e,11) + _hx_tag; }

		static ::gameFolder::meta::Control ACCEPT;
		static inline ::gameFolder::meta::Control ACCEPT_dyn() { return ACCEPT; }
		static ::gameFolder::meta::Control BACK;
		static inline ::gameFolder::meta::Control BACK_dyn() { return BACK; }
		static ::gameFolder::meta::Control CHEAT;
		static inline ::gameFolder::meta::Control CHEAT_dyn() { return CHEAT; }
		static ::gameFolder::meta::Control DOWN;
		static inline ::gameFolder::meta::Control DOWN_dyn() { return DOWN; }
		static ::gameFolder::meta::Control LEFT;
		static inline ::gameFolder::meta::Control LEFT_dyn() { return LEFT; }
		static ::gameFolder::meta::Control PAUSE;
		static inline ::gameFolder::meta::Control PAUSE_dyn() { return PAUSE; }
		static ::gameFolder::meta::Control RESET;
		static inline ::gameFolder::meta::Control RESET_dyn() { return RESET; }
		static ::gameFolder::meta::Control RIGHT;
		static inline ::gameFolder::meta::Control RIGHT_dyn() { return RIGHT; }
		static ::gameFolder::meta::Control UP;
		static inline ::gameFolder::meta::Control UP_dyn() { return UP; }
};

} // end namespace gameFolder
} // end namespace meta

#endif /* INCLUDED_gameFolder_meta_Control */ 
