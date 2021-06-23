// Generated by Haxe 4.1.5
#include <hxcpp.h>

#ifndef INCLUDED_5f5af744d9ff5693
#define INCLUDED_5f5af744d9ff5693
#include "cpp/Pointer.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringBuf
#include <StringBuf.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_polymod_Polymod
#include <polymod/Polymod.h>
#endif
#ifndef INCLUDED_polymod_format_BaseParseFormat
#include <polymod/format/BaseParseFormat.h>
#endif
#ifndef INCLUDED_polymod_format_CSV
#include <polymod/format/CSV.h>
#endif
#ifndef INCLUDED_polymod_format_CSVParseFormat
#include <polymod/format/CSVParseFormat.h>
#endif
#ifndef INCLUDED_polymod_format_TextFileFormat
#include <polymod/format/TextFileFormat.h>
#endif
#ifndef INCLUDED_polymod_util_Util
#include <polymod/util/Util.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_47f6066263d681f0_99_new,"polymod.format.CSVParseFormat","new",0x5ec44915,"polymod.format.CSVParseFormat.new","polymod/format/ParseRules.hx",99,0xc5c5c43b)
HX_LOCAL_STACK_FRAME(_hx_pos_47f6066263d681f0_107_get_isSimpleMode,"polymod.format.CSVParseFormat","get_isSimpleMode",0x118293f3,"polymod.format.CSVParseFormat.get_isSimpleMode","polymod/format/ParseRules.hx",107,0xc5c5c43b)
HX_LOCAL_STACK_FRAME(_hx_pos_47f6066263d681f0_112_parse,"polymod.format.CSVParseFormat","parse",0xf35d6028,"polymod.format.CSVParseFormat.parse","polymod/format/ParseRules.hx",112,0xc5c5c43b)
HX_LOCAL_STACK_FRAME(_hx_pos_47f6066263d681f0_116_append,"polymod.format.CSVParseFormat","append",0xa0a20845,"polymod.format.CSVParseFormat.append","polymod/format/ParseRules.hx",116,0xc5c5c43b)
HX_LOCAL_STACK_FRAME(_hx_pos_47f6066263d681f0_212_merge,"polymod.format.CSVParseFormat","merge",0x3bce72ad,"polymod.format.CSVParseFormat.merge","polymod/format/ParseRules.hx",212,0xc5c5c43b)
HX_LOCAL_STACK_FRAME(_hx_pos_47f6066263d681f0_253_print,"polymod.format.CSVParseFormat","print",0xfe932822,"polymod.format.CSVParseFormat.print","polymod/format/ParseRules.hx",253,0xc5c5c43b)
static const ::String _hx_array_data_2d231aa3_17[] = {
	HX_("\r\n",5d,0b,00,00),
};
static const ::String _hx_array_data_2d231aa3_18[] = {
	HX_("\r\n",5d,0b,00,00),
};
namespace polymod{
namespace format{

void CSVParseFormat_obj::__construct(::String delimeter,bool quotedCells){
            	HX_STACKFRAME(&_hx_pos_47f6066263d681f0_99_new)
HXLINE( 100)		this->format = ::polymod::format::TextFileFormat_obj::CSV_dyn();
HXLINE( 101)		this->delimeter = delimeter;
HXLINE( 102)		this->quotedCells = quotedCells;
            	}

Dynamic CSVParseFormat_obj::__CreateEmpty() { return new CSVParseFormat_obj; }

void *CSVParseFormat_obj::_hx_vtable = 0;

Dynamic CSVParseFormat_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< CSVParseFormat_obj > _hx_result = new CSVParseFormat_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool CSVParseFormat_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x1a821905;
}

static ::polymod::format::BaseParseFormat_obj _hx_polymod_format_CSVParseFormat__hx_polymod_format_BaseParseFormat= {
	( ::String (::hx::Object::*)(::String,::String,::String))&::polymod::format::CSVParseFormat_obj::append,
	( ::String (::hx::Object::*)(::String,::String,::String))&::polymod::format::CSVParseFormat_obj::merge,
};

void *CSVParseFormat_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0xa2d29dcc: return &_hx_polymod_format_CSVParseFormat__hx_polymod_format_BaseParseFormat;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

bool CSVParseFormat_obj::get_isSimpleMode(){
            	HX_STACKFRAME(&_hx_pos_47f6066263d681f0_107_get_isSimpleMode)
HXDLIN( 107)		if ((this->delimeter == HX_(",",2c,00,00,00))) {
HXDLIN( 107)			return (this->quotedCells == false);
            		}
            		else {
HXDLIN( 107)			return false;
            		}
HXDLIN( 107)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(CSVParseFormat_obj,get_isSimpleMode,return )

 ::polymod::format::CSV CSVParseFormat_obj::parse(::String str){
            	HX_STACKFRAME(&_hx_pos_47f6066263d681f0_112_parse)
HXDLIN( 112)		return ::polymod::format::CSV_obj::parse(str,this->delimeter,this->quotedCells);
            	}


HX_DEFINE_DYNAMIC_FUNC1(CSVParseFormat_obj,parse,return )

::String CSVParseFormat_obj::append(::String baseText,::String appendText,::String id){
            	HX_STACKFRAME(&_hx_pos_47f6066263d681f0_116_append)
HXLINE( 117)		::String endLine = HX_("\n",0a,00,00,00);
HXLINE( 118)		if ((baseText.indexOf(HX_("\r\n",5d,0b,00,00),null()) != -1)) {
HXLINE( 119)			endLine = HX_("\r\n",5d,0b,00,00);
            		}
HXLINE( 121)		if (this->lookForHeaders) {
HXLINE( 123)			 ::polymod::format::CSV baseCSV;
HXLINE( 124)			 ::polymod::format::CSV appendCSV;
HXLINE( 127)			::String appendEndLine = HX_("\n",0a,00,00,00);
HXLINE( 128)			if ((appendText.indexOf(HX_("\r\n",5d,0b,00,00),null()) != -1)) {
HXLINE( 129)				appendEndLine = HX_("\r\n",5d,0b,00,00);
            			}
HXLINE( 131)			int appendLength = ::polymod::util::Util_obj::uLength(appendText);
HXLINE( 132)			int appendLast = ::polymod::util::Util_obj::uLastIndexOf(appendText,appendEndLine,null());
HXLINE( 133)			bool _hx_tmp;
HXDLIN( 133)			if ((appendLast != (appendLength - 1))) {
HXLINE( 133)				_hx_tmp = (appendLast == (appendLength - 2));
            			}
            			else {
HXLINE( 133)				_hx_tmp = true;
            			}
HXDLIN( 133)			if (_hx_tmp) {
HXLINE( 134)				appendText = ::polymod::util::Util_obj::uSubstr(appendText,0,(appendLength - ::polymod::util::Util_obj::uLength(appendEndLine)));
            			}
HXLINE( 137)			try {
            				HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 139)				baseCSV = ::polymod::format::CSV_obj::parseWithFormat(baseText,::hx::ObjectPtr<OBJ_>(this));
HXLINE( 140)				appendCSV = ::polymod::format::CSV_obj::parseWithFormat(appendText,::hx::ObjectPtr<OBJ_>(this));
            			} catch( ::Dynamic _hx_e) {
            				if (_hx_e.IsClass<  ::Dynamic >() ){
            					HX_STACK_BEGIN_CATCH
            					 ::Dynamic _g = _hx_e;
HXLINE(   1)					 ::Dynamic msg = ::haxe::Exception_obj::caught(_g)->unwrap();
HXLINE( 144)					::polymod::Polymod_obj::error(HX_("append_error",63,d4,ca,e5),(((HX_("CSV Append error (",e4,f0,34,73) + id) + HX_(") : ",3d,3a,32,1b)) + ::Std_obj::string(msg)),null());
HXLINE( 145)					return baseText;
            				}
            				else {
            					HX_STACK_DO_THROW(_hx_e);
            				}
            			}
HXLINE( 148)			::String finalText = baseText;
HXLINE( 149)			int finalLength = ::polymod::util::Util_obj::uLength(finalText);
HXLINE( 151)			int lastEndLine = ::polymod::util::Util_obj::uLastIndexOf(finalText,endLine,null());
HXLINE( 152)			bool addFinalEndline = false;
HXLINE( 154)			bool _hx_tmp1;
HXDLIN( 154)			if ((lastEndLine != (finalLength - 1))) {
HXLINE( 154)				_hx_tmp1 = (lastEndLine == (finalLength - 2));
            			}
            			else {
HXLINE( 154)				_hx_tmp1 = true;
            			}
HXDLIN( 154)			if (_hx_tmp1) {
HXLINE( 155)				finalText = ::polymod::util::Util_obj::uSubstr(finalText,0,(finalLength - ::polymod::util::Util_obj::uLength(endLine)));
HXLINE( 156)				addFinalEndline = true;
            			}
HXLINE( 159)			int compareFields = 0;
HXLINE( 160)			{
HXLINE( 160)				int _g = 0;
HXDLIN( 160)				int _g1 = baseCSV->fields->length;
HXDLIN( 160)				while((_g < _g1)){
HXLINE( 160)					_g = (_g + 1);
HXDLIN( 160)					int i = (_g - 1);
HXLINE( 161)					::String baseField = baseCSV->fields->__get(i);
HXLINE( 162)					bool appendFieldExists = (appendCSV->fields->indexOf(baseField,null()) != -1);
HXLINE( 163)					if (appendFieldExists) {
HXLINE( 163)						compareFields = (compareFields + 1);
            					}
            				}
            			}
HXLINE( 166)			if (this->lookForHeaders) {
HXLINE( 167)				if ((compareFields < ::Std_obj::_hx_int((( (Float)(baseCSV->fields->length) ) / ( (Float)(2) ))))) {
HXLINE( 168)					::polymod::Polymod_obj::error(HX_("append_error",63,d4,ca,e5),((HX_("Mod file(",2e,de,e2,49) + id) + HX_(") is missing most or all of the expected header fields",e4,52,a8,00)),HX_("init",10,3b,bb,45));
            				}
            			}
HXLINE( 172)			::Array< ::String > missingFields = ::Array_obj< ::String >::__new(0);
HXLINE( 174)			{
HXLINE( 174)				int _g2 = 0;
HXDLIN( 174)				int _g3 = appendCSV->grid->length;
HXDLIN( 174)				while((_g2 < _g3)){
HXLINE( 174)					_g2 = (_g2 + 1);
HXDLIN( 174)					int r = (_g2 - 1);
HXLINE( 175)					::String line = HX_("",00,00,00,00);
HXLINE( 176)					{
HXLINE( 176)						int _g = 0;
HXDLIN( 176)						int _g1 = baseCSV->fields->length;
HXDLIN( 176)						while((_g < _g1)){
HXLINE( 176)							_g = (_g + 1);
HXDLIN( 176)							int bi = (_g - 1);
HXLINE( 177)							::String baseField = baseCSV->fields->__get(bi);
HXLINE( 178)							int appendField = appendCSV->fields->indexOf(baseField,null());
HXLINE( 179)							if ((appendField != -1)) {
HXLINE( 180)								::String appendValue = appendCSV->grid->__get(r).StaticCast< ::Array< ::String > >()->__get(appendField);
HXLINE( 181)								if (::hx::IsNull( appendValue )) {
HXLINE( 182)									appendValue = HX_("",00,00,00,00);
            								}
HXLINE( 184)								line = (line + appendValue);
            							}
            							else {
HXLINE( 187)								if ((missingFields->indexOf(baseField,null()) == -1)) {
HXLINE( 188)									missingFields->push(baseField);
            								}
            							}
HXLINE( 191)							if ((bi != (baseCSV->fields->length - 1))) {
HXLINE( 192)								line = (line + this->delimeter);
            							}
            						}
            					}
HXLINE( 195)					finalText = (finalText + (endLine + line));
            				}
            			}
HXLINE( 198)			if (addFinalEndline) {
HXLINE( 199)				finalText = (finalText + endLine);
            			}
HXLINE( 202)			{
HXLINE( 202)				int _g4 = 0;
HXDLIN( 202)				while((_g4 < missingFields->length)){
HXLINE( 202)					::String baseField = missingFields->__get(_g4);
HXDLIN( 202)					_g4 = (_g4 + 1);
HXLINE( 203)					::polymod::Polymod_obj::warning(HX_("append_error",63,d4,ca,e5),((((HX_("Mod file(",2e,de,e2,49) + id) + HX_(") missing expected field \"",65,fc,56,c0)) + baseField) + HX_("\", values will default to empty string.",aa,16,7f,ae)),HX_("init",10,3b,bb,45));
            				}
            			}
HXLINE( 206)			return finalText;
            		}
HXLINE( 208)		return ::polymod::util::Util_obj::appendCSVOrTSV(baseText,appendText,id);
            	}


HX_DEFINE_DYNAMIC_FUNC3(CSVParseFormat_obj,append,return )

::String CSVParseFormat_obj::merge(::String baseText,::String mergeText,::String id){
            	HX_STACKFRAME(&_hx_pos_47f6066263d681f0_212_merge)
HXLINE( 213)		 ::polymod::format::CSV baseCSV;
HXLINE( 214)		 ::polymod::format::CSV mergeCSV;
HXLINE( 215)		try {
            			HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 217)			baseCSV = ::polymod::format::CSV_obj::parseWithFormat(baseText,::hx::ObjectPtr<OBJ_>(this));
HXLINE( 218)			mergeCSV = ::polymod::format::CSV_obj::parseWithFormat(mergeText,::hx::ObjectPtr<OBJ_>(this));
            		} catch( ::Dynamic _hx_e) {
            			if (_hx_e.IsClass<  ::Dynamic >() ){
            				HX_STACK_BEGIN_CATCH
            				 ::Dynamic _g = _hx_e;
HXLINE(   1)				 ::Dynamic msg = ::haxe::Exception_obj::caught(_g)->unwrap();
HXLINE( 222)				::polymod::Polymod_obj::error(HX_("merge_error",c1,8f,ea,85),(((HX_("CSV Merge error (",4e,7a,a4,32) + id) + HX_(") : ",3d,3a,32,1b)) + ::Std_obj::string(msg)),null());
HXLINE( 223)				return baseText;
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
HXLINE( 226)		{
HXLINE( 226)			int _g = 0;
HXDLIN( 226)			::Array< ::Dynamic> _g1 = mergeCSV->grid;
HXDLIN( 226)			while((_g < _g1->length)){
HXLINE( 226)				::Array< ::String > row = _g1->__get(_g).StaticCast< ::Array< ::String > >();
HXDLIN( 226)				_g = (_g + 1);
HXLINE( 228)				::String flag;
HXDLIN( 228)				if ((row->length > 0)) {
HXLINE( 228)					flag = row->__get(0);
            				}
            				else {
HXLINE( 228)					flag = HX_("",00,00,00,00);
            				}
HXLINE( 229)				if ((flag != HX_("",00,00,00,00))) {
HXLINE( 231)					int _g = 0;
HXDLIN( 231)					int _g1 = baseCSV->grid->length;
HXDLIN( 231)					while((_g < _g1)){
HXLINE( 231)						_g = (_g + 1);
HXDLIN( 231)						int i = (_g - 1);
HXLINE( 233)						::Array< ::String > otherRow = baseCSV->grid->__get(i).StaticCast< ::Array< ::String > >();
HXLINE( 234)						::String otherFlag = otherRow->__get(0);
HXLINE( 235)						if ((flag == otherFlag)) {
HXLINE( 237)							int _g = 0;
HXDLIN( 237)							int _g1 = row->length;
HXDLIN( 237)							while((_g < _g1)){
HXLINE( 237)								_g = (_g + 1);
HXDLIN( 237)								int j = (_g - 1);
HXLINE( 239)								if ((j < otherRow->length)) {
HXLINE( 241)									otherRow[j] = row->__get(j);
            								}
            							}
            						}
            					}
            				}
            			}
            		}
HXLINE( 248)		::String result = this->print(baseCSV);
HXLINE( 249)		return result;
            	}


HX_DEFINE_DYNAMIC_FUNC3(CSVParseFormat_obj,merge,return )

::String CSVParseFormat_obj::print( ::polymod::format::CSV csv){
            	HX_GC_STACKFRAME(&_hx_pos_47f6066263d681f0_253_print)
HXLINE( 254)		 ::StringBuf buf =  ::StringBuf_obj::__alloc( HX_CTX );
HXLINE( 256)		int lf = 10;
HXLINE( 257)		int dq = 34;
HXLINE( 259)		{
HXLINE( 259)			int _g = 0;
HXDLIN( 259)			int _g1 = csv->fields->length;
HXDLIN( 259)			while((_g < _g1)){
HXLINE( 259)				_g = (_g + 1);
HXDLIN( 259)				int i = (_g - 1);
HXLINE( 261)				{
HXLINE( 261)					::String x = csv->fields->__get(i);
HXDLIN( 261)					if (::hx::IsNotNull( buf->charBuf )) {
HXLINE( 261)						buf->flush();
            					}
HXDLIN( 261)					if (::hx::IsNull( buf->b )) {
HXLINE( 261)						buf->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x));
            					}
            					else {
HXLINE( 261)						::Array< ::String > buf1 = buf->b;
HXDLIN( 261)						buf1->push(::Std_obj::string(x));
            					}
            				}
HXLINE( 262)				if ((i != (csv->fields->length - 1))) {
HXLINE( 264)					::String x = this->delimeter;
HXDLIN( 264)					if (::hx::IsNotNull( buf->charBuf )) {
HXLINE( 264)						buf->flush();
            					}
HXDLIN( 264)					if (::hx::IsNull( buf->b )) {
HXLINE( 264)						buf->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x));
            					}
            					else {
HXLINE( 264)						::Array< ::String > buf1 = buf->b;
HXDLIN( 264)						buf1->push(::Std_obj::string(x));
            					}
            				}
            			}
            		}
HXLINE( 268)		::String strSoFar = buf->toString();
HXLINE( 270)		if ((strSoFar.indexOf(HX_("\n",0a,00,00,00),null()) == -1)) {
HXLINE( 272)			if (::hx::IsNotNull( buf->charBuf )) {
HXLINE( 272)				buf->flush();
            			}
HXDLIN( 272)			if (::hx::IsNull( buf->b )) {
HXLINE( 272)				buf->b = ::Array_obj< ::String >::fromData( _hx_array_data_2d231aa3_17,1);
            			}
            			else {
HXLINE( 272)				buf->b->push(HX_("\r\n",5d,0b,00,00));
            			}
            		}
HXLINE( 275)		::Array< ::Dynamic> grid = csv->grid;
HXLINE( 277)		{
HXLINE( 277)			int _g2 = 0;
HXDLIN( 277)			int _g3 = grid->length;
HXDLIN( 277)			while((_g2 < _g3)){
HXLINE( 277)				_g2 = (_g2 + 1);
HXDLIN( 277)				int iy = (_g2 - 1);
HXLINE( 279)				::Array< ::String > row = grid->__get(iy).StaticCast< ::Array< ::String > >();
HXLINE( 280)				{
HXLINE( 280)					int _g = 0;
HXDLIN( 280)					int _g1 = row->length;
HXDLIN( 280)					while((_g < _g1)){
HXLINE( 280)						_g = (_g + 1);
HXDLIN( 280)						int ix = (_g - 1);
HXLINE( 282)						::String cell = row->__get(ix);
HXLINE( 283)						if (this->quotedCells) {
HXLINE( 285)							if ((dq >= 127)) {
HXLINE( 285)								::String x = ::String::fromCharCode(dq);
HXDLIN( 285)								if (::hx::IsNotNull( buf->charBuf )) {
HXLINE( 285)									buf->flush();
            								}
HXDLIN( 285)								if (::hx::IsNull( buf->b )) {
HXLINE( 285)									buf->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x));
            								}
            								else {
HXLINE( 285)									::Array< ::String > buf1 = buf->b;
HXDLIN( 285)									buf1->push(::Std_obj::string(x));
            								}
            							}
            							else {
HXLINE( 285)								if (::hx::IsNull( buf->charBuf )) {
HXLINE( 285)									buf->charBuf = ::Array_obj< char >::__new();
            								}
HXDLIN( 285)								buf->charBuf->push(dq);
            							}
            						}
HXLINE( 287)						{
HXLINE( 287)							::cpp::Pointer< char > src = cpp::Pointer_obj::fromPointer(cell.c_str());
HXDLIN( 287)							::cpp::Pointer< char > end = src->add(cell.length);
HXDLIN( 287)							while(true){
HXLINE( 287)								::cpp::Pointer< char > tmp = end;
HXDLIN( 287)								if (!(src->lt(tmp))) {
HXLINE( 287)									goto _hx_goto_15;
            								}
HXLINE( 289)								int _hx_char = _hx_utf8_decode_advance(src->ptr);
HXDLIN( 289)								if ((_hx_char >= 127)) {
HXLINE( 289)									::String x = ::String::fromCharCode(_hx_char);
HXDLIN( 289)									if (::hx::IsNotNull( buf->charBuf )) {
HXLINE( 289)										buf->flush();
            									}
HXDLIN( 289)									if (::hx::IsNull( buf->b )) {
HXLINE( 289)										buf->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x));
            									}
            									else {
HXLINE( 289)										::Array< ::String > buf1 = buf->b;
HXDLIN( 289)										buf1->push(::Std_obj::string(x));
            									}
            								}
            								else {
HXLINE( 289)									if (::hx::IsNull( buf->charBuf )) {
HXLINE( 289)										buf->charBuf = ::Array_obj< char >::__new();
            									}
HXDLIN( 289)									buf->charBuf->push(_hx_char);
            								}
            							}
            							_hx_goto_15:;
            						}
HXLINE( 291)						if (this->quotedCells) {
HXLINE( 293)							if ((dq >= 127)) {
HXLINE( 293)								::String x = ::String::fromCharCode(dq);
HXDLIN( 293)								if (::hx::IsNotNull( buf->charBuf )) {
HXLINE( 293)									buf->flush();
            								}
HXDLIN( 293)								if (::hx::IsNull( buf->b )) {
HXLINE( 293)									buf->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x));
            								}
            								else {
HXLINE( 293)									::Array< ::String > buf1 = buf->b;
HXDLIN( 293)									buf1->push(::Std_obj::string(x));
            								}
            							}
            							else {
HXLINE( 293)								if (::hx::IsNull( buf->charBuf )) {
HXLINE( 293)									buf->charBuf = ::Array_obj< char >::__new();
            								}
HXDLIN( 293)								buf->charBuf->push(dq);
            							}
            						}
HXLINE( 295)						if ((ix != (row->length - 1))) {
HXLINE( 297)							::String x = this->delimeter;
HXDLIN( 297)							if (::hx::IsNotNull( buf->charBuf )) {
HXLINE( 297)								buf->flush();
            							}
HXDLIN( 297)							if (::hx::IsNull( buf->b )) {
HXLINE( 297)								buf->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x));
            							}
            							else {
HXLINE( 297)								::Array< ::String > buf1 = buf->b;
HXDLIN( 297)								buf1->push(::Std_obj::string(x));
            							}
            						}
            					}
            				}
HXLINE( 300)				if ((iy != (grid->length - 1))) {
HXLINE( 302)					if (::hx::IsNotNull( buf->charBuf )) {
HXLINE( 302)						buf->flush();
            					}
HXDLIN( 302)					if (::hx::IsNull( buf->b )) {
HXLINE( 302)						buf->b = ::Array_obj< ::String >::fromData( _hx_array_data_2d231aa3_18,1);
            					}
            					else {
HXLINE( 302)						buf->b->push(HX_("\r\n",5d,0b,00,00));
            					}
            				}
            			}
            		}
HXLINE( 306)		return buf->toString();
            	}


HX_DEFINE_DYNAMIC_FUNC1(CSVParseFormat_obj,print,return )


::hx::ObjectPtr< CSVParseFormat_obj > CSVParseFormat_obj::__new(::String delimeter,bool quotedCells) {
	::hx::ObjectPtr< CSVParseFormat_obj > __this = new CSVParseFormat_obj();
	__this->__construct(delimeter,quotedCells);
	return __this;
}

::hx::ObjectPtr< CSVParseFormat_obj > CSVParseFormat_obj::__alloc(::hx::Ctx *_hx_ctx,::String delimeter,bool quotedCells) {
	CSVParseFormat_obj *__this = (CSVParseFormat_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(CSVParseFormat_obj), true, "polymod.format.CSVParseFormat"));
	*(void **)__this = CSVParseFormat_obj::_hx_vtable;
	__this->__construct(delimeter,quotedCells);
	return __this;
}

CSVParseFormat_obj::CSVParseFormat_obj()
{
}

void CSVParseFormat_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CSVParseFormat);
	HX_MARK_MEMBER_NAME(format,"format");
	HX_MARK_MEMBER_NAME(isSimpleMode,"isSimpleMode");
	HX_MARK_MEMBER_NAME(delimeter,"delimeter");
	HX_MARK_MEMBER_NAME(quotedCells,"quotedCells");
	HX_MARK_MEMBER_NAME(lookForHeaders,"lookForHeaders");
	HX_MARK_END_CLASS();
}

void CSVParseFormat_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(format,"format");
	HX_VISIT_MEMBER_NAME(isSimpleMode,"isSimpleMode");
	HX_VISIT_MEMBER_NAME(delimeter,"delimeter");
	HX_VISIT_MEMBER_NAME(quotedCells,"quotedCells");
	HX_VISIT_MEMBER_NAME(lookForHeaders,"lookForHeaders");
}

::hx::Val CSVParseFormat_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"parse") ) { return ::hx::Val( parse_dyn() ); }
		if (HX_FIELD_EQ(inName,"merge") ) { return ::hx::Val( merge_dyn() ); }
		if (HX_FIELD_EQ(inName,"print") ) { return ::hx::Val( print_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"format") ) { return ::hx::Val( format ); }
		if (HX_FIELD_EQ(inName,"append") ) { return ::hx::Val( append_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"delimeter") ) { return ::hx::Val( delimeter ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"quotedCells") ) { return ::hx::Val( quotedCells ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"isSimpleMode") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_isSimpleMode() : isSimpleMode ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"lookForHeaders") ) { return ::hx::Val( lookForHeaders ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_isSimpleMode") ) { return ::hx::Val( get_isSimpleMode_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val CSVParseFormat_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"format") ) { format=inValue.Cast<  ::polymod::format::TextFileFormat >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"delimeter") ) { delimeter=inValue.Cast< ::String >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"quotedCells") ) { quotedCells=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"isSimpleMode") ) { isSimpleMode=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"lookForHeaders") ) { lookForHeaders=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CSVParseFormat_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("format",37,8f,8e,fd));
	outFields->push(HX_("isSimpleMode",3f,2d,b3,cd));
	outFields->push(HX_("delimeter",8b,2c,83,83));
	outFields->push(HX_("quotedCells",c9,09,54,60));
	outFields->push(HX_("lookForHeaders",7c,8d,66,72));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo CSVParseFormat_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::polymod::format::TextFileFormat */ ,(int)offsetof(CSVParseFormat_obj,format),HX_("format",37,8f,8e,fd)},
	{::hx::fsBool,(int)offsetof(CSVParseFormat_obj,isSimpleMode),HX_("isSimpleMode",3f,2d,b3,cd)},
	{::hx::fsString,(int)offsetof(CSVParseFormat_obj,delimeter),HX_("delimeter",8b,2c,83,83)},
	{::hx::fsBool,(int)offsetof(CSVParseFormat_obj,quotedCells),HX_("quotedCells",c9,09,54,60)},
	{::hx::fsBool,(int)offsetof(CSVParseFormat_obj,lookForHeaders),HX_("lookForHeaders",7c,8d,66,72)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *CSVParseFormat_obj_sStaticStorageInfo = 0;
#endif

static ::String CSVParseFormat_obj_sMemberFields[] = {
	HX_("format",37,8f,8e,fd),
	HX_("isSimpleMode",3f,2d,b3,cd),
	HX_("delimeter",8b,2c,83,83),
	HX_("quotedCells",c9,09,54,60),
	HX_("lookForHeaders",7c,8d,66,72),
	HX_("get_isSimpleMode",c8,19,52,d2),
	HX_("parse",33,90,55,bd),
	HX_("append",da,e1,d3,8f),
	HX_("merge",b8,a2,c6,05),
	HX_("print",2d,58,8b,c8),
	::String(null()) };

::hx::Class CSVParseFormat_obj::__mClass;

void CSVParseFormat_obj::__register()
{
	CSVParseFormat_obj _hx_dummy;
	CSVParseFormat_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("polymod.format.CSVParseFormat",a3,1a,23,2d);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(CSVParseFormat_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< CSVParseFormat_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CSVParseFormat_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CSVParseFormat_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace polymod
} // end namespace format
