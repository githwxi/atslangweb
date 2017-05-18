(*
** For writing ATS code
** that translates into Python3
*)

(* ****** ****** *)

#define ATS_DYNLOADFLAG 0

(* ****** ****** *)
//
// HX-2014-08:
// prefix for external names
//
#define
ATS_EXTERN_PREFIX "ats2pypre_BUCS320_"
#define
ATS_STATIC_PREFIX "_ats2pypre_BUCS320_GraphSearch_dfs_"
//
(* ****** ****** *)
//
#include
"share/atspre_define.hats"
//
(* ****** ****** *)
//
staload "./../../../basics_php.sats"
//
(* ****** ****** *)
//
staload "./../../../SATS/bool.sats"
staload "./../../../SATS/integer.sats"
//
(* ****** ****** *)
//
staload "./../../../SATS/slistref.sats"
//
macdef
slistref_insert = slistref_push
macdef
slistref_takeout_opt = slistref_pop_opt
//
(* ****** ****** *)
//
#include
"{$LIBATSCC}/DATS/BUCS320/GraphSearch/GraphSearch_dfs.dats"
//
(* ****** ****** *)

(* end of [GraphSearch_dfs.dats] *)
