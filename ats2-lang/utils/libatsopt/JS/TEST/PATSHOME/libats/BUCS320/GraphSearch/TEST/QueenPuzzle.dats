(*
For testing GraphSearh_dfs
*)

(* ****** ****** *)

#include
"share/atspre_define.hats"
#include
"share/atspre_staload.hats"
#include
"share/HATS/atspre_staload_libats_ML.hats"

(* ****** ****** *)

staload "./../GraphSearch.dats"
staload "./../GraphSearch_dfs.dats"

(* ****** ****** *)

implement node_mark<>(nx) = ()
implement node_unmark<>(nx) = ()
implement node_is_marked<>(nx) = false

(* ****** ****** *)

#define N 8

(* ****** ****** *)

assume node = list0(int)
assume nodelst = stream_vt(node)

(* ****** ****** *)
//
implement
{}(*tmp*)
theSearchStore_insert_lst(nxs) =
(
nxs
).rforeach()(lam nx => theSearchStore_insert(nx))
//
(* ****** ****** *)
//
implement
node_get_neighbors<>
  (nx0) = 
(
(N).stream_vt_map(TYPE{node})(lam x => cons0(x, nx0))
).filter()
  (
    lam nx =>
    let
      val-cons0(x0, nx) = nx
    in
      nx.iforall()(lam(i, x) => x0 != x && abs(x0 - x) != i+1)
    end // end of [let] // end of [lam]
  )
//
(* ****** ****** *)
//
implement
process_node<>
  (nx) =
if
(length(nx) = N)
then let
//
val () = println! (list0_reverse(nx))
//
in
  true
end // end of [then]
else true // end of [else]
//
(* ****** ****** *)
//
extern
fun
QueenPuzzle_solve(): void
//
implement
QueenPuzzle_solve() =
{
val
store =
slistref_make_nil{node}()
//
val () =
slistref_insert(store, nil0)
//
val () = GraphSearch_dfs(store)
//
} (* end of [QueenPuzzle_solve] *)
//
(* ****** ****** *)

implement
main0() = () where
{
//
val () = QueenPuzzle_solve()
//
} (* end of [main0] *)

(* ****** ****** *)

(* end of [QueenPuzzle.dats] *)
