(***********************************************************************)
(*                                                                     *)
(*                         Applied Type System                         *)
(*                                                                     *)
(***********************************************************************)

(*
** ATS/Postiats - Unleashing the Potential of Types!
** Copyright (C) 2011-2013 Hongwei Xi, ATS Trustful Software, Inc.
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
//
// Author: Hongwei Xi (gmhwxi AT gmail DOT com)
// Start Time: May, 2012
//
(* ****** ****** *)

#define ATS_PACKNAME "ATSLIB.libc"
#define ATS_DYNLOADFLAG 0 // no need for dynloading at run-time
#define ATS_EXTERN_PREFIX "atslib_" // prefix for external names

(* ****** ****** *)

staload "libc/SATS/stdlib.sats"

(* ****** ****** *)

implement{
} getenv_gc
  (name) = let
  val fpfstr = getenv (name)
  val str2 = strptr0_copy (fpfstr.1)
  prval () = fpfstr.0 (fpfstr.1)
in
  str2
end // end of [getenv_gc]

(* ****** ****** *)

%{
extern
atstype_ptr
atslib_malloc_libc_exn
  (atstype_size bsz)
{
  void *p ;
  p = atslib_malloc_libc(bsz) ;
  if (!p) {
    fprintf(stderr, "exit(ATSLIB): [malloc] failed\n") ; exit(1) ;
  } // end of [if]
  return p ;
} /* end of [atslib_malloc_libc_exn] */
%}

(* ****** ****** *)

(* end of [stdlib.dats] *)