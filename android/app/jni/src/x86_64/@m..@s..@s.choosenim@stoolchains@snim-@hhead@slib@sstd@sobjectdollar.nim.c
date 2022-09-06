/* Generated by Nim Compiler v1.7.1 */
#define NIM_INTBITS 64

#include "nimbase.h"
#include <string.h>
#undef LANGUAGE_C
#undef MIPSEB
#undef MIPSEL
#undef PPC
#undef R3000
#undef R4000
#undef i386
#undef linux
#undef mips
#undef near
#undef far
#undef powerpc
#undef unix
#define nimfr_(x, y)
#define nimln_(x, y)
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tyObject_RGBA8__P4w0wnmH7J1IGztO6QfG5A tyObject_RGBA8__P4w0wnmH7J1IGztO6QfG5A;
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct tyObject_RGBA8__P4w0wnmH7J1IGztO6QfG5A {
NIM_CHAR r;
NIM_CHAR g;
NIM_CHAR b;
NIM_CHAR a;
};
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
static N_INLINE(void, copyMem__system_1727)(void* dest, void* source, NI size);
static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
N_LIB_PRIVATE N_NIMCALL(void, addQuoted__OOZOOZOnimbleZpkgsZnim8078714548O51O49Znim807871_7779)(NimStringDesc** s, NIM_CHAR x);
STRING_LITERAL(TM__US7tUPSVHwyWbwv9cB5DrpQ_2, "(", 1);
STRING_LITERAL(TM__US7tUPSVHwyWbwv9cB5DrpQ_3, ", ", 2);
STRING_LITERAL(TM__US7tUPSVHwyWbwv9cB5DrpQ_4, "r", 1);
STRING_LITERAL(TM__US7tUPSVHwyWbwv9cB5DrpQ_5, ": ", 2);
STRING_LITERAL(TM__US7tUPSVHwyWbwv9cB5DrpQ_6, "g", 1);
STRING_LITERAL(TM__US7tUPSVHwyWbwv9cB5DrpQ_7, "b", 1);
STRING_LITERAL(TM__US7tUPSVHwyWbwv9cB5DrpQ_8, "a", 1);
STRING_LITERAL(TM__US7tUPSVHwyWbwv9cB5DrpQ_9, ")", 1);
static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memcpy(dest, source, ((size_t) (size)));
}
static N_INLINE(void, copyMem__system_1727)(void* dest, void* source, NI size) {
	nimCopyMem(dest, source, size);
}
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	{
		if (!!((src == ((NimStringDesc*) NIM_NIL)))) goto LA3_;
		copyMem__system_1727(((void*) ((&(*dest).data[(*dest).Sup.len]))), ((void*) ((*src).data)), ((NI) ((NI)((*src).Sup.len + ((NI) 1)))));
		(*dest).Sup.len += (*src).Sup.len;
	}
	LA3_: ;
}
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, dollar___OOZOOZOnimbleZpkgsZnim8078714548O51O49Znim807871_7754)(tyObject_RGBA8__P4w0wnmH7J1IGztO6QfG5A x) {
	NimStringDesc* result;
	NI countX60gensym304_;
	result = NIM_NIL;
	result = copyString(((NimStringDesc*) &TM__US7tUPSVHwyWbwv9cB5DrpQ_2));
	countX60gensym304_ = ((NI) 0);
	{
		if (!(((NI) 0) < countX60gensym304_)) goto LA3_;
		result = resizeString(result, 2);
appendString(result, ((NimStringDesc*) &TM__US7tUPSVHwyWbwv9cB5DrpQ_3));
	}
	LA3_: ;
	result = resizeString(result, 1);
appendString(result, ((NimStringDesc*) &TM__US7tUPSVHwyWbwv9cB5DrpQ_4));
	result = resizeString(result, 2);
appendString(result, ((NimStringDesc*) &TM__US7tUPSVHwyWbwv9cB5DrpQ_5));
	countX60gensym304_ += ((NI) 1);
	addQuoted__OOZOOZOnimbleZpkgsZnim8078714548O51O49Znim807871_7779((&result), x.r);
	{
		if (!(((NI) 0) < countX60gensym304_)) goto LA7_;
		result = resizeString(result, 2);
appendString(result, ((NimStringDesc*) &TM__US7tUPSVHwyWbwv9cB5DrpQ_3));
	}
	LA7_: ;
	result = resizeString(result, 1);
appendString(result, ((NimStringDesc*) &TM__US7tUPSVHwyWbwv9cB5DrpQ_6));
	result = resizeString(result, 2);
appendString(result, ((NimStringDesc*) &TM__US7tUPSVHwyWbwv9cB5DrpQ_5));
	countX60gensym304_ += ((NI) 1);
	addQuoted__OOZOOZOnimbleZpkgsZnim8078714548O51O49Znim807871_7779((&result), x.g);
	{
		if (!(((NI) 0) < countX60gensym304_)) goto LA11_;
		result = resizeString(result, 2);
appendString(result, ((NimStringDesc*) &TM__US7tUPSVHwyWbwv9cB5DrpQ_3));
	}
	LA11_: ;
	result = resizeString(result, 1);
appendString(result, ((NimStringDesc*) &TM__US7tUPSVHwyWbwv9cB5DrpQ_7));
	result = resizeString(result, 2);
appendString(result, ((NimStringDesc*) &TM__US7tUPSVHwyWbwv9cB5DrpQ_5));
	countX60gensym304_ += ((NI) 1);
	addQuoted__OOZOOZOnimbleZpkgsZnim8078714548O51O49Znim807871_7779((&result), x.b);
	{
		if (!(((NI) 0) < countX60gensym304_)) goto LA15_;
		result = resizeString(result, 2);
appendString(result, ((NimStringDesc*) &TM__US7tUPSVHwyWbwv9cB5DrpQ_3));
	}
	LA15_: ;
	result = resizeString(result, 1);
appendString(result, ((NimStringDesc*) &TM__US7tUPSVHwyWbwv9cB5DrpQ_8));
	result = resizeString(result, 2);
appendString(result, ((NimStringDesc*) &TM__US7tUPSVHwyWbwv9cB5DrpQ_5));
	countX60gensym304_ += ((NI) 1);
	addQuoted__OOZOOZOnimbleZpkgsZnim8078714548O51O49Znim807871_7779((&result), x.a);
	result = resizeString(result, 1);
appendString(result, ((NimStringDesc*) &TM__US7tUPSVHwyWbwv9cB5DrpQ_9));
	return result;
}
