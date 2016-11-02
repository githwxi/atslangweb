/*
**
** The C code is generated by ATS/Anairiats
** The compilation time is: 2016-7-23: 22h:10m
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

#include "libats/ngc/CATS/deque_arr.cats"

#include "libats/CATS/linqueue_arr.cats"
/* external codes at top */
/* type definitions */
/* external typedefs */
/* external dynamic constructor declarations */
/* external dynamic constant declarations */
ATSextern_fun(ats_ptr_type, atspre_array_ptr_alloc_tsz) (ats_size_type, ats_size_type) ;
ATSextern_fun(ats_void_type, atspre_array_ptr_free) (ats_ptr_type) ;
ATSextern_fun(ats_size_type, ATS_2d0_2e2_2e12_2libats_2ngc_2SATS_2deque_arr_2esats__deque_cap) (ats_ref_type) ;
ATSextern_fun(ats_size_type, ATS_2d0_2e2_2e12_2libats_2ngc_2SATS_2deque_arr_2esats__deque_size) (ats_ref_type) ;
ATSextern_fun(ats_bool_type, ATS_2d0_2e2_2e12_2libats_2ngc_2SATS_2deque_arr_2esats__deque_is_empty) (ats_ref_type) ;
ATSextern_fun(ats_bool_type, ATS_2d0_2e2_2e12_2libats_2ngc_2SATS_2deque_arr_2esats__deque_isnot_empty) (ats_ref_type) ;
ATSextern_fun(ats_bool_type, ATS_2d0_2e2_2e12_2libats_2ngc_2SATS_2deque_arr_2esats__deque_is_full) (ats_ref_type) ;
ATSextern_fun(ats_bool_type, ATS_2d0_2e2_2e12_2libats_2ngc_2SATS_2deque_arr_2esats__deque_isnot_full) (ats_ref_type) ;
ATSextern_fun(ats_void_type, atslib_ngc_deque_arr_deque_initialize_tsz) (ats_ref_type, ats_size_type, ats_ptr_type, ats_size_type) ;
ATSextern_fun(ats_ptr_type, atslib_ngc_deque_arr_deque_uninitialize) (ats_ref_type) ;
ATSextern_fun(ats_ptr_type, ATS_2d0_2e2_2e12_2libats_2ngc_2SATS_2deque_arr_2esats__deque_uninitialize_vt) (ats_ref_type) ;
ATSextern_fun(ats_void_type, ATS_2d0_2e2_2e12_2libats_2ngc_2SATS_2deque_arr_2esats__deque_clear_all) (ats_ref_type) ;

/* external dynamic terminating constant declarations */
#ifdef _ATS_PROOFCHECK
#endif /* _ATS_PROOFCHECK */

/* assuming abstract types */
int ATS_2d0_2e2_2e12_2libats_2SATS_2linqueue_arr_2esats__sasp__QUEUE = 0 ;

/* sum constructor declarations */
/* exn constructor declarations */
/* global dynamic (non-functional) constant declarations */
/* internal function declarations */

/* partial value template declarations */
/* static temporary variable declarations */
/* external value variable declarations */

/* function implementations */

/*
// /home/hwxi/Research/ATS-Anairiats/libats/DATS/linqueue_arr.dats: 1954(line=64, offs=21) -- 1976(line=64, offs=43)
*/
ATSglobaldec()
ats_size_type
ATS_2d0_2e2_2e12_2libats_2SATS_2linqueue_arr_2esats__queue_cap (ats_ref_type arg0) {
/* local vardec */
ATSlocal (ats_size_type, tmp0) ;

__ats_lab_ATS_2d0_2e2_2e12_2libats_2SATS_2linqueue_arr_2esats__queue_cap:
tmp0 = ATS_2d0_2e2_2e12_2libats_2ngc_2SATS_2deque_arr_2esats__deque_cap (arg0) ;
return (tmp0) ;
} /* end of [ATS_2d0_2e2_2e12_2libats_2SATS_2linqueue_arr_2esats__queue_cap] */

/*
// /home/hwxi/Research/ATS-Anairiats/libats/DATS/linqueue_arr.dats: 1999(line=65, offs=22) -- 2022(line=65, offs=45)
*/
ATSglobaldec()
ats_size_type
ATS_2d0_2e2_2e12_2libats_2SATS_2linqueue_arr_2esats__queue_size (ats_ref_type arg0) {
/* local vardec */
ATSlocal (ats_size_type, tmp1) ;

__ats_lab_ATS_2d0_2e2_2e12_2libats_2SATS_2linqueue_arr_2esats__queue_size:
tmp1 = ATS_2d0_2e2_2e12_2libats_2ngc_2SATS_2deque_arr_2esats__deque_size (arg0) ;
return (tmp1) ;
} /* end of [ATS_2d0_2e2_2e12_2libats_2SATS_2linqueue_arr_2esats__queue_size] */

/*
// /home/hwxi/Research/ATS-Anairiats/libats/DATS/linqueue_arr.dats: 2050(line=67, offs=26) -- 2077(line=67, offs=53)
*/
ATSglobaldec()
ats_bool_type
ATS_2d0_2e2_2e12_2libats_2SATS_2linqueue_arr_2esats__queue_is_empty (ats_ref_type arg0) {
/* local vardec */
ATSlocal (ats_bool_type, tmp2) ;

__ats_lab_ATS_2d0_2e2_2e12_2libats_2SATS_2linqueue_arr_2esats__queue_is_empty:
tmp2 = ATS_2d0_2e2_2e12_2libats_2ngc_2SATS_2deque_arr_2esats__deque_is_empty (arg0) ;
return (tmp2) ;
} /* end of [ATS_2d0_2e2_2e12_2libats_2SATS_2linqueue_arr_2esats__queue_is_empty] */

/*
// /home/hwxi/Research/ATS-Anairiats/libats/DATS/linqueue_arr.dats: 2107(line=68, offs=29) -- 2137(line=68, offs=59)
*/
ATSglobaldec()
ats_bool_type
ATS_2d0_2e2_2e12_2libats_2SATS_2linqueue_arr_2esats__queue_isnot_empty (ats_ref_type arg0) {
/* local vardec */
ATSlocal (ats_bool_type, tmp3) ;

__ats_lab_ATS_2d0_2e2_2e12_2libats_2SATS_2linqueue_arr_2esats__queue_isnot_empty:
tmp3 = ATS_2d0_2e2_2e12_2libats_2ngc_2SATS_2deque_arr_2esats__deque_isnot_empty (arg0) ;
return (tmp3) ;
} /* end of [ATS_2d0_2e2_2e12_2libats_2SATS_2linqueue_arr_2esats__queue_isnot_empty] */

/*
// /home/hwxi/Research/ATS-Anairiats/libats/DATS/linqueue_arr.dats: 2164(line=70, offs=25) -- 2190(line=70, offs=51)
*/
ATSglobaldec()
ats_bool_type
ATS_2d0_2e2_2e12_2libats_2SATS_2linqueue_arr_2esats__queue_is_full (ats_ref_type arg0) {
/* local vardec */
ATSlocal (ats_bool_type, tmp4) ;

__ats_lab_ATS_2d0_2e2_2e12_2libats_2SATS_2linqueue_arr_2esats__queue_is_full:
tmp4 = ATS_2d0_2e2_2e12_2libats_2ngc_2SATS_2deque_arr_2esats__deque_is_full (arg0) ;
return (tmp4) ;
} /* end of [ATS_2d0_2e2_2e12_2libats_2SATS_2linqueue_arr_2esats__queue_is_full] */

/*
// /home/hwxi/Research/ATS-Anairiats/libats/DATS/linqueue_arr.dats: 2219(line=71, offs=28) -- 2248(line=71, offs=57)
*/
ATSglobaldec()
ats_bool_type
ATS_2d0_2e2_2e12_2libats_2SATS_2linqueue_arr_2esats__queue_isnot_full (ats_ref_type arg0) {
/* local vardec */
ATSlocal (ats_bool_type, tmp5) ;

__ats_lab_ATS_2d0_2e2_2e12_2libats_2SATS_2linqueue_arr_2esats__queue_isnot_full:
tmp5 = ATS_2d0_2e2_2e12_2libats_2ngc_2SATS_2deque_arr_2esats__deque_isnot_full (arg0) ;
return (tmp5) ;
} /* end of [ATS_2d0_2e2_2e12_2libats_2SATS_2linqueue_arr_2esats__queue_isnot_full] */

/*
// /home/hwxi/Research/ATS-Anairiats/libats/DATS/linqueue_arr.dats: 2496(line=85, offs=7) -- 2645(line=89, offs=4)
*/
ATSglobaldec()
ats_void_type
atslib_linqueue_arr_queue_initialize_tsz (ats_ref_type arg0, ats_size_type arg1, ats_size_type arg2) {
/* local vardec */
// ATSlocal_void (tmp6) ;
ATSlocal (ats_ptr_type, tmp7) ;
ATSlocal (ats_ptr_type, tmp8) ;

__ats_lab_atslib_linqueue_arr_queue_initialize_tsz:
tmp7 = atspre_array_ptr_alloc_tsz (arg1, arg2) ;
tmp8 = ats_selsin_mac(tmp7, atslab_2) ;
/* tmp6 = */ atslib_ngc_deque_arr_deque_initialize_tsz (arg0, arg1, tmp8, arg2) ;
return /* (tmp6) */ ;
} /* end of [atslib_linqueue_arr_queue_initialize_tsz] */

/*
// /home/hwxi/Research/ATS-Anairiats/libats/DATS/linqueue_arr.dats: 2845(line=99, offs=7) -- 2971(line=102, offs=2)
*/
ATSglobaldec()
ats_void_type
atslib_linqueue_arr_queue_uninitialize (ats_ref_type arg0) {
/* local vardec */
// ATSlocal_void (tmp9) ;
ATSlocal (ats_ptr_type, tmp10) ;
ATSlocal (ats_ptr_type, tmp11) ;

__ats_lab_atslib_linqueue_arr_queue_uninitialize:
tmp10 = atslib_ngc_deque_arr_deque_uninitialize (arg0) ;
tmp11 = ats_selsin_mac(tmp10, atslab_2) ;
/* tmp9 = */ atspre_array_ptr_free (tmp11) ;
return /* (tmp9) */ ;
} /* end of [atslib_linqueue_arr_queue_uninitialize] */

/*
// /home/hwxi/Research/ATS-Anairiats/libats/DATS/linqueue_arr.dats: 3042(line=106, offs=7) -- 3171(line=109, offs=2)
*/
ATSglobaldec()
ats_void_type
ATS_2d0_2e2_2e12_2libats_2SATS_2linqueue_arr_2esats__queue_uninitialize_vt (ats_ref_type arg0) {
/* local vardec */
// ATSlocal_void (tmp12) ;
ATSlocal (ats_ptr_type, tmp13) ;
ATSlocal (ats_ptr_type, tmp14) ;

__ats_lab_ATS_2d0_2e2_2e12_2libats_2SATS_2linqueue_arr_2esats__queue_uninitialize_vt:
tmp13 = ATS_2d0_2e2_2e12_2libats_2ngc_2SATS_2deque_arr_2esats__deque_uninitialize_vt (arg0) ;
tmp14 = ats_selsin_mac(tmp13, atslab_2) ;
/* tmp12 = */ atspre_array_ptr_free (tmp14) ;
return /* (tmp12) */ ;
} /* end of [ATS_2d0_2e2_2e12_2libats_2SATS_2linqueue_arr_2esats__queue_uninitialize_vt] */

/*
// /home/hwxi/Research/ATS-Anairiats/libats/DATS/linqueue_arr.dats: 3991(line=153, offs=17) -- 4019(line=153, offs=45)
*/
ATSglobaldec()
ats_void_type
ATS_2d0_2e2_2e12_2libats_2SATS_2linqueue_arr_2esats__queue_clear_all (ats_ref_type arg0) {
/* local vardec */
// ATSlocal_void (tmp15) ;

__ats_lab_ATS_2d0_2e2_2e12_2libats_2SATS_2linqueue_arr_2esats__queue_clear_all:
/* tmp15 = */ ATS_2d0_2e2_2e12_2libats_2ngc_2SATS_2deque_arr_2esats__deque_clear_all (arg0) ;
return /* (tmp15) */ ;
} /* end of [ATS_2d0_2e2_2e12_2libats_2SATS_2linqueue_arr_2esats__queue_clear_all] */

/* static load function */

// extern ats_void_type ATS_2d0_2e2_2e12_2libats_2ngc_2SATS_2deque_arr_2esats__staload (void) ;
// extern ats_void_type ATS_2d0_2e2_2e12_2libats_2SATS_2linqueue_arr_2esats__staload (void) ;

ats_void_type
ATS_2d0_2e2_2e12_2libats_2DATS_2linqueue_arr_2edats__staload () {
static int ATS_2d0_2e2_2e12_2libats_2DATS_2linqueue_arr_2edats__staload_flag = 0 ;
if (ATS_2d0_2e2_2e12_2libats_2DATS_2linqueue_arr_2edats__staload_flag) return ;
ATS_2d0_2e2_2e12_2libats_2DATS_2linqueue_arr_2edats__staload_flag = 1 ;

// ATS_2d0_2e2_2e12_2libats_2ngc_2SATS_2deque_arr_2esats__staload () ;
// ATS_2d0_2e2_2e12_2libats_2SATS_2linqueue_arr_2esats__staload () ;

return ;
} /* staload function */

/* dynamic load function */

// dynload flag declaration
// extern ats_int_type ATS_2d0_2e2_2e12_2libats_2DATS_2linqueue_arr_2edats__dynload_flag ;

ats_void_type
ATS_2d0_2e2_2e12_2libats_2DATS_2linqueue_arr_2edats__dynload () {
// ATS_2d0_2e2_2e12_2libats_2DATS_2linqueue_arr_2edats__dynload_flag = 1 ;
ATS_2d0_2e2_2e12_2libats_2DATS_2linqueue_arr_2edats__staload () ;

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

/* end of [DATS_linqueue_arr_dats.c] */
