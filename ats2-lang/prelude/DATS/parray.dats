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
** $PATSHOME/prelude/DATS/CODEGEN/parray.atxt
** Time of generation: Tue Jun 24 16:00:03 2014
*)

(* ****** ****** *)

(* Author: Hongwei Xi *)
(* Authoremail: hwxi AT cs DOT bu DOT edu *)
(* Start time: April, 2012 *)

(* ****** ****** *)

staload UN = "prelude/SATS/unsafe.sats"

(* ****** ****** *)

implement{a}
parray_is_empty
  {l}{n} (pf | p) = let
//
prval () =
  lemma_parray_v_params (pf)
val x = $UN.ptr_get<ptr> (p)
val [lx:addr] x = ptr1_of_ptr0 (x)
prval () = __assert () where {
  extern praxi __assert (): [(lx <= null && n == 0) || (lx > null && n > 0)] void
} (* end of [prval] *)
//
in
  lte_ptr1_ptr1 (x, null)
end // end of [parray_is_empty]

implement{a}
parray_isnot_empty
  {l}{n} (pf | p) = let
//
prval () =
  lemma_parray_v_params (pf)
val x = $UN.ptr_get<ptr> (p)
val [lx:addr] x = ptr1_of_ptr0 (x)
prval () = __assert () where {
  extern praxi __assert (): [(lx <= null && n == 0) || (lx > null && n > 0)] void
} (* end of [prval] *)
//
in
  gt_ptr1_ptr1 (x, null)
end // end of [parray_isnot_empty]

(* ****** ****** *)

implement{a}
parray_size (pf | p) = let
  prval () = lemma_parray_v_params (pf)
  fun loop
    {l:addr}{i,j:nat} .<i>. (
    pf: !parray_v (a, l, i) | p: ptr l, j: size_t j
  ) :<> size_t (i+j) = let
    val isnemp = parray_isnot_empty<a> (pf | p)
  in
    if isnemp then let
      prval parray_v_cons (pf1, pf2) = pf
      val n = loop (pf2 | p+sizeof<a>, j+1)
      prval () = pf := parray_v_cons (pf1, pf2)
    in
      n
    end else j
  end (* end of [loop] *)
in
  loop (pf | p, 0)
end // end of [parray_size]

(* ****** ****** *)

(* end of [parray.dats] *)
