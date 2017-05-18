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
ATS_STATIC_PREFIX "_ats2jspre_string_"
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
UN =
"prelude/SATS/unsafe.sats"
//
(* ****** ****** *)
//
staload "./../basics_js.sats"
//
(* ****** ****** *)
//
staload "./../SATS/integer.sats"
//
(* ****** ****** *)

staload "./../SATS/string.sats"
staload "./../SATS/JSarray.sats"

(* ****** ****** *)

implement
strchr_code(c) = string_charCodeAt(c, 0)

(* ****** ****** *)

implement
string_fset_at
  {n}{i}
(
  str0, i0, c0
) = let
//
val n0 = string_length(str0)
val f0 = string_substring_beg_end(str0, 0, i0)
val r0 = string_substring_beg_end(str0, i0+1, n0)
//
in
  $UN.cast{string(n)}(string_concat_3(f0, c0, r0))
end // end of [string_fset_at]

(* ****** ****** *)

implement
streamize_string_code
  (str0) =
  auxmain(0) where
{
//
val
[n:int] str0 = g1ofg0(str0)
//
val len = string_length(str0)
//
fun
auxmain
{i:nat | i <= n}
(
  i: int(i)
) : stream_vt(int) = $ldelay
(
//
if i < len
  then
  stream_vt_cons
    (str0.charCodeAt(i), auxmain(i+1))
  // stream_vt_cons
  else stream_vt_nil((*void*))
//
) (* end of [auxmain] *)
//
} (* end of [streamize_string_code] *)

(* ****** ****** *)
//
implement
string_exists_cloref
  (str0, pred) =
  loop(0) where
{
//
val
[n:int]
str = g1ofg0(str0)
val
len = string_length(str)
//
fun
loop
{i:nat|i <= n}(i: int(i)): bool =
(
if i < len
  then (if pred(str[i]) then true else loop(i+1))
  else false
)
//
} (* end of [string_exists_cloref] *)
//
implement
string_exists_method
  (str0) =
(
  lam(pred) => string_exists_cloref(str0, pred)
) (* end of [string_exists_method] *)
//
(* ****** ****** *)
//
implement
string_forall_cloref
  (str0, pred) =
  loop(0) where
{
//
val
[n:int]
str = g1ofg0(str0)
val
len = string_length(str)
//
fun
loop
{i:nat|i <= n}(i: int(i)): bool =
(
if i < len
  then (if pred(str[i]) then loop(i+1) else false)
  else true
)
//
} (* end of [string_forall_cloref] *)
//
implement
string_forall_method
  (str0) =
(
  lam(pred) => string_forall_cloref(str0, pred)
) (* end of [string_forall_method] *)
//
(* ****** ****** *)
//
implement
string_foreach_cloref
  (str0, fwork) =
  loop(0) where
{
//
val
[n:int]
str = g1ofg0(str0)
val
len = string_length(str)
//
fun
loop
{i:nat|i <= n}(i: int(i)): void =
(
if i < len
  then (fwork(str[i]); loop(i+1)) else ()
)
//
} (* end of [string_foreach_cloref] *)
//
implement
string_foreach_method
  (str0) =
(
  lam(fwork) => string_foreach_cloref(str0, fwork)
) (* end of [string_foreach_method] *)
//
(* ****** ****** *)
//
implement
string_tabulate_cloref
  {n}
(
  len, fopr
) = // string_tabulate_cloref
$UN.cast{string(n)}
(
  JSarray_join_sep(JSarray_tabulate_cloref(len, fopr), "")
) (* end of [string_tabulate_cloref] *)
//
(* ****** ****** *)

(* end of [string.dats] *)
