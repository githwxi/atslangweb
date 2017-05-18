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


ATSextfun()
ats_bool_type atsopt_charlst_is_nil (ats_ref_type) ;
ATSextfun()
ats_char_type atsopt_charlst_uncons (ats_ref_type) ;

ats_ptr_type
string_make_charlst_rev_int (
  ats_ptr_type cs, ats_int_type n
) {
  char *s;
  s = ATS_MALLOC (n+1) ; s += n ; *s = '\000' ;
  while (!atsopt_charlst_is_nil(cs)) { *--s = atsopt_charlst_uncons(&cs) ; }
  return s ;
} // end of [string_make_charlst_rev_int]


/* type definitions */
typedef struct {
ats_char_type atslab_0 ;
ats_ptr_type atslab_1 ;
} anairiats_sum_0 ;

/* external typedefs */
/* external dynamic constructor declarations */
ATSextern_val(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_charlst_2esats__CHARLSTnil_0) ;
ATSextern_val(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_charlst_2esats__CHARLSTcons_1) ;

/* external dynamic constant declarations */
ATSextern_fun(ats_int_type, atspre_iadd) (ats_int_type, ats_int_type) ;
ATSextern_fun(ats_size_type, atspre_add_size1_int1) (ats_size_type, ats_int_type) ;
ATSextern_fun(ats_char_type, atspre_string_get_char_at) (ats_ptr_type, ats_size_type) ;
ATSextern_fun(ats_bool_type, atspre_string_isnot_atend) (ats_ptr_type, ats_size_type) ;
ATSextern_fun(ats_void_type, ATS_2d0_2e2_2e12_2src_2ats_charlst_2esats__charlst_free) (ats_ptr_type) ;
ATSextern_fun(ats_int_type, ATS_2d0_2e2_2e12_2src_2ats_charlst_2esats__charlst_length) (ats_ptr_type) ;
ATSextern_fun(ats_ptr_type, string_make_charlst_rev_int) (ats_ptr_type, ats_int_type) ;
ATSextern_fun(ats_bool_type, atsopt_charlst_is_nil) (ats_ptr_type) ;
ATSextern_fun(ats_char_type, atsopt_charlst_uncons) (ats_ref_type) ;

/* external dynamic terminating constant declarations */
#ifdef _ATS_PROOFCHECK
#endif /* _ATS_PROOFCHECK */

/* assuming abstract types */
/* sum constructor declarations */
/* exn constructor declarations */
/* global dynamic (non-functional) constant declarations */
/* internal function declarations */
static
ats_int_type aux_2 (ats_ptr_type arg0, ats_int_type arg1) ;
static
ats_ptr_type loop_4 (ats_ptr_type arg0, ats_size_type arg1, ats_ptr_type arg2) ;

/* partial value template declarations */
/* static temporary variable declarations */
/* external value variable declarations */

/* function implementations */

/*
// /home/hwxi/Research/ATS-Anairiats/src/ats_charlst.dats: 1580(line=42, offs=14) -- 1675(line=44, offs=4)
*/
ATSglobaldec()
ats_void_type
ATS_2d0_2e2_2e12_2src_2ats_charlst_2esats__charlst_free (ats_ptr_type arg0) {
/* local vardec */
// ATSlocal_void (tmp0) ;
ATSlocal (ats_ptr_type, tmp1) ;

__ats_lab_ATS_2d0_2e2_2e12_2src_2ats_charlst_2esats__charlst_free:
do {
/* branch: __ats_lab_0 */
__ats_lab_0_0:
if (arg0 == (ats_sum_ptr_type)0) { goto __ats_lab_1_0 ; }
__ats_lab_0_1:
tmp1 = ats_caselptrlab_mac(anairiats_sum_0, arg0, atslab_1) ;
ATS_FREE(arg0) ;
arg0 = tmp1 ;
goto __ats_lab_ATS_2d0_2e2_2e12_2src_2ats_charlst_2esats__charlst_free ; // tail call
break ;

/* branch: __ats_lab_1 */
__ats_lab_1_0:
// if (arg0 != (ats_sum_ptr_type)0) { ats_deadcode_failure_handle () ; }
__ats_lab_1_1:
break ;
} while (0) ;
return /* (tmp0) */ ;
} /* end of [ATS_2d0_2e2_2e12_2src_2ats_charlst_2esats__charlst_free] */

/*
// /home/hwxi/Research/ATS-Anairiats/src/ats_charlst.dats: 1781(line=50, offs=7) -- 2037(line=57, offs=6)
*/
ATSstaticdec()
ats_int_type
aux_2 (ats_ptr_type arg0, ats_int_type arg1) {
/* local vardec */
ATSlocal (ats_int_type, tmp3) ;
ATSlocal (ats_ptr_type, tmp4) ;
ATSlocal (ats_ptr_type, tmp5) ;
ATSlocal (ats_int_type, tmp6) ;

__ats_lab_aux_2:
do {
/* branch: __ats_lab_2 */
__ats_lab_2_0:
if (arg0 == (ats_sum_ptr_type)0) { goto __ats_lab_3_0 ; }
__ats_lab_2_1:
tmp4 = &ats_caselptrlab_mac(anairiats_sum_0, arg0, atslab_1) ;
tmp5 = ats_ptrget_mac(ats_ptr_type, tmp4) ;
tmp6 = atspre_iadd (arg1, 1) ;
arg0 = tmp5 ;
arg1 = tmp6 ;
goto __ats_lab_aux_2 ; // tail call
break ;

/* branch: __ats_lab_3 */
__ats_lab_3_0:
// if (arg0 != (ats_sum_ptr_type)0) { ats_deadcode_failure_handle () ; }
__ats_lab_3_1:
tmp3 = arg1 ;
break ;
} while (0) ;
return (tmp3) ;
} /* end of [aux_2] */

/*
// /home/hwxi/Research/ATS-Anairiats/src/ats_charlst.dats: 1748(line=49, offs=16) -- 2055(line=58, offs=2)
*/
ATSglobaldec()
ats_int_type
ATS_2d0_2e2_2e12_2src_2ats_charlst_2esats__charlst_length (ats_ptr_type arg0) {
/* local vardec */
ATSlocal (ats_int_type, tmp2) ;

__ats_lab_ATS_2d0_2e2_2e12_2src_2ats_charlst_2esats__charlst_length:
tmp2 = aux_2 (arg0, 0) ;
return (tmp2) ;
} /* end of [ATS_2d0_2e2_2e12_2src_2ats_charlst_2esats__charlst_length] */

/*
// /home/hwxi/Research/ATS-Anairiats/src/ats_charlst.dats: 2186(line=65, offs=7) -- 2395(line=70, offs=12)
*/
ATSstaticdec()
ats_ptr_type
loop_4 (ats_ptr_type arg0, ats_size_type arg1, ats_ptr_type arg2) {
/* local vardec */
ATSlocal (ats_ptr_type, tmp8) ;
ATSlocal (ats_bool_type, tmp9) ;
ATSlocal (ats_size_type, tmp10) ;
ATSlocal (ats_ptr_type, tmp11) ;
ATSlocal (ats_char_type, tmp12) ;

__ats_lab_loop_4:
tmp9 = atspre_string_isnot_atend (arg0, arg1) ;
if (tmp9) {
tmp10 = atspre_add_size1_int1 (arg1, 1) ;
tmp12 = atspre_string_get_char_at (arg0, arg1) ;
tmp11 = ATS_MALLOC(sizeof(anairiats_sum_0)) ;
ats_selptrset_mac(anairiats_sum_0, tmp11, atslab_0, tmp12) ;
ats_selptrset_mac(anairiats_sum_0, tmp11, atslab_1, arg2) ;
arg0 = arg0 ;
arg1 = tmp10 ;
arg2 = tmp11 ;
goto __ats_lab_loop_4 ; // tail call
} else {
tmp8 = arg2 ;
} /* end of [if] */
return (tmp8) ;
} /* end of [loop_4] */

/*
// /home/hwxi/Research/ATS-Anairiats/src/ats_charlst.dats: 2142(line=64, offs=3) -- 2416(line=72, offs=2)
*/
ATSglobaldec()
ats_ptr_type
ATS_2d0_2e2_2e12_2src_2ats_charlst_2esats__charlst_add_string (ats_ptr_type arg0, ats_ptr_type arg1) {
/* local vardec */
ATSlocal (ats_ptr_type, tmp7) ;

__ats_lab_ATS_2d0_2e2_2e12_2src_2ats_charlst_2esats__charlst_add_string:
tmp7 = loop_4 (arg1, 0, arg0) ;
return (tmp7) ;
} /* end of [ATS_2d0_2e2_2e12_2src_2ats_charlst_2esats__charlst_add_string] */

/*
// /home/hwxi/Research/ATS-Anairiats/src/ats_charlst.dats: 2504(line=77, offs=25) -- 2574(line=79, offs=4)
*/
ATSglobaldec()
ats_ptr_type
ATS_2d0_2e2_2e12_2src_2ats_charlst_2esats__string_make_charlst_rev (ats_ptr_type arg0) {
/* local vardec */
ATSlocal (ats_ptr_type, tmp13) ;
ATSlocal (ats_int_type, tmp14) ;

__ats_lab_ATS_2d0_2e2_2e12_2src_2ats_charlst_2esats__string_make_charlst_rev:
tmp14 = ATS_2d0_2e2_2e12_2src_2ats_charlst_2esats__charlst_length (arg0) ;
tmp13 = string_make_charlst_rev_int (arg0, tmp14) ;
return (tmp13) ;
} /* end of [ATS_2d0_2e2_2e12_2src_2ats_charlst_2esats__string_make_charlst_rev] */

/*
// /home/hwxi/Research/ATS-Anairiats/src/ats_charlst.dats: 2787(line=89, offs=16) -- 2879(line=90, offs=74)
*/
ATSglobaldec()
ats_bool_type
atsopt_charlst_is_nil (ats_ptr_type arg0) {
/* local vardec */
ATSlocal (ats_bool_type, tmp15) ;

__ats_lab_atsopt_charlst_is_nil:
do {
/* branch: __ats_lab_4 */
__ats_lab_4_0:
if (arg0 == (ats_sum_ptr_type)0) { goto __ats_lab_5_0 ; }
__ats_lab_4_1:
tmp15 = ats_false_bool ;
break ;

/* branch: __ats_lab_5 */
__ats_lab_5_0:
// if (arg0 != (ats_sum_ptr_type)0) { ats_deadcode_failure_handle () ; }
__ats_lab_5_1:
tmp15 = ats_true_bool ;
break ;
} while (0) ;
return (tmp15) ;
} /* end of [atsopt_charlst_is_nil] */

/*
// /home/hwxi/Research/ATS-Anairiats/src/ats_charlst.dats: 3094(line=101, offs=16) -- 3160(line=102, offs=60)
*/
ATSglobaldec()
ats_char_type
atsopt_charlst_uncons (ats_ref_type arg0) {
/* local vardec */
ATSlocal (ats_char_type, tmp16) ;
ATSlocal (ats_char_type, tmp17) ;
ATSlocal (ats_ptr_type, tmp18) ;

__ats_lab_atsopt_charlst_uncons:
// if (ats_ptrget_mac(ats_ptr_type, arg0) == (ats_sum_ptr_type)0) { ats_deadcode_failure_handle () ; }
tmp17 = ats_caselptrlab_mac(anairiats_sum_0, ats_ptrget_mac(ats_ptr_type, arg0), atslab_0) ;
tmp18 = ats_caselptrlab_mac(anairiats_sum_0, ats_ptrget_mac(ats_ptr_type, arg0), atslab_1) ;
ATS_FREE(ats_ptrget_mac(ats_ptr_type, arg0)) ;
ats_ptrget_mac(ats_ptr_type, arg0) = tmp18 ;
tmp16 = tmp17 ;
return (tmp16) ;
} /* end of [atsopt_charlst_uncons] */

/* static load function */

extern ats_void_type ATS_2d0_2e2_2e12_2src_2ats_charlst_2esats__staload (void) ;

ats_void_type
ATS_2d0_2e2_2e12_2src_2ats_charlst_2edats__staload () {
static int ATS_2d0_2e2_2e12_2src_2ats_charlst_2edats__staload_flag = 0 ;
if (ATS_2d0_2e2_2e12_2src_2ats_charlst_2edats__staload_flag) return ;
ATS_2d0_2e2_2e12_2src_2ats_charlst_2edats__staload_flag = 1 ;

ATS_2d0_2e2_2e12_2src_2ats_charlst_2esats__staload () ;

return ;
} /* staload function */

/* dynamic load function */

// dynload flag declaration
extern ats_int_type ATS_2d0_2e2_2e12_2src_2ats_charlst_2edats__dynload_flag ;

ats_void_type
ATS_2d0_2e2_2e12_2src_2ats_charlst_2edats__dynload () {
ATS_2d0_2e2_2e12_2src_2ats_charlst_2edats__dynload_flag = 1 ;
ATS_2d0_2e2_2e12_2src_2ats_charlst_2edats__staload () ;

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

/* end of [/home/hwxi/Research/ATS-Anairiats/bootstrap1/ats_charlst_dats.c] */
