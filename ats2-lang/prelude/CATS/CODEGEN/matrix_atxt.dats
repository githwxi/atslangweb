(*
matrix.atxt: 1(line=1, offs=1) -- 254(line=8, offs=3)
*)

#define ATSCODEFORMAT "txt"
#if (ATSCODEFORMAT == "txt")
#include "utils/atsdoc/HATS/postiatsatxt.hats"
#endif // end of [ATSCCODEFORMAT]
val _thisfilename = atext_strcst"matrix.cats"
val () = theAtextMap_insert_str ("thisfilename", _thisfilename)

(*
matrix.atxt: 259(line=10, offs=2) -- 281(line=10, offs=24)
*)
val __tok1 = atscode_banner_for_C()
val () = theAtextMap_insert_str ("__tok1", __tok1)

(*
matrix.atxt: 283(line=11, offs=2) -- 312(line=11, offs=31)
*)
val __tok2 = atscode_copyright_GPL_for_C()
val () = theAtextMap_insert_str ("__tok2", __tok2)

(*
matrix.atxt: 315(line=13, offs=2) -- 340(line=13, offs=27)
*)
val __tok3 = atscode_separator_for_C()
val () = theAtextMap_insert_str ("__tok3", __tok3)

(*
matrix.atxt: 426(line=18, offs=25) -- 437(line=18, offs=36)
*)
val __tok4 = timestamp()
val () = theAtextMap_insert_str ("__tok4", __tok4)

(*
matrix.atxt: 443(line=21, offs=2) -- 468(line=21, offs=27)
*)
val __tok5 = atscode_separator_for_C()
val () = theAtextMap_insert_str ("__tok5", __tok5)

(*
matrix.atxt: 474(line=24, offs=2) -- 502(line=24, offs=30)
*)
val __tok6 = atscode_author("Hongwei Xi")
val () = theAtextMap_insert_str ("__tok6", __tok6)

(*
matrix.atxt: 504(line=25, offs=2) -- 552(line=25, offs=50)
*)
val __tok7 = atscode_authoremail("hwxi AT cs DOT bu DOT edu")
val () = theAtextMap_insert_str ("__tok7", __tok7)

(*
matrix.atxt: 554(line=26, offs=2) -- 589(line=26, offs=37)
*)
val __tok8 = atscode_start_time("January, 2013")
val () = theAtextMap_insert_str ("__tok8", __tok8)

(*
matrix.atxt: 595(line=29, offs=2) -- 620(line=29, offs=27)
*)
val __tok9 = atscode_separator_for_C()
val () = theAtextMap_insert_str ("__tok9", __tok9)

(*
matrix.atxt: 696(line=34, offs=2) -- 721(line=34, offs=27)
*)
val __tok10 = atscode_separator_for_C()
val () = theAtextMap_insert_str ("__tok10", __tok10)

(*
matrix.atxt: 770(line=38, offs=2) -- 795(line=38, offs=27)
*)
val __tok11 = atscode_separator_for_C()
val () = theAtextMap_insert_str ("__tok11", __tok11)

(*
matrix.atxt: 798(line=40, offs=2) -- 841(line=40, offs=45)
*)
val __tok12 = atscode_eof_strsub_for_C("#thisfilename$")
val () = theAtextMap_insert_str ("__tok12", __tok12)

(*
matrix.atxt: 844(line=42, offs=1) -- 925(line=45, offs=3)
*)

implement
main (argc, argv) = fprint_filsub (stdout_ref, "matrix_atxt.txt")

