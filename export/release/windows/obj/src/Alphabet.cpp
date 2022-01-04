#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_AlphaCharacter
#include <AlphaCharacter.h>
#endif
#ifndef INCLUDED_Alphabet
#include <Alphabet.h>
#endif
#ifndef INCLUDED_Paths
#include <Paths.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_math_FlxMath
#include <flixel/math/FlxMath.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSound
#include <flixel/system/FlxSound.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSoundGroup
#include <flixel/system/FlxSoundGroup.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SoundFrontEnd
#include <flixel/system/frontEnds/SoundFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_FlxTimer
#include <flixel/util/FlxTimer.h>
#endif
#ifndef INCLUDED_flixel_util_FlxTimerManager
#include <flixel/util/FlxTimerManager.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_4c95a0630eaf1443_16_new,"Alphabet","new",0xc4ae3f45,"Alphabet.new","Alphabet.hx",16,0xc2e40fcb)
HX_LOCAL_STACK_FRAME(_hx_pos_4c95a0630eaf1443_76_changeText,"Alphabet","changeText",0xd95269f8,"Alphabet.changeText","Alphabet.hx",76,0xc2e40fcb)
HX_LOCAL_STACK_FRAME(_hx_pos_4c95a0630eaf1443_115_addText,"Alphabet","addText",0x712354d3,"Alphabet.addText","Alphabet.hx",115,0xc2e40fcb)
HX_LOCAL_STACK_FRAME(_hx_pos_4c95a0630eaf1443_193_doSplitWords,"Alphabet","doSplitWords",0x060ce215,"Alphabet.doSplitWords","Alphabet.hx",193,0xc2e40fcb)
HX_LOCAL_STACK_FRAME(_hx_pos_4c95a0630eaf1443_204_startTypedText,"Alphabet","startTypedText",0x740816b0,"Alphabet.startTypedText","Alphabet.hx",204,0xc2e40fcb)
HX_LOCAL_STACK_FRAME(_hx_pos_4c95a0630eaf1443_219_startTypedText,"Alphabet","startTypedText",0x740816b0,"Alphabet.startTypedText","Alphabet.hx",219,0xc2e40fcb)
HX_LOCAL_STACK_FRAME(_hx_pos_4c95a0630eaf1443_218_startTypedText,"Alphabet","startTypedText",0x740816b0,"Alphabet.startTypedText","Alphabet.hx",218,0xc2e40fcb)
HX_LOCAL_STACK_FRAME(_hx_pos_4c95a0630eaf1443_226_timerCheck,"Alphabet","timerCheck",0x88d7667e,"Alphabet.timerCheck","Alphabet.hx",226,0xc2e40fcb)
HX_LOCAL_STACK_FRAME(_hx_pos_4c95a0630eaf1443_334_update,"Alphabet","update",0xc3c1b444,"Alphabet.update","Alphabet.hx",334,0xc2e40fcb)
HX_LOCAL_STACK_FRAME(_hx_pos_4c95a0630eaf1443_351_killTheTimer,"Alphabet","killTheTimer",0x04b90bcd,"Alphabet.killTheTimer","Alphabet.hx",351,0xc2e40fcb)

void Alphabet_obj::__construct(Float x,Float y,::String __o_text, ::Dynamic __o_bold,::hx::Null< bool >  __o_typed, ::Dynamic __o_typingSpeed, ::Dynamic __o_textSize){
            		::String text = __o_text;
            		if (::hx::IsNull(__o_text)) text = HX_("",00,00,00,00);
            		 ::Dynamic bold = __o_bold;
            		if (::hx::IsNull(__o_bold)) bold = false;
            		bool typed = __o_typed.Default(false);
            		 ::Dynamic typingSpeed = __o_typingSpeed;
            		if (::hx::IsNull(__o_typingSpeed)) typingSpeed = ((Float)0.05);
            		 ::Dynamic textSize = __o_textSize;
            		if (::hx::IsNull(__o_textSize)) textSize = 1;
            	HX_STACKFRAME(&_hx_pos_4c95a0630eaf1443_16_new)
HXLINE( 225)		this->LONG_TEXT_ADD = ((Float)-24);
HXLINE( 202)		this->typeTimer = null();
HXLINE( 200)		this->consecutiveSpaces = 0;
HXLINE( 199)		this->dialogueSound = null();
HXLINE( 198)		this->curRow = 0;
HXLINE( 197)		this->xPos = ((Float)0);
HXLINE( 196)		this->loopNum = 0;
HXLINE(  48)		this->typingSpeed = ((Float)0.05);
HXLINE(  46)		this->typed = false;
HXLINE(  45)		this->finishedText = false;
HXLINE(  43)		this->lettersArray = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  42)		this->isBold = false;
HXLINE(  40)		this->splitWords = ::Array_obj< ::String >::__new(0);
HXLINE(  38)		this->xPosResetted = false;
HXLINE(  33)		this->yMulti = ((Float)1);
HXLINE(  32)		this->_finalText = HX_("",00,00,00,00);
HXLINE(  30)		this->text = HX_("",00,00,00,00);
HXLINE(  28)		this->textSize = ((Float)1.0);
HXLINE(  27)		this->isMenuItem = false;
HXLINE(  26)		this->yAdd = ((Float)0);
HXLINE(  25)		this->xAdd = ((Float)0);
HXLINE(  24)		this->yMult = ((Float)120);
HXLINE(  23)		this->targetY = ((Float)0);
HXLINE(  22)		this->forceX = ::Math_obj::NEGATIVE_INFINITY;
HXLINE(  19)		this->paused = false;
HXLINE(  18)		this->delay = ((Float)0.05);
HXLINE(  51)		super::__construct(x,y,null());
HXLINE(  52)		this->forceX = ::Math_obj::NEGATIVE_INFINITY;
HXLINE(  53)		this->textSize = ( (Float)(textSize) );
HXLINE(  55)		this->_finalText = text;
HXLINE(  56)		this->text = text;
HXLINE(  57)		this->typed = typed;
HXLINE(  58)		this->isBold = ( (bool)(bold) );
HXLINE(  60)		if ((text != HX_("",00,00,00,00))) {
HXLINE(  62)			if (typed) {
HXLINE(  64)				this->startTypedText(( (Float)(typingSpeed) ));
            			}
            			else {
HXLINE(  68)				this->addText();
            			}
            		}
            		else {
HXLINE(  71)			this->finishedText = true;
            		}
            	}

Dynamic Alphabet_obj::__CreateEmpty() { return new Alphabet_obj; }

void *Alphabet_obj::_hx_vtable = 0;

Dynamic Alphabet_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Alphabet_obj > _hx_result = new Alphabet_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6]);
	return _hx_result;
}

bool Alphabet_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x567b2b93) {
		if (inClassId<=(int)0x2c01639b) {
			if (inClassId<=(int)0x288ce903) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x288ce903;
			} else {
				return inClassId==(int)0x2c01639b;
			}
		} else {
			return inClassId==(int)0x567b2b93;
		}
	} else {
		return inClassId==(int)0x7ccf8994 || inClassId==(int)0x7dab0655;
	}
}

void Alphabet_obj::changeText(::String newText,::hx::Null< Float >  __o_newTypingSpeed){
            		Float newTypingSpeed = __o_newTypingSpeed.Default(-1);
            	HX_STACKFRAME(&_hx_pos_4c95a0630eaf1443_76_changeText)
HXLINE(  77)		{
HXLINE(  77)			int _g = 0;
HXDLIN(  77)			int _g1 = this->lettersArray->length;
HXDLIN(  77)			while((_g < _g1)){
HXLINE(  77)				_g = (_g + 1);
HXDLIN(  77)				int i = (_g - 1);
HXLINE(  78)				 ::AlphaCharacter letter = this->lettersArray->__get(0).StaticCast<  ::AlphaCharacter >();
HXLINE(  79)				letter->destroy();
HXLINE(  80)				this->remove(letter,null());
HXLINE(  81)				this->lettersArray->remove(letter);
            			}
            		}
HXLINE(  83)		this->lettersArray = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  84)		this->splitWords = ::Array_obj< ::String >::__new(0);
HXLINE(  85)		this->loopNum = 0;
HXLINE(  86)		this->xPos = ( (Float)(0) );
HXLINE(  87)		this->curRow = 0;
HXLINE(  88)		this->consecutiveSpaces = 0;
HXLINE(  89)		this->xPosResetted = false;
HXLINE(  90)		this->finishedText = false;
HXLINE(  91)		this->lastSprite = null();
HXLINE(  93)		Float lastX = this->x;
HXLINE(  94)		this->set_x(( (Float)(0) ));
HXLINE(  95)		this->_finalText = newText;
HXLINE(  96)		this->text = newText;
HXLINE(  97)		if ((newTypingSpeed != -1)) {
HXLINE(  98)			this->typingSpeed = newTypingSpeed;
            		}
HXLINE( 101)		if ((this->text != HX_("",00,00,00,00))) {
HXLINE( 102)			if (this->typed) {
HXLINE( 104)				this->startTypedText(this->typingSpeed);
            			}
            			else {
HXLINE( 106)				this->addText();
            			}
            		}
            		else {
HXLINE( 109)			this->finishedText = true;
            		}
HXLINE( 111)		this->set_x(lastX);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Alphabet_obj,changeText,(void))

void Alphabet_obj::addText(){
            	HX_GC_STACKFRAME(&_hx_pos_4c95a0630eaf1443_115_addText)
HXLINE( 116)		this->doSplitWords();
HXLINE( 118)		Float xPos = ( (Float)(0) );
HXLINE( 119)		{
HXLINE( 119)			int _g = 0;
HXDLIN( 119)			::Array< ::String > _g1 = this->splitWords;
HXDLIN( 119)			while((_g < _g1->length)){
HXLINE( 119)				::String character = _g1->__get(_g);
HXDLIN( 119)				_g = (_g + 1);
HXLINE( 125)				bool spaceChar;
HXDLIN( 125)				if ((character != HX_(" ",20,00,00,00))) {
HXLINE( 125)					if (this->isBold) {
HXLINE( 125)						spaceChar = (character == HX_("_",5f,00,00,00));
            					}
            					else {
HXLINE( 125)						spaceChar = false;
            					}
            				}
            				else {
HXLINE( 125)					spaceChar = true;
            				}
HXLINE( 126)				if (spaceChar) {
HXLINE( 128)					this->consecutiveSpaces++;
            				}
HXLINE( 131)				bool isNumber = (::AlphaCharacter_obj::numbers.indexOf(character,null()) != -1);
HXLINE( 132)				bool isSymbol = (::AlphaCharacter_obj::symbols.indexOf(character,null()) != -1);
HXLINE( 133)				::String isAlphabet = ::AlphaCharacter_obj::alphabet;
HXDLIN( 133)				bool isAlphabet1 = (isAlphabet.indexOf(character.toLowerCase(),null()) != -1);
HXLINE( 134)				bool _hx_tmp;
HXDLIN( 134)				bool _hx_tmp1;
HXDLIN( 134)				bool _hx_tmp2;
HXDLIN( 134)				if (!(isAlphabet1)) {
HXLINE( 134)					_hx_tmp2 = isSymbol;
            				}
            				else {
HXLINE( 134)					_hx_tmp2 = true;
            				}
HXDLIN( 134)				if (!(_hx_tmp2)) {
HXLINE( 134)					_hx_tmp1 = isNumber;
            				}
            				else {
HXLINE( 134)					_hx_tmp1 = true;
            				}
HXDLIN( 134)				if (_hx_tmp1) {
HXLINE( 134)					if (this->isBold) {
HXLINE( 134)						_hx_tmp = !(spaceChar);
            					}
            					else {
HXLINE( 134)						_hx_tmp = true;
            					}
            				}
            				else {
HXLINE( 134)					_hx_tmp = false;
            				}
HXDLIN( 134)				if (_hx_tmp) {
HXLINE( 136)					if (::hx::IsNotNull( this->lastSprite )) {
HXLINE( 138)						Float xPos1 = this->lastSprite->x;
HXDLIN( 138)						xPos = (xPos1 + this->lastSprite->get_width());
            					}
HXLINE( 141)					if ((this->consecutiveSpaces > 0)) {
HXLINE( 143)						xPos = (xPos + (( (Float)((40 * this->consecutiveSpaces)) ) * this->textSize));
            					}
HXLINE( 145)					this->consecutiveSpaces = 0;
HXLINE( 148)					 ::AlphaCharacter letter =  ::AlphaCharacter_obj::__alloc( HX_CTX ,xPos,( (Float)(0) ),this->textSize);
HXLINE( 150)					if (this->isBold) {
HXLINE( 152)						if (isNumber) {
HXLINE( 154)							letter->createBoldNumber(character);
            						}
            						else {
HXLINE( 156)							if (isSymbol) {
HXLINE( 158)								letter->createBoldSymbol(character);
            							}
            							else {
HXLINE( 162)								letter->createBoldLetter(character);
            							}
            						}
            					}
            					else {
HXLINE( 167)						if (isNumber) {
HXLINE( 169)							letter->createNumber(character);
            						}
            						else {
HXLINE( 171)							if (isSymbol) {
HXLINE( 173)								letter->createSymbol(character);
            							}
            							else {
HXLINE( 177)								letter->createLetter(character);
            							}
            						}
            					}
HXLINE( 181)					this->add(letter);
HXLINE( 182)					this->lettersArray->push(letter);
HXLINE( 184)					this->lastSprite = letter;
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Alphabet_obj,addText,(void))

void Alphabet_obj::doSplitWords(){
            	HX_STACKFRAME(&_hx_pos_4c95a0630eaf1443_193_doSplitWords)
HXDLIN( 193)		this->splitWords = this->_finalText.split(HX_("",00,00,00,00));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Alphabet_obj,doSplitWords,(void))

void Alphabet_obj::startTypedText(Float speed){
            	HX_GC_STACKFRAME(&_hx_pos_4c95a0630eaf1443_204_startTypedText)
HXDLIN( 204)		 ::Alphabet _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 205)		this->_finalText = this->text;
HXLINE( 206)		this->doSplitWords();
HXLINE( 210)		if ((speed <= 0)) {
HXLINE( 211)			while(!(this->finishedText)){
HXLINE( 212)				this->timerCheck(null());
            			}
HXLINE( 214)			if (::hx::IsNotNull( this->dialogueSound )) {
HXLINE( 214)				 ::flixel::_hx_system::FlxSound _this = this->dialogueSound;
HXDLIN( 214)				_this->cleanup(_this->autoDestroy,true);
            			}
HXLINE( 215)			 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 215)			this->dialogueSound = _hx_tmp->play(::Paths_obj::sound(HX_("dialogue",18,2d,94,a7),null()),null(),null(),null(),null(),null());
            		}
            		else {
            			HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_1, ::Alphabet,_gthis,Float,speed) HXARGC(1)
            			void _hx_run( ::flixel::util::FlxTimer tmr){
            				HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::Alphabet,_gthis) HXARGC(1)
            				void _hx_run( ::flixel::util::FlxTimer tmr){
            					HX_GC_STACKFRAME(&_hx_pos_4c95a0630eaf1443_219_startTypedText)
HXLINE( 219)					_gthis->timerCheck(tmr);
            				}
            				HX_END_LOCAL_FUNC1((void))

            				HX_GC_STACKFRAME(&_hx_pos_4c95a0630eaf1443_218_startTypedText)
HXLINE( 218)				_gthis->typeTimer =  ::flixel::util::FlxTimer_obj::__alloc( HX_CTX ,null())->start(speed, ::Dynamic(new _hx_Closure_0(_gthis)),0);
            			}
            			HX_END_LOCAL_FUNC1((void))

HXLINE( 217)			this->typeTimer =  ::flixel::util::FlxTimer_obj::__alloc( HX_CTX ,null())->start(((Float)0.1), ::Dynamic(new _hx_Closure_1(_gthis,speed)),null());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Alphabet_obj,startTypedText,(void))

void Alphabet_obj::timerCheck( ::flixel::util::FlxTimer tmr){
            	HX_GC_STACKFRAME(&_hx_pos_4c95a0630eaf1443_226_timerCheck)
HXLINE( 227)		bool autoBreak = false;
HXLINE( 228)		bool _hx_tmp;
HXDLIN( 228)		bool _hx_tmp1;
HXDLIN( 228)		bool _hx_tmp2;
HXDLIN( 228)		if ((this->loopNum <= (this->splitWords->length - 2))) {
HXLINE( 228)			_hx_tmp2 = (this->splitWords->__get(this->loopNum) == HX_("\\",5c,00,00,00));
            		}
            		else {
HXLINE( 228)			_hx_tmp2 = false;
            		}
HXDLIN( 228)		if (_hx_tmp2) {
HXLINE( 228)			_hx_tmp1 = (this->splitWords->__get((this->loopNum + 1)) == HX_("n",6e,00,00,00));
            		}
            		else {
HXLINE( 228)			_hx_tmp1 = false;
            		}
HXDLIN( 228)		if (!(_hx_tmp1)) {
HXLINE( 229)			bool _hx_tmp1;
HXDLIN( 229)			autoBreak = true;
HXDLIN( 229)			if (autoBreak) {
HXLINE( 229)				_hx_tmp1 = (this->xPos >= (( (Float)(::flixel::FlxG_obj::width) ) * ((Float)0.65)));
            			}
            			else {
HXLINE( 229)				_hx_tmp1 = false;
            			}
HXDLIN( 229)			if (_hx_tmp1) {
HXLINE( 228)				_hx_tmp = (this->splitWords->__get(this->loopNum) == HX_(" ",20,00,00,00));
            			}
            			else {
HXLINE( 228)				_hx_tmp = false;
            			}
            		}
            		else {
HXLINE( 228)			_hx_tmp = true;
            		}
HXDLIN( 228)		if (_hx_tmp) {
HXLINE( 231)			if (autoBreak) {
HXLINE( 232)				if (::hx::IsNotNull( tmr )) {
HXLINE( 232)					 ::flixel::util::FlxTimer tmr1 = tmr;
HXDLIN( 232)					tmr1->loops = (tmr1->loops - 1);
            				}
HXLINE( 233)				 ::Alphabet _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 233)				_hx_tmp->loopNum = (_hx_tmp->loopNum + 1);
            			}
            			else {
HXLINE( 235)				if (::hx::IsNotNull( tmr )) {
HXLINE( 235)					 ::flixel::util::FlxTimer tmr1 = tmr;
HXDLIN( 235)					tmr1->loops = (tmr1->loops - 2);
            				}
HXLINE( 236)				 ::Alphabet _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 236)				_hx_tmp->loopNum = (_hx_tmp->loopNum + 2);
            			}
HXLINE( 238)			 ::Alphabet _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 238)			_hx_tmp->yMulti = (_hx_tmp->yMulti + 1);
HXLINE( 239)			this->xPosResetted = true;
HXLINE( 240)			this->xPos = ( (Float)(0) );
HXLINE( 241)			 ::Alphabet _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 241)			_hx_tmp1->curRow = (_hx_tmp1->curRow + 1);
HXLINE( 242)			if ((this->curRow == 2)) {
HXLINE( 242)				this->set_y((this->y + this->LONG_TEXT_ADD));
            			}
            		}
HXLINE( 245)		bool _hx_tmp3;
HXDLIN( 245)		if ((this->loopNum <= this->splitWords->length)) {
HXLINE( 245)			_hx_tmp3 = ::hx::IsNotNull( this->splitWords->__get(this->loopNum) );
            		}
            		else {
HXLINE( 245)			_hx_tmp3 = false;
            		}
HXDLIN( 245)		if (_hx_tmp3) {
HXLINE( 246)			bool spaceChar;
HXDLIN( 246)			if ((this->splitWords->__get(this->loopNum) != HX_(" ",20,00,00,00))) {
HXLINE( 246)				if (this->isBold) {
HXLINE( 246)					spaceChar = (this->splitWords->__get(this->loopNum) == HX_("_",5f,00,00,00));
            				}
            				else {
HXLINE( 246)					spaceChar = false;
            				}
            			}
            			else {
HXLINE( 246)				spaceChar = true;
            			}
HXLINE( 247)			if (spaceChar) {
HXLINE( 249)				this->consecutiveSpaces++;
            			}
HXLINE( 252)			bool isNumber = (::AlphaCharacter_obj::numbers.indexOf(this->splitWords->__get(this->loopNum),null()) != -1);
HXLINE( 253)			bool isSymbol = (::AlphaCharacter_obj::symbols.indexOf(this->splitWords->__get(this->loopNum),null()) != -1);
HXLINE( 254)			::String isAlphabet = ::AlphaCharacter_obj::alphabet;
HXDLIN( 254)			bool isAlphabet1 = (isAlphabet.indexOf(this->splitWords->__get(this->loopNum).toLowerCase(),null()) != -1);
HXLINE( 256)			bool _hx_tmp;
HXDLIN( 256)			bool _hx_tmp1;
HXDLIN( 256)			bool _hx_tmp2;
HXDLIN( 256)			if (!(isAlphabet1)) {
HXLINE( 256)				_hx_tmp2 = isSymbol;
            			}
            			else {
HXLINE( 256)				_hx_tmp2 = true;
            			}
HXDLIN( 256)			if (!(_hx_tmp2)) {
HXLINE( 256)				_hx_tmp1 = isNumber;
            			}
            			else {
HXLINE( 256)				_hx_tmp1 = true;
            			}
HXDLIN( 256)			if (_hx_tmp1) {
HXLINE( 256)				if (this->isBold) {
HXLINE( 256)					_hx_tmp = !(spaceChar);
            				}
            				else {
HXLINE( 256)					_hx_tmp = true;
            				}
            			}
            			else {
HXLINE( 256)				_hx_tmp = false;
            			}
HXDLIN( 256)			if (_hx_tmp) {
HXLINE( 258)				bool _hx_tmp;
HXDLIN( 258)				if (::hx::IsNotNull( this->lastSprite )) {
HXLINE( 258)					_hx_tmp = !(this->xPosResetted);
            				}
            				else {
HXLINE( 258)					_hx_tmp = false;
            				}
HXDLIN( 258)				if (_hx_tmp) {
HXLINE( 260)					this->lastSprite->updateHitbox();
HXLINE( 261)					 ::Alphabet _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 261)					Float _hx_tmp1 = _hx_tmp->xPos;
HXDLIN( 261)					_hx_tmp->xPos = (_hx_tmp1 + (this->lastSprite->get_width() + 3));
            				}
            				else {
HXLINE( 267)					this->xPosResetted = false;
            				}
HXLINE( 270)				if ((this->consecutiveSpaces > 0)) {
HXLINE( 272)					 ::Alphabet _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 272)					_hx_tmp->xPos = (_hx_tmp->xPos + (( (Float)((20 * this->consecutiveSpaces)) ) * this->textSize));
            				}
HXLINE( 274)				this->consecutiveSpaces = 0;
HXLINE( 277)				 ::AlphaCharacter letter =  ::AlphaCharacter_obj::__alloc( HX_CTX ,this->xPos,(( (Float)(55) ) * this->yMulti),this->textSize);
HXLINE( 278)				letter->row = this->curRow;
HXLINE( 279)				if (this->isBold) {
HXLINE( 281)					if (isNumber) {
HXLINE( 283)						letter->createBoldNumber(this->splitWords->__get(this->loopNum));
            					}
            					else {
HXLINE( 285)						if (isSymbol) {
HXLINE( 287)							letter->createBoldSymbol(this->splitWords->__get(this->loopNum));
            						}
            						else {
HXLINE( 291)							letter->createBoldLetter(this->splitWords->__get(this->loopNum));
            						}
            					}
            				}
            				else {
HXLINE( 296)					if (isNumber) {
HXLINE( 298)						letter->createNumber(this->splitWords->__get(this->loopNum));
            					}
            					else {
HXLINE( 300)						if (isSymbol) {
HXLINE( 302)							letter->createSymbol(this->splitWords->__get(this->loopNum));
            						}
            						else {
HXLINE( 306)							letter->createLetter(this->splitWords->__get(this->loopNum));
            						}
            					}
            				}
HXLINE( 309)				letter->set_x((letter->x + 90));
HXLINE( 311)				if (::hx::IsNotNull( tmr )) {
HXLINE( 312)					if (::hx::IsNotNull( this->dialogueSound )) {
HXLINE( 312)						 ::flixel::_hx_system::FlxSound _this = this->dialogueSound;
HXDLIN( 312)						_this->cleanup(_this->autoDestroy,true);
            					}
HXLINE( 313)					 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 313)					this->dialogueSound = _hx_tmp->play(::Paths_obj::sound(HX_("dialogue",18,2d,94,a7),null()),null(),null(),null(),null(),null());
            				}
HXLINE( 316)				this->add(letter);
HXLINE( 318)				this->lastSprite = letter;
            			}
            		}
HXLINE( 322)		this->loopNum++;
HXLINE( 323)		if ((this->loopNum >= this->splitWords->length)) {
HXLINE( 324)			if (::hx::IsNotNull( tmr )) {
HXLINE( 325)				this->typeTimer = null();
HXLINE( 326)				tmr->cancel();
HXLINE( 327)				tmr->destroy();
            			}
HXLINE( 329)			this->finishedText = true;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Alphabet_obj,timerCheck,(void))

void Alphabet_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_4c95a0630eaf1443_334_update)
HXLINE( 335)		if (this->isMenuItem) {
HXLINE( 337)			Float scaledY = ::flixel::math::FlxMath_obj::remapToRange(this->targetY,( (Float)(0) ),( (Float)(1) ),( (Float)(0) ),((Float)1.3));
HXLINE( 339)			Float lerpVal = ::Math_obj::max(( (Float)(0) ),::Math_obj::min(( (Float)(1) ),(elapsed * ((Float)9.6))));
HXLINE( 340)			Float a = this->y;
HXDLIN( 340)			this->set_y((a + (lerpVal * ((((scaledY * this->yMult) + (( (Float)(::flixel::FlxG_obj::height) ) * ((Float)0.48))) + this->yAdd) - a))));
HXLINE( 341)			if ((this->forceX != ::Math_obj::NEGATIVE_INFINITY)) {
HXLINE( 342)				this->set_x(this->forceX);
            			}
            			else {
HXLINE( 344)				Float a = this->x;
HXDLIN( 344)				this->set_x((a + (lerpVal * ((((this->targetY * ( (Float)(20) )) + 90) + this->xAdd) - a))));
            			}
            		}
HXLINE( 348)		this->super::update(elapsed);
            	}


void Alphabet_obj::killTheTimer(){
            	HX_STACKFRAME(&_hx_pos_4c95a0630eaf1443_351_killTheTimer)
HXLINE( 352)		if (::hx::IsNotNull( this->typeTimer )) {
HXLINE( 353)			this->typeTimer->cancel();
HXLINE( 354)			this->typeTimer->destroy();
            		}
HXLINE( 356)		this->typeTimer = null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Alphabet_obj,killTheTimer,(void))


::hx::ObjectPtr< Alphabet_obj > Alphabet_obj::__new(Float x,Float y,::String __o_text, ::Dynamic __o_bold,::hx::Null< bool >  __o_typed, ::Dynamic __o_typingSpeed, ::Dynamic __o_textSize) {
	::hx::ObjectPtr< Alphabet_obj > __this = new Alphabet_obj();
	__this->__construct(x,y,__o_text,__o_bold,__o_typed,__o_typingSpeed,__o_textSize);
	return __this;
}

::hx::ObjectPtr< Alphabet_obj > Alphabet_obj::__alloc(::hx::Ctx *_hx_ctx,Float x,Float y,::String __o_text, ::Dynamic __o_bold,::hx::Null< bool >  __o_typed, ::Dynamic __o_typingSpeed, ::Dynamic __o_textSize) {
	Alphabet_obj *__this = (Alphabet_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Alphabet_obj), true, "Alphabet"));
	*(void **)__this = Alphabet_obj::_hx_vtable;
	__this->__construct(x,y,__o_text,__o_bold,__o_typed,__o_typingSpeed,__o_textSize);
	return __this;
}

Alphabet_obj::Alphabet_obj()
{
}

void Alphabet_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Alphabet);
	HX_MARK_MEMBER_NAME(delay,"delay");
	HX_MARK_MEMBER_NAME(paused,"paused");
	HX_MARK_MEMBER_NAME(forceX,"forceX");
	HX_MARK_MEMBER_NAME(targetY,"targetY");
	HX_MARK_MEMBER_NAME(yMult,"yMult");
	HX_MARK_MEMBER_NAME(xAdd,"xAdd");
	HX_MARK_MEMBER_NAME(yAdd,"yAdd");
	HX_MARK_MEMBER_NAME(isMenuItem,"isMenuItem");
	HX_MARK_MEMBER_NAME(textSize,"textSize");
	HX_MARK_MEMBER_NAME(text,"text");
	HX_MARK_MEMBER_NAME(_finalText,"_finalText");
	HX_MARK_MEMBER_NAME(yMulti,"yMulti");
	HX_MARK_MEMBER_NAME(lastSprite,"lastSprite");
	HX_MARK_MEMBER_NAME(xPosResetted,"xPosResetted");
	HX_MARK_MEMBER_NAME(splitWords,"splitWords");
	HX_MARK_MEMBER_NAME(isBold,"isBold");
	HX_MARK_MEMBER_NAME(lettersArray,"lettersArray");
	HX_MARK_MEMBER_NAME(finishedText,"finishedText");
	HX_MARK_MEMBER_NAME(typed,"typed");
	HX_MARK_MEMBER_NAME(typingSpeed,"typingSpeed");
	HX_MARK_MEMBER_NAME(loopNum,"loopNum");
	HX_MARK_MEMBER_NAME(xPos,"xPos");
	HX_MARK_MEMBER_NAME(curRow,"curRow");
	HX_MARK_MEMBER_NAME(dialogueSound,"dialogueSound");
	HX_MARK_MEMBER_NAME(consecutiveSpaces,"consecutiveSpaces");
	HX_MARK_MEMBER_NAME(typeTimer,"typeTimer");
	HX_MARK_MEMBER_NAME(LONG_TEXT_ADD,"LONG_TEXT_ADD");
	 ::flixel::group::FlxTypedSpriteGroup_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Alphabet_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(delay,"delay");
	HX_VISIT_MEMBER_NAME(paused,"paused");
	HX_VISIT_MEMBER_NAME(forceX,"forceX");
	HX_VISIT_MEMBER_NAME(targetY,"targetY");
	HX_VISIT_MEMBER_NAME(yMult,"yMult");
	HX_VISIT_MEMBER_NAME(xAdd,"xAdd");
	HX_VISIT_MEMBER_NAME(yAdd,"yAdd");
	HX_VISIT_MEMBER_NAME(isMenuItem,"isMenuItem");
	HX_VISIT_MEMBER_NAME(textSize,"textSize");
	HX_VISIT_MEMBER_NAME(text,"text");
	HX_VISIT_MEMBER_NAME(_finalText,"_finalText");
	HX_VISIT_MEMBER_NAME(yMulti,"yMulti");
	HX_VISIT_MEMBER_NAME(lastSprite,"lastSprite");
	HX_VISIT_MEMBER_NAME(xPosResetted,"xPosResetted");
	HX_VISIT_MEMBER_NAME(splitWords,"splitWords");
	HX_VISIT_MEMBER_NAME(isBold,"isBold");
	HX_VISIT_MEMBER_NAME(lettersArray,"lettersArray");
	HX_VISIT_MEMBER_NAME(finishedText,"finishedText");
	HX_VISIT_MEMBER_NAME(typed,"typed");
	HX_VISIT_MEMBER_NAME(typingSpeed,"typingSpeed");
	HX_VISIT_MEMBER_NAME(loopNum,"loopNum");
	HX_VISIT_MEMBER_NAME(xPos,"xPos");
	HX_VISIT_MEMBER_NAME(curRow,"curRow");
	HX_VISIT_MEMBER_NAME(dialogueSound,"dialogueSound");
	HX_VISIT_MEMBER_NAME(consecutiveSpaces,"consecutiveSpaces");
	HX_VISIT_MEMBER_NAME(typeTimer,"typeTimer");
	HX_VISIT_MEMBER_NAME(LONG_TEXT_ADD,"LONG_TEXT_ADD");
	 ::flixel::group::FlxTypedSpriteGroup_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Alphabet_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"xAdd") ) { return ::hx::Val( xAdd ); }
		if (HX_FIELD_EQ(inName,"yAdd") ) { return ::hx::Val( yAdd ); }
		if (HX_FIELD_EQ(inName,"text") ) { return ::hx::Val( text ); }
		if (HX_FIELD_EQ(inName,"xPos") ) { return ::hx::Val( xPos ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"delay") ) { return ::hx::Val( delay ); }
		if (HX_FIELD_EQ(inName,"yMult") ) { return ::hx::Val( yMult ); }
		if (HX_FIELD_EQ(inName,"typed") ) { return ::hx::Val( typed ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"paused") ) { return ::hx::Val( paused ); }
		if (HX_FIELD_EQ(inName,"forceX") ) { return ::hx::Val( forceX ); }
		if (HX_FIELD_EQ(inName,"yMulti") ) { return ::hx::Val( yMulti ); }
		if (HX_FIELD_EQ(inName,"isBold") ) { return ::hx::Val( isBold ); }
		if (HX_FIELD_EQ(inName,"curRow") ) { return ::hx::Val( curRow ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"targetY") ) { return ::hx::Val( targetY ); }
		if (HX_FIELD_EQ(inName,"addText") ) { return ::hx::Val( addText_dyn() ); }
		if (HX_FIELD_EQ(inName,"loopNum") ) { return ::hx::Val( loopNum ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"textSize") ) { return ::hx::Val( textSize ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"typeTimer") ) { return ::hx::Val( typeTimer ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"isMenuItem") ) { return ::hx::Val( isMenuItem ); }
		if (HX_FIELD_EQ(inName,"_finalText") ) { return ::hx::Val( _finalText ); }
		if (HX_FIELD_EQ(inName,"lastSprite") ) { return ::hx::Val( lastSprite ); }
		if (HX_FIELD_EQ(inName,"splitWords") ) { return ::hx::Val( splitWords ); }
		if (HX_FIELD_EQ(inName,"changeText") ) { return ::hx::Val( changeText_dyn() ); }
		if (HX_FIELD_EQ(inName,"timerCheck") ) { return ::hx::Val( timerCheck_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"typingSpeed") ) { return ::hx::Val( typingSpeed ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"xPosResetted") ) { return ::hx::Val( xPosResetted ); }
		if (HX_FIELD_EQ(inName,"lettersArray") ) { return ::hx::Val( lettersArray ); }
		if (HX_FIELD_EQ(inName,"finishedText") ) { return ::hx::Val( finishedText ); }
		if (HX_FIELD_EQ(inName,"doSplitWords") ) { return ::hx::Val( doSplitWords_dyn() ); }
		if (HX_FIELD_EQ(inName,"killTheTimer") ) { return ::hx::Val( killTheTimer_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"dialogueSound") ) { return ::hx::Val( dialogueSound ); }
		if (HX_FIELD_EQ(inName,"LONG_TEXT_ADD") ) { return ::hx::Val( LONG_TEXT_ADD ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"startTypedText") ) { return ::hx::Val( startTypedText_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"consecutiveSpaces") ) { return ::hx::Val( consecutiveSpaces ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Alphabet_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"xAdd") ) { xAdd=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"yAdd") ) { yAdd=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"text") ) { text=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"xPos") ) { xPos=inValue.Cast< Float >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"delay") ) { delay=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"yMult") ) { yMult=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"typed") ) { typed=inValue.Cast< bool >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"paused") ) { paused=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"forceX") ) { forceX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"yMulti") ) { yMulti=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"isBold") ) { isBold=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"curRow") ) { curRow=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"targetY") ) { targetY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"loopNum") ) { loopNum=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"textSize") ) { textSize=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"typeTimer") ) { typeTimer=inValue.Cast<  ::flixel::util::FlxTimer >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"isMenuItem") ) { isMenuItem=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_finalText") ) { _finalText=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lastSprite") ) { lastSprite=inValue.Cast<  ::AlphaCharacter >(); return inValue; }
		if (HX_FIELD_EQ(inName,"splitWords") ) { splitWords=inValue.Cast< ::Array< ::String > >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"typingSpeed") ) { typingSpeed=inValue.Cast< Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"xPosResetted") ) { xPosResetted=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lettersArray") ) { lettersArray=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"finishedText") ) { finishedText=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"dialogueSound") ) { dialogueSound=inValue.Cast<  ::flixel::_hx_system::FlxSound >(); return inValue; }
		if (HX_FIELD_EQ(inName,"LONG_TEXT_ADD") ) { LONG_TEXT_ADD=inValue.Cast< Float >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"consecutiveSpaces") ) { consecutiveSpaces=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Alphabet_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("delay",83,d7,26,d7));
	outFields->push(HX_("paused",ae,40,84,ef));
	outFields->push(HX_("forceX",0d,fc,86,fd));
	outFields->push(HX_("targetY",e8,f3,67,88));
	outFields->push(HX_("yMult",09,c5,ba,de));
	outFields->push(HX_("xAdd",89,44,83,4f));
	outFields->push(HX_("yAdd",28,7b,2c,50));
	outFields->push(HX_("isMenuItem",5c,04,de,c6));
	outFields->push(HX_("textSize",0e,f4,4e,4f));
	outFields->push(HX_("text",ad,cc,f9,4c));
	outFields->push(HX_("_finalText",04,c7,73,eb));
	outFields->push(HX_("yMulti",40,a3,b1,04));
	outFields->push(HX_("lastSprite",fb,be,70,8e));
	outFields->push(HX_("xPosResetted",80,a7,a1,63));
	outFields->push(HX_("splitWords",2f,7e,9f,9d));
	outFields->push(HX_("isBold",8f,46,82,5e));
	outFields->push(HX_("lettersArray",8c,b9,e1,14));
	outFields->push(HX_("finishedText",3f,2d,d5,f6));
	outFields->push(HX_("typed",6a,70,cb,1a));
	outFields->push(HX_("typingSpeed",90,39,dc,28));
	outFields->push(HX_("loopNum",42,06,69,20));
	outFields->push(HX_("xPos",fc,af,8e,4f));
	outFields->push(HX_("curRow",7a,84,cf,3e));
	outFields->push(HX_("dialogueSound",97,58,b3,1b));
	outFields->push(HX_("consecutiveSpaces",77,fc,aa,aa));
	outFields->push(HX_("typeTimer",ab,1a,0e,d5));
	outFields->push(HX_("LONG_TEXT_ADD",92,bc,1d,a5));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Alphabet_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(Alphabet_obj,delay),HX_("delay",83,d7,26,d7)},
	{::hx::fsBool,(int)offsetof(Alphabet_obj,paused),HX_("paused",ae,40,84,ef)},
	{::hx::fsFloat,(int)offsetof(Alphabet_obj,forceX),HX_("forceX",0d,fc,86,fd)},
	{::hx::fsFloat,(int)offsetof(Alphabet_obj,targetY),HX_("targetY",e8,f3,67,88)},
	{::hx::fsFloat,(int)offsetof(Alphabet_obj,yMult),HX_("yMult",09,c5,ba,de)},
	{::hx::fsFloat,(int)offsetof(Alphabet_obj,xAdd),HX_("xAdd",89,44,83,4f)},
	{::hx::fsFloat,(int)offsetof(Alphabet_obj,yAdd),HX_("yAdd",28,7b,2c,50)},
	{::hx::fsBool,(int)offsetof(Alphabet_obj,isMenuItem),HX_("isMenuItem",5c,04,de,c6)},
	{::hx::fsFloat,(int)offsetof(Alphabet_obj,textSize),HX_("textSize",0e,f4,4e,4f)},
	{::hx::fsString,(int)offsetof(Alphabet_obj,text),HX_("text",ad,cc,f9,4c)},
	{::hx::fsString,(int)offsetof(Alphabet_obj,_finalText),HX_("_finalText",04,c7,73,eb)},
	{::hx::fsFloat,(int)offsetof(Alphabet_obj,yMulti),HX_("yMulti",40,a3,b1,04)},
	{::hx::fsObject /*  ::AlphaCharacter */ ,(int)offsetof(Alphabet_obj,lastSprite),HX_("lastSprite",fb,be,70,8e)},
	{::hx::fsBool,(int)offsetof(Alphabet_obj,xPosResetted),HX_("xPosResetted",80,a7,a1,63)},
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(Alphabet_obj,splitWords),HX_("splitWords",2f,7e,9f,9d)},
	{::hx::fsBool,(int)offsetof(Alphabet_obj,isBold),HX_("isBold",8f,46,82,5e)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Alphabet_obj,lettersArray),HX_("lettersArray",8c,b9,e1,14)},
	{::hx::fsBool,(int)offsetof(Alphabet_obj,finishedText),HX_("finishedText",3f,2d,d5,f6)},
	{::hx::fsBool,(int)offsetof(Alphabet_obj,typed),HX_("typed",6a,70,cb,1a)},
	{::hx::fsFloat,(int)offsetof(Alphabet_obj,typingSpeed),HX_("typingSpeed",90,39,dc,28)},
	{::hx::fsInt,(int)offsetof(Alphabet_obj,loopNum),HX_("loopNum",42,06,69,20)},
	{::hx::fsFloat,(int)offsetof(Alphabet_obj,xPos),HX_("xPos",fc,af,8e,4f)},
	{::hx::fsInt,(int)offsetof(Alphabet_obj,curRow),HX_("curRow",7a,84,cf,3e)},
	{::hx::fsObject /*  ::flixel::_hx_system::FlxSound */ ,(int)offsetof(Alphabet_obj,dialogueSound),HX_("dialogueSound",97,58,b3,1b)},
	{::hx::fsInt,(int)offsetof(Alphabet_obj,consecutiveSpaces),HX_("consecutiveSpaces",77,fc,aa,aa)},
	{::hx::fsObject /*  ::flixel::util::FlxTimer */ ,(int)offsetof(Alphabet_obj,typeTimer),HX_("typeTimer",ab,1a,0e,d5)},
	{::hx::fsFloat,(int)offsetof(Alphabet_obj,LONG_TEXT_ADD),HX_("LONG_TEXT_ADD",92,bc,1d,a5)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Alphabet_obj_sStaticStorageInfo = 0;
#endif

static ::String Alphabet_obj_sMemberFields[] = {
	HX_("delay",83,d7,26,d7),
	HX_("paused",ae,40,84,ef),
	HX_("forceX",0d,fc,86,fd),
	HX_("targetY",e8,f3,67,88),
	HX_("yMult",09,c5,ba,de),
	HX_("xAdd",89,44,83,4f),
	HX_("yAdd",28,7b,2c,50),
	HX_("isMenuItem",5c,04,de,c6),
	HX_("textSize",0e,f4,4e,4f),
	HX_("text",ad,cc,f9,4c),
	HX_("_finalText",04,c7,73,eb),
	HX_("yMulti",40,a3,b1,04),
	HX_("lastSprite",fb,be,70,8e),
	HX_("xPosResetted",80,a7,a1,63),
	HX_("splitWords",2f,7e,9f,9d),
	HX_("isBold",8f,46,82,5e),
	HX_("lettersArray",8c,b9,e1,14),
	HX_("finishedText",3f,2d,d5,f6),
	HX_("typed",6a,70,cb,1a),
	HX_("typingSpeed",90,39,dc,28),
	HX_("changeText",3d,02,43,27),
	HX_("addText",6e,0f,37,89),
	HX_("doSplitWords",9a,d5,87,23),
	HX_("loopNum",42,06,69,20),
	HX_("xPos",fc,af,8e,4f),
	HX_("curRow",7a,84,cf,3e),
	HX_("dialogueSound",97,58,b3,1b),
	HX_("consecutiveSpaces",77,fc,aa,aa),
	HX_("typeTimer",ab,1a,0e,d5),
	HX_("startTypedText",75,b5,ca,1c),
	HX_("LONG_TEXT_ADD",92,bc,1d,a5),
	HX_("timerCheck",c3,fe,c7,d6),
	HX_("update",09,86,05,87),
	HX_("killTheTimer",52,ff,33,22),
	::String(null()) };

::hx::Class Alphabet_obj::__mClass;

void Alphabet_obj::__register()
{
	Alphabet_obj _hx_dummy;
	Alphabet_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("Alphabet",d3,38,ea,fa);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Alphabet_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Alphabet_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Alphabet_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Alphabet_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

