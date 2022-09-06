/* Generated by Nim Compiler v1.7.1 */
#define NIM_INTBITS 32

#include "nimbase.h"
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
N_LIB_PRIVATE N_NIMCALL(NI, murmurHash__pureZhashes_192)(NU8* x, NI xLen_0);
static N_INLINE(NU32, rotl32__pureZhashes_180)(NU32 x, NI r);
static N_INLINE(NU32, rotl32__pureZhashes_180)(NU32 x, NI r) {
	NU32 result;
	result = (NU32)0;
	result = (NU32)((NU32)((NU32)(x) << (NU32)(r)) | (NU32)((NU32)(x) >> (NU32)((NI)(((NI) 32) - r))));
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI, murmurHash__pureZhashes_192)(NU8* x, NI xLen_0) {
	NI result;
	NI size;
	NI stepSize;
	NI n;
	NU32 h1;
	NI i;
	NU32 k1_2;
	NI rem;
{	result = (NI)0;
	size = xLen_0;
	stepSize = ((NI) 4);
	n = (NI)(size / stepSize);
	h1 = (NU32)0;
	i = ((NI) 0);
	{
		while (1) {
			NU32 k1;
			if (!(i < (NI)(n * stepSize))) goto LA2;
			k1 = (NU32)0;
			k1 = (*((NU32*) ((&x[i]))));
			i += stepSize;
			k1 = (NU32)((NU32)(k1) * (NU32)(((NU32) IL64(3432918353))));
			k1 = rotl32__pureZhashes_180(k1, ((NI) 15));
			k1 = (NU32)((NU32)(k1) * (NU32)(((NU32) 461845907)));
			h1 = (NU32)(h1 ^ k1);
			h1 = rotl32__pureZhashes_180(h1, ((NI) 13));
			h1 = (NU32)((NU32)((NU32)((NU32)(h1) * (NU32)(((NU32) 5)))) + (NU32)(((NU32) IL64(3864292196))));
		} LA2: ;
	}
	k1_2 = (NU32)0;
	rem = (NI)(size % stepSize);
	{
		while (1) {
			if (!(((NI) 0) < rem)) goto LA4;
			rem -= ((NI) 1);
			k1_2 = (NU32)((NU32)((NU32)(k1_2) << (NU32)(((NI) 8))) | ((NU32) (x[(NI)(i + rem)])));
		} LA4: ;
	}
	k1_2 = (NU32)((NU32)(k1_2) * (NU32)(((NU32) IL64(3432918353))));
	k1_2 = rotl32__pureZhashes_180(k1_2, ((NI) 15));
	k1_2 = (NU32)((NU32)(k1_2) * (NU32)(((NU32) 461845907)));
	h1 = (NU32)(h1 ^ k1_2);
	h1 = (NU32)(h1 ^ ((NU32) (size)));
	h1 = (NU32)(h1 ^ (NU32)((NU32)(h1) >> (NU32)(((NI) 16))));
	h1 = (NU32)((NU32)(h1) * (NU32)(((NU32) IL64(2246822507))));
	h1 = (NU32)(h1 ^ (NU32)((NU32)(h1) >> (NU32)(((NI) 13))));
	h1 = (NU32)((NU32)(h1) * (NU32)(((NU32) IL64(3266489909))));
	h1 = (NU32)(h1 ^ (NU32)((NU32)(h1) >> (NU32)(((NI) 16))));
	result = ((NI) (h1));
	goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI, hash__pureZhashes_279)(NimStringDesc* x) {
	NI result;
	result = (NI)0;
	result = murmurHash__pureZhashes_192((NU8*)x->data+(((NI) 0)), (((x ? x->Sup.len : 0)-1))-(((NI) 0))+1);
	return result;
}