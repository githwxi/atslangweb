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
** $PATSHOME/prelude/DATS/CODEGEN/intrange.atxt
** Time of generation: Tue Jun 24 15:59:52 2014
*)

(* ****** ****** *)

(* Author: Hongwei Xi *)
(* Authoremail: hwxi AT cs DOT bu DOT edu *)
(* Start time: June, 2012 *)

(* ****** ****** *)

implement{env}
intrange_foreach$cont (i, env) = true
(*
implement{env}
intrange_foreach$fwork (i, env) = ((*void*))
*)

implement{}
intrange_foreach (l, r) = let
  var env: void = () in intrange_foreach_env<void> (l, r, env)
end // end of [intrange_foreach]

implement{tenv}
intrange_foreach_env
  (l, r, env) = let
//
fun loop
(
  l: int, r: int, env: &tenv
) : int =
(
  if l < r then let
    val cont = intrange_foreach$cont<tenv> (l, env)
  in
    if cont then let
      val () = intrange_foreach$fwork<tenv> (l, env) in loop (succ(l), r, env)
    end else l // end of [if]
  end else l // end of [if]
) // end of [loop]
//
in
  loop (l, r, env)
end // end of [intrange_foreach_env]

(* ****** ****** *)

implement{env}
intrange_rforeach$cont (i, env) = true
(*
implement{env}
intrange_rforeach$fwork (i, env) = ((*void*))
*)

implement{}
intrange_rforeach (l, r) = let
  var env: void = () in intrange_rforeach_env<void> (l, r, env)
end // end of [intrange_rforeach]

implement{tenv}
intrange_rforeach_env
  (l, r, env) = let
//
fun loop
(
  l: int, r: int, env: &tenv
) : int =
(
  if l < r then let
    val r1 = pred (r)
    val cont = intrange_rforeach$cont<tenv> (r1, env)
  in
    if cont then let
      val () = intrange_rforeach$fwork<tenv> (r1, env) in loop (l, r1, env)
    end else r // end of [if]
  end else r // end of [if]
) // end of [loop]
//
in
  loop (l, r, env)
end // end of [intrange_rforeach_env]

(* ****** ****** *)

(* end of [intrange.dats] *)
