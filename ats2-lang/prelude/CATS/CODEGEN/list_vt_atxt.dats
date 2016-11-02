(*
list_vt.atxt: 1(line=1, offs=1) -- 255(line=8, offs=3)
*)

#define ATSCODEFORMAT "txt"
#if (ATSCODEFORMAT == "txt")
#include "utils/atsdoc/HATS/postiatsatxt.hats"
#endif // end of [ATSCCODEFORMAT]
val _thisfilename = atext_strcst"list_vt.cats"
val () = theAtextMap_insert_str ("thisfilename", _thisfilename)

(*
list_vt.atxt: 260(line=10, offs=2) -- 282(line=10, offs=24)
*)
val __tok1 = atscode_banner_for_C()
val () = theAtextMap_insert_str ("__tok1", __tok1)

(*
list_vt.atxt: 284(line=11, offs=2) -- 313(line=11, offs=31)
*)
val __tok2 = atscode_copyright_GPL_for_C()
val () = theAtextMap_insert_str ("__tok2", __tok2)

(*
list_vt.atxt: 316(line=13, offs=2) -- 341(line=13, offs=27)
*)
val __tok3 = atscode_separator_for_C()
val () = theAtextMap_insert_str ("__tok3", __tok3)

(*
list_vt.atxt: 428(line=18, offs=25) -- 439(line=18, offs=36)
*)
val __tok4 = timestamp()
val () = theAtextMap_insert_str ("__tok4", __tok4)

(*
list_vt.atxt: 445(line=21, offs=2) -- 470(line=21, offs=27)
*)
val __tok5 = atscode_separator_for_C()
val () = theAtextMap_insert_str ("__tok5", __tok5)

(*
list_vt.atxt: 476(line=24, offs=2) -- 504(line=24, offs=30)
*)
val __tok6 = atscode_author("Hongwei Xi")
val () = theAtextMap_insert_str ("__tok6", __tok6)

(*
list_vt.atxt: 506(line=25, offs=2) -- 554(line=25, offs=50)
*)
val __tok7 = atscode_authoremail("hwxi AT cs DOT bu DOT edu")
val () = theAtextMap_insert_str ("__tok7", __tok7)

(*
list_vt.atxt: 556(line=26, offs=2) -- 591(line=26, offs=37)
*)
val __tok8 = atscode_start_time("January, 2013")
val () = theAtextMap_insert_str ("__tok8", __tok8)

(*
list_vt.atxt: 597(line=29, offs=2) -- 622(line=29, offs=27)
*)
val __tok9 = atscode_separator_for_C()
val () = theAtextMap_insert_str ("__tok9", __tok9)

(*
list_vt.atxt: 700(line=34, offs=2) -- 725(line=34, offs=27)
*)
val __tok10 = atscode_separator_for_C()
val () = theAtextMap_insert_str ("__tok10", __tok10)

(*
list_vt.atxt: 775(line=38, offs=2) -- 800(line=38, offs=27)
*)
val __tok11 = atscode_separator_for_C()
val () = theAtextMap_insert_str ("__tok11", __tok11)

(*
list_vt.atxt: 803(line=40, offs=2) -- 846(line=40, offs=45)
*)
val __tok12 = atscode_eof_strsub_for_C("#thisfilename$")
val () = theAtextMap_insert_str ("__tok12", __tok12)

(*
list_vt.atxt: 849(line=42, offs=1) -- 931(line=45, offs=3)
*)

implement
main (argc, argv) = fprint_filsub (stdout_ref, "list_vt_atxt.txt")

