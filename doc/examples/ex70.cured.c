/* Generated by CIL v. 1.3.5 */
/* print_CIL_Input is false */

#define CCURED_SPLIT_ARGUMENTS
// #define CCURED_ALLOW_PARTIAL_ELEMENTS_IN_SEQUENCE
// #define CCURED_LOG_NON_POINTERS
#define CCURED_USE_STRINGS
// #define CCURED_FAIL_IS_TERSE
// #define CCURED_ALWAYS_STOP_ON_ERROR
// Include the definition of the checkers
#define CCURED
#define CCURED_POST
#include "ccuredcheck.h"
static struct RTTI_ELEMENT ( __attribute__((__unused__)) RTTI_ARRAY)[4]  = {      {0, "scalar", 0}, 
        {1, "void", -1}, 
        {2, "Sfoo", -1}, 
        {3, "AutoRTTI:TSBase(int )", -2}};
struct printf_arguments {
   int i ;
   double d ;
   char * __ROSTRING  s ;
   long long ll ;
};
struct foo {
   int *f1 ;
};
typedef struct foo Foo;
union ptrs {
   void *v ;
   Foo *f ;
   int *i ;
} __TAGGED  ;
struct tagged_ptrs {
   struct RTTI_ELEMENT *__tag ;
   union ptrs __data ;
} __TAGGED  ;
extern void __ccuredInit(void) ;
extern  __attribute__((__noreturn__)) void abort_deepcopy(char *errmsg ) ;
struct meta_rtti_void {
   struct RTTI_ELEMENT *_t ;
}   ;
int main(void) ;
int main(void) 
{ struct tagged_ptrs u1 ;
  struct tagged_ptrs u2 ;
  Foo f ;
  void * __RTTI  rtti_ptr ;
  Foo *pf ;
  int *pi ;
  int __retres ;
  void * __RTTI  __cil_tmp8 ;
  struct RTTI_ELEMENT *__cil_tmp9 ;
  struct RTTI_ELEMENT *__cil_tmp12 ;
  void * __RTTI  __cil_tmp14 ;
  struct RTTI_ELEMENT *rtti_ptr_t18 ;
  struct RTTI_ELEMENT *__cil_tmp8_t19 ;
  struct RTTI_ELEMENT *__cil_tmp14_t20 ;

  {
  pi = (int *)0;
  pf = (Foo *)0;
  rtti_ptr_t18 = (struct RTTI_ELEMENT *)0;
  rtti_ptr = (void */* __RTTI  */)0;
  f.f1 = (int *)0;
  u2.__data.v = (void *)0;
  u2.__tag = (struct RTTI_ELEMENT *)0;
  u1.__data.v = (void *)0;
  u1.__tag = (struct RTTI_ELEMENT *)0;
  __ccuredAlwaysStopOnError = 0;
  __ccuredUseStrings = 1;
  __ccuredLogNonPointers = 0;
  __ccuredInit();
  __cil_tmp8 = (void */* __RTTI  */)((void *)((void */* __RTTI  */)((void *)(& f))));
  __cil_tmp8_t19 = & RTTI_ARRAY[2];
  rtti_ptr_t18 = __cil_tmp8_t19;
  rtti_ptr = __cil_tmp8;
  __cil_tmp9 = rtti_ptr_t18;
  u1.__tag = (struct RTTI_ELEMENT *)__cil_tmp9;
  u1.__data.v = (void *)((void */* __RTTI  */)((void *)rtti_ptr));
  if ((unsigned int )u1.__data.f) {
    CHECK_RTTIUNIONTAG(u1.__tag, & RTTI_ARRAY[2]);
  }
  pf = (Foo *)u1.__data.f;
  if ((unsigned int )u1.__data.i) {
    CHECK_RTTIUNIONTAG(u1.__tag, & RTTI_ARRAY[3]);
  }
  pi = (int *)u1.__data.i;
  __cil_tmp12 = & RTTI_ARRAY[2];
  u2.__tag = (struct RTTI_ELEMENT *)__cil_tmp12;
  u2.__data.f = (Foo *)(& f);
  if ((unsigned int )u2.__data.v) {
    CHECK_RTTIUNIONTAG(u2.__tag, & RTTI_ARRAY[1]);
  }
  __cil_tmp14 = (void */* __RTTI  */)((void *)((void */* __RTTI  */)((void *)u2.__data.v)));
  __cil_tmp14_t20 = u2.__tag;
  rtti_ptr_t18 = __cil_tmp14_t20;
  rtti_ptr = __cil_tmp14;
  if ((unsigned int )rtti_ptr) {
    CHECK_RTTICAST(rtti_ptr_t18, & RTTI_ARRAY[2]);
  }
  pf = (Foo *)((Foo *)rtti_ptr);
  __retres = 0;
  return (__retres);
}
}
