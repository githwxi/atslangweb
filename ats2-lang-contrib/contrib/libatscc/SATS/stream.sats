(*
** libatscc-common
*)

(* ****** ****** *)

staload "./../basics.sats"

(* ****** ****** *)
//
fun
stream_nth_exn
  {a:t0p}
  (xs: stream(INV(a)), n: intGte(0)): a = "mac#%"
//
(* ****** ****** *)

overload [] with stream_nth_exn of 100

(* ****** ****** *)

fun
stream_filter_cloref
  {a:t0p}
  (xs: stream(INV(a)), pred: (a) -<cloref1> bool): stream (a)
// end of [stream_filter_cloref]

(* ****** ****** *)

(* end of [stream.sats] *)
