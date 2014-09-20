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
/* external codes at top */
/* type definitions */
/* external typedefs */
/* external dynamic constructor declarations */
/* external dynamic constant declarations */
ATSextern_fun(ats_size_type, atspre_sub_size1_size1) (ats_size_type, ats_size_type) ;
ATSextern_fun(ats_size_type, atspre_mul2_size1_size1) (ats_size_type, ats_size_type) ;
ATSextern_fun(ats_size_type, atspre_div2_size1_size1) (ats_size_type, ats_size_type) ;

/* external dynamic terminating constant declarations */
#ifdef _ATS_PROOFCHECK
extern
ats_void_type ATS_2d0_2e2_2e11_2prelude_2SATS_2arith_2esats__mul_isfun_prfck () ;
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
// /home/hwxi/research/Anairiats/prelude/DATS/sizetype.dats: 1658(line=46, offs=9) -- 2092(line=63, offs=4)
*/
ATSglobaldec()
ats_size_type
ATS_2d0_2e2_2e11_2prelude_2SATS_2sizetype_2esats__divmod_size1_size1 (ats_size_type arg0, ats_size_type arg1, ats_ref_type arg2) {
/* local vardec */
ATSlocal (ats_size_type, tmp0) ;
ATSlocal (ats_size_type, tmp1) ;
ATSlocal (ats_size_type, tmp2) ;
ATSlocal (ats_size_type, tmp3) ;
ATSlocal (ats_size_type, tmp4) ;
ATSlocal (ats_size_type, tmp5) ;

__ats_lab_ATS_2d0_2e2_2e11_2prelude_2SATS_2sizetype_2esats__divmod_size1_size1:
tmp1 = atspre_div2_size1_size1 (arg0, arg1) ;
tmp2 = ats_selsin_mac(tmp1, atslab_1) ;
tmp3 = atspre_mul2_size1_size1 (tmp2, arg1) ;
tmp4 = ats_selsin_mac(tmp3, atslab_1) ;
tmp5 = atspre_sub_size1_size1 (arg0, tmp4) ;
ats_ptrget_mac(ats_size_type, arg2) = tmp5 ;
tmp0 = tmp2 ;
return (tmp0) ;
} /* end of [ATS_2d0_2e2_2e11_2prelude_2SATS_2sizetype_2esats__divmod_size1_size1] */

/* static load function */

// extern ats_void_type ATS_2d0_2e2_2e11_2prelude_2SATS_2sizetype_2esats__staload (void) ;

ats_void_type
ATS_2d0_2e2_2e11_2prelude_2DATS_2sizetype_2edats__staload () {
static int ATS_2d0_2e2_2e11_2prelude_2DATS_2sizetype_2edats__staload_flag = 0 ;
if (ATS_2d0_2e2_2e11_2prelude_2DATS_2sizetype_2edats__staload_flag) return ;
ATS_2d0_2e2_2e11_2prelude_2DATS_2sizetype_2edats__staload_flag = 1 ;

// ATS_2d0_2e2_2e11_2prelude_2SATS_2sizetype_2esats__staload () ;

return ;
} /* staload function */

/* dynamic load function */

// dynload flag declaration
// extern ats_int_type ATS_2d0_2e2_2e11_2prelude_2DATS_2sizetype_2edats__dynload_flag ;

ats_void_type
ATS_2d0_2e2_2e11_2prelude_2DATS_2sizetype_2edats__dynload () {
// ATS_2d0_2e2_2e11_2prelude_2DATS_2sizetype_2edats__dynload_flag = 1 ;
ATS_2d0_2e2_2e11_2prelude_2DATS_2sizetype_2edats__staload () ;

#ifdef _ATS_PROOFCHECK
ATS_2d0_2e2_2e11_2prelude_2SATS_2arith_2esats__mul_isfun_prfck () ;
#endif /* _ATS_PROOFCHECK */

/* marking static variables for GC */

/* marking external values for GC */

/* code for dynamic loading */
return ;
} /* end of [dynload function] */

/* external codes at mid */
/* external codes at bot */

/* ****** ****** */

/* end of [DATS_sizetype_dats.c] */
