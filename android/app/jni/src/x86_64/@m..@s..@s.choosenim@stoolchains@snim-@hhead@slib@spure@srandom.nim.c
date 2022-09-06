/* Generated by Nim Compiler v1.7.1 */
#define NIM_INTBITS 64

#include "nimbase.h"
#include <sys/types.h>
                          #include <pthread.h>
#include <pthread.h>
#include <string.h>
#include <setjmp.h>
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
typedef struct tyObject_Rand__liBKmwv1H6v7oYBhDFHa6A tyObject_Rand__liBKmwv1H6v7oYBhDFHa6A;
typedef struct Exception Exception;
typedef struct RootObj RootObj;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tySequence__uB9b75OUPRENsBAu4AnoePA tySequence__uB9b75OUPRENsBAu4AnoePA;
typedef struct TSafePoint TSafePoint;
typedef struct tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA;
typedef struct tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA;
struct tyObject_Rand__liBKmwv1H6v7oYBhDFHa6A {
NU64 a0;
NU64 a1;
};
typedef long tyArray__xDUyu9aScDpt0JZLU6q9aEZQ[5];
typedef NU64 tyArray__NzKR9bw29cLPrd712Xt6Liiw[2];
typedef NU8 tyEnum_TNimKind__jIBKr1ejBgsfM33Kxw4j7A;
typedef NU8 tySet_tyEnum_TNimTypeFlag__v8QUszD1sWlSIWZz7mC4bQ;
typedef N_NIMCALL_PTR(void, tyProc__ojoeKfW4VYIm36I9cpDTQIg) (void* p, NI op);
typedef N_NIMCALL_PTR(void*, tyProc__WSm2xU5ARYv9aAR4l0z9c9auQ) (void* p);
struct TNimType {
NI size;
NI align;
tyEnum_TNimKind__jIBKr1ejBgsfM33Kxw4j7A kind;
tySet_tyEnum_TNimTypeFlag__v8QUszD1sWlSIWZz7mC4bQ flags;
TNimType* base;
TNimNode* node;
void* finalizer;
tyProc__ojoeKfW4VYIm36I9cpDTQIg marker;
tyProc__WSm2xU5ARYv9aAR4l0z9c9auQ deepcopy;
};
struct RootObj {
TNimType* m_type;
};
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct Exception {
  RootObj Sup;
Exception* parent;
NCSTRING name;
NimStringDesc* message;
tySequence__uB9b75OUPRENsBAu4AnoePA* trace;
Exception* up;
};
typedef long tyArray__TcvIiMAJvcwzNLsZkfnFnQ[25];
struct TSafePoint {
TSafePoint* prev;
NI status;
jmp_buf context;
};
typedef NU8 tyArray__qtqsWM5aXmcpMIVmvq3kAA[16];
struct tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA {
NI a;
NI b;
};
typedef int tyArray__hxJupwhxfpZMyjfyvw0J9ag[1];
struct tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA {
NCSTRING procname;
NI line;
NCSTRING filename;
};
struct tySequence__uB9b75OUPRENsBAu4AnoePA {
  TGenericSeq Sup;
  tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA data[SEQ_DECL_SIZE];
};
static N_INLINE(void, initLock__coreZlocks_64)(pthread_mutex_t* lock);
N_LIB_PRIVATE N_NIMCALL(NI, rand__pureZrandom_92)(tyObject_Rand__liBKmwv1H6v7oYBhDFHa6A* r, NI max);
N_LIB_PRIVATE N_NIMCALL(NU64, rand__pureZrandom_96)(tyObject_Rand__liBKmwv1H6v7oYBhDFHa6A* r, NU64 max);
N_LIB_PRIVATE N_NIMCALL(NU64, next__pureZrandom_44)(tyObject_Rand__liBKmwv1H6v7oYBhDFHa6A* r);
N_LIB_PRIVATE N_NIMCALL(NU64, rotl__pureZrandom_32)(NU64 x, NU64 k);
N_LIB_PRIVATE N_NIMCALL(tyObject_Rand__liBKmwv1H6v7oYBhDFHa6A, initRand__pureZrandom_226)(NI64 seed);
static N_INLINE(void, nimZeroMem)(void* p, NI size);
static N_INLINE(void, nimSetMem__systemZmemory_7)(void* a, int v, NI size);
N_LIB_PRIVATE N_NIMCALL(void, skipRandomNumbers__pureZrandom_53)(tyObject_Rand__liBKmwv1H6v7oYBhDFHa6A* s);
N_LIB_PRIVATE N_NIMCALL(tyObject_Rand__liBKmwv1H6v7oYBhDFHa6A, initRand__pureZrandom_257)(void);
static N_INLINE(void, acquire__coreZlocks_71)(pthread_mutex_t* lock);
static N_INLINE(void, pushSafePoint)(TSafePoint* s);
static N_INLINE(NIM_BOOL, isValid__pureZrandom_24)(tyObject_Rand__liBKmwv1H6v7oYBhDFHa6A r);
N_LIB_PRIVATE N_NIMCALL(tyObject_Rand__liBKmwv1H6v7oYBhDFHa6A, getRandomState__pureZrandom_259)(void);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, urandom__stdZsysrand_47)(NU8* dest, NI destLen_0);
static N_INLINE(void, copyMem__system_1727)(void* dest, void* source, NI size);
static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size);
N_LIB_PRIVATE N_NIMCALL(void, quit__system_8104)(NimStringDesc* errormsg, NI errorcode) __attribute__((noreturn));
static N_INLINE(void, popSafePoint)(void);
static N_INLINE(void, release__coreZlocks_73)(pthread_mutex_t* lock);
N_LIB_PRIVATE N_NIMCALL(void, nimLeaveFinally)(void);
N_LIB_PRIVATE N_NIMCALL(void, reraiseException)(void);
N_LIB_PRIVATE N_NIMCALL(NI, rand__main_1587)(tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA x);
N_LIB_PRIVATE N_NIMCALL(NI, rand__main_1595)(tyObject_Rand__liBKmwv1H6v7oYBhDFHa6A* r, tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA x);
static N_INLINE(tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA, dotdot___pureZunicode_840)(NI a, NI b);
N_LIB_PRIVATE NIM_CONST tyObject_Rand__liBKmwv1H6v7oYBhDFHa6A DefaultRandSeed__pureZrandom_13 = {7616934476015405061ULL, 15122295919272093642ULL}
;
N_LIB_PRIVATE NIM_CONST tyArray__NzKR9bw29cLPrd712Xt6Liiw helper__pureZrandom_55 = {13739361407582206667ULL,
15594563132006766882ULL}
;
STRING_LITERAL(TM__AIKkgex03Z1j45JceakCTA_3, "Failed to initializes baseState in random module as sysrand.urandom doesn\'t work.", 81);
N_LIB_PRIVATE tyObject_Rand__liBKmwv1H6v7oYBhDFHa6A state__pureZrandom_14;
N_LIB_PRIVATE pthread_mutex_t baseSeedLock__pureZrandom_255;
N_LIB_PRIVATE tyObject_Rand__liBKmwv1H6v7oYBhDFHa6A baseState__pureZrandom_256;
extern NIM_THREADVAR TSafePoint* excHandler__system_3102;
extern NIM_THREADVAR TSafePoint* excHandler__system_3102;
extern NIM_THREADVAR TSafePoint* excHandler__system_3102;
extern NIM_THREADVAR TSafePoint* excHandler__system_3102;
static N_INLINE(void, initLock__coreZlocks_64)(pthread_mutex_t* lock) {
	pthread_mutex_init(lock, ((pthread_mutexattr_t*) NIM_NIL));
}
N_LIB_PRIVATE N_NIMCALL(NU64, rotl__pureZrandom_32)(NU64 x, NU64 k) {
	NU64 result;
	result = (NU64)0;
	result = (NU64)((NU64)((NU64)(x) << (NU64)(k)) | (NU64)((NU64)(x) >> (NU64)((NU64)((NU64)(64ULL) - (NU64)(k)))));
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NU64, next__pureZrandom_44)(tyObject_Rand__liBKmwv1H6v7oYBhDFHa6A* r) {
	NU64 result;
	NU64 s0;
	NU64 s1;
	NU64 T1_;
	result = (NU64)0;
	s0 = (*r).a0;
	s1 = (*r).a1;
	result = (NU64)((NU64)(s0) + (NU64)(s1));
	s1 = (NU64)(s1 ^ s0);
	T1_ = (NU64)0;
	T1_ = rotl__pureZrandom_32(s0, 55ULL);
	(*r).a0 = (NU64)((NU64)(T1_ ^ s1) ^ (NU64)((NU64)(s1) << (NU64)(((NI) 14))));
	(*r).a1 = rotl__pureZrandom_32(s1, 36ULL);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NU64, rand__pureZrandom_96)(tyObject_Rand__liBKmwv1H6v7oYBhDFHa6A* r, NU64 max) {
	NU64 result;
{	result = (NU64)0;
	{
		if (!(max == 0ULL)) goto LA3_;
		goto BeforeRet_;
	}
	goto LA1_;
	LA3_: ;
	{
		NU64 max_2;
		max_2 = max;
		{
			if (!(max_2 == 18446744073709551615ULL)) goto LA8_;
			result = next__pureZrandom_44(r);
			goto BeforeRet_;
		}
		LA8_: ;
		{
			while (1) {
				NU64 x;
				x = next__pureZrandom_44(r);
				{
					if (!((NU64)(x) <= (NU64)((NU64)((NU64)(18446744073709551615ULL) - (NU64)((NU64)((NU64)(18446744073709551615ULL) % (NU64)(max_2))))))) goto LA14_;
					result = (NU64)((NU64)(x) % (NU64)((NU64)((NU64)(max_2) + (NU64)(1ULL))));
					goto BeforeRet_;
				}
				LA14_: ;
			}
		}
	}
	LA1_: ;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI, rand__pureZrandom_92)(tyObject_Rand__liBKmwv1H6v7oYBhDFHa6A* r, NI max) {
	NI result;
	NU64 T1_;
	result = (NI)0;
	T1_ = (NU64)0;
	T1_ = rand__pureZrandom_96(r, ((NU64) (max)));
	result = ((NI) (T1_));
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI, rand__pureZrandom_115)(NI max) {
	NI result;
	result = (NI)0;
	result = rand__pureZrandom_92((&state__pureZrandom_14), ((NI) (max)));
	return result;
}
static N_INLINE(void, nimSetMem__systemZmemory_7)(void* a, int v, NI size) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memset(a, v, ((size_t) (size)));
}
static N_INLINE(void, nimZeroMem)(void* p, NI size) {
	nimSetMem__systemZmemory_7(p, ((int) 0), size);
}
N_LIB_PRIVATE N_NIMCALL(void, skipRandomNumbers__pureZrandom_53)(tyObject_Rand__liBKmwv1H6v7oYBhDFHa6A* s) {
	NU64 s0;
	NU64 s1;
	s0 = 0ULL;
	s1 = 0ULL;
	{
		NI i;
		NI res;
		i = (NI)0;
		res = ((NI) 0);
		{
			while (1) {
				if (!(res <= ((NI) 1))) goto LA3;
				i = res;
				{
					NI b;
					NI i_2;
					b = (NI)0;
					i_2 = ((NI) 0);
					{
						while (1) {
							NU64 T11_;
							if (!(i_2 < ((NI) 64))) goto LA6;
							b = i_2;
							{
								if (!!(((NU64)(helper__pureZrandom_55[(i)- 0] & (NU64)((NU64)(1ULL) << (NU64)(((NU64) (b))))) == 0ULL))) goto LA9_;
								s0 = (NU64)(s0 ^ (*s).a0);
								s1 = (NU64)(s1 ^ (*s).a1);
							}
							LA9_: ;
							T11_ = (NU64)0;
							T11_ = next__pureZrandom_44(s);
							(void)(T11_);
							i_2 += ((NI) 1);
						} LA6: ;
					}
				}
				res += ((NI) 1);
			} LA3: ;
		}
	}
	(*s).a0 = s0;
	(*s).a1 = s1;
}
N_LIB_PRIVATE N_NIMCALL(tyObject_Rand__liBKmwv1H6v7oYBhDFHa6A, initRand__pureZrandom_226)(NI64 seed) {
	tyObject_Rand__liBKmwv1H6v7oYBhDFHa6A result;
	NI64 seed_2;
	NU64 T6_;
	nimZeroMem((void*)(&result), sizeof(tyObject_Rand__liBKmwv1H6v7oYBhDFHa6A));
	{
		if (!!((seed == IL64(0)))) goto LA3_;
		seed_2 = seed;
	}
	goto LA1_;
	LA3_: ;
	{
		seed_2 = IL64(2147483647);
	}
	LA1_: ;
	result.a0 = ((NU64) ((NI64)((NI64)(seed_2) >> (NU64)(((NI) 16)))));
	result.a1 = ((NU64) ((NI64)(seed_2 & IL64(65535))));
	skipRandomNumbers__pureZrandom_53((&result));
	T6_ = (NU64)0;
	T6_ = next__pureZrandom_44((&result));
	(void)(T6_);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, randomize__pureZrandom_239)(NI64 seed) {
	state__pureZrandom_14 = initRand__pureZrandom_226(seed);
}
static N_INLINE(void, acquire__coreZlocks_71)(pthread_mutex_t* lock) {
	pthread_mutex_lock(lock);
}
static N_INLINE(void, pushSafePoint)(TSafePoint* s) {
	(*s).prev = excHandler__system_3102;
	excHandler__system_3102 = s;
}
static N_INLINE(NIM_BOOL, isValid__pureZrandom_24)(tyObject_Rand__liBKmwv1H6v7oYBhDFHa6A r) {
	NIM_BOOL result;
	NIM_BOOL T1_;
	result = (NIM_BOOL)0;
	T1_ = (NIM_BOOL)0;
	T1_ = (r.a0 == 0ULL);
	if (!(T1_)) goto LA2_;
	T1_ = (r.a1 == 0ULL);
	LA2_: ;
	result = !(T1_);
	return result;
}
static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memcpy(dest, source, ((size_t) (size)));
}
static N_INLINE(void, copyMem__system_1727)(void* dest, void* source, NI size) {
	nimCopyMem(dest, source, size);
}
N_LIB_PRIVATE N_NIMCALL(tyObject_Rand__liBKmwv1H6v7oYBhDFHa6A, getRandomState__pureZrandom_259)(void) {
	tyObject_Rand__liBKmwv1H6v7oYBhDFHa6A result;
	tyArray__qtqsWM5aXmcpMIVmvq3kAA urand;
	nimZeroMem((void*)(&result), sizeof(tyObject_Rand__liBKmwv1H6v7oYBhDFHa6A));
	nimZeroMem((void*)urand, sizeof(tyArray__qtqsWM5aXmcpMIVmvq3kAA));
	{
		NI i;
		NI res;
		i = (NI)0;
		res = ((NI) 0);
		{
			while (1) {
				if (!(res <= ((NI) 7))) goto LA3;
				i = res;
				{
					NIM_BOOL T6_;
					T6_ = (NIM_BOOL)0;
					T6_ = urandom__stdZsysrand_47(urand, 16);
					if (!T6_) goto LA7_;
					copyMem__system_1727(((void*) ((&result))), ((void*) ((&urand[(((NI) 0))- 0]))), ((NI) 16));
					{
						NIM_BOOL T11_;
						T11_ = (NIM_BOOL)0;
						T11_ = isValid__pureZrandom_24(result);
						if (!T11_) goto LA12_;
						goto LA1;
					}
					LA12_: ;
				}
				LA7_: ;
				res += ((NI) 1);
			} LA3: ;
		}
	} LA1: ;
	{
		NIM_BOOL T16_;
		T16_ = (NIM_BOOL)0;
		T16_ = isValid__pureZrandom_24(result);
		if (!!(T16_)) goto LA17_;
		quit__system_8104(((NimStringDesc*) &TM__AIKkgex03Z1j45JceakCTA_3), ((NI) 1));
	}
	LA17_: ;
	return result;
}
static N_INLINE(void, popSafePoint)(void) {
	excHandler__system_3102 = (*excHandler__system_3102).prev;
}
static N_INLINE(void, release__coreZlocks_73)(pthread_mutex_t* lock) {
	pthread_mutex_unlock(lock);
}
N_LIB_PRIVATE N_NIMCALL(tyObject_Rand__liBKmwv1H6v7oYBhDFHa6A, initRand__pureZrandom_257)(void) {
	tyObject_Rand__liBKmwv1H6v7oYBhDFHa6A volatile result;
	TSafePoint TM__AIKkgex03Z1j45JceakCTA_2;
	nimZeroMem((void*)(&result), sizeof(tyObject_Rand__liBKmwv1H6v7oYBhDFHa6A));
	acquire__coreZlocks_71((&baseSeedLock__pureZrandom_255));
	pushSafePoint(&TM__AIKkgex03Z1j45JceakCTA_2);
	TM__AIKkgex03Z1j45JceakCTA_2.status = setjmp(TM__AIKkgex03Z1j45JceakCTA_2.context);
	if (TM__AIKkgex03Z1j45JceakCTA_2.status == 0) {
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = isValid__pureZrandom_24(baseState__pureZrandom_256);
		if (!!(T3_)) goto LA4_;
		baseState__pureZrandom_256 = getRandomState__pureZrandom_259();
	}
	LA4_: ;
	result = baseState__pureZrandom_256;
	skipRandomNumbers__pureZrandom_53((&baseState__pureZrandom_256));
	popSafePoint();
	}
	else {
		popSafePoint();
	}
	{
		release__coreZlocks_73((&baseSeedLock__pureZrandom_255));
		if (TM__AIKkgex03Z1j45JceakCTA_2.status != 0) nimLeaveFinally();
	}
	if (TM__AIKkgex03Z1j45JceakCTA_2.status != 0) reraiseException();
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, randomize__pureZrandom_289)(void) {
	state__pureZrandom_14 = initRand__pureZrandom_257();
}
N_LIB_PRIVATE N_NIMCALL(NI, rand__main_1595)(tyObject_Rand__liBKmwv1H6v7oYBhDFHa6A* r, tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA x) {
	NI result;
	NU64 T1_;
	result = (NI)0;
	T1_ = (NU64)0;
	T1_ = rand__pureZrandom_96(r, (NU64)((NU64)(((NU64) (x.b))) - (NU64)(((NU64) (x.a)))));
	result = ((NI) ((NU64)((NU64)(T1_) + (NU64)(((NU64) (x.a))))));
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI, rand__main_1587)(tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA x) {
	NI result;
	result = (NI)0;
	result = rand__main_1595((&state__pureZrandom_14), x);
	return result;
}
static N_INLINE(tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA, dotdot___pureZunicode_840)(NI a, NI b) {
	tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA result;
	nimZeroMem((void*)(&result), sizeof(tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA));
	nimZeroMem((void*)(&result), sizeof(tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA));
	result.a = a;
	result.b = b;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI*, sample__main_1568)(NI* a, NI aLen_0) {
	NI* result;
	tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA T1_;
	NI T2_;
	result = (NI*)0;
	T1_ = dotdot___pureZunicode_840(((NI) 0), (aLen_0-1));
	T2_ = (NI)0;
	T2_ = rand__main_1587(T1_);
	result = (&a[T2_]);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, atmdotdotatsdotdotatsdotchoosenimatstoolchainsatsnimminusathheadatslibatspureatsrandomdotnim_Init000)(void) {
{
	state__pureZrandom_14 = DefaultRandSeed__pureZrandom_13;
	initLock__coreZlocks_64((&baseSeedLock__pureZrandom_255));
}
}

