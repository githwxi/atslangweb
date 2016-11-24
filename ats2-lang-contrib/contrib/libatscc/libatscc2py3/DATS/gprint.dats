(*
** For writing ATS code
** that translates into Python
*)

(* ****** ****** *)

#define ATS_DYNLOADFLAG 0

(* ****** ****** *)
//
// HX-2014-08:
// prefix for external names
//
#define
ATS_EXTERN_PREFIX "ats2pypre_"
#define
ATS_STATIC_PREFIX "_ats2pypre_gprint_"
//
(* ****** ****** *)
//
#include
"share/atspre_define.hats"
//
(* ****** ****** *)

staload "./../SATS/gprint.sats"

(* ****** ****** *)
//
#include "{$LIBATSCC}/DATS/gprint.dats"
//
(* ****** ****** *)
//
extern
fun
tostring
{a:t@ype}(x: a): string = "mac#%"
//
(* ****** ****** *)
//
implement
{a}(*tmp*)
gprint_val(x) = gprint_string(tostring(x))
//
(* ****** ****** *)
//
implement
{}(*tmp*)
gprint_int(x) = gprint_string(tostring(x))
//
(* ****** ****** *)
//
implement
{}(*tmp*)
gprint_bool(x) =
  gprint_string(if x then "true" else "false")
//
(* ****** ****** *)

implement
{}(*tmp*)
gprint_char(x) = gprint_string(tostring(x))

(* ****** ****** *)

implement
{}(*tmp*)
gprint_double(x) = gprint_string(tostring(x))

(* ****** ****** *)

(* end of [gprint.dats] *)
