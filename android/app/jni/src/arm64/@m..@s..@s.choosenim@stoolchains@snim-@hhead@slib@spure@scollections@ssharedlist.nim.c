/* Generated by Nim Compiler v1.7.1 */
#define NIM_INTBITS 64
#define NIM_EmulateOverflowChecks

#include "nimbase.h"
#include <pthread.h>
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
typedef struct tyObject_SharedList__JI9cx34TL8n3aOKF6tSMBUw tyObject_SharedList__JI9cx34TL8n3aOKF6tSMBUw;
typedef struct tyObject_SharedListNodecolonObjectType___KGw0YAw6W9aSz3Sr9aXGu7zg tyObject_SharedListNodecolonObjectType___KGw0YAw6W9aSz3Sr9aXGu7zg;
struct tyObject_SharedList__JI9cx34TL8n3aOKF6tSMBUw {
tyObject_SharedListNodecolonObjectType___KGw0YAw6W9aSz3Sr9aXGu7zg* head;
tyObject_SharedListNodecolonObjectType___KGw0YAw6W9aSz3Sr9aXGu7zg* tail;
pthread_mutex_t lock;
};
typedef void* tyArray__Rrw59cMvNu8cDA9cQDh4v2oA[100];
struct tyObject_SharedListNodecolonObjectType___KGw0YAw6W9aSz3Sr9aXGu7zg {
tyObject_SharedListNodecolonObjectType___KGw0YAw6W9aSz3Sr9aXGu7zg* next;
NI dataLen;
tyArray__Rrw59cMvNu8cDA9cQDh4v2oA d;
};
static N_INLINE(void, initLock__coreZlocks_60)(pthread_mutex_t* lock);
static N_INLINE(void, initLock__coreZlocks_60)(pthread_mutex_t* lock) {
	pthread_mutex_init(lock, ((pthread_mutexattr_t*) NIM_NIL));
}
N_LIB_PRIVATE N_NIMCALL(void, init__system_6163)(tyObject_SharedList__JI9cx34TL8n3aOKF6tSMBUw* t) {
	initLock__coreZlocks_60((&(*t).lock));
	(*t).head = ((tyObject_SharedListNodecolonObjectType___KGw0YAw6W9aSz3Sr9aXGu7zg*) NIM_NIL);
	(*t).tail = ((tyObject_SharedListNodecolonObjectType___KGw0YAw6W9aSz3Sr9aXGu7zg*) NIM_NIL);
}
