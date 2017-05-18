(*
** For writing ATS code
** that translates into Javascript
*)

(* ****** ****** *)
//
#define
ATS_DYNLOADFLAG 0
//
(* ****** ****** *)
//
// HX-2014-08:
// prefix for external names
//
#define
ATS_EXTERN_PREFIX "ats2jspre_"
#define
ATS_STATIC_PREFIX "_ats2jspre_arrayref_"
//
(* ****** ****** *)
//
(*
#include
"share/atspre_define.hats"
*)
//
#define
LIBATSCC_targetloc
"$PATSCONTRIB/contrib/libatscc-0.3.2"
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
staload "./../SATS/arrayref.sats"
//
(* ****** ****** *)
//
#include "{$LIBATSCC}/DATS/arrayref.dats"
//
(* ****** ****** *)
//
(*
assume
arrayref_vt0ype_type(a, n) = JSarray(a)
*)
//
(* ****** ****** *)

%{^
//
function
ats2jspre_arrayref_make_elt
  (n, x)
{
  var A, i;
  A = new Array(n);
  for (i = 0; i < n; i += 1) A[i] = x;
  return A;
}
//
%} // end of [%{^]

(* ****** ****** *)

implement
arrayref_get_at
  {a}(A, i) = let
  val A = $UN.cast{JSarray(a)}(A) in JSarray_get_at(A, i)
end // end of [arrayref_get_at]

(* ****** ****** *)

implement
arrayref_set_at
  {a}(A, i, x) = let
  val A = $UN.cast{JSarray(a)}(A) in JSarray_set_at(A, i, x)
end // end of [arrayref_set_at]

(* ****** ****** *)
//
// Array-with-size
//
(* ****** ****** *)
//
implement
arrszref_make_arrayref
  {a}(A, n) = $UN.cast{arrszref(a)}(A)
//
(* ****** ****** *)
//
implement
arrszref_size{a}(A) = let
  val A = $UN.cast{JSarray(a)}(A)
in
  $UN.cast{intGte(0)}(JSarray_length(A))
end // end of [arrszref_size]
//
(* ****** ****** *)
//
implement
arrszref_get_at{a}(A, i) = let
  val A = $UN.cast{JSarray(a)}(A) in JSarray_get_at(A, i)
end // end of [arrszref_get_at]
//
implement
arrszref_set_at{a}(A, i, x) = let
  val A = $UN.cast{JSarray(a)}(A) in JSarray_set_at(A, i, x)
end // end of [arrszref_set_at]
//
(* ****** ****** *)

(* end of [arrayref.dats] *)
