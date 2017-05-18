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

#include "ats_counter.cats"
/* external codes at top */
/* type definitions */
typedef
struct {
ats_ptr_type atslab_ptr ;
ats_int_type atslab_size ;
ats_int_type atslab_nitm ;
} anairiats_rec_0 ;

typedef struct {
ats_ptr_type atslab_0 ;
} anairiats_sum_1 ;

/* external typedefs */
/* external dynamic constructor declarations */
ATSextern_val(ats_sum_type, ATS_2d0_2e2_2e12_2prelude_2basics_sta_2esats__None_0) ;
ATSextern_val(ats_sum_type, ATS_2d0_2e2_2e12_2prelude_2basics_sta_2esats__Some_1) ;

/* external dynamic constant declarations */
ATSextern_fun(ats_void_type, atspre_vbox_make_view_ptr) (ats_ptr_type) ;
ATSextern_fun(ats_int_type, atspre_iadd) (ats_int_type, ats_int_type) ;
ATSextern_fun(ats_int_type, atspre_isub) (ats_int_type, ats_int_type) ;
ATSextern_fun(ats_int_type, atspre_imul) (ats_int_type, ats_int_type) ;
ATSextern_fun(ats_bool_type, atspre_ilt) (ats_int_type, ats_int_type) ;
ATSextern_fun(ats_bool_type, atspre_igt) (ats_int_type, ats_int_type) ;
ATSextern_fun(ats_int_type, atspre_imax) (ats_int_type, ats_int_type) ;
ATSextern_fun(ats_int_type, atspre_uimod) (ats_uint_type, ats_int_type) ;
ATSextern_fun(ats_uint_type, atspre_uint_of_ulint) (ats_ulint_type) ;
ATSextern_fun(ats_ptr_type, atspre_ptr_alloc_tsz) (ats_size_type) ;
ATSextern_fun(ats_bool_type, atspre_eq_string_string) (ats_ptr_type, ats_ptr_type) ;
ATSextern_fun(ats_ulint_type, atspre_string_hash_33) (ats_ptr_type) ;
ATSextern_fun(ats_ptr_type, ats_array_ptr_alloc_tsz) (ats_int_type, ats_size_type) ;
ATSextern_fun(ats_void_type, ats_array_ptr_free) (ats_ptr_type) ;
ATSextern_fun(ats_ptr_type, ATS_2d0_2e2_2e12_2src_2ats_symbol_2esats__symbol_name) (ats_ptr_type) ;

/* external dynamic terminating constant declarations */
#ifdef _ATS_PROOFCHECK
#endif /* _ATS_PROOFCHECK */

/* assuming abstract types */
int ATS_2d0_2e2_2e12_2src_2ats_symtbl_2esats__sasp__symtbl_t = 0 ;

/* sum constructor declarations */
/* exn constructor declarations */
/* global dynamic (non-functional) constant declarations */
/* internal function declarations */
static
ats_void_type aux_2 (ats_ptr_type arg0, ats_int_type arg1, ats_ptr_type arg2) ;
static
ats_void_type array_ptr_initialize_elt_01689_ats_ptr_type (ats_ref_type arg0, ats_int_type arg1, ats_ptr_type arg2) ;
static
ats_ptr_type symtbl_search_probe_3 (ats_ptr_type arg0, ats_int_type arg1, ats_int_type arg2, ats_ptr_type arg3) ;
static
ats_void_type symtbl_insert_probe_5 (ats_ptr_type arg0, ats_int_type arg1, ats_int_type arg2, ats_ptr_type arg3) ;
static
ats_void_type symtbl_resize_move_6 (ats_ptr_type arg0, ats_ptr_type arg1, ats_int_type arg2, ats_int_type arg3) ;
static
ats_void_type symtbl_resize_7 (ats_ptr_type arg0) ;
static
ats_void_type symtbl_resize_if_8 (ats_ptr_type arg0) ;

/* partial value template declarations */
/* static temporary variable declarations */
/* external value variable declarations */

/* function implementations */

/*
// /home/hwxi/Research/ATS-Anairiats/src/ats_array.dats: 1730(line=49, offs=7) -- 2141(line=60, offs=8)
*/
ATSstaticdec()
ats_void_type
aux_2 (ats_ptr_type arg0, ats_int_type arg1, ats_ptr_type arg2) {
/* local vardec */
// ATSlocal_void (tmp9) ;
ATSlocal (ats_bool_type, tmp10) ;
ATSlocal (ats_ptr_type, tmp11) ;
ATSlocal (ats_int_type, tmp12) ;

__ats_lab_aux_2:
tmp10 = atspre_igt (arg1, 0) ;
if (tmp10) {
ats_ptrget_mac(ats_ptr_type, arg0) = arg2 ;
tmp11 = atspre_padd_size (arg0, sizeof(ats_ptr_type)) ;
tmp12 = atspre_isub (arg1, 1) ;
arg0 = tmp11 ;
arg1 = tmp12 ;
arg2 = arg2 ;
goto __ats_lab_aux_2 ; // tail call
} else {
/* empty */
} /* end of [if] */
return /* (tmp9) */ ;
} /* end of [aux_2] */

/*
// /home/hwxi/Research/ATS-Anairiats/src/ats_array.dats: 1705(line=48, offs=26) -- 2267(line=66, offs=4)
*/
ATSstaticdec()
ats_void_type
array_ptr_initialize_elt_01689_ats_ptr_type (ats_ref_type arg0, ats_int_type arg1, ats_ptr_type arg2) {
/* local vardec */
// ATSlocal_void (tmp8) ;

__ats_lab_array_ptr_initialize_elt_01689_ats_ptr_type:
/* tmp8 = */ aux_2 (arg0, arg1, arg2) ;
return /* (tmp8) */ ;
} /* end of [array_ptr_initialize_elt_01689_ats_ptr_type] */

/*
// /home/hwxi/Research/ATS-Anairiats/src/ats_symtbl.dats: 2160(line=73, offs=13) -- 3004(line=104, offs=4)
*/
ATSglobaldec()
ats_ptr_type
ATS_2d0_2e2_2e12_2src_2ats_symtbl_2esats__symtbl_make (ats_int_type arg0) {
/* local vardec */
ATSlocal (ats_ptr_type, tmp0) ;
ATSlocal (ats_ptr_type, tmp1) ;
ATSlocal (ats_ptr_type, tmp2) ;
ATSlocal (ats_int_type, tmp3) ;
ATSlocal (ats_ptr_type, tmp4) ;
ATSlocal (ats_ptr_type, tmp5) ;
ATSlocal (ats_ptr_type, tmp6) ;
// ATSlocal_void (tmp7) ;
// ATSlocal_void (tmp13) ;
// ATSlocal_void (tmp14) ;

__ats_lab_ATS_2d0_2e2_2e12_2src_2ats_symtbl_2esats__symtbl_make:
tmp1 = atspre_ptr_alloc_tsz (sizeof(anairiats_rec_0)) ;
tmp2 = ats_selsin_mac(tmp1, atslab_2) ;
tmp3 = atspre_imax (arg0, 1) ;
tmp4 = ats_array_ptr_alloc_tsz (tmp3, sizeof(ats_ptr_type)) ;
tmp5 = ats_selsin_mac(tmp4, atslab_2) ;
/* ats_ptr_type tmp6 ; */
tmp6 = (ats_sum_ptr_type)0 ;
/* tmp7 = */ array_ptr_initialize_elt_01689_ats_ptr_type (tmp5, tmp3, tmp6) ;
ats_selptr_mac(ats_castptr_mac(anairiats_rec_0, tmp2), atslab_ptr) = tmp5 ;
ats_selptr_mac(ats_castptr_mac(anairiats_rec_0, tmp2), atslab_size) = tmp3 ;
ats_selptr_mac(ats_castptr_mac(anairiats_rec_0, tmp2), atslab_nitm) = 0 ;
/* tmp13 = */ atspre_vbox_make_view_ptr (tmp2) ;
/* tmp14 = ats_selsin_mac(tmp13, atslab_1) */ ;
tmp0 = tmp2 ;
return (tmp0) ;
} /* end of [ATS_2d0_2e2_2e12_2src_2ats_symtbl_2esats__symtbl_make] */

/*
// /home/hwxi/Research/ATS-Anairiats/src/ats_symtbl.dats: 3052(line=107, offs=5) -- 3648(line=126, offs=4)
*/
ATSstaticdec()
ats_ptr_type
symtbl_search_probe_3 (ats_ptr_type arg0, ats_int_type arg1, ats_int_type arg2, ats_ptr_type arg3) {
/* local vardec */
ATSlocal (ats_ptr_type, tmp15) ;
ATSlocal (ats_ptr_type, tmp16) ;
ATSlocal (ats_ptr_type, tmp17) ;
ATSlocal (ats_bool_type, tmp18) ;
ATSlocal (ats_ptr_type, tmp19) ;
ATSlocal (ats_int_type, tmp20) ;
ATSlocal (ats_int_type, tmp21) ;
ATSlocal (ats_bool_type, tmp22) ;

__ats_lab_symtbl_search_probe_3:
tmp16 = ats_caselptrind_mac(ats_ptr_type, arg0, [arg2]) ;
do {
/* branch: __ats_lab_0 */
__ats_lab_0_0:
if (tmp16 == (ats_sum_ptr_type)0) { goto __ats_lab_1_0 ; }
__ats_lab_0_1:
tmp17 = ats_caselptrlab_mac(anairiats_sum_1, tmp16, atslab_0) ;
tmp19 = ATS_2d0_2e2_2e12_2src_2ats_symbol_2esats__symbol_name (tmp17) ;
tmp18 = atspre_eq_string_string (tmp19, arg3) ;
if (tmp18) {
tmp15 = tmp16 ;
} else {
tmp20 = atspre_iadd (arg2, 1) ;
tmp22 = atspre_ilt (tmp20, arg1) ;
if (tmp22) {
tmp21 = tmp20 ;
} else {
tmp21 = 0 ;
} /* end of [if] */
arg0 = arg0 ;
arg1 = arg1 ;
arg2 = tmp21 ;
arg3 = arg3 ;
goto __ats_lab_symtbl_search_probe_3 ; // tail call
} /* end of [if] */
break ;

/* branch: __ats_lab_1 */
__ats_lab_1_0:
// if (tmp16 != (ats_sum_ptr_type)0) { ats_deadcode_failure_handle () ; }
__ats_lab_1_1:
tmp15 = (ats_sum_ptr_type)0 ;
break ;
} while (0) ;
return (tmp15) ;
} /* end of [symtbl_search_probe_3] */

/*
// /home/hwxi/Research/ATS-Anairiats/src/ats_symtbl.dats: 3706(line=128, offs=25) -- 4125(line=140, offs=4)
*/
ATSglobaldec()
ats_ptr_type
ATS_2d0_2e2_2e12_2src_2ats_symtbl_2esats__symtbl_search (ats_ptr_type arg0, ats_ptr_type arg1) {
/* local vardec */
ATSlocal (ats_ptr_type, tmp23) ;
ATSlocal (ats_ulint_type, tmp24) ;
ATSlocal (ats_uint_type, tmp25) ;
ATSlocal (ats_ptr_type, tmp26) ;
ATSlocal (ats_int_type, tmp27) ;
ATSlocal (ats_int_type, tmp28) ;
ATSlocal (ats_ptr_type, tmp29) ;
ATSlocal (ats_int_type, tmp30) ;

__ats_lab_ATS_2d0_2e2_2e12_2src_2ats_symtbl_2esats__symtbl_search:
tmp24 = atspre_string_hash_33 (arg1) ;
tmp25 = atspre_uint_of_ulint (tmp24) ;
tmp26 = ats_selsin_mac(arg0, atslab_1) ;
tmp28 = ats_selptr_mac(ats_castptr_mac(anairiats_rec_0, tmp26), atslab_size) ;
tmp27 = atspre_uimod (ats_castfn_mac(ats_uint_type, tmp25), tmp28) ;
tmp29 = ats_selptr_mac(ats_castptr_mac(anairiats_rec_0, tmp26), atslab_ptr) ;
tmp30 = ats_selptr_mac(ats_castptr_mac(anairiats_rec_0, tmp26), atslab_size) ;
tmp23 = symtbl_search_probe_3 (tmp29, tmp30, tmp27, arg1) ;
return (tmp23) ;
} /* end of [ATS_2d0_2e2_2e12_2src_2ats_symtbl_2esats__symtbl_search] */

/*
// /home/hwxi/Research/ATS-Anairiats/src/ats_symtbl.dats: 4178(line=144, offs=5) -- 4619(line=158, offs=4)
*/
ATSstaticdec()
ats_void_type
symtbl_insert_probe_5 (ats_ptr_type arg0, ats_int_type arg1, ats_int_type arg2, ats_ptr_type arg3) {
/* local vardec */
// ATSlocal_void (tmp31) ;
ATSlocal (ats_ptr_type, tmp32) ;
ATSlocal (ats_int_type, tmp33) ;
ATSlocal (ats_int_type, tmp34) ;
ATSlocal (ats_bool_type, tmp35) ;
ATSlocal (ats_ptr_type, tmp36) ;

__ats_lab_symtbl_insert_probe_5:
tmp32 = ats_caselptrind_mac(ats_ptr_type, arg0, [arg2]) ;
do {
/* branch: __ats_lab_2 */
__ats_lab_2_0:
if (tmp32 == (ats_sum_ptr_type)0) { goto __ats_lab_3_0 ; }
__ats_lab_2_1:
tmp33 = atspre_iadd (arg2, 1) ;
tmp35 = atspre_ilt (tmp33, arg1) ;
if (tmp35) {
tmp34 = tmp33 ;
} else {
tmp34 = 0 ;
} /* end of [if] */
arg0 = arg0 ;
arg1 = arg1 ;
arg2 = tmp34 ;
arg3 = arg3 ;
goto __ats_lab_symtbl_insert_probe_5 ; // tail call
break ;

/* branch: __ats_lab_3 */
__ats_lab_3_0:
// if (tmp32 != (ats_sum_ptr_type)0) { ats_deadcode_failure_handle () ; }
__ats_lab_3_1:
tmp36 = ATS_MALLOC(sizeof(anairiats_sum_1)) ;
ats_selptrset_mac(anairiats_sum_1, tmp36, atslab_0, arg3) ;
ats_caselptrind_mac(ats_ptr_type, arg0, [arg2]) = tmp36 ;
break ;
} while (0) ;
return /* (tmp31) */ ;
} /* end of [symtbl_insert_probe_5] */

/*
// /home/hwxi/Research/ATS-Anairiats/src/ats_symtbl.dats: 4678(line=162, offs=5) -- 5423(line=184, offs=4)
*/
ATSstaticdec()
ats_void_type
symtbl_resize_move_6 (ats_ptr_type arg0, ats_ptr_type arg1, ats_int_type arg2, ats_int_type arg3) {
/* local vardec */
// ATSlocal_void (tmp37) ;
ATSlocal (ats_bool_type, tmp38) ;
// ATSlocal_void (tmp39) ;
ATSlocal (ats_ptr_type, tmp40) ;
ATSlocal (ats_ptr_type, tmp41) ;
ATSlocal (ats_int_type, tmp42) ;
ATSlocal (ats_ulint_type, tmp43) ;
ATSlocal (ats_ptr_type, tmp44) ;
ATSlocal (ats_uint_type, tmp45) ;
ATSlocal (ats_int_type, tmp46) ;
ATSlocal (ats_int_type, tmp47) ;

__ats_lab_symtbl_resize_move_6:
tmp38 = atspre_ilt (arg3, arg2) ;
if (tmp38) {
tmp40 = ats_caselptrind_mac(ats_ptr_type, arg0, [arg3]) ;
do {
/* branch: __ats_lab_4 */
__ats_lab_4_0:
if (tmp40 == (ats_sum_ptr_type)0) { goto __ats_lab_5_0 ; }
__ats_lab_4_1:
tmp41 = ats_caselptrlab_mac(anairiats_sum_1, tmp40, atslab_0) ;
tmp42 = atspre_iadd (arg2, arg2) ;
tmp44 = ATS_2d0_2e2_2e12_2src_2ats_symbol_2esats__symbol_name (tmp41) ;
tmp43 = atspre_string_hash_33 (tmp44) ;
tmp45 = atspre_uint_of_ulint (tmp43) ;
tmp46 = atspre_uimod (ats_castfn_mac(ats_uint_type, tmp45), tmp42) ;
/* tmp39 = */ symtbl_insert_probe_5 (arg1, tmp42, tmp46, tmp41) ;
break ;

/* branch: __ats_lab_5 */
__ats_lab_5_0:
// if (tmp40 != (ats_sum_ptr_type)0) { ats_deadcode_failure_handle () ; }
__ats_lab_5_1:
break ;
} while (0) ;
tmp47 = atspre_iadd (arg3, 1) ;
arg0 = arg0 ;
arg1 = arg1 ;
arg2 = arg2 ;
arg3 = tmp47 ;
goto __ats_lab_symtbl_resize_move_6 ; // tail call
} else {
/* empty */
} /* end of [if] */
return /* (tmp37) */ ;
} /* end of [symtbl_resize_move_6] */

/*
// /home/hwxi/Research/ATS-Anairiats/src/ats_symtbl.dats: 5463(line=186, offs=5) -- 6140(line=206, offs=4)
*/
ATSstaticdec()
ats_void_type
symtbl_resize_7 (ats_ptr_type arg0) {
/* local vardec */
// ATSlocal_void (tmp48) ;
ATSlocal (ats_ptr_type, tmp49) ;
ATSlocal (ats_ptr_type, tmp50) ;
ATSlocal (ats_int_type, tmp51) ;
ATSlocal (ats_int_type, tmp52) ;
ATSlocal (ats_ptr_type, tmp53) ;
ATSlocal (ats_ptr_type, tmp54) ;
ATSlocal (ats_ptr_type, tmp55) ;
// ATSlocal_void (tmp56) ;
// ATSlocal_void (tmp57) ;
// ATSlocal_void (tmp58) ;
ATSlocal (ats_int_type, tmp59) ;

__ats_lab_symtbl_resize_7:
tmp49 = ats_selsin_mac(arg0, atslab_1) ;
tmp50 = ats_selptr_mac(ats_castptr_mac(anairiats_rec_0, tmp49), atslab_ptr) ;
tmp51 = ats_selptr_mac(ats_castptr_mac(anairiats_rec_0, tmp49), atslab_size) ;
tmp52 = atspre_iadd (tmp51, tmp51) ;
tmp53 = ats_array_ptr_alloc_tsz (tmp52, sizeof(ats_ptr_type)) ;
tmp54 = ats_selsin_mac(tmp53, atslab_2) ;
/* ats_ptr_type tmp55 ; */
tmp55 = (ats_sum_ptr_type)0 ;
/* tmp56 = */ array_ptr_initialize_elt_01689_ats_ptr_type (tmp54, tmp52, tmp55) ;
/* tmp57 = */ symtbl_resize_move_6 (tmp50, tmp54, tmp51, 0) ;
/* tmp58 = */ ats_array_ptr_free (tmp50) ;
ats_selptr_mac(ats_castptr_mac(anairiats_rec_0, tmp49), atslab_ptr) = tmp54 ;
tmp59 = atspre_iadd (tmp51, tmp51) ;
ats_selptr_mac(ats_castptr_mac(anairiats_rec_0, tmp49), atslab_size) = tmp59 ;
return /* (tmp48) */ ;
} /* end of [symtbl_resize_7] */

/*
// /home/hwxi/Research/ATS-Anairiats/src/ats_symtbl.dats: 6172(line=208, offs=5) -- 6429(line=216, offs=4)
*/
ATSstaticdec()
ats_void_type
symtbl_resize_if_8 (ats_ptr_type arg0) {
/* local vardec */
// ATSlocal_void (tmp60) ;
ATSlocal (ats_ptr_type, tmp61) ;
ATSlocal (ats_int_type, tmp62) ;
ATSlocal (ats_ptr_type, tmp63) ;
ATSlocal (ats_int_type, tmp64) ;
ATSlocal (ats_bool_type, tmp65) ;
ATSlocal (ats_int_type, tmp66) ;

__ats_lab_symtbl_resize_if_8:
tmp61 = ats_selsin_mac(arg0, atslab_1) ;
tmp62 = ats_selptr_mac(ats_castptr_mac(anairiats_rec_0, tmp61), atslab_nitm) ;
tmp63 = ats_selsin_mac(arg0, atslab_1) ;
tmp64 = ats_selptr_mac(ats_castptr_mac(anairiats_rec_0, tmp63), atslab_size) ;
tmp66 = atspre_imul (2, tmp62) ;
tmp65 = atspre_igt (tmp66, tmp64) ;
if (tmp65) {
/* tmp60 = */ symtbl_resize_7 (arg0) ;
} else {
/* empty */
} /* end of [if] */
return /* (tmp60) */ ;
} /* end of [symtbl_resize_if_8] */

/*
// /home/hwxi/Research/ATS-Anairiats/src/ats_symtbl.dats: 6505(line=221, offs=15) -- 6980(line=239, offs=4)
*/
ATSglobaldec()
ats_void_type
ATS_2d0_2e2_2e12_2src_2ats_symtbl_2esats__symtbl_insert (ats_ptr_type arg0, ats_ptr_type arg1, ats_ptr_type arg2) {
/* local vardec */
// ATSlocal_void (tmp67) ;
// ATSlocal_void (tmp68) ;
ATSlocal (ats_ulint_type, tmp69) ;
ATSlocal (ats_uint_type, tmp70) ;
ATSlocal (ats_ptr_type, tmp71) ;
ATSlocal (ats_int_type, tmp72) ;
ATSlocal (ats_int_type, tmp73) ;
// ATSlocal_void (tmp74) ;
ATSlocal (ats_ptr_type, tmp75) ;
ATSlocal (ats_int_type, tmp76) ;
ATSlocal (ats_int_type, tmp77) ;
ATSlocal (ats_int_type, tmp78) ;

__ats_lab_ATS_2d0_2e2_2e12_2src_2ats_symtbl_2esats__symtbl_insert:
/* tmp68 = */ symtbl_resize_if_8 (arg0) ;
tmp69 = atspre_string_hash_33 (arg1) ;
tmp70 = atspre_uint_of_ulint (tmp69) ;
tmp71 = ats_selsin_mac(arg0, atslab_1) ;
tmp73 = ats_selptr_mac(ats_castptr_mac(anairiats_rec_0, tmp71), atslab_size) ;
tmp72 = atspre_uimod (ats_castfn_mac(ats_uint_type, tmp70), tmp73) ;
tmp75 = ats_selptr_mac(ats_castptr_mac(anairiats_rec_0, tmp71), atslab_ptr) ;
tmp76 = ats_selptr_mac(ats_castptr_mac(anairiats_rec_0, tmp71), atslab_size) ;
/* tmp74 = */ symtbl_insert_probe_5 (tmp75, tmp76, tmp72, arg2) ;
tmp78 = ats_selptr_mac(ats_castptr_mac(anairiats_rec_0, tmp71), atslab_nitm) ;
tmp77 = atspre_iadd (1, tmp78) ;
ats_selptr_mac(ats_castptr_mac(anairiats_rec_0, tmp71), atslab_nitm) = tmp77 ;
return /* (tmp67) */ ;
} /* end of [ATS_2d0_2e2_2e12_2src_2ats_symtbl_2esats__symtbl_insert] */

/* static load function */

extern ats_void_type ATS_2d0_2e2_2e12_2src_2ats_array_2esats__staload (void) ;
extern ats_void_type ATS_2d0_2e2_2e12_2src_2ats_array_2edats__staload (void) ;
extern ats_void_type ATS_2d0_2e2_2e12_2src_2ats_counter_2esats__staload (void) ;
extern ats_void_type ATS_2d0_2e2_2e12_2src_2ats_symbol_2esats__staload (void) ;
extern ats_void_type ATS_2d0_2e2_2e12_2src_2ats_symtbl_2esats__staload (void) ;

ats_void_type
ATS_2d0_2e2_2e12_2src_2ats_symtbl_2edats__staload () {
static int ATS_2d0_2e2_2e12_2src_2ats_symtbl_2edats__staload_flag = 0 ;
if (ATS_2d0_2e2_2e12_2src_2ats_symtbl_2edats__staload_flag) return ;
ATS_2d0_2e2_2e12_2src_2ats_symtbl_2edats__staload_flag = 1 ;

ATS_2d0_2e2_2e12_2src_2ats_array_2esats__staload () ;
ATS_2d0_2e2_2e12_2src_2ats_array_2edats__staload () ;
ATS_2d0_2e2_2e12_2src_2ats_counter_2esats__staload () ;
ATS_2d0_2e2_2e12_2src_2ats_symbol_2esats__staload () ;
ATS_2d0_2e2_2e12_2src_2ats_symtbl_2esats__staload () ;

return ;
} /* staload function */

/* dynamic load function */

// dynload flag declaration
extern ats_int_type ATS_2d0_2e2_2e12_2src_2ats_symtbl_2edats__dynload_flag ;

ats_void_type
ATS_2d0_2e2_2e12_2src_2ats_symtbl_2edats__dynload () {
ATS_2d0_2e2_2e12_2src_2ats_symtbl_2edats__dynload_flag = 1 ;
ATS_2d0_2e2_2e12_2src_2ats_symtbl_2edats__staload () ;

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

/* end of [/home/hwxi/Research/ATS-Anairiats/bootstrap1/ats_symtbl_dats.c] */
