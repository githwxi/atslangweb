(*
** libatscc-common
*)

(* ****** ****** *)

(*
//
staload "./../SATS/list.sats"
//
staload UN = "prelude/SATS/unsafe.sats"
//
*)

(* ****** ****** *)

(*
implement
stream_nth_exn
  {a}(xs, n) = let
//
fun
loop
(
  xs: stream(a), n: intGte(0)
) : a =
(
case+ !xs of
| stream_cons
    (x, xs) =>
  (
    if n > 0 then loop (xs, pred(n)) else (x)
  )
| stream_nil () => $raise StreamSubscriptExn()
) (* end of [loop] *)
//
in
  loop (xs, n)
end // end of [stream_nth_exn]
*)

(* ****** ****** *)

implement
stream_filter_cloref
  {a}(xs, pred) = $delay
(
//
case+ !xs of
| stream_cons (x, xs) =>
  if pred(x)
    then
    stream_cons (
      x, stream_filter_cloref(xs, pred)
    ) (* end of [then] *)
    else !(stream_filter_cloref(xs, pred))
| stream_nil ((*void*)) => stream_nil ()
//
) (* end of [stream_filter_cloref] *)

(* ****** ****** *)

(* end of [stream.dats] *)
