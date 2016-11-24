(*
arrayref.atxt: 1(line=1, offs=1) -- 256(line=8, offs=3)
*)

#define ATSCODEFORMAT "txt"
#if (ATSCODEFORMAT == "txt")
#include "utils/atsdoc/HATS/postiatsatxt.hats"
#endif // end of [ATSCCODEFORMAT]
val _thisfilename = atext_strcst"arrayref.cats"
val () = theAtextMap_insert_str ("thisfilename", _thisfilename)

(*
arrayref.atxt: 261(line=10, offs=2) -- 283(line=10, offs=24)
*)
val __tok1 = atscode_banner_for_C()
val () = theAtextMap_insert_str ("__tok1", __tok1)

(*
arrayref.atxt: 285(line=11, offs=2) -- 314(line=11, offs=31)
*)
val __tok2 = atscode_copyright_GPL_for_C()
val () = theAtextMap_insert_str ("__tok2", __tok2)

(*
arrayref.atxt: 317(line=13, offs=2) -- 342(line=13, offs=27)
*)
val __tok3 = atscode_separator_for_C()
val () = theAtextMap_insert_str ("__tok3", __tok3)

(*
arrayref.atxt: 430(line=18, offs=25) -- 441(line=18, offs=36)
*)
val __tok4 = timestamp()
val () = theAtextMap_insert_str ("__tok4", __tok4)

(*
arrayref.atxt: 447(line=21, offs=2) -- 472(line=21, offs=27)
*)
val __tok5 = atscode_separator_for_C()
val () = theAtextMap_insert_str ("__tok5", __tok5)

(*
arrayref.atxt: 478(line=24, offs=2) -- 506(line=24, offs=30)
*)
val __tok6 = atscode_author("Hongwei Xi")
val () = theAtextMap_insert_str ("__tok6", __tok6)

(*
arrayref.atxt: 508(line=25, offs=2) -- 556(line=25, offs=50)
*)
val __tok7 = atscode_authoremail("hwxi AT cs DOT bu DOT edu")
val () = theAtextMap_insert_str ("__tok7", __tok7)

(*
arrayref.atxt: 558(line=26, offs=2) -- 593(line=26, offs=37)
*)
val __tok8 = atscode_start_time("January, 2013")
val () = theAtextMap_insert_str ("__tok8", __tok8)

(*
arrayref.atxt: 599(line=29, offs=2) -- 624(line=29, offs=27)
*)
val __tok9 = atscode_separator_for_C()
val () = theAtextMap_insert_str ("__tok9", __tok9)

(*
arrayref.atxt: 704(line=34, offs=2) -- 729(line=34, offs=27)
*)
val __tok10 = atscode_separator_for_C()
val () = theAtextMap_insert_str ("__tok10", __tok10)

(*
arrayref.atxt: 874(line=42, offs=2) -- 899(line=42, offs=27)
*)
val __tok11 = atscode_separator_for_C()
val () = theAtextMap_insert_str ("__tok11", __tok11)

(*
arrayref.atxt: 950(line=46, offs=2) -- 975(line=46, offs=27)
*)
val __tok12 = atscode_separator_for_C()
val () = theAtextMap_insert_str ("__tok12", __tok12)

(*
arrayref.atxt: 978(line=48, offs=2) -- 1021(line=48, offs=45)
*)
val __tok13 = atscode_eof_strsub_for_C("#thisfilename$")
val () = theAtextMap_insert_str ("__tok13", __tok13)

(*
arrayref.atxt: 1024(line=50, offs=1) -- 1107(line=53, offs=3)
*)

implement
main (argc, argv) = fprint_filsub (stdout_ref, "arrayref_atxt.txt")

