/*
**
** The C code is generated by ATS/Anairiats
** The compilation time is: 2015-10-2: 11h: 1m
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

#include "ats_intinf.cats"

#include "ats_counter.cats"

#include "ats_intinf.cats"

#include "ats_counter.cats"

#include "ats_counter.cats"

#include "ats_intinf.cats"

#include "ats_counter.cats"

#include "ats_counter.cats"

#include "ats_intinf.cats"

#include "ats_counter.cats"

#include "ats_intinf.cats"

#include "ats_counter.cats"

#include "ats_counter.cats"

#include "ats_intinf.cats"

#include "ats_counter.cats"

#include "ats_counter.cats"

#include "ats_intinf.cats"

#include "ats_counter.cats"

#include "ats_intinf.cats"

#include "ats_counter.cats"

#include "ats_counter.cats"

#include "ats_intinf.cats"

#include "ats_counter.cats"

#include "ats_counter.cats"

#include "ats_intinf.cats"

#include "ats_counter.cats"

#include "ats_intinf.cats"

#include "ats_counter.cats"

#include "ats_counter.cats"

#include "ats_intinf.cats"

#include "ats_counter.cats"

#include "ats_counter.cats"

#include "ats_intinf.cats"

#include "ats_counter.cats"

#include "ats_intinf.cats"

#include "ats_counter.cats"

#include "ats_counter.cats"

#include "ats_intinf.cats"

#include "ats_counter.cats"

#include "ats_counter.cats"

#include "ats_intinf.cats"

#include "ats_counter.cats"

#include "ats_intinf.cats"

#include "ats_counter.cats"

#include "ats_counter.cats"

#include "ats_intinf.cats"

#include "ats_counter.cats"

#include "ats_counter.cats"

#include "ats_intinf.cats"

#include "ats_counter.cats"

#include "ats_counter.cats"

#include "ats_intinf.cats"

#include "ats_counter.cats"

#include "ats_intinf.cats"

#include "ats_counter.cats"

#include "ats_counter.cats"

#include "ats_intinf.cats"

#include "ats_counter.cats"

#include "ats_counter.cats"

#include "ats_intinf.cats"

#include "ats_counter.cats"

#include "ats_intinf.cats"

#include "ats_counter.cats"

#include "ats_counter.cats"

#include "ats_intinf.cats"

#include "ats_counter.cats"

#include "ats_counter.cats"

#include "ats_intinf.cats"

#include "ats_counter.cats"

#include "ats_intinf.cats"

#include "ats_counter.cats"

#include "ats_counter.cats"

#include "ats_intinf.cats"

#include "ats_counter.cats"

#include "ats_counter.cats"

#include "ats_intinf.cats"

#include "ats_counter.cats"

#include "ats_intinf.cats"

#include "ats_counter.cats"

#include "ats_counter.cats"

#include "ats_intinf.cats"

#include "ats_counter.cats"

#include "ats_counter.cats"

#include "ats_intinf.cats"

#include "ats_counter.cats"

#include "ats_intinf.cats"

#include "ats_counter.cats"

#include "ats_counter.cats"

#include "ats_intinf.cats"

#include "ats_counter.cats"

#include "ats_counter.cats"

#include "ats_intinf.cats"

#include "ats_counter.cats"

#include "ats_intinf.cats"

#include "ats_counter.cats"

#include "ats_counter.cats"

#include "ats_intinf.cats"

#include "ats_counter.cats"

#include "ats_counter.cats"

#include "ats_intinf.cats"

#include "ats_counter.cats"

#include "ats_intinf.cats"

#include "ats_counter.cats"

#include "ats_counter.cats"

#include "ats_intinf.cats"

#include "ats_counter.cats"

#include "ats_counter.cats"

#include "ats_intinf.cats"

#include "ats_counter.cats"

#include "ats_intinf.cats"

#include "ats_counter.cats"

#include "ats_counter.cats"

#include "ats_intinf.cats"

#include "ats_counter.cats"

#include "ats_counter.cats"

#include "ats_intinf.cats"

#include "ats_counter.cats"

#include "ats_intinf.cats"

#include "ats_counter.cats"

#include "ats_counter.cats"

#include "ats_intinf.cats"

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
/* type definitions */
typedef
struct {
ats_ptr_type atslab_i2nvarg_var ;
ats_ptr_type atslab_i2nvarg_typ ;
} anairiats_rec_0 ;

typedef struct {
ats_ptr_type atslab_0 ;
} anairiats_sum_1 ;

typedef
struct {
ats_ptr_type atslab_0 ;
ats_ptr_type atslab_1 ;
} anairiats_rec_2 ;

typedef
struct {
ats_ptr_type atslab_loopi2nv_loc ;
ats_ptr_type atslab_loopi2nv_svs ;
ats_ptr_type atslab_loopi2nv_gua ;
ats_ptr_type atslab_loopi2nv_met ;
ats_ptr_type atslab_loopi2nv_arg ;
ats_ptr_type atslab_loopi2nv_res ;
} anairiats_rec_3 ;

typedef
struct {
ats_ptr_type atslab_i2nvresstate_svs ;
ats_ptr_type atslab_i2nvresstate_gua ;
ats_ptr_type atslab_i2nvresstate_arg ;
ats_ptr_type atslab_i2nvresstate_met ;
} anairiats_rec_4 ;

typedef
struct {
ats_ptr_type atslab_d3exp_loc ;
ats_ptr_type atslab_d3exp_eff ;
ats_ptr_type atslab_d3exp_typ ;
ats_ptr_type atslab_d3exp_node ;
} anairiats_rec_5 ;

typedef struct {
int tag ;
ats_int_type atslab_0 ;
} anairiats_sum_6 ;

typedef struct {
int tag ;
ats_ptr_type atslab_0 ;
ats_ptr_type atslab_1 ;
ats_ptr_type atslab_2 ;
ats_ptr_type atslab_3 ;
} anairiats_sum_7 ;

/* external typedefs */
/* external dynamic constructor declarations */
ATSextern_val(ats_sum_type, ATS_2d0_2e2_2e12_2prelude_2basics_sta_2esats__None_0) ;
ATSextern_val(ats_sum_type, ATS_2d0_2e2_2e12_2prelude_2basics_sta_2esats__Some_1) ;
ATSextern_val(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_trans3_env_2esats__C3STRKINDloop_5) ;
ATSextern_val(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_trans3_env_2esats__LMLPloop0_1) ;
ATSextern_val(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_trans3_env_2esats__LMLPloop1_2) ;

/* external dynamic constant declarations */
ATSextern_fun(ats_void_type, atspre_prerr_newline) () ;
ATSextern_fun(ats_bool_type, atspre_neg_bool) (ats_bool_type) ;
ATSextern_fun(ats_bool_type, atspre_gt_int_int) (ats_int_type, ats_int_type) ;
ATSextern_fun(ats_void_type, atspre_prerr_string) (ats_ptr_type) ;
ATSextern_fun(ats_varet_type, ATS_2d0_2e2_2e12_2src_2ats_error_2esats__abort) () ;
ATSextern_fun(ats_void_type, ATS_2d0_2e2_2e12_2src_2ats_location_2esats__prerr_location) (ats_ptr_type) ;
ATSextern_fun(ats_ptr_type, ATS_2d0_2e2_2e12_2src_2ats_list_2esats__list_append) (ats_ptr_type, ats_ptr_type) ;
ATSextern_fun(ats_void_type, ATS_2d0_2e2_2e12_2src_2ats_list_2esats__list_foreach_cloptr) (ats_ptr_type, ats_clo_ptr_type) ;
ATSextern_fun(ats_ptr_type, ATS_2d0_2e2_2e12_2src_2ats_list_2esats__list_map_cloptr) (ats_ptr_type, ats_clo_ptr_type) ;
ATSextern_fun(ats_ptr_type, ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__s2exp_subst) (ats_ptr_type, ats_ptr_type) ;
ATSextern_fun(ats_void_type, ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__d2var_set_typ) (ats_ptr_type, ats_ptr_type) ;
ATSextern_fun(ats_bool_type, ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__d2exp_is_raised) (ats_ptr_type) ;
ATSextern_fun(ats_ptr_type, ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__i2nvarg_make) (ats_ptr_type, ats_ptr_type) ;
ATSextern_fun(ats_ptr_type, ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__i2nvresstate_make) (ats_ptr_type, ats_ptr_type, ats_ptr_type) ;
ATSextern_fun(ats_ptr_type, ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__i2nvresstate_make_met) (ats_ptr_type, ats_ptr_type, ats_ptr_type, ats_ptr_type) ;
ATSextern_fun(ats_ptr_type, ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__loopi2nv_update) (ats_ptr_type) ;
ATSextern_fun(ats_ptr_type, ATS_2d0_2e2_2e12_2src_2ats_stadyncst2_2esats__s2exp_void_t0ype) () ;
ATSextern_fun(ats_ptr_type, ATS_2d0_2e2_2e12_2src_2ats_dynexp3_2esats__d3exp_loop) (ats_ptr_type, ats_ptr_type, ats_ptr_type, ats_ptr_type, ats_ptr_type) ;
ATSextern_fun(ats_ptr_type, ATS_2d0_2e2_2e12_2src_2ats_dynexp3_2esats__d3exp_loopexn) (ats_ptr_type, ats_int_type) ;
ATSextern_fun(ats_void_type, ATS_2d0_2e2_2e12_2src_2ats_trans3_env_2esats__metric_nat_check) (ats_ptr_type, ats_ptr_type) ;
ATSextern_fun(ats_void_type, ATS_2d0_2e2_2e12_2src_2ats_trans3_env_2esats__the_effect_env_check_ntm) (ats_ptr_type) ;
ATSextern_fun(ats_ptr_type, ATS_2d0_2e2_2e12_2src_2ats_trans3_env_2esats__s2exp_opnexi_and_add) (ats_ptr_type, ats_ptr_type) ;
ATSextern_fun(ats_ptr_type, ATS_2d0_2e2_2e12_2src_2ats_trans3_env_2esats__the_d2varset_env_stbefitemlst_save) () ;
ATSextern_fun(ats_void_type, ATS_2d0_2e2_2e12_2src_2ats_trans3_env_2esats__stbefitemlst_restore_typ) (ats_ptr_type) ;
ATSextern_fun(ats_void_type, atsopt_state_staftscstr_met_set) (ats_ptr_type, ats_ptr_type) ;
ATSextern_fun(ats_ptr_type, ATS_2d0_2e2_2e12_2src_2ats_trans3_env_2esats__staftscstr_initize) (ats_ptr_type, ats_ptr_type) ;
ATSextern_fun(ats_void_type, ATS_2d0_2e2_2e12_2src_2ats_trans3_env_2esats__staftscstr_stbefitemlst_merge) (ats_ptr_type, ats_ptr_type, ats_ptr_type) ;
ATSextern_fun(ats_void_type, ATS_2d0_2e2_2e12_2src_2ats_trans3_env_2esats__staftscstr_stbefitemlst_merge_skipmetck) (ats_ptr_type, ats_ptr_type, ats_ptr_type) ;
ATSextern_fun(ats_void_type, ATS_2d0_2e2_2e12_2src_2ats_trans3_env_2esats__staftscstr_stbefitemlst_check) (ats_ptr_type, ats_ptr_type, ats_ptr_type) ;
ATSextern_fun(ats_void_type, ATS_2d0_2e2_2e12_2src_2ats_trans3_env_2esats__staftscstr_stbefitemlst_update) (ats_ptr_type, ats_ptr_type, ats_ptr_type) ;
ATSextern_fun(ats_ptr_type, ATS_2d0_2e2_2e12_2src_2ats_trans3_env_2esats__the_lamloop_env_top) () ;
ATSextern_fun(ats_void_type, ATS_2d0_2e2_2e12_2src_2ats_trans3_env_2esats__the_lamloop_env_pop) () ;
ATSextern_fun(ats_void_type, ATS_2d0_2e2_2e12_2src_2ats_trans3_env_2esats__the_lamloop_env_push_loop0) () ;
ATSextern_fun(ats_void_type, ATS_2d0_2e2_2e12_2src_2ats_trans3_env_2esats__the_lamloop_env_push_loop1) (ats_ptr_type, ats_ptr_type, ats_ptr_type, ats_ptr_type) ;
ATSextern_fun(ats_void_type, ATS_2d0_2e2_2e12_2src_2ats_trans3_env_2esats__trans3_env_pop_sta_and_free) () ;
ATSextern_fun(ats_void_type, ATS_2d0_2e2_2e12_2src_2ats_trans3_env_2esats__trans3_env_pop_sta_and_add) (ats_ptr_type, ats_ptr_type) ;
ATSextern_fun(ats_void_type, ATS_2d0_2e2_2e12_2src_2ats_trans3_env_2esats__trans3_env_pop_sta_and_add_none) (ats_ptr_type) ;
ATSextern_fun(ats_void_type, ATS_2d0_2e2_2e12_2src_2ats_trans3_env_2esats__trans3_env_push_sta) () ;
ATSextern_fun(ats_void_type, ATS_2d0_2e2_2e12_2src_2ats_trans3_2esats__d3exp_open_and_add) (ats_ptr_type) ;
ATSextern_fun(ats_ptr_type, ATS_2d0_2e2_2e12_2src_2ats_trans3_2esats__d2exp_tr_up) (ats_ptr_type) ;
ATSextern_fun(ats_void_type, ATS_2d0_2e2_2e12_2src_2ats_trans3_2esats__assert_bool_tr_dn) (ats_ptr_type, ats_bool_type, ats_ptr_type) ;
ATSextern_fun(ats_ptr_type, ATS_2d0_2e2_2e12_2src_2ats_trans3_2esats__d2exp_tr_dn) (ats_ptr_type, ats_ptr_type) ;

/* external dynamic terminating constant declarations */
#ifdef _ATS_PROOFCHECK
#endif /* _ATS_PROOFCHECK */

/* assuming abstract types */
/* sum constructor declarations */
/* exn constructor declarations */
/* global dynamic (non-functional) constant declarations */
/* internal function declarations */
static
ats_ptr_type i2nvarg_subst_0 (ats_ptr_type arg0, ats_ptr_type arg1) ;
static
ats_ptr_type __ats_fun_2 (ats_ptr_type env0, ats_ptr_type arg0) ;
static
ats_clo_ptr_type __ats_fun_2_closure_make (ats_ptr_type env0) ;
static
ats_ptr_type __ats_fun_2_clofun (ats_clo_ptr_type cloptr, ats_ptr_type arg0) ;
static
ats_ptr_type i2nvarglst_subst_1 (ats_ptr_type arg0, ats_ptr_type arg1) ;
static
ats_void_type aux_4 (ats_ptr_type env0, ats_ptr_type arg0) ;
static
ats_clo_ptr_type aux_4_closure_make (ats_ptr_type env0) ;
static
ats_void_type aux_4_clofun (ats_clo_ptr_type cloptr, ats_ptr_type arg0) ;
static
anairiats_rec_2 d2exp_loopinv_tr_3 (ats_ptr_type arg0) ;

/* partial value template declarations */
/* static temporary variable declarations */
/* external value variable declarations */

/* function implementations */

/*
// /home/hwxi/Research/ATS-Anairiats/src/ats_trans3_loop.dats: 1839(line=55, offs=4) -- 2089(line=64, offs=4)
*/
ATSstaticdec()
ats_ptr_type
i2nvarg_subst_0 (ats_ptr_type arg0, ats_ptr_type arg1) {
/* local vardec */
ATSlocal (ats_ptr_type, tmp0) ;
ATSlocal (ats_ptr_type, tmp1) ;
ATSlocal (ats_ptr_type, tmp2) ;
ATSlocal (ats_ptr_type, tmp3) ;
ATSlocal (ats_ptr_type, tmp4) ;
ATSlocal (ats_ptr_type, tmp5) ;

__ats_lab_i2nvarg_subst_0:
tmp1 = ats_selbox_mac(ats_castptr_mac(anairiats_rec_0, arg1), atslab_i2nvarg_var) ;
tmp3 = ats_selbox_mac(ats_castptr_mac(anairiats_rec_0, arg1), atslab_i2nvarg_typ) ;
do {
/* branch: __ats_lab_0 */
__ats_lab_0_0:
if (tmp3 == (ats_sum_ptr_type)0) { goto __ats_lab_1_0 ; }
__ats_lab_0_1:
tmp4 = ats_caselptrlab_mac(anairiats_sum_1, tmp3, atslab_0) ;
tmp5 = ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__s2exp_subst (arg0, tmp4) ;
tmp2 = ATS_MALLOC(sizeof(anairiats_sum_1)) ;
ats_selptrset_mac(anairiats_sum_1, tmp2, atslab_0, tmp5) ;
break ;

/* branch: __ats_lab_1 */
__ats_lab_1_0:
// if (tmp3 != (ats_sum_ptr_type)0) { ats_deadcode_failure_handle () ; }
__ats_lab_1_1:
tmp2 = (ats_sum_ptr_type)0 ;
break ;
} while (0) ;
tmp0 = ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__i2nvarg_make (tmp1, tmp2) ;
return (tmp0) ;
} /* end of [i2nvarg_subst_0] */

/*
// /home/hwxi/Research/ATS-Anairiats/src/ats_trans3_loop.dats: 2228(line=69, offs=11) -- 2271(line=69, offs=54)
*/
ATSstaticdec()
ats_ptr_type
__ats_fun_2 (ats_ptr_type env0, ats_ptr_type arg0) {
/* local vardec */
ATSlocal (ats_ptr_type, tmp8) ;

__ats_lab___ats_fun_2:
tmp8 = i2nvarg_subst_0 (env0, arg0) ;
return (tmp8) ;
} /* end of [__ats_fun_2] */

typedef struct {
ats_fun_ptr_type closure_fun ;
ats_ptr_type closure_env_0 ;
} __ats_fun_2_closure_type ;

ats_ptr_type
__ats_fun_2_clofun (ats_clo_ptr_type cloptr, ats_ptr_type arg0) {
return __ats_fun_2 (((__ats_fun_2_closure_type*)cloptr)->closure_env_0, arg0) ;
} /* end of function */

ATSinline()
ats_void_type
__ats_fun_2_closure_init (__ats_fun_2_closure_type *p_clo, ats_ptr_type env0) {
p_clo->closure_fun = (ats_fun_ptr_type)&__ats_fun_2_clofun ;
p_clo->closure_env_0 = env0 ;
return ;
} /* end of function */

ats_clo_ptr_type
__ats_fun_2_closure_make (ats_ptr_type env0) {
__ats_fun_2_closure_type *p_clo = ATS_MALLOC(sizeof(__ats_fun_2_closure_type)) ;
__ats_fun_2_closure_init (p_clo, env0) ;
return (ats_clo_ptr_type)p_clo ;
} /* end of function */

/*
// /home/hwxi/Research/ATS-Anairiats/src/ats_trans3_loop.dats: 2120(line=66, offs=4) -- 2279(line=71, offs=4)
*/
ATSstaticdec()
ats_ptr_type
i2nvarglst_subst_1 (ats_ptr_type arg0, ats_ptr_type arg1) {
/* local vardec */
ATSlocal (ats_ptr_type, tmp6) ;
ATSlocal (ats_ptr_type, tmp7) ;

__ats_lab_i2nvarglst_subst_1:
/* ats_ptr_type tmp7 ; */
tmp7 = __ats_fun_2_closure_make (arg0) ;
tmp6 = ATS_2d0_2e2_2e12_2src_2ats_list_2esats__list_map_cloptr (arg1, tmp7) ;
ATS_FREE(tmp7) ;
return (tmp6) ;
} /* end of [i2nvarglst_subst_1] */

/*
// /home/hwxi/Research/ATS-Anairiats/src/ats_trans3_loop.dats: 3261(line=99, offs=8) -- 3591(line=110, offs=9)
*/
ATSstaticdec()
ats_void_type
aux_4 (ats_ptr_type env0, ats_ptr_type arg0) {
/* local vardec */
// ATSlocal_void (tmp21) ;
ATSlocal (ats_ptr_type, tmp22) ;
ATSlocal (ats_ptr_type, tmp23) ;
ATSlocal (ats_ptr_type, tmp24) ;
ATSlocal (ats_ptr_type, tmp25) ;
ATSlocal (ats_ptr_type, tmp26) ;
ATSlocal (ats_ptr_type, tmp27) ;

__ats_lab_aux_4:
tmp22 = ats_selbox_mac(ats_castptr_mac(anairiats_rec_0, arg0), atslab_i2nvarg_var) ;
tmp23 = ats_selbox_mac(ats_castptr_mac(anairiats_rec_0, arg0), atslab_i2nvarg_typ) ;
do {
/* branch: __ats_lab_4 */
__ats_lab_4_0:
if (tmp23 == (ats_sum_ptr_type)0) { goto __ats_lab_5_0 ; }
__ats_lab_4_1:
tmp24 = ats_caselptrlab_mac(anairiats_sum_1, tmp23, atslab_0) ;
tmp25 = ATS_2d0_2e2_2e12_2src_2ats_trans3_env_2esats__s2exp_opnexi_and_add (env0, tmp24) ;
tmp26 = ATS_MALLOC(sizeof(anairiats_sum_1)) ;
ats_selptrset_mac(anairiats_sum_1, tmp26, atslab_0, tmp25) ;
/* tmp21 = */ ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__d2var_set_typ (tmp22, tmp26) ;
break ;

/* branch: __ats_lab_5 */
__ats_lab_5_0:
// if (tmp23 != (ats_sum_ptr_type)0) { ats_deadcode_failure_handle () ; }
__ats_lab_5_1:
tmp27 = (ats_sum_ptr_type)0 ;
/* tmp21 = */ ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__d2var_set_typ (tmp22, tmp27) ;
break ;
} while (0) ;
return /* (tmp21) */ ;
} /* end of [aux_4] */

typedef struct {
ats_fun_ptr_type closure_fun ;
ats_ptr_type closure_env_0 ;
} aux_4_closure_type ;

ats_void_type
aux_4_clofun (ats_clo_ptr_type cloptr, ats_ptr_type arg0) {
aux_4 (((aux_4_closure_type*)cloptr)->closure_env_0, arg0) ; return ;
} /* end of function */

ATSinline()
ats_void_type
aux_4_closure_init (aux_4_closure_type *p_clo, ats_ptr_type env0) {
p_clo->closure_fun = (ats_fun_ptr_type)&aux_4_clofun ;
p_clo->closure_env_0 = env0 ;
return ;
} /* end of function */

ats_clo_ptr_type
aux_4_closure_make (ats_ptr_type env0) {
aux_4_closure_type *p_clo = ATS_MALLOC(sizeof(aux_4_closure_type)) ;
aux_4_closure_init (p_clo, env0) ;
return (ats_clo_ptr_type)p_clo ;
} /* end of function */

/*
// /home/hwxi/Research/ATS-Anairiats/src/ats_trans3_loop.dats: 2313(line=73, offs=4) -- 3710(line=116, offs=4)
*/
ATSstaticdec()
anairiats_rec_2
d2exp_loopinv_tr_3 (ats_ptr_type arg0) {
/* local vardec */
ATSlocal (anairiats_rec_2, tmp9) ;
ATSlocal (ats_ptr_type, tmp10) ;
ATSlocal (ats_ptr_type, tmp11) ;
ATSlocal (ats_ptr_type, tmp12) ;
ATSlocal (ats_ptr_type, tmp13) ;
ATSlocal (ats_ptr_type, tmp14) ;
ATSlocal (ats_ptr_type, tmp15) ;
// ATSlocal_void (tmp16) ;
ATSlocal (ats_ptr_type, tmp17) ;
ATSlocal (ats_ptr_type, tmp18) ;
ATSlocal (ats_ptr_type, tmp19) ;
ATSlocal (ats_ptr_type, tmp20) ;
// ATSlocal_void (tmp28) ;
ATSlocal (ats_clo_ptr_type, tmp29) ;

__ats_lab_d2exp_loopinv_tr_3:
tmp10 = ats_selbox_mac(ats_castptr_mac(anairiats_rec_3, arg0), atslab_loopi2nv_loc) ;
tmp11 = ats_selbox_mac(ats_castptr_mac(anairiats_rec_3, arg0), atslab_loopi2nv_arg) ;
tmp12 = ats_selbox_mac(ats_castptr_mac(anairiats_rec_3, arg0), atslab_loopi2nv_res) ;
tmp13 = ats_selbox_mac(ats_castptr_mac(anairiats_rec_4, tmp12), atslab_i2nvresstate_svs) ;
tmp14 = ats_selbox_mac(ats_castptr_mac(anairiats_rec_4, tmp12), atslab_i2nvresstate_gua) ;
tmp15 = ats_selbox_mac(ats_castptr_mac(anairiats_rec_3, arg0), atslab_loopi2nv_met) ;
do {
/* branch: __ats_lab_2 */
__ats_lab_2_0:
if (tmp15 == (ats_sum_ptr_type)0) { goto __ats_lab_3_0 ; }
__ats_lab_2_1:
tmp17 = ats_caselptrlab_mac(anairiats_sum_1, tmp15, atslab_0) ;
/* tmp16 = */ ATS_2d0_2e2_2e12_2src_2ats_trans3_env_2esats__metric_nat_check (tmp10, tmp17) ;
break ;

/* branch: __ats_lab_3 */
__ats_lab_3_0:
// if (tmp15 != (ats_sum_ptr_type)0) { ats_deadcode_failure_handle () ; }
__ats_lab_3_1:
break ;
} while (0) ;
tmp18 = ats_selbox_mac(ats_castptr_mac(anairiats_rec_4, tmp12), atslab_i2nvresstate_arg) ;
tmp19 = ATS_2d0_2e2_2e12_2src_2ats_list_2esats__list_append (tmp18, tmp11) ;
tmp20 = ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__i2nvresstate_make (tmp13, tmp14, tmp19) ;
/* ats_clo_ptr_type tmp29 ; */
tmp29 = aux_4_closure_make (tmp10) ;
/* tmp28 = */ ATS_2d0_2e2_2e12_2src_2ats_list_2esats__list_foreach_cloptr (tmp11, tmp29) ;
ATS_FREE(tmp29) ;
tmp9.atslab_0 = tmp15 ;
tmp9.atslab_1 = tmp20 ;

return (tmp9) ;
} /* end of [d2exp_loopinv_tr_3] */

/*
// /home/hwxi/Research/ATS-Anairiats/src/ats_trans3_loop.dats: 3791(line=121, offs=3) -- 7678(line=222, offs=4)
*/
ATSglobaldec()
ats_ptr_type
ATS_2d0_2e2_2e12_2src_2ats_trans3_2esats__d2exp_loop_tr_up (ats_ptr_type arg0, ats_ptr_type arg1, ats_ptr_type arg2, ats_ptr_type arg3, ats_ptr_type arg4, ats_ptr_type arg5) {
/* local vardec */
ATSlocal (ats_ptr_type, tmp30) ;
ATSlocal (ats_ptr_type, tmp31) ;
ATSlocal (ats_ptr_type, tmp32) ;
ATSlocal (ats_ptr_type, tmp33) ;
ATSlocal (ats_ptr_type, tmp34) ;
ATSlocal (ats_ptr_type, tmp35) ;
ATSlocal (ats_ptr_type, tmp36) ;
// ATSlocal_void (tmp37) ;
ATSlocal (ats_ptr_type, tmp38) ;
ATSlocal (ats_ptr_type, tmp39) ;
ATSlocal (ats_ptr_type, tmp40) ;
ATSlocal (ats_ptr_type, tmp41) ;
ATSlocal (ats_ptr_type, tmp42) ;
// ATSlocal_void (tmp43) ;
ATSlocal (ats_ptr_type, tmp44) ;
// ATSlocal_void (tmp45) ;
ATSlocal (ats_ptr_type, tmp46) ;
// ATSlocal_void (tmp47) ;
// ATSlocal_void (tmp48) ;
// ATSlocal_void (tmp49) ;
ATSlocal (ats_ptr_type, tmp50) ;
ATSlocal (ats_ptr_type, tmp51) ;
ATSlocal (ats_ptr_type, tmp52) ;
ATSlocal (ats_ptr_type, tmp53) ;
// ATSlocal_void (tmp54) ;
// ATSlocal_void (tmp55) ;
// ATSlocal_void (tmp56) ;
ATSlocal (ats_ptr_type, tmp57) ;
// ATSlocal_void (tmp58) ;
// ATSlocal_void (tmp59) ;
ATSlocal (ats_ptr_type, tmp60) ;
// ATSlocal_void (tmp61) ;
// ATSlocal_void (tmp62) ;
// ATSlocal_void (tmp63) ;
// ATSlocal_void (tmp64) ;
ATSlocal (ats_ptr_type, tmp65) ;
// ATSlocal_void (tmp66) ;
ATSlocal (anairiats_rec_2, tmp67) ;
ATSlocal (ats_ptr_type, tmp68) ;
ATSlocal (ats_ptr_type, tmp69) ;
// ATSlocal_void (tmp70) ;
ATSlocal (ats_ptr_type, tmp71) ;
ATSlocal (ats_ptr_type, tmp72) ;
// ATSlocal_void (tmp73) ;
ATSlocal (ats_ptr_type, tmp74) ;
// ATSlocal_void (tmp75) ;
// ATSlocal_void (tmp76) ;
// ATSlocal_void (tmp77) ;
ATSlocal (ats_ptr_type, tmp78) ;
// ATSlocal_void (tmp79) ;
// ATSlocal_void (tmp80) ;
// ATSlocal_void (tmp81) ;
// ATSlocal_void (tmp82) ;
// ATSlocal_void (tmp83) ;
ATSlocal (ats_ptr_type, tmp84) ;
ATSlocal (ats_ptr_type, tmp86) ;
ATSlocal (ats_ptr_type, tmp87) ;
// ATSlocal_void (tmp88) ;
// ATSlocal_void (tmp89) ;
ATSlocal (ats_bool_type, tmp90) ;
ATSlocal (ats_bool_type, tmp91) ;
ATSlocal (ats_ptr_type, tmp92) ;
// ATSlocal_void (tmp93) ;
// ATSlocal_void (tmp94) ;
// ATSlocal_void (tmp95) ;
// ATSlocal_void (tmp96) ;
// ATSlocal_void (tmp97) ;

__ats_lab_ATS_2d0_2e2_2e12_2src_2ats_trans3_2esats__d2exp_loop_tr_up:
tmp31 = ATS_2d0_2e2_2e12_2src_2ats_stadyncst2_2esats__s2exp_void_t0ype () ;
do {
/* branch: __ats_lab_6 */
__ats_lab_6_0:
if (arg2 == (ats_sum_ptr_type)0) { goto __ats_lab_7_0 ; }
__ats_lab_6_1:
tmp33 = ats_caselptrlab_mac(anairiats_sum_1, arg2, atslab_0) ;
tmp34 = ATS_2d0_2e2_2e12_2src_2ats_trans3_2esats__d2exp_tr_dn (tmp33, tmp31) ;
tmp32 = ATS_MALLOC(sizeof(anairiats_sum_1)) ;
ats_selptrset_mac(anairiats_sum_1, tmp32, atslab_0, tmp34) ;
break ;

/* branch: __ats_lab_7 */
__ats_lab_7_0:
// if (arg2 != (ats_sum_ptr_type)0) { ats_deadcode_failure_handle () ; }
__ats_lab_7_1:
tmp32 = (ats_sum_ptr_type)0 ;
break ;
} while (0) ;
tmp35 = ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__loopi2nv_update (arg1) ;
tmp36 = ats_selbox_mac(ats_castptr_mac(anairiats_rec_3, tmp35), atslab_loopi2nv_met) ;
do {
/* branch: __ats_lab_8 */
__ats_lab_8_0:
if (tmp36 != (ats_sum_ptr_type)0) { goto __ats_lab_9_0 ; }
__ats_lab_8_1:
/* tmp37 = */ ATS_2d0_2e2_2e12_2src_2ats_trans3_env_2esats__the_effect_env_check_ntm (arg0) ;
break ;

/* branch: __ats_lab_9 */
__ats_lab_9_0:
// if (tmp36 == (ats_sum_ptr_type)0) { ats_deadcode_failure_handle () ; }
__ats_lab_9_1:
break ;
} while (0) ;
tmp39 = ats_selbox_mac(ats_castptr_mac(anairiats_rec_3, tmp35), atslab_loopi2nv_svs) ;
tmp40 = ats_selbox_mac(ats_castptr_mac(anairiats_rec_3, tmp35), atslab_loopi2nv_gua) ;
tmp41 = ats_selbox_mac(ats_castptr_mac(anairiats_rec_3, tmp35), atslab_loopi2nv_arg) ;
tmp38 = ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__i2nvresstate_make_met (tmp39, tmp40, tmp41, tmp36) ;
tmp42 = ATS_2d0_2e2_2e12_2src_2ats_trans3_env_2esats__the_d2varset_env_stbefitemlst_save () ;
/* tmp43 = */ ATS_2d0_2e2_2e12_2src_2ats_trans3_env_2esats__trans3_env_push_sta () ;
tmp44 = ATS_2d0_2e2_2e12_2src_2ats_trans3_2esats__d2exp_tr_up (arg3) ;
/* tmp45 = */ ATS_2d0_2e2_2e12_2src_2ats_trans3_2esats__d3exp_open_and_add (tmp44) ;
tmp46 = ats_selbox_mac(ats_castptr_mac(anairiats_rec_5, tmp44), atslab_d3exp_typ) ;
/* tmp47 = */ ATS_2d0_2e2_2e12_2src_2ats_trans3_2esats__assert_bool_tr_dn (arg0, ats_true_bool, tmp46) ;
/* tmp48 = */ ATS_2d0_2e2_2e12_2src_2ats_trans3_env_2esats__the_lamloop_env_push_loop0 () ;
/* tmp49 = ats_selsin_mac(tmp48, atslab_1) */ ;
tmp50 = ATS_2d0_2e2_2e12_2src_2ats_trans3_2esats__d2exp_tr_dn (arg5, tmp31) ;
do {
/* branch: __ats_lab_10 */
__ats_lab_10_0:
if (arg4 == (ats_sum_ptr_type)0) { goto __ats_lab_11_0 ; }
__ats_lab_10_1:
tmp52 = ats_caselptrlab_mac(anairiats_sum_1, arg4, atslab_0) ;
tmp53 = ATS_2d0_2e2_2e12_2src_2ats_trans3_2esats__d2exp_tr_dn (tmp52, tmp31) ;
tmp51 = ATS_MALLOC(sizeof(anairiats_sum_1)) ;
ats_selptrset_mac(anairiats_sum_1, tmp51, atslab_0, tmp53) ;
break ;

/* branch: __ats_lab_11 */
__ats_lab_11_0:
// if (arg4 != (ats_sum_ptr_type)0) { ats_deadcode_failure_handle () ; }
__ats_lab_11_1:
tmp51 = (ats_sum_ptr_type)0 ;
break ;
} while (0) ;
/* tmp54 = */ ATS_2d0_2e2_2e12_2src_2ats_trans3_env_2esats__the_lamloop_env_pop () ;
/* tmp55 = */ ATS_2d0_2e2_2e12_2src_2ats_trans3_env_2esats__trans3_env_pop_sta_and_free () ;
/* tmp56 = */ ATS_2d0_2e2_2e12_2src_2ats_trans3_env_2esats__stbefitemlst_restore_typ (tmp42) ;
tmp57 = ATS_2d0_2e2_2e12_2src_2ats_trans3_env_2esats__staftscstr_initize (tmp38, tmp42) ;
/* tmp58 = */ ATS_2d0_2e2_2e12_2src_2ats_trans3_env_2esats__trans3_env_push_sta () ;
/* tmp59 = */ ATS_2d0_2e2_2e12_2src_2ats_trans3_env_2esats__staftscstr_stbefitemlst_merge (arg0, tmp57, tmp42) ;
tmp60 = ATS_MALLOC(sizeof(anairiats_sum_6)) ;
((ats_sum_ptr_type)tmp60)->tag = 5 ;
ats_selptrset_mac(anairiats_sum_6, tmp60, atslab_0, 0) ;
/* tmp61 = */ ATS_2d0_2e2_2e12_2src_2ats_trans3_env_2esats__trans3_env_pop_sta_and_add (arg0, tmp60) ;
/* tmp62 = */ ATS_2d0_2e2_2e12_2src_2ats_trans3_env_2esats__staftscstr_stbefitemlst_check (arg0, tmp57, tmp42) ;
/* tmp63 = */ ATS_2d0_2e2_2e12_2src_2ats_trans3_env_2esats__trans3_env_push_sta () ;
/* tmp64 = */ ATS_2d0_2e2_2e12_2src_2ats_trans3_env_2esats__staftscstr_stbefitemlst_update (arg0, tmp57, tmp42) ;
tmp65 = ATS_2d0_2e2_2e12_2src_2ats_trans3_env_2esats__staftscstr_initize (tmp38, tmp42) ;
/* tmp66 = */ ATS_2d0_2e2_2e12_2src_2ats_trans3_env_2esats__staftscstr_stbefitemlst_merge_skipmetck (arg0, tmp65, tmp42) ;
tmp67 = d2exp_loopinv_tr_3 (tmp35) ;
tmp68 = ats_select_mac(tmp67, atslab_0) ;
tmp69 = ats_select_mac(tmp67, atslab_1) ;
/* tmp70 = */ atsopt_state_staftscstr_met_set (tmp65, tmp68) ;
tmp71 = ATS_2d0_2e2_2e12_2src_2ats_trans3_env_2esats__staftscstr_initize (tmp69, tmp42) ;
tmp72 = ATS_2d0_2e2_2e12_2src_2ats_trans3_2esats__d2exp_tr_up (arg3) ;
/* tmp73 = */ ATS_2d0_2e2_2e12_2src_2ats_trans3_2esats__d3exp_open_and_add (tmp72) ;
tmp74 = ats_selbox_mac(ats_castptr_mac(anairiats_rec_5, tmp72), atslab_d3exp_typ) ;
/* tmp75 = */ ATS_2d0_2e2_2e12_2src_2ats_trans3_env_2esats__trans3_env_push_sta () ;
/* tmp76 = */ ATS_2d0_2e2_2e12_2src_2ats_trans3_2esats__assert_bool_tr_dn (arg0, ats_false_bool, tmp74) ;
/* tmp77 = */ ATS_2d0_2e2_2e12_2src_2ats_trans3_env_2esats__staftscstr_stbefitemlst_merge (arg0, tmp71, tmp42) ;
tmp78 = ATS_MALLOC(sizeof(anairiats_sum_6)) ;
((ats_sum_ptr_type)tmp78)->tag = 5 ;
ats_selptrset_mac(anairiats_sum_6, tmp78, atslab_0, 1) ;
/* tmp79 = */ ATS_2d0_2e2_2e12_2src_2ats_trans3_env_2esats__trans3_env_pop_sta_and_add (arg0, tmp78) ;
/* tmp80 = */ ATS_2d0_2e2_2e12_2src_2ats_trans3_env_2esats__trans3_env_push_sta () ;
/* tmp81 = */ ATS_2d0_2e2_2e12_2src_2ats_trans3_2esats__assert_bool_tr_dn (arg0, ats_true_bool, tmp74) ;
/* tmp82 = */ ATS_2d0_2e2_2e12_2src_2ats_trans3_env_2esats__the_lamloop_env_push_loop1 (tmp42, tmp65, tmp71, arg4) ;
/* tmp83 = ats_selsin_mac(tmp82, atslab_1) */ ;
tmp84 = ATS_2d0_2e2_2e12_2src_2ats_trans3_2esats__d2exp_tr_dn (arg5, tmp31) ;
do {
/* branch: __ats_lab_12 */
__ats_lab_12_0:
if (arg4 == (ats_sum_ptr_type)0) { goto __ats_lab_13_0 ; }
__ats_lab_12_1:
tmp86 = ats_caselptrlab_mac(anairiats_sum_1, arg4, atslab_0) ;
tmp87 = ATS_2d0_2e2_2e12_2src_2ats_trans3_2esats__d2exp_tr_dn (tmp86, tmp31) ;
break ;

/* branch: __ats_lab_13 */
__ats_lab_13_0:
// if (arg4 != (ats_sum_ptr_type)0) { ats_deadcode_failure_handle () ; }
__ats_lab_13_1:
break ;
} while (0) ;
/* tmp88 = */ ATS_2d0_2e2_2e12_2src_2ats_trans3_env_2esats__the_lamloop_env_pop () ;
tmp91 = ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__d2exp_is_raised (arg5) ;
tmp90 = atspre_neg_bool (tmp91) ;
if (tmp90) {
/* tmp89 = */ ATS_2d0_2e2_2e12_2src_2ats_trans3_env_2esats__staftscstr_stbefitemlst_merge (arg0, tmp65, tmp42) ;
} else {
/* empty */
} /* end of [if] */
tmp92 = ATS_MALLOC(sizeof(anairiats_sum_6)) ;
((ats_sum_ptr_type)tmp92)->tag = 5 ;
ats_selptrset_mac(anairiats_sum_6, tmp92, atslab_0, 2) ;
/* tmp93 = */ ATS_2d0_2e2_2e12_2src_2ats_trans3_env_2esats__trans3_env_pop_sta_and_add (arg0, tmp92) ;
/* tmp94 = */ ATS_2d0_2e2_2e12_2src_2ats_trans3_env_2esats__staftscstr_stbefitemlst_check (arg0, tmp65, tmp42) ;
/* tmp95 = */ ATS_2d0_2e2_2e12_2src_2ats_trans3_env_2esats__staftscstr_stbefitemlst_check (arg0, tmp71, tmp42) ;
/* tmp96 = */ ATS_2d0_2e2_2e12_2src_2ats_trans3_env_2esats__trans3_env_pop_sta_and_add_none (arg0) ;
/* tmp97 = */ ATS_2d0_2e2_2e12_2src_2ats_trans3_env_2esats__staftscstr_stbefitemlst_update (arg0, tmp71, tmp42) ;
tmp30 = ATS_2d0_2e2_2e12_2src_2ats_dynexp3_2esats__d3exp_loop (arg0, tmp32, tmp72, tmp51, tmp84) ;
return (tmp30) ;
} /* end of [ATS_2d0_2e2_2e12_2src_2ats_trans3_2esats__d2exp_loop_tr_up] */

/*
// /home/hwxi/Research/ATS-Anairiats/src/ats_trans3_loop.dats: 7785(line=229, offs=3) -- 8743(line=263, offs=4)
*/
ATSglobaldec()
ats_ptr_type
ATS_2d0_2e2_2e12_2src_2ats_trans3_2esats__d2exp_loopexn_tr_up (ats_ptr_type arg0, ats_int_type arg1) {
/* local vardec */
ATSlocal (ats_ptr_type, tmp98) ;
ATSlocal (ats_ptr_type, tmp99) ;
// ATSlocal_void (tmp100) ;
ATSlocal (ats_ptr_type, tmp101) ;
ATSlocal (ats_ptr_type, tmp102) ;
ATSlocal (ats_ptr_type, tmp103) ;
ATSlocal (ats_ptr_type, tmp104) ;
ATSlocal (ats_bool_type, tmp106) ;
ATSlocal (ats_ptr_type, tmp107) ;
ATSlocal (ats_ptr_type, tmp108) ;
ATSlocal (ats_ptr_type, tmp109) ;
ATSlocal (ats_bool_type, tmp110) ;
// ATSlocal_void (tmp111) ;
// ATSlocal_void (tmp112) ;
// ATSlocal_void (tmp113) ;
// ATSlocal_void (tmp114) ;

__ats_lab_ATS_2d0_2e2_2e12_2src_2ats_trans3_2esats__d2exp_loopexn_tr_up:
tmp99 = ATS_2d0_2e2_2e12_2src_2ats_trans3_env_2esats__the_lamloop_env_top () ;
do {
/* branch: __ats_lab_14 */
__ats_lab_14_0:
if (((ats_sum_ptr_type)tmp99)->tag != 1) { goto __ats_lab_15_0 ; }
__ats_lab_14_1:
break ;

/* branch: __ats_lab_15 */
__ats_lab_15_0:
if (((ats_sum_ptr_type)tmp99)->tag != 2) { goto __ats_lab_18_0 ; }
__ats_lab_15_1:
tmp101 = ats_caselptrlab_mac(anairiats_sum_7, tmp99, atslab_0) ;
tmp102 = ats_caselptrlab_mac(anairiats_sum_7, tmp99, atslab_1) ;
tmp103 = ats_caselptrlab_mac(anairiats_sum_7, tmp99, atslab_2) ;
tmp104 = ats_caselptrlab_mac(anairiats_sum_7, tmp99, atslab_3) ;
tmp106 = atspre_gt_int_int (arg1, 0) ;
if (tmp106) {
do {
/* branch: __ats_lab_16 */
__ats_lab_16_0:
if (tmp104 == (ats_sum_ptr_type)0) { goto __ats_lab_17_0 ; }
__ats_lab_16_1:
tmp107 = ats_caselptrlab_mac(anairiats_sum_1, tmp104, atslab_0) ;
tmp109 = ATS_2d0_2e2_2e12_2src_2ats_stadyncst2_2esats__s2exp_void_t0ype () ;
tmp108 = ATS_2d0_2e2_2e12_2src_2ats_trans3_2esats__d2exp_tr_dn (tmp107, tmp109) ;
break ;

/* branch: __ats_lab_17 */
__ats_lab_17_0:
// if (tmp104 != (ats_sum_ptr_type)0) { ats_deadcode_failure_handle () ; }
__ats_lab_17_1:
break ;
} while (0) ;
} else {
/* empty */
} /* end of [if] */
tmp110 = atspre_gt_int_int (arg1, 0) ;
if (tmp110) {
/* tmp100 = */ ATS_2d0_2e2_2e12_2src_2ats_trans3_env_2esats__staftscstr_stbefitemlst_merge (arg0, tmp102, tmp101) ;
} else {
/* tmp100 = */ ATS_2d0_2e2_2e12_2src_2ats_trans3_env_2esats__staftscstr_stbefitemlst_merge (arg0, tmp103, tmp101) ;
} /* end of [if] */
break ;

/* branch: __ats_lab_18 */
__ats_lab_18_0:
__ats_lab_18_1:
/* tmp111 = */ ATS_2d0_2e2_2e12_2src_2ats_location_2esats__prerr_location (arg0) ;
/* tmp112 = */ atspre_prerr_string (ATSstrcst(": INTERNAL ERROR (ats_trans3_loop)")) ;
/* tmp113 = */ atspre_prerr_string (ATSstrcst(": d2exp_loopexn_tr_up")) ;
/* tmp114 = */ atspre_prerr_newline () ;
/* tmp100 = */ ATS_2d0_2e2_2e12_2src_2ats_error_2esats__abort () ;
break ;
} while (0) ;
tmp98 = ATS_2d0_2e2_2e12_2src_2ats_dynexp3_2esats__d3exp_loopexn (arg0, arg1) ;
return (tmp98) ;
} /* end of [ATS_2d0_2e2_2e12_2src_2ats_trans3_2esats__d2exp_loopexn_tr_up] */

/* static load function */

extern ats_void_type ATS_2d0_2e2_2e12_2src_2ats_error_2esats__staload (void) ;
extern ats_void_type ATS_2d0_2e2_2e12_2src_2ats_location_2esats__staload (void) ;
extern ats_void_type ATS_2d0_2e2_2e12_2src_2ats_list_2esats__staload (void) ;
extern ats_void_type ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__staload (void) ;
extern ats_void_type ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__staload (void) ;
extern ats_void_type ATS_2d0_2e2_2e12_2src_2ats_stadyncst2_2esats__staload (void) ;
extern ats_void_type ATS_2d0_2e2_2e12_2src_2ats_dynexp3_2esats__staload (void) ;
extern ats_void_type ATS_2d0_2e2_2e12_2src_2ats_trans3_2esats__staload (void) ;
extern ats_void_type ATS_2d0_2e2_2e12_2src_2ats_trans3_env_2esats__staload (void) ;

ats_void_type
ATS_2d0_2e2_2e12_2src_2ats_trans3_loop_2edats__staload () {
static int ATS_2d0_2e2_2e12_2src_2ats_trans3_loop_2edats__staload_flag = 0 ;
if (ATS_2d0_2e2_2e12_2src_2ats_trans3_loop_2edats__staload_flag) return ;
ATS_2d0_2e2_2e12_2src_2ats_trans3_loop_2edats__staload_flag = 1 ;

ATS_2d0_2e2_2e12_2src_2ats_error_2esats__staload () ;
ATS_2d0_2e2_2e12_2src_2ats_location_2esats__staload () ;
ATS_2d0_2e2_2e12_2src_2ats_list_2esats__staload () ;
ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__staload () ;
ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__staload () ;
ATS_2d0_2e2_2e12_2src_2ats_stadyncst2_2esats__staload () ;
ATS_2d0_2e2_2e12_2src_2ats_dynexp3_2esats__staload () ;
ATS_2d0_2e2_2e12_2src_2ats_trans3_2esats__staload () ;
ATS_2d0_2e2_2e12_2src_2ats_trans3_env_2esats__staload () ;

return ;
} /* staload function */

/* dynamic load function */

// dynload flag declaration
extern ats_int_type ATS_2d0_2e2_2e12_2src_2ats_trans3_loop_2edats__dynload_flag ;

ats_void_type
ATS_2d0_2e2_2e12_2src_2ats_trans3_loop_2edats__dynload () {
ATS_2d0_2e2_2e12_2src_2ats_trans3_loop_2edats__dynload_flag = 1 ;
ATS_2d0_2e2_2e12_2src_2ats_trans3_loop_2edats__staload () ;

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

/* end of [/home/hwxi/Research/ATS-Anairiats/bootstrap1/ats_trans3_loop_dats.c] */