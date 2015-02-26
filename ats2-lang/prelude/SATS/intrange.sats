(***********************************************************************)
(*                                                                     *)
(*                         Applied Type System                         *)
(*                                                                     *)
(***********************************************************************)

(*
** ATS/Postiats - Unleashing the Potential of Types!
** Copyright (C) 2010-2013 Hongwei Xi, ATS Trustful Software, Inc.
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
** $PATSHOME/prelude/SATS/CODEGEN/intrange.atxt
** Time of generation: Sun Jan 11 02:59:05 2015
*)

(* ****** ****** *)

(* Author: Hongwei Xi *)
(* Authoremail: hwxi AT cs DOT bu DOT edu *)
(* Start time: June, 2012 *)

(* ****** ****** *)
//
// HX-2013-04:
// intrange (l, r) is for integers i satisfying l <= i < r
//
(* ****** ****** *)

fun{env:vt0p}
intrange_foreach$cont (i: int, env: &env): bool
fun{env:vt0p}
intrange_foreach$fwork (i: int, env: &(env) >> _): void

fun{}
intrange_foreach (l: int, r: int): int
fun{env:vt0p}
intrange_foreach_env (l: int, r: int, env: &(env) >> _): int

(* ****** ****** *)

fun{env:vt0p}
intrange_rforeach$cont (i: int, env: &env): bool
fun{env:vt0p}
intrange_rforeach$fwork (i: int, env: &(env) >> _): void

fun{}
intrange_rforeach (l: int, r: int): int
fun{env:vt0p}
intrange_rforeach_env (l: int, r: int, env: &(env) >> _): int

(* ****** ****** *)

(* end of [intrange.sats] *)
