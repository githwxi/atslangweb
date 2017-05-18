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

/* prologues from statically loaded files */

#include "ats_intinf.cats"

#include "ats_counter.cats"

#include "ats_counter.cats"

#include "ats_intinf.cats"

#include "ats_counter.cats"
/* external codes at top */
/* type definitions */
typedef
struct {
ats_ptr_type atslab_i2nvresstate_svs ;
ats_ptr_type atslab_i2nvresstate_gua ;
ats_ptr_type atslab_i2nvresstate_arg ;
ats_ptr_type atslab_i2nvresstate_met ;
} anairiats_rec_0 ;

/* external typedefs */
/* assuming abstract types */
/* sum constructor declarations */
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__D2CSTOPTsome_0) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__D2CSTOPTnone_1) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__D2VAROPTsome_0) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__D2VAROPTnone_1) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__D2ITEMcon_0) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__D2ITEMcst_1) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__D2ITEMe1xp_2) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__D2ITEMmacdef_3) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__D2ITEMmacvar_4) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__D2ITEMsymdef_5) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__D2ITEMvar_6) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__D2VARFINdone_0) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__D2VARFINnone_1) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__D2VARFINsome_2) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__D2VARFINvbox_3) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__LABP2ATLSTnil_0) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__LABP2ATLSTdot_1) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__LABP2ATLSTcons_2) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__P2Tann_0) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__P2Tany_1) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__P2Tas_2) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__P2Tbool_3) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__P2Tchar_4) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__P2Tcon_5) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__P2Tempty_6) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__P2Texist_7) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__P2Tfloat_8) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__P2Tint_9) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__P2Tlist_10) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__P2Tlst_11) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__P2Trec_12) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__P2Tstring_13) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__P2Tvar_14) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__P2Tvbox_15) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__D2LABlab_0) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__D2LABind_1) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__LABD2EXPLSTnil_0) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__LABD2EXPLSTcons_1) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__D2EXPARGsta_0) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__D2EXPARGdyn_1) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__D2Eann_funclo_0) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__D2Eann_seff_1) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__D2Eann_type_2) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__D2Eapps_3) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__D2Earrinit_4) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__D2Earrpsz_5) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__D2Earrsub_6) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__D2Eassgn_7) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__D2Ebool_8) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__D2Ecaseof_9) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__D2Echar_10) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__D2Econ_11) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__D2Ecst_12) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__D2Ecstsp_13) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__D2Ecrypt_14) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__D2Ederef_15) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__D2Edynload_16) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__D2Eeffmask_17) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__D2Eempty_18) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__D2Eexist_19) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__D2Eextval_20) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__D2Efix_21) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__D2Efloat_22) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__D2Efloatsp_23) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__D2Efoldat_24) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__D2Efor_25) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__D2Efreeat_26) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__D2Eif_27) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__D2Eint_28) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__D2Eintsp_29) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__D2Elam_dyn_30) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__D2Elaminit_dyn_31) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__D2Elam_met_32) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__D2Elam_sta_33) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__D2Elazy_delay_34) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__D2Elazy_ldelay_35) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__D2Elet_36) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__D2Elist_37) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__D2Eloopexn_38) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__D2Elst_39) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__D2Emac_40) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__D2Emacsyn_41) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__D2Eptrof_42) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__D2Eraise_43) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__D2Erec_44) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__D2Escaseof_45) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__D2Esel_46) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__D2Eseq_47) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__D2Eshowtype_48) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__D2Esif_49) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__D2Estruct_50) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__D2Estring_51) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__D2Esym_52) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__D2Etmpid_53) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__D2Etop_54) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__D2Etrywith_55) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__D2Evar_56) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__D2Eviewat_57) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__D2Ewhere_58) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__D2Ewhile_59) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__D2Cnone_0) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__D2Clist_1) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__D2Cinclude_2) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__D2Csymintr_3) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__D2Csymelim_4) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__D2Cstavars_5) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__D2Csaspdec_6) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__D2Cdcstdec_7) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__D2Cdatdec_8) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__D2Cexndec_9) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__D2Coverload_10) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__D2Cextype_11) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__D2Cextval_12) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__D2Cextcode_13) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__D2Cvaldecs_14) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__D2Cvaldecs_par_15) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__D2Cvaldecs_rec_16) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__D2Cfundecs_17) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__D2Cvardecs_18) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__D2Cimpdec_19) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__D2Clocal_20) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__D2Cdynload_21) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__D2Cstaload_22) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__MACARGone_0) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__MACARGlst_1) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__L2VALarrsub_0) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__L2VALptr_1) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__L2VALvar_lin_2) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__L2VALvar_mut_3) ;
ATSglobal(ats_sum_type, ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__L2VALnone_4) ;

/* exn constructor declarations */
/* static load function */

extern ats_void_type ATS_2d0_2e2_2e12_2src_2ats_filename_2esats__staload (void) ;
extern ats_void_type ATS_2d0_2e2_2e12_2src_2ats_label_2esats__staload (void) ;
extern ats_void_type ATS_2d0_2e2_2e12_2src_2ats_location_2esats__staload (void) ;
extern ats_void_type ATS_2d0_2e2_2e12_2src_2ats_intinf_2esats__staload (void) ;
extern ats_void_type ATS_2d0_2e2_2e12_2src_2ats_staexp1_2esats__staload (void) ;
extern ats_void_type ATS_2d0_2e2_2e12_2src_2ats_stamp_2esats__staload (void) ;
extern ats_void_type ATS_2d0_2e2_2e12_2src_2ats_symbol_2esats__staload (void) ;
extern ats_void_type ATS_2d0_2e2_2e12_2src_2ats_symenv_2esats__staload (void) ;
extern ats_void_type ATS_2d0_2e2_2e12_2src_2ats_syntax_2esats__staload (void) ;
extern ats_void_type ATS_2d0_2e2_2e12_2src_2ats_syntax_2esats__staload (void) ;
extern ats_void_type ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__staload (void) ;

ats_void_type
ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__staload () {
static int ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__staload_flag = 0 ;
if (ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__staload_flag) return ;
ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__staload_flag = 1 ;

ATS_2d0_2e2_2e12_2src_2ats_filename_2esats__staload () ;
ATS_2d0_2e2_2e12_2src_2ats_label_2esats__staload () ;
ATS_2d0_2e2_2e12_2src_2ats_location_2esats__staload () ;
ATS_2d0_2e2_2e12_2src_2ats_intinf_2esats__staload () ;
ATS_2d0_2e2_2e12_2src_2ats_staexp1_2esats__staload () ;
ATS_2d0_2e2_2e12_2src_2ats_stamp_2esats__staload () ;
ATS_2d0_2e2_2e12_2src_2ats_symbol_2esats__staload () ;
ATS_2d0_2e2_2e12_2src_2ats_symenv_2esats__staload () ;
ATS_2d0_2e2_2e12_2src_2ats_syntax_2esats__staload () ;
ATS_2d0_2e2_2e12_2src_2ats_syntax_2esats__staload () ;
ATS_2d0_2e2_2e12_2src_2ats_staexp2_2esats__staload () ;

// ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__D2CSTOPTsome_0.tag = 0 ;
ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__D2CSTOPTnone_1.tag = 1 ;
// ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__D2VAROPTsome_0.tag = 0 ;
ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__D2VAROPTnone_1.tag = 1 ;
// ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__D2ITEMcon_0.tag = 0 ;
// ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__D2ITEMcst_1.tag = 1 ;
// ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__D2ITEMe1xp_2.tag = 2 ;
// ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__D2ITEMmacdef_3.tag = 3 ;
// ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__D2ITEMmacvar_4.tag = 4 ;
// ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__D2ITEMsymdef_5.tag = 5 ;
// ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__D2ITEMvar_6.tag = 6 ;
ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__D2VARFINdone_0.tag = 0 ;
ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__D2VARFINnone_1.tag = 1 ;
// ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__D2VARFINsome_2.tag = 2 ;
// ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__D2VARFINvbox_3.tag = 3 ;
ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__LABP2ATLSTnil_0.tag = 0 ;
ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__LABP2ATLSTdot_1.tag = 1 ;
// ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__LABP2ATLSTcons_2.tag = 2 ;
// ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__P2Tann_0.tag = 0 ;
ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__P2Tany_1.tag = 1 ;
// ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__P2Tas_2.tag = 2 ;
// ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__P2Tbool_3.tag = 3 ;
// ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__P2Tchar_4.tag = 4 ;
// ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__P2Tcon_5.tag = 5 ;
ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__P2Tempty_6.tag = 6 ;
// ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__P2Texist_7.tag = 7 ;
// ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__P2Tfloat_8.tag = 8 ;
// ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__P2Tint_9.tag = 9 ;
// ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__P2Tlist_10.tag = 10 ;
// ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__P2Tlst_11.tag = 11 ;
// ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__P2Trec_12.tag = 12 ;
// ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__P2Tstring_13.tag = 13 ;
// ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__P2Tvar_14.tag = 14 ;
// ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__P2Tvbox_15.tag = 15 ;
// ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__D2LABlab_0.tag = 0 ;
// ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__D2LABind_1.tag = 1 ;
ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__LABD2EXPLSTnil_0.tag = 0 ;
// ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__LABD2EXPLSTcons_1.tag = 1 ;
// ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__D2EXPARGsta_0.tag = 0 ;
// ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__D2EXPARGdyn_1.tag = 1 ;
// ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__D2Eann_funclo_0.tag = 0 ;
// ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__D2Eann_seff_1.tag = 1 ;
// ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__D2Eann_type_2.tag = 2 ;
// ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__D2Eapps_3.tag = 3 ;
// ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__D2Earrinit_4.tag = 4 ;
// ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__D2Earrpsz_5.tag = 5 ;
// ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__D2Earrsub_6.tag = 6 ;
// ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__D2Eassgn_7.tag = 7 ;
// ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__D2Ebool_8.tag = 8 ;
// ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__D2Ecaseof_9.tag = 9 ;
// ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__D2Echar_10.tag = 10 ;
// ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__D2Econ_11.tag = 11 ;
// ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__D2Ecst_12.tag = 12 ;
// ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__D2Ecstsp_13.tag = 13 ;
// ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__D2Ecrypt_14.tag = 14 ;
// ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__D2Ederef_15.tag = 15 ;
// ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__D2Edynload_16.tag = 16 ;
// ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__D2Eeffmask_17.tag = 17 ;
ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__D2Eempty_18.tag = 18 ;
// ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__D2Eexist_19.tag = 19 ;
// ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__D2Eextval_20.tag = 20 ;
// ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__D2Efix_21.tag = 21 ;
// ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__D2Efloat_22.tag = 22 ;
// ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__D2Efloatsp_23.tag = 23 ;
// ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__D2Efoldat_24.tag = 24 ;
// ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__D2Efor_25.tag = 25 ;
// ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__D2Efreeat_26.tag = 26 ;
// ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__D2Eif_27.tag = 27 ;
// ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__D2Eint_28.tag = 28 ;
// ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__D2Eintsp_29.tag = 29 ;
// ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__D2Elam_dyn_30.tag = 30 ;
// ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__D2Elaminit_dyn_31.tag = 31 ;
// ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__D2Elam_met_32.tag = 32 ;
// ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__D2Elam_sta_33.tag = 33 ;
// ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__D2Elazy_delay_34.tag = 34 ;
// ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__D2Elazy_ldelay_35.tag = 35 ;
// ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__D2Elet_36.tag = 36 ;
// ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__D2Elist_37.tag = 37 ;
// ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__D2Eloopexn_38.tag = 38 ;
// ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__D2Elst_39.tag = 39 ;
// ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__D2Emac_40.tag = 40 ;
// ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__D2Emacsyn_41.tag = 41 ;
// ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__D2Eptrof_42.tag = 42 ;
// ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__D2Eraise_43.tag = 43 ;
// ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__D2Erec_44.tag = 44 ;
// ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__D2Escaseof_45.tag = 45 ;
// ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__D2Esel_46.tag = 46 ;
// ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__D2Eseq_47.tag = 47 ;
// ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__D2Eshowtype_48.tag = 48 ;
// ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__D2Esif_49.tag = 49 ;
// ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__D2Estruct_50.tag = 50 ;
// ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__D2Estring_51.tag = 51 ;
// ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__D2Esym_52.tag = 52 ;
// ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__D2Etmpid_53.tag = 53 ;
ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__D2Etop_54.tag = 54 ;
// ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__D2Etrywith_55.tag = 55 ;
// ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__D2Evar_56.tag = 56 ;
// ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__D2Eviewat_57.tag = 57 ;
// ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__D2Ewhere_58.tag = 58 ;
// ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__D2Ewhile_59.tag = 59 ;
ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__D2Cnone_0.tag = 0 ;
// ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__D2Clist_1.tag = 1 ;
// ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__D2Cinclude_2.tag = 2 ;
// ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__D2Csymintr_3.tag = 3 ;
// ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__D2Csymelim_4.tag = 4 ;
// ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__D2Cstavars_5.tag = 5 ;
// ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__D2Csaspdec_6.tag = 6 ;
// ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__D2Cdcstdec_7.tag = 7 ;
// ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__D2Cdatdec_8.tag = 8 ;
// ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__D2Cexndec_9.tag = 9 ;
// ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__D2Coverload_10.tag = 10 ;
// ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__D2Cextype_11.tag = 11 ;
// ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__D2Cextval_12.tag = 12 ;
// ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__D2Cextcode_13.tag = 13 ;
// ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__D2Cvaldecs_14.tag = 14 ;
// ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__D2Cvaldecs_par_15.tag = 15 ;
// ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__D2Cvaldecs_rec_16.tag = 16 ;
// ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__D2Cfundecs_17.tag = 17 ;
// ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__D2Cvardecs_18.tag = 18 ;
// ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__D2Cimpdec_19.tag = 19 ;
// ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__D2Clocal_20.tag = 20 ;
// ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__D2Cdynload_21.tag = 21 ;
// ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__D2Cstaload_22.tag = 22 ;
// ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__MACARGone_0.tag = 0 ;
// ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__MACARGlst_1.tag = 1 ;
// ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__L2VALarrsub_0.tag = 0 ;
// ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__L2VALptr_1.tag = 1 ;
// ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__L2VALvar_lin_2.tag = 2 ;
// ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__L2VALvar_mut_3.tag = 3 ;
// ATS_2d0_2e2_2e12_2src_2ats_dynexp2_2esats__L2VALnone_4.tag = 4 ;
return ;
} /* staload function */

/* external codes at mid */
/* external codes at bot */

/* ****** ****** */

/* end of [/home/hwxi/Research/ATS-Anairiats/bootstrap1/ats_dynexp2_sats.c] */
