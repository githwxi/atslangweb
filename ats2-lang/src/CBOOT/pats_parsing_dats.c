/*
**
** The C code is generated by ATS/Anairiats
** The compilation time is: 2017-8-25: 10h:16m
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

#include "libc/CATS/stdio.cats"

#include "libc/sys/CATS/types.cats"

#include "pats_location.cats"

#include "pats_lexbuf.cats"

#include "pats_location.cats"

#include "pats_tokbuf.cats"

#include "pats_lexbuf.cats"

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

#include "pats_lexbuf.cats"

#include "pats_location.cats"

#include "pats_tokbuf.cats"

#include "pats_lexbuf.cats"

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
/* external codes at top */
/* type definitions */
typedef struct {
ats_ptr_type atslab_0 ;
} anairiats_sum_0 ;

typedef struct {
int tag ;
char *name ;
ats_ptr_type atslab_0 ;
} anairiats_sum_1 ;

typedef struct {
ats_ptr_type atslab_0 ;
ats_ptr_type atslab_1 ;
} anairiats_sum_2 ;

/* external typedefs */
/* external dynamic constructor declarations */
ATSextern_val(ats_sum_type, ATS_2d0_2e2_2e12_2prelude_2basics_sta_2esats__list_cons_0) ;
ATSextern_val(ats_sum_type, ATS_2d0_2e2_2e12_2prelude_2basics_sta_2esats__list_nil_1) ;
ATSextern_val(ats_sum_type, ATS_2d0_2e2_2e12_2prelude_2basics_sta_2esats__None_vt_0) ;
ATSextern_val(ats_sum_type, ATS_2d0_2e2_2e12_2prelude_2basics_sta_2esats__Some_vt_1) ;
ATSextern_val(ats_exn_type, _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_error_2esats__PATSOPT_FILENONE_EXN) ;

/* external dynamic constant declarations */
ATSextern_fun(ats_void_type, atspre_prerr_newline) () ;
ATSextern_fun(ats_int_type, atspre_add_int_int) (ats_int_type, ats_int_type) ;
ATSextern_fun(ats_bool_type, atspre_gt_int_int) (ats_int_type, ats_int_type) ;
ATSextern_fun(ats_bool_type, atspre_eq_int_int) (ats_int_type, ats_int_type) ;
ATSextern_fun(ats_void_type, atspre_prerr_string) (ats_ptr_type) ;
ATSextern_fun(ats_ptr_type, atslib_fopen_exn) (ats_ptr_type, ats_ptr_type) ;
ATSextern_fun(ats_varet_type, _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_error_2esats__abort) () ;
ATSextern_fun(ats_ptr_type, _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_symbol_2esats__symbol_get_name) (ats_ptr_type) ;
ATSextern_fun(ats_ptr_type, _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_filename_2esats__filename_get_fullname) (ats_ptr_type) ;
ATSextern_val(ats_ptr_type, _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_filename_2esats__filename_dummy) ;
ATSextern_fun(ats_bool_type, _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_filename_2esats__filename_isnot_dummy) (ats_ptr_type) ;
ATSextern_fun(ats_void_type, _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_filename_2esats__the_filenamelst_pop) () ;
ATSextern_fun(ats_void_type, _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_filename_2esats__the_filenamelst_push) (ats_ptr_type) ;
ATSextern_fun(ats_void_type, _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_filename_2esats__the_filenamelst_ppush) (ats_ptr_type) ;
ATSextern_fun(ats_ptr_type, _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_filename_2esats__filenameopt_make_local) (ats_ptr_type) ;
ATSextern_fun(ats_void_type, _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_location_2esats__the_location_pragma_pop) () ;
ATSextern_fun(ats_void_type, _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_location_2esats__the_location_pragma_push) () ;
ATSextern_fun(ats_void_type, _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_lexing_2esats__the_lexerrlst_clear) () ;
ATSextern_fun(ats_int_type, _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_lexing_2esats__fprint_the_lexerrlst) (ats_ptr_type) ;
ATSextern_fun(ats_void_type, _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_tokbuf_2esats__tokbuf_initize_filp) (ats_ref_type, ats_ptr_type) ;
ATSextern_fun(ats_void_type, _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_tokbuf_2esats__tokbuf_initize_getc) (ats_ref_type, ats_clo_ptr_type) ;
ATSextern_fun(ats_void_type, _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_tokbuf_2esats__tokbuf_initize_string) (ats_ref_type, ats_ptr_type) ;
ATSextern_fun(ats_void_type, _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_tokbuf_2esats__tokbuf_uninitize) (ats_ref_type) ;
ATSextern_fun(ats_ptr_type, _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_syntax_2esats__d0ecl_list) (ats_ptr_type, ats_ptr_type) ;
ATSextern_fun(ats_ptr_type, _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_syntax_2esats__d0ecl_toplocal) (ats_ptr_type, ats_ptr_type) ;
ATSextern_fun(ats_void_type, _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_parsing_2esats__the_parerrlst_clear) () ;
ATSextern_fun(ats_int_type, _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_parsing_2esats__fprint_the_parerrlst) (ats_ptr_type) ;
ATSextern_fun(ats_ptr_type, _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_parsing_2esats__p_EOF) (ats_ref_type, ats_int_type, ats_ref_type) ;
ATSextern_fun(ats_ptr_type, _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_parsing_2esats__p_toplevel_sta) (ats_ref_type, ats_ref_type) ;
ATSextern_fun(ats_ptr_type, _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_parsing_2esats__p_toplevel_dyn) (ats_ref_type, ats_ref_type) ;
ATSextern_fun(ats_ptr_type, _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_parsing_2esats__parse_from_tokbuf_toplevel) (ats_int_type, ats_ref_type) ;
ATSextern_fun(ats_ptr_type, _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_parsing_2esats__parse_from_fileref_toplevel) (ats_int_type, ats_ptr_type) ;
ATSextern_fun(ats_ptr_type, _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_parsing_2esats__parse_from_filename_toplevel) (ats_int_type, ats_ptr_type) ;
ATSextern_fun(ats_ptr_type, _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_parsing_2esats__parse_from_givename_toplevel2) (ats_int_type, ats_ptr_type, ats_ref_type) ;

/* external dynamic terminating constant declarations */
#ifdef _ATS_PROOFCHECK
extern
ats_void_type ATS_2d0_2e2_2e12_2prelude_2basics_dyn_2esats__file_mode_lte_r_r_prfck () ;
#endif /* _ATS_PROOFCHECK */

/* assuming abstract types */
/* sum constructor declarations */
/* exn constructor declarations */
/* global dynamic (non-functional) constant declarations */
/* internal function declarations */
static
ats_int_type __ats_fun_5 (ats_ptr_type env0) ;
static
ats_clo_ptr_type __ats_fun_5_closure_make (ats_ptr_type env0) ;
static
ats_int_type __ats_fun_5_clofun (ats_clo_ptr_type cloptr) ;
static
ats_ptr_type auxlst_11 (ats_int_type arg0, ats_ptr_type arg1, ats_ref_type arg2) ;

/* partial value template declarations */
/* static temporary variable declarations */
/* external value variable declarations */

/* function implementations */

/*
// /home/hwxi/Research/ATS-Postiats/src/pats_parsing.dats: 1781(line=62, offs=3) -- 2086(line=72, offs=4)
*/
ATSglobaldec()
ats_ptr_type
_2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_parsing_2esats__parse_from_string_parser (ats_ptr_type arg0, ats_ptr_type arg1) {
/* local vardec */
ATSlocal (ats_ptr_type, tmp0) ;
ATSlocal (pats_tokbuf_struct, tmp1) ;
// ATSlocal_void (tmp2) ;
ATSlocal (ats_int_type, tmp3) ;
ATSlocal (ats_ptr_type, tmp4) ;
ATSlocal (ats_ptr_type, tmp5) ;
// ATSlocal_void (tmp6) ;
ATSlocal (ats_bool_type, tmp7) ;

__ats_lab__2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_parsing_2esats__parse_from_string_parser:
/* pats_tokbuf_struct tmp1 ; */
/* tmp2 = */ _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_tokbuf_2esats__tokbuf_initize_string ((&tmp1), arg0) ;
/* ats_int_type tmp3 ; */
tmp3 = 0 ;
tmp4 = ((ats_ptr_type(*)(ats_ref_type, ats_int_type, ats_ref_type))arg1) ((&tmp1), 0, (&tmp3)) ;
tmp5 = _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_parsing_2esats__p_EOF ((&tmp1), 0, (&tmp3)) ;
/* tmp6 = */ _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_tokbuf_2esats__tokbuf_uninitize ((&tmp1)) ;
tmp7 = atspre_eq_int_int (tmp3, 0) ;
if (tmp7) {
tmp0 = ATS_MALLOC(sizeof(anairiats_sum_0)) ;
ats_selptrset_mac(anairiats_sum_0, tmp0, atslab_0, tmp4) ;
} else {
tmp0 = (ats_sum_ptr_type)0 ;
} /* end of [if] */
return (tmp0) ;
} /* end of [_2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_parsing_2esats__parse_from_string_parser] */

/*
// /home/hwxi/Research/ATS-Postiats/src/pats_parsing.dats: 2185(line=78, offs=3) -- 2624(line=98, offs=4)
*/
ATSglobaldec()
ats_ptr_type
_2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_parsing_2esats__parse_from_tokbuf_toplevel (ats_int_type arg0, ats_ref_type arg1) {
/* local vardec */
ATSlocal (ats_ptr_type, tmp8) ;
ATSlocal (ats_int_type, tmp9) ;
// ATSlocal_void (tmp10) ;
// ATSlocal_void (tmp11) ;
ATSlocal (ats_ptr_type, tmp12) ;
ATSlocal (ats_bool_type, tmp13) ;
ATSlocal (ats_int_type, tmp14) ;
ATSlocal (ats_int_type, tmp15) ;
// ATSlocal_void (tmp16) ;
ATSlocal (ats_bool_type, tmp17) ;
ATSlocal (ats_int_type, tmp18) ;

__ats_lab__2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_parsing_2esats__parse_from_tokbuf_toplevel:
/* ats_int_type tmp9 ; */
tmp9 = 0 ;
/* tmp10 = */ _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_lexing_2esats__the_lexerrlst_clear () ;
/* tmp11 = */ _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_parsing_2esats__the_parerrlst_clear () ;
tmp13 = atspre_eq_int_int (arg0, 0) ;
if (tmp13) {
tmp12 = _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_parsing_2esats__p_toplevel_sta (arg1, (&tmp9)) ;
} else {
tmp12 = _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_parsing_2esats__p_toplevel_dyn (arg1, (&tmp9)) ;
} /* end of [if] */
tmp14 = _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_lexing_2esats__fprint_the_lexerrlst (stderr) ;
tmp15 = _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_parsing_2esats__fprint_the_parerrlst (stderr) ;
tmp18 = atspre_add_int_int (tmp14, tmp15) ;
tmp17 = atspre_gt_int_int (tmp18, 0) ;
if (tmp17) {
/* tmp16 = */ _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_error_2esats__abort () ;
} else {
/* empty */
} /* end of [if] */
tmp8 = tmp12 ;
return (tmp8) ;
} /* end of [_2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_parsing_2esats__parse_from_tokbuf_toplevel] */

/*
// /home/hwxi/Research/ATS-Postiats/src/pats_parsing.dats: 2768(line=107, offs=3) -- 2956(line=115, offs=2)
*/
ATSglobaldec()
ats_ptr_type
libatsopt_parse_from_string_toplevel (ats_int_type arg0, ats_ptr_type arg1) {
/* local vardec */
ATSlocal (ats_ptr_type, tmp19) ;
ATSlocal (pats_tokbuf_struct, tmp20) ;
// ATSlocal_void (tmp21) ;
ATSlocal (ats_ptr_type, tmp22) ;
// ATSlocal_void (tmp23) ;

__ats_lab_libatsopt_parse_from_string_toplevel:
/* pats_tokbuf_struct tmp20 ; */
/* tmp21 = */ _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_tokbuf_2esats__tokbuf_initize_string ((&tmp20), arg1) ;
tmp22 = _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_parsing_2esats__parse_from_tokbuf_toplevel (arg0, (&tmp20)) ;
/* tmp23 = */ _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_tokbuf_2esats__tokbuf_uninitize ((&tmp20)) ;
tmp19 = tmp22 ;
return (tmp19) ;
} /* end of [libatsopt_parse_from_string_toplevel] */

/*
// /home/hwxi/Research/ATS-Postiats/src/pats_parsing.dats: 3057(line=121, offs=3) -- 3116(line=122, offs=49)
*/
ATSglobaldec()
ats_ptr_type
_2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_parsing_2esats__parse_from_stdin_toplevel (ats_int_type arg0) {
/* local vardec */
ATSlocal (ats_ptr_type, tmp24) ;

__ats_lab__2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_parsing_2esats__parse_from_stdin_toplevel:
tmp24 = _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_parsing_2esats__parse_from_fileref_toplevel (arg0, stdin) ;
return (tmp24) ;
} /* end of [_2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_parsing_2esats__parse_from_stdin_toplevel] */

/*
// /home/hwxi/Research/ATS-Postiats/src/pats_parsing.dats: 3285(line=134, offs=9) -- 3325(line=134, offs=49)
*/
ATSstaticdec()
ats_int_type
__ats_fun_5 (ats_ptr_type env0) {
/* local vardec */
ATSlocal (ats_int_type, tmp28) ;

__ats_lab___ats_fun_5:
tmp28 = atslib_fgetc_err (env0) ;
return (tmp28) ;
} /* end of [__ats_fun_5] */

typedef struct {
ats_fun_ptr_type closure_fun ;
ats_ptr_type closure_env_0 ;
} __ats_fun_5_closure_type ;

ats_int_type
__ats_fun_5_clofun (ats_clo_ptr_type cloptr) {
return __ats_fun_5 (((__ats_fun_5_closure_type*)cloptr)->closure_env_0) ;
} /* end of function */

ATSinline()
ats_void_type
__ats_fun_5_closure_init (__ats_fun_5_closure_type *p_clo, ats_ptr_type env0) {
p_clo->closure_fun = (ats_fun_ptr_type)&__ats_fun_5_clofun ;
p_clo->closure_env_0 = env0 ;
return ;
} /* end of function */

ats_clo_ptr_type
__ats_fun_5_closure_make (ats_ptr_type env0) {
__ats_fun_5_closure_type *p_clo = ATS_MALLOC(sizeof(__ats_fun_5_closure_type)) ;
__ats_fun_5_closure_init (p_clo, env0) ;
return (ats_clo_ptr_type)p_clo ;
} /* end of function */

/*
// /home/hwxi/Research/ATS-Postiats/src/pats_parsing.dats: 3197(line=127, offs=3) -- 3418(line=139, offs=2)
*/
ATSglobaldec()
ats_ptr_type
_2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_parsing_2esats__parse_from_fileref_toplevel (ats_int_type arg0, ats_ptr_type arg1) {
/* local vardec */
ATSlocal (ats_ptr_type, tmp25) ;
ATSlocal (pats_tokbuf_struct, tmp26) ;
// ATSlocal_void (tmp27) ;
ATSlocal (ats_ptr_type, tmp29) ;
// ATSlocal_void (tmp30) ;

__ats_lab__2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_parsing_2esats__parse_from_fileref_toplevel:
/* pats_tokbuf_struct tmp26 ; */
/* tmp27 = */ _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_tokbuf_2esats__tokbuf_initize_getc ((&tmp26), __ats_fun_5_closure_make (arg1)) ;
tmp29 = _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_parsing_2esats__parse_from_tokbuf_toplevel (arg0, (&tmp26)) ;
/* tmp30 = */ _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_tokbuf_2esats__tokbuf_uninitize ((&tmp26)) ;
tmp25 = tmp29 ;
return (tmp25) ;
} /* end of [_2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_parsing_2esats__parse_from_fileref_toplevel] */

/*
// /home/hwxi/Research/ATS-Postiats/src/pats_parsing.dats: 3523(line=145, offs=3) -- 4139(line=179, offs=4)
*/
ATSglobaldec()
ats_ptr_type
_2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_parsing_2esats__parse_from_filename_toplevel (ats_int_type arg0, ats_ptr_type arg1) {
/* local vardec */
ATSlocal (ats_ptr_type, tmp31) ;
ATSlocal (pats_tokbuf_struct, tmp32) ;
ATSlocal (ats_ptr_type, tmp33) ;
ATSlocal (ats_ptr_type, tmp34) ;
ATSlocal (ats_ptr_type, tmp35) ;
ATSlocal (ats_ptr_type, tmp36) ;
// ATSlocal_void (tmp37) ;
// ATSlocal_void (tmp38) ;
// ATSlocal_void (tmp39) ;
// ATSlocal_void (tmp40) ;
ATSlocal (ats_ptr_type, tmp41) ;
// ATSlocal_void (tmp42) ;
// ATSlocal_void (tmp43) ;
// ATSlocal_void (tmp44) ;

__ats_lab__2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_parsing_2esats__parse_from_filename_toplevel:
/* pats_tokbuf_struct tmp32 ; */
tmp33 = _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_filename_2esats__filename_get_fullname (arg1) ;
tmp34 = _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_symbol_2esats__symbol_get_name (tmp33) ;
tmp35 = atslib_fopen_exn (tmp34, "r") ;
tmp36 = ats_selsin_mac(tmp35, atslab_1) ;
/* tmp37 = */ _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_tokbuf_2esats__tokbuf_initize_filp ((&tmp32), tmp36) ;
/* tmp38 = */ _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_filename_2esats__the_filenamelst_push (arg1) ;
/* tmp39 = ats_selsin_mac(tmp38, atslab_1) */ ;
/* tmp40 = */ _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_location_2esats__the_location_pragma_push () ;
tmp41 = _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_parsing_2esats__parse_from_tokbuf_toplevel (arg0, (&tmp32)) ;
/* tmp42 = */ _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_filename_2esats__the_filenamelst_pop () ;
/* tmp43 = */ _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_location_2esats__the_location_pragma_pop () ;
/* tmp44 = */ _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_tokbuf_2esats__tokbuf_uninitize ((&tmp32)) ;
tmp31 = tmp41 ;
return (tmp31) ;
} /* end of [_2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_parsing_2esats__parse_from_filename_toplevel] */

/*
// /home/hwxi/Research/ATS-Postiats/src/pats_parsing.dats: 4246(line=185, offs=3) -- 4405(line=197, offs=4)
*/
ATSglobaldec()
ats_ptr_type
_2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_parsing_2esats__parse_from_filename_toplevel2 (ats_int_type arg0, ats_ptr_type arg1) {
/* local vardec */
ATSlocal (ats_ptr_type, tmp45) ;
ATSlocal (ats_bool_type, tmp46) ;

__ats_lab__2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_parsing_2esats__parse_from_filename_toplevel2:
tmp46 = _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_filename_2esats__filename_isnot_dummy (arg1) ;
if (tmp46) {
tmp45 = _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_parsing_2esats__parse_from_filename_toplevel (arg0, arg1) ;
} else {
tmp45 = (ats_sum_ptr_type)0 ;
} /* end of [if] */
return (tmp45) ;
} /* end of [_2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_parsing_2esats__parse_from_filename_toplevel2] */

/*
// /home/hwxi/Research/ATS-Postiats/src/pats_parsing.dats: 4511(line=203, offs=3) -- 5424(line=247, offs=4)
*/
ATSglobaldec()
ats_ptr_type
_2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_parsing_2esats__parse_from_givename_toplevel (ats_int_type arg0, ats_ptr_type arg1, ats_ref_type arg2) {
/* local vardec */
ATSlocal (ats_ptr_type, tmp47) ;
ATSlocal (ats_ptr_type, tmp48) ;
ATSlocal (ats_ptr_type, tmp49) ;
ATSlocal (ats_ptr_type, tmp50) ;
// ATSlocal_void (tmp51) ;
// ATSlocal_void (tmp52) ;
// ATSlocal_void (tmp53) ;
// ATSlocal_void (tmp54) ;
// ATSlocal_void (tmp55) ;
// ATSlocal_void (tmp56) ;
// ATSlocal_void (tmp57) ;
ATSlocal (ats_ptr_type, tmp58) ;

__ats_lab__2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_parsing_2esats__parse_from_givename_toplevel:
tmp48 = _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_filename_2esats__filenameopt_make_local (arg1) ;
do {
/* branch: __ats_lab_0 */
__ats_lab_0_0:
if (tmp48 == (ats_sum_ptr_type)0) { goto __ats_lab_1_0 ; }
__ats_lab_0_1:
tmp49 = ats_caselptrlab_mac(anairiats_sum_0, tmp48, atslab_0) ;
ATS_FREE(tmp48) ;
ats_ptrget_mac(ats_ptr_type, arg2) = tmp49 ;
tmp50 = _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_parsing_2esats__parse_from_filename_toplevel (arg0, tmp49) ;
/* tmp51 = */ _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_filename_2esats__the_filenamelst_ppush (tmp49) ;
tmp47 = tmp50 ;
break ;

/* branch: __ats_lab_1 */
__ats_lab_1_0:
// if (tmp48 != (ats_sum_ptr_type)0) { ats_deadcode_failure_handle () ; }
__ats_lab_1_1:
ats_ptrget_mac(ats_ptr_type, arg2) = _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_filename_2esats__filename_dummy ;
/* tmp52 = */ atspre_prerr_string (ATSstrcst("patsopt: error(0)")) ;
/* tmp53 = */ atspre_prerr_string (ATSstrcst(": the given file [")) ;
/* tmp54 = */ atspre_prerr_string (arg1) ;
/* tmp55 = */ atspre_prerr_string (ATSstrcst("] cannot be accessed.")) ;
/* tmp56 = */ atspre_prerr_newline () ;
tmp58 = ATS_MALLOC(sizeof(anairiats_sum_1)) ;
((ats_exn_ptr_type)tmp58)->tag = _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_error_2esats__PATSOPT_FILENONE_EXN.tag ;
((ats_exn_ptr_type)tmp58)->name = _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_error_2esats__PATSOPT_FILENONE_EXN.name ;
ats_selptrset_mac(anairiats_sum_1, tmp58, atslab_0, arg1) ;
/* tmp57 = */ ats_raise_exn (tmp58) ;
tmp47 = (ats_sum_ptr_type)0 ;
break ;
} while (0) ;
return (tmp47) ;
} /* end of [_2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_parsing_2esats__parse_from_givename_toplevel] */

/*
// /home/hwxi/Research/ATS-Postiats/src/pats_parsing.dats: 5530(line=253, offs=3) -- 6160(line=282, offs=4)
*/
ATSglobaldec()
ats_ptr_type
_2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_parsing_2esats__parse_from_givename_toplevel2 (ats_int_type arg0, ats_ptr_type arg1, ats_ref_type arg2) {
/* local vardec */
ATSlocal (ats_ptr_type, tmp59) ;
ATSlocal (ats_ptr_type, tmp60) ;
ATSlocal (ats_ptr_type, tmp61) ;
ATSlocal (ats_ptr_type, tmp62) ;
// ATSlocal_void (tmp63) ;
// ATSlocal_void (tmp64) ;
// ATSlocal_void (tmp65) ;
// ATSlocal_void (tmp66) ;
// ATSlocal_void (tmp67) ;
// ATSlocal_void (tmp68) ;

__ats_lab__2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_parsing_2esats__parse_from_givename_toplevel2:
tmp60 = _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_filename_2esats__filenameopt_make_local (arg1) ;
do {
/* branch: __ats_lab_2 */
__ats_lab_2_0:
if (tmp60 == (ats_sum_ptr_type)0) { goto __ats_lab_3_0 ; }
__ats_lab_2_1:
tmp61 = ats_caselptrlab_mac(anairiats_sum_0, tmp60, atslab_0) ;
ATS_FREE(tmp60) ;
ats_ptrget_mac(ats_ptr_type, arg2) = tmp61 ;
tmp62 = _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_parsing_2esats__parse_from_filename_toplevel (arg0, tmp61) ;
/* tmp63 = */ _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_filename_2esats__the_filenamelst_ppush (tmp61) ;
tmp59 = tmp62 ;
break ;

/* branch: __ats_lab_3 */
__ats_lab_3_0:
// if (tmp60 != (ats_sum_ptr_type)0) { ats_deadcode_failure_handle () ; }
__ats_lab_3_1:
/* tmp64 = */ atspre_prerr_string (ATSstrcst("patsopt: error(0)")) ;
/* tmp65 = */ atspre_prerr_string (ATSstrcst(": the given file [")) ;
/* tmp66 = */ atspre_prerr_string (arg1) ;
/* tmp67 = */ atspre_prerr_string (ATSstrcst("] cannot be accessed.")) ;
/* tmp68 = */ atspre_prerr_newline () ;
ats_ptrget_mac(ats_ptr_type, arg2) = _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_filename_2esats__filename_dummy ;
tmp59 = (ats_sum_ptr_type)0 ;
break ;
} while (0) ;
return (tmp59) ;
} /* end of [_2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_parsing_2esats__parse_from_givename_toplevel2] */

/*
// /home/hwxi/Research/ATS-Postiats/src/pats_parsing.dats: 6308(line=293, offs=1) -- 6801(line=322, offs=2)
*/
ATSstaticdec()
ats_ptr_type
auxlst_11 (ats_int_type arg0, ats_ptr_type arg1, ats_ref_type arg2) {
/* local vardec */
ATSlocal (ats_ptr_type, tmp70) ;
ATSlocal (ats_ptr_type, tmp71) ;
ATSlocal (ats_ptr_type, tmp72) ;
ATSlocal (ats_ptr_type, tmp73) ;
ATSlocal (ats_ptr_type, tmp74) ;
ATSlocal (ats_ptr_type, tmp75) ;

__ats_lab_auxlst_11:
do {
/* branch: __ats_lab_4 */
__ats_lab_4_0:
if (arg1 != (ats_sum_ptr_type)0) { goto __ats_lab_5_0 ; }
__ats_lab_4_1:
tmp70 = (ats_sum_ptr_type)0 ;
break ;

/* branch: __ats_lab_5 */
__ats_lab_5_0:
// if (arg1 == (ats_sum_ptr_type)0) { ats_deadcode_failure_handle () ; }
__ats_lab_5_1:
tmp71 = ats_caselptrlab_mac(anairiats_sum_2, arg1, atslab_0) ;
tmp72 = ats_caselptrlab_mac(anairiats_sum_2, arg1, atslab_1) ;
tmp73 = _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_parsing_2esats__parse_from_givename_toplevel2 (arg0, tmp71, arg2) ;
tmp74 = _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_syntax_2esats__d0ecl_toplocal (ats_ptrget_mac(ats_ptr_type, arg2), tmp73) ;
tmp75 = auxlst_11 (arg0, tmp72, arg2) ;
tmp70 = ATS_MALLOC(sizeof(anairiats_sum_2)) ;
ats_selptrset_mac(anairiats_sum_2, tmp70, atslab_0, tmp74) ;
ats_selptrset_mac(anairiats_sum_2, tmp70, atslab_1, tmp75) ;
break ;
} while (0) ;
return (tmp70) ;
} /* end of [auxlst_11] */

/*
// /home/hwxi/Research/ATS-Postiats/src/pats_parsing.dats: 6266(line=288, offs=1) -- 7247(line=345, offs=4)
*/
ATSglobaldec()
ats_ptr_type
_2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_parsing_2esats__parse_from_givenames_toplocal2 (ats_int_type arg0, ats_ptr_type arg1, ats_ref_type arg2) {
/* local vardec */
ATSlocal (ats_ptr_type, tmp69) ;
ATSlocal (ats_ptr_type, tmp76) ;
ATSlocal (ats_ptr_type, tmp77) ;
ATSlocal (ats_ptr_type, tmp78) ;
ATSlocal (ats_ptr_type, tmp79) ;
ATSlocal (ats_ptr_type, tmp80) ;

__ats_lab__2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_parsing_2esats__parse_from_givenames_toplocal2:
do {
/* branch: __ats_lab_6 */
__ats_lab_6_0:
if (arg1 == (ats_sum_ptr_type)0) { goto __ats_lab_7_0 ; }
__ats_lab_6_1:
tmp76 = ats_caselptrlab_mac(anairiats_sum_2, arg1, atslab_0) ;
tmp77 = ats_caselptrlab_mac(anairiats_sum_2, arg1, atslab_1) ;
tmp78 = _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_parsing_2esats__parse_from_givename_toplevel2 (arg0, tmp76, arg2) ;
tmp79 = _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_syntax_2esats__d0ecl_list (ats_ptrget_mac(ats_ptr_type, arg2), tmp78) ;
tmp80 = auxlst_11 (arg0, tmp77, arg2) ;
tmp69 = ATS_MALLOC(sizeof(anairiats_sum_2)) ;
ats_selptrset_mac(anairiats_sum_2, tmp69, atslab_0, tmp79) ;
ats_selptrset_mac(anairiats_sum_2, tmp69, atslab_1, tmp80) ;
break ;

/* branch: __ats_lab_7 */
__ats_lab_7_0:
// if (arg1 != (ats_sum_ptr_type)0) { ats_deadcode_failure_handle () ; }
__ats_lab_7_1:
ats_ptrget_mac(ats_ptr_type, arg2) = _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_filename_2esats__filename_dummy ;
tmp69 = (ats_sum_ptr_type)0 ;
break ;
} while (0) ;
return (tmp69) ;
} /* end of [_2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_parsing_2esats__parse_from_givenames_toplocal2] */

/* static load function */

extern ats_void_type ATS_2d0_2e2_2e12_2libc_2SATS_2stdio_2esats__staload (void) ;
extern ats_void_type _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_error_2esats__staload (void) ;
extern ats_void_type _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_filename_2esats__staload (void) ;
extern ats_void_type _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_symbol_2esats__staload (void) ;
extern ats_void_type _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_lexing_2esats__staload (void) ;
extern ats_void_type _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_tokbuf_2esats__staload (void) ;
extern ats_void_type _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_syntax_2esats__staload (void) ;
extern ats_void_type _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_parsing_2esats__staload (void) ;

ats_void_type
_2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_parsing_2edats__staload () {
static int _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_parsing_2edats__staload_flag = 0 ;
if (_2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_parsing_2edats__staload_flag) return ;
_2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_parsing_2edats__staload_flag = 1 ;

ATS_2d0_2e2_2e12_2libc_2SATS_2stdio_2esats__staload () ;
_2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_error_2esats__staload () ;
_2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_filename_2esats__staload () ;
_2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_symbol_2esats__staload () ;
_2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_lexing_2esats__staload () ;
_2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_tokbuf_2esats__staload () ;
_2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_syntax_2esats__staload () ;
_2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_parsing_2esats__staload () ;

return ;
} /* staload function */

/* dynamic load function */

// dynload flag declaration
extern ats_int_type _2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_parsing_2edats__dynload_flag ;

ats_void_type
_2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_parsing_2edats__dynload () {
_2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_parsing_2edats__dynload_flag = 1 ;
_2home_2hwxi_2Research_2ATS_2dPostiats_2src_2pats_parsing_2edats__staload () ;

#ifdef _ATS_PROOFCHECK
ATS_2d0_2e2_2e12_2prelude_2basics_dyn_2esats__file_mode_lte_r_r_prfck () ;
#endif /* _ATS_PROOFCHECK */

/* marking static variables for GC */

/* marking external values for GC */

/* code for dynamic loading */
return ;
} /* end of [dynload function] */

/* external codes at mid */
/* external codes at bot */

/* ****** ****** */

/* end of [pats_parsing_dats.c] */
