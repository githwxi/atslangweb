(*
** For writing ATS code
** that translates into Javascript
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
ATS_STATIC_PREFIX "_ats2jspre_matrixref_"
//
(* ****** ****** *)
//
#include
"share/atspre_define.hats"
//
(* ****** ****** *)
//
staload
UN = "prelude/SATS/unsafe.sats"
//
(* ****** ****** *)
//
staload "./../basics_js.sats"
//
staload "./../SATS/integer.sats"
//
staload "./../SATS/JSarray.sats"
//
(* ****** ****** *)
//
staload "./../SATS/intrange.sats"
//
(* ****** ****** *)
//
staload "./../SATS/matrixref.sats"
staload "./../SATS/gmatrixref.sats"
//
(* ****** ****** *)
//
#include "{$LIBATSCC}/DATS/gmatrixref.dats"
//
(* ****** ****** *)

(* end of [gmatrixref.dats] *)
