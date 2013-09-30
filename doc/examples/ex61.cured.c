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
extern int recvmsg(int fd , struct msghdr_COMPAT *msg , int flags ) ;
__inline static int /*1*/recvmsg_wrapper(int s , struct msghdr *fat_msg , int flags ) ;
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
  __cil_tmp9 = /*1*/recvmsg_wrapper(fd, (struct msghdr *)(& msg), 0);
  tmp = __cil_tmp9;
  __retres = tmp;
  return (__retres);
}
}
struct meta_fseqp_void {
   void *_e ;
}   ;
struct fseqp_void {
   void * __FSEQ  _p ;
   struct meta_fseqp_void _ms ;
}   ;
typedef struct fseqp_void fseqp_void;
extern fseqp_void malloc_f(int  ) ;
extern void free(void * ) ;
struct iovec_COMPAT {
   char *iov_base ;
   int iov_len ;
};
extern void __deepcopy_msghdr_to_compat_sscsfs_(struct msghdr_COMPAT *compat , struct msghdr *fat ) ;
__inline static void __deepcopy_msghdr_from_compat(struct msghdr *fat , struct msghdr_COMPAT *compat ) ;
__inline static void __deepcopy_iovec_from_compat(struct iovec *fat , struct iovec_COMPAT *compat ) ;
__inline static void __deepcopy_iovec_from_compat(struct iovec *fat , struct iovec_COMPAT *compat ) 
{ void *__cil_tmp3 ;

  {
  CHECK_NULL((void *)fat);
  CHECK_NULL((void *)compat);
  fat->iov_len = compat->iov_len;
  __cil_tmp3 = (void *)((void *)compat->iov_base);
  fat->iov_base = (char *)__cil_tmp3;
  return;
}
}
__inline static void __deepcopy_msghdr_from_compat(struct msghdr *fat , struct msghdr_COMPAT *compat ) ;
__inline static void __deepcopy_msghdr_from_compat(struct msghdr *fat , struct msghdr_COMPAT *compat ) 
{ int len ;
  int v ;
  struct iovec_COMPAT *iptr ;
  struct iovec_COMPAT *tmp ;
  int tmp___0 ;
  void *__cil_tmp8 ;
  void *__cil_tmp9 ;
  fseqp_void __cil_tmp10 ;
  struct iovec * __FSEQ  __cil_tmp11 ;
  void *__cil_tmp12 ;
  void * __FSEQ  __cil_tmp13 ;
  void * __FSEQ  __cil_tmp14 ;
  void * __FSEQ  __cil_tmp15 ;
  struct iovec * __FSEQ  __cil_tmp16 ;
  void *__cil_tmp11_e22 ;
  void *__cil_tmp13_e23 ;
  void *__cil_tmp14_e24 ;
  void *__cil_tmp15_e25 ;
  void *__cil_tmp16_e26 ;

  {
  tmp = (struct iovec_COMPAT *)0;
  iptr = (struct iovec_COMPAT *)0;
  CHECK_NULL((void *)fat);
  CHECK_NULL((void *)compat);
  fat->msg_namelen = compat->msg_namelen;
  fat->msg_iovlen = compat->msg_iovlen;
  fat->msg_controllen = compat->msg_controllen;
  fat->msg_flags = compat->msg_flags;
  __cil_tmp8 = (void *)((void *)compat->msg_name);
  fat->msg_name = (void *)__cil_tmp8;
  __cil_tmp9 = (void *)((void *)compat->msg_control);
  fat->msg_control = (void *)__cil_tmp9;
  tmp___0 = 1;
  if (tmp___0) {
    CHECK_NULL((void *)compat);
    if ((void *)((void *)compat->msg_iov)) {
      __cil_tmp14 = (void *)((void *)compat->msg_iov);
      __cil_tmp14_e24 = (void *)((void *)compat->msg_iov) + (unsigned int )compat->msg_iovlen * sizeof(*(fat->msg_iov._p));
      __cil_tmp13_e23 = __cil_tmp14_e24;
      __cil_tmp13 = __cil_tmp14;
    } else {
      __cil_tmp15 = 0;
      __cil_tmp15_e25 = (void *)0;
      __cil_tmp13_e23 = __cil_tmp15_e25;
      __cil_tmp13 = __cil_tmp15;
    }
    CHECK_NULL((void *)fat);
    CHECK_FSEQALIGN(sizeof(struct iovec ), (void *)((struct iovec */* __FSEQ  */)__cil_tmp13),
                    __cil_tmp13_e23);
    __cil_tmp16 = (struct iovec */* __FSEQ  */)__cil_tmp13;
    __cil_tmp16_e26 = __cil_tmp13_e23;
    fat->msg_iov._ms._e = __cil_tmp16_e26;
    fat->msg_iov._p = __cil_tmp16;
  } else {
    CHECK_NULL((void *)compat);
    len = compat->msg_iovlen;
    __cil_tmp10 = malloc_f((int )((unsigned int )len * sizeof(*(fat->msg_iov._p))));
    CHECK_NULL((void *)fat);
    CHECK_FSEQALIGN(sizeof(struct iovec ), (void *)((struct iovec */* __FSEQ  */)__cil_tmp10._p),
                    __cil_tmp10._ms._e);
    __cil_tmp11 = (struct iovec */* __FSEQ  */)__cil_tmp10._p;
    __cil_tmp11_e22 = __cil_tmp10._ms._e;
    fat->msg_iov._ms._e = __cil_tmp11_e22;
    fat->msg_iov._p = __cil_tmp11;
    v = 0;
    while (v < len) {
      CHECK_NULL((void *)compat);
      __cil_tmp12 = (unsigned int )((void *)((unsigned long )compat->msg_iov + (unsigned long )((unsigned int )v * sizeof(*(compat->msg_iov)))));
      tmp = (struct iovec_COMPAT *)__cil_tmp12;
      iptr = (struct iovec_COMPAT *)tmp;
      CHECK_NULL((void *)fat);
      CHECK_FSEQARITH((void *)fat->msg_iov._p, sizeof(struct iovec ), (void *)(fat->msg_iov._p + v),
                      fat->msg_iov._ms._e, 0);
      CHECK_FSEQ2SAFE(fat->msg_iov._ms._e, (void *)(fat->msg_iov._p + v), sizeof(struct iovec ),
                      sizeof(struct iovec ), 0, 0);
      __deepcopy_iovec_from_compat((struct iovec *)(fat->msg_iov._p + v), (struct iovec_COMPAT *)iptr);
      v ++;
    }
  }

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
static char __string2[44]  = 
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
        'i',      'o',      'v',      '\000'};
static char __string3[48]  = 
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
extern void __deepcopy_msghdr_to_compat_sscsfs_(struct msghdr_COMPAT *compat , struct msghdr *fat ) ;
extern void __deepcopy_msghdr_to_compat_sscsfs_(struct msghdr_COMPAT *compat , struct msghdr *fat ) 
{ void *__cil_tmp3 ;
  int dest_mangling4 ;
  struct iovec *__cil_tmp5 ;
  int dest_mangling6 ;
  void *__cil_tmp7 ;
  int dest_mangling8 ;
  void *__cil_tmp9 ;
  void *__cil_tmp10 ;
  void *__cil_tmp11 ;
  void *__cil_tmp12 ;
  void *__cil_tmp13 ;
  void *__cil_tmp14 ;

  {
  __cil_tmp7 = (void *)0;
  __cil_tmp5 = (struct iovec *)0;
  __cil_tmp3 = (void *)0;
  CHECK_NULL((void *)fat);
  __cil_tmp9 = (void *)fat->msg_name;
  __cil_tmp7 = (void *)__cil_tmp9;
  if ((int )(! __cil_tmp7)) {
    {
    CHECK_NULL((void *)compat);
    compat->msg_name = (void *)0;
    }
  } else {
    {
    dest_mangling8 = 1;
    if (dest_mangling8) {
      {
      __cil_tmp10 = (unsigned int )__cil_tmp7;
      CHECK_NULL((void *)compat);
      compat->msg_name = (void *)__cil_tmp10;
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
  __cil_tmp11 = (void */* __FSEQ  */)fat->msg_iov._p;
  __cil_tmp5 = (struct iovec *)__cil_tmp11;
  if ((int )(! __cil_tmp5)) {
    {
    CHECK_NULL((void *)compat);
    compat->msg_iov = (struct iovec_COMPAT *)0;
    }
  } else {
    {
    dest_mangling6 = 1;
    if (dest_mangling6) {
      {
      __cil_tmp12 = (unsigned int )__cil_tmp5;
      CHECK_NULL((void *)compat);
      compat->msg_iov = (struct iovec_COMPAT *)__cil_tmp12;
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
  compat->msg_iovlen = fat->msg_iovlen;
  __cil_tmp13 = (void *)fat->msg_control;
  __cil_tmp3 = (void *)__cil_tmp13;
  if ((int )(! __cil_tmp3)) {
    {
    CHECK_NULL((void *)compat);
    compat->msg_control = (void *)0;
    }
  } else {
    {
    dest_mangling4 = 1;
    if (dest_mangling4) {
      {
      __cil_tmp14 = (unsigned int )__cil_tmp3;
      CHECK_NULL((void *)compat);
      compat->msg_control = (void *)__cil_tmp14;
      }
    } else {
      {
      abort_deepcopy((char *)(& __string3[0]));
      }
    }
    }
  }
  CHECK_NULL((void *)compat);
  CHECK_NULL((void *)fat);
  compat->msg_controllen = fat->msg_controllen;
  compat->msg_flags = fat->msg_flags;
  return;
}
}
__inline static int /*1*/recvmsg_wrapper(int s , struct msghdr *fat_msg , int flags ) ;
__inline static int /*1*/recvmsg_wrapper(int s , struct msghdr *fat_msg , int flags ) 
{ struct msghdr_COMPAT lean_msg__area ;
  struct msghdr *lean_msg__ptrof ;
  struct msghdr *tmp ;
  struct msghdr_COMPAT *lean_msg ;
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
  lean_msg = (struct msghdr_COMPAT *)0;
  tmp = (struct msghdr *)0;
  lean_msg__ptrof = (struct msghdr *)0;
  lean_msg__area.msg_control = (void *)0;
  lean_msg__area.msg_iov = (struct iovec_COMPAT *)0;
  lean_msg__area.msg_name = (void *)0;
  __cil_tmp16 = (void *)((void *)fat_msg);
  tmp = (struct msghdr *)__cil_tmp16;
  lean_msg__ptrof = (struct msghdr *)tmp;
  if ((int )lean_msg__ptrof) {
    tmp___4 = 0;
    if (tmp___4) {
      __cil_tmp18 = (unsigned int )((void *)lean_msg__ptrof);
      tmp___2 = (struct msghdr_COMPAT *)__cil_tmp18;
    } else {
      __deepcopy_msghdr_to_compat_sscsfs_((struct msghdr_COMPAT *)(& lean_msg__area),
                                          (struct msghdr *)lean_msg__ptrof);
      tmp___2 = (struct msghdr_COMPAT *)(& lean_msg__area);
    }
  } else {
    __cil_tmp17 = (unsigned int )((void *)lean_msg__ptrof);
    tmp___2 = (struct msghdr_COMPAT *)__cil_tmp17;
  }
  lean_msg = (struct msghdr_COMPAT *)tmp___2;
  __cil_tmp19 = recvmsg(s, (struct msghdr_COMPAT *)lean_msg, flags);
  tmp___5 = __cil_tmp19;
  result = tmp___5;
  if ((unsigned int )lean_msg != (unsigned int )fat_msg) {
    __deepcopy_msghdr_from_compat((struct msghdr *)fat_msg, (struct msghdr_COMPAT *)lean_msg);
  }
  CHECK_NULL((void *)lean_msg);
  CHECK_NULL((void *)fat_msg);
  if ((unsigned int )lean_msg->msg_iov != (unsigned int )fat_msg->msg_iov._p) {
    free((void *)((void *)lean_msg->msg_iov));
  }
  __retres = result;
  return (__retres);
}
}
