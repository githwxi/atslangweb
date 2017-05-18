(*
** For writing ATS code
** that translates into Python
*)

(* ****** ****** *)

#define ATS_DYNLOADFLAG 0

(* ****** ****** *)
//
// HX-2014-11:
// prefix for external names
//
#define
ATS_EXTERN_PREFIX "ats2pypre_"
#define
ATS_STATIC_PREFIX "_ats2pypre_stream_vt_"
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
staload "./../basics_py.sats"
//
(* ****** ****** *)
//
staload "./../SATS/integer.sats"
//
(* ****** ****** *)
//
staload "./../SATS/print.sats"
//
(* ****** ****** *)

staload "./../SATS/stream_vt.sats"

(* ****** ****** *)
//
#include "{$LIBATSCC}/DATS/stream_vt.dats"
//
(* ****** ****** *)

(* end of [stream_vt.dats] *)
