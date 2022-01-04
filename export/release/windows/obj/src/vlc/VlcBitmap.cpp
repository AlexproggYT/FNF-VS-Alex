#include <hxcpp.h>

#ifndef INCLUDED_13fd500b2aab5f87
#define INCLUDED_13fd500b2aab5f87
#include "LibVLC.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_openfl_Lib
#include <openfl/Lib.h>
#endif
#ifndef INCLUDED_openfl_display_Bitmap
#include <openfl/display/Bitmap.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_MovieClip
#include <openfl/display/MovieClip.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_display3D_textures_RectangleTexture
#include <openfl/display3D/textures/RectangleTexture.h>
#endif
#ifndef INCLUDED_openfl_display3D_textures_TextureBase
#include <openfl/display3D/textures/TextureBase.h>
#endif
#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
#ifndef INCLUDED_openfl_utils_ByteArrayData
#include <openfl/utils/ByteArrayData.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataInput
#include <openfl/utils/IDataInput.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataOutput
#include <openfl/utils/IDataOutput.h>
#endif
#ifndef INCLUDED_openfl_utils__ByteArray_ByteArray_Impl_
#include <openfl/utils/_ByteArray/ByteArray_Impl_.h>
#endif
#ifndef INCLUDED_vlc_VlcBitmap
#include <vlc/VlcBitmap.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_dc214fe6c82a61ac_27_new,"vlc.VlcBitmap","new",0x1a88a34d,"vlc.VlcBitmap.new","vlc/VlcBitmap.hx",27,0xfb408244)
HX_LOCAL_STACK_FRAME(_hx_pos_dc214fe6c82a61ac_100_mThread,"vlc.VlcBitmap","mThread",0x57eecc84,"vlc.VlcBitmap.mThread","vlc/VlcBitmap.hx",100,0xfb408244)
HX_LOCAL_STACK_FRAME(_hx_pos_dc214fe6c82a61ac_108_init,"vlc.VlcBitmap","init",0x19bef783,"vlc.VlcBitmap.init","vlc/VlcBitmap.hx",108,0xfb408244)
HX_LOCAL_STACK_FRAME(_hx_pos_dc214fe6c82a61ac_113_onAddedToStage,"vlc.VlcBitmap","onAddedToStage",0x86b56c55,"vlc.VlcBitmap.onAddedToStage","vlc/VlcBitmap.hx",113,0xfb408244)
HX_LOCAL_STACK_FRAME(_hx_pos_dc214fe6c82a61ac_124_play,"vlc.VlcBitmap","play",0x1e5dea67,"vlc.VlcBitmap.play","vlc/VlcBitmap.hx",124,0xfb408244)
HX_LOCAL_STACK_FRAME(_hx_pos_dc214fe6c82a61ac_151_stop,"vlc.VlcBitmap","stop",0x205fac75,"vlc.VlcBitmap.stop","vlc/VlcBitmap.hx",151,0xfb408244)
HX_LOCAL_STACK_FRAME(_hx_pos_dc214fe6c82a61ac_164_pause,"vlc.VlcBitmap","pause",0x6c98ff23,"vlc.VlcBitmap.pause","vlc/VlcBitmap.hx",164,0xfb408244)
HX_LOCAL_STACK_FRAME(_hx_pos_dc214fe6c82a61ac_174_resume,"vlc.VlcBitmap","resume",0xb24668e0,"vlc.VlcBitmap.resume","vlc/VlcBitmap.hx",174,0xfb408244)
HX_LOCAL_STACK_FRAME(_hx_pos_dc214fe6c82a61ac_184_seek,"vlc.VlcBitmap","seek",0x205441eb,"vlc.VlcBitmap.seek","vlc/VlcBitmap.hx",184,0xfb408244)
HX_LOCAL_STACK_FRAME(_hx_pos_dc214fe6c82a61ac_195_getFPS,"vlc.VlcBitmap","getFPS",0x4cdee426,"vlc.VlcBitmap.getFPS","vlc/VlcBitmap.hx",195,0xfb408244)
HX_LOCAL_STACK_FRAME(_hx_pos_dc214fe6c82a61ac_207_getTime,"vlc.VlcBitmap","getTime",0xff7cc930,"vlc.VlcBitmap.getTime","vlc/VlcBitmap.hx",207,0xfb408244)
HX_LOCAL_STACK_FRAME(_hx_pos_dc214fe6c82a61ac_221_checkFlags,"vlc.VlcBitmap","checkFlags",0xbc194212,"vlc.VlcBitmap.checkFlags","vlc/VlcBitmap.hx",221,0xfb408244)
HX_LOCAL_STACK_FRAME(_hx_pos_dc214fe6c82a61ac_288_onResize,"vlc.VlcBitmap","onResize",0x05cec266,"vlc.VlcBitmap.onResize","vlc/VlcBitmap.hx",288,0xfb408244)
HX_LOCAL_STACK_FRAME(_hx_pos_dc214fe6c82a61ac_296_videoInitComplete,"vlc.VlcBitmap","videoInitComplete",0x9e0a6cb1,"vlc.VlcBitmap.videoInitComplete","vlc/VlcBitmap.hx",296,0xfb408244)
HX_LOCAL_STACK_FRAME(_hx_pos_dc214fe6c82a61ac_347_vLoop,"vlc.VlcBitmap","vLoop",0xd31a6e27,"vlc.VlcBitmap.vLoop","vlc/VlcBitmap.hx",347,0xfb408244)
HX_LOCAL_STACK_FRAME(_hx_pos_dc214fe6c82a61ac_357_render,"vlc.VlcBitmap","render",0xaeeb6a89,"vlc.VlcBitmap.render","vlc/VlcBitmap.hx",357,0xfb408244)
HX_LOCAL_STACK_FRAME(_hx_pos_dc214fe6c82a61ac_399_setVolume,"vlc.VlcBitmap","setVolume",0x92f7e1c9,"vlc.VlcBitmap.setVolume","vlc/VlcBitmap.hx",399,0xfb408244)
HX_LOCAL_STACK_FRAME(_hx_pos_dc214fe6c82a61ac_407_getVolume,"vlc.VlcBitmap","getVolume",0xafa6f5bd,"vlc.VlcBitmap.getVolume","vlc/VlcBitmap.hx",407,0xfb408244)
HX_LOCAL_STACK_FRAME(_hx_pos_dc214fe6c82a61ac_420_statusOnOpening,"vlc.VlcBitmap","statusOnOpening",0x6f7940d4,"vlc.VlcBitmap.statusOnOpening","vlc/VlcBitmap.hx",420,0xfb408244)
HX_LOCAL_STACK_FRAME(_hx_pos_dc214fe6c82a61ac_425_statusOnBuffering,"vlc.VlcBitmap","statusOnBuffering",0x446b045e,"vlc.VlcBitmap.statusOnBuffering","vlc/VlcBitmap.hx",425,0xfb408244)
HX_LOCAL_STACK_FRAME(_hx_pos_dc214fe6c82a61ac_434_statusOnPlaying,"vlc.VlcBitmap","statusOnPlaying",0xb94c4cea,"vlc.VlcBitmap.statusOnPlaying","vlc/VlcBitmap.hx",434,0xfb408244)
HX_LOCAL_STACK_FRAME(_hx_pos_dc214fe6c82a61ac_443_statusOnPaused,"vlc.VlcBitmap","statusOnPaused",0xfb3546b2,"vlc.VlcBitmap.statusOnPaused","vlc/VlcBitmap.hx",443,0xfb408244)
HX_LOCAL_STACK_FRAME(_hx_pos_dc214fe6c82a61ac_452_statusOnStopped,"vlc.VlcBitmap","statusOnStopped",0x72960f89,"vlc.VlcBitmap.statusOnStopped","vlc/VlcBitmap.hx",452,0xfb408244)
HX_LOCAL_STACK_FRAME(_hx_pos_dc214fe6c82a61ac_461_statusOnEndReached,"vlc.VlcBitmap","statusOnEndReached",0x95a077fb,"vlc.VlcBitmap.statusOnEndReached","vlc/VlcBitmap.hx",461,0xfb408244)
HX_LOCAL_STACK_FRAME(_hx_pos_dc214fe6c82a61ac_471_statusOnTimeChanged,"vlc.VlcBitmap","statusOnTimeChanged",0xef6903e3,"vlc.VlcBitmap.statusOnTimeChanged","vlc/VlcBitmap.hx",471,0xfb408244)
HX_LOCAL_STACK_FRAME(_hx_pos_dc214fe6c82a61ac_478_statusOnPositionChanged,"vlc.VlcBitmap","statusOnPositionChanged",0x022ca8c7,"vlc.VlcBitmap.statusOnPositionChanged","vlc/VlcBitmap.hx",478,0xfb408244)
HX_LOCAL_STACK_FRAME(_hx_pos_dc214fe6c82a61ac_483_statusOnSeekableChanged,"vlc.VlcBitmap","statusOnSeekableChanged",0x8b2cc97e,"vlc.VlcBitmap.statusOnSeekableChanged","vlc/VlcBitmap.hx",483,0xfb408244)
HX_LOCAL_STACK_FRAME(_hx_pos_dc214fe6c82a61ac_488_statusOnForward,"vlc.VlcBitmap","statusOnForward",0x14ff1f41,"vlc.VlcBitmap.statusOnForward","vlc/VlcBitmap.hx",488,0xfb408244)
HX_LOCAL_STACK_FRAME(_hx_pos_dc214fe6c82a61ac_492_statusOnBackward,"vlc.VlcBitmap","statusOnBackward",0x459a6ae7,"vlc.VlcBitmap.statusOnBackward","vlc/VlcBitmap.hx",492,0xfb408244)
HX_LOCAL_STACK_FRAME(_hx_pos_dc214fe6c82a61ac_496_onDisplay,"vlc.VlcBitmap","onDisplay",0x66f22590,"vlc.VlcBitmap.onDisplay","vlc/VlcBitmap.hx",496,0xfb408244)
HX_LOCAL_STACK_FRAME(_hx_pos_dc214fe6c82a61ac_501_statusOnError,"vlc.VlcBitmap","statusOnError",0x2c0a7244,"vlc.VlcBitmap.statusOnError","vlc/VlcBitmap.hx",501,0xfb408244)
HX_LOCAL_STACK_FRAME(_hx_pos_dc214fe6c82a61ac_512_get_width,"vlc.VlcBitmap","get_width",0xe209550a,"vlc.VlcBitmap.get_width","vlc/VlcBitmap.hx",512,0xfb408244)
HX_LOCAL_STACK_FRAME(_hx_pos_dc214fe6c82a61ac_516_set_width,"vlc.VlcBitmap","set_width",0xc55a4116,"vlc.VlcBitmap.set_width","vlc/VlcBitmap.hx",516,0xfb408244)
HX_LOCAL_STACK_FRAME(_hx_pos_dc214fe6c82a61ac_523_get_height,"vlc.VlcBitmap","get_height",0x9c708c63,"vlc.VlcBitmap.get_height","vlc/VlcBitmap.hx",523,0xfb408244)
HX_LOCAL_STACK_FRAME(_hx_pos_dc214fe6c82a61ac_527_set_height,"vlc.VlcBitmap","set_height",0x9fee2ad7,"vlc.VlcBitmap.set_height","vlc/VlcBitmap.hx",527,0xfb408244)
HX_LOCAL_STACK_FRAME(_hx_pos_dc214fe6c82a61ac_534_get_volume,"vlc.VlcBitmap","get_volume",0xf977ae56,"vlc.VlcBitmap.get_volume","vlc/VlcBitmap.hx",534,0xfb408244)
HX_LOCAL_STACK_FRAME(_hx_pos_dc214fe6c82a61ac_538_set_volume,"vlc.VlcBitmap","set_volume",0xfcf54cca,"vlc.VlcBitmap.set_volume","vlc/VlcBitmap.hx",538,0xfb408244)
HX_LOCAL_STACK_FRAME(_hx_pos_dc214fe6c82a61ac_548_dispose,"vlc.VlcBitmap","dispose",0x9b49ce0c,"vlc.VlcBitmap.dispose","vlc/VlcBitmap.hx",548,0xfb408244)
#include "LibVLC.cpp"
namespace vlc{

void VlcBitmap_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_dc214fe6c82a61ac_27_new)
HXLINE(  48)		this->disposeOnStop = false;
HXLINE(  44)		this->volume = ((Float)1);
HXLINE(  38)		this->repeat = 0;
HXLINE(  91)		super::__construct(null(),null(),true);
HXLINE(  94)		this->init();
            	}

Dynamic VlcBitmap_obj::__CreateEmpty() { return new VlcBitmap_obj; }

void *VlcBitmap_obj::_hx_vtable = 0;

Dynamic VlcBitmap_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< VlcBitmap_obj > _hx_result = new VlcBitmap_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool VlcBitmap_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x4cc42801) {
		if (inClassId<=(int)0x0c89e854) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0c89e854;
		} else {
			return inClassId==(int)0x4cc42801;
		}
	} else {
		return inClassId==(int)0x6b353933 || inClassId==(int)0x741e98cf;
	}
}

void VlcBitmap_obj::mThread(){
            	HX_STACKFRAME(&_hx_pos_dc214fe6c82a61ac_100_mThread)
HXDLIN( 100)		this->init();
            	}


HX_DEFINE_DYNAMIC_FUNC0(VlcBitmap_obj,mThread,(void))

void VlcBitmap_obj::init(){
            	HX_STACKFRAME(&_hx_pos_dc214fe6c82a61ac_108_init)
HXDLIN( 108)		this->addEventListener(HX_("addedToStage",63,22,55,0c),this->onAddedToStage_dyn(),null(),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(VlcBitmap_obj,init,(void))

void VlcBitmap_obj::onAddedToStage( ::openfl::events::Event e){
            	HX_STACKFRAME(&_hx_pos_dc214fe6c82a61ac_113_onAddedToStage)
HXLINE( 114)		this->removeEventListener(HX_("addedToStage",63,22,55,0c),this->onAddedToStage_dyn(),null());
HXLINE( 116)		this->libvlc = LibVLC::create();
HXLINE( 117)		this->stage->addEventListener(HX_("resize",f4,59,7b,08),this->onResize_dyn(),null(),null(),null());
HXLINE( 118)		this->stage->addEventListener(HX_("enterFrame",f5,03,50,02),this->vLoop_dyn(),null(),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(VlcBitmap_obj,onAddedToStage,(void))

void VlcBitmap_obj::play(::String source){
            	HX_STACKFRAME(&_hx_pos_dc214fe6c82a61ac_124_play)
HXLINE( 126)		this->libvlc->setRepeat(this->repeat);
HXLINE( 128)		if (!(this->inWindow)) {
HXLINE( 130)			if (::hx::IsNotNull( source )) {
HXLINE( 131)				this->libvlc->play(source);
            			}
            			else {
HXLINE( 133)				this->libvlc->play();
            			}
            		}
            		else {
HXLINE( 137)			if (::hx::IsNotNull( source )) {
HXLINE( 138)				this->libvlc->playInWindow(source);
            			}
            			else {
HXLINE( 140)				this->libvlc->playInWindow();
            			}
HXLINE( 142)			this->libvlc->fullscreen(this->fullscreen);
            		}
HXLINE( 145)		if (::hx::IsNotNull( this->onPlay )) {
HXLINE( 146)			this->onPlay();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(VlcBitmap_obj,play,(void))

void VlcBitmap_obj::stop(){
            	HX_STACKFRAME(&_hx_pos_dc214fe6c82a61ac_151_stop)
HXLINE( 153)		this->isPlaying = false;
HXLINE( 154)		this->libvlc->stop();
HXLINE( 158)		if (::hx::IsNotNull( this->onStop )) {
HXLINE( 159)			this->onStop();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(VlcBitmap_obj,stop,(void))

void VlcBitmap_obj::pause(){
            	HX_STACKFRAME(&_hx_pos_dc214fe6c82a61ac_164_pause)
HXLINE( 166)		this->isPlaying = false;
HXLINE( 167)		this->libvlc->pause();
HXLINE( 168)		if (::hx::IsNotNull( this->onPause )) {
HXLINE( 169)			this->onPause();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(VlcBitmap_obj,pause,(void))

void VlcBitmap_obj::resume(){
            	HX_STACKFRAME(&_hx_pos_dc214fe6c82a61ac_174_resume)
HXLINE( 176)		this->isPlaying = true;
HXLINE( 177)		this->libvlc->resume();
HXLINE( 178)		if (::hx::IsNotNull( this->onResume )) {
HXLINE( 179)			this->onResume();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(VlcBitmap_obj,resume,(void))

void VlcBitmap_obj::seek(Float seekTotime){
            	HX_STACKFRAME(&_hx_pos_dc214fe6c82a61ac_184_seek)
HXLINE( 186)		this->libvlc->setPosition(seekTotime);
HXLINE( 187)		if (::hx::IsNotNull( this->onSeek )) {
HXLINE( 188)			this->onSeek();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(VlcBitmap_obj,seek,(void))

Float VlcBitmap_obj::getFPS(){
            	HX_STACKFRAME(&_hx_pos_dc214fe6c82a61ac_195_getFPS)
HXDLIN( 195)		bool _hx_tmp;
HXDLIN( 195)		if (::hx::IsNotNull( this->libvlc )) {
HXDLIN( 195)			_hx_tmp = this->initComplete;
            		}
            		else {
HXDLIN( 195)			_hx_tmp = false;
            		}
HXDLIN( 195)		if (_hx_tmp) {
HXLINE( 196)			return this->libvlc->getFPS();
            		}
            		else {
HXLINE( 198)			return ( (Float)(0) );
            		}
HXLINE( 195)		return ((Float)0.);
            	}


HX_DEFINE_DYNAMIC_FUNC0(VlcBitmap_obj,getFPS,return )

int VlcBitmap_obj::getTime(){
            	HX_STACKFRAME(&_hx_pos_dc214fe6c82a61ac_207_getTime)
HXDLIN( 207)		bool _hx_tmp;
HXDLIN( 207)		if (::hx::IsNotNull( this->libvlc )) {
HXDLIN( 207)			_hx_tmp = this->initComplete;
            		}
            		else {
HXDLIN( 207)			_hx_tmp = false;
            		}
HXDLIN( 207)		if (_hx_tmp) {
HXLINE( 208)			return this->libvlc->getTime();
            		}
            		else {
HXLINE( 210)			return 0;
            		}
HXLINE( 207)		return 0;
            	}


HX_DEFINE_DYNAMIC_FUNC0(VlcBitmap_obj,getTime,return )

void VlcBitmap_obj::checkFlags(){
            	HX_STACKFRAME(&_hx_pos_dc214fe6c82a61ac_221_checkFlags)
HXDLIN( 221)		if (!(this->isDisposed)) {
HXLINE( 223)			if (::hx::IsEq( libvlc->flags[1],1 )) {
HXLINE( 225)				libvlc->flags[1]=-1;
HXLINE( 226)				this->statusOnPlaying();
            			}
HXLINE( 228)			if (::hx::IsEq( libvlc->flags[2],1 )) {
HXLINE( 230)				libvlc->flags[2]=-1;
HXLINE( 231)				this->statusOnPaused();
            			}
HXLINE( 233)			if (::hx::IsEq( libvlc->flags[3],1 )) {
HXLINE( 235)				libvlc->flags[3]=-1;
HXLINE( 236)				this->statusOnStopped();
            			}
HXLINE( 238)			if (::hx::IsEq( libvlc->flags[4],1 )) {
HXLINE( 240)				libvlc->flags[4]=-1;
HXLINE( 241)				this->statusOnEndReached();
            			}
HXLINE( 243)			if (::hx::IsNotEq( libvlc->flags[5],-1 )) {
HXLINE( 245)				this->statusOnTimeChanged(libvlc->flags[5]);
            			}
HXLINE( 247)			if (::hx::IsNotEq( libvlc->flags[6],-1 )) {
HXLINE( 249)				this->statusOnPositionChanged(libvlc->flags[9]);
            			}
HXLINE( 251)			if (::hx::IsEq( libvlc->flags[9],1 )) {
HXLINE( 253)				libvlc->flags[9]=-1;
HXLINE( 254)				this->statusOnError();
            			}
HXLINE( 256)			if (::hx::IsEq( libvlc->flags[10],1 )) {
HXLINE( 258)				libvlc->flags[10]=-1;
HXLINE( 259)				this->statusOnSeekableChanged(0);
            			}
HXLINE( 261)			if (::hx::IsEq( libvlc->flags[11],1 )) {
HXLINE( 263)				libvlc->flags[11]=-1;
HXLINE( 264)				this->statusOnOpening();
            			}
HXLINE( 266)			if (::hx::IsEq( libvlc->flags[12],1 )) {
HXLINE( 268)				libvlc->flags[12]=-1;
HXLINE( 269)				this->statusOnBuffering();
            			}
HXLINE( 271)			if (::hx::IsEq( libvlc->flags[13],1 )) {
HXLINE( 273)				libvlc->flags[13]=-1;
HXLINE( 274)				this->statusOnForward();
            			}
HXLINE( 276)			if (::hx::IsEq( libvlc->flags[14],1 )) {
HXLINE( 278)				libvlc->flags[14]=-1;
HXLINE( 279)				this->statusOnBackward();
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(VlcBitmap_obj,checkFlags,(void))

void VlcBitmap_obj::onResize( ::openfl::events::Event e){
            	HX_STACKFRAME(&_hx_pos_dc214fe6c82a61ac_288_onResize)
HXLINE( 289)		this->set_height(( (Float)(::openfl::Lib_obj::get_current()->stage->stageHeight) ));
HXLINE( 290)		this->set_width((( (Float)(::openfl::Lib_obj::get_current()->stage->stageHeight) ) * ((Float)1.7777777777777777)));
            	}


HX_DEFINE_DYNAMIC_FUNC1(VlcBitmap_obj,onResize,(void))

void VlcBitmap_obj::videoInitComplete(){
            	HX_GC_STACKFRAME(&_hx_pos_dc214fe6c82a61ac_296_videoInitComplete)
HXLINE( 298)		this->videoWidth = this->libvlc->getWidth();
HXLINE( 299)		this->videoHeight = this->libvlc->getHeight();
HXLINE( 301)		this->duration = this->libvlc->getDuration();
HXLINE( 302)		this->length = this->libvlc->getLength();
HXLINE( 304)		if (::hx::IsNotNull( this->get_bitmapData() )) {
HXLINE( 305)			this->get_bitmapData()->dispose();
            		}
HXLINE( 307)		if (::hx::IsNotNull( this->texture )) {
HXLINE( 308)			this->texture->dispose();
            		}
HXLINE( 309)		if (::hx::IsNotNull( this->texture2 )) {
HXLINE( 310)			this->texture2->dispose();
            		}
HXLINE( 313)		int _hx_tmp = ::Std_obj::_hx_int(( (Float)(this->videoWidth) ));
HXDLIN( 313)		this->set_bitmapData( ::openfl::display::BitmapData_obj::__alloc( HX_CTX ,_hx_tmp,::Std_obj::_hx_int(( (Float)(this->videoHeight) )),true,0));
HXLINE( 314)		int _hx_tmp1 = ::Std_obj::_hx_int(( (Float)(this->videoWidth) ));
HXDLIN( 314)		this->frameRect =  ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,0,0,_hx_tmp1,::Std_obj::_hx_int(( (Float)(this->videoHeight) )));
HXLINE( 320)		this->smoothing = true;
HXLINE( 322)		if (::hx::IsNotNull( this->_width )) {
HXLINE( 323)			this->set_width(( (Float)(this->_width) ));
            		}
            		else {
HXLINE( 325)			this->set_width(( (Float)(this->videoWidth) ));
            		}
HXLINE( 327)		if (::hx::IsNotNull( this->_height )) {
HXLINE( 328)			this->set_height(( (Float)(this->_height) ));
            		}
            		else {
HXLINE( 330)			this->set_height(( (Float)(this->videoHeight) ));
            		}
HXLINE( 332)		this->bufferMem = ::Array_obj< unsigned char >::__new(0);
HXLINE( 333)		this->frameSize = ((this->videoWidth * this->videoHeight) * 4);
HXLINE( 335)		this->setVolume(this->volume);
HXLINE( 337)		this->initComplete = true;
HXLINE( 339)		if (::hx::IsNotNull( this->onVideoReady )) {
HXLINE( 340)			this->onVideoReady();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(VlcBitmap_obj,videoInitComplete,(void))

void VlcBitmap_obj::vLoop( ::openfl::events::Event e){
            	HX_STACKFRAME(&_hx_pos_dc214fe6c82a61ac_347_vLoop)
HXLINE( 349)		this->checkFlags();
HXLINE( 350)		this->render();
            	}


HX_DEFINE_DYNAMIC_FUNC1(VlcBitmap_obj,vLoop,(void))

void VlcBitmap_obj::render(){
            	HX_GC_STACKFRAME(&_hx_pos_dc214fe6c82a61ac_357_render)
HXLINE( 358)		int cTime = ::openfl::Lib_obj::getTimer();
HXLINE( 360)		if (((cTime - this->oldTime) > 28)) {
HXLINE( 362)			this->oldTime = cTime;
HXLINE( 366)			if (this->isPlaying) {
HXLINE( 368)				try {
            					HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 370)					::cpp::Pointer< unsigned char > tmp = this->libvlc->getPixelData();
HXDLIN( 370)					this->bufferMem->setUnmanagedData(tmp,this->frameSize);
HXLINE( 371)					if (::hx::IsNotNull( this->bufferMem )) {
HXLINE( 375)						::cpp::Pointer< unsigned char > _hx_tmp = this->libvlc->getPixelData();
HXDLIN( 375)						if (::hx::IsNotNull( _hx_tmp )) {
HXLINE( 376)							 ::openfl::display::BitmapData _hx_tmp = this->get_bitmapData();
HXDLIN( 376)							 ::openfl::geom::Rectangle _hx_tmp1 = this->frameRect;
HXDLIN( 376)							_hx_tmp->setPixels(_hx_tmp1,::openfl::utils::_ByteArray::ByteArray_Impl__obj::fromBytes(::haxe::io::Bytes_obj::ofData(this->bufferMem)));
            						}
            					}
            				} catch( ::Dynamic _hx_e) {
            					if (_hx_e.IsClass<  ::Dynamic >() ){
            						HX_STACK_BEGIN_CATCH
            						 ::Dynamic _g = _hx_e;
HXLINE( 384)						{
HXLINE( 384)							null();
            						}
HXDLIN( 384)						 ::Dynamic _g1 = ::haxe::Exception_obj::caught(_g)->unwrap();
HXLINE( 368)						if (::Std_obj::isOfType(_g1,::hx::ClassOf< ::openfl::errors::Error >())) {
HXLINE( 384)							 ::openfl::errors::Error e = ( ( ::openfl::errors::Error)(_g1) );
HXLINE( 386)							 ::Dynamic _hx_tmp = ::haxe::Log_obj::trace;
HXDLIN( 386)							::String _hx_tmp1 = (HX_("error: ",6e,80,0a,ea) + ::Std_obj::string(e));
HXDLIN( 386)							_hx_tmp(_hx_tmp1,::hx::SourceInfo(HX_("source/vlc/VlcBitmap.hx",38,b9,69,bc),386,HX_("vlc.VlcBitmap",db,f8,af,7f),HX_("render",56,6b,29,05)));
HXLINE( 387)							HX_STACK_DO_THROW(::haxe::Exception_obj::thrown( ::openfl::errors::Error_obj::__alloc( HX_CTX ,HX_("render broke xd",bd,88,39,4f),null())));
            						}
            						else {
HXLINE( 368)							HX_STACK_DO_THROW(_g);
            						}
            					}
            					else {
            						HX_STACK_DO_THROW(_hx_e);
            					}
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(VlcBitmap_obj,render,(void))

void VlcBitmap_obj::setVolume(Float vol){
            	HX_STACKFRAME(&_hx_pos_dc214fe6c82a61ac_399_setVolume)
HXDLIN( 399)		bool _hx_tmp;
HXDLIN( 399)		if (::hx::IsNotNull( this->libvlc )) {
HXDLIN( 399)			_hx_tmp = this->initComplete;
            		}
            		else {
HXDLIN( 399)			_hx_tmp = false;
            		}
HXDLIN( 399)		if (_hx_tmp) {
HXLINE( 400)			this->libvlc->setVolume((vol * ( (Float)(100) )));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(VlcBitmap_obj,setVolume,(void))

Float VlcBitmap_obj::getVolume(){
            	HX_STACKFRAME(&_hx_pos_dc214fe6c82a61ac_407_getVolume)
HXDLIN( 407)		bool _hx_tmp;
HXDLIN( 407)		if (::hx::IsNotNull( this->libvlc )) {
HXDLIN( 407)			_hx_tmp = this->initComplete;
            		}
            		else {
HXDLIN( 407)			_hx_tmp = false;
            		}
HXDLIN( 407)		if (_hx_tmp) {
HXLINE( 408)			return this->libvlc->getVolume();
            		}
            		else {
HXLINE( 410)			return ( (Float)(0) );
            		}
HXLINE( 407)		return ((Float)0.);
            	}


HX_DEFINE_DYNAMIC_FUNC0(VlcBitmap_obj,getVolume,return )

void VlcBitmap_obj::statusOnOpening(){
            	HX_STACKFRAME(&_hx_pos_dc214fe6c82a61ac_420_statusOnOpening)
HXDLIN( 420)		if (::hx::IsNotNull( this->onOpening )) {
HXLINE( 421)			this->onOpening();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(VlcBitmap_obj,statusOnOpening,(void))

void VlcBitmap_obj::statusOnBuffering(){
            	HX_STACKFRAME(&_hx_pos_dc214fe6c82a61ac_425_statusOnBuffering)
HXLINE( 426)		::haxe::Log_obj::trace(HX_("buffering",e2,6f,8f,b1),::hx::SourceInfo(HX_("source/vlc/VlcBitmap.hx",38,b9,69,bc),426,HX_("vlc.VlcBitmap",db,f8,af,7f),HX_("statusOnBuffering",b1,cc,37,e1)));
HXLINE( 428)		if (::hx::IsNotNull( this->onBuffer )) {
HXLINE( 429)			this->onBuffer();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(VlcBitmap_obj,statusOnBuffering,(void))

void VlcBitmap_obj::statusOnPlaying(){
            	HX_STACKFRAME(&_hx_pos_dc214fe6c82a61ac_434_statusOnPlaying)
HXDLIN( 434)		if (!(this->initComplete)) {
HXLINE( 436)			this->isPlaying = true;
HXLINE( 437)			this->initComplete = true;
HXLINE( 438)			this->videoInitComplete();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(VlcBitmap_obj,statusOnPlaying,(void))

void VlcBitmap_obj::statusOnPaused(){
            	HX_STACKFRAME(&_hx_pos_dc214fe6c82a61ac_443_statusOnPaused)
HXLINE( 444)		if (this->isPlaying) {
HXLINE( 445)			this->isPlaying = false;
            		}
HXLINE( 447)		if (::hx::IsNotNull( this->onPause )) {
HXLINE( 448)			this->onPause();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(VlcBitmap_obj,statusOnPaused,(void))

void VlcBitmap_obj::statusOnStopped(){
            	HX_STACKFRAME(&_hx_pos_dc214fe6c82a61ac_452_statusOnStopped)
HXLINE( 453)		if (this->isPlaying) {
HXLINE( 454)			this->isPlaying = false;
            		}
HXLINE( 456)		if (::hx::IsNotNull( this->onStop )) {
HXLINE( 457)			this->onStop();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(VlcBitmap_obj,statusOnStopped,(void))

void VlcBitmap_obj::statusOnEndReached(){
            	HX_STACKFRAME(&_hx_pos_dc214fe6c82a61ac_461_statusOnEndReached)
HXLINE( 462)		if (this->isPlaying) {
HXLINE( 463)			this->isPlaying = false;
            		}
HXLINE( 466)		if (::hx::IsNotNull( this->onComplete )) {
HXLINE( 467)			this->onComplete();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(VlcBitmap_obj,statusOnEndReached,(void))

void VlcBitmap_obj::statusOnTimeChanged(int newTime){
            	HX_STACKFRAME(&_hx_pos_dc214fe6c82a61ac_471_statusOnTimeChanged)
HXLINE( 472)		this->time = newTime;
HXLINE( 473)		if (::hx::IsNotNull( this->onProgress )) {
HXLINE( 474)			this->onProgress();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(VlcBitmap_obj,statusOnTimeChanged,(void))

void VlcBitmap_obj::statusOnPositionChanged(int newPos){
            	HX_STACKFRAME(&_hx_pos_dc214fe6c82a61ac_478_statusOnPositionChanged)
            	}


HX_DEFINE_DYNAMIC_FUNC1(VlcBitmap_obj,statusOnPositionChanged,(void))

void VlcBitmap_obj::statusOnSeekableChanged(int newPos){
            	HX_STACKFRAME(&_hx_pos_dc214fe6c82a61ac_483_statusOnSeekableChanged)
HXDLIN( 483)		if (::hx::IsNotNull( this->onSeek )) {
HXLINE( 484)			this->onSeek();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(VlcBitmap_obj,statusOnSeekableChanged,(void))

void VlcBitmap_obj::statusOnForward(){
            	HX_STACKFRAME(&_hx_pos_dc214fe6c82a61ac_488_statusOnForward)
            	}


HX_DEFINE_DYNAMIC_FUNC0(VlcBitmap_obj,statusOnForward,(void))

void VlcBitmap_obj::statusOnBackward(){
            	HX_STACKFRAME(&_hx_pos_dc214fe6c82a61ac_492_statusOnBackward)
            	}


HX_DEFINE_DYNAMIC_FUNC0(VlcBitmap_obj,statusOnBackward,(void))

void VlcBitmap_obj::onDisplay(){
            	HX_STACKFRAME(&_hx_pos_dc214fe6c82a61ac_496_onDisplay)
            	}


HX_DEFINE_DYNAMIC_FUNC0(VlcBitmap_obj,onDisplay,(void))

void VlcBitmap_obj::statusOnError(){
            	HX_STACKFRAME(&_hx_pos_dc214fe6c82a61ac_501_statusOnError)
HXLINE( 502)		::haxe::Log_obj::trace(HX_("VLC ERROR - File not found?",f0,48,ee,fd),::hx::SourceInfo(HX_("source/vlc/VlcBitmap.hx",38,b9,69,bc),502,HX_("vlc.VlcBitmap",db,f8,af,7f),HX_("statusOnError",17,d5,f1,06)));
HXLINE( 504)		if (::hx::IsNotNull( this->onError )) {
HXLINE( 505)			this->onError();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(VlcBitmap_obj,statusOnError,(void))

Float VlcBitmap_obj::get_width(){
            	HX_STACKFRAME(&_hx_pos_dc214fe6c82a61ac_512_get_width)
HXDLIN( 512)		return ( (Float)(this->_width) );
            	}


Float VlcBitmap_obj::set_width(Float value){
            	HX_STACKFRAME(&_hx_pos_dc214fe6c82a61ac_516_set_width)
HXLINE( 517)		this->_width = value;
HXLINE( 518)		return this->super::set_width(value);
            	}


Float VlcBitmap_obj::get_height(){
            	HX_STACKFRAME(&_hx_pos_dc214fe6c82a61ac_523_get_height)
HXDLIN( 523)		return ( (Float)(this->_height) );
            	}


Float VlcBitmap_obj::set_height(Float value){
            	HX_STACKFRAME(&_hx_pos_dc214fe6c82a61ac_527_set_height)
HXLINE( 528)		this->_height = value;
HXLINE( 529)		return this->super::set_height(value);
            	}


Float VlcBitmap_obj::get_volume(){
            	HX_STACKFRAME(&_hx_pos_dc214fe6c82a61ac_534_get_volume)
HXDLIN( 534)		return this->volume;
            	}


HX_DEFINE_DYNAMIC_FUNC0(VlcBitmap_obj,get_volume,return )

Float VlcBitmap_obj::set_volume(Float value){
            	HX_STACKFRAME(&_hx_pos_dc214fe6c82a61ac_538_set_volume)
HXLINE( 539)		this->setVolume(value);
HXLINE( 540)		return (this->volume = value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(VlcBitmap_obj,set_volume,return )

void VlcBitmap_obj::dispose(){
            	HX_STACKFRAME(&_hx_pos_dc214fe6c82a61ac_548_dispose)
HXLINE( 550)		this->libvlc->stop();
HXLINE( 553)		this->stage->removeEventListener(HX_("enterFrame",f5,03,50,02),this->vLoop_dyn(),null());
HXLINE( 555)		if (::hx::IsNotNull( this->texture )) {
HXLINE( 557)			this->texture->dispose();
HXLINE( 558)			this->texture = null();
            		}
HXLINE( 560)		this->onVideoReady = null();
HXLINE( 561)		this->onComplete = null();
HXLINE( 562)		this->onPause = null();
HXLINE( 563)		this->onPlay = null();
HXLINE( 564)		this->onResume = null();
HXLINE( 565)		this->onSeek = null();
HXLINE( 566)		this->onStop = null();
HXLINE( 567)		this->onBuffer = null();
HXLINE( 568)		this->onProgress = null();
HXLINE( 569)		this->onError = null();
HXLINE( 570)		this->bufferMem = null();
HXLINE( 571)		this->isDisposed = true;
HXLINE( 574)		while(true){
HXLINE( 574)			bool _hx_tmp;
HXDLIN( 574)			if (!(this->isPlaying)) {
HXLINE( 574)				_hx_tmp = !(this->isDisposed);
            			}
            			else {
HXLINE( 574)				_hx_tmp = false;
            			}
HXDLIN( 574)			if (!(_hx_tmp)) {
HXLINE( 574)				goto _hx_goto_37;
            			}
HXLINE( 576)			{
HXLINE( 576)				 LibVLC* _this = this->libvlc;
HXDLIN( 576)				::delete this;
            			}
HXLINE( 577)			this->libvlc = null();
            		}
            		_hx_goto_37:;
            	}


HX_DEFINE_DYNAMIC_FUNC0(VlcBitmap_obj,dispose,(void))


::hx::ObjectPtr< VlcBitmap_obj > VlcBitmap_obj::__new() {
	::hx::ObjectPtr< VlcBitmap_obj > __this = new VlcBitmap_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< VlcBitmap_obj > VlcBitmap_obj::__alloc(::hx::Ctx *_hx_ctx) {
	VlcBitmap_obj *__this = (VlcBitmap_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(VlcBitmap_obj), true, "vlc.VlcBitmap"));
	*(void **)__this = VlcBitmap_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

VlcBitmap_obj::VlcBitmap_obj()
{
}

void VlcBitmap_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(VlcBitmap);
	HX_MARK_MEMBER_NAME(videoWidth,"videoWidth");
	HX_MARK_MEMBER_NAME(videoHeight,"videoHeight");
	HX_MARK_MEMBER_NAME(repeat,"repeat");
	HX_MARK_MEMBER_NAME(duration,"duration");
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_MEMBER_NAME(inWindow,"inWindow");
	HX_MARK_MEMBER_NAME(initComplete,"initComplete");
	HX_MARK_MEMBER_NAME(fullscreen,"fullscreen");
	HX_MARK_MEMBER_NAME(volume,"volume");
	HX_MARK_MEMBER_NAME(isDisposed,"isDisposed");
	HX_MARK_MEMBER_NAME(isPlaying,"isPlaying");
	HX_MARK_MEMBER_NAME(disposeOnStop,"disposeOnStop");
	HX_MARK_MEMBER_NAME(time,"time");
	HX_MARK_MEMBER_NAME(onVideoReady,"onVideoReady");
	HX_MARK_MEMBER_NAME(onPlay,"onPlay");
	HX_MARK_MEMBER_NAME(onStop,"onStop");
	HX_MARK_MEMBER_NAME(onPause,"onPause");
	HX_MARK_MEMBER_NAME(onResume,"onResume");
	HX_MARK_MEMBER_NAME(onSeek,"onSeek");
	HX_MARK_MEMBER_NAME(onBuffer,"onBuffer");
	HX_MARK_MEMBER_NAME(onProgress,"onProgress");
	HX_MARK_MEMBER_NAME(onOpening,"onOpening");
	HX_MARK_MEMBER_NAME(onComplete,"onComplete");
	HX_MARK_MEMBER_NAME(onError,"onError");
	HX_MARK_MEMBER_NAME(bufferMem,"bufferMem");
	HX_MARK_MEMBER_NAME(libvlc,"libvlc");
	HX_MARK_MEMBER_NAME(frameSize,"frameSize");
	HX_MARK_MEMBER_NAME(_width,"_width");
	HX_MARK_MEMBER_NAME(_height,"_height");
	HX_MARK_MEMBER_NAME(texture,"texture");
	HX_MARK_MEMBER_NAME(texture2,"texture2");
	HX_MARK_MEMBER_NAME(bmdBuf,"bmdBuf");
	HX_MARK_MEMBER_NAME(bmdBuf2,"bmdBuf2");
	HX_MARK_MEMBER_NAME(oldTime,"oldTime");
	HX_MARK_MEMBER_NAME(flipBuffer,"flipBuffer");
	HX_MARK_MEMBER_NAME(frameRect,"frameRect");
	HX_MARK_MEMBER_NAME(screenWidth,"screenWidth");
	HX_MARK_MEMBER_NAME(screenHeight,"screenHeight");
	 ::openfl::display::Bitmap_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void VlcBitmap_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(videoWidth,"videoWidth");
	HX_VISIT_MEMBER_NAME(videoHeight,"videoHeight");
	HX_VISIT_MEMBER_NAME(repeat,"repeat");
	HX_VISIT_MEMBER_NAME(duration,"duration");
	HX_VISIT_MEMBER_NAME(length,"length");
	HX_VISIT_MEMBER_NAME(inWindow,"inWindow");
	HX_VISIT_MEMBER_NAME(initComplete,"initComplete");
	HX_VISIT_MEMBER_NAME(fullscreen,"fullscreen");
	HX_VISIT_MEMBER_NAME(volume,"volume");
	HX_VISIT_MEMBER_NAME(isDisposed,"isDisposed");
	HX_VISIT_MEMBER_NAME(isPlaying,"isPlaying");
	HX_VISIT_MEMBER_NAME(disposeOnStop,"disposeOnStop");
	HX_VISIT_MEMBER_NAME(time,"time");
	HX_VISIT_MEMBER_NAME(onVideoReady,"onVideoReady");
	HX_VISIT_MEMBER_NAME(onPlay,"onPlay");
	HX_VISIT_MEMBER_NAME(onStop,"onStop");
	HX_VISIT_MEMBER_NAME(onPause,"onPause");
	HX_VISIT_MEMBER_NAME(onResume,"onResume");
	HX_VISIT_MEMBER_NAME(onSeek,"onSeek");
	HX_VISIT_MEMBER_NAME(onBuffer,"onBuffer");
	HX_VISIT_MEMBER_NAME(onProgress,"onProgress");
	HX_VISIT_MEMBER_NAME(onOpening,"onOpening");
	HX_VISIT_MEMBER_NAME(onComplete,"onComplete");
	HX_VISIT_MEMBER_NAME(onError,"onError");
	HX_VISIT_MEMBER_NAME(bufferMem,"bufferMem");
	HX_VISIT_MEMBER_NAME(libvlc,"libvlc");
	HX_VISIT_MEMBER_NAME(frameSize,"frameSize");
	HX_VISIT_MEMBER_NAME(_width,"_width");
	HX_VISIT_MEMBER_NAME(_height,"_height");
	HX_VISIT_MEMBER_NAME(texture,"texture");
	HX_VISIT_MEMBER_NAME(texture2,"texture2");
	HX_VISIT_MEMBER_NAME(bmdBuf,"bmdBuf");
	HX_VISIT_MEMBER_NAME(bmdBuf2,"bmdBuf2");
	HX_VISIT_MEMBER_NAME(oldTime,"oldTime");
	HX_VISIT_MEMBER_NAME(flipBuffer,"flipBuffer");
	HX_VISIT_MEMBER_NAME(frameRect,"frameRect");
	HX_VISIT_MEMBER_NAME(screenWidth,"screenWidth");
	HX_VISIT_MEMBER_NAME(screenHeight,"screenHeight");
	 ::openfl::display::Bitmap_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val VlcBitmap_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"time") ) { return ::hx::Val( time ); }
		if (HX_FIELD_EQ(inName,"init") ) { return ::hx::Val( init_dyn() ); }
		if (HX_FIELD_EQ(inName,"play") ) { return ::hx::Val( play_dyn() ); }
		if (HX_FIELD_EQ(inName,"stop") ) { return ::hx::Val( stop_dyn() ); }
		if (HX_FIELD_EQ(inName,"seek") ) { return ::hx::Val( seek_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"pause") ) { return ::hx::Val( pause_dyn() ); }
		if (HX_FIELD_EQ(inName,"vLoop") ) { return ::hx::Val( vLoop_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"repeat") ) { return ::hx::Val( repeat ); }
		if (HX_FIELD_EQ(inName,"length") ) { return ::hx::Val( length ); }
		if (HX_FIELD_EQ(inName,"volume") ) { return ::hx::Val( volume ); }
		if (HX_FIELD_EQ(inName,"onPlay") ) { return ::hx::Val( onPlay ); }
		if (HX_FIELD_EQ(inName,"onStop") ) { return ::hx::Val( onStop ); }
		if (HX_FIELD_EQ(inName,"onSeek") ) { return ::hx::Val( onSeek ); }
		if (HX_FIELD_EQ(inName,"_width") ) { return ::hx::Val( _width ); }
		if (HX_FIELD_EQ(inName,"bmdBuf") ) { return ::hx::Val( bmdBuf ); }
		if (HX_FIELD_EQ(inName,"resume") ) { return ::hx::Val( resume_dyn() ); }
		if (HX_FIELD_EQ(inName,"getFPS") ) { return ::hx::Val( getFPS_dyn() ); }
		if (HX_FIELD_EQ(inName,"render") ) { return ::hx::Val( render_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onPause") ) { return ::hx::Val( onPause ); }
		if (HX_FIELD_EQ(inName,"onError") ) { return ::hx::Val( onError ); }
		if (HX_FIELD_EQ(inName,"_height") ) { return ::hx::Val( _height ); }
		if (HX_FIELD_EQ(inName,"texture") ) { return ::hx::Val( texture ); }
		if (HX_FIELD_EQ(inName,"bmdBuf2") ) { return ::hx::Val( bmdBuf2 ); }
		if (HX_FIELD_EQ(inName,"oldTime") ) { return ::hx::Val( oldTime ); }
		if (HX_FIELD_EQ(inName,"mThread") ) { return ::hx::Val( mThread_dyn() ); }
		if (HX_FIELD_EQ(inName,"getTime") ) { return ::hx::Val( getTime_dyn() ); }
		if (HX_FIELD_EQ(inName,"dispose") ) { return ::hx::Val( dispose_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"duration") ) { return ::hx::Val( duration ); }
		if (HX_FIELD_EQ(inName,"inWindow") ) { return ::hx::Val( inWindow ); }
		if (HX_FIELD_EQ(inName,"onResume") ) { return ::hx::Val( onResume ); }
		if (HX_FIELD_EQ(inName,"onBuffer") ) { return ::hx::Val( onBuffer ); }
		if (HX_FIELD_EQ(inName,"texture2") ) { return ::hx::Val( texture2 ); }
		if (HX_FIELD_EQ(inName,"onResize") ) { return ::hx::Val( onResize_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"isPlaying") ) { return ::hx::Val( isPlaying ); }
		if (HX_FIELD_EQ(inName,"onOpening") ) { return ::hx::Val( onOpening ); }
		if (HX_FIELD_EQ(inName,"bufferMem") ) { return ::hx::Val( bufferMem ); }
		if (HX_FIELD_EQ(inName,"frameSize") ) { return ::hx::Val( frameSize ); }
		if (HX_FIELD_EQ(inName,"frameRect") ) { return ::hx::Val( frameRect ); }
		if (HX_FIELD_EQ(inName,"setVolume") ) { return ::hx::Val( setVolume_dyn() ); }
		if (HX_FIELD_EQ(inName,"getVolume") ) { return ::hx::Val( getVolume_dyn() ); }
		if (HX_FIELD_EQ(inName,"onDisplay") ) { return ::hx::Val( onDisplay_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_width") ) { return ::hx::Val( get_width_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_width") ) { return ::hx::Val( set_width_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"videoWidth") ) { return ::hx::Val( videoWidth ); }
		if (HX_FIELD_EQ(inName,"fullscreen") ) { return ::hx::Val( fullscreen ); }
		if (HX_FIELD_EQ(inName,"isDisposed") ) { return ::hx::Val( isDisposed ); }
		if (HX_FIELD_EQ(inName,"onProgress") ) { return ::hx::Val( onProgress ); }
		if (HX_FIELD_EQ(inName,"onComplete") ) { return ::hx::Val( onComplete ); }
		if (HX_FIELD_EQ(inName,"flipBuffer") ) { return ::hx::Val( flipBuffer ); }
		if (HX_FIELD_EQ(inName,"checkFlags") ) { return ::hx::Val( checkFlags_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_height") ) { return ::hx::Val( get_height_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_height") ) { return ::hx::Val( set_height_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_volume") ) { return ::hx::Val( get_volume_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_volume") ) { return ::hx::Val( set_volume_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"videoHeight") ) { return ::hx::Val( videoHeight ); }
		if (HX_FIELD_EQ(inName,"screenWidth") ) { return ::hx::Val( screenWidth ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"initComplete") ) { return ::hx::Val( initComplete ); }
		if (HX_FIELD_EQ(inName,"onVideoReady") ) { return ::hx::Val( onVideoReady ); }
		if (HX_FIELD_EQ(inName,"screenHeight") ) { return ::hx::Val( screenHeight ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"disposeOnStop") ) { return ::hx::Val( disposeOnStop ); }
		if (HX_FIELD_EQ(inName,"statusOnError") ) { return ::hx::Val( statusOnError_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"onAddedToStage") ) { return ::hx::Val( onAddedToStage_dyn() ); }
		if (HX_FIELD_EQ(inName,"statusOnPaused") ) { return ::hx::Val( statusOnPaused_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"statusOnOpening") ) { return ::hx::Val( statusOnOpening_dyn() ); }
		if (HX_FIELD_EQ(inName,"statusOnPlaying") ) { return ::hx::Val( statusOnPlaying_dyn() ); }
		if (HX_FIELD_EQ(inName,"statusOnStopped") ) { return ::hx::Val( statusOnStopped_dyn() ); }
		if (HX_FIELD_EQ(inName,"statusOnForward") ) { return ::hx::Val( statusOnForward_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"statusOnBackward") ) { return ::hx::Val( statusOnBackward_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"videoInitComplete") ) { return ::hx::Val( videoInitComplete_dyn() ); }
		if (HX_FIELD_EQ(inName,"statusOnBuffering") ) { return ::hx::Val( statusOnBuffering_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"statusOnEndReached") ) { return ::hx::Val( statusOnEndReached_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"statusOnTimeChanged") ) { return ::hx::Val( statusOnTimeChanged_dyn() ); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"statusOnPositionChanged") ) { return ::hx::Val( statusOnPositionChanged_dyn() ); }
		if (HX_FIELD_EQ(inName,"statusOnSeekableChanged") ) { return ::hx::Val( statusOnSeekableChanged_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val VlcBitmap_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"time") ) { time=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"repeat") ) { repeat=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"length") ) { length=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"volume") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_volume(inValue.Cast< Float >()) );volume=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onPlay") ) { onPlay=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onStop") ) { onStop=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onSeek") ) { onSeek=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_width") ) { _width=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bmdBuf") ) { bmdBuf=inValue.Cast<  ::openfl::display::BitmapData >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onPause") ) { onPause=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onError") ) { onError=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_height") ) { _height=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"texture") ) { texture=inValue.Cast<  ::openfl::display3D::textures::RectangleTexture >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bmdBuf2") ) { bmdBuf2=inValue.Cast<  ::openfl::display::BitmapData >(); return inValue; }
		if (HX_FIELD_EQ(inName,"oldTime") ) { oldTime=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"duration") ) { duration=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"inWindow") ) { inWindow=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onResume") ) { onResume=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onBuffer") ) { onBuffer=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"texture2") ) { texture2=inValue.Cast<  ::openfl::display3D::textures::RectangleTexture >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"isPlaying") ) { isPlaying=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onOpening") ) { onOpening=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bufferMem") ) { bufferMem=inValue.Cast< ::Array< unsigned char > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"frameSize") ) { frameSize=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"frameRect") ) { frameRect=inValue.Cast<  ::openfl::geom::Rectangle >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"videoWidth") ) { videoWidth=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fullscreen") ) { fullscreen=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"isDisposed") ) { isDisposed=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onProgress") ) { onProgress=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onComplete") ) { onComplete=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"flipBuffer") ) { flipBuffer=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"videoHeight") ) { videoHeight=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"screenWidth") ) { screenWidth=inValue.Cast< Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"initComplete") ) { initComplete=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onVideoReady") ) { onVideoReady=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"screenHeight") ) { screenHeight=inValue.Cast< Float >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"disposeOnStop") ) { disposeOnStop=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void VlcBitmap_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("videoWidth",8b,f3,30,a6));
	outFields->push(HX_("videoHeight",c2,9e,f3,7a));
	outFields->push(HX_("repeat",5b,97,7c,06));
	outFields->push(HX_("duration",54,0f,8e,14));
	outFields->push(HX_("length",e6,94,07,9f));
	outFields->push(HX_("inWindow",b5,dd,0a,db));
	outFields->push(HX_("initComplete",e9,87,7e,24));
	outFields->push(HX_("fullscreen",3b,3a,b4,f9));
	outFields->push(HX_("volume",da,29,53,5f));
	outFields->push(HX_("isDisposed",ef,1c,53,a2));
	outFields->push(HX_("isPlaying",a4,8c,16,8e));
	outFields->push(HX_("disposeOnStop",c0,ae,fb,ee));
	outFields->push(HX_("time",0d,cc,fc,4c));
	outFields->push(HX_("bufferMem",f5,28,7a,b1));
	outFields->push(HX_("libvlc",48,b2,be,e4));
	outFields->push(HX_("frameSize",8e,5f,d4,39));
	outFields->push(HX_("_width",47,fd,49,c6));
	outFields->push(HX_("_height",86,19,c3,70));
	outFields->push(HX_("texture",db,c8,e0,9e));
	outFields->push(HX_("texture2",f7,f6,ce,65));
	outFields->push(HX_("bmdBuf",7a,68,f2,33));
	outFields->push(HX_("bmdBuf2",78,02,29,40));
	outFields->push(HX_("oldTime",54,70,41,02));
	outFields->push(HX_("flipBuffer",8d,03,c2,47));
	outFields->push(HX_("frameRect",f1,0b,28,39));
	outFields->push(HX_("screenWidth",fa,02,e8,81));
	outFields->push(HX_("screenHeight",73,10,6a,df));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo VlcBitmap_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(VlcBitmap_obj,videoWidth),HX_("videoWidth",8b,f3,30,a6)},
	{::hx::fsInt,(int)offsetof(VlcBitmap_obj,videoHeight),HX_("videoHeight",c2,9e,f3,7a)},
	{::hx::fsInt,(int)offsetof(VlcBitmap_obj,repeat),HX_("repeat",5b,97,7c,06)},
	{::hx::fsFloat,(int)offsetof(VlcBitmap_obj,duration),HX_("duration",54,0f,8e,14)},
	{::hx::fsFloat,(int)offsetof(VlcBitmap_obj,length),HX_("length",e6,94,07,9f)},
	{::hx::fsBool,(int)offsetof(VlcBitmap_obj,inWindow),HX_("inWindow",b5,dd,0a,db)},
	{::hx::fsBool,(int)offsetof(VlcBitmap_obj,initComplete),HX_("initComplete",e9,87,7e,24)},
	{::hx::fsBool,(int)offsetof(VlcBitmap_obj,fullscreen),HX_("fullscreen",3b,3a,b4,f9)},
	{::hx::fsFloat,(int)offsetof(VlcBitmap_obj,volume),HX_("volume",da,29,53,5f)},
	{::hx::fsBool,(int)offsetof(VlcBitmap_obj,isDisposed),HX_("isDisposed",ef,1c,53,a2)},
	{::hx::fsBool,(int)offsetof(VlcBitmap_obj,isPlaying),HX_("isPlaying",a4,8c,16,8e)},
	{::hx::fsBool,(int)offsetof(VlcBitmap_obj,disposeOnStop),HX_("disposeOnStop",c0,ae,fb,ee)},
	{::hx::fsInt,(int)offsetof(VlcBitmap_obj,time),HX_("time",0d,cc,fc,4c)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(VlcBitmap_obj,onVideoReady),HX_("onVideoReady",e7,7f,cc,9a)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(VlcBitmap_obj,onPlay),HX_("onPlay",b3,36,e4,ec)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(VlcBitmap_obj,onStop),HX_("onStop",c1,f8,e5,ee)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(VlcBitmap_obj,onPause),HX_("onPause",57,75,95,53)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(VlcBitmap_obj,onResume),HX_("onResume",2c,60,31,e8)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(VlcBitmap_obj,onSeek),HX_("onSeek",37,8e,da,ee)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(VlcBitmap_obj,onBuffer),HX_("onBuffer",7f,b3,41,b0)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(VlcBitmap_obj,onProgress),HX_("onProgress",ec,cb,e1,63)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(VlcBitmap_obj,onOpening),HX_("onOpening",f9,bb,ef,17)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(VlcBitmap_obj,onComplete),HX_("onComplete",f8,d4,7e,5d)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(VlcBitmap_obj,onError),HX_("onError",29,6a,67,09)},
	{::hx::fsObject /* ::Array< unsigned char > */ ,(int)offsetof(VlcBitmap_obj,bufferMem),HX_("bufferMem",f5,28,7a,b1)},
	{::hx::fsUnknown /*  LibVLC* */ ,(int)offsetof(VlcBitmap_obj,libvlc),HX_("libvlc",48,b2,be,e4)},
	{::hx::fsInt,(int)offsetof(VlcBitmap_obj,frameSize),HX_("frameSize",8e,5f,d4,39)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(VlcBitmap_obj,_width),HX_("_width",47,fd,49,c6)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(VlcBitmap_obj,_height),HX_("_height",86,19,c3,70)},
	{::hx::fsObject /*  ::openfl::display3D::textures::RectangleTexture */ ,(int)offsetof(VlcBitmap_obj,texture),HX_("texture",db,c8,e0,9e)},
	{::hx::fsObject /*  ::openfl::display3D::textures::RectangleTexture */ ,(int)offsetof(VlcBitmap_obj,texture2),HX_("texture2",f7,f6,ce,65)},
	{::hx::fsObject /*  ::openfl::display::BitmapData */ ,(int)offsetof(VlcBitmap_obj,bmdBuf),HX_("bmdBuf",7a,68,f2,33)},
	{::hx::fsObject /*  ::openfl::display::BitmapData */ ,(int)offsetof(VlcBitmap_obj,bmdBuf2),HX_("bmdBuf2",78,02,29,40)},
	{::hx::fsInt,(int)offsetof(VlcBitmap_obj,oldTime),HX_("oldTime",54,70,41,02)},
	{::hx::fsBool,(int)offsetof(VlcBitmap_obj,flipBuffer),HX_("flipBuffer",8d,03,c2,47)},
	{::hx::fsObject /*  ::openfl::geom::Rectangle */ ,(int)offsetof(VlcBitmap_obj,frameRect),HX_("frameRect",f1,0b,28,39)},
	{::hx::fsFloat,(int)offsetof(VlcBitmap_obj,screenWidth),HX_("screenWidth",fa,02,e8,81)},
	{::hx::fsFloat,(int)offsetof(VlcBitmap_obj,screenHeight),HX_("screenHeight",73,10,6a,df)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *VlcBitmap_obj_sStaticStorageInfo = 0;
#endif

static ::String VlcBitmap_obj_sMemberFields[] = {
	HX_("videoWidth",8b,f3,30,a6),
	HX_("videoHeight",c2,9e,f3,7a),
	HX_("repeat",5b,97,7c,06),
	HX_("duration",54,0f,8e,14),
	HX_("length",e6,94,07,9f),
	HX_("inWindow",b5,dd,0a,db),
	HX_("initComplete",e9,87,7e,24),
	HX_("fullscreen",3b,3a,b4,f9),
	HX_("volume",da,29,53,5f),
	HX_("isDisposed",ef,1c,53,a2),
	HX_("isPlaying",a4,8c,16,8e),
	HX_("disposeOnStop",c0,ae,fb,ee),
	HX_("time",0d,cc,fc,4c),
	HX_("onVideoReady",e7,7f,cc,9a),
	HX_("onPlay",b3,36,e4,ec),
	HX_("onStop",c1,f8,e5,ee),
	HX_("onPause",57,75,95,53),
	HX_("onResume",2c,60,31,e8),
	HX_("onSeek",37,8e,da,ee),
	HX_("onBuffer",7f,b3,41,b0),
	HX_("onProgress",ec,cb,e1,63),
	HX_("onOpening",f9,bb,ef,17),
	HX_("onComplete",f8,d4,7e,5d),
	HX_("onError",29,6a,67,09),
	HX_("bufferMem",f5,28,7a,b1),
	HX_("frameSize",8e,5f,d4,39),
	HX_("_width",47,fd,49,c6),
	HX_("_height",86,19,c3,70),
	HX_("texture",db,c8,e0,9e),
	HX_("texture2",f7,f6,ce,65),
	HX_("bmdBuf",7a,68,f2,33),
	HX_("bmdBuf2",78,02,29,40),
	HX_("oldTime",54,70,41,02),
	HX_("flipBuffer",8d,03,c2,47),
	HX_("frameRect",f1,0b,28,39),
	HX_("screenWidth",fa,02,e8,81),
	HX_("screenHeight",73,10,6a,df),
	HX_("mThread",17,7f,f1,77),
	HX_("init",10,3b,bb,45),
	HX_("onAddedToStage",22,82,44,36),
	HX_("play",f4,2d,5a,4a),
	HX_("stop",02,f0,5b,4c),
	HX_("pause",f6,d6,57,bd),
	HX_("resume",ad,69,84,08),
	HX_("seek",78,85,50,4c),
	HX_("getFPS",f3,e4,1c,a3),
	HX_("getTime",c3,7b,7f,1f),
	HX_("checkFlags",5f,2d,7c,12),
	HX_("onResize",73,50,28,e8),
	HX_("videoInitComplete",04,35,d7,3a),
	HX_("vLoop",fa,45,d9,23),
	HX_("render",56,6b,29,05),
	HX_("setVolume",1c,9f,fa,be),
	HX_("getVolume",10,b3,a9,db),
	HX_("statusOnOpening",67,3e,1d,5d),
	HX_("statusOnBuffering",b1,cc,37,e1),
	HX_("statusOnPlaying",7d,4a,f0,a6),
	HX_("statusOnPaused",7f,5c,c4,aa),
	HX_("statusOnStopped",1c,0d,3a,60),
	HX_("statusOnEndReached",48,f8,02,2c),
	HX_("statusOnTimeChanged",f6,c6,36,ef),
	HX_("statusOnPositionChanged",5a,f1,34,80),
	HX_("statusOnSeekableChanged",11,12,35,09),
	HX_("statusOnForward",d4,1c,a3,02),
	HX_("statusOnBackward",f4,4d,74,47),
	HX_("onDisplay",e3,e2,f4,92),
	HX_("statusOnError",17,d5,f1,06),
	HX_("get_width",5d,12,0c,0e),
	HX_("set_width",69,fe,5c,f1),
	HX_("get_height",b0,77,d3,f2),
	HX_("set_height",24,16,51,f6),
	HX_("get_volume",a3,99,da,4f),
	HX_("set_volume",17,38,58,53),
	HX_("dispose",9f,80,4c,bb),
	::String(null()) };

::hx::Class VlcBitmap_obj::__mClass;

void VlcBitmap_obj::__register()
{
	VlcBitmap_obj _hx_dummy;
	VlcBitmap_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("vlc.VlcBitmap",db,f8,af,7f);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(VlcBitmap_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< VlcBitmap_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = VlcBitmap_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = VlcBitmap_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace vlc