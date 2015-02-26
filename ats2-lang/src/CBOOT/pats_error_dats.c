/*
**
** The C code is generated by ATS/Anairiats
** The compilation time is: 2015-2-22: 16h:35m
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
/* external codes at top */
/* type definitions */
/* external typedefs */
/* external dynamic constructor declarations */
ATSextern_val(ats_exn_type, _2home_2hwxi_2research_2Postiats_2git_2src_2pats_error_2esats__FatalErrorExn) ;
ATSextern_val(ats_exn_type, _2home_2hwxi_2research_2Postiats_2git_2src_2pats_error_2esats__FatalErrorExn_interr) ;

/* external dynamic constant declarations */
ATSextern_fun(ats_int_type, pats_error_segfault) () ;

/* external dynamic terminating constant declarations */
#ifdef _ATS_PROOFCHECK
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
// /home/hwxi/research/Postiats/git/src/pats_error.dats: 1549(line=49, offs=7) -- 1625(line=55, offs=4)
*/
ATSglobaldec()
ats_varet_type
_2home_2hwxi_2research_2Postiats_2git_2src_2pats_error_2esats__abort () {
/* local vardec */
// ATSlocal_void (tmp0) ;
ATSlocal (ats_ptr_type, tmp1) ;

__ats_lab__2home_2hwxi_2research_2Postiats_2git_2src_2pats_error_2esats__abort:
tmp1 = (ats_sum_ptr_type)(&_2home_2hwxi_2research_2Postiats_2git_2src_2pats_error_2esats__FatalErrorExn) ;
/* tmp0 = */ ats_raise_exn (tmp1) ;
return /* (tmp0) */ ;
} /* end of [_2home_2hwxi_2research_2Postiats_2git_2src_2pats_error_2esats__abort] */

/*
// /home/hwxi/research/Postiats/git/src/pats_error.dats: 1668(line=58, offs=14) -- 1751(line=64, offs=4)
*/
ATSglobaldec()
ats_varet_type
_2home_2hwxi_2research_2Postiats_2git_2src_2pats_error_2esats__abort_interr () {
/* local vardec */
// ATSlocal_void (tmp2) ;
ATSlocal (ats_ptr_type, tmp3) ;

__ats_lab__2home_2hwxi_2research_2Postiats_2git_2src_2pats_error_2esats__abort_interr:
tmp3 = (ats_sum_ptr_type)(&_2home_2hwxi_2research_2Postiats_2git_2src_2pats_error_2esats__FatalErrorExn_interr) ;
/* tmp2 = */ ats_raise_exn (tmp3) ;
return /* (tmp2) */ ;
} /* end of [_2home_2hwxi_2research_2Postiats_2git_2src_2pats_error_2esats__abort_interr] */

/* static load function */

extern ats_void_type _2home_2hwxi_2research_2Postiats_2git_2src_2pats_error_2esats__staload (void) ;

ats_void_type
_2home_2hwxi_2research_2Postiats_2git_2src_2pats_error_2edats__staload () {
static int _2home_2hwxi_2research_2Postiats_2git_2src_2pats_error_2edats__staload_flag = 0 ;
if (_2home_2hwxi_2research_2Postiats_2git_2src_2pats_error_2edats__staload_flag) return ;
_2home_2hwxi_2research_2Postiats_2git_2src_2pats_error_2edats__staload_flag = 1 ;

_2home_2hwxi_2research_2Postiats_2git_2src_2pats_error_2esats__staload () ;

return ;
} /* staload function */

/* dynamic load function */

// dynload flag declaration
extern ats_int_type _2home_2hwxi_2research_2Postiats_2git_2src_2pats_error_2edats__dynload_flag ;

ats_void_type
_2home_2hwxi_2research_2Postiats_2git_2src_2pats_error_2edats__dynload () {
_2home_2hwxi_2research_2Postiats_2git_2src_2pats_error_2edats__dynload_flag = 1 ;
_2home_2hwxi_2research_2Postiats_2git_2src_2pats_error_2edats__staload () ;

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

/* end of [pats_error_dats.c] */
