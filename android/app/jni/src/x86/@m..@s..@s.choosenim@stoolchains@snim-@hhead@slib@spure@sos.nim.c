/* Generated by Nim Compiler v1.7.1 */
#define NIM_INTBITS 32

#include "nimbase.h"
#include <sys/stat.h>
#include <sys/types.h>
#include <errno.h>
#include <string.h>
#include <sys/types.h>
                          #include <pthread.h>
#include <time.h>
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
typedef struct tyObject_OSError__BeJgrOdDsczOwEWOZbRfKA tyObject_OSError__BeJgrOdDsczOwEWOZbRfKA;
typedef struct tyObject_CatchableError__qrLSDoe2oBoAqNtJ9badtnA tyObject_CatchableError__qrLSDoe2oBoAqNtJ9badtnA;
typedef struct Exception Exception;
typedef struct RootObj RootObj;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tySequence__uB9b75OUPRENsBAu4AnoePA tySequence__uB9b75OUPRENsBAu4AnoePA;
typedef struct tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g;
typedef struct tyObject_CellSeq__Axo1XVm9aaQueTOldv8le5w tyObject_CellSeq__Axo1XVm9aaQueTOldv8le5w;
typedef struct tyObject_GcHeap__1TRH1TZMaVZTnLNcIHuNFQ tyObject_GcHeap__1TRH1TZMaVZTnLNcIHuNFQ;
typedef struct tyObject_GcStack__7fytPA5bBsob6See21YMRA tyObject_GcStack__7fytPA5bBsob6See21YMRA;
typedef struct tyObject_MemRegion__x81NhDv59b8ercDZ9bi85jyg tyObject_MemRegion__x81NhDv59b8ercDZ9bi85jyg;
typedef struct tyObject_SmallChunk__tXn60W2f8h3jgAYdEmy5NQ tyObject_SmallChunk__tXn60W2f8h3jgAYdEmy5NQ;
typedef struct tyObject_BigChunk__Rv9c70Uhp2TytkX7eH78qEg tyObject_BigChunk__Rv9c70Uhp2TytkX7eH78qEg;
typedef struct tyObject_LLChunk__XsENErzHIZV9bhvyJx56wGw tyObject_LLChunk__XsENErzHIZV9bhvyJx56wGw;
typedef struct tyObject_IntSet__EZObFrE3NC9bIb3YMkY9crZA tyObject_IntSet__EZObFrE3NC9bIb3YMkY9crZA;
typedef struct tyObject_Trunk__W0r8S0Y3UGke6T9bIUWnnuw tyObject_Trunk__W0r8S0Y3UGke6T9bIUWnnuw;
typedef struct tyObject_AvlNode__IaqjtwKhxLEpvDS9bct9blEw tyObject_AvlNode__IaqjtwKhxLEpvDS9bct9blEw;
typedef struct tyObject_HeapLinks__PDV1HBZ8CQSQJC9aOBFNRSg tyObject_HeapLinks__PDV1HBZ8CQSQJC9aOBFNRSg;
typedef struct tyTuple__ujsjpB2O9cjj3uDHsXbnSzg tyTuple__ujsjpB2O9cjj3uDHsXbnSzg;
typedef struct tyObject_GcStat__0RwLoVBHZPfUAcLczmfQAg tyObject_GcStat__0RwLoVBHZPfUAcLczmfQAg;
typedef struct tyObject_CellSet__jG87P0AI9aZtss9ccTYBIISQ tyObject_CellSet__jG87P0AI9aZtss9ccTYBIISQ;
typedef struct tyObject_PageDesc__fublkgIY4LG3mT51LU2WHg tyObject_PageDesc__fublkgIY4LG3mT51LU2WHg;
typedef struct tyObject_SharedList__JI9cx34TL8n3aOKF6tSMBUw tyObject_SharedList__JI9cx34TL8n3aOKF6tSMBUw;
typedef struct tyObject_SharedListNodecolonObjectType___KGw0YAw6W9aSz3Sr9aXGu7zg tyObject_SharedListNodecolonObjectType___KGw0YAw6W9aSz3Sr9aXGu7zg;
typedef struct tyObject_IOError__iLZrPn9anoh9ad1MmO0RczFw tyObject_IOError__iLZrPn9anoh9ad1MmO0RczFw;
typedef struct tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA;
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
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
struct Exception {
  RootObj Sup;
Exception* parent;
NCSTRING name;
NimStringDesc* message;
tySequence__uB9b75OUPRENsBAu4AnoePA* trace;
Exception* up;
};
struct tyObject_CatchableError__qrLSDoe2oBoAqNtJ9badtnA {
  Exception Sup;
};
struct tyObject_OSError__BeJgrOdDsczOwEWOZbRfKA {
  tyObject_CatchableError__qrLSDoe2oBoAqNtJ9badtnA Sup;
NI32 errorCode;
};
typedef NU8 tyEnum_TNimNodeKind__unfNsxrcATrufDZmpBq4HQ;
struct TNimNode {
tyEnum_TNimNodeKind__unfNsxrcATrufDZmpBq4HQ kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g {
NI refcount;
TNimType* typ;
};
struct tyObject_GcStack__7fytPA5bBsob6See21YMRA {
void* bottom;
};
struct tyObject_CellSeq__Axo1XVm9aaQueTOldv8le5w {
NI len;
NI cap;
tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g** d;
};
typedef tyObject_SmallChunk__tXn60W2f8h3jgAYdEmy5NQ* tyArray__SPr7N6UKfuF549bNPiUvSRw[256];
typedef NU32 tyArray__BHbOSqU1t9b3Gt7K2c6fQig[24];
typedef tyObject_BigChunk__Rv9c70Uhp2TytkX7eH78qEg* tyArray__N1u1nqOgmuJN9cSZrnMHgOQ[32];
typedef tyArray__N1u1nqOgmuJN9cSZrnMHgOQ tyArray__B6durA4ZCi1xjJvRtyYxMg[24];
typedef tyObject_Trunk__W0r8S0Y3UGke6T9bIUWnnuw* tyArray__lh2A89ahMmYg9bCmpVaplLbA[256];
struct tyObject_IntSet__EZObFrE3NC9bIb3YMkY9crZA {
tyArray__lh2A89ahMmYg9bCmpVaplLbA data;
};
typedef tyObject_AvlNode__IaqjtwKhxLEpvDS9bct9blEw* tyArray__0aOLqZchNi8nWtMTi8ND8w[2];
struct tyObject_AvlNode__IaqjtwKhxLEpvDS9bct9blEw {
tyArray__0aOLqZchNi8nWtMTi8ND8w link;
NI key;
NI upperBound;
NI level;
};
struct tyTuple__ujsjpB2O9cjj3uDHsXbnSzg {
tyObject_BigChunk__Rv9c70Uhp2TytkX7eH78qEg* Field0;
NI Field1;
};
typedef tyTuple__ujsjpB2O9cjj3uDHsXbnSzg tyArray__LzOv2eCDGiceMKQstCLmhw[30];
struct tyObject_HeapLinks__PDV1HBZ8CQSQJC9aOBFNRSg {
NI len;
tyArray__LzOv2eCDGiceMKQstCLmhw chunks;
tyObject_HeapLinks__PDV1HBZ8CQSQJC9aOBFNRSg* next;
};
struct tyObject_MemRegion__x81NhDv59b8ercDZ9bi85jyg {
NI minLargeObj;
NI maxLargeObj;
tyArray__SPr7N6UKfuF549bNPiUvSRw freeSmallChunks;
NU32 flBitmap;
tyArray__BHbOSqU1t9b3Gt7K2c6fQig slBitmap;
tyArray__B6durA4ZCi1xjJvRtyYxMg matrix;
tyObject_LLChunk__XsENErzHIZV9bhvyJx56wGw* llmem;
NI currMem;
NI maxMem;
NI freeMem;
NI occ;
NI lastSize;
tyObject_IntSet__EZObFrE3NC9bIb3YMkY9crZA chunkStarts;
tyObject_AvlNode__IaqjtwKhxLEpvDS9bct9blEw* root;
tyObject_AvlNode__IaqjtwKhxLEpvDS9bct9blEw* deleted;
tyObject_AvlNode__IaqjtwKhxLEpvDS9bct9blEw* last;
tyObject_AvlNode__IaqjtwKhxLEpvDS9bct9blEw* freeAvlNodes;
NIM_BOOL locked;
NIM_BOOL blockChunkSizeIncrease;
NI nextChunkSize;
tyObject_AvlNode__IaqjtwKhxLEpvDS9bct9blEw bottomData;
tyObject_HeapLinks__PDV1HBZ8CQSQJC9aOBFNRSg heapLinks;
};
struct tyObject_GcStat__0RwLoVBHZPfUAcLczmfQAg {
NI stackScans;
NI cycleCollections;
NI maxThreshold;
NI maxStackSize;
NI maxStackCells;
NI cycleTableSize;
NI64 maxPause;
};
struct tyObject_CellSet__jG87P0AI9aZtss9ccTYBIISQ {
NI counter;
NI max;
tyObject_PageDesc__fublkgIY4LG3mT51LU2WHg* head;
tyObject_PageDesc__fublkgIY4LG3mT51LU2WHg** data;
};
struct tyObject_SharedList__JI9cx34TL8n3aOKF6tSMBUw {
tyObject_SharedListNodecolonObjectType___KGw0YAw6W9aSz3Sr9aXGu7zg* head;
tyObject_SharedListNodecolonObjectType___KGw0YAw6W9aSz3Sr9aXGu7zg* tail;
pthread_mutex_t lock;
};
struct tyObject_GcHeap__1TRH1TZMaVZTnLNcIHuNFQ {
tyObject_GcStack__7fytPA5bBsob6See21YMRA stack;
NI cycleThreshold;
NI zctThreshold;
tyObject_CellSeq__Axo1XVm9aaQueTOldv8le5w zct;
tyObject_CellSeq__Axo1XVm9aaQueTOldv8le5w decStack;
tyObject_CellSeq__Axo1XVm9aaQueTOldv8le5w tempStack;
NI recGcLock;
tyObject_MemRegion__x81NhDv59b8ercDZ9bi85jyg region;
tyObject_GcStat__0RwLoVBHZPfUAcLczmfQAg stat;
tyObject_CellSet__jG87P0AI9aZtss9ccTYBIISQ marked;
tyObject_CellSeq__Axo1XVm9aaQueTOldv8le5w additionalRoots;
tyObject_SharedList__JI9cx34TL8n3aOKF6tSMBUw toDispose;
NI gcThreadId;
};
struct tyObject_IOError__iLZrPn9anoh9ad1MmO0RczFw {
  tyObject_CatchableError__qrLSDoe2oBoAqNtJ9badtnA Sup;
};
struct tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA {
NCSTRING procname;
NI line;
NCSTRING filename;
};
struct tySequence__uB9b75OUPRENsBAu4AnoePA {
  TGenericSeq Sup;
  tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA data[SEQ_DECL_SIZE];
};
N_NIMCALL(NimStringDesc*, rawNewString)(NI cap);
N_LIB_PRIVATE N_NIMCALL(void, joinPathImpl__pureZos_82)(NimStringDesc** result, NI* state, NimStringDesc* tail);
static N_INLINE(NIM_CHAR, X5BX5D___system_8242)(NimStringDesc* s, NI i);
static N_INLINE(NIM_CHAR*, X5BX5D___system_8275)(NimStringDesc** s, NI i);
N_LIB_PRIVATE N_NIMCALL(void, normalizePathEnd__pureZos_51)(NimStringDesc** path, NIM_BOOL trailingSep);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, setLengthStr)(NimStringDesc* s, NI newLen);
N_LIB_PRIVATE N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s, NIM_CHAR c);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_LIB_PRIVATE N_NIMCALL(void, addNormalizePath__pureZpathnorm_71)(NimStringDesc* x, NimStringDesc** result, NI* state, NIM_CHAR dirSep);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, nosexistsOrCreateDir)(NimStringDesc* dir);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, rawCreateDir__pureZos_1405)(NimStringDesc* dir);
static N_INLINE(NCSTRING, nimToCStringConv)(NimStringDesc* s);
N_LIB_PRIVATE N_NOINLINE(void, raiseOSError__pureZos_405)(NI32 errorCode, NimStringDesc* additionalInfo);
N_LIB_PRIVATE N_NOINLINE(tyObject_OSError__BeJgrOdDsczOwEWOZbRfKA*, newOSError__pureZos_379)(NI32 errorCode, NimStringDesc* additionalInfo);
N_LIB_PRIVATE N_NOINLINE(void*, newObj)(TNimType* typ, NI size);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, osErrorMsg__pureZos_358)(NI32 errorCode);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, cstrToNimstr)(NCSTRING str);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incRef__system_5847)(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c);
static N_INLINE(NI, pluspercent___system_696)(NI x, NI y);
static N_INLINE(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell__system_5809)(void* usr);
static N_INLINE(NI, minuspercent___system_716)(NI x, NI y);
static N_INLINE(void, decRef__system_5854)(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c);
static N_INLINE(NIM_BOOL, ltpercent___system_1005)(NI x, NI y);
static N_INLINE(void, rtlAddZCT__system_5852)(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c);
N_LIB_PRIVATE N_NOINLINE(void, addZCT__system_5803)(tyObject_CellSeq__Axo1XVm9aaQueTOldv8le5w* s, tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
static N_INLINE(void, copyMem__system_1727)(void* dest, void* source, NI size);
static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
N_LIB_PRIVATE N_NIMCALL(void, raiseExceptionEx)(Exception* e, NCSTRING ename, NCSTRING procname, NCSTRING filename, NI line);
N_LIB_PRIVATE N_NIMCALL(NI32, osLastError__pureZos_408)(void);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, nosdirExists)(NimStringDesc* dir);
static N_INLINE(void, nimZeroMem)(void* p, NI size);
static N_INLINE(void, nimSetMem__systemZmemory_7)(void* a, int v, NI size);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, substr__system_8649)(NimStringDesc* s, NI first, NI last);
STRING_LITERAL(TM__yu6cxgKBBXbNsTkT9cyMd4g_2, "/", 1);
extern TNimType NTIrefoserror__9clYsYwyjCqe2PFTuCI3Ubg_;
extern TNimType NTIoserror__BeJgrOdDsczOwEWOZbRfKA_;
STRING_LITERAL(TM__yu6cxgKBBXbNsTkT9cyMd4g_3, "Additional info: ", 17);
STRING_LITERAL(TM__yu6cxgKBBXbNsTkT9cyMd4g_4, "unknown OS error", 16);
extern TNimType NTIrefioerror__HMIVdYjdZYWskTmTQVo5BQ_;
extern TNimType NTIioerror__iLZrPn9anoh9ad1MmO0RczFw_;
STRING_LITERAL(TM__yu6cxgKBBXbNsTkT9cyMd4g_5, "Failed to create \'", 18);
STRING_LITERAL(TM__yu6cxgKBBXbNsTkT9cyMd4g_6, "\'", 1);
extern NCSTRING* environ;
extern int cmdCount;
extern NCSTRING* cmdLine;
extern NIM_THREADVAR tyObject_GcHeap__1TRH1TZMaVZTnLNcIHuNFQ gch__system_5742;
static N_INLINE(NIM_CHAR, X5BX5D___system_8242)(NimStringDesc* s, NI i) {
	NIM_CHAR result;
	result = (NIM_CHAR)0;
	result = s->data[(NI)((s ? s->Sup.len : 0) - i)];
	return result;
}
static N_INLINE(NIM_CHAR*, X5BX5D___system_8275)(NimStringDesc** s, NI i) {
	NIM_CHAR* result;
	result = (NIM_CHAR*)0;
	result = (&(*s)->data[(NI)(((*s) ? (*s)->Sup.len : 0) - i)]);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, normalizePathEnd__pureZos_51)(NimStringDesc** path, NIM_BOOL trailingSep) {
	NI i;
{	{
		if (!(((*path) ? (*path)->Sup.len : 0) == ((NI) 0))) goto LA3_;
		goto BeforeRet_;
	}
	LA3_: ;
	i = ((*path) ? (*path)->Sup.len : 0);
	{
		while (1) {
			if (!(((NI) 1) <= i)) goto LA6;
			{
				if (!(((NU8)((*path)->data[(NI)(i - ((NI) 1))])) == ((NU8)(47)) || ((NU8)((*path)->data[(NI)(i - ((NI) 1))])) == ((NU8)(47)))) goto LA9_;
				i -= ((NI) 1);
			}
			goto LA7_;
			LA9_: ;
			{
				NIM_BOOL T12_;
				NIM_BOOL T13_;
				T12_ = (NIM_BOOL)0;
				T13_ = (NIM_BOOL)0;
				T13_ = ((NU8)((*path)->data[(NI)(i - ((NI) 1))]) == (NU8)(46));
				if (!(T13_)) goto LA14_;
				T13_ = (((NI) 2) <= i);
				LA14_: ;
				T12_ = T13_;
				if (!(T12_)) goto LA15_;
				T12_ = (((NU8)((*path)->data[(NI)(i - ((NI) 2))])) == ((NU8)(47)) || ((NU8)((*path)->data[(NI)(i - ((NI) 2))])) == ((NU8)(47)));
				LA15_: ;
				if (!T12_) goto LA16_;
				i -= ((NI) 1);
			}
			goto LA7_;
			LA16_: ;
			{
				goto LA5;
			}
			LA7_: ;
		} LA6: ;
	} LA5: ;
	{
		if (!trailingSep) goto LA21_;
		unsureAsgnRef((void**) (&(*path)), setLengthStr((*path), ((NI) (i))));
		unsureAsgnRef((void**) (&(*path)), addChar((*path), 47));
	}
	goto LA19_;
	LA21_: ;
	{
		if (!(((NI) 0) < i)) goto LA24_;
		unsureAsgnRef((void**) (&(*path)), setLengthStr((*path), ((NI) (i))));
	}
	goto LA19_;
	LA24_: ;
	{
		unsureAsgnRef((void**) (&(*path)), copyString(((NimStringDesc*) &TM__yu6cxgKBBXbNsTkT9cyMd4g_2)));
	}
	LA19_: ;
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(void, joinPathImpl__pureZos_82)(NimStringDesc** result, NI* state, NimStringDesc* tail) {
	NIM_BOOL trailingSep;
	NIM_BOOL T1_;
	NIM_BOOL T2_;
	NIM_CHAR T4_;
	NIM_BOOL T6_;
	NIM_BOOL T8_;
	NIM_CHAR* T10_;
	T1_ = (NIM_BOOL)0;
	T2_ = (NIM_BOOL)0;
	T2_ = (((NI) 0) < (tail ? tail->Sup.len : 0));
	if (!(T2_)) goto LA3_;
	T4_ = (NIM_CHAR)0;
	T4_ = X5BX5D___system_8242(tail, ((NI) 1));
	T2_ = (((NU8)(T4_)) == ((NU8)(47)) || ((NU8)(T4_)) == ((NU8)(47)));
	LA3_: ;
	T1_ = T2_;
	if (T1_) goto LA5_;
	T6_ = (NIM_BOOL)0;
	T6_ = ((tail ? tail->Sup.len : 0) == ((NI) 0));
	if (!(T6_)) goto LA7_;
	T8_ = (NIM_BOOL)0;
	T8_ = (((NI) 0) < ((*result) ? (*result)->Sup.len : 0));
	if (!(T8_)) goto LA9_;
	T10_ = (NIM_CHAR*)0;
	T10_ = X5BX5D___system_8275(result, ((NI) 1));
	T8_ = (((NU8)((*T10_))) == ((NU8)(47)) || ((NU8)((*T10_))) == ((NU8)(47)));
	LA9_: ;
	T6_ = T8_;
	LA7_: ;
	T1_ = T6_;
	LA5_: ;
	trailingSep = T1_;
	normalizePathEnd__pureZos_51(result, NIM_FALSE);
	addNormalizePath__pureZpathnorm_71(tail, result, state, 47);
	normalizePathEnd__pureZos_51(result, trailingSep);
}
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, nosjoinPath)(NimStringDesc* head, NimStringDesc* tail) {
	NimStringDesc* result;
	NI state;
	result = NIM_NIL;
	result = rawNewString(((NI) ((NI)((head ? head->Sup.len : 0) + (tail ? tail->Sup.len : 0)))));
	state = ((NI) 0);
	joinPathImpl__pureZos_82((&result), (&state), head);
	joinPathImpl__pureZos_82((&result), (&state), tail);
	return result;
}
static N_INLINE(NCSTRING, nimToCStringConv)(NimStringDesc* s) {
	NCSTRING result;
	result = (NCSTRING)0;
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = (s == ((NimStringDesc*) NIM_NIL));
		if (T3_) goto LA4_;
		T3_ = ((*s).Sup.len == ((NI) 0));
		LA4_: ;
		if (!T3_) goto LA5_;
		result = "";
	}
	goto LA1_;
	LA5_: ;
	{
		result = ((NCSTRING) ((*s).data));
	}
	LA1_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, osErrorMsg__pureZos_358)(NI32 errorCode) {
	NimStringDesc* result;
	result = NIM_NIL;
	result = ((NimStringDesc*) NIM_NIL);
	{
		NCSTRING T5_;
		if (!!((errorCode == ((NI32) 0)))) goto LA3_;
		T5_ = (NCSTRING)0;
		T5_ = strerror(errorCode);
		result = cstrToNimstr(T5_);
	}
	LA3_: ;
	return result;
}
static N_INLINE(NI, pluspercent___system_696)(NI x, NI y) {
	NI result;
	result = (NI)0;
	result = ((NI) ((NU)((NU32)(((NU) (x))) + (NU32)(((NU) (y))))));
	return result;
}
static N_INLINE(void, incRef__system_5847)(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c) {
	(*c).refcount = pluspercent___system_696((*c).refcount, ((NI) 8));
}
static N_INLINE(NI, minuspercent___system_716)(NI x, NI y) {
	NI result;
	result = (NI)0;
	result = ((NI) ((NU)((NU32)(((NU) (x))) - (NU32)(((NU) (y))))));
	return result;
}
static N_INLINE(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell__system_5809)(void* usr) {
	tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* result;
	NI T1_;
	result = (tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g*)0;
	T1_ = (NI)0;
	T1_ = minuspercent___system_716(((NI) (ptrdiff_t) (usr)), ((NI) 8));
	result = ((tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g*) (T1_));
	return result;
}
static N_INLINE(NIM_BOOL, ltpercent___system_1005)(NI x, NI y) {
	NIM_BOOL result;
	result = (NIM_BOOL)0;
	result = ((NU32)(((NU) (x))) < (NU32)(((NU) (y))));
	return result;
}
static N_INLINE(void, rtlAddZCT__system_5852)(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c) {
	addZCT__system_5803((&gch__system_5742.zct), c);
}
static N_INLINE(void, decRef__system_5854)(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c) {
	(*c).refcount = minuspercent___system_716((*c).refcount, ((NI) 8));
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = ltpercent___system_1005((*c).refcount, ((NI) 8));
		if (!T3_) goto LA4_;
		rtlAddZCT__system_5852(c);
	}
	LA4_: ;
}
static N_INLINE(void, asgnRef)(void** dest, void* src) {
	{
		tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* T5_;
		if (!!((src == NIM_NIL))) goto LA3_;
		T5_ = (tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g*)0;
		T5_ = usrToCell__system_5809(src);
		incRef__system_5847(T5_);
	}
	LA3_: ;
	{
		tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* T10_;
		if (!!(((*dest) == NIM_NIL))) goto LA8_;
		T10_ = (tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g*)0;
		T10_ = usrToCell__system_5809((*dest));
		decRef__system_5854(T10_);
	}
	LA8_: ;
	(*dest) = src;
}
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
static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* T1_;
	T1_ = (tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g*)0;
	T1_ = usrToCell__system_5809(p);
	decRef__system_5854(T1_);
}
N_LIB_PRIVATE N_NOINLINE(tyObject_OSError__BeJgrOdDsczOwEWOZbRfKA*, newOSError__pureZos_379)(NI32 errorCode, NimStringDesc* additionalInfo) {
	tyObject_OSError__BeJgrOdDsczOwEWOZbRfKA* result;
	tyObject_OSError__BeJgrOdDsczOwEWOZbRfKA* e;
{	result = NIM_NIL;
	e = NIM_NIL;
	e = (tyObject_OSError__BeJgrOdDsczOwEWOZbRfKA*) newObj((&NTIrefoserror__9clYsYwyjCqe2PFTuCI3Ubg_), sizeof(tyObject_OSError__BeJgrOdDsczOwEWOZbRfKA));
	(*e).Sup.Sup.Sup.m_type = (&NTIoserror__BeJgrOdDsczOwEWOZbRfKA_);
	(*e).Sup.Sup.name = "OSError";
	(*e).errorCode = errorCode;
	asgnRef((void**) (&(*e).Sup.Sup.message), osErrorMsg__pureZos_358(errorCode));
	{
		if (!(((NI) 0) < (additionalInfo ? additionalInfo->Sup.len : 0))) goto LA3_;
		{
			NIM_BOOL T7_;
			NIM_CHAR* T9_;
			T7_ = (NIM_BOOL)0;
			T7_ = (((NI) 0) < ((*e).Sup.Sup.message ? (*e).Sup.Sup.message->Sup.len : 0));
			if (!(T7_)) goto LA8_;
			T9_ = (NIM_CHAR*)0;
			T9_ = X5BX5D___system_8275((&(*e).Sup.Sup.message), ((NI) 1));
			T7_ = !(((NU8)((*T9_)) == (NU8)(10)));
			LA8_: ;
			if (!T7_) goto LA10_;
			asgnRef((void**) (&(*e).Sup.Sup.message), addChar((*e).Sup.Sup.message, 10));
		}
		LA10_: ;
		asgnRef((void**) (&(*e).Sup.Sup.message), resizeString((*e).Sup.Sup.message, 17));
appendString((*e).Sup.Sup.message, ((NimStringDesc*) &TM__yu6cxgKBBXbNsTkT9cyMd4g_3));
		asgnRef((void**) (&(*e).Sup.Sup.message), resizeString((*e).Sup.Sup.message, (additionalInfo ? additionalInfo->Sup.len : 0) + 0));
appendString((*e).Sup.Sup.message, additionalInfo);
	}
	LA3_: ;
	{
		NimStringDesc* T16_;
		if (!(((*e).Sup.Sup.message ? (*e).Sup.Sup.message->Sup.len : 0) == 0)) goto LA14_;
		T16_ = NIM_NIL;
		T16_ = (*e).Sup.Sup.message; (*e).Sup.Sup.message = copyStringRC1(((NimStringDesc*) &TM__yu6cxgKBBXbNsTkT9cyMd4g_4));
		if (T16_) nimGCunrefNoCycle(T16_);
	}
	LA14_: ;
	result = e;
	goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NOINLINE(void, raiseOSError__pureZos_405)(NI32 errorCode, NimStringDesc* additionalInfo) {
	tyObject_OSError__BeJgrOdDsczOwEWOZbRfKA* T1_;
	T1_ = NIM_NIL;
	T1_ = newOSError__pureZos_379(errorCode, additionalInfo);
	raiseExceptionEx((Exception*)T1_, "OSError", "raiseOSError", "oserr.nim", 94);
}
N_LIB_PRIVATE N_NIMCALL(NI32, osLastError__pureZos_408)(void) {
	NI32 result;
	result = (NI32)0;
	result = errno;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, rawCreateDir__pureZos_1405)(NimStringDesc* dir) {
	NIM_BOOL result;
	int res;
	result = (NIM_BOOL)0;
	res = mkdir(nimToCStringConv(dir), ((mode_t) 511));
	{
		if (!(res == ((NI32) 0))) goto LA3_;
		result = NIM_TRUE;
	}
	goto LA1_;
	LA3_: ;
	{
		if (!(errno == EEXIST)) goto LA6_;
		result = NIM_FALSE;
	}
	goto LA1_;
	LA6_: ;
	{
		NI32 T9_;
		T9_ = (NI32)0;
		T9_ = osLastError__pureZos_408();
		raiseOSError__pureZos_405(T9_, dir);
	}
	LA1_: ;
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
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, nosdirExists)(NimStringDesc* dir) {
	NIM_BOOL result;
	struct stat res;
	NIM_BOOL T1_;
	int T2_;
	result = (NIM_BOOL)0;
	nimZeroMem((void*)(&res), sizeof(struct stat));
	T1_ = (NIM_BOOL)0;
	T2_ = (int)0;
	T2_ = stat(nimToCStringConv(dir), (&res));
	T1_ = (((NI32) 0) <= T2_);
	if (!(T1_)) goto LA3_;
	T1_ = S_ISDIR(res.st_mode);
	LA3_: ;
	result = T1_;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, nosexistsOrCreateDir)(NimStringDesc* dir) {
	NIM_BOOL result;
	NIM_BOOL T1_;
	result = (NIM_BOOL)0;
	T1_ = (NIM_BOOL)0;
	T1_ = rawCreateDir__pureZos_1405(dir);
	result = !(T1_);
	{
		if (!result) goto LA4_;
		{
			NIM_BOOL T8_;
			tyObject_IOError__iLZrPn9anoh9ad1MmO0RczFw* T11_;
			NimStringDesc* T12_;
			T8_ = (NIM_BOOL)0;
			T8_ = nosdirExists(dir);
			if (!!(T8_)) goto LA9_;
			T11_ = NIM_NIL;
			T11_ = (tyObject_IOError__iLZrPn9anoh9ad1MmO0RczFw*) newObj((&NTIrefioerror__HMIVdYjdZYWskTmTQVo5BQ_), sizeof(tyObject_IOError__iLZrPn9anoh9ad1MmO0RczFw));
			(*T11_).Sup.Sup.Sup.m_type = (&NTIioerror__iLZrPn9anoh9ad1MmO0RczFw_);
			(*T11_).Sup.Sup.name = "IOError";
			T12_ = NIM_NIL;
			T12_ = rawNewString((dir ? dir->Sup.len : 0) + 19);
appendString(T12_, ((NimStringDesc*) &TM__yu6cxgKBBXbNsTkT9cyMd4g_5));
appendString(T12_, dir);
appendString(T12_, ((NimStringDesc*) &TM__yu6cxgKBBXbNsTkT9cyMd4g_6));
			asgnRef((void**) (&(*T11_).Sup.Sup.message), T12_);
			asgnRef((void**) (&(*T11_).Sup.Sup.parent), ((Exception*) NIM_NIL));
			raiseExceptionEx((Exception*)T11_, "IOError", "existsOrCreateDir", "os.nim", 2524);
		}
		LA9_: ;
	}
	LA4_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, noscreateDir)(NimStringDesc* dir) {
	NIM_BOOL omitNext;
	omitNext = NIM_FALSE;
	{
		NI i;
		NI colontmp_;
		NI res;
		i = (NI)0;
		colontmp_ = (NI)0;
		colontmp_ = (NI)((dir ? dir->Sup.len : 0) - ((NI) 1));
		res = ((NI) 1);
		{
			while (1) {
				if (!(res <= colontmp_)) goto LA3;
				i = res;
				{
					if (!(((NU8)(dir->data[i])) == ((NU8)(47)) || ((NU8)(dir->data[i])) == ((NU8)(47)))) goto LA6_;
					{
						if (!omitNext) goto LA10_;
						omitNext = NIM_FALSE;
					}
					goto LA8_;
					LA10_: ;
					{
						NimStringDesc* T13_;
						NIM_BOOL T14_;
						T13_ = NIM_NIL;
						T13_ = substr__system_8649(dir, ((NI) 0), (NI)(i - ((NI) 1)));
						T14_ = (NIM_BOOL)0;
						T14_ = nosexistsOrCreateDir(T13_);
						(void)(T14_);
					}
					LA8_: ;
				}
				LA6_: ;
				res += ((NI) 1);
			} LA3: ;
		}
	}
	{
		NIM_BOOL T17_;
		NIM_BOOL T18_;
		NIM_CHAR T21_;
		NIM_BOOL T24_;
		T17_ = (NIM_BOOL)0;
		T18_ = (NIM_BOOL)0;
		T18_ = (((NI) 0) < (dir ? dir->Sup.len : 0));
		if (!(T18_)) goto LA19_;
		T18_ = !(omitNext);
		LA19_: ;
		T17_ = T18_;
		if (!(T17_)) goto LA20_;
		T21_ = (NIM_CHAR)0;
		T21_ = X5BX5D___system_8242(dir, ((NI) 1));
		T17_ = !((((NU8)(T21_)) == ((NU8)(47)) || ((NU8)(T21_)) == ((NU8)(47))));
		LA20_: ;
		if (!T17_) goto LA22_;
		T24_ = (NIM_BOOL)0;
		T24_ = nosexistsOrCreateDir(dir);
		(void)(T24_);
	}
	LA22_: ;
}