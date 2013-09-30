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
struct msghdr;
struct iovec;
struct meta_fseqp_s_iovec {
   void *_e ;
}   ;
struct fseqp_s_iovec {
   struct iovec * __FSEQ  _p ;
   struct meta_fseqp_s_iovec _ms ;
}   ;
typedef struct fseqp_s_iovec fseqp_s_iovec;
struct msghdr {
   void *msg_name ;
   int msg_namelen ;
   fseqp_s_iovec msg_iov ;
   int msg_iovlen ;
   void *msg_control ;
   int msg_controllen ;
   int msg_flags ;
};
struct iovec {
   char *iov_base ;
   int iov_len ;
};
extern void __ccuredInit(void) ;
extern  __attribute__((__noreturn__)) void abort_deepcopy(char *errmsg ) ;
struct msghdr_COMPAT;
struct iovec_COMPAT;
struct msghdr_COMPAT {
   void *msg_name ;
   int msg_namelen ;
   struct iovec_COMPAT *msg_iov ;
   int msg_iovlen ;
   void *msg_control ;
   int msg_controllen ;
   int msg_flags ;
};
extern int sendmsg(int fd , struct msghdr_COMPAT *msg , int flags ) ;
__inline static int /*1*/sendmsg_wrapper4(int fd , struct msghdr *msg , int flags ) ;
int foo_f(int fd , struct iovec * __FSEQ  array , void *array_e , int array_len ) ;
int foo_f(int fd , struct iovec * __FSEQ  array , void *array_e , int array_len ) 
{ struct msghdr msg ;
  struct iovec *foo___0 ;
  int tmp ;
  int __retres ;
  struct iovec * __FSEQ  __cil_tmp8 ;
  int __cil_tmp9 ;
  void *__cil_tmp8_e13 ;

  {
  foo___0 = (struct iovec *)0;
  msg.msg_control = (void *)0;
  msg.msg_iov._ms._e = (void *)0;
  msg.msg_iov._p = (struct iovec */* __FSEQ  */)0;
  msg.msg_name = (void *)0;
  msg.msg_name = (void *)0;
  msg.msg_namelen = 0;
  __cil_tmp8 = array;
  __cil_tmp8_e13 = array_e;
  msg.msg_iov._ms._e = __cil_tmp8_e13;
  msg.msg_iov._p = __cil_tmp8;
  msg.msg_iovlen = array_len;
  msg.msg_control = (void *)0;
  msg.msg_controllen = 0;
  msg.msg_flags = 0;
  CHECK_FSEQARITH((void *)msg.msg_iov._p, sizeof(struct iovec ), (void *)(msg.msg_iov._p + 1),
                  msg.msg_iov._ms._e, 0);
  CHECK_FSEQ2SAFE(msg.msg_iov._ms._e, (void *)(msg.msg_iov._p + 1), sizeof(struct iovec ),
                  sizeof(struct iovec ), 0, 0);
  foo___0 = (struct iovec *)(msg.msg_iov._p + 1);
  __cil_tmp9 = /*1*/sendmsg_wrapper4(fd, (struct msghdr *)(& msg), 0);
  tmp = __cil_tmp9;
  __retres = tmp;
  return (__retres);
}
}
extern void *malloc(int  ) ;
extern void free(void * ) ;
struct iovec_COMPAT {
   char *iov_base ;
   int iov_len ;
};
__inline static void __deepcopy_msghdr_to_compat(struct msghdr_COMPAT *compat , struct msghdr *fat ) ;
__inline static void __deepcopy_iovec_to_compat(struct iovec_COMPAT *compat , struct iovec *fat ) ;
__inline static void __deepcopy_iovec_to_compat(struct iovec_COMPAT *compat , struct iovec *fat ) 
{ void *__cil_tmp3 ;

  {
  CHECK_NULL((void *)compat);
  CHECK_NULL((void *)fat);
  compat->iov_len = fat->iov_len;
  __cil_tmp3 = (void *)((void *)fat->iov_base);
  compat->iov_base = (char *)__cil_tmp3;
  return;
}
}
static char __string1[45]  = 
  {      'A',      'b',      'o',      'r', 
        't',      ' ',      'd',      'e', 
        'e',      'p',      'c',      'o', 
        'p',      'y',      '_',      't', 
        'o',      '_',      'c',      'o', 
        'm',      'p',      'a',      't', 
        ' ',      'f',      'o',      'r', 
        ' ',      'm',      's',      'g', 
        'h',      'd',      'r',      '.', 
        'm',      's',      'g',      '_', 
        'n',      'a',      'm',      'e', 
        '\000'};
static char __string2[48]  = 
  {      'A',      'b',      'o',      'r', 
        't',      ' ',      'd',      'e', 
        'e',      'p',      'c',      'o', 
        'p',      'y',      '_',      't', 
        'o',      '_',      'c',      'o', 
        'm',      'p',      'a',      't', 
        ' ',      'f',      'o',      'r', 
        ' ',      'm',      's',      'g', 
        'h',      'd',      'r',      '.', 
        'm',      's',      'g',      '_', 
        'c',      'o',      'n',      't', 
        'r',      'o',      'l',      '\000'};
__inline static void __deepcopy_msghdr_to_compat(struct msghdr_COMPAT *compat , struct msghdr *fat ) ;
__inline static void __deepcopy_msghdr_to_compat(struct msghdr_COMPAT *compat , struct msghdr *fat ) 
{ int len ;
  int v ;
  struct iovec_COMPAT *iptr ;
  struct iovec_COMPAT *tmp ;
  int tmp___0 ;
  void *__cil_tmp8 ;
  int dest_mangling9 ;
  void *__cil_tmp10 ;
  int dest_mangling11 ;
  void *__cil_tmp12 ;
  void *__cil_tmp13 ;
  void *__cil_tmp14 ;
  void *__cil_tmp15 ;
  void *__cil_tmp16 ;
  void *__cil_tmp17 ;
  void *__cil_tmp18 ;

  {
  __cil_tmp10 = (void *)0;
  __cil_tmp8 = (void *)0;
  tmp = (struct iovec_COMPAT *)0;
  iptr = (struct iovec_COMPAT *)0;
  CHECK_NULL((void *)fat);
  __cil_tmp12 = (void *)fat->msg_name;
  __cil_tmp10 = (void *)__cil_tmp12;
  if ((int )(! __cil_tmp10)) {
    {
    CHECK_NULL((void *)compat);
    compat->msg_name = (void *)0;
    }
  } else {
    {
    dest_mangling11 = 1;
    if (dest_mangling11) {
      {
      __cil_tmp13 = (void *)__cil_tmp10;
      CHECK_NULL((void *)compat);
      compat->msg_name = (void *)__cil_tmp13;
      }
    } else {
      {
      abort_deepcopy((char *)(& __string1[0]));
      }
    }
    }
  }
  CHECK_NULL((void *)compat);
  CHECK_NULL((void *)fat);
  compat->msg_namelen = fat->msg_namelen;
  compat->msg_iovlen = fat->msg_iovlen;
  __cil_tmp14 = (void *)fat->msg_control;
  __cil_tmp8 = (void *)__cil_tmp14;
  if ((int )(! __cil_tmp8)) {
    {
    CHECK_NULL((void *)compat);
    compat->msg_control = (void *)0;
    }
  } else {
    {
    dest_mangling9 = 1;
    if (dest_mangling9) {
      {
      __cil_tmp15 = (void *)__cil_tmp8;
      CHECK_NULL((void *)compat);
      compat->msg_control = (void *)__cil_tmp15;
      }
    } else {
      {
      abort_deepcopy((char *)(& __string2[0]));
      }
    }
    }
  }
  CHECK_NULL((void *)compat);
  CHECK_NULL((void *)fat);
  compat->msg_controllen = fat->msg_controllen;
  compat->msg_flags = fat->msg_flags;
  tmp___0 = 1;
  if (tmp___0) {
    CHECK_NULL((void *)fat);
    if ((void */* __FSEQ  */)fat->msg_iov._p) {
      CHECK_FSEQ2SAFE(fat->msg_iov._ms._e, (void *)((void */* __FSEQ  */)fat->msg_iov._p),
                      sizeof(void ), sizeof(void ), 1, 0);
    }
    __cil_tmp18 = (void */* __FSEQ  */)fat->msg_iov._p;
    CHECK_NULL((void *)compat);
    compat->msg_iov = (struct iovec_COMPAT *)__cil_tmp18;
  } else {
    CHECK_NULL((void *)fat);
    len = fat->msg_iovlen;
    __cil_tmp16 = malloc((int )((unsigned int )len * sizeof(*(compat->msg_iov))));
    CHECK_NULL((void *)compat);
    compat->msg_iov = (struct iovec_COMPAT *)__cil_tmp16;
    v = 0;
    while (v < len) {
      CHECK_NULL((void *)compat);
      __cil_tmp17 = (void *)((void *)((unsigned long )compat->msg_iov + (unsigned long )((unsigned int )v * sizeof(*(compat->msg_iov)))));
      tmp = (struct iovec_COMPAT *)__cil_tmp17;
      iptr = (struct iovec_COMPAT *)tmp;
      CHECK_NULL((void *)fat);
      CHECK_FSEQARITH((void *)fat->msg_iov._p, sizeof(struct iovec ), (void *)(fat->msg_iov._p + v),
                      fat->msg_iov._ms._e, 0);
      CHECK_FSEQ2SAFE(fat->msg_iov._ms._e, (void *)(fat->msg_iov._p + v), sizeof(struct iovec ),
                      sizeof(struct iovec ), 0, 0);
      __deepcopy_iovec_to_compat((struct iovec_COMPAT *)iptr, (struct iovec *)(fat->msg_iov._p + v));
      v ++;
    }
  }

  return;
}
}
__inline static int /*1*/sendmsg_wrapper4(int fd , struct msghdr *msg , int flags ) ;
__inline static int /*1*/sendmsg_wrapper4(int fd , struct msghdr *msg , int flags ) 
{ struct msghdr_COMPAT msg1__area ;
  struct msghdr *msg1__ptrof ;
  struct msghdr *tmp ;
  struct msghdr_COMPAT *msg1 ;
  struct msghdr_COMPAT *tmp___2 ;
  int tmp___4 ;
  int result ;
  int tmp___5 ;
  int __retres ;
  void *__cil_tmp16 ;
  void *__cil_tmp17 ;
  void *__cil_tmp18 ;
  int __cil_tmp19 ;

  {
  tmp___2 = (struct msghdr_COMPAT *)0;
  msg1 = (struct msghdr_COMPAT *)0;
  tmp = (struct msghdr *)0;
  msg1__ptrof = (struct msghdr *)0;
  msg1__area.msg_control = (void *)0;
  msg1__area.msg_iov = (struct iovec_COMPAT *)0;
  msg1__area.msg_name = (void *)0;
  __cil_tmp16 = (void *)((void *)msg);
  tmp = (struct msghdr *)__cil_tmp16;
  msg1__ptrof = (struct msghdr *)tmp;
  if ((int )msg1__ptrof) {
    tmp___4 = 0;
    if (tmp___4) {
      __cil_tmp18 = (void *)((void *)msg1__ptrof);
      tmp___2 = (struct msghdr_COMPAT *)__cil_tmp18;
    } else {
      __deepcopy_msghdr_to_compat((struct msghdr_COMPAT *)(& msg1__area), (struct msghdr *)msg1__ptrof);
      tmp___2 = (struct msghdr_COMPAT *)(& msg1__area);
    }
  } else {
    __cil_tmp17 = (void *)((void *)msg1__ptrof);
    tmp___2 = (struct msghdr_COMPAT *)__cil_tmp17;
  }
  msg1 = (struct msghdr_COMPAT *)tmp___2;
  __cil_tmp19 = sendmsg(fd, (struct msghdr_COMPAT *)msg1, flags);
  tmp___5 = __cil_tmp19;
  result = tmp___5;
  CHECK_NULL((void *)msg1);
  CHECK_NULL((void *)msg);
  if ((unsigned int )msg1->msg_iov != (unsigned int )msg->msg_iov._p) {
    free((void *)((void *)msg1->msg_iov));
  }
  __retres = result;
  return (__retres);
}
}
