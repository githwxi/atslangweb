(* ****** ****** *)
(*
** Testing code for [libjson-c]
*)
(* ****** ****** *)

(*
** Author: Hongwei Xi
** Authoremail: gmhwxi AT gmail DOT edu
** Time: May, 2013
*)

(* ****** ****** *)
//
#include
"share/atspre_staload.hats"
//
(* ****** ****** *)
//
#staload "./../SATS/json.sats"
//
(* ****** ****** *)

implement
main0 () =
{
//
val () = println!("json-c version str = ", json_c_version())
val () = println!("json-c version num = ", json_c_version_num())
//
} // end of [main0]

(* ****** ****** *)

(* end of [test00.dats] *)
