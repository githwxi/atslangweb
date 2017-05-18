(***********************************************************************)
(*                                                                     *)
(*                         Applied Type System                         *)
(*                                                                     *)
(***********************************************************************)

(*
** ATS/Postiats - Unleashing the Potential of Types!
** Copyright (C) 2010-2015 Hongwei Xi, ATS Trustful Software, Inc.
** All rights reserved
**
** ATS is free software;  you can  redistribute it and/or modify it under
** the terms of  the GNU GENERAL PUBLIC LICENSE (GPL) as published by the
** Free Software Foundation; either version 3, or (at  your  option)  any
** later version.
**
** ATS is distributed in the hope that it will be useful, but WITHOUT ANY
** WARRANTY; without  even  the  implied  warranty  of MERCHANTABILITY or
** FITNESS FOR A PARTICULAR PURPOSE.  See the  GNU General Public License
** for more details.
**
** You  should  have  received  a  copy of the GNU General Public License
** along  with  ATS;  see the  file COPYING.  If not, please write to the
** Free Software Foundation,  51 Franklin Street, Fifth Floor, Boston, MA
** 02110-1301, USA.
*)

(* ****** ****** *)

(*
** Source:
** $PATSHOME/prelude/SATS/CODEGEN/fcontainer.atxt
** Time of generation: Sun Nov 20 21:18:22 2016
*)

(* ****** ****** *)

(* Author: Hongwei Xi *)
(* Authoremail: hwxi AT cs DOT bu DOT edu *)
(* Start time: February, 2012 *)

(* ****** ****** *)

(*
**
** HX-2012-02:
**
** The basic idea is to implement "everything" else in terms of
** "foreach" so that they become available for a container-type
** whenever "foreach" is made available for that type,
**
*)

(* ****** ****** *)

sortdef t0p = t@ype and vt0p = viewt@ype

(* ****** ****** *)

fun{x:t0p} foreach$fwork (x: x): void
fun{xs:t0p}{x:t0p} foreach (xs: xs): void

fun{
xs:t0p}{x:t0p
} foreach_funenv
  {v:view}{vt:viewtype}{fe:eff} (
  pfv: !v | xs: xs, f: (!v | x, !vt) -<fun,fe> void, env: !vt
) :<fe> void // end of [foreach_funenv]

fun{
xs:t0p}{x:t0p
} foreach_fun {fe:eff}
  (xs: xs, f: (x) -<fun,fe> void):<fe> void
// end of [foreach_fun]

fun{
xs:t0p}{x:t0p
} foreach_clo {fe:eff}
  (xs: xs, f: &(x) -<clo,fe> void):<fe> void
// end of [foreach_clo]
fun{
xs:t0p}{x:t0p
} foreach_vclo
  {v:view}{fe:eff}
  (pfv: !v | xs: xs, f: &(!v | x) -<clo,fe> void):<fe> void
// end of [foreach_vclo]

fun{
xs:t0p}{x:t0p
} foreach_cloptr {fe:eff}
  (xs: xs, f: !(x) -<cloptr,fe> void):<fe> void
fun{
xs:t0p}{x:t0p
} foreach_vcloptr
  {v:view}{fe:eff}
  (pfv: !v | xs: xs, f: !(!v | x) -<cloptr,fe> void):<fe> void
// end of [foreach_vcloptr]

fun{
xs:t0p}{x:t0p
} foreach_cloref {fe:eff}
  (xs: xs, f: (x) -<cloref,fe> void):<fe> void
// end of [foreach_cloref]

(* ****** ****** *)

fun{x:t0p}
iforeach$fwork (i: size_t, x: x): void
fun{xs:t0p}{x:t0p} iforeach (xs: xs): void

fun{
xs:t0p}{x:t0p
} iforeach_funenv
  {v:view}{vt:viewtype}{fe:eff} (
  pfv: !v | xs: xs, f: (!v | int, x, !vt) -<fun,fe> void, env: !vt
) :<fe> int // end of [iforeach_funenv]

fun{
xs:t0p}{x:t0p
} iforeach_clo {fe:eff}
  (xs: xs, f: &(int, x) -<clo,fe> void):<fe> int
// end of [iforeach_clo]
fun{
xs:t0p}{x:t0p
} iforeach_vclo
  {v:view}{fe:eff}
  (pfv: !v | xs: xs, f: &(!v | int, x) -<clo,fe> void):<fe> int
// end of [iforeach_vclo]

fun{
xs:t0p}{x:t0p
} iforeach_cloptr {fe:eff}
  (xs: xs, f: !(int, x) -<cloptr,fe> void):<fe> int
fun{
xs:t0p}{x:t0p
} iforeach_vcloptr
  {v:view}{fe:eff}
  (pfv: !v | xs: xs, f: !(!v | int, x) -<cloptr,fe> void):<fe> int
// end of [iforeach_vcloptr]

fun{
xs:t0p}{x:t0p
} iforeach_cloref {fe:eff}
  (xs: xs, f: (int, x) -<cloref,fe> void):<fe> int
// end of [iforeach_cloref]

(* ****** ****** *)

fun{
x:t0p}{res:vt0p
} foldleft$fwork
  (res: res, x: x): res
fun{
xs:t0p}{x:t0p}{res:vt0p
} foldleft (xs: xs, ini: res): res

fun{
xs:t0p}{x:t0p}{res:vt0p
} foldleft_funenv
  {v:view}{vt:viewtype}{fe:eff} (
  pfv: !v
| xs: xs, ini: res
, f: (!v | res, x, !vt) -<fun,fe> res, env: !vt
) :<fe> res // end of [foldleft_funenv]

fun{
xs:t0p}{x:t0p}{res:vt0p
} foldleft_clo {fe:eff} (
  xs: xs, ini: res, f: &(res, x) -<clo,fe> res
) :<fe> res // end of [foldleft_clo]
fun{
xs:t0p}{x:t0p}{res:vt0p
} foldleft_vclo {v:view}{fe:eff} (
  pfv: !v
| xs: xs, ini: res, f: &(!v | res, x) -<clo,fe> res
) :<fe> res // end of [foldleft_vclo]

fun{
xs:t0p}{x:t0p}{res:vt0p
} foldleft_cloref {fe:eff} (
  xs: xs, ini: res, f: &(res, x) -<cloref,fe> res
) :<fe> res // end of [foldleft_cloref]

(* ****** ****** *)

fun{
x:t0p}{res:vt0p
} foldright$fwork
  (x: x, res: res): res
fun{
xs:t0p}{x:t0p}{res:vt0p
} foldright (xs: xs, snk: res): res

fun{
xs:t0p}{x:t0p}{res:vt0p
} foldright_funenv
  {v:view}{vt:viewtype}{fe:eff} (
  pfv: !v
| xs: xs, f: (!v | x, res, !vt) -<fun,fe> res, snk: res, env: !vt
) :<fe> res // end of [foldright_funenv]

fun{
xs:t0p}{x:t0p}{res:vt0p
} foldright_clo {fe:eff} (
  xs: xs, f: &(x, res) -<clo,fe> res, snk: res
) :<fe> res // end of [foldright_clo]
fun{
xs:t0p}{x:t0p}{res:vt0p
} foldright_vclo {v:view}{fe:eff} (
  pfv: !v
| xs: xs, f: &(!v | x, res) -<clo,fe> res, snk: res
) :<fe> res // end of [foldright_vclo]

fun{
xs:t0p}{x:t0p}{res:vt0p
} foldright_cloref {fe:eff} (
  xs: xs, f: (x, res) -<cloref,fe> res, snk: res
) :<fe> res // end of [foldright_cloref]

(* ****** ****** *)

fun{x:t0p} exists$pred (x: x): bool
fun{xs:t0p}{x:t0p} exists (xs: xs): bool

fun{
xs:t0p}{x:t0p
} exists_funenv
  {v:view}{vt:viewtype}{pe:eff} (
  pf: !v | xs: xs, p: (!v | x, !vt) -<fun,pe> bool, env: !vt
) :<pe> bool // end of [exists_funenv]

fun{
xs:t0p}{x:t0p
} exists_clo {fe:eff}
  (xs: xs, f: &(x) -<clo,fe> void):<fe> bool
// end of [exists_clo]
fun{
xs:t0p}{x:t0p
} exists_vclo
  {v:view}{fe:eff}
  (pfv: !v | xs: xs, f: &(!v | x) -<clo,fe> void):<fe> bool
// end of [exists_vclo]

(* ****** ****** *)

fun{x:t0p} forall$pred (x: x): bool
fun{xs:t0p}{x:t0p} forall (xs: xs): bool

fun{
xs:t0p}{x:t0p
} forall_funenv
  {v:view}{vt:viewtype}{pe:eff} (
  pf: !v | xs: xs, p: (!v | x, !vt) -<fun,pe> bool, env: !vt
) :<pe> bool // end of [forall_funenv]

(* ****** ****** *)

fun{
xs:t0p}{x:t0p
} ismember_fun {fe:eff}
  (xs: xs, x0: x, eq: (x, x) -<fun,fe> void):<fe> bool
// end of [ismember_fun]

(* ****** ****** *)

fun{
xs:t0p}{x:t0p
} listize (xs: xs):<> List0_vt (x)
fun{
xs:t0p}{x:t0p}{y:vt0p
} listize_funenv
  {v:view}{vt:viewtype}{fe:eff} (
  pfv: !v | xs: xs, f: (!v | x, !vt) -<fun,fe> y, env: !vt
) :<fe> List0_vt (y)

(* ****** ****** *)

fun{
xs:t0p}{x:t0p
} rlistize (xs: xs):<> List0_vt (x)
fun{
xs:t0p}{x:t0p}{y:vt0p
} rlistize_funenv
  {v:view}{vt:viewtype}{fe:eff} (
  pfv: !v | xs: xs, f: (!v | x, !vt) -<fun,fe> y, env: !vt
) :<fe> List0_vt (y)

(* ****** ****** *)

fun{
xs:t0p}{x:t0p
} streamize (xs: xs):<> stream (x)
fun{
xs:t0p}{x:t0p
} streamize_vt (xs: xs):<> stream_vt (x)

(* ****** ****** *)

(* end of [fcontainer.sats] *)
