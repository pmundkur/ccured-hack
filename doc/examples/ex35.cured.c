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
extern void __ccuredInit(void) ;
extern  __attribute__((__noreturn__)) void abort_deepcopy(char *errmsg ) ;
void */*1*/identity(void *x ) ;
struct meta_wildp_void {
   void *_b ;
}   ;
struct wildp_void {
   void * __WILD  _p ;
   struct meta_wildp_void _ms ;
}   ;
struct wildp_void /*2*/identity_ww(void * __WILD  x , void *x_b ) ;
struct meta_wildp_int {
   void *_b ;
}   ;
struct wildp_int {
   int * __WILD  _p ;
   struct meta_wildp_int _ms ;
}   ;
typedef struct wildp_int wildp_int;
int main(void) ;
int main(void) 
{ wildp_int p ;
  struct wildp_int *res_pp ;
  struct wildp_int *tmp ;
  int * __WILD  res_p ;
  int * __WILD  tmp___0 ;
  int __retres ;
  int * __WILD  __cil_tmp7 ;
  void *__cil_tmp8 ;
  void * __WILD  __cil_tmp9 ;
  struct wildp_void __cil_tmp10 ;
  int * __WILD  __cil_tmp11 ;
  int * __WILD  __cil_tmp12 ;
  void *res_p_b19 ;
  void *tmp___0_b20 ;
  void *__cil_tmp7_b21 ;
  void *__cil_tmp9_b22 ;
  void *__cil_tmp11_b23 ;
  void *__cil_tmp12_b24 ;

  {
  tmp___0_b20 = (void *)0;
  res_p_b19 = (void *)0;
  tmp = (struct wildp_int *)0;
  res_pp = (struct wildp_int *)0;
  p._ms._b = (void *)0;
  __ccuredAlwaysStopOnError = 0;
  __ccuredUseStrings = 1;
  __ccuredLogNonPointers = 0;
  __ccuredInit();
  __cil_tmp7 = (int */* __WILD  */)0;
  __cil_tmp7_b21 = (void *)0;
  p._ms._b = __cil_tmp7_b21;
  p._p = __cil_tmp7;
  __cil_tmp8 = /*1*/identity((void *)((void *)(& p)));
  tmp = (struct wildp_int *)__cil_tmp8;
  res_pp = (struct wildp_int *)tmp;
  __cil_tmp9 = (void */* __WILD  */)p._p;
  __cil_tmp9_b22 = p._ms._b;
  __cil_tmp10 = /*2*/identity_ww(__cil_tmp9, __cil_tmp9_b22);
  __cil_tmp11 = (int */* __WILD  */)__cil_tmp10._p;
  __cil_tmp11_b23 = __cil_tmp10._ms._b;
  tmp___0_b20 = __cil_tmp11_b23;
  tmp___0 = __cil_tmp11;
  __cil_tmp12 = tmp___0;
  __cil_tmp12_b24 = tmp___0_b20;
  res_p_b19 = __cil_tmp12_b24;
  res_p = __cil_tmp12;
  __retres = 0;
  return (__retres);
}
}
void */*1*/identity(void *x ) ;
void */*1*/identity(void *x ) 
{ void *__retres ;

  {
  __retres = (void *)0;
  __retres = (void *)x;
  return (__retres);
}
}
struct wildp_void /*2*/identity_ww(void * __WILD  x , void *x_b ) ;
struct wildp_void /*2*/identity_ww(void * __WILD  x , void *x_b ) 
{ void * __WILD  __retres ;
  void * __WILD  __cil_tmp3 ;
  struct wildp_void __cil_tmp4 ;
  void *__retres_b9 ;
  void *__cil_tmp3_b10 ;

  {
  __retres_b9 = (void *)0;
  __cil_tmp3 = x;
  __cil_tmp3_b10 = x_b;
  __retres_b9 = __cil_tmp3_b10;
  __retres = __cil_tmp3;
  __cil_tmp4._p = __retres;
  __cil_tmp4._ms._b = __retres_b9;
  return (__cil_tmp4);
}
}
