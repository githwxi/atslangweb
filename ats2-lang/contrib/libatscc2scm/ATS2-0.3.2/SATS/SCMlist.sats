(*
** For writing ATS code
** that translates into Scheme
*)

(* ****** ****** *)
//
// HX-2016-06:
// prefix for external names
//
#define
ATS_EXTERN_PREFIX "ats2scmpre_"
//
(* ****** ****** *)
//
#define
LIBATSCC_targetloc
"$PATSHOME\
/contrib/libatscc/ATS2-0.3.2"
//
staload "./../basics_scm.sats"
//
(* ****** ****** *)
//
fun
SCMlist_nil
  {a:vt0p}(): SCMlist(a) = "mac#%"
//
fun
SCMlist_sing
  {a:vt0p}(a): SCMlist(a) = "mac#%"
//
fun
SCMlist_pair
  {a:vt0p}(a, a): SCMlist(a) = "mac#%"
//
(* ****** ****** *)
//
fun
SCMlist_cons
  {a:vt0p}
(
  x0: a, xs: SCMlist(a)
) : SCMlist(a) = "mac#%" // end-of-fun
//
(* ****** ****** *)
//
fun
SCMlist_make_elt
  {a:t0p}{n:nat}
  (n: int(n), x0: a): SCMlist(a) = "mac#%"
//
(* ****** ****** *)
//
fun
SCMlist_is_nil
  {a:vt0p}(xs: SCMlist(a)): bool = "mac#%"
//
fun
SCMlist_is_cons
  {a:vt0p}(xs: SCMlist(a)): bool = "mac#%"
//
fun
SCMlist_isnot_nil
  {a:vt0p}(xs: SCMlist(a)): bool = "mac#%"
//
(* ****** ****** *)
//
fun
SCMlist_length
  {a:vt0p}(SCMlist(a)): intGte(0) = "mac#%"
//
(* ****** ****** *)
//
fun
SCMlist_head
  {a:t0p}(xs: SCMlist(a)): (a) = "mac#%"
fun
SCMlist_tail
  {a:t0p}(xs: SCMlist(a)): SCMlist(a) = "mac#%"
//
(* ****** ****** *)
//
fun
SCMlist_last_pair
  {a:t0p}(xs: SCMlist(a)): SCMlist(a) = "mac#%"
//
(* ****** ****** *)
//
fun
SCMlist_get_at
  {a:t0p}(xs: SCMlist(a), i: int): a = "mac#%"
fun
SCMlist_set_at
  {a:t0p}(xs: SCMlist(a), i: int, x0: a): void = "mac#%"
//
fun
SCMlist_exch_at
  {a:vt0p}(xs: SCMlist(a), i: int, x0: a): (a) = "mac#%"
//
(* ****** ****** *)
//
fun
SCMlist_append
  {a:t0p}(SCMlist(a), SCMlist(a)): SCMlist(a) = "mac#%"
//
(* ****** ****** *)
//
fun
SCMlist_reverse{a:t0p}(SCMlist(a)): SCMlist(a) = "mac#%"
//
(* ****** ****** *)
//
fun
SCMlist2list
  {a:t0p}(SCMlist(INV(a))): List0(a) = "mac#%"
fun
SCMlist2list_rev
  {a:t0p}(SCMlist(INV(a))): List0(a) = "mac#%"
//
(* ****** ****** *)
//
fun
SCMlist_oflist
  {a:t0p}(xs: List(INV(a))): SCMlist(a) = "mac#%"
fun
SCMlist_oflist_rev
  {a:t0p}(xs: List(INV(a))): SCMlist(a) = "mac#%"
//
(* ****** ****** *)
//
fun{a:t0p}
SCMlist_sort_1
  (xs: SCMlist(INV(a))): SCMlist(a)
fun
SCMlist_sort_2{a:t0p}
(
  xs: SCMlist(INV(a)), cmp: (a, a) -<cloref1> int
) : SCMlist(a) = "mac#%" // end-of-function
//
(* ****** ****** *)

(* end of [SCMlist.sats] *)
