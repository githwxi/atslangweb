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

#include "ats_counter.cats"

#include "ats_intinf.cats"

#include "ats_counter.cats"

#include "ats_intinf.cats"

#include "ats_counter.cats"

#include "ats_counter.cats"

#include "ats_intinf.cats"

#include "ats_counter.cats"
/* external codes at top */

#include "ats_counter.cats" /* only needed for [ATS/Geizella] */

/* type definitions */
typedef struct {
ats_ptr_type atslab_0 ;
ats_ptr_type atslab_1 ;
} anairiats_sum_0 ;

typedef
struct {
ats_ptr_type atslab_d2mac_loc ;
ats_ptr_type atslab_d2mac_sym ;
ats_int_type atslab_d2mac_kind ;
ats_int_type atslab_d2mac_narg ;
ats_ptr_type atslab_d2mac_arglst ;
ats_ptr_type atslab_d2mac_def ;
atsopt_count_type atslab_d2mac_stamp ;
} anairiats_rec_1 ;

/* external typedefs */
/* external dynamic constructor declarations */
ATSextern_val(ats_sum_type, ATS_2d0_2e2_2e12_2prelude_2basics_sta_2esats__list_cons_0) ;
ATSextern_val(ats_sum_type, ATS_2d0_2e2_2e12_2prelude_2basics_sta_2esats__list_nil_1) ;

/* external dynamic constant declarations */
ATSextern_fun(ats_void_type, atspre_vbox_make_view_ptr) (ats_ptr_type) ;
ATSextern_fun(ats_ptr_type, atspre_stdout_get) () ;
ATSextern_fun(ats_void_type, atspre_stdout_view_set) () ;
ATSextern_fun(ats_ptr_type, atspre_stderr_get) () ;
ATSextern_fun(ats_void_type, atspre_stderr_view_set) () ;
ATSextern_fun(ats_int_type, atspre_iadd) (ats_int_type, ats_int_type) ;
ATSextern_fun(ats_ptr_type, atspre_ptr_alloc_tsz) (ats_size_type) ;
ATSextern_fun(atsopt_count_type, ATS_2d0_2e2_2e12_2src_2ats_stamp_2esats__d2mac_stamp_make) () ;
ATSextern_fun(ats_void_type, ATS_2d0_2e2_2e12_2src_2ats_symbol_2esats__fprint_symbol) (ats_ref_type, ats_ptr_type) ;
ATSextern_fun(ats_void_type, ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__fprint_d2mac) (ats_ref_type, ats_ptr_type) ;
ATSextern_fun(ats_ptr_type, ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__d2mac_get_sym) (ats_ptr_type) ;

/* external dynamic terminating constant declarations */
#ifdef _ATS_PROOFCHECK
extern
ats_void_type ATS_2d0_2e2_2e12_2prelude_2basics_dyn_2esats__file_mode_lte_w_w_prfck () ;
#endif /* _ATS_PROOFCHECK */

/* assuming abstract types */
int ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__sasp__d2mac_abs_t = 0 ;

/* sum constructor declarations */
/* exn constructor declarations */
/* global dynamic (non-functional) constant declarations */
/* internal function declarations */
static
ats_int_type aux_1 (ats_ptr_type arg0) ;

/* partial value template declarations */
/* static temporary variable declarations */
/* external value variable declarations */

/* function implementations */

/*
// /home/hwxi/Research/ATS-Anairiats/src/ats_dynexp2_dmac.dats: 2458(line=85, offs=7) -- 2588(line=87, offs=63)
*/
ATSstaticdec()
ats_int_type
aux_1 (ats_ptr_type arg0) {
/* local vardec */
ATSlocal (ats_int_type, tmp1) ;
ATSlocal (ats_ptr_type, tmp2) ;
ATSlocal (ats_int_type, tmp3) ;

__ats_lab_aux_1:
do {
/* branch: __ats_lab_0 */
__ats_lab_0_0:
if (arg0 == (ats_sum_ptr_type)0) { goto __ats_lab_1_0 ; }
__ats_lab_0_1:
tmp2 = ats_caselptrlab_mac(anairiats_sum_0, arg0, atslab_1) ;
tmp3 = aux_1 (tmp2) ;
tmp1 = atspre_iadd (1, tmp3) ;
break ;

/* branch: __ats_lab_1 */
__ats_lab_1_0:
// if (arg0 != (ats_sum_ptr_type)0) { ats_deadcode_failure_handle () ; }
__ats_lab_1_1:
tmp1 = 0 ;
break ;
} while (0) ;
return (tmp1) ;
} /* end of [aux_1] */

/*
// /home/hwxi/Research/ATS-Anairiats/src/ats_dynexp2_dmac.dats: 2387(line=82, offs=3) -- 3097(line=112, offs=4)
*/
ATSglobaldec()
ats_ptr_type
ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__d2mac_make (ats_ptr_type arg0, ats_ptr_type arg1, ats_int_type arg2, ats_ptr_type arg3, ats_ptr_type arg4) {
/* local vardec */
ATSlocal (ats_ptr_type, tmp0) ;
ATSlocal (ats_int_type, tmp4) ;
ATSlocal (atsopt_count_type, tmp5) ;
ATSlocal (ats_ptr_type, tmp6) ;
ATSlocal (ats_ptr_type, tmp7) ;
// ATSlocal_void (tmp8) ;
// ATSlocal_void (tmp9) ;

__ats_lab_ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__d2mac_make:
tmp4 = aux_1 (arg3) ;
tmp5 = ATS_2d0_2e2_2e12_2src_2ats_stamp_2esats__d2mac_stamp_make () ;
tmp6 = atspre_ptr_alloc_tsz (sizeof(anairiats_rec_1)) ;
tmp7 = ats_selsin_mac(tmp6, atslab_2) ;
ats_selptr_mac(ats_castptr_mac(anairiats_rec_1, tmp7), atslab_d2mac_loc) = arg0 ;
ats_selptr_mac(ats_castptr_mac(anairiats_rec_1, tmp7), atslab_d2mac_sym) = arg1 ;
ats_selptr_mac(ats_castptr_mac(anairiats_rec_1, tmp7), atslab_d2mac_kind) = arg2 ;
ats_selptr_mac(ats_castptr_mac(anairiats_rec_1, tmp7), atslab_d2mac_narg) = tmp4 ;
ats_selptr_mac(ats_castptr_mac(anairiats_rec_1, tmp7), atslab_d2mac_arglst) = arg3 ;
ats_selptr_mac(ats_castptr_mac(anairiats_rec_1, tmp7), atslab_d2mac_def) = arg4 ;
ats_selptr_mac(ats_castptr_mac(anairiats_rec_1, tmp7), atslab_d2mac_stamp) = tmp5 ;
/* tmp8 = */ atspre_vbox_make_view_ptr (tmp7) ;
/* tmp9 = ats_selsin_mac(tmp8, atslab_1) */ ;
tmp0 = tmp7 ;
return (tmp0) ;
} /* end of [ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__d2mac_make] */

/*
// /home/hwxi/Research/ATS-Anairiats/src/ats_dynexp2_dmac.dats: 3146(line=114, offs=25) -- 3203(line=115, offs=50)
*/
ATSglobaldec()
ats_ptr_type
ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__d2mac_get_loc (ats_ptr_type arg0) {
/* local vardec */
ATSlocal (ats_ptr_type, tmp10) ;
ATSlocal (ats_ptr_type, tmp11) ;

__ats_lab_ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__d2mac_get_loc:
tmp11 = ats_selsin_mac(arg0, atslab_1) ;
tmp10 = ats_selptr_mac(ats_castptr_mac(anairiats_rec_1, tmp11), atslab_d2mac_loc) ;
return (tmp10) ;
} /* end of [ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__d2mac_get_loc] */

/*
// /home/hwxi/Research/ATS-Anairiats/src/ats_dynexp2_dmac.dats: 3229(line=117, offs=25) -- 3286(line=118, offs=50)
*/
ATSglobaldec()
ats_ptr_type
ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__d2mac_get_sym (ats_ptr_type arg0) {
/* local vardec */
ATSlocal (ats_ptr_type, tmp12) ;
ATSlocal (ats_ptr_type, tmp13) ;

__ats_lab_ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__d2mac_get_sym:
tmp13 = ats_selsin_mac(arg0, atslab_1) ;
tmp12 = ats_selptr_mac(ats_castptr_mac(anairiats_rec_1, tmp13), atslab_d2mac_sym) ;
return (tmp12) ;
} /* end of [ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__d2mac_get_sym] */

/*
// /home/hwxi/Research/ATS-Anairiats/src/ats_dynexp2_dmac.dats: 3313(line=120, offs=26) -- 3371(line=121, offs=51)
*/
ATSglobaldec()
ats_int_type
ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__d2mac_get_kind (ats_ptr_type arg0) {
/* local vardec */
ATSlocal (ats_int_type, tmp14) ;
ATSlocal (ats_ptr_type, tmp15) ;

__ats_lab_ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__d2mac_get_kind:
tmp15 = ats_selsin_mac(arg0, atslab_1) ;
tmp14 = ats_selptr_mac(ats_castptr_mac(anairiats_rec_1, tmp15), atslab_d2mac_kind) ;
return (tmp14) ;
} /* end of [ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__d2mac_get_kind] */

/*
// /home/hwxi/Research/ATS-Anairiats/src/ats_dynexp2_dmac.dats: 3398(line=123, offs=26) -- 3456(line=124, offs=51)
*/
ATSglobaldec()
ats_int_type
ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__d2mac_get_narg (ats_ptr_type arg0) {
/* local vardec */
ATSlocal (ats_int_type, tmp16) ;
ATSlocal (ats_ptr_type, tmp17) ;

__ats_lab_ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__d2mac_get_narg:
tmp17 = ats_selsin_mac(arg0, atslab_1) ;
tmp16 = ats_selptr_mac(ats_castptr_mac(anairiats_rec_1, tmp17), atslab_d2mac_narg) ;
return (tmp16) ;
} /* end of [ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__d2mac_get_narg] */

/*
// /home/hwxi/Research/ATS-Anairiats/src/ats_dynexp2_dmac.dats: 3485(line=126, offs=28) -- 3545(line=127, offs=53)
*/
ATSglobaldec()
ats_ptr_type
ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__d2mac_get_arglst (ats_ptr_type arg0) {
/* local vardec */
ATSlocal (ats_ptr_type, tmp18) ;
ATSlocal (ats_ptr_type, tmp19) ;

__ats_lab_ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__d2mac_get_arglst:
tmp19 = ats_selsin_mac(arg0, atslab_1) ;
tmp18 = ats_selptr_mac(ats_castptr_mac(anairiats_rec_1, tmp19), atslab_d2mac_arglst) ;
return (tmp18) ;
} /* end of [ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__d2mac_get_arglst] */

/*
// /home/hwxi/Research/ATS-Anairiats/src/ats_dynexp2_dmac.dats: 3571(line=129, offs=25) -- 3628(line=130, offs=50)
*/
ATSglobaldec()
ats_ptr_type
ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__d2mac_get_def (ats_ptr_type arg0) {
/* local vardec */
ATSlocal (ats_ptr_type, tmp20) ;
ATSlocal (ats_ptr_type, tmp21) ;

__ats_lab_ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__d2mac_get_def:
tmp21 = ats_selsin_mac(arg0, atslab_1) ;
tmp20 = ats_selptr_mac(ats_castptr_mac(anairiats_rec_1, tmp21), atslab_d2mac_def) ;
return (tmp20) ;
} /* end of [ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__d2mac_get_def] */

/*
// /home/hwxi/Research/ATS-Anairiats/src/ats_dynexp2_dmac.dats: 3654(line=132, offs=25) -- 3723(line=133, offs=57)
*/
ATSglobaldec()
ats_void_type
ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__d2mac_set_def (ats_ptr_type arg0, ats_ptr_type arg1) {
/* local vardec */
// ATSlocal_void (tmp22) ;
ATSlocal (ats_ptr_type, tmp23) ;

__ats_lab_ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__d2mac_set_def:
tmp23 = ats_selsin_mac(arg0, atslab_1) ;
ats_selptr_mac(ats_castptr_mac(anairiats_rec_1, tmp23), atslab_d2mac_def) = arg1 ;
return /* (tmp22) */ ;
} /* end of [ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__d2mac_set_def] */

/*
// /home/hwxi/Research/ATS-Anairiats/src/ats_dynexp2_dmac.dats: 3751(line=135, offs=27) -- 3810(line=136, offs=52)
*/
ATSglobaldec()
atsopt_count_type
ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__d2mac_get_stamp (ats_ptr_type arg0) {
/* local vardec */
ATSlocal (atsopt_count_type, tmp24) ;
ATSlocal (ats_ptr_type, tmp25) ;

__ats_lab_ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__d2mac_get_stamp:
tmp25 = ats_selsin_mac(arg0, atslab_1) ;
tmp24 = ats_selptr_mac(ats_castptr_mac(anairiats_rec_1, tmp25), atslab_d2mac_stamp) ;
return (tmp24) ;
} /* end of [ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__d2mac_get_stamp] */

/*
// /home/hwxi/Research/ATS-Anairiats/src/ats_dynexp2_dmac.dats: 3904(line=143, offs=14) -- 3980(line=144, offs=55)
*/
ATSglobaldec()
ats_void_type
ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__fprint_d2mac (ats_ref_type arg0, ats_ptr_type arg1) {
/* local vardec */
// ATSlocal_void (tmp26) ;
ATSlocal (ats_ptr_type, tmp27) ;

__ats_lab_ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__fprint_d2mac:
tmp27 = ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__d2mac_get_sym (arg1) ;
/* tmp26 = */ ATS_2d0_2e2_2e12_2src_2ats_symbol_2esats__fprint_symbol (arg0, tmp27) ;
return /* (tmp26) */ ;
} /* end of [ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__fprint_d2mac] */

/*
// /home/hwxi/Research/ATS-Anairiats/src/ats_dynexp2_dmac.dats: 4029(line=147, offs=23) -- 4066(line=147, offs=60)
*/
ATSglobaldec()
ats_void_type
ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__print_d2mac (ats_ptr_type arg0) {
/* local vardec */
// ATSlocal_void (tmp28) ;
ATSlocal (ats_ptr_type, tmp29) ;
ATSlocal (ats_ptr_type, tmp30) ;
// ATSlocal_void (tmp31) ;

__ats_lab_ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__print_d2mac:
tmp29 = atspre_stdout_get () ;
tmp30 = ats_selsin_mac(tmp29, atslab_1) ;
/* tmp31 = */ ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__fprint_d2mac (tmp30, arg0) ;
/* tmp28 = */ atspre_stdout_view_set () ;
return /* (tmp28) */ ;
} /* end of [ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__print_d2mac] */

/*
// /home/hwxi/Research/ATS-Anairiats/src/ats_dynexp2_dmac.dats: 4089(line=148, offs=23) -- 4126(line=148, offs=60)
*/
ATSglobaldec()
ats_void_type
ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__prerr_d2mac (ats_ptr_type arg0) {
/* local vardec */
// ATSlocal_void (tmp32) ;
ATSlocal (ats_ptr_type, tmp33) ;
ATSlocal (ats_ptr_type, tmp34) ;
// ATSlocal_void (tmp35) ;

__ats_lab_ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__prerr_d2mac:
tmp33 = atspre_stderr_get () ;
tmp34 = ats_selsin_mac(tmp33, atslab_1) ;
/* tmp35 = */ ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__fprint_d2mac (tmp34, arg0) ;
/* tmp32 = */ atspre_stderr_view_set () ;
return /* (tmp32) */ ;
} /* end of [ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__prerr_d2mac] */

/* static load function */

extern ats_void_type ATS_2d0_2e2_2e12_2src_2ats_list_2esats__staload (void) ;
extern ats_void_type ATS_2d0_2e2_2e12_2src_2ats_stamp_2esats__staload (void) ;
extern ats_void_type ATS_2d0_2e2_2e12_2src_2ats_syntax_2esats__staload (void) ;
extern ats_void_type ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__staload (void) ;
extern ats_void_type ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__staload (void) ;

ats_void_type
ATS_2d0_2e2_2e12_2src_2ats_dynexp2_dmac_2edats__staload () {
static int ATS_2d0_2e2_2e12_2src_2ats_dynexp2_dmac_2edats__staload_flag = 0 ;
if (ATS_2d0_2e2_2e12_2src_2ats_dynexp2_dmac_2edats__staload_flag) return ;
ATS_2d0_2e2_2e12_2src_2ats_dynexp2_dmac_2edats__staload_flag = 1 ;

ATS_2d0_2e2_2e12_2src_2ats_list_2esats__staload () ;
ATS_2d0_2e2_2e12_2src_2ats_stamp_2esats__staload () ;
ATS_2d0_2e2_2e12_2src_2ats_syntax_2esats__staload () ;
ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__staload () ;
ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__staload () ;

return ;
} /* staload function */

/* dynamic load function */

// dynload flag declaration
extern ats_int_type ATS_2d0_2e2_2e12_2src_2ats_dynexp2_dmac_2edats__dynload_flag ;

ats_void_type
ATS_2d0_2e2_2e12_2src_2ats_dynexp2_dmac_2edats__dynload () {
ATS_2d0_2e2_2e12_2src_2ats_dynexp2_dmac_2edats__dynload_flag = 1 ;
ATS_2d0_2e2_2e12_2src_2ats_dynexp2_dmac_2edats__staload () ;

#ifdef _ATS_PROOFCHECK
ATS_2d0_2e2_2e12_2prelude_2basics_dyn_2esats__file_mode_lte_w_w_prfck () ;
#endif /* _ATS_PROOFCHECK */

/* marking static variables for GC */

/* marking external values for GC */

/* code for dynamic loading */
return ;
} /* end of [dynload function] */

/* external codes at mid */
/* external codes at bot */

/* ****** ****** */

/* end of [/home/hwxi/Research/ATS-Anairiats/bootstrap1/ats_dynexp2_dmac_dats.c] */
