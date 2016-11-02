(*
matrixref.atxt: 1(line=1, offs=1) -- 257(line=8, offs=3)
*)

#define ATSCODEFORMAT "txt"
#if (ATSCODEFORMAT == "txt")
#include "utils/atsdoc/HATS/postiatsatxt.hats"
#endif // end of [ATSCCODEFORMAT]
val _thisfilename = atext_strcst"matrixref.cats"
val () = theAtextMap_insert_str ("thisfilename", _thisfilename)

(*
matrixref.atxt: 262(line=10, offs=2) -- 284(line=10, offs=24)
*)
val __tok1 = atscode_banner_for_C()
val () = theAtextMap_insert_str ("__tok1", __tok1)

(*
matrixref.atxt: 286(line=11, offs=2) -- 315(line=11, offs=31)
*)
val __tok2 = atscode_copyright_GPL_for_C()
val () = theAtextMap_insert_str ("__tok2", __tok2)

(*
matrixref.atxt: 318(line=13, offs=2) -- 343(line=13, offs=27)
*)
val __tok3 = atscode_separator_for_C()
val () = theAtextMap_insert_str ("__tok3", __tok3)

(*
matrixref.atxt: 432(line=18, offs=25) -- 443(line=18, offs=36)
*)
val __tok4 = timestamp()
val () = theAtextMap_insert_str ("__tok4", __tok4)

(*
matrixref.atxt: 449(line=21, offs=2) -- 474(line=21, offs=27)
*)
val __tok5 = atscode_separator_for_C()
val () = theAtextMap_insert_str ("__tok5", __tok5)

(*
matrixref.atxt: 480(line=24, offs=2) -- 508(line=24, offs=30)
*)
val __tok6 = atscode_author("Hongwei Xi")
val () = theAtextMap_insert_str ("__tok6", __tok6)

(*
matrixref.atxt: 510(line=25, offs=2) -- 558(line=25, offs=50)
*)
val __tok7 = atscode_authoremail("hwxi AT cs DOT bu DOT edu")
val () = theAtextMap_insert_str ("__tok7", __tok7)

(*
matrixref.atxt: 560(line=26, offs=2) -- 595(line=26, offs=37)
*)
val __tok8 = atscode_start_time("January, 2013")
val () = theAtextMap_insert_str ("__tok8", __tok8)

(*
matrixref.atxt: 601(line=29, offs=2) -- 626(line=29, offs=27)
*)
val __tok9 = atscode_separator_for_C()
val () = theAtextMap_insert_str ("__tok9", __tok9)

(*
matrixref.atxt: 708(line=34, offs=2) -- 733(line=34, offs=27)
*)
val __tok10 = atscode_separator_for_C()
val () = theAtextMap_insert_str ("__tok10", __tok10)

(*
matrixref.atxt: 785(line=38, offs=2) -- 810(line=38, offs=27)
*)
val __tok11 = atscode_separator_for_C()
val () = theAtextMap_insert_str ("__tok11", __tok11)

(*
matrixref.atxt: 813(line=40, offs=2) -- 856(line=40, offs=45)
*)
val __tok12 = atscode_eof_strsub_for_C("#thisfilename$")
val () = theAtextMap_insert_str ("__tok12", __tok12)

(*
matrixref.atxt: 859(line=42, offs=1) -- 943(line=45, offs=3)
*)

implement
main (argc, argv) = fprint_filsub (stdout_ref, "matrixref_atxt.txt")

