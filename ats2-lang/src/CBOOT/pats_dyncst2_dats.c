/*
**
** The C code is generated by ATS/Anairiats
** The compilation time is: 2016-10-21: 22h:44m
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
#include "prelude/CATS/integer.cats"
#include "prelude/CATS/sizetype.cats"
#include "prelude/CATS/integer_ptr.cats"
#include "prelude/CATS/integer_fixed.cats"
#include "prelude/CATS/pointer.cats"
#include "prelude/CATS/bool.cats"
#include "prelude/CATS/char.cats"
#include "prelude/CATS/byte.cats"
#include "prelude/CATS/float.cats"
#include "prelude/CATS/string.cats"
#include "prelude/CATS/reference.cats"
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

#include "pats_location.cats"

#include "pats_location.cats"

#include "pats_location.cats"

#include "pats_lexbuf.cats"

#include "pats_location.cats"

#include "pats_location.cats"

#include "pats_location.cats"

#include "pats_location.cats"

#include "pats_location.cats"

#include "pats_lexbuf.cats"

#include "pats_location.cats"

#include "pats_location.cats"

#include "pats_location.cats"

#include "pats_location.cats"

#include "pats_lexbuf.cats"

#include "pats_location.cats"

#include "pats_location.cats"

#include "pats_location.cats"

#include "pats_location.cats"

#include "pats_location.cats"

#include "pats_lexbuf.cats"

#include "pats_location.cats"

#include "pats_location.cats"

#include "pats_location.cats"

#include "pats_location.cats"

#include "pats_location.cats"

#include "pats_lexbuf.cats"

#include "pats_location.cats"

#include "pats_location.cats"

#include "pats_location.cats"

#include "pats_location.cats"

#include "pats_location.cats"

#include "pats_lexbuf.cats"

#include "pats_location.cats"

#include "pats_location.cats"

#include "pats_location.cats"

#include "pats_location.cats"

#include "pats_location.cats"

#include "pats_lexbuf.cats"

#include "pats_location.cats"

#include "pats_location.cats"

#include "pats_location.cats"

#include "pats_location.cats"

#include "pats_location.cats"

#include "pats_lexbuf.cats"

#include "pats_location.cats"

#include "pats_location.cats"

#include "pats_location.cats"

#include "pats_location.cats"

#include "pats_lexbuf.cats"

#include "pats_location.cats"

#include "pats_location.cats"

#include "pats_location.cats"

#include "pats_location.cats"

#include "pats_location.cats"

#include "pats_lexbuf.cats"

#include "pats_location.cats"

#include "pats_location.cats"

#include "pats_location.cats"

#include "pats_location.cats"

#include "pats_location.cats"

#include "pats_lexbuf.cats"

#include "pats_location.cats"

#include "pats_location.cats"

#include "pats_location.cats"

#include "pats_location.cats"

#include "pats_location.cats"

#include "pats_lexbuf.cats"

#include "pats_location.cats"

#include "pats_location.cats"

#include "pats_location.cats"

#include "pats_location.cats"

#include "pats_lexbuf.cats"

#include "pats_location.cats"

#include "pats_location.cats"

#include "pats_location.cats"

#include "pats_location.cats"

#include "pats_location.cats"

#include "pats_lexbuf.cats"

#include "pats_location.cats"

#include "pats_location.cats"

#include "pats_location.cats"

#include "pats_location.cats"

#include "pats_location.cats"

#include "pats_lexbuf.cats"

#include "pats_location.cats"

#include "pats_location.cats"

#include "pats_location.cats"

#include "pats_location.cats"

#include "pats_location.cats"

#include "pats_lexbuf.cats"

#include "pats_location.cats"

#include "pats_location.cats"

#include "pats_location.cats"

#include "pats_location.cats"

#include "pats_location.cats"

#include "pats_lexbuf.cats"

#include "pats_location.cats"

#include "pats_location.cats"

#include "pats_location.cats"

#include "pats_location.cats"

#include "pats_lexbuf.cats"

#include "pats_location.cats"

#include "pats_location.cats"

#include "pats_location.cats"

#include "pats_location.cats"

#include "pats_location.cats"

#include "pats_lexbuf.cats"

#include "pats_location.cats"

#include "pats_location.cats"

#include "pats_location.cats"

#include "pats_location.cats"

#include "pats_location.cats"

#include "pats_lexbuf.cats"

#include "pats_location.cats"

#include "pats_location.cats"

#include "pats_location.cats"

#include "pats_location.cats"

#include "pats_location.cats"

#include "pats_lexbuf.cats"

#include "pats_location.cats"

#include "pats_location.cats"
/* external codes at top */
/* type definitions */
typedef
struct {
ats_ptr_type atslab_3 ;
ats_ptr_type atslab_4 ;
} anairiats_rec_0 ;

typedef
struct {
ats_ptr_type atslab_sym ;
ats_ptr_type atslab_cst ;
} anairiats_rec_1 ;

typedef struct {
ats_ptr_type atslab_0 ;
} anairiats_sum_2 ;

typedef struct {
int tag ;
ats_ptr_type atslab_0 ;
} anairiats_sum_3 ;

/* external typedefs */
/* external dynamic constructor declarations */
ATSextern_val(ats_sum_type, ATS_2d0_2e2_2e12_2prelude_2basics_sta_2esats__None_vt_0) ;
ATSextern_val(ats_sum_type, ATS_2d0_2e2_2e12_2prelude_2basics_sta_2esats__Some_vt_1) ;
ATSextern_val(ats_sum_type, _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_dynexp2_2esats__D2ITMcst_0) ;

/* external dynamic constant declarations */
ATSextern_fun(ats_void_type, atspre_vbox_make_view_ptr) (ats_ptr_type) ;
ATSextern_fun(ats_void_type, atspre_prerr_newline) () ;
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
ATSextern_fun(ats_ptr_type, atspre_ref_make_view_ptr) (ats_ptr_type) ;
ATSextern_fun(ats_void_type, atspre_prerr_string) (ats_ptr_type) ;
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
ATSextern_fun(ats_varet_type, _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_error_2esats__abort_interr) () ;
ATSextern_fun(ats_void_type, _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_symbol_2esats__prerr_symbol) (ats_ptr_type) ;
ATSextern_fun(ats_ptr_type, _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_symbol_2esats__symbol_make_string) (ats_ptr_type) ;
ATSextern_fun(ats_void_type, _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_location_2esats__prerr_location) (ats_ptr_type) ;
ATSextern_fun(ats_bool_type, _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_dynexp2_2esats__eq_d2cst_d2cst) (ats_ptr_type, ats_ptr_type) ;
ATSextern_fun(ats_ptr_type, _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_dyncst2_2esats__d2cstref_make) (ats_ptr_type) ;
ATSextern_fun(ats_ptr_type, _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_dyncst2_2esats__d2cstref_get_cst) (ats_ptr_type) ;
ATSextern_fun(ats_bool_type, _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_dyncst2_2esats__d2cstref_equ_cst) (ats_ptr_type, ats_ptr_type) ;
ATSextern_val(ats_ptr_type, _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_dyncst2_2esats__the_sizeof_vt0ype_size) ;
ATSextern_fun(ats_ptr_type, _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_trans2_env_2esats__the_d2expenv_pervasive_find) (ats_ptr_type) ;
ATSextern_fun(ats_bool_type, atspre_ptr_is_null) (ats_ptr_type) ;
ATSextern_fun(ats_bool_type, atspre_ptr_isnot_null) (ats_ptr_type) ;

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
int _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_dyncst2_2esats__sasp__d2cstref_type = 0 ;

/* sum constructor declarations */
/* exn constructor declarations */
/* global dynamic (non-functional) constant declarations */
ATSglobal(ats_ptr_type, _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_dyncst2_2esats__the_sizeof_vt0ype_size) ;

/* internal function declarations */
static
ats_void_type prerr_FILENAME_02043_ () ;
static
ats_ptr_type d2cstref_get_sym_1 (ats_ptr_type arg0) ;
static
ats_ptr_type d2cstref_get_cstnul_2 (ats_ptr_type arg0) ;
static
ats_void_type d2cstref_set_cstnul_3 (ats_ptr_type arg0, ats_ptr_type arg1) ;
static
ats_ptr_type ptr_alloc_01070_anairiats_rec_1 () ;
static
ats_void_type prerr_interror_02044_ () ;
static
ats_ptr_type auxerr_7 (ats_ptr_type arg0) ;

/* partial value template declarations */
/* static temporary variable declarations */
ATSstatic (ats_ptr_type, statmp32) ;

/* external value variable declarations */

/* function implementations */

/*
// /home/hwxi/Research/ATS-Postiats/src/pats_dyncst2.dats: 1715(line=53, offs=28) -- 1740(line=53, offs=53)
*/
ATSstaticdec()
ats_void_type
prerr_FILENAME_02043_ () {
/* local vardec */
// ATSlocal_void (tmp0) ;

__ats_lab_prerr_FILENAME_02043_:
/* tmp0 = */ atspre_prerr_string (ATSstrcst("pats_stacst2")) ;
return /* (tmp0) */ ;
} /* end of [prerr_FILENAME_02043_] */

/*
// /home/hwxi/Research/ATS-Postiats/src/pats_dyncst2.dats: 2609(line=99, offs=5) -- 2712(line=102, offs=4)
*/
ATSstaticdec()
ats_ptr_type
d2cstref_get_sym_1 (ats_ptr_type arg0) {
/* local vardec */
ATSlocal (ats_ptr_type, tmp1) ;
ATSlocal (ats_ptr_type, tmp2) ;

__ats_lab_d2cstref_get_sym_1:
tmp2 = ats_selsin_mac(ats_castfn_mac(ats_ptr_type, arg0), atslab_1) ;
tmp1 = ats_selptr_mac(ats_castptr_mac(anairiats_rec_1, tmp2), atslab_sym) ;
return (tmp1) ;
} /* end of [d2cstref_get_sym_1] */

/*
// /home/hwxi/Research/ATS-Postiats/src/pats_dyncst2.dats: 2768(line=106, offs=5) -- 2876(line=109, offs=4)
*/
ATSstaticdec()
ats_ptr_type
d2cstref_get_cstnul_2 (ats_ptr_type arg0) {
/* local vardec */
ATSlocal (ats_ptr_type, tmp3) ;
ATSlocal (ats_ptr_type, tmp4) ;

__ats_lab_d2cstref_get_cstnul_2:
tmp4 = ats_selsin_mac(ats_castfn_mac(ats_ptr_type, arg0), atslab_1) ;
tmp3 = ats_selptr_mac(ats_castptr_mac(anairiats_rec_1, tmp4), atslab_cst) ;
return (tmp3) ;
} /* end of [d2cstref_get_cstnul_2] */

/*
// /home/hwxi/Research/ATS-Postiats/src/pats_dyncst2.dats: 2913(line=110, offs=5) -- 3039(line=113, offs=4)
*/
ATSstaticdec()
ats_void_type
d2cstref_set_cstnul_3 (ats_ptr_type arg0, ats_ptr_type arg1) {
/* local vardec */
// ATSlocal_void (tmp5) ;
ATSlocal (ats_ptr_type, tmp6) ;

__ats_lab_d2cstref_set_cstnul_3:
tmp6 = ats_selsin_mac(ats_castfn_mac(ats_ptr_type, arg0), atslab_1) ;
ats_selptr_mac(ats_castptr_mac(anairiats_rec_1, tmp6), atslab_cst) = arg1 ;
return /* (tmp5) */ ;
} /* end of [d2cstref_set_cstnul_3] */

/*
// /home/hwxi/Research/ATS-Anairiats/prelude/DATS/pointer.dats: 1817(line=56, offs=24) -- 1850(line=56, offs=57)
*/
ATSstaticdec()
ats_ptr_type
ptr_alloc_01070_anairiats_rec_1 () {
/* local vardec */
ATSlocal (ats_ptr_type, tmp10) ;

__ats_lab_ptr_alloc_01070_anairiats_rec_1:
tmp10 = atspre_ptr_alloc_tsz (sizeof(anairiats_rec_1)) ;
return (tmp10) ;
} /* end of [ptr_alloc_01070_anairiats_rec_1] */

/*
// /home/hwxi/Research/ATS-Postiats/src/pats_dyncst2.dats: 3118(line=118, offs=15) -- 3356(line=125, offs=4)
*/
ATSglobaldec()
ats_ptr_type
_2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_dyncst2_2esats__d2cstref_make (ats_ptr_type arg0) {
/* local vardec */
ATSlocal (ats_ptr_type, tmp7) ;
ATSlocal (ats_ptr_type, tmp8) ;
ATSlocal (ats_ptr_type, tmp9) ;
ATSlocal (ats_ptr_type, tmp11) ;

__ats_lab__2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_dyncst2_2esats__d2cstref_make:
tmp8 = _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_symbol_2esats__symbol_make_string (arg0) ;
tmp9 = ptr_alloc_01070_anairiats_rec_1 () ;
tmp11 = ats_selsin_mac(tmp9, atslab_2) ;
ats_selptr_mac(ats_castptr_mac(anairiats_rec_1, tmp11), atslab_sym) = tmp8 ;
ats_selptr_mac(ats_castptr_mac(anairiats_rec_1, tmp11), atslab_cst) = ats_castfn_mac(ats_ptr_type, atspre_null_ptr) ;
tmp7 = atspre_ref_make_view_ptr (tmp11) ;
return (tmp7) ;
} /* end of [_2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_dyncst2_2esats__d2cstref_make] */

/*
// /home/hwxi/Research/ATS-Postiats/src/pats_errmsg.dats: 1624(line=48, offs=16) -- 1722(line=53, offs=2)
*/
ATSstaticdec()
ats_void_type
prerr_interror_02044_ () {
/* local vardec */
// ATSlocal_void (tmp15) ;
// ATSlocal_void (tmp16) ;
// ATSlocal_void (tmp17) ;

__ats_lab_prerr_interror_02044_:
/* tmp16 = */ atspre_prerr_string (ATSstrcst("INTERROR(")) ;
/* tmp17 = */ prerr_FILENAME_02043_ () ;
/* tmp15 = */ atspre_prerr_string (ATSstrcst(")")) ;
return /* (tmp15) */ ;
} /* end of [prerr_interror_02044_] */

/*
// /home/hwxi/Research/ATS-Postiats/src/pats_dyncst2.dats: 3472(line=134, offs=4) -- 3708(line=141, offs=4)
*/
ATSstaticdec()
ats_ptr_type
auxerr_7 (ats_ptr_type arg0) {
/* local vardec */
ATSlocal (ats_ptr_type, tmp13) ;
// ATSlocal_void (tmp14) ;
// ATSlocal_void (tmp18) ;
// ATSlocal_void (tmp19) ;
// ATSlocal_void (tmp20) ;
// ATSlocal_void (tmp21) ;
// ATSlocal_void (tmp22) ;

__ats_lab_auxerr_7:
/* tmp14 = */ prerr_interror_02044_ () ;
/* tmp18 = */ atspre_prerr_string (ATSstrcst(": d2cstref_get_cst")) ;
/* tmp19 = */ atspre_prerr_string (ATSstrcst(": the pervasive dynamic constant [")) ;
/* tmp20 = */ _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_symbol_2esats__prerr_symbol (arg0) ;
/* tmp21 = */ atspre_prerr_string (ATSstrcst("] is not available.")) ;
/* tmp22 = */ atspre_prerr_newline () ;
/* tmp13 = */ _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_error_2esats__abort_interr () ;
return (tmp13) ;
} /* end of [auxerr_7] */

/*
// /home/hwxi/Research/ATS-Postiats/src/pats_dyncst2.dats: 3456(line=132, offs=18) -- 4234(line=170, offs=4)
*/
ATSglobaldec()
ats_ptr_type
_2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_dyncst2_2esats__d2cstref_get_cst (ats_ptr_type arg0) {
/* local vardec */
ATSlocal (ats_ptr_type, tmp12) ;
ATSlocal (ats_ptr_type, tmp23) ;
ATSlocal (ats_bool_type, tmp24) ;
ATSlocal (ats_ptr_type, tmp25) ;
ATSlocal (ats_ptr_type, tmp26) ;
ATSlocal (ats_ptr_type, tmp27) ;
ATSlocal (ats_ptr_type, tmp28) ;
// ATSlocal_void (tmp29) ;

__ats_lab__2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_dyncst2_2esats__d2cstref_get_cst:
tmp23 = d2cstref_get_cstnul_2 (arg0) ;
tmp24 = atspre_ptr_is_null (tmp23) ;
if (tmp24) {
tmp25 = d2cstref_get_sym_1 (arg0) ;
tmp26 = _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_trans2_env_2esats__the_d2expenv_pervasive_find (tmp25) ;
do {
/* branch: __ats_lab_0 */
__ats_lab_0_0:
if (tmp26 == (ats_sum_ptr_type)0) { goto __ats_lab_3_0 ; }
__ats_lab_0_1:
tmp27 = ats_caselptrlab_mac(anairiats_sum_2, tmp26, atslab_0) ;
ATS_FREE(tmp26) ;
do {
/* branch: __ats_lab_1 */
__ats_lab_1_0:
if (((ats_sum_ptr_type)tmp27)->tag != 0) { goto __ats_lab_2_0 ; }
__ats_lab_1_1:
tmp28 = ats_caselptrlab_mac(anairiats_sum_3, tmp27, atslab_0) ;
/* tmp29 = */ d2cstref_set_cstnul_3 (arg0, ats_castfn_mac(ats_ptr_type, tmp28)) ;
tmp12 = tmp28 ;
break ;

/* branch: __ats_lab_2 */
__ats_lab_2_0:
__ats_lab_2_1:
tmp12 = auxerr_7 (tmp25) ;
break ;
} while (0) ;
break ;

/* branch: __ats_lab_3 */
__ats_lab_3_0:
// if (tmp26 != (ats_sum_ptr_type)0) { ats_deadcode_failure_handle () ; }
__ats_lab_3_1:
tmp12 = auxerr_7 (tmp25) ;
break ;
} while (0) ;
} else {
tmp12 = ats_castfn_mac(ats_ptr_type, tmp23) ;
} /* end of [if] */
return (tmp12) ;
} /* end of [_2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_dyncst2_2esats__d2cstref_get_cst] */

/*
// /home/hwxi/Research/ATS-Postiats/src/pats_dyncst2.dats: 4313(line=175, offs=18) -- 4368(line=176, offs=45)
*/
ATSglobaldec()
ats_bool_type
_2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_dyncst2_2esats__d2cstref_equ_cst (ats_ptr_type arg0, ats_ptr_type arg1) {
/* local vardec */
ATSlocal (ats_bool_type, tmp30) ;
ATSlocal (ats_ptr_type, tmp31) ;

__ats_lab__2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_dyncst2_2esats__d2cstref_equ_cst:
tmp31 = _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_dyncst2_2esats__d2cstref_get_cst (arg0) ;
tmp30 = _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_dynexp2_2esats__eq_d2cst_d2cst (tmp31, arg1) ;
return (tmp30) ;
} /* end of [_2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_dyncst2_2esats__d2cstref_equ_cst] */

/*
// /home/hwxi/Research/ATS-Postiats/src/pats_dyncst2.dats: 4528(line=187, offs=17) -- 4584(line=188, offs=49)
*/
ATSglobaldec()
ats_bool_type
_2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_dyncst2_2esats__d2cst_is_sizeof (ats_ptr_type arg0) {
/* local vardec */
ATSlocal (ats_bool_type, tmp33) ;

__ats_lab__2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_dyncst2_2esats__d2cst_is_sizeof:
tmp33 = _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_dyncst2_2esats__d2cstref_equ_cst (_2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_dyncst2_2esats__the_sizeof_vt0ype_size, arg0) ;
return (tmp33) ;
} /* end of [_2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_dyncst2_2esats__d2cst_is_sizeof] */

/*
// /home/hwxi/Research/ATS-Postiats/src/pats_dyncst2.dats: 4664(line=193, offs=30) -- 4671(line=193, offs=37)
*/
ATSglobaldec()
ats_void_type
_2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_dyncst2_2esats__dyncst2_initialize () {
/* local vardec */
// ATSlocal_void (tmp34) ;

__ats_lab__2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_dyncst2_2esats__dyncst2_initialize:
return /* (tmp34) */ ;
} /* end of [_2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_dyncst2_2esats__dyncst2_initialize] */

/* static load function */

// extern ats_void_type _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_atspre_2edats__staload (void) ;
extern ats_void_type _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_error_2esats__staload (void) ;
extern ats_void_type _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_symbol_2esats__staload (void) ;
extern ats_void_type _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_errmsg_2esats__staload (void) ;
extern ats_void_type _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_errmsg_2edats__staload (void) ;
extern ats_void_type _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_dynexp2_2esats__staload (void) ;
extern ats_void_type _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_dyncst2_2esats__staload (void) ;
extern ats_void_type _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_trans2_env_2esats__staload (void) ;

ats_void_type
_2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_dyncst2_2edats__staload () {
static int _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_dyncst2_2edats__staload_flag = 0 ;
if (_2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_dyncst2_2edats__staload_flag) return ;
_2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_dyncst2_2edats__staload_flag = 1 ;

// _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_atspre_2edats__staload () ;
_2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_error_2esats__staload () ;
_2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_symbol_2esats__staload () ;
_2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_errmsg_2esats__staload () ;
_2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_errmsg_2edats__staload () ;
_2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_dynexp2_2esats__staload () ;
_2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_dyncst2_2esats__staload () ;
_2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_trans2_env_2esats__staload () ;

return ;
} /* staload function */

/* dynamic load function */

// dynload flag declaration
extern ats_int_type _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_dyncst2_2edats__dynload_flag ;

ats_void_type
_2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_dyncst2_2edats__dynload () {
_2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_dyncst2_2edats__dynload_flag = 1 ;
_2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_dyncst2_2edats__staload () ;

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
ATS_GC_MARKROOT(&statmp32, sizeof(ats_ptr_type)) ;

/* marking external values for GC */

/* code for dynamic loading */
statmp32 = _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_dyncst2_2esats__d2cstref_make (ATSstrcst("sizeof")) ;
ATS_GC_MARKROOT(&_2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_dyncst2_2esats__the_sizeof_vt0ype_size, sizeof(ats_ptr_type)) ;
_2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_dyncst2_2esats__the_sizeof_vt0ype_size = statmp32 ;
return ;
} /* end of [dynload function] */

/* external codes at mid */
/* external codes at bot */

/* ****** ****** */

/* end of [pats_dyncst2_dats.c] */
