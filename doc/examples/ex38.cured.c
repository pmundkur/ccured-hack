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
struct printf_arguments {
   int i ;
   double d ;
   char * __ROSTRING  s ;
   long long ll ;
};
struct foo {
   int f1 ;
};
struct meta_wildp_int {
   void *_b ;
}   ;
struct wildp_int {
   int * __WILD  _p ;
   struct meta_wildp_int _ms ;
}   ;
typedef struct wildp_int wildp_int;
struct bar {
   wildp_int f1 ;
   int f2 ;
};
extern void __ccuredInit(void) ;
extern  __attribute__((__noreturn__)) void abort_deepcopy(char *errmsg ) ;
struct _tagged_s_foo {
   unsigned int _len ;
   struct foo _data  __attribute__((__packed__)) ;
   int _tags[(sizeof(struct foo ) + 127U) >> 7]  __attribute__((__packed__)) ;
};
typedef struct _tagged_s_foo _tagged_s_foo;
_tagged_s_foo gfoo_t  __TAGGED   =    {(sizeof(struct foo ) + 3U) >> 2};
struct _tagged_s_bar {
   unsigned int _len ;
   struct bar _data  __attribute__((__packed__)) ;
   int _tags[(sizeof(struct bar ) + 127U) >> 7]  __attribute__((__packed__)) ;
};
typedef struct _tagged_s_bar _tagged_s_bar;
_tagged_s_bar gbar_t  __TAGGED   =    {(sizeof(struct bar ) + 3U) >> 2};
struct meta_wildp_void {
   void *_b ;
}   ;
struct wildp_void {
   void * __WILD  _p ;
   struct meta_wildp_void _ms ;
}   ;
typedef struct wildp_void wildp_void;
wildp_void g_w  ;
int main(void) ;
int main(void) 
{ int volatile   ___first_local ;
  int acc ;
  int __retres ;
  void * __WILD  __cil_tmp3 ;
  unsigned int _tlen5 ;
  void * __WILD  __cil_tmp6 ;
  unsigned int _tlen7 ;
  void *__cil_tmp3_b10 ;
  void *__cil_tmp6_b11 ;

  {
  __ccuredAlwaysStopOnError = 0;
  __ccuredUseStrings = 1;
  __ccuredLogNonPointers = 0;
  __ccuredInit();
  acc = 0;
  __cil_tmp3 = (void */* __WILD  */)(& gfoo_t._data);
  __cil_tmp3_b10 = & gfoo_t._data;
  CHECK_STOREPTR((void *)(& g_w), __cil_tmp3_b10, (void *)(& ___first_local));
  g_w._ms._b = __cil_tmp3_b10;
  g_w._p = __cil_tmp3;
  _tlen5 = CHECK_FETCHLENGTH((void *)(& ((struct foo */* __WILD  */)g_w._p)->f1),
                             g_w._ms._b, 0);
  CHECK_BOUNDS_LEN(g_w._ms._b, _tlen5, (void *)(& ((struct foo */* __WILD  */)g_w._p)->f1),
                   sizeof(int ), sizeof(int ));
  acc += ((struct foo */* __WILD  */)g_w._p)->f1;
  __cil_tmp6 = (void */* __WILD  */)(& gbar_t._data);
  __cil_tmp6_b11 = & gbar_t._data;
  CHECK_STOREPTR((void *)(& g_w), __cil_tmp6_b11, (void *)(& ___first_local));
  g_w._ms._b = __cil_tmp6_b11;
  g_w._p = __cil_tmp6;
  _tlen7 = CHECK_FETCHLENGTH((void *)(& ((struct bar */* __WILD  */)g_w._p)->f2),
                             g_w._ms._b, 0);
  CHECK_BOUNDS_LEN(g_w._ms._b, _tlen7, (void *)(& ((struct bar */* __WILD  */)g_w._p)->f2),
                   sizeof(int ), sizeof(int ));
  acc += ((struct bar */* __WILD  */)g_w._p)->f2;
  __retres = acc;
  return (__retres);
}
}
