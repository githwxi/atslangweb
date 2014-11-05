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
** $PATSHOME/prelude/DATS/CODEGEN/option.atxt
** Time of generation: Fri Sep 26 22:21:03 2014
*)

(* ****** ****** *)

(* Author: Hongwei Xi *)
(* Authoremail: hwxi AT cs DOT bu DOT edu *)
(* Start time: Feburary, 2012 *)

(* ****** ****** *)

implement{a} option_some (x) = Some (x)
implement{a} option_none ( ) = None ( )

(* ****** ****** *)

implement{}
option_is_some (opt) =
  case+ opt of Some _ => true | None _ => false
// end of [option_is_some]

implement{}
option_is_none (opt) =
  case+ opt of Some _ => false | None _ => true
// end of [option_is_none]

(* ****** ****** *)

implement{a}
option_unsome
  (opt) = x where { val+Some (x) = opt }
// end of [option_unsome]

implement{a}
option_unsome_exn
  (opt) = (
  case+ opt of
  | Some x => x | None _ => $raise NotSomeExn()
) // end of [option_unsome_exn]

(* ****** ****** *)

implement{a}
fprint_option
  (out, opt) = let
in
//
case+ opt of
| Some (x) => {
    val (
    ) = fprint_string (out, "Some(")
    val () = fprint_val<a> (out, x)
    val () = fprint_string (out, ")")
  } (* end of [Some] *)
| None () => fprint_string (out, "None()")
//
end // end of [fprint_option]

(* ****** ****** *)

(* end of [option.dats] *)
