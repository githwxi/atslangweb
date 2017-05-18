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

(* Author: Hongwei Xi *)
(* Authoremail: gmhwxiATgmailDOTcom *)
(* Start time: July, 2013 *)

(* ****** ****** *)

staload "libats/ML/SATS/basis.sats"

(* ****** ****** *)

staload "libats/ML/SATS/monad_maybe.sats"

(* ****** ****** *)

#include "./SHARE/monad.hats"

(* ****** ****** *)

assume monad_type (a:t0p) = Option (a)

(* ****** ****** *)

implement
{a}{b}
monad_bind
  (opt, f) = let
in
//
case+ opt of
| Some (x) => f (x) | None () => None ()
//
end // end of [monad_bind]

(* ****** ****** *)

implement
{a1,a2}{b}
monad_bind2
  (opt1, opt2, f) = let
in
//
case+ opt1 of
| Some (x1) => (
  case+ opt2 of Some (x2) => f (x1, x2) | None () => None ()
  ) (* end of [Some] *)
| None () => None ()
//
end // end of [monad_bind2]

(* ****** ****** *)

implement
{a1,a2,a3}{b}
monad_bind3
  (opt1, opt2, opt3, f) = let
in
//
case+ opt1 of
| Some (x1) => (
  case+ opt2 of
  | Some (x2) =>
    (
      case+ opt3 of
      | Some (x3) => f (x1, x2, x3) | None () => None ()
    )
  | None () => None ()
  ) (* end of [Some] *)
| None () => None ()
//
end // end of [monad_bind3]

(* ****** ****** *)

implement{a} monad_return (x) = Some{a}(x)

(* ****** ****** *)

implement{a}
monad_cons (mx, mxs) = let
in
//
case+ mx of
| Some (x) =>
  (
  case+ mxs of
  | Some (xs) => Some{list0(a)}(list0_cons{a}(x, xs))
  | None ((*void*)) => None ()
  )
| None () => None ()
//
end // end of [monad_cons]

(* ****** ****** *)

implement{a} monad_maybe_none () = None{a}()
implement{a} monad_maybe_some (x) = Some{a}(x)

(* ****** ****** *)

implement{a} monad_maybe_optize (m) = (m)

(* ****** ****** *)
//
implement{a}
fprint_monad (out, m) = fprint_option<a> (out, m)
//
(* ****** ****** *)

(* end of [monad_maybe.hats] *)
