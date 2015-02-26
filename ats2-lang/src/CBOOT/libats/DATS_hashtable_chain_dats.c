/*
**
** The C code is generated by ATS/Anairiats
** The compilation time is: 2015-1-19: 19h:28m
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

#include "libats/CATS/hashtable_chain.cats"
/* external codes at top */

#define HASHTBL_MINSZ 97

/* type definitions */
typedef
struct {
ats_size_type atslab_sz ;
ats_size_type atslab_tot ;
ats_ptr_type atslab_pbeg ;
ats_clo_ref_type atslab_hash ;
ats_clo_ref_type atslab_eqfn ;
} anairiats_rec_0 ;

/* external typedefs */
typedef anairiats_rec_0 HASHTBL_struct ;
typedef ats_ptr_type chain0_ptr ;

/* external dynamic constructor declarations */
/* external dynamic constant declarations */
ATSextern_fun(ats_double_type, atspre_double_of_size) (ats_size_type) ;
ATSextern_fun(ats_double_type, atspre_div_double_double) (ats_double_type, ats_double_type) ;
ATSextern_fun(ats_bool_type, atspre_lte_double_double) (ats_double_type, ats_double_type) ;
ATSextern_fun(ats_bool_type, atspre_gte_double_double) (ats_double_type, ats_double_type) ;
ATSextern_fun(ats_size_type, atspre_size1_of_int1) (ats_int_type) ;
ATSextern_fun(ats_size_type, atspre_add_size1_int1) (ats_size_type, ats_int_type) ;
ATSextern_fun(ats_size_type, atspre_add_size1_size1) (ats_size_type, ats_size_type) ;
ATSextern_fun(ats_size_type, atspre_sub_size1_int1) (ats_size_type, ats_int_type) ;
ATSextern_fun(ats_size_type, atspre_mul2_size1_size1) (ats_size_type, ats_size_type) ;
ATSextern_fun(ats_size_type, atspre_div_size1_int1) (ats_size_type, ats_int_type) ;
ATSextern_fun(ats_size_type, atspre_mod1_size1_size1) (ats_size_type, ats_size_type) ;
ATSextern_fun(ats_bool_type, atspre_gt_size1_int1) (ats_size_type, ats_int_type) ;
ATSextern_fun(ats_bool_type, atspre_gte_size1_int1) (ats_size_type, ats_int_type) ;
ATSextern_fun(ats_size_type, ATS_2d0_2e2_2e12_2libats_2SATS_2hashtable_chain_2esats__hashtbl_size) (ats_ptr_type) ;
ATSextern_fun(ats_ptr_type, atslib_hashtbl_make_hint__chain) (ats_clo_ref_type, ats_clo_ref_type, ats_size_type) ;
ATSextern_fun(ats_void_type, atslib_hashtbl_free__chain) (ats_ptr_type) ;
ATSextern_fun(ats_ptr_type, atslib_hashtbl_ptr_make__chain) (ats_size_type) ;
ATSextern_fun(ats_void_type, atslib_hashtbl_ptr_free__chain) (ats_ptr_type) ;

/* external dynamic terminating constant declarations */
#ifdef _ATS_PROOFCHECK
extern
ats_void_type ATS_2d0_2e2_2e12_2prelude_2SATS_2extern_2esats__minus_addback_prfck () ;
extern
ats_void_type ATS_2d0_2e2_2e12_2libats_2DATS_2hashtable_chain_2edats__hashtbl_v_split_prfck () ;
extern
ats_void_type ATS_2d0_2e2_2e12_2libats_2DATS_2hashtable_chain_2edats__hashtbl_v_unsplit_prfck () ;
#endif /* _ATS_PROOFCHECK */

/* assuming abstract types */
/* sum constructor declarations */
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2libats_2DATS_2hashtable_chain_2edats__CHAINcons_0) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2libats_2DATS_2hashtable_chain_2edats__CHAINnil_1) ;

/* exn constructor declarations */
/* global dynamic (non-functional) constant declarations */
/* internal function declarations */

/* partial value template declarations */
/* static temporary variable declarations */
/* external value variable declarations */

/* function implementations */

/*
// /home/hwxi/research/Anairiats/libats/DATS/hashtable_chain.dats: 6093(line=227, offs=13) -- 6237(line=231, offs=2)
*/
ATSglobaldec()
ats_size_type
ATS_2d0_2e2_2e12_2libats_2SATS_2hashtable_chain_2esats__hashtbl_size (ats_ptr_type arg0) {
/* local vardec */
ATSlocal (ats_size_type, tmp0) ;
ATSlocal (ats_ptr_type, tmp1) ;

__ats_lab_ATS_2d0_2e2_2e12_2libats_2SATS_2hashtable_chain_2esats__hashtbl_size:
tmp1 = ats_selsin_mac(ats_castfn_mac(ats_ptr_type, arg0), atslab_2) ;
tmp0 = ats_selptr_mac(ats_castptr_mac(anairiats_rec_0, tmp1), atslab_sz) ;
return (tmp0) ;
} /* end of [ATS_2d0_2e2_2e12_2libats_2SATS_2hashtable_chain_2esats__hashtbl_size] */

/*
// /home/hwxi/research/Anairiats/libats/DATS/hashtable_chain.dats: 6302(line=235, offs=13) -- 6449(line=239, offs=2)
*/
ATSglobaldec()
ats_size_type
ATS_2d0_2e2_2e12_2libats_2SATS_2hashtable_chain_2esats__hashtbl_total (ats_ptr_type arg0) {
/* local vardec */
ATSlocal (ats_size_type, tmp2) ;
ATSlocal (ats_ptr_type, tmp3) ;

__ats_lab_ATS_2d0_2e2_2e12_2libats_2SATS_2hashtable_chain_2esats__hashtbl_total:
tmp3 = ats_selsin_mac(ats_castfn_mac(ats_ptr_type, arg0), atslab_2) ;
tmp2 = ats_selptr_mac(ats_castptr_mac(anairiats_rec_0, tmp3), atslab_tot) ;
return (tmp2) ;
} /* end of [ATS_2d0_2e2_2e12_2libats_2SATS_2hashtable_chain_2esats__hashtbl_total] */

/*
// /home/hwxi/research/Anairiats/libats/DATS/hashtable_chain.dats: 20411(line=690, offs=3) -- 20469(line=690, offs=61)
*/
ATSglobaldec()
ats_ptr_type
ATS_2d0_2e2_2e12_2libats_2SATS_2hashtable_chain_2esats__hashtbl_make (ats_clo_ref_type arg0, ats_clo_ref_type arg1) {
/* local vardec */
ATSlocal (ats_ptr_type, tmp4) ;

__ats_lab_ATS_2d0_2e2_2e12_2libats_2SATS_2hashtable_chain_2esats__hashtbl_make:
tmp4 = atslib_hashtbl_make_hint__chain (arg0, arg1, 0) ;
return (tmp4) ;
} /* end of [ATS_2d0_2e2_2e12_2libats_2SATS_2hashtable_chain_2esats__hashtbl_make] */

/* static load function */

// extern ats_void_type ATS_2d0_2e2_2e12_2libats_2SATS_2hashtable_chain_2esats__staload (void) ;

ats_void_type
ATS_2d0_2e2_2e12_2libats_2DATS_2hashtable_chain_2edats__staload () {
static int ATS_2d0_2e2_2e12_2libats_2DATS_2hashtable_chain_2edats__staload_flag = 0 ;
if (ATS_2d0_2e2_2e12_2libats_2DATS_2hashtable_chain_2edats__staload_flag) return ;
ATS_2d0_2e2_2e12_2libats_2DATS_2hashtable_chain_2edats__staload_flag = 1 ;

// ATS_2d0_2e2_2e12_2libats_2SATS_2hashtable_chain_2esats__staload () ;

// ATS_2d0_2e2_2e12_2libats_2DATS_2hashtable_chain_2edats__CHAINcons_0.tag = 0 ;
ATS_2d0_2e2_2e12_2libats_2DATS_2hashtable_chain_2edats__CHAINnil_1.tag = 1 ;
return ;
} /* staload function */

/* dynamic load function */

// dynload flag declaration
// extern ats_int_type ATS_2d0_2e2_2e12_2libats_2DATS_2hashtable_chain_2edats__dynload_flag ;

ats_void_type
ATS_2d0_2e2_2e12_2libats_2DATS_2hashtable_chain_2edats__dynload () {
// ATS_2d0_2e2_2e12_2libats_2DATS_2hashtable_chain_2edats__dynload_flag = 1 ;
ATS_2d0_2e2_2e12_2libats_2DATS_2hashtable_chain_2edats__staload () ;

#ifdef _ATS_PROOFCHECK
ATS_2d0_2e2_2e12_2prelude_2SATS_2extern_2esats__minus_addback_prfck () ;
ATS_2d0_2e2_2e12_2libats_2DATS_2hashtable_chain_2edats__hashtbl_v_split_prfck () ;
ATS_2d0_2e2_2e12_2libats_2DATS_2hashtable_chain_2edats__hashtbl_v_unsplit_prfck () ;
#endif /* _ATS_PROOFCHECK */

/* marking static variables for GC */

/* marking external values for GC */

/* code for dynamic loading */
return ;
} /* end of [dynload function] */

/* external codes at mid */
/* external codes at bot */

//
// HX: shortcuts? yes. worth it? probably.
//
ats_ptr_type
atslib_hashtbl_ptr_make__chain
  (ats_size_type sz) {
  ats_ptr_type pbeg ;
/*
** HX: it is mandatory to initialize with zeros!
*/
  pbeg = ATS_CALLOC(sz, sizeof(chain0_ptr)) ;
  return pbeg ;
} // end of [atslib_hashtbl_ptr_make__chain]

ats_ptr_type
atslib_hashtbl_make_hint__chain (
  ats_clo_ref_type hash, ats_clo_ref_type eqfn
, ats_size_type hint
) {
  size_t sz ;
  HASHTBL_struct *ptbl ;
  void *pbeg ;
  ptbl = ATS_MALLOC(sizeof(HASHTBL_struct)) ;
  sz = (
    hint > 0 ? hint : HASHTBL_MINSZ
  ) ;
  /* zeroing the allocated memory is mandatory! */
  pbeg = ATS_CALLOC(sz, sizeof(chain0_ptr)) ;
  ptbl->atslab_sz = sz ;
  ptbl->atslab_tot = 0 ;
  ptbl->atslab_pbeg = pbeg ;
  ptbl->atslab_hash = hash ;
  ptbl->atslab_eqfn = eqfn ;
  return ptbl ;
} // end of [atslib_hashtbl_make_hint__chain]



ats_void_type
atslib_hashtbl_free__chain
  (ats_ptr_type ptbl) {
  ATS_FREE(((HASHTBL_struct*)ptbl)->atslab_pbeg) ; ATS_FREE(ptbl) ;
  return ;
} // end of [atslib_hashtbl_free__chain]

ats_bool_type
atslib_hashtbl_free_vt__chain
  (ats_ptr_type ptbl) {
  if (((HASHTBL_struct*)ptbl)->atslab_tot != 0)
    return ats_true_bool ;
  ATS_FREE(((HASHTBL_struct*)ptbl)->atslab_pbeg) ; ATS_FREE(ptbl) ;
  return ats_false_bool ;
} // end of [atslib_hashtbl_free_vt__chain]



/* ****** ****** */

/* end of [DATS_hashtable_chain_dats.c] */
