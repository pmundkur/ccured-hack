/* Generated by CIL v. 1.3.5 */
/* print_CIL_Input is false */

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
extern void __ccuredInit(void) ;
extern  __attribute__((__noreturn__)) void abort_deepcopy(char *errmsg ) ;
struct meta_wildp_int {
   void *_b ;
}   ;
struct wildp_int {
   int * __WILD  _p ;
   struct meta_wildp_int _ms ;
}   ;
typedef struct wildp_int wildp_int;
struct _tagged_wildp_int {
   unsigned int _len ;
   wildp_int _data  __attribute__((__packed__)) ;
   int _tags[(sizeof(wildp_int ) + 127U) >> 7]  __attribute__((__packed__)) ;
};
typedef struct _tagged_wildp_int _tagged_wildp_int;
struct meta_wildp_int___0 {
   void *_b ;
}   ;
struct wildp_int___0 {
   int * __WILD  _p ;
   struct meta_wildp_int___0 _ms ;
}   ;
typedef struct wildp_int___0 wildp_int___0;
void foo(void) ;
void foo(void) 
{ int volatile   ___first_local ;
  _tagged_wildp_int h  __TAGGED  ;
  wildp_int___0 p ;
  unsigned int iter3 ;
  wildp_int __cil_tmp4 ;
  unsigned int _tlen5 ;
  wildp_int___0 __cil_tmp7 ;

  {
  p._ms._b = (void *)0;
  h._len = (sizeof(wildp_int ) + 3U) >> 2;
  iter3 = 0;
  while (iter3 < (int )((sizeof(wildp_int ) + 127U) >> 7)) {
    h._tags[iter3] = 0;
    iter3 ++;
  }
  __cil_tmp4._p = (int */* __WILD  */)0;
  __cil_tmp4._ms._b = (void *)0;
  _tlen5 = CHECK_FETCHLENGTH((void *)(& h._data), (void *)(& h._data), 0);
  CHECK_BOUNDS_LEN((void *)(& h._data), _tlen5, (void *)(& h._data), sizeof(wildp_int ),
                   sizeof(wildp_int ));
  CHECK_WILDPOINTERWRITE((void *)(& h._data), _tlen5, (void *)(& h._data), __cil_tmp4._ms._b,
                         (void *)__cil_tmp4._p, (void *)(& ___first_local));
  h._data = __cil_tmp4;
  __cil_tmp7._p = (int */* __WILD  */)(& h._data);
  __cil_tmp7._ms._b = & h._data;
  p = __cil_tmp7;
  return;
}
}
