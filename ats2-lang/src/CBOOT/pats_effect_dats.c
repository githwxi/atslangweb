/*
**
** The C code is generated by ATS/Anairiats
** The compilation time is: 2014-11-5:  2h:36m
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

#include "pats_location.cats"

#include "pats_location.cats"
/* external codes at top */
/* type definitions */
typedef struct {
ats_uint_type atslab_0 ;
ats_ptr_type atslab_1 ;
} anairiats_sum_0 ;

/* external typedefs */
/* external dynamic constructor declarations */
ATSextern_val(ats_sum_type, ATS_2d0_2e2_2e11_2prelude_2basics_sta_2esats__list_cons_0) ;
ATSextern_val(ats_sum_type, ATS_2d0_2e2_2e11_2prelude_2basics_sta_2esats__list_nil_1) ;

/* external dynamic constant declarations */
ATSextern_fun(ats_void_type, atspre_assert_errmsg) (ats_bool_type, ats_ptr_type) ;
ATSextern_fun(ats_bool_type, atspre_neg_bool) (ats_bool_type) ;
ATSextern_fun(ats_int_type, atspre_add_int_int) (ats_int_type, ats_int_type) ;
ATSextern_fun(ats_bool_type, atspre_gt_int_int) (ats_int_type, ats_int_type) ;
ATSextern_fun(ats_uint_type, atspre_add_uint_uint) (ats_uint_type, ats_uint_type) ;
ATSextern_fun(ats_bool_type, atspre_lt_uint_uint) (ats_uint_type, ats_uint_type) ;
ATSextern_fun(ats_bool_type, atspre_gt_uint_uint) (ats_uint_type, ats_uint_type) ;
ATSextern_fun(ats_bool_type, atspre_eq_uint_uint) (ats_uint_type, ats_uint_type) ;
ATSextern_fun(ats_uint_type, atspre_lnot_uint) (ats_uint_type) ;
ATSextern_fun(ats_uint_type, atspre_land_uint_uint) (ats_uint_type, ats_uint_type) ;
ATSextern_fun(ats_uint_type, atspre_lor_uint_uint) (ats_uint_type, ats_uint_type) ;
ATSextern_fun(ats_uint_type, atspre_lsl_uint_int1) (ats_uint_type, ats_int_type) ;
ATSextern_fun(ats_void_type, atspre_fprint_string) (ats_ptr_type, ats_ptr_type) ;
ATSextern_fun(ats_void_type, atspre_prerr_string) (ats_ptr_type) ;
ATSextern_fun(ats_varet_type, _2home_2hwxi_2research_2Postiats_2git_2src_2pats_error_2esats__abort) () ;
ATSextern_fun(ats_void_type, _2home_2hwxi_2research_2Postiats_2git_2src_2pats_location_2esats__prerr_location) (ats_ptr_type) ;
ATSextern_val(ats_uint_type, _2home_2hwxi_2research_2Postiats_2git_2src_2pats_effect_2esats__effect_ntm) ;
ATSextern_val(ats_uint_type, _2home_2hwxi_2research_2Postiats_2git_2src_2pats_effect_2esats__effect_exn) ;
ATSextern_val(ats_uint_type, _2home_2hwxi_2research_2Postiats_2git_2src_2pats_effect_2esats__effect_ref) ;
ATSextern_val(ats_uint_type, _2home_2hwxi_2research_2Postiats_2git_2src_2pats_effect_2esats__effect_wrt) ;
ATSextern_fun(ats_ptr_type, _2home_2hwxi_2research_2Postiats_2git_2src_2pats_effect_2esats__effect_get_name) (ats_uint_type) ;
ATSextern_fun(ats_void_type, _2home_2hwxi_2research_2Postiats_2git_2src_2pats_effect_2esats__fprint_effect) (ats_ptr_type, ats_uint_type) ;
ATSextern_fun(ats_bool_type, _2home_2hwxi_2research_2Postiats_2git_2src_2pats_effect_2esats__eq_effect_effect) (ats_uint_type, ats_uint_type) ;
ATSextern_val(ats_uint_type, _2home_2hwxi_2research_2Postiats_2git_2src_2pats_effect_2esats__effset_all) ;
ATSextern_val(ats_uint_type, _2home_2hwxi_2research_2Postiats_2git_2src_2pats_effect_2esats__effset_nil) ;
ATSextern_fun(ats_uint_type, _2home_2hwxi_2research_2Postiats_2git_2src_2pats_effect_2esats__effset_sing) (ats_uint_type) ;
ATSextern_fun(ats_bool_type, _2home_2hwxi_2research_2Postiats_2git_2src_2pats_effect_2esats__effset_isnil) (ats_uint_type) ;
ATSextern_fun(ats_bool_type, _2home_2hwxi_2research_2Postiats_2git_2src_2pats_effect_2esats__effset_isall) (ats_uint_type) ;
ATSextern_fun(ats_uint_type, _2home_2hwxi_2research_2Postiats_2git_2src_2pats_effect_2esats__effset_cmpl) (ats_uint_type) ;
ATSextern_fun(ats_uint_type, _2home_2hwxi_2research_2Postiats_2git_2src_2pats_effect_2esats__effset_inter) (ats_uint_type, ats_uint_type) ;
ATSextern_fun(ats_bool_type, _2home_2hwxi_2research_2Postiats_2git_2src_2pats_effect_2esats__effset_is_inter) (ats_uint_type, ats_uint_type) ;
ATSextern_fun(ats_void_type, _2home_2hwxi_2research_2Postiats_2git_2src_2pats_effect_2esats__fprint_effset) (ats_ptr_type, ats_uint_type) ;

/* external dynamic terminating constant declarations */
#ifdef _ATS_PROOFCHECK
#endif /* _ATS_PROOFCHECK */

/* assuming abstract types */
int _2home_2hwxi_2research_2Postiats_2git_2src_2pats_effect_2esats__sasp__effset_t0ype = 0 ;
int _2home_2hwxi_2research_2Postiats_2git_2src_2pats_effect_2esats__sasp__effect_t0ype = 0 ;

/* sum constructor declarations */
/* exn constructor declarations */
/* global dynamic (non-functional) constant declarations */
ATSglobal(ats_uint_type, _2home_2hwxi_2research_2Postiats_2git_2src_2pats_effect_2esats__effect_ntm) ;
ATSglobal(ats_uint_type, _2home_2hwxi_2research_2Postiats_2git_2src_2pats_effect_2esats__effect_exn) ;
ATSglobal(ats_uint_type, _2home_2hwxi_2research_2Postiats_2git_2src_2pats_effect_2esats__effect_ref) ;
ATSglobal(ats_uint_type, _2home_2hwxi_2research_2Postiats_2git_2src_2pats_effect_2esats__effect_wrt) ;
ATSglobal(ats_ptr_type, _2home_2hwxi_2research_2Postiats_2git_2src_2pats_effect_2esats__effectlst_all) ;
ATSglobal(ats_uint_type, _2home_2hwxi_2research_2Postiats_2git_2src_2pats_effect_2esats__effset_nil) ;
ATSglobal(ats_uint_type, _2home_2hwxi_2research_2Postiats_2git_2src_2pats_effect_2esats__effset_all) ;
ATSglobal(ats_uint_type, _2home_2hwxi_2research_2Postiats_2git_2src_2pats_effect_2esats__effset_ntm) ;
ATSglobal(ats_uint_type, _2home_2hwxi_2research_2Postiats_2git_2src_2pats_effect_2esats__effset_exn) ;
ATSglobal(ats_uint_type, _2home_2hwxi_2research_2Postiats_2git_2src_2pats_effect_2esats__effset_ref) ;
ATSglobal(ats_uint_type, _2home_2hwxi_2research_2Postiats_2git_2src_2pats_effect_2esats__effset_wrt) ;

/* internal function declarations */
static
ats_void_type prerr_FILENAME_01834_ () ;
static
ats_void_type loop_21 (ats_ptr_type arg0, ats_uint_type arg1, ats_uint_type arg2, ats_uint_type arg3, ats_ref_type arg4) ;

/* partial value template declarations */
/* static temporary variable declarations */
ATSstatic (ats_ptr_type, statmp1) ;
ATSstatic (ats_ptr_type, statmp2) ;
ATSstatic (ats_ptr_type, statmp3) ;
ATSstatic (ats_uint_type, statmp9) ;
ATSstatic (ats_uint_type, statmp10) ;
ATSstatic (ats_uint_type, statmp11) ;
ATSstatic (ats_uint_type, statmp12) ;

/* external value variable declarations */

/* function implementations */

/*
// /home/hwxi/research/Postiats/git/src/pats_effect.dats: 1547(line=42, offs=28) -- 1571(line=42, offs=52)
*/
ATSstaticdec()
ats_void_type
prerr_FILENAME_01834_ () {
/* local vardec */
// ATSlocal_void (tmp0) ;

__ats_lab_prerr_FILENAME_01834_:
/* tmp0 = */ atspre_prerr_string (ATSstrcst("pats_effect")) ;
return /* (tmp0) */ ;
} /* end of [prerr_FILENAME_01834_] */

/*
// /home/hwxi/research/Postiats/git/src/pats_effect.dats: 2319(line=79, offs=18) -- 2359(line=79, offs=58)
*/
ATSglobaldec()
ats_bool_type
_2home_2hwxi_2research_2Postiats_2git_2src_2pats_effect_2esats__eq_effect_effect (ats_uint_type arg0, ats_uint_type arg1) {
/* local vardec */
ATSlocal (ats_bool_type, tmp4) ;

__ats_lab__2home_2hwxi_2research_2Postiats_2git_2src_2pats_effect_2esats__eq_effect_effect:
tmp4 = atspre_eq_uint_uint (arg0, arg1) ;
return (tmp4) ;
} /* end of [_2home_2hwxi_2research_2Postiats_2git_2src_2pats_effect_2esats__eq_effect_effect] */

/*
// /home/hwxi/research/Postiats/git/src/pats_effect.dats: 2389(line=83, offs=3) -- 2569(line=90, offs=8)
*/
ATSglobaldec()
ats_ptr_type
_2home_2hwxi_2research_2Postiats_2git_2src_2pats_effect_2esats__effect_get_name (ats_uint_type arg0) {
/* local vardec */
ATSlocal (ats_ptr_type, tmp5) ;
// ATSlocal_void (tmp6) ;

__ats_lab__2home_2hwxi_2research_2Postiats_2git_2src_2pats_effect_2esats__effect_get_name:
do {
/* branch: __ats_lab_0 */
__ats_lab_0_0:
if (ats_castfn_mac(ats_int_type, arg0) != 0) { goto __ats_lab_1_0 ; }
__ats_lab_0_1:
tmp5 = ATSstrcst("ntm") ;
break ;

/* branch: __ats_lab_1 */
__ats_lab_1_0:
if (ats_castfn_mac(ats_int_type, arg0) != 1) { goto __ats_lab_2_0 ; }
__ats_lab_1_1:
tmp5 = ATSstrcst("exn") ;
break ;

/* branch: __ats_lab_2 */
__ats_lab_2_0:
if (ats_castfn_mac(ats_int_type, arg0) != 2) { goto __ats_lab_3_0 ; }
__ats_lab_2_1:
tmp5 = ATSstrcst("ref") ;
break ;

/* branch: __ats_lab_3 */
__ats_lab_3_0:
if (ats_castfn_mac(ats_int_type, arg0) != 3) { goto __ats_lab_4_0 ; }
__ats_lab_3_1:
tmp5 = ATSstrcst("wrt") ;
break ;

/* branch: __ats_lab_4 */
__ats_lab_4_0:
__ats_lab_4_1:
/* tmp6 = */ atspre_assert_errmsg (ats_false_bool, "/home/hwxi/research/Postiats/git/src/pats_effect.dats: 2527(line=89, offs=16) -- 2543(line=89, offs=32)") ;
/* tmp5 = */ _2home_2hwxi_2research_2Postiats_2git_2src_2pats_error_2esats__abort () ;
break ;
} while (0) ;
return (tmp5) ;
} /* end of [_2home_2hwxi_2research_2Postiats_2git_2src_2pats_effect_2esats__effect_get_name] */

/*
// /home/hwxi/research/Postiats/git/src/pats_effect.dats: 2641(line=95, offs=3) -- 2692(line=95, offs=54)
*/
ATSglobaldec()
ats_void_type
_2home_2hwxi_2research_2Postiats_2git_2src_2pats_effect_2esats__fprint_effect (ats_ptr_type arg0, ats_uint_type arg1) {
/* local vardec */
// ATSlocal_void (tmp7) ;
ATSlocal (ats_ptr_type, tmp8) ;

__ats_lab__2home_2hwxi_2research_2Postiats_2git_2src_2pats_effect_2esats__fprint_effect:
tmp8 = _2home_2hwxi_2research_2Postiats_2git_2src_2pats_effect_2esats__effect_get_name (arg1) ;
/* tmp7 = */ atspre_fprint_string (arg0, tmp8) ;
return /* (tmp7) */ ;
} /* end of [_2home_2hwxi_2research_2Postiats_2git_2src_2pats_effect_2esats__fprint_effect] */

/*
// /home/hwxi/research/Postiats/git/src/pats_effect.dats: 3083(line=112, offs=23) -- 3097(line=112, offs=37)
*/
ATSglobaldec()
ats_uint_type
_2home_2hwxi_2research_2Postiats_2git_2src_2pats_effect_2esats__effset_sing (ats_uint_type arg0) {
/* local vardec */
ATSlocal (ats_uint_type, tmp13) ;

__ats_lab__2home_2hwxi_2research_2Postiats_2git_2src_2pats_effect_2esats__effset_sing:
tmp13 = atspre_lsl_uint_uint (1u, arg0) ;
return (tmp13) ;
} /* end of [_2home_2hwxi_2research_2Postiats_2git_2src_2pats_effect_2esats__effset_sing] */

/*
// /home/hwxi/research/Postiats/git/src/pats_effect.dats: 3129(line=114, offs=28) -- 3169(line=114, offs=68)
*/
ATSglobaldec()
ats_bool_type
_2home_2hwxi_2research_2Postiats_2git_2src_2pats_effect_2esats__eq_effset_effset (ats_uint_type arg0, ats_uint_type arg1) {
/* local vardec */
ATSlocal (ats_bool_type, tmp14) ;

__ats_lab__2home_2hwxi_2research_2Postiats_2git_2src_2pats_effect_2esats__eq_effset_effset:
tmp14 = atspre_eq_uint_uint (arg0, arg1) ;
return (tmp14) ;
} /* end of [_2home_2hwxi_2research_2Postiats_2git_2src_2pats_effect_2esats__eq_effset_effset] */

/*
// /home/hwxi/research/Postiats/git/src/pats_effect.dats: 3215(line=118, offs=22) -- 3240(line=118, offs=47)
*/
ATSglobaldec()
ats_uint_type
_2home_2hwxi_2research_2Postiats_2git_2src_2pats_effect_2esats__effset_add (ats_uint_type arg0, ats_uint_type arg1) {
/* local vardec */
ATSlocal (ats_uint_type, tmp15) ;
ATSlocal (ats_uint_type, tmp16) ;

__ats_lab__2home_2hwxi_2research_2Postiats_2git_2src_2pats_effect_2esats__effset_add:
tmp16 = atspre_lsl_uint_uint (1u, arg1) ;
tmp15 = atspre_lor_uint_uint (arg0, tmp16) ;
return (tmp15) ;
} /* end of [_2home_2hwxi_2research_2Postiats_2git_2src_2pats_effect_2esats__effset_add] */

/*
// /home/hwxi/research/Postiats/git/src/pats_effect.dats: 3263(line=119, offs=22) -- 3290(line=119, offs=49)
*/
ATSglobaldec()
ats_uint_type
_2home_2hwxi_2research_2Postiats_2git_2src_2pats_effect_2esats__effset_del (ats_uint_type arg0, ats_uint_type arg1) {
/* local vardec */
ATSlocal (ats_uint_type, tmp17) ;
ATSlocal (ats_uint_type, tmp18) ;
ATSlocal (ats_uint_type, tmp19) ;

__ats_lab__2home_2hwxi_2research_2Postiats_2git_2src_2pats_effect_2esats__effset_del:
tmp19 = atspre_lsl_uint_uint (1u, arg1) ;
tmp18 = atspre_lnot_uint (tmp19) ;
tmp17 = atspre_land_uint_uint (arg0, tmp18) ;
return (tmp17) ;
} /* end of [_2home_2hwxi_2research_2Postiats_2git_2src_2pats_effect_2esats__effset_del] */

/*
// /home/hwxi/research/Postiats/git/src/pats_effect.dats: 3337(line=124, offs=14) -- 3377(line=124, offs=54)
*/
ATSglobaldec()
ats_bool_type
_2home_2hwxi_2research_2Postiats_2git_2src_2pats_effect_2esats__effset_isnil (ats_uint_type arg0) {
/* local vardec */
ATSlocal (ats_bool_type, tmp20) ;

__ats_lab__2home_2hwxi_2research_2Postiats_2git_2src_2pats_effect_2esats__effset_isnil:
tmp20 = _2home_2hwxi_2research_2Postiats_2git_2src_2pats_effect_2esats__eq_effect_effect (arg0, _2home_2hwxi_2research_2Postiats_2git_2src_2pats_effect_2esats__effset_nil) ;
return (tmp20) ;
} /* end of [_2home_2hwxi_2research_2Postiats_2git_2src_2pats_effect_2esats__effset_isnil] */

/*
// /home/hwxi/research/Postiats/git/src/pats_effect.dats: 3401(line=126, offs=14) -- 3441(line=126, offs=54)
*/
ATSglobaldec()
ats_bool_type
_2home_2hwxi_2research_2Postiats_2git_2src_2pats_effect_2esats__effset_isall (ats_uint_type arg0) {
/* local vardec */
ATSlocal (ats_bool_type, tmp21) ;

__ats_lab__2home_2hwxi_2research_2Postiats_2git_2src_2pats_effect_2esats__effset_isall:
tmp21 = _2home_2hwxi_2research_2Postiats_2git_2src_2pats_effect_2esats__eq_effect_effect (arg0, _2home_2hwxi_2research_2Postiats_2git_2src_2pats_effect_2esats__effset_all) ;
return (tmp21) ;
} /* end of [_2home_2hwxi_2research_2Postiats_2git_2src_2pats_effect_2esats__effset_isall] */

/*
// /home/hwxi/research/Postiats/git/src/pats_effect.dats: 3465(line=128, offs=14) -- 3536(line=129, offs=55)
*/
ATSglobaldec()
ats_bool_type
_2home_2hwxi_2research_2Postiats_2git_2src_2pats_effect_2esats__effset_isfin (ats_uint_type arg0) {
/* local vardec */
ATSlocal (ats_bool_type, tmp22) ;
ATSlocal (ats_uint_type, tmp23) ;
ATSlocal (ats_uint_type, tmp24) ;

__ats_lab__2home_2hwxi_2research_2Postiats_2git_2src_2pats_effect_2esats__effset_isfin:
tmp24 = atspre_lsl_uint_int1 (1u, 4) ;
tmp23 = atspre_land_uint_uint (arg0, tmp24) ;
tmp22 = atspre_eq_uint_uint (tmp23, 0u) ;
return (tmp22) ;
} /* end of [_2home_2hwxi_2research_2Postiats_2git_2src_2pats_effect_2esats__effset_isfin] */

/*
// /home/hwxi/research/Postiats/git/src/pats_effect.dats: 3585(line=132, offs=14) -- 3658(line=133, offs=55)
*/
ATSglobaldec()
ats_bool_type
_2home_2hwxi_2research_2Postiats_2git_2src_2pats_effect_2esats__effset_iscof (ats_uint_type arg0) {
/* local vardec */
ATSlocal (ats_bool_type, tmp25) ;
ATSlocal (ats_uint_type, tmp26) ;
ATSlocal (ats_uint_type, tmp27) ;

__ats_lab__2home_2hwxi_2research_2Postiats_2git_2src_2pats_effect_2esats__effset_iscof:
tmp27 = atspre_lsl_uint_int1 (1u, 4) ;
tmp26 = atspre_land_uint_uint (arg0, tmp27) ;
tmp25 = atspre_lt_uint_uint (tmp26, 0u) ;
return (tmp25) ;
} /* end of [_2home_2hwxi_2research_2Postiats_2git_2src_2pats_effect_2esats__effset_iscof] */

/*
// /home/hwxi/research/Postiats/git/src/pats_effect.dats: 3729(line=139, offs=14) -- 3763(line=139, offs=48)
*/
ATSglobaldec()
ats_bool_type
_2home_2hwxi_2research_2Postiats_2git_2src_2pats_effect_2esats__effset_ismem (ats_uint_type arg0, ats_uint_type arg1) {
/* local vardec */
ATSlocal (ats_bool_type, tmp28) ;
ATSlocal (ats_uint_type, tmp29) ;
ATSlocal (ats_uint_type, tmp30) ;

__ats_lab__2home_2hwxi_2research_2Postiats_2git_2src_2pats_effect_2esats__effset_ismem:
tmp30 = atspre_lsl_uint_uint (1u, arg1) ;
tmp29 = atspre_land_uint_uint (arg0, tmp30) ;
tmp28 = atspre_gt_uint_uint (tmp29, 0u) ;
return (tmp28) ;
} /* end of [_2home_2hwxi_2research_2Postiats_2git_2src_2pats_effect_2esats__effset_ismem] */

/*
// /home/hwxi/research/Postiats/git/src/pats_effect.dats: 3791(line=143, offs=3) -- 3836(line=143, offs=48)
*/
ATSglobaldec()
ats_bool_type
_2home_2hwxi_2research_2Postiats_2git_2src_2pats_effect_2esats__effset_supset (ats_uint_type arg0, ats_uint_type arg1) {
/* local vardec */
ATSlocal (ats_bool_type, tmp31) ;
ATSlocal (ats_uint_type, tmp32) ;
ATSlocal (ats_uint_type, tmp33) ;

__ats_lab__2home_2hwxi_2research_2Postiats_2git_2src_2pats_effect_2esats__effset_supset:
tmp33 = atspre_lnot_uint (arg0) ;
tmp32 = atspre_land_uint_uint (tmp33, arg1) ;
tmp31 = atspre_eq_uint_uint (tmp32, 0u) ;
return (tmp31) ;
} /* end of [_2home_2hwxi_2research_2Postiats_2git_2src_2pats_effect_2esats__effset_supset] */

/*
// /home/hwxi/research/Postiats/git/src/pats_effect.dats: 3890(line=148, offs=3) -- 3935(line=148, offs=48)
*/
ATSglobaldec()
ats_bool_type
_2home_2hwxi_2research_2Postiats_2git_2src_2pats_effect_2esats__effset_subset (ats_uint_type arg0, ats_uint_type arg1) {
/* local vardec */
ATSlocal (ats_bool_type, tmp34) ;
ATSlocal (ats_uint_type, tmp35) ;
ATSlocal (ats_uint_type, tmp36) ;

__ats_lab__2home_2hwxi_2research_2Postiats_2git_2src_2pats_effect_2esats__effset_subset:
tmp36 = atspre_lnot_uint (arg1) ;
tmp35 = atspre_land_uint_uint (arg0, tmp36) ;
tmp34 = atspre_eq_uint_uint (tmp35, 0u) ;
return (tmp34) ;
} /* end of [_2home_2hwxi_2research_2Postiats_2git_2src_2pats_effect_2esats__effset_subset] */

/*
// /home/hwxi/research/Postiats/git/src/pats_effect.dats: 3989(line=152, offs=17) -- 4042(line=153, offs=41)
*/
ATSglobaldec()
ats_bool_type
_2home_2hwxi_2research_2Postiats_2git_2src_2pats_effect_2esats__effset_is_inter (ats_uint_type arg0, ats_uint_type arg1) {
/* local vardec */
ATSlocal (ats_bool_type, tmp37) ;
ATSlocal (ats_bool_type, tmp38) ;
ATSlocal (ats_uint_type, tmp39) ;

__ats_lab__2home_2hwxi_2research_2Postiats_2git_2src_2pats_effect_2esats__effset_is_inter:
tmp39 = _2home_2hwxi_2research_2Postiats_2git_2src_2pats_effect_2esats__effset_inter (arg0, arg1) ;
tmp38 = _2home_2hwxi_2research_2Postiats_2git_2src_2pats_effect_2esats__effset_isnil (tmp39) ;
tmp37 = atspre_neg_bool (tmp38) ;
return (tmp37) ;
} /* end of [_2home_2hwxi_2research_2Postiats_2git_2src_2pats_effect_2esats__effset_is_inter] */

/*
// /home/hwxi/research/Postiats/git/src/pats_effect.dats: 4095(line=157, offs=13) -- 4115(line=157, offs=33)
*/
ATSglobaldec()
ats_uint_type
_2home_2hwxi_2research_2Postiats_2git_2src_2pats_effect_2esats__effset_cmpl (ats_uint_type arg0) {
/* local vardec */
ATSlocal (ats_uint_type, tmp40) ;

__ats_lab__2home_2hwxi_2research_2Postiats_2git_2src_2pats_effect_2esats__effset_cmpl:
tmp40 = atspre_lnot_uint (arg0) ;
return (tmp40) ;
} /* end of [_2home_2hwxi_2research_2Postiats_2git_2src_2pats_effect_2esats__effset_cmpl] */

/*
// /home/hwxi/research/Postiats/git/src/pats_effect.dats: 4142(line=161, offs=3) -- 4181(line=161, offs=42)
*/
ATSglobaldec()
ats_uint_type
_2home_2hwxi_2research_2Postiats_2git_2src_2pats_effect_2esats__effset_diff (ats_uint_type arg0, ats_uint_type arg1) {
/* local vardec */
ATSlocal (ats_uint_type, tmp41) ;
ATSlocal (ats_uint_type, tmp42) ;

__ats_lab__2home_2hwxi_2research_2Postiats_2git_2src_2pats_effect_2esats__effset_diff:
tmp42 = _2home_2hwxi_2research_2Postiats_2git_2src_2pats_effect_2esats__effset_cmpl (arg1) ;
tmp41 = atspre_land_uint_uint (arg0, tmp42) ;
return (tmp41) ;
} /* end of [_2home_2hwxi_2research_2Postiats_2git_2src_2pats_effect_2esats__effset_diff] */

/*
// /home/hwxi/research/Postiats/git/src/pats_effect.dats: 4231(line=165, offs=14) -- 4256(line=165, offs=39)
*/
ATSglobaldec()
ats_uint_type
_2home_2hwxi_2research_2Postiats_2git_2src_2pats_effect_2esats__effset_inter (ats_uint_type arg0, ats_uint_type arg1) {
/* local vardec */
ATSlocal (ats_uint_type, tmp43) ;

__ats_lab__2home_2hwxi_2research_2Postiats_2git_2src_2pats_effect_2esats__effset_inter:
tmp43 = atspre_land_uint_uint (arg0, arg1) ;
return (tmp43) ;
} /* end of [_2home_2hwxi_2research_2Postiats_2git_2src_2pats_effect_2esats__effset_inter] */

/*
// /home/hwxi/research/Postiats/git/src/pats_effect.dats: 4281(line=168, offs=14) -- 4308(line=168, offs=41)
*/
ATSglobaldec()
ats_uint_type
_2home_2hwxi_2research_2Postiats_2git_2src_2pats_effect_2esats__effset_union (ats_uint_type arg0, ats_uint_type arg1) {
/* local vardec */
ATSlocal (ats_uint_type, tmp44) ;

__ats_lab__2home_2hwxi_2research_2Postiats_2git_2src_2pats_effect_2esats__effset_union:
tmp44 = atspre_lor_uint_uint (arg0, arg1) ;
return (tmp44) ;
} /* end of [_2home_2hwxi_2research_2Postiats_2git_2src_2pats_effect_2esats__effset_union] */

/*
// /home/hwxi/research/Postiats/git/src/pats_effect.dats: 4382(line=176, offs=5) -- 4776(line=194, offs=4)
*/
ATSstaticdec()
ats_void_type
loop_21 (ats_ptr_type arg0, ats_uint_type arg1, ats_uint_type arg2, ats_uint_type arg3, ats_ref_type arg4) {
/* local vardec */
// ATSlocal_void (tmp46) ;
ATSlocal (ats_bool_type, tmp47) ;
ATSlocal (ats_bool_type, tmp48) ;
ATSlocal (ats_uint_type, tmp49) ;
// ATSlocal_void (tmp50) ;
// ATSlocal_void (tmp51) ;
ATSlocal (ats_bool_type, tmp52) ;
ATSlocal (ats_int_type, tmp53) ;
ATSlocal (ats_uint_type, tmp54) ;

__ats_lab_loop_21:
tmp47 = atspre_lt_uint_uint (arg3, arg2) ;
if (tmp47) {
tmp49 = _2home_2hwxi_2research_2Postiats_2git_2src_2pats_effect_2esats__effset_sing (arg3) ;
tmp48 = _2home_2hwxi_2research_2Postiats_2git_2src_2pats_effect_2esats__effset_is_inter (arg1, tmp49) ;
if (tmp48) {
tmp52 = atspre_gt_int_int (ats_ptrget_mac(ats_int_type, arg4), 0) ;
if (tmp52) {
/* tmp51 = */ atspre_fprint_string (arg0, ATSstrcst(", ")) ;
} else {
/* empty */
} /* end of [if] */
tmp53 = atspre_add_int_int (ats_ptrget_mac(ats_int_type, arg4), 1) ;
ats_ptrget_mac(ats_int_type, arg4) = tmp53 ;
/* tmp50 = */ _2home_2hwxi_2research_2Postiats_2git_2src_2pats_effect_2esats__fprint_effect (arg0, arg3) ;
} else {
/* empty */
} /* end of [if] */
tmp54 = atspre_add_uint_uint (arg3, 1u) ;
arg0 = arg0 ;
arg1 = arg1 ;
arg2 = arg2 ;
arg3 = tmp54 ;
arg4 = arg4 ;
goto __ats_lab_loop_21 ; // tail call
} else {
/* empty */
} /* end of [if] */
return /* (tmp46) */ ;
} /* end of [loop_21] */

/*
// /home/hwxi/research/Postiats/git/src/pats_effect.dats: 4358(line=174, offs=3) -- 5102(line=211, offs=4)
*/
ATSglobaldec()
ats_void_type
_2home_2hwxi_2research_2Postiats_2git_2src_2pats_effect_2esats__fprint_effset (ats_ptr_type arg0, ats_uint_type arg1) {
/* local vardec */
// ATSlocal_void (tmp45) ;
ATSlocal (ats_int_type, tmp55) ;
ATSlocal (ats_bool_type, tmp56) ;
ATSlocal (ats_bool_type, tmp57) ;
// ATSlocal_void (tmp58) ;
// ATSlocal_void (tmp59) ;

__ats_lab__2home_2hwxi_2research_2Postiats_2git_2src_2pats_effect_2esats__fprint_effset:
/* ats_int_type tmp55 ; */
tmp55 = 0 ;
do {
/* branch: __ats_lab_5 */
__ats_lab_5_0:
__ats_lab_5_1:
tmp56 = _2home_2hwxi_2research_2Postiats_2git_2src_2pats_effect_2esats__effset_isnil (arg1) ;
if (!tmp56) { goto __ats_lab_6_1 ; }
/* tmp45 = */ atspre_fprint_string (arg0, ATSstrcst("0")) ;
break ;

/* branch: __ats_lab_6 */
__ats_lab_6_0:
__ats_lab_6_1:
tmp57 = _2home_2hwxi_2research_2Postiats_2git_2src_2pats_effect_2esats__effset_isall (arg1) ;
if (!tmp57) { goto __ats_lab_7_1 ; }
/* tmp45 = */ atspre_fprint_string (arg0, ATSstrcst("1")) ;
break ;

/* branch: __ats_lab_7 */
__ats_lab_7_0:
__ats_lab_7_1:
/* tmp58 = */ atspre_fprint_string (arg0, ATSstrcst("[")) ;
/* tmp59 = */ loop_21 (arg0, arg1, ats_castfn_mac(ats_uint_type, 4), 0u, (&tmp55)) ;
/* tmp45 = */ atspre_fprint_string (arg0, ATSstrcst("]")) ;
break ;
} while (0) ;
return /* (tmp45) */ ;
} /* end of [_2home_2hwxi_2research_2Postiats_2git_2src_2pats_effect_2esats__fprint_effset] */

/*
// /home/hwxi/research/Postiats/git/src/pats_effect.dats: 5153(line=214, offs=14) -- 5188(line=214, offs=49)
*/
ATSglobaldec()
ats_void_type
_2home_2hwxi_2research_2Postiats_2git_2src_2pats_effect_2esats__print_effset (ats_uint_type arg0) {
/* local vardec */
// ATSlocal_void (tmp60) ;

__ats_lab__2home_2hwxi_2research_2Postiats_2git_2src_2pats_effect_2esats__print_effset:
/* tmp60 = */ _2home_2hwxi_2research_2Postiats_2git_2src_2pats_effect_2esats__fprint_effset (stdout, arg0) ;
return /* (tmp60) */ ;
} /* end of [_2home_2hwxi_2research_2Postiats_2git_2src_2pats_effect_2esats__print_effset] */

/*
// /home/hwxi/research/Postiats/git/src/pats_effect.dats: 5212(line=216, offs=14) -- 5247(line=216, offs=49)
*/
ATSglobaldec()
ats_void_type
_2home_2hwxi_2research_2Postiats_2git_2src_2pats_effect_2esats__prerr_effset (ats_uint_type arg0) {
/* local vardec */
// ATSlocal_void (tmp61) ;

__ats_lab__2home_2hwxi_2research_2Postiats_2git_2src_2pats_effect_2esats__prerr_effset:
/* tmp61 = */ _2home_2hwxi_2research_2Postiats_2git_2src_2pats_effect_2esats__fprint_effset (stderr, arg0) ;
return /* (tmp61) */ ;
} /* end of [_2home_2hwxi_2research_2Postiats_2git_2src_2pats_effect_2esats__prerr_effset] */

/* static load function */

extern ats_void_type _2home_2hwxi_2research_2Postiats_2git_2src_2pats_error_2esats__staload (void) ;
extern ats_void_type _2home_2hwxi_2research_2Postiats_2git_2src_2pats_errmsg_2esats__staload (void) ;
extern ats_void_type _2home_2hwxi_2research_2Postiats_2git_2src_2pats_errmsg_2edats__staload (void) ;
extern ats_void_type _2home_2hwxi_2research_2Postiats_2git_2src_2pats_effect_2esats__staload (void) ;

ats_void_type
_2home_2hwxi_2research_2Postiats_2git_2src_2pats_effect_2edats__staload () {
static int _2home_2hwxi_2research_2Postiats_2git_2src_2pats_effect_2edats__staload_flag = 0 ;
if (_2home_2hwxi_2research_2Postiats_2git_2src_2pats_effect_2edats__staload_flag) return ;
_2home_2hwxi_2research_2Postiats_2git_2src_2pats_effect_2edats__staload_flag = 1 ;

_2home_2hwxi_2research_2Postiats_2git_2src_2pats_error_2esats__staload () ;
_2home_2hwxi_2research_2Postiats_2git_2src_2pats_errmsg_2esats__staload () ;
_2home_2hwxi_2research_2Postiats_2git_2src_2pats_errmsg_2edats__staload () ;
_2home_2hwxi_2research_2Postiats_2git_2src_2pats_effect_2esats__staload () ;

return ;
} /* staload function */

/* dynamic load function */

// dynload flag declaration
extern ats_int_type _2home_2hwxi_2research_2Postiats_2git_2src_2pats_effect_2edats__dynload_flag ;

ats_void_type
_2home_2hwxi_2research_2Postiats_2git_2src_2pats_effect_2edats__dynload () {
_2home_2hwxi_2research_2Postiats_2git_2src_2pats_effect_2edats__dynload_flag = 1 ;
_2home_2hwxi_2research_2Postiats_2git_2src_2pats_effect_2edats__staload () ;

#ifdef _ATS_PROOFCHECK
#endif /* _ATS_PROOFCHECK */

/* marking static variables for GC */
ATS_GC_MARKROOT(&statmp1, sizeof(ats_ptr_type)) ;
ATS_GC_MARKROOT(&statmp2, sizeof(ats_ptr_type)) ;
ATS_GC_MARKROOT(&statmp3, sizeof(ats_ptr_type)) ;
ATS_GC_MARKROOT(&statmp9, sizeof(ats_uint_type)) ;
ATS_GC_MARKROOT(&statmp10, sizeof(ats_uint_type)) ;
ATS_GC_MARKROOT(&statmp11, sizeof(ats_uint_type)) ;
ATS_GC_MARKROOT(&statmp12, sizeof(ats_uint_type)) ;

/* marking external values for GC */

/* code for dynamic loading */
ATS_GC_MARKROOT(&_2home_2hwxi_2research_2Postiats_2git_2src_2pats_effect_2esats__effect_ntm, sizeof(ats_uint_type)) ;
_2home_2hwxi_2research_2Postiats_2git_2src_2pats_effect_2esats__effect_ntm = ats_castfn_mac(ats_uint_type, 0) ;
ATS_GC_MARKROOT(&_2home_2hwxi_2research_2Postiats_2git_2src_2pats_effect_2esats__effect_exn, sizeof(ats_uint_type)) ;
_2home_2hwxi_2research_2Postiats_2git_2src_2pats_effect_2esats__effect_exn = ats_castfn_mac(ats_uint_type, 1) ;
ATS_GC_MARKROOT(&_2home_2hwxi_2research_2Postiats_2git_2src_2pats_effect_2esats__effect_ref, sizeof(ats_uint_type)) ;
_2home_2hwxi_2research_2Postiats_2git_2src_2pats_effect_2esats__effect_ref = ats_castfn_mac(ats_uint_type, 2) ;
ATS_GC_MARKROOT(&_2home_2hwxi_2research_2Postiats_2git_2src_2pats_effect_2esats__effect_wrt, sizeof(ats_uint_type)) ;
_2home_2hwxi_2research_2Postiats_2git_2src_2pats_effect_2esats__effect_wrt = ats_castfn_mac(ats_uint_type, 3) ;
statmp1 = ATS_MALLOC(sizeof(anairiats_sum_0)) ;
ats_selptrset_mac(anairiats_sum_0, statmp1, atslab_0, _2home_2hwxi_2research_2Postiats_2git_2src_2pats_effect_2esats__effect_ntm) ;
statmp2 = &ats_selptr_mac(ats_castptr_mac(anairiats_sum_0, statmp1), atslab_1) ;
statmp3 = ATS_MALLOC(sizeof(anairiats_sum_0)) ;
ats_selptrset_mac(anairiats_sum_0, statmp3, atslab_0, _2home_2hwxi_2research_2Postiats_2git_2src_2pats_effect_2esats__effect_exn) ;
ats_ptrget_mac(ats_ptr_type, statmp2) = statmp3 ;
statmp2 = &ats_selptr_mac(ats_castptr_mac(anairiats_sum_0, statmp3), atslab_1) ;
statmp3 = ATS_MALLOC(sizeof(anairiats_sum_0)) ;
ats_selptrset_mac(anairiats_sum_0, statmp3, atslab_0, _2home_2hwxi_2research_2Postiats_2git_2src_2pats_effect_2esats__effect_ref) ;
ats_ptrget_mac(ats_ptr_type, statmp2) = statmp3 ;
statmp2 = &ats_selptr_mac(ats_castptr_mac(anairiats_sum_0, statmp3), atslab_1) ;
statmp3 = ATS_MALLOC(sizeof(anairiats_sum_0)) ;
ats_selptrset_mac(anairiats_sum_0, statmp3, atslab_0, _2home_2hwxi_2research_2Postiats_2git_2src_2pats_effect_2esats__effect_wrt) ;
ats_ptrget_mac(ats_ptr_type, statmp2) = statmp3 ;
statmp2 = &ats_selptr_mac(ats_castptr_mac(anairiats_sum_0, statmp3), atslab_1) ;
statmp3 = (ats_sum_ptr_type)0 ;
ats_ptrget_mac(ats_ptr_type, statmp2) = statmp3 ;
ATS_GC_MARKROOT(&_2home_2hwxi_2research_2Postiats_2git_2src_2pats_effect_2esats__effectlst_all, sizeof(ats_ptr_type)) ;
_2home_2hwxi_2research_2Postiats_2git_2src_2pats_effect_2esats__effectlst_all = statmp1 ;
ATS_GC_MARKROOT(&_2home_2hwxi_2research_2Postiats_2git_2src_2pats_effect_2esats__effset_nil, sizeof(ats_uint_type)) ;
_2home_2hwxi_2research_2Postiats_2git_2src_2pats_effect_2esats__effset_nil = ats_castfn_mac(ats_uint_type, 0) ;
ATS_GC_MARKROOT(&_2home_2hwxi_2research_2Postiats_2git_2src_2pats_effect_2esats__effset_all, sizeof(ats_uint_type)) ;
_2home_2hwxi_2research_2Postiats_2git_2src_2pats_effect_2esats__effset_all = ats_castfn_mac(ats_uint_type, -1) ;
statmp9 = atspre_lsl_uint_uint (1u, _2home_2hwxi_2research_2Postiats_2git_2src_2pats_effect_2esats__effect_ntm) ;
ATS_GC_MARKROOT(&_2home_2hwxi_2research_2Postiats_2git_2src_2pats_effect_2esats__effset_ntm, sizeof(ats_uint_type)) ;
_2home_2hwxi_2research_2Postiats_2git_2src_2pats_effect_2esats__effset_ntm = statmp9 ;
statmp10 = atspre_lsl_uint_uint (1u, _2home_2hwxi_2research_2Postiats_2git_2src_2pats_effect_2esats__effect_exn) ;
ATS_GC_MARKROOT(&_2home_2hwxi_2research_2Postiats_2git_2src_2pats_effect_2esats__effset_exn, sizeof(ats_uint_type)) ;
_2home_2hwxi_2research_2Postiats_2git_2src_2pats_effect_2esats__effset_exn = statmp10 ;
statmp11 = atspre_lsl_uint_uint (1u, _2home_2hwxi_2research_2Postiats_2git_2src_2pats_effect_2esats__effect_ref) ;
ATS_GC_MARKROOT(&_2home_2hwxi_2research_2Postiats_2git_2src_2pats_effect_2esats__effset_ref, sizeof(ats_uint_type)) ;
_2home_2hwxi_2research_2Postiats_2git_2src_2pats_effect_2esats__effset_ref = statmp11 ;
statmp12 = atspre_lsl_uint_uint (1u, _2home_2hwxi_2research_2Postiats_2git_2src_2pats_effect_2esats__effect_wrt) ;
ATS_GC_MARKROOT(&_2home_2hwxi_2research_2Postiats_2git_2src_2pats_effect_2esats__effset_wrt, sizeof(ats_uint_type)) ;
_2home_2hwxi_2research_2Postiats_2git_2src_2pats_effect_2esats__effset_wrt = statmp12 ;
return ;
} /* end of [dynload function] */

/* external codes at mid */
/* external codes at bot */

/* ****** ****** */

/* end of [pats_effect_dats.c] */
