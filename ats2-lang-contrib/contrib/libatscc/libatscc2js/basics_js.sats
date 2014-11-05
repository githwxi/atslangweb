(*
** For writing ATS code
** that translates into JavaScript
*)

(* ****** ****** *)
//
// HX-2014-08:
// prefix for external names
//
#define
ATS_EXTERN_PREFIX "ats2jspre_"
//
(* ****** ****** *)
//
#include
"share/atspre_define.hats"
//
#include "{$LIBATSCC}/basics.sats"
//
(* ****** ****** *)
//
(*
abstype JSnumber
abstype JSboolean
abstype JSstring
*)
//
abstype JSobj // generic
//
abstype JSdate // new Date()
//
abstype JSarray(a:t@ype)
//
abstype JSregexp // new RegExp()
//
(* ****** ****** *)
//
fun alert(msg: string): void = "mac#%"
//
(* ****** ****** *)
//
fun confirm(msg: string): bool = "mac#%"
//
(* ****** ****** *)
//
fun
prompt_none
(
  prompt: string
) : string = "mac#%"
fun
prompt_some
(
  prompt: string, default: string
) : string = "mac#%"
//
symintr prompt
overload prompt with prompt_none
overload prompt with prompt_some
//
(* ****** ****** *)

fun typeof{a:t@ype}(a): string = "mac#%"

(* ****** ****** *)
//
// HX-2014-09:
// it returns obj.toString()
//
fun toString{a:t@ype}(obj: a): string = "mac#%"
//
(* ****** ****** *)
//
fun
lazy2cloref
  {a:t0p}(lazy(a)): ((*void*)) -<cloref1> (a) = "mac#%"
//
(* ****** ****** *)
//
fun
assert_errmsg_bool0
  (x: bool, msg: string): void = "mac#%"
fun
assert_errmsg_bool1
  {b:bool} (x: bool b, msg: string): [b] void = "mac#%"
//
overload assert_errmsg with assert_errmsg_bool0 of 100
overload assert_errmsg with assert_errmsg_bool1 of 110
//
(* ****** ****** *)
//
macdef assertloc (x) = assert_errmsg (,(x), $mylocation)
//
(* ****** ****** *)
//
symintr logats
//
fun{}
logats0 (): void
fun{a1:t0p}
logats1 (INV(a1)): void
fun{a1,a2:t0p}
logats2 (INV(a1), INV(a2)): void
fun{a1,a2,a3:t0p}
logats3 (INV(a1), INV(a2), INV(a3)): void
fun{a1,a2,a3,a4:t0p}
logats4 (INV(a1), INV(a2), INV(a3), INV(a4)): void
fun{a1,a2,a3,a4,a5:t0p}
logats5 (INV(a1), INV(a2), INV(a3), INV(a4), INV(a5)): void
fun{a1,a2,a3,a4,a5,a6:t0p}
logats6 (INV(a1), INV(a2), INV(a3), INV(a4), INV(a5), INV(a6)): void
fun{a1,a2,a3,a4,a5,a6,a7:t0p}
logats7 (INV(a1), INV(a2), INV(a3), INV(a4), INV(a5), INV(a6), INV(a7)): void
fun{a1,a2,a3,a4,a5,a6,a7,a8:t0p}
logats8 (INV(a1), INV(a2), INV(a3), INV(a4), INV(a5), INV(a6), INV(a7), INV(a8)): void
fun{a1,a2,a3,a4,a5,a6,a7,a8,a9:t0p}
logats9 (INV(a1), INV(a2), INV(a3), INV(a4), INV(a5), INV(a6), INV(a7), INV(a8), INV(a9)): void
//
overload logats with logats0
overload logats with logats1
overload logats with logats2
overload logats with logats3
overload logats with logats4
overload logats with logats5
overload logats with logats6
overload logats with logats7
overload logats with logats8
overload logats with logats9
//
(* ****** ****** *)

fun{a:t0p} logats_tmp (x: a): void

(* ****** ****** *)

(* end of [basics_js.sats] *)
