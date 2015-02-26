/*
**
** The C code is generated by ATS/Anairiats
** The compilation time is: 2015-1-19: 19h:28m
**
*/

/* include some .h files */
#ifndef _ATS_HEADER_NONE
#include "ats_config.h"
#include "ats_basics.h"
#include "ats_types.h"
#include "ats_exception.h"
#include "ats_memory.h"
#endif /* _ATS_HEADER_NONE */

/* include some .cats files */
#ifndef _ATS_PRELUDE_NONE
#include "prelude/CATS/basics.cats"
#include "prelude/CATS/bool.cats"
#include "prelude/CATS/char.cats"
#include "prelude/CATS/byte.cats"
#include "prelude/CATS/float.cats"
#include "prelude/CATS/integer.cats"
#include "prelude/CATS/integer_ptr.cats"
#include "prelude/CATS/integer_fixed.cats"
#include "prelude/CATS/sizetype.cats"
#include "prelude/CATS/pointer.cats"
#include "prelude/CATS/reference.cats"
#include "prelude/CATS/string.cats"
#include "prelude/CATS/lazy.cats"
#include "prelude/CATS/lazy_vt.cats"
#include "prelude/CATS/printf.cats"
#include "prelude/CATS/list.cats"
#include "prelude/CATS/option.cats"
#include "prelude/CATS/array.cats"
#include "prelude/CATS/matrix.cats"
#endif /* _ATS_PRELUDE_NONE */
/* prologues from statically loaded files */

#include "libc/sys/CATS/types.cats"

#include "libc/CATS/errno.cats"

#include "libc/CATS/stdio.cats"

#include "libc/sys/CATS/types.cats"

#include "libc/CATS/unistd.cats"

#include "libc/sys/CATS/types.cats"

#include "libc/CATS/fcntl.cats"

#include "libc/sys/CATS/types.cats"
/* external codes at top */

extern char **environ ; // in [unistd.h]


ats_void_type
atslib_fork_exec_cloptr_exn
  (ats_ptr_type f_child) {
  pid_t pid ;
  pid = fork () ;
//
  if (pid < 0) {
    ats_exit_errmsg (errno, "exit(ATS): [fork] failed.\n") ;
  } // end of [if]
//
  /* this is the parent */
  if (pid > 0) { ATS_FREE (f_child) ; return ; }
//  
  /* this is the child */
  ((ats_void_type (*)(ats_clo_ptr_type))((ats_clo_ptr_type)f_child)->closure_fun)(f_child) ;
  _exit (0) ; /* no need to flush STDIN, STDOUT and STDERR */
//
  return ; /* deadcode */
} /* end of [atslib_fork_exec_cloptr] */

/* ****** ****** */

ats_int_type
atslib_fork_exec_and_wait_cloptr_exn
  (ats_ptr_type f_child) {
  pid_t pid ;
  int status ;
//
  pid = fork () ;
//
  if (pid < 0) {
    ats_exit_errmsg (errno, "exit(ATS): [fork] failed.\n") ;
  } // end of [if]
//
  if (pid > 0) {
    ATS_FREE (f_child) ;
    if (wait (&status) < 0) return -1 ;
    return status ;
  } // end of [if]
//
  /* this is the child */
  ((ats_void_type (*)(ats_clo_ptr_type))((ats_clo_ptr_type)f_child)->closure_fun)(f_child) ;
  _exit (0) ; /* no need to flush STDIN, STDOUT and STDERR */
//
  return 0 ; /* deadcode */
} /* atslib_fork_exec_and_wait_cloptr_exn */



#define atslib_GETCWD_BUFSZ 64

ats_ptr_type
atslib_getcwd0 () {
  char *buf, *res ;
  int sz = atslib_GETCWD_BUFSZ ;
//
  buf = (char*)ats_malloc_gc(atslib_GETCWD_BUFSZ) ;
//
// HX: this strategy may not be so attractive;
// an alternative is to use pathconf to get the maximum pathname length
//
  while (1) {
    res = getcwd (buf, sz) ;
    if (!res) {
      ATS_FREE (buf) ; sz = sz + sz ; buf = ATS_MALLOC (sz) ;
      continue ;
    } // end of [if]
    break ;
  } // end of [while]
//
  return buf ;
} // end of [atslib_getcwd0]



ats_int_type
atslib_pipe (
  ats_ptr_type pfd1, ats_ptr_type pfd2
) {
  int err ;
  int pfd[2] ;
  err = pipe(pfd) ;
  if (err==0) {
    *(int*)pfd1 = pfd[0] ; *(int*)pfd2 = pfd[1] ;
  } // end of [if]
  return err ;
} // end of [atslib_pipe]


//
extern
ats_size_type
atspre_ptrarr_size (ats_ptr_type p0) ;
//
ats_ptr_type
atslib_environ_get_arrsz
  (size_t *sizep) {
  *sizep = atspre_ptrarr_size (environ) ;
  return environ;
} // end of [atslib_environ_get_arrsz]
//

/* type definitions */
/* external typedefs */
/* external dynamic constructor declarations */
/* external dynamic constant declarations */
ATSextern_fun(ats_bool_type, atspre_lt_int_int) (ats_int_type, ats_int_type) ;
ATSextern_fun(ats_int_type, atslib_errno_get) () ;
ATSextern_fun(ats_void_type, atslib_perror) (ats_ptr_type) ;
ATSextern_fun(ats_pid_type, atslib_fork_err) () ;

/* external dynamic terminating constant declarations */
#ifdef _ATS_PROOFCHECK
#endif /* _ATS_PROOFCHECK */

/* assuming abstract types */
/* sum constructor declarations */
/* exn constructor declarations */
/* global dynamic (non-functional) constant declarations */
/* internal function declarations */

/* partial value template declarations */
/* static temporary variable declarations */
/* external value variable declarations */

/* function implementations */

/*
// /home/hwxi/research/Anairiats/libc/DATS/unistd.dats: 1828(line=61, offs=10) -- 2089(line=70, offs=2)
*/
ATSglobaldec()
ats_pid_type
atslib_fork_exn () {
/* local vardec */
ATSlocal (ats_pid_type, tmp0) ;
ATSlocal (ats_pid_type, tmp1) ;
ATSlocal (ats_bool_type, tmp2) ;
// ATSlocal_void (tmp3) ;
ATSlocal (ats_int_type, tmp4) ;
// ATSlocal_void (tmp5) ;

__ats_lab_atslib_fork_exn:
tmp1 = atslib_fork_err () ;
tmp2 = atspre_lt_int_int (ats_castfn_mac(ats_int_type, tmp1), 0) ;
if (tmp2) {
tmp4 = atslib_errno_get () ;
/* tmp5 = */ atslib_perror (ATSstrcst("fork")) ;
/* tmp3 = */ ats_exit_errmsg (ats_castfn_mac(ats_int_type, tmp4), ATSstrcst("exit(ATS): [fork] failed.\n")) ;
} else {
/* empty */
} /* end of [if] */
tmp0 = tmp1 ;
return (tmp0) ;
} /* end of [atslib_fork_exn] */

/* static load function */

extern ats_void_type ATS_2d0_2e2_2e12_2libc_2sys_2SATS_2types_2esats__staload (void) ;
extern ats_void_type ATS_2d0_2e2_2e12_2libc_2SATS_2errno_2esats__staload (void) ;
extern ats_void_type ATS_2d0_2e2_2e12_2libc_2SATS_2stdio_2esats__staload (void) ;
extern ats_void_type ATS_2d0_2e2_2e12_2libc_2SATS_2unistd_2esats__staload (void) ;

ats_void_type
ATS_2d0_2e2_2e12_2libc_2DATS_2unistd_2edats__staload () {
static int ATS_2d0_2e2_2e12_2libc_2DATS_2unistd_2edats__staload_flag = 0 ;
if (ATS_2d0_2e2_2e12_2libc_2DATS_2unistd_2edats__staload_flag) return ;
ATS_2d0_2e2_2e12_2libc_2DATS_2unistd_2edats__staload_flag = 1 ;

ATS_2d0_2e2_2e12_2libc_2sys_2SATS_2types_2esats__staload () ;
ATS_2d0_2e2_2e12_2libc_2SATS_2errno_2esats__staload () ;
ATS_2d0_2e2_2e12_2libc_2SATS_2stdio_2esats__staload () ;
ATS_2d0_2e2_2e12_2libc_2SATS_2unistd_2esats__staload () ;

return ;
} /* staload function */

/* dynamic load function */

// dynload flag declaration
// extern ats_int_type ATS_2d0_2e2_2e12_2libc_2DATS_2unistd_2edats__dynload_flag ;

ats_void_type
ATS_2d0_2e2_2e12_2libc_2DATS_2unistd_2edats__dynload () {
// ATS_2d0_2e2_2e12_2libc_2DATS_2unistd_2edats__dynload_flag = 1 ;
ATS_2d0_2e2_2e12_2libc_2DATS_2unistd_2edats__staload () ;

#ifdef _ATS_PROOFCHECK
#endif /* _ATS_PROOFCHECK */

/* marking static variables for GC */

/* marking external values for GC */

/* code for dynamic loading */
return ;
} /* end of [dynload function] */

/* external codes at mid */
/* external codes at bot */

/* ****** ****** */

/* end of [DATS_unistd_dats.c] */
