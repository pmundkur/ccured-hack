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
struct str {
   int a ;
   int b ;
};
extern void __ccuredInit(void) ;
extern  __attribute__((__noreturn__)) void abort_deepcopy(char *errmsg ) ;
int getaddr(struct str *s ) ;
int getaddr(struct str *s ) 
{ int *x ;
  int __retres ;

  {
  x = (int *)0;
  CHECK_NULL((void *)s);
  x = (int *)(& s->b);
  CHECK_NULL((void *)x);
  __retres = *x;
  return (__retres);
}
}
