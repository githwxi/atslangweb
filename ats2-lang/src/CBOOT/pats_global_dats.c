/*
**
** The C code is generated by ATS/Anairiats
** The compilation time is: 2015-2-22: 16h:35m
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
typedef
struct {
ats_ptr_type atslab_3 ;
ats_ptr_type atslab_4 ;
} anairiats_rec_0 ;

typedef struct {
ats_ptr_type atslab_0 ;
ats_ptr_type atslab_1 ;
} anairiats_sum_1 ;

/* external typedefs */
/* external dynamic constructor declarations */
ATSextern_val(ats_sum_type, ATS_2d0_2e2_2e12_2prelude_2basics_sta_2esats__list_cons_0) ;
ATSextern_val(ats_sum_type, ATS_2d0_2e2_2e12_2prelude_2basics_sta_2esats__list_nil_1) ;

/* external dynamic constant declarations */
ATSextern_fun(ats_void_type, atspre_vbox_make_view_ptr) (ats_ptr_type) ;
ATSextern_fun(ats_bool_type, atspre_lte_int_int) (ats_int_type, ats_int_type) ;
ATSextern_fun(ats_int_type, atspre_isucc) (ats_int_type) ;
ATSextern_fun(ats_int_type, atspre_iadd) (ats_int_type, ats_int_type) ;
ATSextern_fun(ats_int_type, atspre_isub) (ats_int_type, ats_int_type) ;
ATSextern_fun(ats_int_type, atspre_idiv) (ats_int_type, ats_int_type) ;
ATSextern_fun(ats_bool_type, atspre_ilt) (ats_int_type, ats_int_type) ;
ATSextern_fun(ats_bool_type, atspre_igt) (ats_int_type, ats_int_type) ;
ATSextern_fun(ats_bool_type, atspre_igte) (ats_int_type, ats_int_type) ;
ATSextern_fun(ats_size_type, atspre_size1_of_int1) (ats_int_type) ;
ATSextern_fun(ats_size_type, atspre_add_size1_int1) (ats_size_type, ats_int_type) ;
ATSextern_fun(ats_size_type, atspre_sub_size1_int1) (ats_size_type, ats_int_type) ;
ATSextern_fun(ats_size_type, atspre_mul2_size1_size1) (ats_size_type, ats_size_type) ;
ATSextern_fun(ats_bool_type, atspre_lt_size1_size1) (ats_size_type, ats_size_type) ;
ATSextern_fun(ats_bool_type, atspre_gt_size1_int1) (ats_size_type, ats_int_type) ;
ATSextern_fun(ats_bool_type, atspre_neq_size1_size1) (ats_size_type, ats_size_type) ;
ATSextern_fun(ats_ptr_type, atspre_ptr_alloc_tsz) (ats_size_type) ;
ATSextern_fun(ats_void_type, atspre_ptr_zero_tsz) (ats_ref_type, ats_size_type) ;
ATSextern_fun(ats_ptr_type, atspre_ref_make_elt_tsz) (ats_ref_type, ats_size_type) ;
ATSextern_val(ats_ptr_type, atspre_stropt_none) ;
ATSextern_fun(ats_ptr_type, ListSubscriptException_make) () ;
ATSextern_fun(ats_ptr_type, atspre_array_ptr_alloc_tsz) (ats_size_type, ats_size_type) ;
ATSextern_fun(ats_void_type, atspre_array_ptr_free) (ats_ptr_type) ;
ATSextern_fun(ats_void_type, atspre_array_ptr_initialize_funenv_tsz) (ats_ref_type, ats_size_type, ats_ptr_type, ats_size_type, ats_ptr_type) ;
ATSextern_fun(ats_void_type, atspre_array_ptr_initialize_cloenv_tsz) (ats_ref_type, ats_size_type, ats_ref_type, ats_size_type, ats_ptr_type) ;
ATSextern_fun(ats_ptr_type, atspre_array_ptr_split_tsz) (ats_ptr_type, ats_size_type, ats_size_type) ;
ATSextern_fun(ats_ptr_type, atspre_array_ptr_takeout_tsz) (ats_ptr_type, ats_size_type, ats_size_type) ;
ATSextern_fun(anairiats_rec_0, atspre_array_ptr_takeout2_tsz) (ats_ptr_type, ats_size_type, ats_size_type, ats_size_type) ;
ATSextern_fun(ats_void_type, atspre_array_ptr_foreach_funenv_tsz) (ats_ref_type, ats_ptr_type, ats_size_type, ats_size_type, ats_ptr_type) ;
ATSextern_fun(ats_void_type, atspre_array_ptr_iforeach_funenv_tsz) (ats_ref_type, ats_ptr_type, ats_size_type, ats_size_type, ats_ptr_type) ;
ATSextern_fun(ats_ptr_type, atspre_array2_ptr_takeout_tsz) (ats_ptr_type, ats_size_type, ats_size_type, ats_size_type) ;
ATSextern_fun(ats_void_type, atslib_qsort) (ats_ref_type, ats_size_type, ats_size_type, ats_ptr_type) ;
ATSextern_fun(ats_void_type, _2home_2hwxi_2research_2Postiats_2git_2src_2pats_global_2esats__the_PACKNAME_set) (ats_ptr_type) ;

/* external dynamic terminating constant declarations */
#ifdef _ATS_PROOFCHECK
extern
ats_void_type ATS_2d0_2e2_2e12_2prelude_2SATS_2list_2esats__list_length_is_nonnegative_prfck () ;
extern
ats_void_type ATS_2d0_2e2_2e12_2prelude_2SATS_2list_vt_2esats__list_vt_length_is_nonnegative_prfck () ;
extern
ats_void_type ATS_2d0_2e2_2e12_2prelude_2SATS_2array_2esats__array_v_takeout2_prfck () ;
extern
ats_void_type ATS_2d0_2e2_2e12_2prelude_2DATS_2list_2edats____assert_prfck () ;
extern
ats_void_type ATS_2d0_2e2_2e12_2prelude_2DATS_2list_2edats____assert_prfck () ;
extern
ats_void_type ATS_2d0_2e2_2e12_2prelude_2DATS_2list_2edats____assert_prfck () ;
extern
ats_void_type ATS_2d0_2e2_2e12_2prelude_2DATS_2list_2edats____assert_prfck () ;
extern
ats_void_type ATS_2d0_2e2_2e12_2prelude_2DATS_2list_2edats____assert_prfck () ;
extern
ats_void_type ATS_2d0_2e2_2e12_2prelude_2DATS_2list_2edats____assert_prfck () ;
extern
ats_void_type ATS_2d0_2e2_2e12_2prelude_2DATS_2list_2edats____assert_prfck () ;
extern
ats_void_type ATS_2d0_2e2_2e12_2prelude_2DATS_2list_2edats____assert_prfck () ;
extern
ats_void_type ATS_2d0_2e2_2e12_2prelude_2DATS_2list_2edats____assert_prfck () ;
extern
ats_void_type ATS_2d0_2e2_2e12_2prelude_2DATS_2list_2edats____assert_prfck () ;
extern
ats_void_type ATS_2d0_2e2_2e12_2prelude_2DATS_2list_2edats____assert_prfck () ;
extern
ats_void_type ATS_2d0_2e2_2e12_2prelude_2DATS_2list_2edats____assert_prfck () ;
extern
ats_void_type ATS_2d0_2e2_2e12_2prelude_2DATS_2list_2edats____assert_prfck () ;
extern
ats_void_type ATS_2d0_2e2_2e12_2prelude_2DATS_2list_2edats____assert_prfck () ;
extern
ats_void_type ATS_2d0_2e2_2e12_2prelude_2DATS_2list_2edats____assert_prfck () ;
extern
ats_void_type ATS_2d0_2e2_2e12_2prelude_2DATS_2list_2edats____assert_prfck () ;
extern
ats_void_type ATS_2d0_2e2_2e12_2prelude_2DATS_2list_2edats____assert_prfck () ;
extern
ats_void_type ATS_2d0_2e2_2e12_2prelude_2DATS_2list_2edats____assert_prfck () ;
extern
ats_void_type ATS_2d0_2e2_2e12_2prelude_2DATS_2list_2edats____assert_prfck () ;
extern
ats_void_type ATS_2d0_2e2_2e12_2prelude_2DATS_2list_2edats____assert_prfck () ;
extern
ats_void_type ATS_2d0_2e2_2e12_2prelude_2DATS_2list_2edats____assert_prfck () ;
extern
ats_void_type ATS_2d0_2e2_2e12_2prelude_2DATS_2list_2edats____assert_prfck () ;
extern
ats_void_type ATS_2d0_2e2_2e12_2prelude_2DATS_2list_2edats____assert_prfck () ;
extern
ats_void_type ATS_2d0_2e2_2e12_2prelude_2DATS_2list_2edats____assert_prfck () ;
extern
ats_void_type ATS_2d0_2e2_2e12_2prelude_2DATS_2list_2edats____assert_prfck () ;
extern
ats_void_type ATS_2d0_2e2_2e12_2prelude_2DATS_2list_2edats____assert_prfck () ;
extern
ats_void_type ATS_2d0_2e2_2e12_2prelude_2DATS_2list_2edats____assert_prfck () ;
extern
ats_void_type ATS_2d0_2e2_2e12_2prelude_2DATS_2list_2edats____assert_prfck () ;
extern
ats_void_type ATS_2d0_2e2_2e12_2prelude_2DATS_2list_2edats____assert_prfck () ;
extern
ats_void_type ATS_2d0_2e2_2e12_2prelude_2DATS_2list_2edats____assert_prfck () ;
extern
ats_void_type ATS_2d0_2e2_2e12_2prelude_2DATS_2list_2edats____assert_prfck () ;
extern
ats_void_type ATS_2d0_2e2_2e12_2prelude_2DATS_2list_2edats____assert_prfck () ;
extern
ats_void_type ATS_2d0_2e2_2e12_2prelude_2DATS_2list_2edats____assert_prfck () ;
extern
ats_void_type ATS_2d0_2e2_2e12_2prelude_2DATS_2list_2edats____assert_prfck () ;
extern
ats_void_type ATS_2d0_2e2_2e12_2prelude_2DATS_2list_2edats____assert_prfck () ;
extern
ats_void_type ATS_2d0_2e2_2e12_2prelude_2DATS_2list_2edats____assert_prfck () ;
extern
ats_void_type ATS_2d0_2e2_2e12_2prelude_2DATS_2list_vt_2edats____assert_prfck () ;
extern
ats_void_type ATS_2d0_2e2_2e12_2prelude_2DATS_2list_vt_2edats____assert_prfck () ;
extern
ats_void_type ATS_2d0_2e2_2e12_2prelude_2DATS_2list_vt_2edats____assert_prfck () ;
extern
ats_void_type ATS_2d0_2e2_2e12_2prelude_2DATS_2list_vt_2edats____assert_prfck () ;
extern
ats_void_type ATS_2d0_2e2_2e12_2prelude_2DATS_2list_vt_2edats____assert_prfck () ;
extern
ats_void_type ATS_2d0_2e2_2e12_2prelude_2DATS_2list_vt_2edats____assert_prfck () ;
extern
ats_void_type ATS_2d0_2e2_2e12_2prelude_2DATS_2array_2edats____copy_prfck () ;
extern
ats_void_type ATS_2d0_2e2_2e12_2prelude_2DATS_2array_2edats____free_prfck () ;
extern
ats_void_type ATS_2d0_2e2_2e12_2prelude_2DATS_2array_2edats____assert_prfck () ;
extern
ats_void_type ATS_2d0_2e2_2e12_2prelude_2DATS_2array_2edats____assert_prfck () ;
#endif /* _ATS_PROOFCHECK */

/* assuming abstract types */
/* sum constructor declarations */
/* exn constructor declarations */
/* global dynamic (non-functional) constant declarations */
/* internal function declarations */
static
ats_ptr_type ref_01088_ats_ptr_type (ats_ptr_type arg0) ;
static
ats_ptr_type ref_01088_ats_int_type (ats_int_type arg0) ;

/* partial value template declarations */
/* static temporary variable declarations */
ATSstatic (ats_ptr_type, statmp0) ;
ATSstatic (ats_ptr_type, statmp7) ;
ATSstatic (ats_ptr_type, statmp10) ;
ATSstatic (ats_ptr_type, statmp16) ;
ATSstatic (ats_ptr_type, statmp19) ;
ATSstatic (ats_ptr_type, statmp22) ;
ATSstatic (ats_ptr_type, statmp25) ;
ATSstatic (ats_ptr_type, statmp28) ;
ATSstatic (ats_ptr_type, statmp29) ;
ATSstatic (ats_ptr_type, statmp34) ;
ATSstatic (ats_ptr_type, statmp37) ;
ATSstatic (ats_ptr_type, statmp40) ;

/* external value variable declarations */

/* function implementations */

/*
// /home/hwxi/research/Anairiats/prelude/DATS/reference.dats: 1828(line=57, offs=18) -- 1902(line=59, offs=4)
*/
ATSstaticdec()
ats_ptr_type
ref_01088_ats_ptr_type (ats_ptr_type arg0) {
/* local vardec */
ATSlocal (ats_ptr_type, tmp1) ;
ATSlocal (ats_ptr_type, tmp2) ;

__ats_lab_ref_01088_ats_ptr_type:
/* ats_ptr_type tmp2 ; */
tmp2 = arg0 ;
tmp1 = atspre_ref_make_elt_tsz ((&tmp2), sizeof(ats_ptr_type)) ;
return (tmp1) ;
} /* end of [ref_01088_ats_ptr_type] */

/*
// /home/hwxi/research/Postiats/git/src/pats_global.dats: 1666(line=55, offs=28) -- 1684(line=55, offs=46)
*/
ATSglobaldec()
ats_ptr_type
_2home_2hwxi_2research_2Postiats_2git_2src_2pats_global_2esats__the_PACKNAME_get () {
/* local vardec */
ATSlocal (ats_ptr_type, tmp3) ;

__ats_lab__2home_2hwxi_2research_2Postiats_2git_2src_2pats_global_2esats__the_PACKNAME_get:
tmp3 = ats_ptrget_mac(ats_ptr_type, statmp0) ;
return (tmp3) ;
} /* end of [_2home_2hwxi_2research_2Postiats_2git_2src_2pats_global_2esats__the_PACKNAME_get] */

/*
// /home/hwxi/research/Postiats/git/src/pats_global.dats: 1713(line=58, offs=18) -- 1741(line=58, offs=46)
*/
ATSglobaldec()
ats_void_type
_2home_2hwxi_2research_2Postiats_2git_2src_2pats_global_2esats__the_PACKNAME_set (ats_ptr_type arg0) {
/* local vardec */
// ATSlocal_void (tmp4) ;

__ats_lab__2home_2hwxi_2research_2Postiats_2git_2src_2pats_global_2esats__the_PACKNAME_set:
ats_ptrget_mac(ats_ptr_type, statmp0) = arg0 ;
return /* (tmp4) */ ;
} /* end of [_2home_2hwxi_2research_2Postiats_2git_2src_2pats_global_2esats__the_PACKNAME_set] */

/*
// /home/hwxi/research/Postiats/git/src/pats_global.dats: 1800(line=64, offs=3) -- 1840(line=64, offs=43)
*/
ATSglobaldec()
ats_void_type
_2home_2hwxi_2research_2Postiats_2git_2src_2pats_global_2esats__the_PACKNAME_set_name (ats_ptr_type arg0) {
/* local vardec */
// ATSlocal_void (tmp5) ;

__ats_lab__2home_2hwxi_2research_2Postiats_2git_2src_2pats_global_2esats__the_PACKNAME_set_name:
/* tmp5 = */ _2home_2hwxi_2research_2Postiats_2git_2src_2pats_global_2esats__the_PACKNAME_set (ats_castfn_mac(ats_ptr_type, arg0)) ;
return /* (tmp5) */ ;
} /* end of [_2home_2hwxi_2research_2Postiats_2git_2src_2pats_global_2esats__the_PACKNAME_set_name] */

/*
// /home/hwxi/research/Postiats/git/src/pats_global.dats: 1906(line=68, offs=3) -- 1948(line=68, offs=45)
*/
ATSglobaldec()
ats_void_type
_2home_2hwxi_2research_2Postiats_2git_2src_2pats_global_2esats__the_PACKNAME_set_none () {
/* local vardec */
// ATSlocal_void (tmp6) ;

__ats_lab__2home_2hwxi_2research_2Postiats_2git_2src_2pats_global_2esats__the_PACKNAME_set_none:
/* tmp6 = */ _2home_2hwxi_2research_2Postiats_2git_2src_2pats_global_2esats__the_PACKNAME_set (atspre_stropt_none) ;
return /* (tmp6) */ ;
} /* end of [_2home_2hwxi_2research_2Postiats_2git_2src_2pats_global_2esats__the_PACKNAME_set_none] */

/*
// /home/hwxi/research/Anairiats/prelude/DATS/reference.dats: 1828(line=57, offs=18) -- 1902(line=59, offs=4)
*/
ATSstaticdec()
ats_ptr_type
ref_01088_ats_int_type (ats_int_type arg0) {
/* local vardec */
ATSlocal (ats_ptr_type, tmp8) ;
ATSlocal (ats_int_type, tmp9) ;

__ats_lab_ref_01088_ats_int_type:
/* ats_int_type tmp9 ; */
tmp9 = arg0 ;
tmp8 = atspre_ref_make_elt_tsz ((&tmp9), sizeof(ats_int_type)) ;
return (tmp8) ;
} /* end of [ref_01088_ats_int_type] */

/*
// /home/hwxi/research/Postiats/git/src/pats_global.dats: 2141(line=81, offs=18) -- 2159(line=81, offs=36)
*/
ATSglobaldec()
ats_int_type
_2home_2hwxi_2research_2Postiats_2git_2src_2pats_global_2esats__the_PKGRELOC_get () {
/* local vardec */
ATSlocal (ats_int_type, tmp11) ;

__ats_lab__2home_2hwxi_2research_2Postiats_2git_2src_2pats_global_2esats__the_PKGRELOC_get:
tmp11 = ats_ptrget_mac(ats_int_type, statmp7) ;
return (tmp11) ;
} /* end of [_2home_2hwxi_2research_2Postiats_2git_2src_2pats_global_2esats__the_PKGRELOC_get] */

/*
// /home/hwxi/research/Postiats/git/src/pats_global.dats: 2187(line=83, offs=18) -- 2217(line=83, offs=48)
*/
ATSglobaldec()
ats_void_type
_2home_2hwxi_2research_2Postiats_2git_2src_2pats_global_2esats__the_PKGRELOC_set (ats_int_type arg0) {
/* local vardec */
// ATSlocal_void (tmp12) ;

__ats_lab__2home_2hwxi_2research_2Postiats_2git_2src_2pats_global_2esats__the_PKGRELOC_set:
ats_ptrget_mac(ats_int_type, statmp7) = arg0 ;
return /* (tmp12) */ ;
} /* end of [_2home_2hwxi_2research_2Postiats_2git_2src_2pats_global_2esats__the_PKGRELOC_set] */

/*
// /home/hwxi/research/Postiats/git/src/pats_global.dats: 2253(line=86, offs=23) -- 2349(line=89, offs=4)
*/
ATSglobaldec()
ats_ptr_type
_2home_2hwxi_2research_2Postiats_2git_2src_2pats_global_2esats__the_PKGRELOC_get_decl () {
/* local vardec */
ATSlocal (ats_ptr_type, tmp13) ;
ATSlocal (ats_ptr_type, tmp14) ;

__ats_lab__2home_2hwxi_2research_2Postiats_2git_2src_2pats_global_2esats__the_PKGRELOC_get_decl:
tmp14 = ats_ptrget_mac(ats_ptr_type, statmp10) ;
ats_ptrget_mac(ats_ptr_type, statmp10) = atspre_null_ptr ;
tmp13 = tmp14 ;
return (tmp13) ;
} /* end of [_2home_2hwxi_2research_2Postiats_2git_2src_2pats_global_2esats__the_PKGRELOC_get_decl] */

/*
// /home/hwxi/research/Postiats/git/src/pats_global.dats: 2416(line=91, offs=23) -- 2449(line=91, offs=56)
*/
ATSglobaldec()
ats_void_type
_2home_2hwxi_2research_2Postiats_2git_2src_2pats_global_2esats__the_PKGRELOC_set_decl (ats_ptr_type arg0) {
/* local vardec */
// ATSlocal_void (tmp15) ;

__ats_lab__2home_2hwxi_2research_2Postiats_2git_2src_2pats_global_2esats__the_PKGRELOC_set_decl:
ats_ptrget_mac(ats_ptr_type, statmp10) = arg0 ;
return /* (tmp15) */ ;
} /* end of [_2home_2hwxi_2research_2Postiats_2git_2src_2pats_global_2esats__the_PKGRELOC_set_decl] */

/*
// /home/hwxi/research/Postiats/git/src/pats_global.dats: 2863(line=118, offs=31) -- 2884(line=118, offs=52)
*/
ATSglobaldec()
ats_int_type
_2home_2hwxi_2research_2Postiats_2git_2src_2pats_global_2esats__the_DYNLOADFLAG_get () {
/* local vardec */
ATSlocal (ats_int_type, tmp17) ;

__ats_lab__2home_2hwxi_2research_2Postiats_2git_2src_2pats_global_2esats__the_DYNLOADFLAG_get:
tmp17 = ats_ptrget_mac(ats_int_type, statmp16) ;
return (tmp17) ;
} /* end of [_2home_2hwxi_2research_2Postiats_2git_2src_2pats_global_2esats__the_DYNLOADFLAG_get] */

/*
// /home/hwxi/research/Postiats/git/src/pats_global.dats: 2915(line=119, offs=31) -- 2948(line=119, offs=64)
*/
ATSglobaldec()
ats_void_type
_2home_2hwxi_2research_2Postiats_2git_2src_2pats_global_2esats__the_DYNLOADFLAG_set (ats_int_type arg0) {
/* local vardec */
// ATSlocal_void (tmp18) ;

__ats_lab__2home_2hwxi_2research_2Postiats_2git_2src_2pats_global_2esats__the_DYNLOADFLAG_set:
ats_ptrget_mac(ats_int_type, statmp16) = arg0 ;
return /* (tmp18) */ ;
} /* end of [_2home_2hwxi_2research_2Postiats_2git_2src_2pats_global_2esats__the_DYNLOADFLAG_set] */

/*
// /home/hwxi/research/Postiats/git/src/pats_global.dats: 3107(line=134, offs=21) -- 3128(line=134, offs=42)
*/
ATSglobaldec()
ats_ptr_type
_2home_2hwxi_2research_2Postiats_2git_2src_2pats_global_2esats__the_DYNLOADNAME_get () {
/* local vardec */
ATSlocal (ats_ptr_type, tmp20) ;

__ats_lab__2home_2hwxi_2research_2Postiats_2git_2src_2pats_global_2esats__the_DYNLOADNAME_get:
tmp20 = ats_ptrget_mac(ats_ptr_type, statmp19) ;
return (tmp20) ;
} /* end of [_2home_2hwxi_2research_2Postiats_2git_2src_2pats_global_2esats__the_DYNLOADNAME_get] */

/*
// /home/hwxi/research/Postiats/git/src/pats_global.dats: 3159(line=136, offs=21) -- 3204(line=136, offs=66)
*/
ATSglobaldec()
ats_void_type
_2home_2hwxi_2research_2Postiats_2git_2src_2pats_global_2esats__the_DYNLOADNAME_set (ats_ptr_type arg0) {
/* local vardec */
// ATSlocal_void (tmp21) ;

__ats_lab__2home_2hwxi_2research_2Postiats_2git_2src_2pats_global_2esats__the_DYNLOADNAME_set:
ats_ptrget_mac(ats_ptr_type, statmp19) = ats_castfn_mac(ats_ptr_type, arg0) ;
return /* (tmp21) */ ;
} /* end of [_2home_2hwxi_2research_2Postiats_2git_2src_2pats_global_2esats__the_DYNLOADNAME_set] */

/*
// /home/hwxi/research/Postiats/git/src/pats_global.dats: 3348(line=148, offs=31) -- 3369(line=148, offs=52)
*/
ATSglobaldec()
ats_int_type
_2home_2hwxi_2research_2Postiats_2git_2src_2pats_global_2esats__the_MAINATSFLAG_get () {
/* local vardec */
ATSlocal (ats_int_type, tmp23) ;

__ats_lab__2home_2hwxi_2research_2Postiats_2git_2src_2pats_global_2esats__the_MAINATSFLAG_get:
tmp23 = ats_ptrget_mac(ats_int_type, statmp22) ;
return (tmp23) ;
} /* end of [_2home_2hwxi_2research_2Postiats_2git_2src_2pats_global_2esats__the_MAINATSFLAG_get] */

/*
// /home/hwxi/research/Postiats/git/src/pats_global.dats: 3400(line=149, offs=31) -- 3433(line=149, offs=64)
*/
ATSglobaldec()
ats_void_type
_2home_2hwxi_2research_2Postiats_2git_2src_2pats_global_2esats__the_MAINATSFLAG_set (ats_int_type arg0) {
/* local vardec */
// ATSlocal_void (tmp24) ;

__ats_lab__2home_2hwxi_2research_2Postiats_2git_2src_2pats_global_2esats__the_MAINATSFLAG_set:
ats_ptrget_mac(ats_int_type, statmp22) = arg0 ;
return /* (tmp24) */ ;
} /* end of [_2home_2hwxi_2research_2Postiats_2git_2src_2pats_global_2esats__the_MAINATSFLAG_set] */

/*
// /home/hwxi/research/Postiats/git/src/pats_global.dats: 3597(line=163, offs=23) -- 3620(line=163, offs=46)
*/
ATSglobaldec()
ats_ptr_type
_2home_2hwxi_2research_2Postiats_2git_2src_2pats_global_2esats__the_STATIC_PREFIX_get () {
/* local vardec */
ATSlocal (ats_ptr_type, tmp26) ;

__ats_lab__2home_2hwxi_2research_2Postiats_2git_2src_2pats_global_2esats__the_STATIC_PREFIX_get:
tmp26 = ats_ptrget_mac(ats_ptr_type, statmp25) ;
return (tmp26) ;
} /* end of [_2home_2hwxi_2research_2Postiats_2git_2src_2pats_global_2esats__the_STATIC_PREFIX_get] */

/*
// /home/hwxi/research/Postiats/git/src/pats_global.dats: 3653(line=165, offs=23) -- 3694(line=165, offs=64)
*/
ATSglobaldec()
ats_void_type
_2home_2hwxi_2research_2Postiats_2git_2src_2pats_global_2esats__the_STATIC_PREFIX_set (ats_ptr_type arg0) {
/* local vardec */
// ATSlocal_void (tmp27) ;

__ats_lab__2home_2hwxi_2research_2Postiats_2git_2src_2pats_global_2esats__the_STATIC_PREFIX_set:
ats_ptrget_mac(ats_ptr_type, statmp25) = ats_castfn_mac(ats_ptr_type, arg0) ;
return /* (tmp27) */ ;
} /* end of [_2home_2hwxi_2research_2Postiats_2git_2src_2pats_global_2esats__the_STATIC_PREFIX_set] */

/*
// /home/hwxi/research/Postiats/git/src/pats_global.dats: 3890(line=182, offs=21) -- 3911(line=182, offs=42)
*/
ATSglobaldec()
ats_ptr_type
_2home_2hwxi_2research_2Postiats_2git_2src_2pats_global_2esats__the_IATS_dirlst_get () {
/* local vardec */
ATSlocal (ats_ptr_type, tmp30) ;

__ats_lab__2home_2hwxi_2research_2Postiats_2git_2src_2pats_global_2esats__the_IATS_dirlst_get:
tmp30 = ats_ptrget_mac(ats_ptr_type, statmp28) ;
return (tmp30) ;
} /* end of [_2home_2hwxi_2research_2Postiats_2git_2src_2pats_global_2esats__the_IATS_dirlst_get] */

/*
// /home/hwxi/research/Postiats/git/src/pats_global.dats: 3949(line=186, offs=3) -- 4041(line=190, offs=4)
*/
ATSglobaldec()
ats_void_type
_2home_2hwxi_2research_2Postiats_2git_2src_2pats_global_2esats__the_IATS_dirlst_ppush (ats_ptr_type arg0) {
/* local vardec */
// ATSlocal_void (tmp31) ;
ATSlocal (ats_ptr_type, tmp32) ;
ATSlocal (ats_ptr_type, tmp33) ;

__ats_lab__2home_2hwxi_2research_2Postiats_2git_2src_2pats_global_2esats__the_IATS_dirlst_ppush:
tmp32 = ats_ptrget_mac(ats_ptr_type, statmp28) ;
tmp33 = ATS_MALLOC(sizeof(anairiats_sum_1)) ;
ats_selptrset_mac(anairiats_sum_1, tmp33, atslab_0, arg0) ;
ats_selptrset_mac(anairiats_sum_1, tmp33, atslab_1, tmp32) ;
ats_ptrget_mac(ats_ptr_type, statmp28) = tmp33 ;
return /* (tmp31) */ ;
} /* end of [_2home_2hwxi_2research_2Postiats_2git_2src_2pats_global_2esats__the_IATS_dirlst_ppush] */

/*
// /home/hwxi/research/Postiats/git/src/pats_global.dats: 4220(line=203, offs=26) -- 4234(line=203, offs=40)
*/
ATSglobaldec()
ats_int_type
_2home_2hwxi_2research_2Postiats_2git_2src_2pats_global_2esats__the_DEBUGATS_dbgflag_get () {
/* local vardec */
ATSlocal (ats_int_type, tmp35) ;

__ats_lab__2home_2hwxi_2research_2Postiats_2git_2src_2pats_global_2esats__the_DEBUGATS_dbgflag_get:
tmp35 = ats_ptrget_mac(ats_int_type, statmp34) ;
return (tmp35) ;
} /* end of [_2home_2hwxi_2research_2Postiats_2git_2src_2pats_global_2esats__the_DEBUGATS_dbgflag_get] */

/*
// /home/hwxi/research/Postiats/git/src/pats_global.dats: 4270(line=205, offs=26) -- 4296(line=205, offs=52)
*/
ATSglobaldec()
ats_void_type
_2home_2hwxi_2research_2Postiats_2git_2src_2pats_global_2esats__the_DEBUGATS_dbgflag_set (ats_int_type arg0) {
/* local vardec */
// ATSlocal_void (tmp36) ;

__ats_lab__2home_2hwxi_2research_2Postiats_2git_2src_2pats_global_2esats__the_DEBUGATS_dbgflag_set:
ats_ptrget_mac(ats_int_type, statmp34) = arg0 ;
return /* (tmp36) */ ;
} /* end of [_2home_2hwxi_2research_2Postiats_2git_2src_2pats_global_2esats__the_DEBUGATS_dbgflag_set] */

/*
// /home/hwxi/research/Postiats/git/src/pats_global.dats: 4441(line=218, offs=26) -- 4455(line=218, offs=40)
*/
ATSglobaldec()
ats_int_type
_2home_2hwxi_2research_2Postiats_2git_2src_2pats_global_2esats__the_DEBUGATS_dbgline_get () {
/* local vardec */
ATSlocal (ats_int_type, tmp38) ;

__ats_lab__2home_2hwxi_2research_2Postiats_2git_2src_2pats_global_2esats__the_DEBUGATS_dbgline_get:
tmp38 = ats_ptrget_mac(ats_int_type, statmp37) ;
return (tmp38) ;
} /* end of [_2home_2hwxi_2research_2Postiats_2git_2src_2pats_global_2esats__the_DEBUGATS_dbgline_get] */

/*
// /home/hwxi/research/Postiats/git/src/pats_global.dats: 4491(line=220, offs=26) -- 4517(line=220, offs=52)
*/
ATSglobaldec()
ats_void_type
_2home_2hwxi_2research_2Postiats_2git_2src_2pats_global_2esats__the_DEBUGATS_dbgline_set (ats_int_type arg0) {
/* local vardec */
// ATSlocal_void (tmp39) ;

__ats_lab__2home_2hwxi_2research_2Postiats_2git_2src_2pats_global_2esats__the_DEBUGATS_dbgline_set:
ats_ptrget_mac(ats_int_type, statmp37) = arg0 ;
return /* (tmp39) */ ;
} /* end of [_2home_2hwxi_2research_2Postiats_2git_2src_2pats_global_2esats__the_DEBUGATS_dbgline_set] */

/*
// /home/hwxi/research/Postiats/git/src/pats_global.dats: 4698(line=234, offs=33) -- 4719(line=234, offs=54)
*/
ATSglobaldec()
ats_int_type
_2home_2hwxi_2research_2Postiats_2git_2src_2pats_global_2esats__the_CCOMPENV_maxtmprecdepth_get () {
/* local vardec */
ATSlocal (ats_int_type, tmp41) ;

__ats_lab__2home_2hwxi_2research_2Postiats_2git_2src_2pats_global_2esats__the_CCOMPENV_maxtmprecdepth_get:
tmp41 = ats_ptrget_mac(ats_int_type, statmp40) ;
return (tmp41) ;
} /* end of [_2home_2hwxi_2research_2Postiats_2git_2src_2pats_global_2esats__the_CCOMPENV_maxtmprecdepth_get] */

/*
// /home/hwxi/research/Postiats/git/src/pats_global.dats: 4762(line=236, offs=33) -- 4793(line=236, offs=64)
*/
ATSglobaldec()
ats_void_type
_2home_2hwxi_2research_2Postiats_2git_2src_2pats_global_2esats__the_CCOMPENV_maxtmprecdepth_set (ats_int_type arg0) {
/* local vardec */
// ATSlocal_void (tmp42) ;

__ats_lab__2home_2hwxi_2research_2Postiats_2git_2src_2pats_global_2esats__the_CCOMPENV_maxtmprecdepth_set:
ats_ptrget_mac(ats_int_type, statmp40) = arg0 ;
return /* (tmp42) */ ;
} /* end of [_2home_2hwxi_2research_2Postiats_2git_2src_2pats_global_2esats__the_CCOMPENV_maxtmprecdepth_set] */

/* static load function */

// extern ats_void_type _2home_2hwxi_2research_2Postiats_2git_2src_2pats_atspre_2edats__staload (void) ;
extern ats_void_type _2home_2hwxi_2research_2Postiats_2git_2src_2pats_global_2esats__staload (void) ;

ats_void_type
_2home_2hwxi_2research_2Postiats_2git_2src_2pats_global_2edats__staload () {
static int _2home_2hwxi_2research_2Postiats_2git_2src_2pats_global_2edats__staload_flag = 0 ;
if (_2home_2hwxi_2research_2Postiats_2git_2src_2pats_global_2edats__staload_flag) return ;
_2home_2hwxi_2research_2Postiats_2git_2src_2pats_global_2edats__staload_flag = 1 ;

// _2home_2hwxi_2research_2Postiats_2git_2src_2pats_atspre_2edats__staload () ;
_2home_2hwxi_2research_2Postiats_2git_2src_2pats_global_2esats__staload () ;

return ;
} /* staload function */

/* dynamic load function */

// dynload flag declaration
extern ats_int_type _2home_2hwxi_2research_2Postiats_2git_2src_2pats_global_2edats__dynload_flag ;

ats_void_type
_2home_2hwxi_2research_2Postiats_2git_2src_2pats_global_2edats__dynload () {
_2home_2hwxi_2research_2Postiats_2git_2src_2pats_global_2edats__dynload_flag = 1 ;
_2home_2hwxi_2research_2Postiats_2git_2src_2pats_global_2edats__staload () ;

#ifdef _ATS_PROOFCHECK
ATS_2d0_2e2_2e12_2prelude_2SATS_2list_2esats__list_length_is_nonnegative_prfck () ;
ATS_2d0_2e2_2e12_2prelude_2SATS_2list_vt_2esats__list_vt_length_is_nonnegative_prfck () ;
ATS_2d0_2e2_2e12_2prelude_2SATS_2array_2esats__array_v_takeout2_prfck () ;
ATS_2d0_2e2_2e12_2prelude_2DATS_2list_2edats____assert_prfck () ;
ATS_2d0_2e2_2e12_2prelude_2DATS_2list_2edats____assert_prfck () ;
ATS_2d0_2e2_2e12_2prelude_2DATS_2list_2edats____assert_prfck () ;
ATS_2d0_2e2_2e12_2prelude_2DATS_2list_2edats____assert_prfck () ;
ATS_2d0_2e2_2e12_2prelude_2DATS_2list_2edats____assert_prfck () ;
ATS_2d0_2e2_2e12_2prelude_2DATS_2list_2edats____assert_prfck () ;
ATS_2d0_2e2_2e12_2prelude_2DATS_2list_2edats____assert_prfck () ;
ATS_2d0_2e2_2e12_2prelude_2DATS_2list_2edats____assert_prfck () ;
ATS_2d0_2e2_2e12_2prelude_2DATS_2list_2edats____assert_prfck () ;
ATS_2d0_2e2_2e12_2prelude_2DATS_2list_2edats____assert_prfck () ;
ATS_2d0_2e2_2e12_2prelude_2DATS_2list_2edats____assert_prfck () ;
ATS_2d0_2e2_2e12_2prelude_2DATS_2list_2edats____assert_prfck () ;
ATS_2d0_2e2_2e12_2prelude_2DATS_2list_2edats____assert_prfck () ;
ATS_2d0_2e2_2e12_2prelude_2DATS_2list_2edats____assert_prfck () ;
ATS_2d0_2e2_2e12_2prelude_2DATS_2list_2edats____assert_prfck () ;
ATS_2d0_2e2_2e12_2prelude_2DATS_2list_2edats____assert_prfck () ;
ATS_2d0_2e2_2e12_2prelude_2DATS_2list_2edats____assert_prfck () ;
ATS_2d0_2e2_2e12_2prelude_2DATS_2list_2edats____assert_prfck () ;
ATS_2d0_2e2_2e12_2prelude_2DATS_2list_2edats____assert_prfck () ;
ATS_2d0_2e2_2e12_2prelude_2DATS_2list_2edats____assert_prfck () ;
ATS_2d0_2e2_2e12_2prelude_2DATS_2list_2edats____assert_prfck () ;
ATS_2d0_2e2_2e12_2prelude_2DATS_2list_2edats____assert_prfck () ;
ATS_2d0_2e2_2e12_2prelude_2DATS_2list_2edats____assert_prfck () ;
ATS_2d0_2e2_2e12_2prelude_2DATS_2list_2edats____assert_prfck () ;
ATS_2d0_2e2_2e12_2prelude_2DATS_2list_2edats____assert_prfck () ;
ATS_2d0_2e2_2e12_2prelude_2DATS_2list_2edats____assert_prfck () ;
ATS_2d0_2e2_2e12_2prelude_2DATS_2list_2edats____assert_prfck () ;
ATS_2d0_2e2_2e12_2prelude_2DATS_2list_2edats____assert_prfck () ;
ATS_2d0_2e2_2e12_2prelude_2DATS_2list_2edats____assert_prfck () ;
ATS_2d0_2e2_2e12_2prelude_2DATS_2list_2edats____assert_prfck () ;
ATS_2d0_2e2_2e12_2prelude_2DATS_2list_2edats____assert_prfck () ;
ATS_2d0_2e2_2e12_2prelude_2DATS_2list_2edats____assert_prfck () ;
ATS_2d0_2e2_2e12_2prelude_2DATS_2list_2edats____assert_prfck () ;
ATS_2d0_2e2_2e12_2prelude_2DATS_2list_2edats____assert_prfck () ;
ATS_2d0_2e2_2e12_2prelude_2DATS_2list_2edats____assert_prfck () ;
ATS_2d0_2e2_2e12_2prelude_2DATS_2list_2edats____assert_prfck () ;
ATS_2d0_2e2_2e12_2prelude_2DATS_2list_vt_2edats____assert_prfck () ;
ATS_2d0_2e2_2e12_2prelude_2DATS_2list_vt_2edats____assert_prfck () ;
ATS_2d0_2e2_2e12_2prelude_2DATS_2list_vt_2edats____assert_prfck () ;
ATS_2d0_2e2_2e12_2prelude_2DATS_2list_vt_2edats____assert_prfck () ;
ATS_2d0_2e2_2e12_2prelude_2DATS_2list_vt_2edats____assert_prfck () ;
ATS_2d0_2e2_2e12_2prelude_2DATS_2list_vt_2edats____assert_prfck () ;
ATS_2d0_2e2_2e12_2prelude_2DATS_2array_2edats____copy_prfck () ;
ATS_2d0_2e2_2e12_2prelude_2DATS_2array_2edats____free_prfck () ;
ATS_2d0_2e2_2e12_2prelude_2DATS_2array_2edats____assert_prfck () ;
ATS_2d0_2e2_2e12_2prelude_2DATS_2array_2edats____assert_prfck () ;
#endif /* _ATS_PROOFCHECK */

/* marking static variables for GC */
ATS_GC_MARKROOT(&statmp0, sizeof(ats_ptr_type)) ;
ATS_GC_MARKROOT(&statmp7, sizeof(ats_ptr_type)) ;
ATS_GC_MARKROOT(&statmp10, sizeof(ats_ptr_type)) ;
ATS_GC_MARKROOT(&statmp16, sizeof(ats_ptr_type)) ;
ATS_GC_MARKROOT(&statmp19, sizeof(ats_ptr_type)) ;
ATS_GC_MARKROOT(&statmp22, sizeof(ats_ptr_type)) ;
ATS_GC_MARKROOT(&statmp25, sizeof(ats_ptr_type)) ;
ATS_GC_MARKROOT(&statmp28, sizeof(ats_ptr_type)) ;
ATS_GC_MARKROOT(&statmp29, sizeof(ats_ptr_type)) ;
ATS_GC_MARKROOT(&statmp34, sizeof(ats_ptr_type)) ;
ATS_GC_MARKROOT(&statmp37, sizeof(ats_ptr_type)) ;
ATS_GC_MARKROOT(&statmp40, sizeof(ats_ptr_type)) ;

/* marking external values for GC */

/* code for dynamic loading */
statmp0 = ref_01088_ats_ptr_type (atspre_stropt_none) ;
statmp7 = ref_01088_ats_int_type (0) ;
statmp10 = ref_01088_ats_ptr_type (atspre_null_ptr) ;
statmp16 = ref_01088_ats_int_type (0) ;
statmp19 = ref_01088_ats_ptr_type (atspre_stropt_none) ;
statmp22 = ref_01088_ats_int_type (0) ;
statmp25 = ref_01088_ats_ptr_type (atspre_stropt_none) ;
statmp29 = (ats_sum_ptr_type)0 ;
statmp28 = ref_01088_ats_ptr_type (statmp29) ;
statmp34 = ref_01088_ats_int_type (0) ;
statmp37 = ref_01088_ats_int_type (0) ;
statmp40 = ref_01088_ats_int_type (100) ;
return ;
} /* end of [dynload function] */

/* external codes at mid */
/* external codes at bot */

/* ****** ****** */

/* end of [pats_global_dats.c] */
