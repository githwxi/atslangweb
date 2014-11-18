(*
** For writing ATS code
** that translates into Perl
*)

(* ****** ****** *)
//
// HX-2014-11:
// prefix for external names
//
#define
ATS_EXTERN_PREFIX "ats2plpre_"
//
(* ****** ****** *)
//
#include
"share/atspre_define.hats"
//
(* ****** ****** *)

staload "./../basics_pl.sats"

(* ****** ****** *)
//
#include "{$LIBATSCC}/SATS/list.sats"
//
(* ****** ****** *)
//
fun{a:t0p}
fprint_list
  (PLfilr, List(INV(a))): void = "mac#%"
//
fun{}
fprint_list$sep (out: PLfilr): void = "mac#%"
//
fun{a:t0p}
fprint_list_sep
  (PLfilr, List(INV(a)), sep: string): void = "mac#%"
//
overload fprint with fprint_list of 100
//
(* ****** ****** *)

(* end of [list.sats] *)
