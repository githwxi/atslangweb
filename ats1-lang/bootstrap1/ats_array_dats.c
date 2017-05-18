/*
**
** The C code is generated by ATS/Anairiats
** The compilation time is: 2015-10-2: 10h:54m
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
/* external codes at top */
/* type definitions */
/* external typedefs */
/* external dynamic constructor declarations */
/* external dynamic constant declarations */
ATSextern_fun(ats_int_type, atspre_isub) (ats_int_type, ats_int_type) ;
ATSextern_fun(ats_bool_type, atspre_igt) (ats_int_type, ats_int_type) ;
ATSextern_fun(ats_ptr_type, ats_array_ptr_alloc_tsz) (ats_int_type, ats_size_type) ;

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

/* static load function */

extern ats_void_type ATS_2d0_2e2_2e12_2src_2ats_array_2esats__staload (void) ;

ats_void_type
ATS_2d0_2e2_2e12_2src_2ats_array_2edats__staload () {
static int ATS_2d0_2e2_2e12_2src_2ats_array_2edats__staload_flag = 0 ;
if (ATS_2d0_2e2_2e12_2src_2ats_array_2edats__staload_flag) return ;
ATS_2d0_2e2_2e12_2src_2ats_array_2edats__staload_flag = 1 ;

ATS_2d0_2e2_2e12_2src_2ats_array_2esats__staload () ;

return ;
} /* staload function */

/* dynamic load function */

// dynload flag declaration
extern ats_int_type ATS_2d0_2e2_2e12_2src_2ats_array_2edats__dynload_flag ;

ats_void_type
ATS_2d0_2e2_2e12_2src_2ats_array_2edats__dynload () {
ATS_2d0_2e2_2e12_2src_2ats_array_2edats__dynload_flag = 1 ;
ATS_2d0_2e2_2e12_2src_2ats_array_2edats__staload () ;

#ifdef _ATS_PROOFCHECK
#endif /* _ATS_PROOFCHECK */

/* marking static variables for GC */

/* marking external values for GC */

/* code for dynamic loading */
return ;
} /* end of [dynload function] */

/* external codes at mid */
/* external codes at bot */


ats_ptr_type
ats_array_ptr_alloc_tsz (
  ats_int_type n, ats_size_type tsz
) {
  return ATS_MALLOC(n * tsz) ; // uninitialized
} /* end of [ats_array_ptr_alloc_tsz] */

ats_void_type
ats_array_ptr_free
  (ats_ptr_type base) { ATS_FREE(base); return ; }
// end of [ats_array_ptr_free]



/* ****** ****** */

/* end of [/home/hwxi/Research/ATS-Anairiats/bootstrap1/ats_array_dats.c] */
