/*
**
** The C code is generated by ATS/Anairiats
** The compilation time is: 2015-9-22: 19h:35m
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
ATSextern_val(ats_sum_type, ATS_2d0_2e2_2e12_2prelude_2basics_sta_2esats__None_0) ;
ATSextern_val(ats_sum_type, ATS_2d0_2e2_2e12_2prelude_2basics_sta_2esats__Some_1) ;

/* external dynamic constant declarations */

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
// /home/hwxi/Research/ATS-Anairiats/prelude/DATS/option.dats: 1832(line=53, offs=16) -- 1886(line=54, offs=48)
*/
ATSglobaldec()
ats_bool_type
ATS_2d0_2e2_2e12_2prelude_2SATS_2option_2esats__option_is_none (ats_ptr_type arg0) {
/* local vardec */
ATSlocal (ats_bool_type, tmp0) ;

__ats_lab_ATS_2d0_2e2_2e12_2prelude_2SATS_2option_2esats__option_is_none:
do {
/* branch: __ats_lab_0 */
__ats_lab_0_0:
if (arg0 != (ats_sum_ptr_type)0) { goto __ats_lab_1_0 ; }
__ats_lab_0_1:
tmp0 = ats_true_bool ;
break ;

/* branch: __ats_lab_1 */
__ats_lab_1_0:
// if (arg0 == (ats_sum_ptr_type)0) { ats_deadcode_failure_handle () ; }
__ats_lab_1_1:
tmp0 = ats_false_bool ;
break ;
} while (0) ;
return (tmp0) ;
} /* end of [ATS_2d0_2e2_2e12_2prelude_2SATS_2option_2esats__option_is_none] */

/*
// /home/hwxi/Research/ATS-Anairiats/prelude/DATS/option.dats: 1940(line=58, offs=16) -- 1994(line=59, offs=48)
*/
ATSglobaldec()
ats_bool_type
ATS_2d0_2e2_2e12_2prelude_2SATS_2option_2esats__option_is_some (ats_ptr_type arg0) {
/* local vardec */
ATSlocal (ats_bool_type, tmp1) ;

__ats_lab_ATS_2d0_2e2_2e12_2prelude_2SATS_2option_2esats__option_is_some:
do {
/* branch: __ats_lab_2 */
__ats_lab_2_0:
if (arg0 == (ats_sum_ptr_type)0) { goto __ats_lab_3_0 ; }
__ats_lab_2_1:
tmp1 = ats_true_bool ;
break ;

/* branch: __ats_lab_3 */
__ats_lab_3_0:
// if (arg0 != (ats_sum_ptr_type)0) { ats_deadcode_failure_handle () ; }
__ats_lab_3_1:
tmp1 = ats_false_bool ;
break ;
} while (0) ;
return (tmp1) ;
} /* end of [ATS_2d0_2e2_2e12_2prelude_2SATS_2option_2esats__option_is_some] */

/* static load function */

// extern ats_void_type ATS_2d0_2e2_2e12_2prelude_2SATS_2option_2esats__staload (void) ;

ats_void_type
ATS_2d0_2e2_2e12_2prelude_2DATS_2option_2edats__staload () {
static int ATS_2d0_2e2_2e12_2prelude_2DATS_2option_2edats__staload_flag = 0 ;
if (ATS_2d0_2e2_2e12_2prelude_2DATS_2option_2edats__staload_flag) return ;
ATS_2d0_2e2_2e12_2prelude_2DATS_2option_2edats__staload_flag = 1 ;

// ATS_2d0_2e2_2e12_2prelude_2SATS_2option_2esats__staload () ;

return ;
} /* staload function */

/* dynamic load function */

// dynload flag declaration
// extern ats_int_type ATS_2d0_2e2_2e12_2prelude_2DATS_2option_2edats__dynload_flag ;

ats_void_type
ATS_2d0_2e2_2e12_2prelude_2DATS_2option_2edats__dynload () {
// ATS_2d0_2e2_2e12_2prelude_2DATS_2option_2edats__dynload_flag = 1 ;
ATS_2d0_2e2_2e12_2prelude_2DATS_2option_2edats__staload () ;

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

/* end of [DATS_option_dats.c] */
