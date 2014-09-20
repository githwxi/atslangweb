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
** $PATSHOME/prelude/DATS/CODEGEN/gorder.atxt
** Time of generation: Tue Jun 24 15:59:53 2014
*)

(* ****** ****** *)

(* Author: Hongwei Xi *)
(* Authoremail: hwxi AT cs DOT bu DOT edu *)
(* Start time: March, 2013 *)

(* ****** ****** *)

implement{a}
glt_val (x, y) = gcompare_val<a> (x, y) < 0
implement{a}
glte_val (x, y) = gcompare_val<a> (x, y) <= 0
implement{a}
ggt_val (x, y) = gcompare_val<a> (x, y) > 0
implement{a}
ggte_val (x, y) = gcompare_val<a> (x, y) >= 0
implement{a}
geq_val (x, y) = gcompare_val<a> (x, y) = 0
implement{a}
gneq_val (x, y) = gcompare_val<a> (x, y) != 0

(* ****** ****** *)

implement{a}
glt_ref (x, y) = gcompare_ref<a> (x, y) < 0
implement{a}
glte_ref (x, y) = gcompare_ref<a> (x, y) <= 0
implement{a}
ggt_ref (x, y) = gcompare_ref<a> (x, y) > 0
implement{a}
ggte_ref (x, y) = gcompare_ref<a> (x, y) >= 0
implement{a}
geq_ref (x, y) = gcompare_ref<a> (x, y) = 0
implement{a}
gneq_ref (x, y) = gcompare_ref<a> (x, y) != 0

(* ****** ****** *)

implement(a:t0p)
gcompare_ref<a> (x, y) = gcompare_val<a> (x, y)

(* ****** ****** *)

implement{a}
gisltz_val (x) = glt_val (x, gnumber_int<a> (0))
implement{a}
gisltez_val (x) = glte_val (x, gnumber_int<a> (0))
implement{a}
gisgtz_val (x) = ggt_val (x, gnumber_int<a> (0))
implement{a}
gisgtez_val (x) = ggte_val (x, gnumber_int<a> (0))
implement{a}
giseqz_val (x) = geq_val (x, gnumber_int<a> (0))
implement{a}
gisneqz_val (x) = gneq_val (x, gnumber_int<a> (0))

(* ****** ****** *)

implement{a}
gabs_val (x) =
  if gisgtez_val (x) then x else gneg_val<a> (x)
// end of [gabs_val]

(* ****** ****** *)

implement{a}
gmax_val (x, y) = if ggte_val (x, y) then x else y
implement{a}
gmin_val (x, y) = if glte_val (x, y) then x else y

(* ****** ****** *)

#include "prelude/DATS/gorder_int.dats"
#include "prelude/DATS/gorder_uint.dats"
#include "prelude/DATS/gorder_bool.dats"
#include "prelude/DATS/gorder_char.dats"
#include "prelude/DATS/gorder_float.dats"
#include "prelude/DATS/gorder_string.dats"

(* ****** ****** *)

(* end of [gorder.dats] *)
