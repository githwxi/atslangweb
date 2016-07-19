(* ****** ****** *)
//
// CATS-parsemit
//
(* ****** ****** *)
//
// HX-2014-07-02: start
//
(* ****** ****** *)
//
#include
"share/atspre_staload.hats"
//
(* ****** ****** *)
//
staload "./../SATS/catsparse.sats"
//
staload "./../SATS/catsparse_fundecl.sats"
//
(* ****** ****** *)

staload F0HEAD =
{
//
#include
"share/atspre_define.hats"
//
staload "./../SATS/catsparse.sats"
//
typedef key = symbol and itm = f0head
//
implement
gequal_val_val<key> (k1, k2) = (k1 = k2)
//
staload
"libats/SATS/hashtbl_chain.sats"
//
implement
hash_key<key> (sym) =
//
// HX:
// [gidentity] is called to circumvent a bug
//
(
  gidentity(hash_key<string>(symbol_get_name(sym)))
)
//
implement
hashtbl$recapacitize<> () = 1(*resizable*)
//
#define CAPACITY 1024
//
#include "{$LIBATSHWXI}/globals/HATS/ghashtbl_chain.hats"
//
} (* end of [staload] *)

(* ****** ****** *)

implement
f0head_insert
  (fhd) = let
(*
//
val () =
  println! ("f0head_insert")
//
*)
//
val+
F0HEAD(fid, _, _) = fhd.f0head_node
//
val
opt =
$F0HEAD.insert_opt(fid.i0dex_sym, fhd)
//
in
//
case+ opt of
| ~None_vt _ => () | ~Some_vt _ => ()
//
end // end of [typedef_insert]

(* ****** ****** *)
//
implement
f0head_search_opt
  (name) = $F0HEAD.search_opt (name)
//
(* ****** ****** *)

(* end of [catsparse_fundecl.dats] *)
