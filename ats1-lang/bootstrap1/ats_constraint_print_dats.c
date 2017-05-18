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
typedef struct {
int tag ;
ats_ptr_type atslab_0 ;
} anairiats_sum_0 ;

typedef struct {
int tag ;
ats_ptr_type atslab_0 ;
ats_ptr_type atslab_1 ;
} anairiats_sum_1 ;

typedef struct {
int tag ;
ats_bool_type atslab_0 ;
} anairiats_sum_2 ;

typedef struct {
int tag ;
ats_int_type atslab_0 ;
ats_ptr_type atslab_1 ;
} anairiats_sum_3 ;

typedef struct {
int tag ;
ats_int_type atslab_0 ;
} anairiats_sum_4 ;

/* external typedefs */
/* external dynamic constructor declarations */
ATSextern_val(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_constraint_2esats__S3IEcst_0) ;
ATSextern_val(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_constraint_2esats__S3IEexp_1) ;
ATSextern_val(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_constraint_2esats__S3IEint_2) ;
ATSextern_val(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_constraint_2esats__S3IEintinf_3) ;
ATSextern_val(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_constraint_2esats__S3IEvar_4) ;
ATSextern_val(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_constraint_2esats__S3IEineg_5) ;
ATSextern_val(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_constraint_2esats__S3IEiadd_6) ;
ATSextern_val(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_constraint_2esats__S3IEisub_7) ;
ATSextern_val(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_constraint_2esats__S3IEimul_8) ;
ATSextern_val(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_constraint_2esats__S3IEpdiff_9) ;
ATSextern_val(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_constraint_2esats__S3BEcst_0) ;
ATSextern_val(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_constraint_2esats__S3BEexp_1) ;
ATSextern_val(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_constraint_2esats__S3BEvar_2) ;
ATSextern_val(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_constraint_2esats__S3BEbool_3) ;
ATSextern_val(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_constraint_2esats__S3BEbadd_4) ;
ATSextern_val(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_constraint_2esats__S3BEbmul_5) ;
ATSextern_val(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_constraint_2esats__S3BEbneg_6) ;
ATSextern_val(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_constraint_2esats__S3BEiexp_7) ;
ATSextern_val(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_constraint_2esats__S3AEcst_0) ;
ATSextern_val(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_constraint_2esats__S3AEexp_1) ;
ATSextern_val(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_constraint_2esats__S3AEvar_2) ;
ATSextern_val(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_constraint_2esats__S3AEpadd_4) ;

/* external dynamic constant declarations */
ATSextern_fun(ats_ptr_type, atspre_stdout_get) () ;
ATSextern_fun(ats_void_type, atspre_stdout_view_set) () ;
ATSextern_fun(ats_ptr_type, atspre_stderr_get) () ;
ATSextern_fun(ats_void_type, atspre_stderr_view_set) () ;
ATSextern_fun(ats_void_type, atspre_fprint_bool) (ats_ref_type, ats_bool_type) ;
ATSextern_fun(ats_void_type, atspre_fprint_int) (ats_ref_type, ats_int_type) ;
ATSextern_fun(ats_void_type, atspre_fprint_string) (ats_ref_type, ats_ptr_type) ;
ATSextern_fun(ats_void_type, ATS_2d0_2e2_2e12_2src_2ats_intinf_2esats__fprint_intinf) (ats_ref_type, ats_ptr_type) ;
ATSextern_fun(ats_void_type, ATS_2d0_2e2_2e12_2src_2ats_list_2esats__fprintlst) (ats_ref_type, ats_ptr_type, ats_ptr_type, ats_ptr_type) ;
ATSextern_fun(ats_void_type, ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__fprint_s2cst) (ats_ref_type, ats_ptr_type) ;
ATSextern_fun(ats_void_type, ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__fprint_s2var) (ats_ref_type, ats_ptr_type) ;
ATSextern_fun(ats_void_type, ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__fprint_s2exp) (ats_ref_type, ats_ptr_type) ;
ATSextern_fun(ats_void_type, ATS_2d0_2e2_2e12_2src_2ats_constraint_2esats__fprint_s3aexp) (ats_ref_type, ats_ptr_type) ;
ATSextern_fun(ats_void_type, ATS_2d0_2e2_2e12_2src_2ats_constraint_2esats__fprint_s3bexp) (ats_ref_type, ats_ptr_type) ;
ATSextern_fun(ats_void_type, ATS_2d0_2e2_2e12_2src_2ats_constraint_2esats__fprint_s3bexplst) (ats_ref_type, ats_ptr_type) ;
ATSextern_fun(ats_void_type, ATS_2d0_2e2_2e12_2src_2ats_constraint_2esats__fprint_s3iexp) (ats_ref_type, ats_ptr_type) ;

/* external dynamic terminating constant declarations */
#ifdef _ATS_PROOFCHECK
extern
ats_void_type ATS_2d0_2e2_2e12_2prelude_2basics_dyn_2esats__file_mode_lte_w_w_prfck () ;
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
// /home/hwxi/Research/ATS-Anairiats/src/ats_constraint_print.dats: 1783(line=53, offs=15) -- 2470(line=76, offs=4)
*/
ATSglobaldec()
ats_void_type
ATS_2d0_2e2_2e12_2src_2ats_constraint_2esats__fprint_s3aexp (ats_ref_type arg0, ats_ptr_type arg1) {
/* local vardec */
// ATSlocal_void (tmp0) ;
ATSlocal (ats_ptr_type, tmp1) ;
// ATSlocal_void (tmp2) ;
// ATSlocal_void (tmp3) ;
ATSlocal (ats_ptr_type, tmp4) ;
// ATSlocal_void (tmp5) ;
// ATSlocal_void (tmp6) ;
ATSlocal (ats_ptr_type, tmp7) ;
// ATSlocal_void (tmp8) ;
// ATSlocal_void (tmp9) ;
ATSlocal (ats_ptr_type, tmp10) ;
ATSlocal (ats_ptr_type, tmp11) ;
// ATSlocal_void (tmp12) ;
// ATSlocal_void (tmp13) ;
// ATSlocal_void (tmp14) ;
// ATSlocal_void (tmp15) ;

__ats_lab_ATS_2d0_2e2_2e12_2src_2ats_constraint_2esats__fprint_s3aexp:
do {
/* branch: __ats_lab_0 */
__ats_lab_0_0:
if (((ats_sum_ptr_type)arg1)->tag != 0) { goto __ats_lab_1_0 ; }
__ats_lab_0_1:
tmp1 = ats_caselptrlab_mac(anairiats_sum_0, arg1, atslab_0) ;
/* tmp2 = */ atspre_fprint_string (arg0, ATSstrcst("S3AEcst(")) ;
/* tmp3 = */ ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__fprint_s2cst (arg0, tmp1) ;
/* tmp0 = */ atspre_fprint_string (arg0, ATSstrcst(")")) ;
break ;

/* branch: __ats_lab_1 */
__ats_lab_1_0:
if (((ats_sum_ptr_type)arg1)->tag != 1) { goto __ats_lab_2_0 ; }
__ats_lab_1_1:
tmp4 = ats_caselptrlab_mac(anairiats_sum_0, arg1, atslab_0) ;
/* tmp5 = */ atspre_fprint_string (arg0, ATSstrcst("S3AEexp(")) ;
/* tmp6 = */ ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__fprint_s2exp (arg0, tmp4) ;
/* tmp0 = */ atspre_fprint_string (arg0, ATSstrcst(")")) ;
break ;

/* branch: __ats_lab_2 */
__ats_lab_2_0:
if (((ats_sum_ptr_type)arg1)->tag != 2) { goto __ats_lab_3_0 ; }
__ats_lab_2_1:
tmp7 = ats_caselptrlab_mac(anairiats_sum_0, arg1, atslab_0) ;
/* tmp8 = */ atspre_fprint_string (arg0, ATSstrcst("S3AEvar(")) ;
/* tmp9 = */ ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__fprint_s2var (arg0, tmp7) ;
/* tmp0 = */ atspre_fprint_string (arg0, ATSstrcst(")")) ;
break ;

/* branch: __ats_lab_3 */
__ats_lab_3_0:
if (((ats_sum_ptr_type)arg1)->tag != 4) { goto __ats_lab_4_0 ; }
__ats_lab_3_1:
tmp10 = ats_caselptrlab_mac(anairiats_sum_1, arg1, atslab_0) ;
tmp11 = ats_caselptrlab_mac(anairiats_sum_1, arg1, atslab_1) ;
/* tmp12 = */ atspre_fprint_string (arg0, ATSstrcst("S3AEpadd(")) ;
/* tmp13 = */ ATS_2d0_2e2_2e12_2src_2ats_constraint_2esats__fprint_s3aexp (arg0, tmp10) ;
/* tmp14 = */ atspre_fprint_string (arg0, ATSstrcst("; ")) ;
/* tmp15 = */ ATS_2d0_2e2_2e12_2src_2ats_constraint_2esats__fprint_s3iexp (arg0, tmp11) ;
/* tmp0 = */ atspre_fprint_string (arg0, ATSstrcst(")")) ;
break ;

/* branch: __ats_lab_4 */
__ats_lab_4_0:
__ats_lab_4_1:
/* tmp0 = */ atspre_fprint_string (arg0, ATSstrcst("S3AEnull()")) ;
break ;
} while (0) ;
return /* (tmp0) */ ;
} /* end of [ATS_2d0_2e2_2e12_2src_2ats_constraint_2esats__fprint_s3aexp] */

/*
// /home/hwxi/Research/ATS-Anairiats/src/ats_constraint_print.dats: 2521(line=78, offs=24) -- 2561(line=78, offs=64)
*/
ATSglobaldec()
ats_void_type
ATS_2d0_2e2_2e12_2src_2ats_constraint_2esats__print_s3aexp (ats_ptr_type arg0) {
/* local vardec */
// ATSlocal_void (tmp16) ;
ATSlocal (ats_ptr_type, tmp17) ;
ATSlocal (ats_ptr_type, tmp18) ;
// ATSlocal_void (tmp19) ;

__ats_lab_ATS_2d0_2e2_2e12_2src_2ats_constraint_2esats__print_s3aexp:
tmp17 = atspre_stdout_get () ;
tmp18 = ats_selsin_mac(tmp17, atslab_1) ;
/* tmp19 = */ ATS_2d0_2e2_2e12_2src_2ats_constraint_2esats__fprint_s3aexp (tmp18, arg0) ;
/* tmp16 = */ atspre_stdout_view_set () ;
return /* (tmp16) */ ;
} /* end of [ATS_2d0_2e2_2e12_2src_2ats_constraint_2esats__print_s3aexp] */

/*
// /home/hwxi/Research/ATS-Anairiats/src/ats_constraint_print.dats: 2585(line=79, offs=24) -- 2625(line=79, offs=64)
*/
ATSglobaldec()
ats_void_type
ATS_2d0_2e2_2e12_2src_2ats_constraint_2esats__prerr_s3aexp (ats_ptr_type arg0) {
/* local vardec */
// ATSlocal_void (tmp20) ;
ATSlocal (ats_ptr_type, tmp21) ;
ATSlocal (ats_ptr_type, tmp22) ;
// ATSlocal_void (tmp23) ;

__ats_lab_ATS_2d0_2e2_2e12_2src_2ats_constraint_2esats__prerr_s3aexp:
tmp21 = atspre_stderr_get () ;
tmp22 = ats_selsin_mac(tmp21, atslab_1) ;
/* tmp23 = */ ATS_2d0_2e2_2e12_2src_2ats_constraint_2esats__fprint_s3aexp (tmp22, arg0) ;
/* tmp20 = */ atspre_stderr_view_set () ;
return /* (tmp20) */ ;
} /* end of [ATS_2d0_2e2_2e12_2src_2ats_constraint_2esats__prerr_s3aexp] */

/*
// /home/hwxi/Research/ATS-Anairiats/src/ats_constraint_print.dats: 2672(line=84, offs=15) -- 3881(line=125, offs=4)
*/
ATSglobaldec()
ats_void_type
ATS_2d0_2e2_2e12_2src_2ats_constraint_2esats__fprint_s3bexp (ats_ref_type arg0, ats_ptr_type arg1) {
/* local vardec */
// ATSlocal_void (tmp24) ;
ATSlocal (ats_ptr_type, tmp25) ;
// ATSlocal_void (tmp26) ;
// ATSlocal_void (tmp27) ;
ATSlocal (ats_ptr_type, tmp28) ;
// ATSlocal_void (tmp29) ;
// ATSlocal_void (tmp30) ;
ATSlocal (ats_ptr_type, tmp31) ;
// ATSlocal_void (tmp32) ;
// ATSlocal_void (tmp33) ;
ATSlocal (ats_bool_type, tmp34) ;
// ATSlocal_void (tmp35) ;
// ATSlocal_void (tmp36) ;
ATSlocal (ats_ptr_type, tmp37) ;
// ATSlocal_void (tmp38) ;
// ATSlocal_void (tmp39) ;
ATSlocal (ats_ptr_type, tmp40) ;
ATSlocal (ats_ptr_type, tmp41) ;
// ATSlocal_void (tmp42) ;
// ATSlocal_void (tmp43) ;
// ATSlocal_void (tmp44) ;
// ATSlocal_void (tmp45) ;
ATSlocal (ats_ptr_type, tmp46) ;
ATSlocal (ats_ptr_type, tmp47) ;
// ATSlocal_void (tmp48) ;
// ATSlocal_void (tmp49) ;
// ATSlocal_void (tmp50) ;
// ATSlocal_void (tmp51) ;
ATSlocal (ats_int_type, tmp52) ;
ATSlocal (ats_ptr_type, tmp53) ;
// ATSlocal_void (tmp54) ;
// ATSlocal_void (tmp55) ;
// ATSlocal_void (tmp56) ;
// ATSlocal_void (tmp57) ;
// ATSlocal_void (tmp58) ;

__ats_lab_ATS_2d0_2e2_2e12_2src_2ats_constraint_2esats__fprint_s3bexp:
do {
/* branch: __ats_lab_5 */
__ats_lab_5_0:
if (((ats_sum_ptr_type)arg1)->tag != 0) { goto __ats_lab_6_0 ; }
__ats_lab_5_1:
tmp25 = ats_caselptrlab_mac(anairiats_sum_0, arg1, atslab_0) ;
/* tmp26 = */ atspre_fprint_string (arg0, ATSstrcst("S3BEcst(")) ;
/* tmp27 = */ ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__fprint_s2cst (arg0, tmp25) ;
/* tmp24 = */ atspre_fprint_string (arg0, ATSstrcst(")")) ;
break ;

/* branch: __ats_lab_6 */
__ats_lab_6_0:
if (((ats_sum_ptr_type)arg1)->tag != 1) { goto __ats_lab_7_0 ; }
__ats_lab_6_1:
tmp28 = ats_caselptrlab_mac(anairiats_sum_0, arg1, atslab_0) ;
/* tmp29 = */ atspre_fprint_string (arg0, ATSstrcst("S3BEexp(")) ;
/* tmp30 = */ ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__fprint_s2exp (arg0, tmp28) ;
/* tmp24 = */ atspre_fprint_string (arg0, ATSstrcst(")")) ;
break ;

/* branch: __ats_lab_7 */
__ats_lab_7_0:
if (((ats_sum_ptr_type)arg1)->tag != 2) { goto __ats_lab_8_0 ; }
__ats_lab_7_1:
tmp31 = ats_caselptrlab_mac(anairiats_sum_0, arg1, atslab_0) ;
/* tmp32 = */ atspre_fprint_string (arg0, ATSstrcst("S3BEvar(")) ;
/* tmp33 = */ ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__fprint_s2var (arg0, tmp31) ;
/* tmp24 = */ atspre_fprint_string (arg0, ATSstrcst(")")) ;
break ;

/* branch: __ats_lab_8 */
__ats_lab_8_0:
if (((ats_sum_ptr_type)arg1)->tag != 3) { goto __ats_lab_9_0 ; }
__ats_lab_8_1:
tmp34 = ats_caselptrlab_mac(anairiats_sum_2, arg1, atslab_0) ;
/* tmp35 = */ atspre_fprint_string (arg0, ATSstrcst("S3BEbool(")) ;
/* tmp36 = */ atspre_fprint_bool (arg0, tmp34) ;
/* tmp24 = */ atspre_fprint_string (arg0, ATSstrcst(")")) ;
break ;

/* branch: __ats_lab_9 */
__ats_lab_9_0:
if (((ats_sum_ptr_type)arg1)->tag != 6) { goto __ats_lab_10_0 ; }
__ats_lab_9_1:
tmp37 = ats_caselptrlab_mac(anairiats_sum_0, arg1, atslab_0) ;
/* tmp38 = */ atspre_fprint_string (arg0, ATSstrcst("S3BEbneg(")) ;
/* tmp39 = */ ATS_2d0_2e2_2e12_2src_2ats_constraint_2esats__fprint_s3bexp (arg0, tmp37) ;
/* tmp24 = */ atspre_fprint_string (arg0, ATSstrcst(")")) ;
break ;

/* branch: __ats_lab_10 */
__ats_lab_10_0:
if (((ats_sum_ptr_type)arg1)->tag != 4) { goto __ats_lab_11_0 ; }
__ats_lab_10_1:
tmp40 = ats_caselptrlab_mac(anairiats_sum_1, arg1, atslab_0) ;
tmp41 = ats_caselptrlab_mac(anairiats_sum_1, arg1, atslab_1) ;
/* tmp42 = */ atspre_fprint_string (arg0, ATSstrcst("S3BEbadd(")) ;
/* tmp43 = */ ATS_2d0_2e2_2e12_2src_2ats_constraint_2esats__fprint_s3bexp (arg0, tmp40) ;
/* tmp44 = */ atspre_fprint_string (arg0, ATSstrcst("; ")) ;
/* tmp45 = */ ATS_2d0_2e2_2e12_2src_2ats_constraint_2esats__fprint_s3bexp (arg0, tmp41) ;
/* tmp24 = */ atspre_fprint_string (arg0, ATSstrcst(")")) ;
break ;

/* branch: __ats_lab_11 */
__ats_lab_11_0:
if (((ats_sum_ptr_type)arg1)->tag != 5) { goto __ats_lab_12_0 ; }
__ats_lab_11_1:
tmp46 = ats_caselptrlab_mac(anairiats_sum_1, arg1, atslab_0) ;
tmp47 = ats_caselptrlab_mac(anairiats_sum_1, arg1, atslab_1) ;
/* tmp48 = */ atspre_fprint_string (arg0, ATSstrcst("S3BEbmul(")) ;
/* tmp49 = */ ATS_2d0_2e2_2e12_2src_2ats_constraint_2esats__fprint_s3bexp (arg0, tmp46) ;
/* tmp50 = */ atspre_fprint_string (arg0, ATSstrcst("; ")) ;
/* tmp51 = */ ATS_2d0_2e2_2e12_2src_2ats_constraint_2esats__fprint_s3bexp (arg0, tmp47) ;
/* tmp24 = */ atspre_fprint_string (arg0, ATSstrcst(")")) ;
break ;

/* branch: __ats_lab_12 */
__ats_lab_12_0:
// if (((ats_sum_ptr_type)arg1)->tag != 7) { ats_deadcode_failure_handle () ; }
__ats_lab_12_1:
tmp52 = ats_caselptrlab_mac(anairiats_sum_3, arg1, atslab_0) ;
tmp53 = ats_caselptrlab_mac(anairiats_sum_3, arg1, atslab_1) ;
/* tmp54 = */ atspre_fprint_string (arg0, ATSstrcst("S3BEiexp(")) ;
/* tmp55 = */ atspre_fprint_string (arg0, ATSstrcst("knd=")) ;
/* tmp56 = */ atspre_fprint_int (arg0, tmp52) ;
/* tmp57 = */ atspre_fprint_string (arg0, ATSstrcst("; ")) ;
/* tmp58 = */ ATS_2d0_2e2_2e12_2src_2ats_constraint_2esats__fprint_s3iexp (arg0, tmp53) ;
/* tmp24 = */ atspre_fprint_string (arg0, ATSstrcst(")")) ;
break ;
} while (0) ;
return /* (tmp24) */ ;
} /* end of [ATS_2d0_2e2_2e12_2src_2ats_constraint_2esats__fprint_s3bexp] */

/*
// /home/hwxi/Research/ATS-Anairiats/src/ats_constraint_print.dats: 3932(line=127, offs=24) -- 3972(line=127, offs=64)
*/
ATSglobaldec()
ats_void_type
ATS_2d0_2e2_2e12_2src_2ats_constraint_2esats__print_s3bexp (ats_ptr_type arg0) {
/* local vardec */
// ATSlocal_void (tmp59) ;
ATSlocal (ats_ptr_type, tmp60) ;
ATSlocal (ats_ptr_type, tmp61) ;
// ATSlocal_void (tmp62) ;

__ats_lab_ATS_2d0_2e2_2e12_2src_2ats_constraint_2esats__print_s3bexp:
tmp60 = atspre_stdout_get () ;
tmp61 = ats_selsin_mac(tmp60, atslab_1) ;
/* tmp62 = */ ATS_2d0_2e2_2e12_2src_2ats_constraint_2esats__fprint_s3bexp (tmp61, arg0) ;
/* tmp59 = */ atspre_stdout_view_set () ;
return /* (tmp59) */ ;
} /* end of [ATS_2d0_2e2_2e12_2src_2ats_constraint_2esats__print_s3bexp] */

/*
// /home/hwxi/Research/ATS-Anairiats/src/ats_constraint_print.dats: 3996(line=128, offs=24) -- 4036(line=128, offs=64)
*/
ATSglobaldec()
ats_void_type
ATS_2d0_2e2_2e12_2src_2ats_constraint_2esats__prerr_s3bexp (ats_ptr_type arg0) {
/* local vardec */
// ATSlocal_void (tmp63) ;
ATSlocal (ats_ptr_type, tmp64) ;
ATSlocal (ats_ptr_type, tmp65) ;
// ATSlocal_void (tmp66) ;

__ats_lab_ATS_2d0_2e2_2e12_2src_2ats_constraint_2esats__prerr_s3bexp:
tmp64 = atspre_stderr_get () ;
tmp65 = ats_selsin_mac(tmp64, atslab_1) ;
/* tmp66 = */ ATS_2d0_2e2_2e12_2src_2ats_constraint_2esats__fprint_s3bexp (tmp65, arg0) ;
/* tmp63 = */ atspre_stderr_view_set () ;
return /* (tmp63) */ ;
} /* end of [ATS_2d0_2e2_2e12_2src_2ats_constraint_2esats__prerr_s3bexp] */

/*
// /home/hwxi/Research/ATS-Anairiats/src/ats_constraint_print.dats: 4086(line=133, offs=18) -- 4155(line=134, offs=53)
*/
ATSglobaldec()
ats_void_type
ATS_2d0_2e2_2e12_2src_2ats_constraint_2esats__fprint_s3bexplst (ats_ref_type arg0, ats_ptr_type arg1) {
/* local vardec */
// ATSlocal_void (tmp67) ;

__ats_lab_ATS_2d0_2e2_2e12_2src_2ats_constraint_2esats__fprint_s3bexplst:
/* tmp67 = */ ATS_2d0_2e2_2e12_2src_2ats_list_2esats__fprintlst (arg0, arg1, ATSstrcst(", "), &ATS_2d0_2e2_2e12_2src_2ats_constraint_2esats__fprint_s3bexp) ;
return /* (tmp67) */ ;
} /* end of [ATS_2d0_2e2_2e12_2src_2ats_constraint_2esats__fprint_s3bexplst] */

/*
// /home/hwxi/Research/ATS-Anairiats/src/ats_constraint_print.dats: 4212(line=137, offs=27) -- 4257(line=137, offs=72)
*/
ATSglobaldec()
ats_void_type
ATS_2d0_2e2_2e12_2src_2ats_constraint_2esats__print_s3bexplst (ats_ptr_type arg0) {
/* local vardec */
// ATSlocal_void (tmp68) ;
ATSlocal (ats_ptr_type, tmp69) ;
ATSlocal (ats_ptr_type, tmp70) ;
// ATSlocal_void (tmp71) ;

__ats_lab_ATS_2d0_2e2_2e12_2src_2ats_constraint_2esats__print_s3bexplst:
tmp69 = atspre_stdout_get () ;
tmp70 = ats_selsin_mac(tmp69, atslab_1) ;
/* tmp71 = */ ATS_2d0_2e2_2e12_2src_2ats_constraint_2esats__fprint_s3bexplst (tmp70, arg0) ;
/* tmp68 = */ atspre_stdout_view_set () ;
return /* (tmp68) */ ;
} /* end of [ATS_2d0_2e2_2e12_2src_2ats_constraint_2esats__print_s3bexplst] */

/*
// /home/hwxi/Research/ATS-Anairiats/src/ats_constraint_print.dats: 4284(line=138, offs=27) -- 4329(line=138, offs=72)
*/
ATSglobaldec()
ats_void_type
ATS_2d0_2e2_2e12_2src_2ats_constraint_2esats__prerr_s3bexplst (ats_ptr_type arg0) {
/* local vardec */
// ATSlocal_void (tmp72) ;
ATSlocal (ats_ptr_type, tmp73) ;
ATSlocal (ats_ptr_type, tmp74) ;
// ATSlocal_void (tmp75) ;

__ats_lab_ATS_2d0_2e2_2e12_2src_2ats_constraint_2esats__prerr_s3bexplst:
tmp73 = atspre_stderr_get () ;
tmp74 = ats_selsin_mac(tmp73, atslab_1) ;
/* tmp75 = */ ATS_2d0_2e2_2e12_2src_2ats_constraint_2esats__fprint_s3bexplst (tmp74, arg0) ;
/* tmp72 = */ atspre_stderr_view_set () ;
return /* (tmp72) */ ;
} /* end of [ATS_2d0_2e2_2e12_2src_2ats_constraint_2esats__prerr_s3bexplst] */

/*
// /home/hwxi/Research/ATS-Anairiats/src/ats_constraint_print.dats: 4376(line=143, offs=15) -- 5941(line=195, offs=4)
*/
ATSglobaldec()
ats_void_type
ATS_2d0_2e2_2e12_2src_2ats_constraint_2esats__fprint_s3iexp (ats_ref_type arg0, ats_ptr_type arg1) {
/* local vardec */
// ATSlocal_void (tmp76) ;
ATSlocal (ats_ptr_type, tmp77) ;
// ATSlocal_void (tmp78) ;
// ATSlocal_void (tmp79) ;
ATSlocal (ats_ptr_type, tmp80) ;
// ATSlocal_void (tmp81) ;
// ATSlocal_void (tmp82) ;
ATSlocal (ats_ptr_type, tmp83) ;
// ATSlocal_void (tmp84) ;
// ATSlocal_void (tmp85) ;
ATSlocal (ats_int_type, tmp86) ;
// ATSlocal_void (tmp87) ;
// ATSlocal_void (tmp88) ;
ATSlocal (ats_ptr_type, tmp89) ;
// ATSlocal_void (tmp90) ;
// ATSlocal_void (tmp91) ;
ATSlocal (ats_ptr_type, tmp92) ;
// ATSlocal_void (tmp93) ;
// ATSlocal_void (tmp94) ;
ATSlocal (ats_ptr_type, tmp95) ;
ATSlocal (ats_ptr_type, tmp96) ;
// ATSlocal_void (tmp97) ;
// ATSlocal_void (tmp98) ;
// ATSlocal_void (tmp99) ;
// ATSlocal_void (tmp100) ;
ATSlocal (ats_ptr_type, tmp101) ;
ATSlocal (ats_ptr_type, tmp102) ;
// ATSlocal_void (tmp103) ;
// ATSlocal_void (tmp104) ;
// ATSlocal_void (tmp105) ;
// ATSlocal_void (tmp106) ;
ATSlocal (ats_ptr_type, tmp107) ;
ATSlocal (ats_ptr_type, tmp108) ;
// ATSlocal_void (tmp109) ;
// ATSlocal_void (tmp110) ;
// ATSlocal_void (tmp111) ;
// ATSlocal_void (tmp112) ;
ATSlocal (ats_ptr_type, tmp113) ;
ATSlocal (ats_ptr_type, tmp114) ;
// ATSlocal_void (tmp115) ;
// ATSlocal_void (tmp116) ;
// ATSlocal_void (tmp117) ;
// ATSlocal_void (tmp118) ;

__ats_lab_ATS_2d0_2e2_2e12_2src_2ats_constraint_2esats__fprint_s3iexp:
do {
/* branch: __ats_lab_13 */
__ats_lab_13_0:
if (((ats_sum_ptr_type)arg1)->tag != 0) { goto __ats_lab_14_0 ; }
__ats_lab_13_1:
tmp77 = ats_caselptrlab_mac(anairiats_sum_0, arg1, atslab_0) ;
/* tmp78 = */ atspre_fprint_string (arg0, ATSstrcst("S3IEcst(")) ;
/* tmp79 = */ ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__fprint_s2cst (arg0, tmp77) ;
/* tmp76 = */ atspre_fprint_string (arg0, ATSstrcst(")")) ;
break ;

/* branch: __ats_lab_14 */
__ats_lab_14_0:
if (((ats_sum_ptr_type)arg1)->tag != 1) { goto __ats_lab_15_0 ; }
__ats_lab_14_1:
tmp80 = ats_caselptrlab_mac(anairiats_sum_0, arg1, atslab_0) ;
/* tmp81 = */ atspre_fprint_string (arg0, ATSstrcst("S3IEexp(")) ;
/* tmp82 = */ ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__fprint_s2exp (arg0, tmp80) ;
/* tmp76 = */ atspre_fprint_string (arg0, ATSstrcst(")")) ;
break ;

/* branch: __ats_lab_15 */
__ats_lab_15_0:
if (((ats_sum_ptr_type)arg1)->tag != 4) { goto __ats_lab_16_0 ; }
__ats_lab_15_1:
tmp83 = ats_caselptrlab_mac(anairiats_sum_0, arg1, atslab_0) ;
/* tmp84 = */ atspre_fprint_string (arg0, ATSstrcst("S3IEvar(")) ;
/* tmp85 = */ ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__fprint_s2var (arg0, tmp83) ;
/* tmp76 = */ atspre_fprint_string (arg0, ATSstrcst(")")) ;
break ;

/* branch: __ats_lab_16 */
__ats_lab_16_0:
if (((ats_sum_ptr_type)arg1)->tag != 2) { goto __ats_lab_17_0 ; }
__ats_lab_16_1:
tmp86 = ats_caselptrlab_mac(anairiats_sum_4, arg1, atslab_0) ;
/* tmp87 = */ atspre_fprint_string (arg0, ATSstrcst("S3IEint(")) ;
/* tmp88 = */ atspre_fprint_int (arg0, tmp86) ;
/* tmp76 = */ atspre_fprint_string (arg0, ATSstrcst(")")) ;
break ;

/* branch: __ats_lab_17 */
__ats_lab_17_0:
if (((ats_sum_ptr_type)arg1)->tag != 3) { goto __ats_lab_18_0 ; }
__ats_lab_17_1:
tmp89 = ats_caselptrlab_mac(anairiats_sum_0, arg1, atslab_0) ;
/* tmp90 = */ atspre_fprint_string (arg0, ATSstrcst("S3IEintinf(")) ;
/* tmp91 = */ ATS_2d0_2e2_2e12_2src_2ats_intinf_2esats__fprint_intinf (arg0, tmp89) ;
/* tmp76 = */ atspre_fprint_string (arg0, ATSstrcst(")")) ;
break ;

/* branch: __ats_lab_18 */
__ats_lab_18_0:
if (((ats_sum_ptr_type)arg1)->tag != 5) { goto __ats_lab_19_0 ; }
__ats_lab_18_1:
tmp92 = ats_caselptrlab_mac(anairiats_sum_0, arg1, atslab_0) ;
/* tmp93 = */ atspre_fprint_string (arg0, ATSstrcst("S3IEineg(")) ;
/* tmp94 = */ ATS_2d0_2e2_2e12_2src_2ats_constraint_2esats__fprint_s3iexp (arg0, tmp92) ;
/* tmp76 = */ atspre_fprint_string (arg0, ATSstrcst(")")) ;
break ;

/* branch: __ats_lab_19 */
__ats_lab_19_0:
if (((ats_sum_ptr_type)arg1)->tag != 6) { goto __ats_lab_20_0 ; }
__ats_lab_19_1:
tmp95 = ats_caselptrlab_mac(anairiats_sum_1, arg1, atslab_0) ;
tmp96 = ats_caselptrlab_mac(anairiats_sum_1, arg1, atslab_1) ;
/* tmp97 = */ atspre_fprint_string (arg0, ATSstrcst("S3IEiadd(")) ;
/* tmp98 = */ ATS_2d0_2e2_2e12_2src_2ats_constraint_2esats__fprint_s3iexp (arg0, tmp95) ;
/* tmp99 = */ atspre_fprint_string (arg0, ATSstrcst("; ")) ;
/* tmp100 = */ ATS_2d0_2e2_2e12_2src_2ats_constraint_2esats__fprint_s3iexp (arg0, tmp96) ;
/* tmp76 = */ atspre_fprint_string (arg0, ATSstrcst(")")) ;
break ;

/* branch: __ats_lab_20 */
__ats_lab_20_0:
if (((ats_sum_ptr_type)arg1)->tag != 7) { goto __ats_lab_21_0 ; }
__ats_lab_20_1:
tmp101 = ats_caselptrlab_mac(anairiats_sum_1, arg1, atslab_0) ;
tmp102 = ats_caselptrlab_mac(anairiats_sum_1, arg1, atslab_1) ;
/* tmp103 = */ atspre_fprint_string (arg0, ATSstrcst("S3IEisub(")) ;
/* tmp104 = */ ATS_2d0_2e2_2e12_2src_2ats_constraint_2esats__fprint_s3iexp (arg0, tmp101) ;
/* tmp105 = */ atspre_fprint_string (arg0, ATSstrcst("; ")) ;
/* tmp106 = */ ATS_2d0_2e2_2e12_2src_2ats_constraint_2esats__fprint_s3iexp (arg0, tmp102) ;
/* tmp76 = */ atspre_fprint_string (arg0, ATSstrcst(")")) ;
break ;

/* branch: __ats_lab_21 */
__ats_lab_21_0:
if (((ats_sum_ptr_type)arg1)->tag != 8) { goto __ats_lab_22_0 ; }
__ats_lab_21_1:
tmp107 = ats_caselptrlab_mac(anairiats_sum_1, arg1, atslab_0) ;
tmp108 = ats_caselptrlab_mac(anairiats_sum_1, arg1, atslab_1) ;
/* tmp109 = */ atspre_fprint_string (arg0, ATSstrcst("S3IEimul(")) ;
/* tmp110 = */ ATS_2d0_2e2_2e12_2src_2ats_constraint_2esats__fprint_s3iexp (arg0, tmp107) ;
/* tmp111 = */ atspre_fprint_string (arg0, ATSstrcst("; ")) ;
/* tmp112 = */ ATS_2d0_2e2_2e12_2src_2ats_constraint_2esats__fprint_s3iexp (arg0, tmp108) ;
/* tmp76 = */ atspre_fprint_string (arg0, ATSstrcst(")")) ;
break ;

/* branch: __ats_lab_22 */
__ats_lab_22_0:
// if (((ats_sum_ptr_type)arg1)->tag != 9) { ats_deadcode_failure_handle () ; }
__ats_lab_22_1:
tmp113 = ats_caselptrlab_mac(anairiats_sum_1, arg1, atslab_0) ;
tmp114 = ats_caselptrlab_mac(anairiats_sum_1, arg1, atslab_1) ;
/* tmp115 = */ atspre_fprint_string (arg0, ATSstrcst("S3IEpdiff(")) ;
/* tmp116 = */ ATS_2d0_2e2_2e12_2src_2ats_constraint_2esats__fprint_s3aexp (arg0, tmp113) ;
/* tmp117 = */ atspre_fprint_string (arg0, ATSstrcst("; ")) ;
/* tmp118 = */ ATS_2d0_2e2_2e12_2src_2ats_constraint_2esats__fprint_s3aexp (arg0, tmp114) ;
/* tmp76 = */ atspre_fprint_string (arg0, ATSstrcst(")")) ;
break ;
} while (0) ;
return /* (tmp76) */ ;
} /* end of [ATS_2d0_2e2_2e12_2src_2ats_constraint_2esats__fprint_s3iexp] */

/*
// /home/hwxi/Research/ATS-Anairiats/src/ats_constraint_print.dats: 5992(line=197, offs=24) -- 6032(line=197, offs=64)
*/
ATSglobaldec()
ats_void_type
ATS_2d0_2e2_2e12_2src_2ats_constraint_2esats__print_s3iexp (ats_ptr_type arg0) {
/* local vardec */
// ATSlocal_void (tmp119) ;
ATSlocal (ats_ptr_type, tmp120) ;
ATSlocal (ats_ptr_type, tmp121) ;
// ATSlocal_void (tmp122) ;

__ats_lab_ATS_2d0_2e2_2e12_2src_2ats_constraint_2esats__print_s3iexp:
tmp120 = atspre_stdout_get () ;
tmp121 = ats_selsin_mac(tmp120, atslab_1) ;
/* tmp122 = */ ATS_2d0_2e2_2e12_2src_2ats_constraint_2esats__fprint_s3iexp (tmp121, arg0) ;
/* tmp119 = */ atspre_stdout_view_set () ;
return /* (tmp119) */ ;
} /* end of [ATS_2d0_2e2_2e12_2src_2ats_constraint_2esats__print_s3iexp] */

/*
// /home/hwxi/Research/ATS-Anairiats/src/ats_constraint_print.dats: 6056(line=198, offs=24) -- 6096(line=198, offs=64)
*/
ATSglobaldec()
ats_void_type
ATS_2d0_2e2_2e12_2src_2ats_constraint_2esats__prerr_s3iexp (ats_ptr_type arg0) {
/* local vardec */
// ATSlocal_void (tmp123) ;
ATSlocal (ats_ptr_type, tmp124) ;
ATSlocal (ats_ptr_type, tmp125) ;
// ATSlocal_void (tmp126) ;

__ats_lab_ATS_2d0_2e2_2e12_2src_2ats_constraint_2esats__prerr_s3iexp:
tmp124 = atspre_stderr_get () ;
tmp125 = ats_selsin_mac(tmp124, atslab_1) ;
/* tmp126 = */ ATS_2d0_2e2_2e12_2src_2ats_constraint_2esats__fprint_s3iexp (tmp125, arg0) ;
/* tmp123 = */ atspre_stderr_view_set () ;
return /* (tmp123) */ ;
} /* end of [ATS_2d0_2e2_2e12_2src_2ats_constraint_2esats__prerr_s3iexp] */

/* static load function */

extern ats_void_type ATS_2d0_2e2_2e12_2src_2ats_intinf_2esats__staload (void) ;
extern ats_void_type ATS_2d0_2e2_2e12_2src_2ats_list_2esats__staload (void) ;
extern ats_void_type ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__staload (void) ;
extern ats_void_type ATS_2d0_2e2_2e12_2src_2ats_constraint_2esats__staload (void) ;

ats_void_type
ATS_2d0_2e2_2e12_2src_2ats_constraint_print_2edats__staload () {
static int ATS_2d0_2e2_2e12_2src_2ats_constraint_print_2edats__staload_flag = 0 ;
if (ATS_2d0_2e2_2e12_2src_2ats_constraint_print_2edats__staload_flag) return ;
ATS_2d0_2e2_2e12_2src_2ats_constraint_print_2edats__staload_flag = 1 ;

ATS_2d0_2e2_2e12_2src_2ats_intinf_2esats__staload () ;
ATS_2d0_2e2_2e12_2src_2ats_list_2esats__staload () ;
ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__staload () ;
ATS_2d0_2e2_2e12_2src_2ats_constraint_2esats__staload () ;

return ;
} /* staload function */

/* dynamic load function */

// dynload flag declaration
extern ats_int_type ATS_2d0_2e2_2e12_2src_2ats_constraint_print_2edats__dynload_flag ;

ats_void_type
ATS_2d0_2e2_2e12_2src_2ats_constraint_print_2edats__dynload () {
ATS_2d0_2e2_2e12_2src_2ats_constraint_print_2edats__dynload_flag = 1 ;
ATS_2d0_2e2_2e12_2src_2ats_constraint_print_2edats__staload () ;

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

/* end of [/home/hwxi/Research/ATS-Anairiats/bootstrap1/ats_constraint_print_dats.c] */
