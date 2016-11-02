(*
list.atxt: 1(line=1, offs=1) -- 252(line=8, offs=3)
*)

#define ATSCODEFORMAT "txt"
#if (ATSCODEFORMAT == "txt")
#include "utils/atsdoc/HATS/postiatsatxt.hats"
#endif // end of [ATSCCODEFORMAT]
val _thisfilename = atext_strcst"list.cats"
val () = theAtextMap_insert_str ("thisfilename", _thisfilename)

(*
list.atxt: 257(line=10, offs=2) -- 279(line=10, offs=24)
*)
val __tok1 = atscode_banner_for_C()
val () = theAtextMap_insert_str ("__tok1", __tok1)

(*
list.atxt: 281(line=11, offs=2) -- 310(line=11, offs=31)
*)
val __tok2 = atscode_copyright_GPL_for_C()
val () = theAtextMap_insert_str ("__tok2", __tok2)

(*
list.atxt: 313(line=13, offs=2) -- 338(line=13, offs=27)
*)
val __tok3 = atscode_separator_for_C()
val () = theAtextMap_insert_str ("__tok3", __tok3)

(*
list.atxt: 422(line=18, offs=25) -- 433(line=18, offs=36)
*)
val __tok4 = timestamp()
val () = theAtextMap_insert_str ("__tok4", __tok4)

(*
list.atxt: 439(line=21, offs=2) -- 464(line=21, offs=27)
*)
val __tok5 = atscode_separator_for_C()
val () = theAtextMap_insert_str ("__tok5", __tok5)

(*
list.atxt: 470(line=24, offs=2) -- 498(line=24, offs=30)
*)
val __tok6 = atscode_author("Hongwei Xi")
val () = theAtextMap_insert_str ("__tok6", __tok6)

(*
list.atxt: 500(line=25, offs=2) -- 548(line=25, offs=50)
*)
val __tok7 = atscode_authoremail("hwxi AT cs DOT bu DOT edu")
val () = theAtextMap_insert_str ("__tok7", __tok7)

(*
list.atxt: 550(line=26, offs=2) -- 585(line=26, offs=37)
*)
val __tok8 = atscode_start_time("January, 2013")
val () = theAtextMap_insert_str ("__tok8", __tok8)

(*
list.atxt: 591(line=29, offs=2) -- 616(line=29, offs=27)
*)
val __tok9 = atscode_separator_for_C()
val () = theAtextMap_insert_str ("__tok9", __tok9)

(*
list.atxt: 688(line=34, offs=2) -- 713(line=34, offs=27)
*)
val __tok10 = atscode_separator_for_C()
val () = theAtextMap_insert_str ("__tok10", __tok10)

(*
list.atxt: 760(line=38, offs=2) -- 785(line=38, offs=27)
*)
val __tok11 = atscode_separator_for_C()
val () = theAtextMap_insert_str ("__tok11", __tok11)

(*
list.atxt: 788(line=40, offs=2) -- 831(line=40, offs=45)
*)
val __tok12 = atscode_eof_strsub_for_C("#thisfilename$")
val () = theAtextMap_insert_str ("__tok12", __tok12)

(*
list.atxt: 834(line=42, offs=1) -- 913(line=45, offs=3)
*)

implement
main (argc, argv) = fprint_filsub (stdout_ref, "list_atxt.txt")

