// Generated by Haxe 4.1.5
#ifndef INCLUDED_gameFolder_gameObjects_Stage
#define INCLUDED_gameFolder_gameObjects_Stage

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,math,FlxPoint)
HX_DECLARE_CLASS2(flixel,_hx_system,FlxSound)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxPooled)
HX_DECLARE_CLASS2(gameFolder,gameObjects,Character)
HX_DECLARE_CLASS2(gameFolder,gameObjects,Stage)
HX_DECLARE_CLASS3(gameFolder,gameObjects,background,BackgroundGirls)

namespace gameFolder{
namespace gameObjects{


class HXCPP_CLASS_ATTRIBUTES Stage_obj : public  ::flixel::group::FlxTypedGroup_obj
{
	public:
		typedef  ::flixel::group::FlxTypedGroup_obj super;
		typedef Stage_obj OBJ_;
		Stage_obj();

	public:
		enum { _hx_ClassId = 0x26b27adc };

		void __construct(::String curStage);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="gameFolder.gameObjects.Stage")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"gameFolder.gameObjects.Stage"); }
		static ::hx::ObjectPtr< Stage_obj > __new(::String curStage);
		static ::hx::ObjectPtr< Stage_obj > __alloc(::hx::Ctx *_hx_ctx,::String curStage);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Stage_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Stage",9e,da,38,17); }

		 ::flixel::FlxSprite halloweenBG;
		 ::flixel::group::FlxTypedGroup phillyCityLights;
		 ::flixel::FlxSprite phillyTrain;
		 ::flixel::_hx_system::FlxSound trainSound;
		 ::flixel::FlxSprite limo;
		 ::flixel::group::FlxTypedGroup grpLimoDancers;
		 ::flixel::FlxSprite fastCar;
		 ::flixel::FlxSprite upperBoppers;
		 ::flixel::FlxSprite bottomBoppers;
		 ::flixel::FlxSprite santa;
		 ::gameFolder::gameObjects::background::BackgroundGirls bgGirls;
		Float defaultCamZoom;
		::String curStage;
		Float daPixelZoom;
		::String returnGFtype(::String curStage);
		::Dynamic returnGFtype_dyn();

		void dadPosition(::String curStage, ::gameFolder::gameObjects::Character dad, ::gameFolder::gameObjects::Character gf, ::flixel::math::FlxPoint camPos,::String songPlayer2);
		::Dynamic dadPosition_dyn();

		void repositionPlayers(::String curStage, ::gameFolder::gameObjects::Character boyfriend, ::gameFolder::gameObjects::Character dad, ::gameFolder::gameObjects::Character gf);
		::Dynamic repositionPlayers_dyn();

		void stageUpdate();
		::Dynamic stageUpdate_dyn();

};

} // end namespace gameFolder
} // end namespace gameObjects

#endif /* INCLUDED_gameFolder_gameObjects_Stage */ 
