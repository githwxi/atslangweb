(*
** Project Euler: P2
** See https://projecteuler.net
*)
(* ****** ****** *)
//
// Author: Hongwei Xi
// Authoremail: gmhwxiATgmailDOTcom
// Start time: January 13, 2015
//
(* ****** ****** *)
//
#include "share/atspre_define.hats"
//
(* ****** ****** *)
//
staload
"{$LIBATSHWXI}/PEULER/SATS/peuler.sats"
//
(* ****** ****** *)
//
#define LIMIT 4000000
//
(* ****** ****** *)

absprop FIB (n: int, r: int) // fib(n) = r

(* ****** ****** *)

(*
fun fib{n:nat}(n:int(n)): [r:int] (FIB(n, r) | int(r))
*)

(* ****** ****** *)
//
// MYSUM (n, t) =
// t = sum of all the even fibs <= LIMIT starting from the nth one
//
dataprop MYSUM
(
  int(*n*), int(*t*)
) =
  | {n:nat}{r:int | r > LIMIT}
    MYSUMrule0 (n, 0) of FIB (n, r)
  | {n:nat}
    {r:nat | r <= LIMIT; r mod 2 > 0}
    {t1:int}
    MYSUMrule1 (n, t1) of (FIB (n, r), MYSUM (n+1, t1))
  | {n:nat}
    {r:nat | r <= LIMIT; r mod 2 == 0}
    {t1:int}
    MYSUMrule2 (n, r + t1) of (FIB (n, r), MYSUM (n+1, t1))
// end of [MYSUM]

(* ****** ****** *)
//
// HX-2015-01-13:
// please implement this one:
//
fun mysum (): [t:int] (MYSUM (1, t) | int t)
//
(* ****** ****** *)

(* end of [P2.sats] *)
