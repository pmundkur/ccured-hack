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
struct meta_wildp_void {
   void *_b ;
}   ;
struct wildp_void {
   void * __WILD  _p ;
   struct meta_wildp_void _ms ;
}   ;
struct wildp_void identity_ww(void * __WILD  x , void *x_b ) ;
struct wildp_void identity_ww(void * __WILD  x , void *x_b ) 
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
struct meta_wildp_p_int {
   void *_b ;
}   ;
struct meta_wildp_int___0 {
   void *_b ;
}   ;
int main(void) ;
int main(void) 
{ int volatile   ___first_local ;
  _tagged_wildp_int p  __TAGGED  ;
  struct wildp_int * __WILD  res_pp ;
  struct wildp_int * __WILD  tmp ;
  int * __WILD  res_p ;
  int * __WILD  tmp___0 ;
  int __retres ;
  unsigned int iter7 ;
  int * __WILD  __cil_tmp8 ;
  unsigned int _tlen9 ;
  void * __WILD  __cil_tmp11 ;
  struct wildp_void __cil_tmp12 ;
  struct wildp_int * __WILD  __cil_tmp13 ;
  struct wildp_int * __WILD  __cil_tmp14 ;
  unsigned int _tlen15 ;
  void * __WILD  __cil_tmp16 ;
  struct wildp_void __cil_tmp17 ;
  int * __WILD  __cil_tmp18 ;
  int * __WILD  __cil_tmp19 ;
  void *res_pp_b31 ;
  void *tmp_b32 ;
  void *res_p_b33 ;
  void *tmp___0_b34 ;
  void *__cil_tmp8_b35 ;
  void *__cil_tmp11_b36 ;
  void *__cil_tmp13_b37 ;
  void *__cil_tmp14_b38 ;
  void *__cil_tmp16_b39 ;
  void *__cil_tmp18_b40 ;
  void *__cil_tmp19_b41 ;

  {
  tmp___0_b34 = (void *)0;
  res_p_b33 = (void *)0;
  tmp_b32 = (void *)0;
  res_pp_b31 = (void *)0;
  p._len = (sizeof(wildp_int ) + 3U) >> 2;
  iter7 = 0;
  while (iter7 < (int )((sizeof(wildp_int ) + 127U) >> 7)) {
    p._tags[iter7] = 0;
    iter7 ++;
  }
  __ccuredAlwaysStopOnError = 0;
  __ccuredUseStrings = 1;
  __ccuredLogNonPointers = 0;
  __ccuredInit();
  __cil_tmp8 = (int */* __WILD  */)0;
  __cil_tmp8_b35 = (void *)0;
  _tlen9 = CHECK_FETCHLENGTH((void *)(& p._data), (void *)(& p._data), 0);
  CHECK_BOUNDS_LEN((void *)(& p._data), _tlen9, (void *)(& p._data), sizeof(wildp_int ),
                   sizeof(wildp_int ));
  CHECK_WILDPOINTERWRITE((void *)(& p._data), _tlen9, (void *)(& p._data), __cil_tmp8_b35,
                         (void *)__cil_tmp8, (void *)(& ___first_local));
  p._data._ms._b = __cil_tmp8_b35;
  p._data._p = __cil_tmp8;
  __cil_tmp11 = (void */* __WILD  */)(& p._data);
  __cil_tmp11_b36 = & p._data;
  __cil_tmp12 = identity_ww(__cil_tmp11, __cil_tmp11_b36);
  __cil_tmp13 = (struct wildp_int */* __WILD  */)__cil_tmp12._p;
  __cil_tmp13_b37 = __cil_tmp12._ms._b;
  tmp_b32 = __cil_tmp13_b37;
  tmp = __cil_tmp13;
  __cil_tmp14 = tmp;
  __cil_tmp14_b38 = tmp_b32;
  res_pp_b31 = __cil_tmp14_b38;
  res_pp = __cil_tmp14;
  _tlen15 = CHECK_FETCHLENGTH((void *)(& p._data), (void *)(& p._data), 0);
  CHECK_BOUNDS_LEN((void *)(& p._data), _tlen15, (void *)(& p._data), sizeof(wildp_int ),
                   sizeof(wildp_int ));
  CHECK_WILDPOINTERREAD((void *)(& p._data), _tlen15, (void *)(& p._data));
  __cil_tmp16 = (void */* __WILD  */)((void */* __WILD  */)p._data._p);
  __cil_tmp16_b39 = p._data._ms._b;
  __cil_tmp17 = identity_ww(__cil_tmp16, __cil_tmp16_b39);
  __cil_tmp18 = (int */* __WILD  */)__cil_tmp17._p;
  __cil_tmp18_b40 = __cil_tmp17._ms._b;
  tmp___0_b34 = __cil_tmp18_b40;
  tmp___0 = __cil_tmp18;
  __cil_tmp19 = tmp___0;
  __cil_tmp19_b41 = tmp___0_b34;
  res_p_b33 = __cil_tmp19_b41;
  res_p = __cil_tmp19;
  __retres = 0;
  return (__retres);
}
}
