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
extern unsigned int ___stack_threshhold  ;
extern void ___stack_overflow(void) ;
struct printf_arguments {
   int i ;
   double d ;
   char * __ROSTRING  s ;
   long long ll ;
};
typedef int boxedint;
extern void __ccuredInit(void) ;
extern  __attribute__((__noreturn__)) void abort_deepcopy(char *errmsg ) ;
int unroll(boxedint x ) ;
int unroll(boxedint x ) 
{ void *tmp ;
  int tmp___0 ;
  int __a_local ;
  int __retres ;
  void *__cil_tmp6 ;
  int __cil_tmp7 ;

  {
  tmp = (void *)0;

  if ((unsigned int )(& __a_local) <= ___stack_threshhold) {
    ___stack_overflow();
  }
  {

  if (x & 1) {
    __retres = x;
    goto return_label;
  }
  __cil_tmp6 = (unsigned int )((void *)x);
  tmp = (void *)__cil_tmp6;
  CHECK_NULL((void *)((int *)tmp));
  __cil_tmp7 = unroll(*((int *)tmp));
  tmp___0 = __cil_tmp7;
  __retres = tmp___0;
  goto return_label;
  }
  return_label: /* CIL Label */ ;
  return (__retres);
}
}
