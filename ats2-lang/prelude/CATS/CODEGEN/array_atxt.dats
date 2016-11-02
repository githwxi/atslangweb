(*
array.atxt: 1(line=1, offs=1) -- 253(line=8, offs=3)
*)

#define ATSCODEFORMAT "txt"
#if (ATSCODEFORMAT == "txt")
#include "utils/atsdoc/HATS/postiatsatxt.hats"
#endif // end of [ATSCCODEFORMAT]
val _thisfilename = atext_strcst"array.cats"
val () = theAtextMap_insert_str ("thisfilename", _thisfilename)

(*
array.atxt: 258(line=10, offs=2) -- 280(line=10, offs=24)
*)
val __tok1 = atscode_banner_for_C()
val () = theAtextMap_insert_str ("__tok1", __tok1)

(*
array.atxt: 282(line=11, offs=2) -- 311(line=11, offs=31)
*)
val __tok2 = atscode_copyright_GPL_for_C()
val () = theAtextMap_insert_str ("__tok2", __tok2)

(*
array.atxt: 314(line=13, offs=2) -- 339(line=13, offs=27)
*)
val __tok3 = atscode_separator_for_C()
val () = theAtextMap_insert_str ("__tok3", __tok3)

(*
array.atxt: 424(line=18, offs=25) -- 435(line=18, offs=36)
*)
val __tok4 = timestamp()
val () = theAtextMap_insert_str ("__tok4", __tok4)

(*
array.atxt: 441(line=21, offs=2) -- 466(line=21, offs=27)
*)
val __tok5 = atscode_separator_for_C()
val () = theAtextMap_insert_str ("__tok5", __tok5)

(*
array.atxt: 472(line=24, offs=2) -- 500(line=24, offs=30)
*)
val __tok6 = atscode_author("Hongwei Xi")
val () = theAtextMap_insert_str ("__tok6", __tok6)

(*
array.atxt: 502(line=25, offs=2) -- 550(line=25, offs=50)
*)
val __tok7 = atscode_authoremail("hwxi AT cs DOT bu DOT edu")
val () = theAtextMap_insert_str ("__tok7", __tok7)

(*
array.atxt: 552(line=26, offs=2) -- 587(line=26, offs=37)
*)
val __tok8 = atscode_start_time("January, 2013")
val () = theAtextMap_insert_str ("__tok8", __tok8)

(*
array.atxt: 593(line=29, offs=2) -- 618(line=29, offs=27)
*)
val __tok9 = atscode_separator_for_C()
val () = theAtextMap_insert_str ("__tok9", __tok9)

(*
array.atxt: 692(line=34, offs=2) -- 717(line=34, offs=27)
*)
val __tok10 = atscode_separator_for_C()
val () = theAtextMap_insert_str ("__tok10", __tok10)

(*
array.atxt: 1098(line=56, offs=2) -- 1123(line=56, offs=27)
*)
val __tok11 = atscode_separator_for_C()
val () = theAtextMap_insert_str ("__tok11", __tok11)

(*
array.atxt: 1419(line=72, offs=2) -- 1444(line=72, offs=27)
*)
val __tok12 = atscode_separator_for_C()
val () = theAtextMap_insert_str ("__tok12", __tok12)

(*
array.atxt: 1795(line=94, offs=2) -- 1820(line=94, offs=27)
*)
val __tok13 = atscode_separator_for_C()
val () = theAtextMap_insert_str ("__tok13", __tok13)

(*
array.atxt: 1868(line=98, offs=2) -- 1893(line=98, offs=27)
*)
val __tok14 = atscode_separator_for_C()
val () = theAtextMap_insert_str ("__tok14", __tok14)

(*
array.atxt: 1896(line=100, offs=2) -- 1939(line=100, offs=45)
*)
val __tok15 = atscode_eof_strsub_for_C("#thisfilename$")
val () = theAtextMap_insert_str ("__tok15", __tok15)

(*
array.atxt: 1942(line=102, offs=1) -- 2022(line=105, offs=3)
*)

implement
main (argc, argv) = fprint_filsub (stdout_ref, "array_atxt.txt")

