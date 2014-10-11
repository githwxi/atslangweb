(*
** For writing ATS code
** that translates into JavaScript
*)

(* ****** ****** *)

#define ATS_DYNLOADFLAG 0

(* ****** ****** *)
//
// HX-2014-08:
// prefix for external names
//
#define
ATS_EXTERN_PREFIX "ats2jspre_"
#define
ATS_STATIC_PREFIX "_ats2jspre_intrange_"
//
(* ****** ****** *)
//
#include
"share/atspre_define.hats"
//
(* ****** ****** *)
//
staload
  "./../basics_js.sats"
//
staload
  "./../SATS/integer.sats"
//
staload "./../SATS/list.sats"
//
(* ****** ****** *)
//
staload "./../SATS/intrange.sats"
//
(* ****** ****** *)
//
#include "{$LIBATSCC}/DATS/intrange.dats"
//
(* ****** ****** *)

(* end of [intrange.dats] *)
