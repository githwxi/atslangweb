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
** $PATSHOME/prelude/DATS/CODEGEN/char.atxt
** Time of generation: Fri Sep 26 22:20:55 2014
*)

(* ****** ****** *)

(* Author: Hongwei Xi *)
(* Authoremail: hwxi AT cs DOT bu DOT edu *)
(* Start time: Feburary, 2012 *)

(* ****** ****** *)

#define ATS_DYNLOADFLAG 0 // no dynloading at run-time

(* ****** ****** *)

implement{tk}
g0int_of_char
  (c) = __cast (c) where {
  extern castfn __cast (c: char):<> g0int (tk)
} // end of [g0int_of_char]
implement{tk}
g0int_of_schar
  (c) = __cast (c) where {
  extern castfn __cast (c: schar):<> g0int (tk)
} // end of [g0int_of_schar]
implement{tk}
g0int_of_uchar
  (c) = __cast (c) where {
  extern castfn __cast (c: uchar):<> g0int (tk)
} // end of [g0int_of_uchar]

implement{tk}
g0uint_of_uchar
  (c) = __cast (c) where {
  extern castfn __cast (c: uchar):<> g0uint (tk)
} // end of [g0uint_of_uchar]

(* ****** ****** *)

implement{tk}
g1int_of_char1
  {c} (c) = __cast (c) where {
  extern castfn __cast (c: char c):<> g1int (tk, c)
} // end of [g1int_of_char1]
implement{tk}
g1int_of_schar1
  {c} (c) = __cast (c) where {
  extern castfn __cast (c: schar c):<> g1int (tk, c)
} // end of [g1int_of_schar1]
implement{tk}
g1int_of_uchar1
  {c} (c) = __cast (c) where {
  extern castfn __cast (c: uchar c):<> g1int (tk, c)
} // end of [g1int_of_uchar1]

implement{tk}
g1uint_of_uchar1
  {c} (c) = __cast (c) where {
  extern castfn __cast (c: uchar c):<> g1uint (tk, c)
} // end of [g1uint_of_uchar1]

(* ****** ****** *)
//
implement fprint_val<char> = fprint_char
implement fprint_val<uchar> = fprint_uchar
implement fprint_val<schar> = fprint_schar
//
(* ****** ****** *)

(* end of [char.dats] *)
