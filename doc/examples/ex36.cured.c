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
struct /*1*/list {
   void *car ;
   struct /*1*/list *cdr ;
};
struct meta_wildp_void {
   void *_b ;
}   ;
struct wildp_void {
   void * __WILD  _p ;
   struct meta_wildp_void _ms ;
}   ;
typedef struct wildp_void wildp_void;
struct /*2*/list_ws {
   wildp_void car ;
   struct /*1*/list *cdr ;
};
int /*4*/length(struct /*1*/list *l ) ;
int main(void) ;
int main(void) 
{ struct /*1*/list list_of_int ;
  struct /*2*/list_ws list_of_wild_ptr ;
  struct /*1*/list wild_list ;
  int l1 ;
  int tmp ;
  int l2 ;
  int tmp___0 ;
  int l3 ;
  int tmp___1 ;
  int __retres ;
  void * __WILD  __cil_tmp11 ;
  int __cil_tmp12 ;
  int __cil_tmp13 ;
  int __cil_tmp14 ;
  void *__cil_tmp11_b16 ;

  {
  wild_list.cdr = (struct /*1*/list *)0;
  wild_list.car = (void *)0;
  list_of_wild_ptr.cdr = (struct /*1*/list *)0;
  list_of_wild_ptr.car._ms._b = (void *)0;
  list_of_int.cdr = (struct /*1*/list *)0;
  list_of_int.car = (void *)0;
  __ccuredAlwaysStopOnError = 0;
  __ccuredUseStrings = 1;
  __ccuredLogNonPointers = 0;
  __ccuredInit();
  list_of_int.car = (void *)((void *)5);
  list_of_int.cdr = (struct /*1*/list *)0;
  __cil_tmp11 = (void */* __WILD  */)((int */* __WILD  */)5);
  __cil_tmp11_b16 = (void *)0;
  list_of_wild_ptr.car._ms._b = __cil_tmp11_b16;
  list_of_wild_ptr.car._p = __cil_tmp11;
  list_of_wild_ptr.cdr = (struct /*1*/list *)0;
  wild_list.car = (void *)((void *)5);
  wild_list.cdr = (struct /*1*/list *)0;
  __cil_tmp12 = /*4*/length((struct /*1*/list *)(& list_of_int));
  tmp = __cil_tmp12;
  l1 = tmp;
  __cil_tmp13 = /*4*/length((struct /*1*/list *)(& list_of_wild_ptr));
  tmp___0 = __cil_tmp13;
  l2 = tmp___0;
  __cil_tmp14 = /*4*/length((struct /*1*/list *)(& wild_list));
  tmp___1 = __cil_tmp14;
  l3 = tmp___1;
  __retres = 0;
  return (__retres);
}
}
int /*4*/length(struct /*1*/list *l ) ;
int /*4*/length(struct /*1*/list *l ) 
{ int i ;
  int __retres ;

  {
  i = 0;
  while ((int )l) {
    i ++;
    CHECK_NULL((void *)l);
    l = (struct /*1*/list *)l->cdr;
  }
  __retres = 0;
  return (__retres);
}
}
