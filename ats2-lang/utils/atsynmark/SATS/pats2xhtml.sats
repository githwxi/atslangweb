(* ****** ****** *)
(*
//
// For highlighting ATS2 code
//
**
** Author: Hongwei Xi
** Authoremail: gmhwxiATgmhwxiDOTcom
**
*)
(* ****** ****** *)
//
staload
LSYNMK =
"utils\
/libatsynmark\
/SATS/libatsynmark.sats"
//
(* ****** ****** *)

macdef
fstring_putc = $LSYNMK.fstring_putc

(* ****** ****** *)

typedef putc_type = $LSYNMK.putc_type

(* ****** ****** *)

fun
fileref2charlst(fil: FILEref): List_vt(char)

(* ****** ****** *)

fun
pats2xhtml_level1_charlst
(
  stadyn: int, cs: List_vt (char), putc: putc_type
) : void // end of [pats2xhtml_level1_charlst]

(* ****** ****** *)

fun
pats2xhtml_level1_fileref
  (stadyn: int, inp: FILEref, putc: putc_type): void
// end of [pats2xhtml_level1_fileref]

(* ****** ****** *)

(* end of [pats2xhtml.sats] *)
