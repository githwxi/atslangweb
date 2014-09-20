/*
**
** The C code is generated by ATS/Anairiats
** The compilation time is: 2014-5-21: 15h:58m
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

#include "libc/CATS/gmp.cats"

#include "pats_location.cats"
/* external codes at top */

#include "pats_lintprgm_myint.cats"

/* type definitions */
/* external typedefs */
/* external dynamic constructor declarations */
/* external dynamic constant declarations */
ATSextern_fun(ats_ptr_type, atspre_ptr_alloc_tsz) (ats_size_type) ;
ATSextern_fun(ats_void_type, atspre_ptr_free) (ats_ptr_type) ;
ATSextern_fun(ats_void_type, atslib_mpz_neg1) (ats_ref_type) ;
ATSextern_fun(ats_void_type, atslib_mpz_add2_mpz) (ats_ref_type, ats_ref_type) ;
ATSextern_fun(ats_void_type, atslib_mpz_sub2_mpz) (ats_ref_type, ats_ref_type) ;
ATSextern_fun(ats_void_type, atslib_mpz_mul2_mpz) (ats_ref_type, ats_ref_type) ;
ATSextern_fun(ats_void_type, atslib_fprint_mpz) (ats_ptr_type, ats_ref_type) ;

/* external dynamic terminating constant declarations */
#ifdef _ATS_PROOFCHECK
#endif /* _ATS_PROOFCHECK */

/* assuming abstract types */
/* sum constructor declarations */
/* exn constructor declarations */
/* global dynamic (non-functional) constant declarations */
/* internal function declarations */
static
ats_void_type fprint_myint_02222_gmpknd (ats_ptr_type arg0, gmpknd arg1) ;
static
gmpknd myint_make_int_02225_gmpknd (ats_int_type arg0) ;
static
gmpknd myint_make_intinf_02226_gmpknd (ats_ptr_type arg0) ;
static
gmpknd myint_copy_02228_gmpknd (gmpknd arg0) ;
static
ats_void_type myint_free_02227_gmpknd (gmpknd arg0) ;
static
gmpknd neg_myint_02229_gmpknd (gmpknd arg0) ;
static
gmpknd neg1_myint_02230_gmpknd (gmpknd arg0) ;
static
gmpknd add01_myint_myint_02232_gmpknd (gmpknd arg0, gmpknd arg1) ;
static
gmpknd sub01_myint_myint_02233_gmpknd (gmpknd arg0, gmpknd arg1) ;
static
gmpknd add_myint_int_02231_gmpknd (gmpknd arg0, ats_int_type arg1) ;
static
gmpknd mul01_myint_myint_02234_gmpknd (gmpknd arg0, gmpknd arg1) ;
static
gmpknd mul10_myint_myint_02235_gmpknd (gmpknd arg0, gmpknd arg1) ;
static
gmpknd mul11_myint_myint_02236_gmpknd (gmpknd arg0, gmpknd arg1) ;
static
gmpknd div01_myint_myint_02237_gmpknd (gmpknd arg0, gmpknd arg1) ;
static
gmpknd ediv01_myint_myint_02239_gmpknd (gmpknd arg0, gmpknd arg1) ;
static
gmpknd mod01_myint_myint_02240_gmpknd (gmpknd arg0, gmpknd arg1) ;
static
gmpknd mod11_myint_myint_02241_gmpknd (gmpknd arg0, gmpknd arg1) ;
static
gmpknd gcd01_myint_myint_02242_gmpknd (gmpknd arg0, gmpknd arg1) ;
static
ats_int_type compare_myint_int_02249_gmpknd (gmpknd arg0, ats_int_type arg1) ;
static
ats_int_type compare_myint_myint_02254_gmpknd (gmpknd arg0, gmpknd arg1) ;

/* partial value template declarations */
/* static temporary variable declarations */
/* external value variable declarations */

/* function implementations */

/*
// /home/hwxi/research/Postiats/git/src/pats_lintprgm_myint_gmp.dats: 2249(line=82, offs=3) -- 2417(line=90, offs=4)
*/
ATSstaticdec()
ats_void_type
fprint_myint_02222_gmpknd (ats_ptr_type arg0, gmpknd arg1) {
/* local vardec */
// ATSlocal_void (tmp0) ;
ATSlocal (ats_ptr_type, tmp1) ;

__ats_lab_fprint_myint_02222_gmpknd:
tmp1 = ats_varget_mac(ats_ptr_type, arg1) ;
/* tmp0 = */ atslib_fprint_mpz (arg0, tmp1) ;
return /* (tmp0) */ ;
} /* end of [fprint_myint_02222_gmpknd] */

/*
// /home/hwxi/research/Postiats/git/src/pats_lintprgm_myint_gmp.dats: 2506(line=95, offs=24) -- 2661(line=102, offs=4)
*/
ATSstaticdec()
gmpknd
myint_make_int_02225_gmpknd (ats_int_type arg0) {
/* local vardec */
ATSlocal (gmpknd, tmp2) ;
ATSlocal (ats_ptr_type, tmp3) ;
ATSlocal (ats_ptr_type, tmp4) ;
// ATSlocal_void (tmp5) ;
ATSlocal (ats_ptr_type, tmp6) ;

__ats_lab_myint_make_int_02225_gmpknd:
tmp3 = atspre_ptr_alloc_tsz (sizeof(ats_mpz_viewt0ype)) ;
tmp4 = ats_selsin_mac(tmp3, atslab_2) ;
/* tmp5 = */ atslib_mpz_init_set_int (tmp4, arg0) ;
tmp6 = tmp4 ;
tmp2 = ats_castfn_mac(gmpknd, tmp6) ;
return (tmp2) ;
} /* end of [myint_make_int_02225_gmpknd] */

/*
// /home/hwxi/research/Postiats/git/src/pats_lintprgm_myint_gmp.dats: 2941(line=121, offs=27) -- 3168(line=130, offs=4)
*/
ATSstaticdec()
gmpknd
myint_make_intinf_02226_gmpknd (ats_ptr_type arg0) {
/* local vardec */
ATSlocal (gmpknd, tmp7) ;
ATSlocal (ats_ptr_type, tmp8) ;
ATSlocal (ats_ptr_type, tmp9) ;
ATSlocal (ats_ptr_type, tmp10) ;
// ATSlocal_void (tmp11) ;
ATSlocal (ats_ptr_type, tmp12) ;

__ats_lab_myint_make_intinf_02226_gmpknd:
tmp8 = atspre_ptr_alloc_tsz (sizeof(ats_mpz_viewt0ype)) ;
tmp9 = ats_selsin_mac(tmp8, atslab_2) ;
tmp10 = ats_selsin_mac(ats_castfn_mac(ats_ptr_type, arg0), atslab_2) ;
/* tmp11 = */ atslib_mpz_init_set_mpz (tmp9, tmp10) ;
tmp12 = tmp9 ;
tmp7 = ats_castfn_mac(gmpknd, tmp12) ;
return (tmp7) ;
} /* end of [myint_make_intinf_02226_gmpknd] */

/*
// /home/hwxi/research/Postiats/git/src/pats_lintprgm_myint_gmp.dats: 3271(line=137, offs=20) -- 3514(line=146, offs=4)
*/
ATSstaticdec()
gmpknd
myint_copy_02228_gmpknd (gmpknd arg0) {
/* local vardec */
ATSlocal (gmpknd, tmp13) ;
ATSlocal (ats_ptr_type, tmp14) ;
ATSlocal (ats_ptr_type, tmp15) ;
// ATSlocal_void (tmp16) ;
ATSlocal (ats_ptr_type, tmp17) ;
ATSlocal (ats_ptr_type, tmp18) ;

__ats_lab_myint_copy_02228_gmpknd:
tmp14 = atspre_ptr_alloc_tsz (sizeof(ats_mpz_viewt0ype)) ;
tmp15 = ats_selsin_mac(tmp14, atslab_2) ;
tmp17 = ats_varget_mac(ats_ptr_type, arg0) ;
/* tmp16 = */ atslib_mpz_init_set_mpz (tmp15, tmp17) ;
tmp18 = tmp15 ;
tmp13 = ats_castfn_mac(gmpknd, tmp18) ;
return (tmp13) ;
} /* end of [myint_copy_02228_gmpknd] */

/*
// /home/hwxi/research/Postiats/git/src/pats_lintprgm_myint_gmp.dats: 3597(line=151, offs=20) -- 3724(line=157, offs=4)
*/
ATSstaticdec()
ats_void_type
myint_free_02227_gmpknd (gmpknd arg0) {
/* local vardec */
// ATSlocal_void (tmp19) ;
// ATSlocal_void (tmp20) ;
ATSlocal (ats_ptr_type, tmp21) ;
ATSlocal (ats_ptr_type, tmp22) ;

__ats_lab_myint_free_02227_gmpknd:
tmp21 = ats_varget_mac(ats_ptr_type, ats_castfn_mac(ats_ptr_type, arg0)) ;
/* tmp20 = */ atslib_mpz_clear (tmp21) ;
tmp22 = ats_varget_mac(ats_ptr_type, ats_castfn_mac(ats_ptr_type, arg0)) ;
/* tmp19 = */ atspre_ptr_free (tmp22) ;
return /* (tmp19) */ ;
} /* end of [myint_free_02227_gmpknd] */

/*
// /home/hwxi/research/Postiats/git/src/pats_lintprgm_myint_gmp.dats: 3808(line=163, offs=3) -- 3926(line=168, offs=2)
*/
ATSstaticdec()
gmpknd
neg_myint_02229_gmpknd (gmpknd arg0) {
/* local vardec */
ATSlocal (gmpknd, tmp23) ;
// ATSlocal_void (tmp24) ;
ATSlocal (ats_ptr_type, tmp25) ;

__ats_lab_neg_myint_02229_gmpknd:
tmp25 = ats_varget_mac(ats_ptr_type, ats_castfn_mac(ats_ptr_type, arg0)) ;
/* tmp24 = */ atslib_mpz_neg1 (tmp25) ;
tmp23 = ats_castfn_mac(gmpknd, ats_castfn_mac(ats_ptr_type, arg0)) ;
return (tmp23) ;
} /* end of [neg_myint_02229_gmpknd] */

/*
// /home/hwxi/research/Postiats/git/src/pats_lintprgm_myint_gmp.dats: 4010(line=174, offs=3) -- 4264(line=182, offs=2)
*/
ATSstaticdec()
gmpknd
neg1_myint_02230_gmpknd (gmpknd arg0) {
/* local vardec */
ATSlocal (gmpknd, tmp26) ;
ATSlocal (ats_ptr_type, tmp27) ;
ATSlocal (ats_ptr_type, tmp28) ;
// ATSlocal_void (tmp29) ;
// ATSlocal_void (tmp30) ;
ATSlocal (ats_ptr_type, tmp31) ;
ATSlocal (ats_ptr_type, tmp32) ;

__ats_lab_neg1_myint_02230_gmpknd:
tmp27 = atspre_ptr_alloc_tsz (sizeof(ats_mpz_viewt0ype)) ;
tmp28 = ats_selsin_mac(tmp27, atslab_2) ;
/* tmp29 = */ atslib_mpz_init (tmp28) ;
tmp31 = ats_varget_mac(ats_ptr_type, arg0) ;
/* tmp30 = */ atslib_mpz_neg2 (tmp28, tmp31) ;
tmp32 = tmp28 ;
tmp26 = ats_castfn_mac(gmpknd, tmp32) ;
return (tmp26) ;
} /* end of [neg1_myint_02230_gmpknd] */

/*
// /home/hwxi/research/Postiats/git/src/pats_lintprgm_myint_gmp.dats: 4356(line=188, offs=3) -- 4581(line=194, offs=2)
*/
ATSstaticdec()
gmpknd
add01_myint_myint_02232_gmpknd (gmpknd arg0, gmpknd arg1) {
/* local vardec */
ATSlocal (gmpknd, tmp33) ;
// ATSlocal_void (tmp34) ;
ATSlocal (ats_ptr_type, tmp35) ;
ATSlocal (ats_ptr_type, tmp36) ;

__ats_lab_add01_myint_myint_02232_gmpknd:
tmp35 = ats_varget_mac(ats_ptr_type, ats_castfn_mac(ats_ptr_type, arg0)) ;
tmp36 = ats_varget_mac(ats_ptr_type, arg1) ;
/* tmp34 = */ atslib_mpz_add2_mpz (tmp35, tmp36) ;
tmp33 = ats_castfn_mac(gmpknd, ats_castfn_mac(ats_ptr_type, arg0)) ;
return (tmp33) ;
} /* end of [add01_myint_myint_02232_gmpknd] */

/*
// /home/hwxi/research/Postiats/git/src/pats_lintprgm_myint_gmp.dats: 4678(line=200, offs=3) -- 4903(line=206, offs=2)
*/
ATSstaticdec()
gmpknd
sub01_myint_myint_02233_gmpknd (gmpknd arg0, gmpknd arg1) {
/* local vardec */
ATSlocal (gmpknd, tmp37) ;
// ATSlocal_void (tmp38) ;
ATSlocal (ats_ptr_type, tmp39) ;
ATSlocal (ats_ptr_type, tmp40) ;

__ats_lab_sub01_myint_myint_02233_gmpknd:
tmp39 = ats_varget_mac(ats_ptr_type, ats_castfn_mac(ats_ptr_type, arg0)) ;
tmp40 = ats_varget_mac(ats_ptr_type, arg1) ;
/* tmp38 = */ atslib_mpz_sub2_mpz (tmp39, tmp40) ;
tmp37 = ats_castfn_mac(gmpknd, ats_castfn_mac(ats_ptr_type, arg0)) ;
return (tmp37) ;
} /* end of [sub01_myint_myint_02233_gmpknd] */

/*
// /home/hwxi/research/Postiats/git/src/pats_lintprgm_myint_gmp.dats: 4996(line=212, offs=3) -- 5125(line=217, offs=2)
*/
ATSstaticdec()
gmpknd
add_myint_int_02231_gmpknd (gmpknd arg0, ats_int_type arg1) {
/* local vardec */
ATSlocal (gmpknd, tmp41) ;
// ATSlocal_void (tmp42) ;
ATSlocal (ats_ptr_type, tmp43) ;

__ats_lab_add_myint_int_02231_gmpknd:
tmp43 = ats_varget_mac(ats_ptr_type, ats_castfn_mac(ats_ptr_type, arg0)) ;
/* tmp42 = */ atslib_mpz_add2_int (tmp43, arg1) ;
tmp41 = ats_castfn_mac(gmpknd, ats_castfn_mac(ats_ptr_type, arg0)) ;
return (tmp41) ;
} /* end of [add_myint_int_02231_gmpknd] */

/*
// /home/hwxi/research/Postiats/git/src/pats_lintprgm_myint_gmp.dats: 5220(line=223, offs=3) -- 5446(line=230, offs=2)
*/
ATSstaticdec()
gmpknd
mul01_myint_myint_02234_gmpknd (gmpknd arg0, gmpknd arg1) {
/* local vardec */
ATSlocal (gmpknd, tmp44) ;
// ATSlocal_void (tmp45) ;
ATSlocal (ats_ptr_type, tmp46) ;
ATSlocal (ats_ptr_type, tmp47) ;

__ats_lab_mul01_myint_myint_02234_gmpknd:
tmp46 = ats_varget_mac(ats_ptr_type, ats_castfn_mac(ats_ptr_type, arg0)) ;
tmp47 = ats_varget_mac(ats_ptr_type, arg1) ;
/* tmp45 = */ atslib_mpz_mul2_mpz (tmp46, tmp47) ;
tmp44 = ats_castfn_mac(gmpknd, ats_castfn_mac(ats_ptr_type, arg0)) ;
return (tmp44) ;
} /* end of [mul01_myint_myint_02234_gmpknd] */

/*
// /home/hwxi/research/Postiats/git/src/pats_lintprgm_myint_gmp.dats: 5524(line=234, offs=3) -- 5989(line=249, offs=2)
*/
ATSstaticdec()
gmpknd
mul10_myint_myint_02235_gmpknd (gmpknd arg0, gmpknd arg1) {
/* local vardec */
ATSlocal (gmpknd, tmp48) ;
ATSlocal (ats_ptr_type, tmp49) ;
ATSlocal (ats_ptr_type, tmp50) ;
// ATSlocal_void (tmp51) ;
ATSlocal (ats_ptr_type, tmp52) ;
ATSlocal (ats_ptr_type, tmp53) ;

__ats_lab_mul10_myint_myint_02235_gmpknd:
tmp49 = ats_varget_mac(ats_ptr_type, ats_castfn_mac(ats_ptr_type, arg1)) ;
tmp50 = ats_selsin_mac(ats_castfn_mac(ats_ptr_type, tmp49), atslab_2) ;
tmp52 = ats_varget_mac(ats_ptr_type, ats_castfn_mac(ats_ptr_type, arg1)) ;
tmp53 = ats_varget_mac(ats_ptr_type, arg0) ;
/* tmp51 = */ atslib_mpz_mul3_mpz (tmp52, tmp53, tmp50) ;
tmp48 = ats_castfn_mac(gmpknd, ats_castfn_mac(ats_ptr_type, arg1)) ;
return (tmp48) ;
} /* end of [mul10_myint_myint_02235_gmpknd] */

/*
// /home/hwxi/research/Postiats/git/src/pats_lintprgm_myint_gmp.dats: 6067(line=253, offs=3) -- 6421(line=263, offs=4)
*/
ATSstaticdec()
gmpknd
mul11_myint_myint_02236_gmpknd (gmpknd arg0, gmpknd arg1) {
/* local vardec */
ATSlocal (gmpknd, tmp54) ;
ATSlocal (ats_ptr_type, tmp55) ;
ATSlocal (ats_ptr_type, tmp56) ;
// ATSlocal_void (tmp57) ;
// ATSlocal_void (tmp58) ;
ATSlocal (ats_ptr_type, tmp59) ;
ATSlocal (ats_ptr_type, tmp60) ;
ATSlocal (ats_ptr_type, tmp61) ;

__ats_lab_mul11_myint_myint_02236_gmpknd:
tmp55 = atspre_ptr_alloc_tsz (sizeof(ats_mpz_viewt0ype)) ;
tmp56 = ats_selsin_mac(tmp55, atslab_2) ;
/* tmp57 = */ atslib_mpz_init (tmp56) ;
tmp59 = ats_varget_mac(ats_ptr_type, arg0) ;
tmp60 = ats_varget_mac(ats_ptr_type, arg1) ;
/* tmp58 = */ atslib_mpz_mul3_mpz (tmp56, tmp59, tmp60) ;
tmp61 = tmp56 ;
tmp54 = ats_castfn_mac(gmpknd, tmp61) ;
return (tmp54) ;
} /* end of [mul11_myint_myint_02236_gmpknd] */

/*
// /home/hwxi/research/Postiats/git/src/pats_lintprgm_myint_gmp.dats: 6520(line=269, offs=3) -- 6985(line=283, offs=2)
*/
ATSstaticdec()
gmpknd
div01_myint_myint_02237_gmpknd (gmpknd arg0, gmpknd arg1) {
/* local vardec */
ATSlocal (gmpknd, tmp62) ;
ATSlocal (ats_ptr_type, tmp63) ;
ATSlocal (ats_ptr_type, tmp64) ;
// ATSlocal_void (tmp65) ;
ATSlocal (ats_ptr_type, tmp66) ;
ATSlocal (ats_ptr_type, tmp67) ;

__ats_lab_div01_myint_myint_02237_gmpknd:
tmp63 = ats_varget_mac(ats_ptr_type, ats_castfn_mac(ats_ptr_type, arg0)) ;
tmp64 = ats_selsin_mac(ats_castfn_mac(ats_ptr_type, tmp63), atslab_2) ;
tmp66 = ats_varget_mac(ats_ptr_type, ats_castfn_mac(ats_ptr_type, arg0)) ;
tmp67 = ats_varget_mac(ats_ptr_type, arg1) ;
/* tmp65 = */ atslib_mpz_tdiv3_q_mpz (tmp64, tmp66, tmp67) ;
tmp62 = ats_castfn_mac(gmpknd, ats_castfn_mac(ats_ptr_type, arg0)) ;
return (tmp62) ;
} /* end of [div01_myint_myint_02237_gmpknd] */

/*
// /home/hwxi/research/Postiats/git/src/pats_lintprgm_myint_gmp.dats: 7085(line=289, offs=3) -- 7548(line=303, offs=2)
*/
ATSstaticdec()
gmpknd
ediv01_myint_myint_02239_gmpknd (gmpknd arg0, gmpknd arg1) {
/* local vardec */
ATSlocal (gmpknd, tmp68) ;
ATSlocal (ats_ptr_type, tmp69) ;
ATSlocal (ats_ptr_type, tmp70) ;
// ATSlocal_void (tmp71) ;
ATSlocal (ats_ptr_type, tmp72) ;
ATSlocal (ats_ptr_type, tmp73) ;

__ats_lab_ediv01_myint_myint_02239_gmpknd:
tmp69 = ats_varget_mac(ats_ptr_type, ats_castfn_mac(ats_ptr_type, arg0)) ;
tmp70 = ats_selsin_mac(ats_castfn_mac(ats_ptr_type, tmp69), atslab_2) ;
tmp72 = ats_varget_mac(ats_ptr_type, ats_castfn_mac(ats_ptr_type, arg0)) ;
tmp73 = ats_varget_mac(ats_ptr_type, arg1) ;
/* tmp71 = */ atslib_mpz_divexact3 (tmp70, tmp72, tmp73) ;
tmp68 = ats_castfn_mac(gmpknd, ats_castfn_mac(ats_ptr_type, arg0)) ;
return (tmp68) ;
} /* end of [ediv01_myint_myint_02239_gmpknd] */

/*
// /home/hwxi/research/Postiats/git/src/pats_lintprgm_myint_gmp.dats: 7648(line=309, offs=3) -- 8110(line=323, offs=2)
*/
ATSstaticdec()
gmpknd
mod01_myint_myint_02240_gmpknd (gmpknd arg0, gmpknd arg1) {
/* local vardec */
ATSlocal (gmpknd, tmp74) ;
ATSlocal (ats_ptr_type, tmp75) ;
ATSlocal (ats_ptr_type, tmp76) ;
// ATSlocal_void (tmp77) ;
ATSlocal (ats_ptr_type, tmp78) ;
ATSlocal (ats_ptr_type, tmp79) ;

__ats_lab_mod01_myint_myint_02240_gmpknd:
tmp75 = ats_varget_mac(ats_ptr_type, ats_castfn_mac(ats_ptr_type, arg0)) ;
tmp76 = ats_selsin_mac(ats_castfn_mac(ats_ptr_type, tmp75), atslab_2) ;
tmp78 = ats_varget_mac(ats_ptr_type, ats_castfn_mac(ats_ptr_type, arg0)) ;
tmp79 = ats_varget_mac(ats_ptr_type, arg1) ;
/* tmp77 = */ atslib_mpz_mod3_mpz (tmp76, tmp78, tmp79) ;
tmp74 = ats_castfn_mac(gmpknd, ats_castfn_mac(ats_ptr_type, arg0)) ;
return (tmp74) ;
} /* end of [mod01_myint_myint_02240_gmpknd] */

/*
// /home/hwxi/research/Postiats/git/src/pats_lintprgm_myint_gmp.dats: 8188(line=327, offs=3) -- 8542(line=337, offs=4)
*/
ATSstaticdec()
gmpknd
mod11_myint_myint_02241_gmpknd (gmpknd arg0, gmpknd arg1) {
/* local vardec */
ATSlocal (gmpknd, tmp80) ;
ATSlocal (ats_ptr_type, tmp81) ;
ATSlocal (ats_ptr_type, tmp82) ;
// ATSlocal_void (tmp83) ;
// ATSlocal_void (tmp84) ;
ATSlocal (ats_ptr_type, tmp85) ;
ATSlocal (ats_ptr_type, tmp86) ;
ATSlocal (ats_ptr_type, tmp87) ;

__ats_lab_mod11_myint_myint_02241_gmpknd:
tmp81 = atspre_ptr_alloc_tsz (sizeof(ats_mpz_viewt0ype)) ;
tmp82 = ats_selsin_mac(tmp81, atslab_2) ;
/* tmp83 = */ atslib_mpz_init (tmp82) ;
tmp85 = ats_varget_mac(ats_ptr_type, arg0) ;
tmp86 = ats_varget_mac(ats_ptr_type, arg1) ;
/* tmp84 = */ atslib_mpz_mod3_mpz (tmp82, tmp85, tmp86) ;
tmp87 = tmp82 ;
tmp80 = ats_castfn_mac(gmpknd, tmp87) ;
return (tmp80) ;
} /* end of [mod11_myint_myint_02241_gmpknd] */

/*
// /home/hwxi/research/Postiats/git/src/pats_lintprgm_myint_gmp.dats: 8641(line=343, offs=3) -- 9103(line=357, offs=2)
*/
ATSstaticdec()
gmpknd
gcd01_myint_myint_02242_gmpknd (gmpknd arg0, gmpknd arg1) {
/* local vardec */
ATSlocal (gmpknd, tmp88) ;
ATSlocal (ats_ptr_type, tmp89) ;
ATSlocal (ats_ptr_type, tmp90) ;
// ATSlocal_void (tmp91) ;
ATSlocal (ats_ptr_type, tmp92) ;
ATSlocal (ats_ptr_type, tmp93) ;

__ats_lab_gcd01_myint_myint_02242_gmpknd:
tmp89 = ats_varget_mac(ats_ptr_type, ats_castfn_mac(ats_ptr_type, arg0)) ;
tmp90 = ats_selsin_mac(ats_castfn_mac(ats_ptr_type, tmp89), atslab_2) ;
tmp92 = ats_varget_mac(ats_ptr_type, ats_castfn_mac(ats_ptr_type, arg0)) ;
tmp93 = ats_varget_mac(ats_ptr_type, arg1) ;
/* tmp91 = */ atslib_mpz_gcd3_mpz (tmp90, tmp92, tmp93) ;
tmp88 = ats_castfn_mac(gmpknd, ats_castfn_mac(ats_ptr_type, arg0)) ;
return (tmp88) ;
} /* end of [gcd01_myint_myint_02242_gmpknd] */

/*
// /home/hwxi/research/Postiats/git/src/pats_lintprgm_myint_gmp.dats: 9202(line=363, offs=3) -- 9356(line=369, offs=2)
*/
ATSstaticdec()
ats_int_type
compare_myint_int_02249_gmpknd (gmpknd arg0, ats_int_type arg1) {
/* local vardec */
ATSlocal (ats_int_type, tmp94) ;
ATSlocal (ats_ptr_type, tmp95) ;

__ats_lab_compare_myint_int_02249_gmpknd:
tmp95 = ats_varget_mac(ats_ptr_type, arg0) ;
tmp94 = atslib_mpz_cmp_int (tmp95, arg1) ;
return (tmp94) ;
} /* end of [compare_myint_int_02249_gmpknd] */

/*
// /home/hwxi/research/Postiats/git/src/pats_lintprgm_myint_gmp.dats: 9450(line=375, offs=3) -- 9688(line=381, offs=2)
*/
ATSstaticdec()
ats_int_type
compare_myint_myint_02254_gmpknd (gmpknd arg0, gmpknd arg1) {
/* local vardec */
ATSlocal (ats_int_type, tmp96) ;
ATSlocal (ats_ptr_type, tmp97) ;
ATSlocal (ats_ptr_type, tmp98) ;

__ats_lab_compare_myint_myint_02254_gmpknd:
tmp97 = ats_varget_mac(ats_ptr_type, arg0) ;
tmp98 = ats_varget_mac(ats_ptr_type, arg1) ;
tmp96 = atslib_mpz_cmp_mpz (tmp97, tmp98) ;
return (tmp96) ;
} /* end of [compare_myint_myint_02254_gmpknd] */

/* static load function */

extern ats_void_type ATS_2d0_2e2_2e11_2libc_2SATS_2gmp_2esats__staload (void) ;
extern ats_void_type _2home_2hwxi_2research_2Postiats_2git_2src_2pats_intinf_2esats__staload (void) ;
extern ats_void_type _2home_2hwxi_2research_2Postiats_2git_2src_2pats_lintprgm_2esats__staload (void) ;

ats_void_type
_2home_2hwxi_2research_2Postiats_2git_2src_2pats_lintprgm_myint_gmp_2edats__staload () {
static int _2home_2hwxi_2research_2Postiats_2git_2src_2pats_lintprgm_myint_gmp_2edats__staload_flag = 0 ;
if (_2home_2hwxi_2research_2Postiats_2git_2src_2pats_lintprgm_myint_gmp_2edats__staload_flag) return ;
_2home_2hwxi_2research_2Postiats_2git_2src_2pats_lintprgm_myint_gmp_2edats__staload_flag = 1 ;

ATS_2d0_2e2_2e11_2libc_2SATS_2gmp_2esats__staload () ;
_2home_2hwxi_2research_2Postiats_2git_2src_2pats_intinf_2esats__staload () ;
_2home_2hwxi_2research_2Postiats_2git_2src_2pats_lintprgm_2esats__staload () ;

return ;
} /* staload function */

/* dynamic load function */

// dynload flag declaration
// extern ats_int_type _2home_2hwxi_2research_2Postiats_2git_2src_2pats_lintprgm_myint_gmp_2edats__dynload_flag ;

ats_void_type
_2home_2hwxi_2research_2Postiats_2git_2src_2pats_lintprgm_myint_gmp_2edats__dynload () {
// _2home_2hwxi_2research_2Postiats_2git_2src_2pats_lintprgm_myint_gmp_2edats__dynload_flag = 1 ;
_2home_2hwxi_2research_2Postiats_2git_2src_2pats_lintprgm_myint_gmp_2edats__staload () ;

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

/* end of [pats_lintprgm_myint_gmp_dats.c] */
