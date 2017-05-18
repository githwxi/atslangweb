(*
**
** Some utility functions
** for manipulating the syntax of ATS2
**
** Contributed by Hongwei Xi (gmhwxiATgmailDOTcom)
**
** Start Time: June, 2012
**
*)

(* ****** ****** *)

#define ATS_DYNLOADFLAG 0

(* ****** ****** *)
//
// Finding the declaration of a given declname
//
(* ****** ****** *)
//
staload "./../SATS/libatsynmark.sats"
//
(* ****** ****** *)
//
staload "./libatsynmark_psynmark.dats"
staload "./libatsynmark_pats2xhtml.dats"
//
(* ****** ****** *)

local

implement
psynmark_process<> (psm, putc) =
  psynmark_process_xhtml_bground (psm, putc)
// end of [psynmark_process<>]

in (* in-of-local *)

implement
string_pats2xhtmlize_bground
  (stadyn, synop) = string_pats2xhtmlize<> (stadyn, synop)
// end of [string_pats2xhtmlize_bground]

implement
charlst_pats2xhtmlize_bground
  (stadyn, synop) = charlst_pats2xhtmlize<> (stadyn, synop)
// end of [charlst_pats2xhtmlize_bground]

end // end of [local]

(* ****** ****** *)

(* end of [libatsynmark_pats2xhtml_bground.dats] *)
