/* Generated by CIL v. 1.3.7 */
/* print_CIL_Input is true */

#line 211 "/usr/lib/gcc/x86_64-linux-gnu/4.4.3/include/stddef.h"
typedef unsigned long size_t;
#line 34 "/usr/include/bits/types.h"
typedef unsigned long __u_long;
#line 135 "/usr/include/bits/types.h"
typedef unsigned int __uid_t;
#line 136 "/usr/include/bits/types.h"
typedef unsigned int __gid_t;
#line 149 "/usr/include/bits/types.h"
typedef long __time_t;
#line 38 "/usr/include/sys/types.h"
typedef __u_long u_long;
#line 67 "/usr/include/sys/types.h"
typedef __gid_t gid_t;
#line 82 "/usr/include/sys/types.h"
typedef __uid_t uid_t;
#line 76 "/usr/include/time.h"
typedef __time_t time_t;
#line 77 "./sendmail-bad.h"
struct address {
   char *q_paddr ;
   char *q_user ;
   char *q_ruser ;
   char *q_host ;
   u_long q_flags ;
   uid_t q_uid ;
   gid_t q_gid ;
   char *q_home ;
   char *q_fullname ;
   struct address *q_next ;
   struct address *q_alias ;
   char *q_owner ;
   struct address *q_tchain ;
   char *q_orcpt ;
   char *q_status ;
   char *q_rstatus ;
   time_t q_statdate ;
   char *q_statmta ;
   short q_specificity ;
};
#line 100 "./sendmail-bad.h"
typedef struct address ADDRESS;
#line 339 "/usr/include/stdio.h"
extern int printf(char const   * __restrict  __format  , ...) ;
#line 471 "/usr/include/stdlib.h"
extern  __attribute__((__nothrow__)) void *malloc(size_t __size )  __attribute__((__malloc__)) ;
#line 102 "./sendmail-bad.h"
extern ADDRESS *recipient(ADDRESS * , ADDRESS ** , int  ) ;
#line 71 "main-bad.c"
int main(void) 
{ ADDRESS **sendq ;
  ADDRESS *ret_address ;
  int aliaslevel ;
  ADDRESS *a ;
  void *tmp ;
  ADDRESS *tmp___0 ;
  void *__cil_tmp7 ;
  unsigned long __cil_tmp8 ;
  unsigned long __cil_tmp9 ;
  unsigned long __cil_tmp10 ;
  unsigned long __cil_tmp11 ;
  char const   * __restrict  __cil_tmp12 ;
  unsigned long __cil_tmp13 ;
  unsigned long __cil_tmp14 ;
  char *__cil_tmp15 ;
  unsigned long __cil_tmp16 ;
  unsigned long __cil_tmp17 ;
  char *__cil_tmp18 ;

  {
  {
#line 73
  __cil_tmp7 = (void *)0;
#line 73
  sendq = (ADDRESS **)__cil_tmp7;
#line 75
  aliaslevel = 0;
#line 78
  tmp = malloc(144UL);
#line 78
  a = (ADDRESS *)tmp;
#line 80
  __cil_tmp8 = (unsigned long )a;
#line 80
  __cil_tmp9 = __cil_tmp8 + 32;
#line 80
  *((u_long *)__cil_tmp9) = (u_long )0;
#line 82
  __cil_tmp10 = (unsigned long )a;
#line 82
  __cil_tmp11 = __cil_tmp10 + 8;
#line 82
  *((char **)__cil_tmp11) = (char *)"rpc";
#line 84
  tmp___0 = recipient(a, sendq, aliaslevel);
#line 84
  ret_address = tmp___0;
#line 86
  __cil_tmp12 = (char const   * __restrict  )"Real name of user %s = %s\n";
#line 86
  __cil_tmp13 = (unsigned long )a;
#line 86
  __cil_tmp14 = __cil_tmp13 + 8;
#line 86
  __cil_tmp15 = *((char **)__cil_tmp14);
#line 86
  __cil_tmp16 = (unsigned long )ret_address;
#line 86
  __cil_tmp17 = __cil_tmp16 + 56;
#line 86
  __cil_tmp18 = *((char **)__cil_tmp17);
#line 86
  printf(__cil_tmp12, __cil_tmp15, __cil_tmp18);
  }
#line 88
  return (0);
}
}