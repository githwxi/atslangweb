/*
**
** The C code is generated by ATS/Anairiats
** The compilation time is: 2017-8-23: 22h:28m
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

/* prologues from statically loaded files */

#include "pats_location.cats"

#include "pats_location.cats"

#include "pats_location.cats"

#include "pats_lexbuf.cats"

#include "pats_location.cats"

#include "pats_location.cats"
/* external codes at top */
/* type definitions */
/* external typedefs */
/* assuming abstract types */
/* sum constructor declarations */
ATSglobal(ats_sum_type, _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_staexp1_2esats__V1ALint_0) ;
ATSglobal(ats_sum_type, _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_staexp1_2esats__V1ALchar_1) ;
ATSglobal(ats_sum_type, _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_staexp1_2esats__V1ALstring_2) ;
ATSglobal(ats_sum_type, _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_staexp1_2esats__V1ALfloat_3) ;
ATSglobal(ats_sum_type, _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_staexp1_2esats__V1ALerr_4) ;
ATSglobal(ats_sum_type, _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_staexp1_2esats__E1XPide_0) ;
ATSglobal(ats_sum_type, _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_staexp1_2esats__E1XPint_1) ;
ATSglobal(ats_sum_type, _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_staexp1_2esats__E1XPintrep_2) ;
ATSglobal(ats_sum_type, _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_staexp1_2esats__E1XPchar_3) ;
ATSglobal(ats_sum_type, _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_staexp1_2esats__E1XPfloat_4) ;
ATSglobal(ats_sum_type, _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_staexp1_2esats__E1XPstring_5) ;
ATSglobal(ats_sum_type, _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_staexp1_2esats__E1XPv1al_6) ;
ATSglobal(ats_sum_type, _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_staexp1_2esats__E1XPnone_7) ;
ATSglobal(ats_sum_type, _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_staexp1_2esats__E1XPundef_8) ;
ATSglobal(ats_sum_type, _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_staexp1_2esats__E1XPapp_9) ;
ATSglobal(ats_sum_type, _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_staexp1_2esats__E1XPfun_10) ;
ATSglobal(ats_sum_type, _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_staexp1_2esats__E1XPif_11) ;
ATSglobal(ats_sum_type, _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_staexp1_2esats__E1XPeval_12) ;
ATSglobal(ats_sum_type, _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_staexp1_2esats__E1XPlist_13) ;
ATSglobal(ats_sum_type, _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_staexp1_2esats__E1XPerr_14) ;
ATSglobal(ats_sum_type, _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_staexp1_2esats__EFFCSTall_0) ;
ATSglobal(ats_sum_type, _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_staexp1_2esats__EFFCSTnil_1) ;
ATSglobal(ats_sum_type, _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_staexp1_2esats__EFFCSTset_2) ;
ATSglobal(ats_sum_type, _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_staexp1_2esats__S1RTapp_0) ;
ATSglobal(ats_sum_type, _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_staexp1_2esats__S1RTlist_1) ;
ATSglobal(ats_sum_type, _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_staexp1_2esats__S1RTqid_2) ;
ATSglobal(ats_sum_type, _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_staexp1_2esats__S1RTtype_3) ;
ATSglobal(ats_sum_type, _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_staexp1_2esats__S1RTerr_4) ;
ATSglobal(ats_sum_type, _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_staexp1_2esats__SP1Tcstr_0) ;
ATSglobal(ats_sum_type, _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_staexp1_2esats__WTHS1EXPLSTnil_0) ;
ATSglobal(ats_sum_type, _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_staexp1_2esats__WTHS1EXPLSTcons_some_1) ;
ATSglobal(ats_sum_type, _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_staexp1_2esats__WTHS1EXPLSTcons_none_2) ;
ATSglobal(ats_sum_type, _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_staexp1_2esats__S1Qprop_0) ;
ATSglobal(ats_sum_type, _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_staexp1_2esats__S1Qvars_1) ;
ATSglobal(ats_sum_type, _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_staexp1_2esats__S1TEsrt_0) ;
ATSglobal(ats_sum_type, _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_staexp1_2esats__S1TEsub_1) ;
ATSglobal(ats_sum_type, _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_staexp1_2esats__S1Eide_0) ;
ATSglobal(ats_sum_type, _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_staexp1_2esats__S1Esqid_1) ;
ATSglobal(ats_sum_type, _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_staexp1_2esats__S1Eint_2) ;
ATSglobal(ats_sum_type, _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_staexp1_2esats__S1Eintrep_3) ;
ATSglobal(ats_sum_type, _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_staexp1_2esats__S1Echar_4) ;
ATSglobal(ats_sum_type, _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_staexp1_2esats__S1Efloat_5) ;
ATSglobal(ats_sum_type, _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_staexp1_2esats__S1Estring_6) ;
ATSglobal(ats_sum_type, _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_staexp1_2esats__S1Eextype_7) ;
ATSglobal(ats_sum_type, _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_staexp1_2esats__S1Eextkind_8) ;
ATSglobal(ats_sum_type, _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_staexp1_2esats__S1Eapp_9) ;
ATSglobal(ats_sum_type, _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_staexp1_2esats__S1Elam_10) ;
ATSglobal(ats_sum_type, _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_staexp1_2esats__S1Eimp_11) ;
ATSglobal(ats_sum_type, _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_staexp1_2esats__S1Etop_12) ;
ATSglobal(ats_sum_type, _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_staexp1_2esats__S1Elist_13) ;
ATSglobal(ats_sum_type, _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_staexp1_2esats__S1Einvar_14) ;
ATSglobal(ats_sum_type, _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_staexp1_2esats__S1Etrans_15) ;
ATSglobal(ats_sum_type, _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_staexp1_2esats__S1Etyarr_16) ;
ATSglobal(ats_sum_type, _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_staexp1_2esats__S1Etytup_17) ;
ATSglobal(ats_sum_type, _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_staexp1_2esats__S1Etyrec_18) ;
ATSglobal(ats_sum_type, _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_staexp1_2esats__S1Etyrec_ext_19) ;
ATSglobal(ats_sum_type, _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_staexp1_2esats__S1Euni_20) ;
ATSglobal(ats_sum_type, _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_staexp1_2esats__S1Eexi_21) ;
ATSglobal(ats_sum_type, _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_staexp1_2esats__S1Eann_22) ;
ATSglobal(ats_sum_type, _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_staexp1_2esats__S1Ed2ctype_23) ;
ATSglobal(ats_sum_type, _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_staexp1_2esats__S1Eerr_24) ;
ATSglobal(ats_sum_type, _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_staexp1_2esats__S1VARARGone_0) ;
ATSglobal(ats_sum_type, _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_staexp1_2esats__S1VARARGall_1) ;
ATSglobal(ats_sum_type, _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_staexp1_2esats__S1VARARGseq_2) ;
ATSglobal(ats_sum_type, _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_staexp1_2esats__S1EXPARGone_0) ;
ATSglobal(ats_sum_type, _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_staexp1_2esats__S1EXPARGall_1) ;
ATSglobal(ats_sum_type, _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_staexp1_2esats__S1EXPARGseq_2) ;
ATSglobal(ats_sum_type, _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_staexp1_2esats__M1ACARGdyn_0) ;
ATSglobal(ats_sum_type, _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_staexp1_2esats__M1ACARGsta_1) ;
ATSglobal(ats_sum_type, _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_staexp1_2esats__WITHT1YPEsome_0) ;
ATSglobal(ats_sum_type, _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_staexp1_2esats__WITHT1YPEnone_1) ;
ATSglobal(ats_sum_type, _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_staexp1_2esats__I1MPARG_sarglst_0) ;
ATSglobal(ats_sum_type, _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_staexp1_2esats__I1MPARG_svararglst_1) ;

/* exn constructor declarations */
/* static load function */

extern ats_void_type _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_intinf_2esats__staload (void) ;
extern ats_void_type _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_filename_2esats__staload (void) ;
extern ats_void_type _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_location_2esats__staload (void) ;
extern ats_void_type _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_symbol_2esats__staload (void) ;
extern ats_void_type _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_basics_2esats__staload (void) ;
extern ats_void_type _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_effect_2esats__staload (void) ;
extern ats_void_type _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_syntax_2esats__staload (void) ;

ats_void_type
_2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_staexp1_2esats__staload () {
static int _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_staexp1_2esats__staload_flag = 0 ;
if (_2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_staexp1_2esats__staload_flag) return ;
_2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_staexp1_2esats__staload_flag = 1 ;

_2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_intinf_2esats__staload () ;
_2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_filename_2esats__staload () ;
_2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_location_2esats__staload () ;
_2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_symbol_2esats__staload () ;
_2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_basics_2esats__staload () ;
_2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_effect_2esats__staload () ;
_2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_syntax_2esats__staload () ;

// _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_staexp1_2esats__V1ALint_0.tag = 0 ;
// _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_staexp1_2esats__V1ALchar_1.tag = 1 ;
// _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_staexp1_2esats__V1ALstring_2.tag = 2 ;
// _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_staexp1_2esats__V1ALfloat_3.tag = 3 ;
_2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_staexp1_2esats__V1ALerr_4.tag = 4 ;
// _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_staexp1_2esats__E1XPide_0.tag = 0 ;
// _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_staexp1_2esats__E1XPint_1.tag = 1 ;
// _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_staexp1_2esats__E1XPintrep_2.tag = 2 ;
// _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_staexp1_2esats__E1XPchar_3.tag = 3 ;
// _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_staexp1_2esats__E1XPfloat_4.tag = 4 ;
// _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_staexp1_2esats__E1XPstring_5.tag = 5 ;
// _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_staexp1_2esats__E1XPv1al_6.tag = 6 ;
_2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_staexp1_2esats__E1XPnone_7.tag = 7 ;
_2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_staexp1_2esats__E1XPundef_8.tag = 8 ;
// _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_staexp1_2esats__E1XPapp_9.tag = 9 ;
// _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_staexp1_2esats__E1XPfun_10.tag = 10 ;
// _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_staexp1_2esats__E1XPif_11.tag = 11 ;
// _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_staexp1_2esats__E1XPeval_12.tag = 12 ;
// _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_staexp1_2esats__E1XPlist_13.tag = 13 ;
_2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_staexp1_2esats__E1XPerr_14.tag = 14 ;
_2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_staexp1_2esats__EFFCSTall_0.tag = 0 ;
_2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_staexp1_2esats__EFFCSTnil_1.tag = 1 ;
// _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_staexp1_2esats__EFFCSTset_2.tag = 2 ;
// _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_staexp1_2esats__S1RTapp_0.tag = 0 ;
// _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_staexp1_2esats__S1RTlist_1.tag = 1 ;
// _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_staexp1_2esats__S1RTqid_2.tag = 2 ;
// _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_staexp1_2esats__S1RTtype_3.tag = 3 ;
_2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_staexp1_2esats__S1RTerr_4.tag = 4 ;
// _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_staexp1_2esats__SP1Tcstr_0.tag = 0 ;
_2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_staexp1_2esats__WTHS1EXPLSTnil_0.tag = 0 ;
// _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_staexp1_2esats__WTHS1EXPLSTcons_some_1.tag = 1 ;
// _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_staexp1_2esats__WTHS1EXPLSTcons_none_2.tag = 2 ;
// _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_staexp1_2esats__S1Qprop_0.tag = 0 ;
// _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_staexp1_2esats__S1Qvars_1.tag = 1 ;
// _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_staexp1_2esats__S1TEsrt_0.tag = 0 ;
// _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_staexp1_2esats__S1TEsub_1.tag = 1 ;
// _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_staexp1_2esats__S1Eide_0.tag = 0 ;
// _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_staexp1_2esats__S1Esqid_1.tag = 1 ;
// _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_staexp1_2esats__S1Eint_2.tag = 2 ;
// _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_staexp1_2esats__S1Eintrep_3.tag = 3 ;
// _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_staexp1_2esats__S1Echar_4.tag = 4 ;
// _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_staexp1_2esats__S1Efloat_5.tag = 5 ;
// _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_staexp1_2esats__S1Estring_6.tag = 6 ;
// _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_staexp1_2esats__S1Eextype_7.tag = 7 ;
// _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_staexp1_2esats__S1Eextkind_8.tag = 8 ;
// _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_staexp1_2esats__S1Eapp_9.tag = 9 ;
// _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_staexp1_2esats__S1Elam_10.tag = 10 ;
// _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_staexp1_2esats__S1Eimp_11.tag = 11 ;
// _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_staexp1_2esats__S1Etop_12.tag = 12 ;
// _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_staexp1_2esats__S1Elist_13.tag = 13 ;
// _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_staexp1_2esats__S1Einvar_14.tag = 14 ;
// _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_staexp1_2esats__S1Etrans_15.tag = 15 ;
// _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_staexp1_2esats__S1Etyarr_16.tag = 16 ;
// _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_staexp1_2esats__S1Etytup_17.tag = 17 ;
// _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_staexp1_2esats__S1Etyrec_18.tag = 18 ;
// _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_staexp1_2esats__S1Etyrec_ext_19.tag = 19 ;
// _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_staexp1_2esats__S1Euni_20.tag = 20 ;
// _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_staexp1_2esats__S1Eexi_21.tag = 21 ;
// _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_staexp1_2esats__S1Eann_22.tag = 22 ;
// _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_staexp1_2esats__S1Ed2ctype_23.tag = 23 ;
_2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_staexp1_2esats__S1Eerr_24.tag = 24 ;
// _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_staexp1_2esats__S1VARARGone_0.tag = 0 ;
// _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_staexp1_2esats__S1VARARGall_1.tag = 1 ;
// _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_staexp1_2esats__S1VARARGseq_2.tag = 2 ;
_2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_staexp1_2esats__S1EXPARGone_0.tag = 0 ;
_2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_staexp1_2esats__S1EXPARGall_1.tag = 1 ;
// _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_staexp1_2esats__S1EXPARGseq_2.tag = 2 ;
// _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_staexp1_2esats__M1ACARGdyn_0.tag = 0 ;
// _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_staexp1_2esats__M1ACARGsta_1.tag = 1 ;
// _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_staexp1_2esats__WITHT1YPEsome_0.tag = 0 ;
_2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_staexp1_2esats__WITHT1YPEnone_1.tag = 1 ;
// _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_staexp1_2esats__I1MPARG_sarglst_0.tag = 0 ;
// _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_staexp1_2esats__I1MPARG_svararglst_1.tag = 1 ;
return ;
} /* staload function */

/* external codes at mid */
/* external codes at bot */

/* ****** ****** */

/* end of [pats_staexp1_sats.c] */
