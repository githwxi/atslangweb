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
ATS_STATIC_PREFIX "_ats2jspre_JSmath_"
//
(* ****** ****** *)
//
#include
"share/atspre_define.hats"
//
(* ****** ****** *)
//
staload UN =
"prelude/SATS/unsafe.sats"
//
(* ****** ****** *)
//
staload "./../basics_js.sats"
staload "./../SATS/float.sats"
staload "./../SATS/integer.sats"
//
(* ****** ****** *)
//
staload "./../SATS/JSmath.sats"
//
(* ****** ****** *)

implement
{}(*tmp*)
JSmath_randint
  {n}(n) = let
//
val r =
double2int(n*JSmath_random())
//
val r = $UN.cast{intGte(0)}(r)
//
in
  if r < n then r else JSmath_randint(n)
end // end of [JSmath_randint]

(* ****** ****** *)

(* end of [intrange.dats] *)
