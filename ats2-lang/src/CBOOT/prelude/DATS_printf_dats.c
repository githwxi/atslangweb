/*
**
** The C code is generated by ATS/Anairiats
** The compilation time is: 2013-10-6: 11h: 4m
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

#include "libc/CATS/stdarg.cats"
/* external codes at top */

#define ATSPRE_SPRINTF_GUESS 16

/* type definitions */
/* external typedefs */
/* external dynamic constructor declarations */
/* external dynamic constant declarations */
ATSextern_fun(ats_ptr_type, atspre_vsprintf_size) (ats_size_type, ats_ptr_type, ats_ref_type) ;
ATSextern_fun(ats_ptr_type, atspre_vsprintf) (ats_ptr_type, ats_ref_type) ;
ATSextern_fun(ats_void_type, atslib_va_end) (ats_ref_type) ;

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
// /home/hwxi/research/Anairiats/prelude/DATS/printf.dats: 3573(line=139, offs=16) -- 3746(line=145, offs=4)
*/
ATSglobaldec()
ats_ptr_type
ATS_2d0_2e2_2e11_2prelude_2SATS_2printf_2esats__tostringf_size (ats_size_type arg0, ats_ptr_type arg1, ...) {
/* local vardec */
ATSlocal (ats_ptr_type, tmp0) ;
ATSlocal (ats_ptr_type, tmp1) ;
// ATSlocal_void (tmp2) ;

ATSlocal (va_list, arg2) ;
va_start(arg2, arg1) ;

__ats_lab_ATS_2d0_2e2_2e11_2prelude_2SATS_2printf_2esats__tostringf_size:
tmp1 = atspre_vsprintf_size (arg0, arg1, (&arg2)) ;
/* tmp2 = */ atslib_va_end ((&arg2)) ;
tmp0 = tmp1 ;
return (tmp0) ;
} /* end of [ATS_2d0_2e2_2e11_2prelude_2SATS_2printf_2esats__tostringf_size] */

/*
// /home/hwxi/research/Anairiats/prelude/DATS/printf.dats: 3795(line=148, offs=11) -- 3952(line=154, offs=4)
*/
ATSglobaldec()
ats_ptr_type
atspre_tostringf (ats_ptr_type arg0, ...) {
/* local vardec */
ATSlocal (ats_ptr_type, tmp3) ;
ATSlocal (ats_ptr_type, tmp4) ;
// ATSlocal_void (tmp5) ;

ATSlocal (va_list, arg1) ;
va_start(arg1, arg0) ;

__ats_lab_atspre_tostringf:
tmp4 = atspre_vsprintf (arg0, (&arg1)) ;
/* tmp5 = */ atslib_va_end ((&arg1)) ;
tmp3 = tmp4 ;
return (tmp3) ;
} /* end of [atspre_tostringf] */

/* static load function */

extern ats_void_type ATS_2d0_2e2_2e11_2libc_2SATS_2stdarg_2esats__staload (void) ;
// extern ats_void_type ATS_2d0_2e2_2e11_2prelude_2SATS_2printf_2esats__staload (void) ;

ats_void_type
ATS_2d0_2e2_2e11_2prelude_2DATS_2printf_2edats__staload () {
static int ATS_2d0_2e2_2e11_2prelude_2DATS_2printf_2edats__staload_flag = 0 ;
if (ATS_2d0_2e2_2e11_2prelude_2DATS_2printf_2edats__staload_flag) return ;
ATS_2d0_2e2_2e11_2prelude_2DATS_2printf_2edats__staload_flag = 1 ;

ATS_2d0_2e2_2e11_2libc_2SATS_2stdarg_2esats__staload () ;
// ATS_2d0_2e2_2e11_2prelude_2SATS_2printf_2esats__staload () ;

return ;
} /* staload function */

/* dynamic load function */

// dynload flag declaration
// extern ats_int_type ATS_2d0_2e2_2e11_2prelude_2DATS_2printf_2edats__dynload_flag ;

ats_void_type
ATS_2d0_2e2_2e11_2prelude_2DATS_2printf_2edats__dynload () {
// ATS_2d0_2e2_2e11_2prelude_2DATS_2printf_2edats__dynload_flag = 1 ;
ATS_2d0_2e2_2e11_2prelude_2DATS_2printf_2edats__staload () ;

#ifdef _ATS_PROOFCHECK
#endif /* _ATS_PROOFCHECK */

/* marking static variables for GC */

/* marking external values for GC */

/* code for dynamic loading */
return ;
} /* end of [dynload function] */

/* external codes at mid */


ats_void_type
atspre_exit_prerrf (
  const ats_int_type status, const ats_ptr_type fmt, ...
) {
  va_list ap ;
  va_start(ap, fmt) ; vfprintf(stderr, (char*)fmt, ap) ; va_end(ap) ;
/*
  fprintf (stderr, "atspre_exit_prerrf: status = %i\n", status) ;
*/
  exit(status) ;
  return ; // deadcode
} /* end of [atspre_exit_prerrf] */

ats_void_type
atspre_assert_prerrf (
  ats_bool_type assertion, ats_ptr_type fmt, ...
) {
  int err ;
  va_list ap ;

  if (!assertion) { /* assertion is false */
    va_start(ap, fmt) ;
    err = vfprintf(stderr, (char*)fmt, ap) ;
    va_end(ap) ;
    if (err < 0) {
      ats_exit_errmsg (
        err, "[atspre_assert_prerrf]: prerrf failed\n"
      ) ;
    } else {
      ats_exit_errmsg (1, "[atspre_assert_prerrf]: assert failed\n") ;
    }
  } /* end of [if] */

  return ;
} /* end of [atspre_assert_prerrf] */



ats_ptr_type
atspre_vsprintf_size (
  const ats_size_type guess
, const ats_ptr_type fmt, ats_ref_type ap0
) {
  int n, sz ; char *res ; va_list ap ;
//
  sz = guess ;
//
  while (1) {
    va_copy (ap, *(va_list*)ap0) ;
    res = ATS_MALLOC(sz) ;
    n = vsnprintf(res, sz, (char*)fmt, ap) ;
    if (n >= 0) {
      if (n < sz) return res ;
      sz = n+1 ; ATS_FREE(res) ; continue ;
    } else {
      return ((ats_ptr_type)0) ;
    } // end of [if]
  } // end of [while]
//
  return (ats_ptr_type)0 ; // deadcode
//
} /* end of [atspre_vsprintf_size] */

ats_ptr_type
atspre_vsprintf (
  const ats_ptr_type fmt, ats_ref_type ap0
) {
  char *res = (char*)atspre_vsprintf_size (ATSPRE_SPRINTF_GUESS, fmt, ap0) ;
  if (!res) {
    ats_exit_errmsg (1, "exit(ATS): [atspre_vsprintf] failed.\n") ;
  } // end of [if]
  return res ;
} // end of [atspre_vsprintf]


/* external codes at bot */

/* ****** ****** */

/* end of [DATS_printf_dats.c] */
