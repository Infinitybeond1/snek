/* Generated by Nim Compiler v1.7.1 */
#define NIM_INTBITS 64
#define NIM_EmulateOverflowChecks

#include "nimbase.h"
#include <string.h>
#include <android/log.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <stdio.h>
#include <errno.h>
#include <sys/types.h>
                          #include <pthread.h>
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
typedef struct tyObject_IOError__iLZrPn9anoh9ad1MmO0RczFw tyObject_IOError__iLZrPn9anoh9ad1MmO0RczFw;
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
typedef struct tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA;
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef NU8 tyEnum_FileMode__4sJyy9aOSN8X63XdWXl5iDg;
typedef NCSTRING tyArray__vVEuDkYJYRa9c5i5k5FxKmw[5];
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
struct tyObject_IOError__iLZrPn9anoh9ad1MmO0RczFw {
  tyObject_CatchableError__qrLSDoe2oBoAqNtJ9badtnA Sup;
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
typedef NU8 tyEnum_FileSeekPos__I9aQjuvWxs8BspGbxwsngWw;
struct tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA {
NCSTRING procname;
NI line;
NCSTRING filename;
};
struct tySequence__uB9b75OUPRENsBAu4AnoePA {
  TGenericSeq Sup;
  tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA data[SEQ_DECL_SIZE];
};
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
static N_INLINE(void, copyMem__system_1727)(void* dest, void* source, NI size);
static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
static N_INLINE(NCSTRING, nimToCStringConv)(NimStringDesc* s);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, open__stdZsyncio_395)(FILE** f, NimStringDesc* filename, tyEnum_FileMode__4sJyy9aOSN8X63XdWXl5iDg mode, NI bufSize);
N_LIB_PRIVATE N_NIMCALL(int, getFileHandle__stdZsyncio_234)(FILE* f);
N_LIB_PRIVATE N_NIMCALL(void, close__stdZsyncio_222)(FILE* f);
N_LIB_PRIVATE N_NIMCALL(void, checkErr__stdZsyncio_146)(FILE* f);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, dollar___systemZdollars_8)(NI x);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, cstrToNimstr)(NCSTRING str);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_LIB_PRIVATE N_NOINLINE(void, raiseEIO__stdZsyncio_101)(NimStringDesc* msg) __attribute__((noreturn));
N_LIB_PRIVATE N_NOINLINE(void*, newObj)(TNimType* typ, NI size);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(void, decRef__system_5884)(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c);
static N_INLINE(NI, minuspercent___system_716)(NI x, NI y);
static N_INLINE(NIM_BOOL, ltpercent___system_1005)(NI x, NI y);
static N_INLINE(void, rtlAddZCT__system_5882)(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c);
N_LIB_PRIVATE N_NOINLINE(void, addZCT__system_5833)(tyObject_CellSeq__Axo1XVm9aaQueTOldv8le5w* s, tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c);
static N_INLINE(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell__system_5839)(void* usr);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incRef__system_5877)(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c);
static N_INLINE(NI, pluspercent___system_696)(NI x, NI y);
N_LIB_PRIVATE N_NIMCALL(void, raiseExceptionEx)(Exception* e, NCSTRING ename, NCSTRING procname, NCSTRING filename, NI line);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, setLengthStr)(NimStringDesc* s, NI newLen);
N_LIB_PRIVATE N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
static N_INLINE(NIM_BOOL, eqeq___system_8667)(NCSTRING x, NCSTRING y);
N_LIB_PRIVATE NIM_CONST tyArray__vVEuDkYJYRa9c5i5k5FxKmw FormatOpen__stdZsyncio_377 = {"rbe",
"wbe",
"w+be",
"r+be",
"abe"}
;
STRING_LITERAL(TM__xNF6mvRQ4Pd1hTNM9cEHXwQ_2, "errno: ", 7);
STRING_LITERAL(TM__xNF6mvRQ4Pd1hTNM9cEHXwQ_3, " `", 2);
STRING_LITERAL(TM__xNF6mvRQ4Pd1hTNM9cEHXwQ_4, "`", 1);
extern TNimType NTIrefioerror__HMIVdYjdZYWskTmTQVo5BQ_;
extern TNimType NTIioerror__iLZrPn9anoh9ad1MmO0RczFw_;
STRING_LITERAL(TM__xNF6mvRQ4Pd1hTNM9cEHXwQ_5, "cannot open: ", 13);
N_LIB_PRIVATE TNimType NTIcfile__DaPpj2ht6oW1RkMrLZ1KuA_;
N_LIB_PRIVATE TNimType NTIfile__vcnEuXL9aeCG9anmsJ7aG9bKA_;
STRING_LITERAL(TM__xNF6mvRQ4Pd1hTNM9cEHXwQ_6, "cannot set file position", 24);
STRING_LITERAL(TM__xNF6mvRQ4Pd1hTNM9cEHXwQ_7, "cannot retrieve file position", 29);
extern NIM_THREADVAR tyObject_GcHeap__1TRH1TZMaVZTnLNcIHuNFQ gch__system_5772;
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
N_LIB_PRIVATE N_NIMCALL(void, echoBinSafe)(NimStringDesc** args, NI argsLen_0) {
	NimStringDesc* s;
	int T4_;
	s = ((NimStringDesc*) NIM_NIL);
	{
		NimStringDesc** arg;
		NI i;
		arg = (NimStringDesc**)0;
		i = ((NI) 0);
		{
			while (1) {
				if (!(i < argsLen_0)) goto LA3;
				arg = (&args[i]);
				s = resizeString(s, ((*arg) ? (*arg)->Sup.len : 0) + 0);
appendString(s, (*arg));
				i += ((NI) 1);
			} LA3: ;
		}
	}
	T4_ = (int)0;
	T4_ = __android_log_print(((int) 2), "nim", nimToCStringConv(s));
}
N_LIB_PRIVATE N_NIMCALL(int, getFileHandle__stdZsyncio_234)(FILE* f) {
	int result;
	result = (int)0;
	result = fileno(f);
	return result;
}
static N_INLINE(NI, minuspercent___system_716)(NI x, NI y) {
	NI result;
	result = (NI)0;
	result = ((NI) ((NU)((NU64)(((NU) (x))) - (NU64)(((NU) (y))))));
	return result;
}
static N_INLINE(NIM_BOOL, ltpercent___system_1005)(NI x, NI y) {
	NIM_BOOL result;
	result = (NIM_BOOL)0;
	result = ((NU64)(((NU) (x))) < (NU64)(((NU) (y))));
	return result;
}
static N_INLINE(void, rtlAddZCT__system_5882)(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c) {
	addZCT__system_5833((&gch__system_5772.zct), c);
}
static N_INLINE(void, decRef__system_5884)(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c) {
	(*c).refcount = minuspercent___system_716((*c).refcount, ((NI) 8));
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = ltpercent___system_1005((*c).refcount, ((NI) 8));
		if (!T3_) goto LA4_;
		rtlAddZCT__system_5882(c);
	}
	LA4_: ;
}
static N_INLINE(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell__system_5839)(void* usr) {
	tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* result;
	NI T1_;
	result = (tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g*)0;
	T1_ = (NI)0;
	T1_ = minuspercent___system_716(((NI) (ptrdiff_t) (usr)), ((NI) 16));
	result = ((tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g*) (T1_));
	return result;
}
static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* T1_;
	T1_ = (tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g*)0;
	T1_ = usrToCell__system_5839(p);
	decRef__system_5884(T1_);
}
static N_INLINE(NI, pluspercent___system_696)(NI x, NI y) {
	NI result;
	result = (NI)0;
	result = ((NI) ((NU)((NU64)(((NU) (x))) + (NU64)(((NU) (y))))));
	return result;
}
static N_INLINE(void, incRef__system_5877)(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c) {
	(*c).refcount = pluspercent___system_696((*c).refcount, ((NI) 8));
}
static N_INLINE(void, asgnRef)(void** dest, void* src) {
	{
		tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* T5_;
		if (!!((src == NIM_NIL))) goto LA3_;
		T5_ = (tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g*)0;
		T5_ = usrToCell__system_5839(src);
		incRef__system_5877(T5_);
	}
	LA3_: ;
	{
		tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* T10_;
		if (!!(((*dest) == NIM_NIL))) goto LA8_;
		T10_ = (tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g*)0;
		T10_ = usrToCell__system_5839((*dest));
		decRef__system_5884(T10_);
	}
	LA8_: ;
	(*dest) = src;
}
N_LIB_PRIVATE N_NOINLINE(void, raiseEIO__stdZsyncio_101)(NimStringDesc* msg) {
	tyObject_IOError__iLZrPn9anoh9ad1MmO0RczFw* T1_;
	NimStringDesc* T2_;
	T1_ = NIM_NIL;
	T1_ = (tyObject_IOError__iLZrPn9anoh9ad1MmO0RczFw*) newObj((&NTIrefioerror__HMIVdYjdZYWskTmTQVo5BQ_), sizeof(tyObject_IOError__iLZrPn9anoh9ad1MmO0RczFw));
	(*T1_).Sup.Sup.Sup.m_type = (&NTIioerror__iLZrPn9anoh9ad1MmO0RczFw_);
	(*T1_).Sup.Sup.name = "IOError";
	T2_ = NIM_NIL;
	T2_ = (*T1_).Sup.Sup.message; (*T1_).Sup.Sup.message = copyStringRC1(msg);
	if (T2_) nimGCunrefNoCycle(T2_);
	asgnRef((void**) (&(*T1_).Sup.Sup.parent), ((Exception*) NIM_NIL));
	raiseExceptionEx((Exception*)T1_, "IOError", "raiseEIO", "syncio.nim", 156);
}
N_LIB_PRIVATE N_NIMCALL(void, checkErr__stdZsyncio_146)(FILE* f) {
	{
		int T3_;
		NimStringDesc* msg;
		NimStringDesc* T6_;
		NimStringDesc* T7_;
		NCSTRING T8_;
		NimStringDesc* T9_;
		T3_ = (int)0;
		T3_ = ferror(f);
		if (!!((T3_ == ((NI32) 0)))) goto LA4_;
		T6_ = NIM_NIL;
		T7_ = NIM_NIL;
		T7_ = dollar___systemZdollars_8(((NI) (errno)));
		T8_ = (NCSTRING)0;
		T8_ = strerror(errno);
		T9_ = NIM_NIL;
		T9_ = cstrToNimstr(T8_);
		T6_ = rawNewString((T7_ ? T7_->Sup.len : 0) + (T9_ ? T9_->Sup.len : 0) + 10);
appendString(T6_, ((NimStringDesc*) &TM__xNF6mvRQ4Pd1hTNM9cEHXwQ_2));
appendString(T6_, T7_);
appendString(T6_, ((NimStringDesc*) &TM__xNF6mvRQ4Pd1hTNM9cEHXwQ_3));
appendString(T6_, T9_);
appendString(T6_, ((NimStringDesc*) &TM__xNF6mvRQ4Pd1hTNM9cEHXwQ_4));
		msg = T6_;
		clearerr(f);
		raiseEIO__stdZsyncio_101(msg);
	}
	LA4_: ;
}
N_LIB_PRIVATE N_NIMCALL(void, close__stdZsyncio_222)(FILE* f) {
	{
		int x;
		if (!!((f == 0))) goto LA3_;
		x = fclose(f);
		{
			if (!(x < ((NI32) 0))) goto LA7_;
			checkErr__stdZsyncio_146(f);
		}
		LA7_: ;
	}
	LA3_: ;
}
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, open__stdZsyncio_395)(FILE** f, NimStringDesc* filename, tyEnum_FileMode__4sJyy9aOSN8X63XdWXl5iDg mode, NI bufSize) {
	NIM_BOOL result;
	void* p;
{	result = (NIM_BOOL)0;
	p = fopen(nimToCStringConv(filename), FormatOpen__stdZsyncio_377[(mode)- 0]);
	{
		FILE* f2;
		struct stat res;
		if (!!((p == NIM_NIL))) goto LA3_;
		f2 = ((FILE*) (p));
		{
			NIM_BOOL T7_;
			int T8_;
			int T9_;
			T7_ = (NIM_BOOL)0;
			T8_ = (int)0;
			T8_ = getFileHandle__stdZsyncio_234(f2);
			T9_ = (int)0;
			T9_ = fstat(T8_, (&res));
			T7_ = (((NI32) 0) <= T9_);
			if (!(T7_)) goto LA10_;
			T7_ = S_ISDIR(res.st_mode);
			LA10_: ;
			if (!T7_) goto LA11_;
			close__stdZsyncio_222(f2);
			result = NIM_FALSE;
			goto BeforeRet_;
		}
		LA11_: ;
		result = NIM_TRUE;
		(*f) = ((FILE*) (p));
		{
			NIM_BOOL T15_;
			int T19_;
			T15_ = (NIM_BOOL)0;
			T15_ = (((NI) 0) < bufSize);
			if (!(T15_)) goto LA16_;
			T15_ = (bufSize <= ((NI) 2147483647));
			LA16_: ;
			if (!T15_) goto LA17_;
			T19_ = (int)0;
			T19_ = setvbuf((*f), NIM_NIL, _IOFBF, ((size_t) (bufSize)));
			(void)(T19_);
		}
		goto LA13_;
		LA17_: ;
		{
			int T23_;
			if (!(bufSize == ((NI) 0))) goto LA21_;
			T23_ = (int)0;
			T23_ = setvbuf((*f), NIM_NIL, _IONBF, ((size_t) 0));
			(void)(T23_);
		}
		goto LA13_;
		LA21_: ;
		LA13_: ;
	}
	LA3_: ;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(FILE*, open__stdZsyncio_436)(NimStringDesc* filename, tyEnum_FileMode__4sJyy9aOSN8X63XdWXl5iDg mode, NI bufSize) {
	FILE* result;
	result = (FILE*)0;
	{
		NIM_BOOL T3_;
		tyObject_IOError__iLZrPn9anoh9ad1MmO0RczFw* T6_;
		NimStringDesc* T7_;
		T3_ = (NIM_BOOL)0;
		T3_ = open__stdZsyncio_395(&result, filename, mode, bufSize);
		if (!!(T3_)) goto LA4_;
		T6_ = NIM_NIL;
		T6_ = (tyObject_IOError__iLZrPn9anoh9ad1MmO0RczFw*) newObj((&NTIrefioerror__HMIVdYjdZYWskTmTQVo5BQ_), sizeof(tyObject_IOError__iLZrPn9anoh9ad1MmO0RczFw));
		(*T6_).Sup.Sup.Sup.m_type = (&NTIioerror__iLZrPn9anoh9ad1MmO0RczFw_);
		(*T6_).Sup.Sup.name = "IOError";
		T7_ = NIM_NIL;
		T7_ = rawNewString((filename ? filename->Sup.len : 0) + 13);
appendString(T7_, ((NimStringDesc*) &TM__xNF6mvRQ4Pd1hTNM9cEHXwQ_5));
appendString(T7_, filename);
		asgnRef((void**) (&(*T6_).Sup.Sup.message), T7_);
		asgnRef((void**) (&(*T6_).Sup.Sup.parent), ((Exception*) NIM_NIL));
		raiseExceptionEx((Exception*)T6_, "IOError", "open", "syncio.nim", 766);
	}
	LA4_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, endOfFile__stdZsyncio_343)(FILE* f) {
	NIM_BOOL result;
	int c;
	int T1_;
{	result = (NIM_BOOL)0;
	c = fgetc(f);
	T1_ = (int)0;
	T1_ = ungetc(c, f);
	(void)(T1_);
	result = (c < ((NI32) 0));
	goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, setFilePos__stdZsyncio_442)(FILE* f, NI64 pos, tyEnum_FileSeekPos__I9aQjuvWxs8BspGbxwsngWw relativeTo) {
	{
		int T3_;
		T3_ = (int)0;
		T3_ = fseeko(f, pos, ((int) (relativeTo)));
		if (!!((T3_ == ((NI32) 0)))) goto LA4_;
		raiseEIO__stdZsyncio_101(((NimStringDesc*) &TM__xNF6mvRQ4Pd1hTNM9cEHXwQ_6));
	}
	LA4_: ;
}
N_LIB_PRIVATE N_NIMCALL(NI64, getFilePos__stdZsyncio_455)(FILE* f) {
	NI64 result;
	result = (NI64)0;
	result = ftello(f);
	{
		if (!(result < IL64(0))) goto LA3_;
		raiseEIO__stdZsyncio_101(((NimStringDesc*) &TM__xNF6mvRQ4Pd1hTNM9cEHXwQ_7));
	}
	LA3_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI, readBuffer__stdZsyncio_149)(FILE* f, void* buffer, NI len) {
	NI result;
	size_t T1_;
	result = (NI)0;
	T1_ = (size_t)0;
	T1_ = fread(buffer, ((size_t) 1), ((size_t) (len)), f);
	result = ((NI) (T1_));
	{
		if (!!((result == ((NI) (len))))) goto LA4_;
		checkErr__stdZsyncio_146(f);
	}
	LA4_: ;
	return result;
}
static N_INLINE(NIM_BOOL, eqeq___system_8667)(NCSTRING x, NCSTRING y) {
	NIM_BOOL result;
	result = (NIM_BOOL)0;
	{
		if (!(((void*) (x)) == ((void*) (y)))) goto LA3_;
		result = NIM_TRUE;
	}
	goto LA1_;
	LA3_: ;
	{
		NIM_BOOL T6_;
		T6_ = (NIM_BOOL)0;
		T6_ = (x == 0);
		if (T6_) goto LA7_;
		T6_ = (y == 0);
		LA7_: ;
		if (!T6_) goto LA8_;
		result = NIM_FALSE;
	}
	goto LA1_;
	LA8_: ;
	{
		int T11_;
		T11_ = (int)0;
		T11_ = strcmp(x, y);
		result = (T11_ == ((NI32) 0));
	}
	LA1_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, readLine__stdZsyncio_244)(FILE* f, NimStringDesc** line) {
	NIM_BOOL result;
	NI pos;
	NI sp;
{	result = (NIM_BOOL)0;
	pos = ((NI) 0);
	sp = ((((*line) ? (*line)->Sup.len : 0) >= ((NI) 80)) ? ((*line) ? (*line)->Sup.len : 0) : ((NI) 80));
	unsureAsgnRef((void**) (&(*line)), setLengthStr((*line), ((NI) (sp))));
	{
		while (1) {
			NIM_BOOL fgetsSuccess;
			void* m;
			{
				NI i;
				NI i_2;
				i = (NI)0;
				i_2 = ((NI) 0);
				{
					while (1) {
						if (!(i_2 < sp)) goto LA5;
						i = i_2;
						(*line)->data[(NI)(pos + i)] = 10;
						i_2 += ((NI) 1);
					} LA5: ;
				}
			}
			fgetsSuccess = (NIM_BOOL)0;
			{
				while (1) {
					{
						NCSTRING T9_;
						NIM_BOOL T10_;
						T9_ = (NCSTRING)0;
						T9_ = fgets(((NCSTRING) ((&(*line)->data[pos]))), ((int) (sp)), f);
						T10_ = (NIM_BOOL)0;
						T10_ = eqeq___system_8667(T9_, ((NCSTRING) NIM_NIL));
						fgetsSuccess = !(T10_);
						{
							if (!fgetsSuccess) goto LA13_;
							goto LA6;
						}
						LA13_: ;
						{
							if (!(errno == EINTR)) goto LA17_;
							errno = ((int) 0);
							clearerr(f);
							goto LA8;
						}
						LA17_: ;
						checkErr__stdZsyncio_146(f);
						goto LA6;
					} LA8: ;
				}
			} LA6: ;
			m = memchr(((void*) ((&(*line)->data[pos]))), ((int) 10), ((size_t) (sp)));
			{
				NI last;
				NIM_BOOL T42_;
				if (!!((m == NIM_NIL))) goto LA21_;
				last = (NI)(((NI) (ptrdiff_t) (m)) - ((NI) (ptrdiff_t) ((&(*line)->data[((NI) 0)]))));
				{
					NIM_BOOL T25_;
					NIM_BOOL T29_;
					T25_ = (NIM_BOOL)0;
					T25_ = (((NI) 0) < last);
					if (!(T25_)) goto LA26_;
					T25_ = ((NU8)((*line)->data[(NI)(last - ((NI) 1))]) == (NU8)(13));
					LA26_: ;
					if (!T25_) goto LA27_;
					unsureAsgnRef((void**) (&(*line)), setLengthStr((*line), ((NI) ((NI)(last - ((NI) 1))))));
					T29_ = (NIM_BOOL)0;
					T29_ = (((NI) 1) < last);
					if (T29_) goto LA30_;
					T29_ = fgetsSuccess;
					LA30_: ;
					result = T29_;
					goto BeforeRet_;
				}
				goto LA23_;
				LA27_: ;
				{
					NIM_BOOL T32_;
					T32_ = (NIM_BOOL)0;
					T32_ = (((NI) 0) < last);
					if (!(T32_)) goto LA33_;
					T32_ = ((NU8)((*line)->data[(NI)(last - ((NI) 1))]) == (NU8)(0));
					LA33_: ;
					if (!T32_) goto LA34_;
					{
						NIM_BOOL T38_;
						T38_ = (NIM_BOOL)0;
						T38_ = (last < (NI)((NI)(pos + sp) - ((NI) 1)));
						if (!(T38_)) goto LA39_;
						T38_ = !(((NU8)((*line)->data[(NI)(last + ((NI) 1))]) == (NU8)(0)));
						LA39_: ;
						if (!T38_) goto LA40_;
						last -= ((NI) 1);
					}
					LA40_: ;
				}
				goto LA23_;
				LA34_: ;
				LA23_: ;
				unsureAsgnRef((void**) (&(*line)), setLengthStr((*line), ((NI) (last))));
				T42_ = (NIM_BOOL)0;
				T42_ = (((NI) 0) < last);
				if (T42_) goto LA43_;
				T42_ = fgetsSuccess;
				LA43_: ;
				result = T42_;
				goto BeforeRet_;
			}
			goto LA19_;
			LA21_: ;
			{
				sp -= ((NI) 1);
			}
			LA19_: ;
			pos += sp;
			sp = ((NI) 128);
			unsureAsgnRef((void**) (&(*line)), setLengthStr((*line), ((NI) ((NI)(pos + sp)))));
		}
	}
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI, writeBuffer__stdZsyncio_181)(FILE* f, void* buffer, NI len) {
	NI result;
	int T1_;
	result = (NI)0;
	T1_ = (int)0;
	T1_ = fwrite(buffer, ((size_t) 1), ((size_t) (len)), f);
	result = ((NI) (T1_));
	checkErr__stdZsyncio_146(f);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, flushFile__stdZsyncio_232)(FILE* f) {
	int T1_;
	T1_ = (int)0;
	T1_ = fflush(f);
	(void)(T1_);
}
N_LIB_PRIVATE N_NIMCALL(void, atmdotdotatsdotdotatsdotchoosenimatstoolchainsatsnimminusathheadatslibatsstdatssynciodotnim_DatInit000)(void) {
static TNimNode TM__xNF6mvRQ4Pd1hTNM9cEHXwQ_0[1];
NTIcfile__DaPpj2ht6oW1RkMrLZ1KuA_.size = sizeof(void*);
NTIcfile__DaPpj2ht6oW1RkMrLZ1KuA_.align = NIM_ALIGNOF(void*);
NTIcfile__DaPpj2ht6oW1RkMrLZ1KuA_.kind = 18;
NTIcfile__DaPpj2ht6oW1RkMrLZ1KuA_.base = 0;
NTIcfile__DaPpj2ht6oW1RkMrLZ1KuA_.flags = 1;
NTIcfile__DaPpj2ht6oW1RkMrLZ1KuA_.node = &TM__xNF6mvRQ4Pd1hTNM9cEHXwQ_0[0];
NTIfile__vcnEuXL9aeCG9anmsJ7aG9bKA_.size = sizeof(FILE*);
NTIfile__vcnEuXL9aeCG9anmsJ7aG9bKA_.align = NIM_ALIGNOF(FILE*);
NTIfile__vcnEuXL9aeCG9anmsJ7aG9bKA_.kind = 21;
NTIfile__vcnEuXL9aeCG9anmsJ7aG9bKA_.base = (&NTIcfile__DaPpj2ht6oW1RkMrLZ1KuA_);
NTIfile__vcnEuXL9aeCG9anmsJ7aG9bKA_.flags = 3;
}
