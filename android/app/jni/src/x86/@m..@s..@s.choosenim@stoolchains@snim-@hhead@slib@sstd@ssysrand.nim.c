/* Generated by Nim Compiler v1.7.1 */
#define NIM_INTBITS 32

#include "nimbase.h"
#include <unistd.h>
#include <sys/syscall.h>
#include <sys/syscall.h>
#include <errno.h>
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
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
static N_INLINE(NI, urandomInternalImpl__stdZsysrand_14)(NU8* dest, NI destLen_0);
N_LIB_PRIVATE N_NIMCALL(void, failedAssertImpl__stdZassertions_56)(NimStringDesc* msg);
N_LIB_PRIVATE N_NIMCALL(NI32, osLastError__pureZos_408)(void);
STRING_LITERAL(TM__sT0fWggTrXhnxQ79bl9a8nHg_2, "sysrand.nim(190, 18) `false` ", 29);
static N_INLINE(NI, urandomInternalImpl__stdZsysrand_14)(NU8* dest, NI destLen_0) {
	NI result;
	NI sizeX60gensym0_;
{	result = (NI)0;
	sizeX60gensym0_ = destLen_0;
	{
		if (!(sizeX60gensym0_ == ((NI) 0))) goto LA3_;
		goto BeforeRet_;
	}
	LA3_: ;
	{
		while (1) {
			NI readBytesX60gensym0_;
			if (!(result < sizeX60gensym0_)) goto LA6;
			readBytesX60gensym0_ = syscall(SYS_getrandom, (&dest[result]), ((int) ((NI)(sizeX60gensym0_ - result))), ((NI) 0));
			{
				if (!(readBytesX60gensym0_ == ((NI) 0))) goto LA9_;
				{
					if (!NIM_TRUE) goto LA13_;
					failedAssertImpl__stdZassertions_56(((NimStringDesc*) &TM__sT0fWggTrXhnxQ79bl9a8nHg_2));
				}
				LA13_: ;
			}
			goto LA7_;
			LA9_: ;
			{
				if (!(((NI) 0) < readBytesX60gensym0_)) goto LA16_;
				result += readBytesX60gensym0_;
			}
			goto LA7_;
			LA16_: ;
			{
				{
					NI32 T21_;
					T21_ = (NI32)0;
					T21_ = osLastError__pureZos_408();
					if (!(((NI) (T21_)) == ((NI) (EINTR)) || ((NI) (T21_)) == ((NI) (EAGAIN)))) goto LA22_;
				}
				goto LA19_;
				LA22_: ;
				{
					result = ((NI) -1);
					goto LA5;
				}
				LA19_: ;
			}
			LA7_: ;
		} LA6: ;
	} LA5: ;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, urandom__stdZsysrand_47)(NU8* dest, NI destLen_0) {
	NIM_BOOL result;
	NI ret;
	result = (NIM_BOOL)0;
	result = NIM_TRUE;
	ret = urandomInternalImpl__stdZsysrand_14(dest, destLen_0);
	{
		if (!(ret < ((NI) 0))) goto LA3_;
		result = NIM_FALSE;
	}
	LA3_: ;
	return result;
}