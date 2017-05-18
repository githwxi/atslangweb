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
** $PATSHOME/prelude/SATS/CODEGEN/giterator.atxt
** Time of generation: Sun Nov 20 21:18:21 2016
*)

(* ****** ****** *)

(* Author: Hongwei Xi *)
(* Authoremail: hwxi AT cs DOT bu DOT edu *)
(* Start time: February, 2012 *)

(* ****** ****** *)

typedef SHR(a:type) = a // for commenting purpose
typedef NSH(a:type) = a // for commenting purpose

(* ****** ****** *)

sortdef tk = tkind
sortdef t0p = t@ype
sortdef vtp = viewtype
sortdef vt0p = viewt@ype

(* ****** ****** *)
//
absvtype
giter_vtype
( // HX: boxed
  knd: tkind, kpm: tkind, x: viewt@ype+, f: int, r: int
) // end of [giter_vtype]
stadef giter_5 = giter_vtype
//
vtypedef giter_3
(
  knd: tkind, kpm: tkind, x: vt0p
) = [f,r:int] giter_vtype (knd, kpm, x, f, r)
vtypedef giter_4
(
  knd: tkind, kpm: tkind, x: vt0p, fr:int
) = [f,r:int | f+r==fr] giter_vtype (knd, kpm, x, f, r)
//
stadef giter = giter_3
stadef giter = giter_4
stadef giter = giter_5
//
(* ****** ****** *)

prfun
lemma_giter_param
  {knd:tk}{kpm:tk}{x:vt0p}{f,r:int}
  (itr: !giter (knd, kpm, x, f, r)): [f>=0;r>=0] void
// end of [lemma_giter_param]

(* ****** ****** *)
//
// HX: for fun list giters
//
stacst giter_list_kind : tkind
stacst giter_list_param : () -> tkind
//
(* ****** ****** *)

fun
{x:t0p}
giter_make_list
  {n:int}
(
  xs: list (INV(x), n)
) : giter
  (giter_list_kind, giter_list_param(), x, 0, n)
// end of [giter_make_list]

fun
giter_free_list
  {x:t0p}{f,r:int}
(
  itr: giter
    (giter_list_kind, giter_list_param(), x, f, r)
) : list (x, r) // end of [giter_free_list]

(* ****** ****** *)
//
// HX: for singly-linked list giters
//
stacst giter_list_vt_kind : tkind
stacst giter_list_vt_param : () -> tkind
//
(* ****** ****** *)

fun
{x:t0p}
giter_make_list_vt
  {n:int}
(
  xs: list_vt (INV(x), n)
) : giter
  (giter_list_vt_kind, giter_list_vt_param(), x, 0, n)
// end of [giter_make_list_vt]

fun
giter_free_list_vt
  {x:t0p}{f,r:int}
(
  itr: giter
    (giter_list_vt_kind, giter_list_vt_param(), x, f, r)
) : list_vt (x, f+r) // end of [giter_free_list_vt]

(* ****** ****** *)
//
// HX: for linear array giters
//
stacst giter_array_kind : tkind
stacst giter_array_param : (addr) -> tkind
//
(* ****** ****** *)

fun
{x:vt0p}
giter_make_array
  {l:addr}{n:int}
(
  pf: array_v (INV(x), l, n) | p: ptr l, n: size_t n
) : giter (giter_array_kind, giter_array_param(l), x, 0, n)
// end of [giter_make_array]

fun
giter_free_array
  {x:vt0p}{l:addr}{f,r:int}
(
  itr: giter
    (giter_array_kind, giter_array_param(l), x, f, r)
) : (array_v (x, l, f+r) | void) // endfun

(* ****** ****** *)
//
// HX: for functional string giters
//
stacst giter_string_kind : tkind
stacst giter_string_param : () -> tkind
//
(* ****** ****** *)

fun
giter_make_string
  {n:int}
(
  str: string (n)
) : giter (
  giter_string_kind, giter_string_param(), char, 0, n
) // end of [giter_make_string]

fun
giter_free_string
  {f,r:int}
(
  itr: giter (giter_string_kind, giter_string_param(), char, f, r)
) : string (f+r) // end of [giter_free_string]

(* ****** ****** *)

fun{
knd:tk
}{x:vt0p
} fprint_giter_sep
  {kpm:tk}{f,r:int}
(
  out: FILEref
, itr: !giter (knd, kpm, INV(x), f, r) >> giter (knd, kpm, x, f+r, 0)
, sep: NSH(string)
) : void // end of [fprint_giter_sep]

(* ****** ****** *)

macdef BEG = 0 and END = 1

(* ****** ****** *)

fun{
knd:tk}{x:vt0p
} giter_is_atbeg
  {kpm:tk}{f,r:int}
  (itr: !giter (knd, kpm, INV(x), f, r)):<> bool (f==0)
// end of [giter_is_atbeg]

fun{
knd:tk}{x:vt0p
} giter_isnot_atbeg
  {kpm:tk}{f,r:int}
  (itr: !giter (knd, kpm, INV(x), f, r)):<> bool (f > 0)
// end of [giter_isnot_atbeg]

fun{
knd:tk}{x:vt0p
} eq_int_iter
  {kpm:tk}{f,r:int}
(
  BEG: int(0), itr: !giter (knd, kpm, INV(x), f, r)
) : bool (f==0) // end of [eq_int_iter]
fun{
knd:tk}{x:vt0p
} lt_int_iter
  {kpm:tk}{f,r:int}
(
  BEG: int(0), itr: !giter (knd, kpm, INV(x), f, r)
) : bool (f > 0) // end of [lt_int_iter]

overload = with eq_int_iter
overload < with lt_int_iter

(* ****** ****** *)

fun{
knd:tk}{x:vt0p
} giter_is_atend
  {kpm:tk}{f,r:int}
  (itr: !giter (knd, kpm, INV(x), f, r)):<> bool (r==0)
// end of [giter_is_atend]
fun{
knd:tk}{x:vt0p
} giter_isnot_atend
  {kpm:tk}{f,r:int}
  (itr: !giter (knd, kpm, INV(x), f, r)):<> bool (r > 0)
// end of [giter_isnot_atend]

fun{
knd:tk}{x:vt0p
} eq_giter_int
  {kpm:tk}{f,r:int}
(
  itr: !giter (knd, kpm, INV(x), f, r), END: int(1)
) : bool (r==0) // end of [eq_giter_int]
fun{
knd:tk}{x:vt0p
} lt_giter_int
  {kpm:tk}{f,r:int}
(
  itr: !giter (knd, kpm, INV(x), f, r), END: int(1)
) : bool (r > 0) // end of [lt_giter_int]

overload = with eq_giter_int
overload < with lt_giter_int

(* ****** ****** *)

fun{
knd:tk}{x:t0p
} giter_get
  {kpm:tk}{f,r:int | r > 0}
  (itr: !giter (knd, kpm, INV(x), f, r)): x
// end of [giter_get]

fun{
knd:tk}{x:t0p
} giter_set
  {kpm:tk}{f,r:int | r > 0}
  (itr: !giter (knd, kpm, INV(x), f, r), x: x): void
// end of [giter_set]

fun{
knd:tk}{x:vt0p
} giter_exch
  {kpm:tk}{f,r:int | r > 0}
  (itr: !giter (knd, kpm, INV(x), f, r), x: &x >> x): void
// end of [giter_exch]

overload get with giter_get
overload set with giter_set
overload exch with giter_exch

fun{
knd:tk}{x:vt0p
} giter_getref
  {kpm:tk}{f,r:int | r > 0}
  (itr: !giter (knd, kpm, INV(x), f, r)): Ptr1
// end of [giter_getref]

fun{
knd:tk}{x:vt0p
} giter_vttake
  {kpm:tk}{f,r:int | r > 0}
  (itr: !giter (knd, kpm, INV(x), f, r)): vttakeout0 (x)
// end of [giter_vttake]

(* ****** ****** *)

fun{
knd:tk}{x:vt0p
} giter_inc
  {kpm:tk}{f,r:int | r > 0}
(
  itr: !giter (knd, kpm, INV(x), f, r) >> giter (knd, kpm, x, f+1, r-1)
) : void // end of [giter_inc]
fun{
knd:tk}{x:vt0p
} giter_dec
  {kpm:tk}{f,r:int | f > 0}
(
  itr: !giter (knd, kpm, INV(x), f, r) >> giter (knd, kpm, x, f-1, r+1)
) : void // end of [giter_dec]

overload ++ with giter_inc
overload -- with giter_dec
overload inc with giter_inc
overload dec with giter_dec 

(* ****** ****** *)

fun{
knd:tk}{x:t0p
} giter_get_inc
  {kpm:tk}{f,r:int | r > 0}
(
  itr: !giter (knd, kpm, INV(x), f, r) >> giter (knd, kpm, x, f+1, r-1)
) : x // end of [giter_get_inc]

fun{
knd:tk}{x:t0p
} giter_set_inc
  {kpm:tk}{f,r:int | r > 0}
(
  itr: !giter (knd, kpm, INV(x), f, r) >> giter (knd, kpm, x, f+1, r-1), x: x
) : void // end of [giter_set_inc]

fun{
knd:tk}{x:vt0p
} giter_exch_inc
  {kpm:tk}{f,r:int | r > 0}
(
  itr: !giter (knd, kpm, INV(x), f, r) >> giter (knd, kpm, x, f+1, r-1)
, x: &x >> x
) : void // end of [giter_exch_inc]

overload !++ with giter_get_inc
overload =++ with giter_set_inc
overload getinc with giter_get_inc
overload setinc with giter_set_inc
overload exchinc with giter_exch_inc

fun{
knd:tk}{x:vt0p
} giter_getref_inc
  {kpm:tk}{f,r:int | r > 0}
(
  itr: !giter (knd, kpm, INV(x), f, r) >> giter (knd, kpm, x, f+1, r-1)
) : Ptr1 // end of [giter_getref_inc]

fun{
knd:tk}{x:vt0p
} giter_vttake_inc
  {kpm:tk}{f,r:int | r > 0}
(
  itr: !giter (knd, kpm, INV(x), f, r) >> giter (knd, kpm, x, f+1, r-1)
) : vttakeout0 (x) // end of [giter_vttake_inc]

(* ****** ****** *)

fun{
knd:tk}{x:t0p
} giter_dec_get
  {kpm:tk}{f,r:int | f > 0}
(
  itr: !giter (knd, kpm, INV(x), f, r) >> giter (knd, kpm, x, f-1, r+1)
) : x // end of [giter_dec_get]

fun{
knd:tk}{x:t0p
} giter_dec_set
  {kpm:tk}{f,r:int | f > 0}
(
  itr: !giter (knd, kpm, INV(x), f, r) >> giter (knd, kpm, x, f-1, r+1), x: x
) : void // end of [giter_dec_set]

fun{
knd:tk}{x:vt0p
} giter_dec_exch
  {kpm:tk}{f,r:int | f > 0}
(
  itr: !giter (knd, kpm, INV(x), f, r) >> giter (knd, kpm, x, f-1, r+1)
, x: &x >> x
) : void // end of [giter_dec_exch]

overload --! with giter_dec_get
overload --= with giter_dec_set
overload decget with giter_dec_get
overload decset with giter_dec_set
overload decexch with giter_dec_exch

fun{
knd:tk}{x:vt0p
} giter_dec_getref
  {kpm:tk}{f,r:int | f > 0}
(
  itr: !giter (knd, kpm, INV(x), f, r) >> giter (knd, kpm, x, f-1, r+1)
) : Ptr1 // end of [giter_dec_getref]

fun{
knd:tk}{x:vt0p
} giter_dec_vttake
  {kpm:tk}{f,r:int | f > 0}
(
  itr: !giter (knd, kpm, INV(x), f, r) >> giter (knd, kpm, x, f-1, r+1)
) : vttakeout0 (x) // end of [giter_dec_vttake]

(* ****** ****** *)

fun{
knd:tk}{x:vt0p
} giter_get_fofs
  {kpm:tk}{f,r:int}
  (itr: !giter (knd, kpm, INV(x), f, r)): size_t (f)
// end of [giter_get_fofs]

fun{
knd:tk}{x:vt0p
} giter_get_rofs
  {kpm:tk}{f,r:int}
  (itr: !giter (knd, kpm, INV(x), f, r)): size_t (r)
// end of [giter_get_rofs]

(* ****** ****** *)

fun{
knd:tk}{x:vt0p
} giter_fjmp // forward-jmp
  {kpm:tk}
  {f,r:int}
  {i:int | 0 <= i; i <= r}
(
//
// HX: O(log(n))-time expected (O(1) for arrays)
//
  itr: !giter (knd, kpm, INV(x), f, r)
         >> giter (knd, kpm, x, f+i, r-i), i: size_t (i)
) : void // end of [giter_fjmp]

(* ****** ****** *)

fun{
knd:tk}{x:t0p
} giter_fget_at // forward-get
  {kpm:tk}
  {f,r:int}
  {i:int | 0 <= i; i < r}
(
  itr: !giter (knd, kpm, INV(x), f, r), i: size_t (i)
) : x // end of [giter_fget_at]
fun{
knd:tk}{x:t0p
} giter_fset_at // forward-set
  {kpm:tk}
  {f,r:int}
  {i:int | 0 <= i; i < r}
(
  itr: !giter (knd, kpm, INV(x), f, r), i: size_t (i), x: x
) : void // end of [giter_fset_at]

fun{
knd:tk}{x:vt0p
} giter_fexch_at // forward-exch
  {kpm:tk}
  {f,r:int}
  {i:int | 0 <= i; i < r}
(
  itr: !giter (knd, kpm, INV(x), f, r), i: size_t (i), x: &x >> x
) : void // end of [giter_fexch_at]

fun{
knd:tk}{x:vt0p
} giter_fgetref_at // forward-get
  {kpm:tk}
  {f,r:int}
  {i:int | 0 <= i; i < r}
(
  itr: !giter (knd, kpm, INV(x), f, r), i: size_t (i)
) : Ptr1 // end of [giter_fgetref_at]

(* ****** ****** *)

fun{
knd:tk}{x:vt0p
} giter_fbjmp // forward/backward-jmp
  {kpm:tk}
  {f,r:int}
  {i:int | ~f <= i; i <= r}
(
//
// HX: O(log(n))-time expected (O(1) for arrays)
//
  itr: !giter (knd, kpm, INV(x), f, r)
         >> giter (knd, kpm, x, f+i, r-i), i: ssize_t (i)
) : void // end of [giter_fbjmp]

(* ****** ****** *)

fun{
knd:tk}{x:vt0p
} giter_fbgetref_at // forward/backward-getref
  {kpm:tk}
  {f,r:int}
  {i:int | ~f <= i; i < r}
(
  itr: !giter (knd, kpm, INV(x), f, r), i: ssize_t (i)
) : Ptr1 // end of [giter_fbgetref_at]

fun{
knd:tk}{x:t0p
} giter_fbget_at // forward/backward-get
  {kpm:tk}
  {f,r:int}
  {i:int | ~f <= i; i < r}
(
  itr: !giter (knd, kpm, INV(x), f, r), i: ssize_t (i)
) : x // end of [giter_fbget_at]
fun{
knd:tk}{x:t0p
} giter_fbset_at // forward/backward-set
  {kpm:tk}
  {f,r:int}
  {i:int | ~f <= i; i < r}
(
  itr: !giter (knd, kpm, INV(x), f, r), i: ssize_t (i), x: x
) : void // end of [giter_fbset_at]

fun{
knd:tk}{x:vt0p
} giter_fbexch_at // forward/backward-exch
  {kpm:tk}
  {f,r:int}
  {i:int | ~f <= i; i < r}
(
  itr: !giter (knd, kpm, INV(x), f, r), i: ssize_t (i), x: &x >> x
) : void // end of [giter_fbexch_at]

(* ****** ****** *)

fun{
knd:tk}{x:t0p
} giter_fgetlst
//
// forward-getlst
//
  {kpm:tk}
  {f,r:int}
  {i:nat}
(
  itr: !giter (knd, kpm, INV(x), f, r)
         >> giter (knd, kpm, x, f+i1, r-i1)
, i: &int i >> int (i-i1)
) : #[
  i1:int | i1==min(i, r)
] list_vt (x, i1) // end of [giter_fgetlst]

fun{
knd:tk}{x:t0p
} giter_bgetlst
//
// backward-getlst
//
  {kpm:tk}
  {f,r:int}
  {i:nat}
(
  itr: !giter (knd, kpm, INV(x), f, r)
         >> giter (knd, kpm, x, f-i1, r+i1)
, i: &int i >> int (i-i1)
) : #[
  i1:int | i1==min(i, f)
] list_vt (x, i1) // end of [giter_bgetlst]

(* ****** ****** *)

fun{
knd:tk}{x:vt0p
} giter_ins
  {kpm:tk}{f,r:int}
(
  itr: !giter (knd, kpm, INV(x), f, r) >> giter (knd, kpm, x, f, r+1), x: x
) : void // end of [giter_ins]

fun{
knd:tk}{x:vt0p
} giter_ins_inc
  {kpm:tk}{f,r:int}
(
  itr: !giter (knd, kpm, INV(x), f, r) >> giter (knd, kpm, x, f+1, r), x: x
) : void // end of [giter_ins_inc]

(* ****** ****** *)

fun{
knd:tk}{x:vt0p
} giter_rmv
  {kpm:tk}{f,r:int | r > 0}
(
  itr: !giter (knd, kpm, INV(x), f, r) >> giter (knd, kpm, x, f, r-1)
) : x(*removed*) // end of [giter_rmv]

fun{
knd:tk}{x:vt0p
} giter_dec_rmv
  {kpm:tk}{f,r:int | f > 0}
(
  itr: !giter (knd, kpm, INV(x), f, r) >> giter (knd, kpm, x, f-1, r)
) : x(*removed*) // end of [giter_dec_rmv]

(* ****** ****** *)
//
// HX: some common generic functions on giters
//
(* ****** ****** *)

fun{
knd:tk}{x:t0p
} giter_listize_cpy {kpm:tk}{f,r:int}
(
  itr: !giter (knd, kpm, INV(x), f, r) >> giter (knd, kpm, x, f+r, 0)
) : list_vt (x, r) // end of [giter_listize_cpy]
fun{
knd:tk}{x:t0p
} giter_rlistize_cpy {kpm:tk}{f,r:int}
(
  itr: !giter (knd, kpm, INV(x), f, r) >> giter (knd, kpm, x, f+r, 0)
) : list_vt (x, r) // end of [giter_rlistize_cpy]

(* ****** ****** *)

fun{
knd:tk}{x:vt0p
} giter_listize_rmv {kpm:tk}{f,r:int}
(
  itr: !giter (knd, kpm, INV(x), f, r) >> giter (knd, kpm, x, f, 0)
) : list_vt (x, r) // end of [giter_listize_rmv]
fun{
knd:tk}{x:vt0p
} giter_rlistize_rmv {kpm:tk}{f,r:int}
(
  itr: !giter (knd, kpm, INV(x), f, r) >> giter (knd, kpm, x, f, 0)
) : list_vt (x, r) // end of [giter_rlistize_rmv]

(* ****** ****** *)

fun{
x:vt0p}{env:vt0p
} giter_foreach$cont (x: &x, env: &env): bool
fun{
x:vt0p}{env:vt0p
} giter_foreach$fwork (x: &x, env: &env): void
fun{
knd:tk}{x:vt0p
} giter_foreach
  {kpm:tk}{f,r:int}
(
  itr: !giter (knd, kpm, INV(x), f, r) >> giter (knd, kpm, x, f1, r1)
) : #[f1,r1:int | f <= f1; f+r==f1+r1] void // end of [giter_foreach]
fun{
knd:tk}{x:vt0p}{env:vt0p
} giter_foreach_env
  {kpm:tk}{f,r:int}
(
  itr: !giter (knd, kpm, INV(x), f, r) >> giter (knd, kpm, x, f1, r1)
, env: &(env) >> env
) : #[f1,r1:int | f <= f1; f+r==f1+r1] void // end of [giter_foreach_env]

(* ****** ****** *)

fun{
x:vt0p}{env:vt0p
} giter_rforeach$cont (x: &x, env: &env): bool
fun{
x:vt0p}{env:vt0p
} giter_rforeach$fwork (x: &x, env: &env): void
fun{
knd:tk}{x:vt0p
} giter_rforeach
  {kpm:tk}{f,r:int}
(
  itr: !giter (knd, kpm, INV(x), f, r) >> giter (knd, kpm, x, f1, r1)
) : #[f1,r1:int | f >= f1; f+r==f1+r1] void // end of [giter_rforeach]
fun{
knd:tk}{x:vt0p}{env:vt0p
} giter_rforeach_env
  {kpm:tk}{f,r:int}
(
  itr: !giter (knd, kpm, INV(x), f, r) >> giter (knd, kpm, x, f1, r1)
, env: &(env) >> env
) : #[f1,r1:int | f <= f1; f+r==f1+r1] void // end of [giter_rforeach_env]

(* ****** ****** *)

(*
** HX-2012-05:
** Note that [iter] should support at least log-time
** fjmp and fget in order to make binary search meaningful.
**
** ford (x) = cmp (x0, x), where [x0] is the key being searched
**
** The after-interator points to the left-most location
** where the value [x0] can be inserted without violating
** orderedness.
*)
fun{x:vt0p}
giter_bsearch$ford (x: &x): int
fun{
knd:tk}{x:vt0p
} giter_bsearch
  {kpm:tk}
  {f,r:int}
  {ra:int | ra <= r}
(
  itr: !giter (knd, kpm, INV(x), f, r) >> giter (knd, kpm, x, f1, r1)
, ra: size_t (ra) // range being searched
) : #[
  f1,r1:int | f1>=f;f+ra>=f1;f1+r1==f+r
] void // end of [giter_bsearch]

(* ****** ****** *)

(* end of [giterator.sats] *)
