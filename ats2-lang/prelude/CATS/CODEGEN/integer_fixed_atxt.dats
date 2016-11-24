(*
integer_fixed.atxt: 1(line=1, offs=1) -- 318(line=17, offs=3)
*)

//
#define
ATSCODEFORMAT "txt"
//
#if(ATSCODEFORMAT == "txt")
#include "utils/atsdoc/HATS/postiatsatxt.hats"
#endif // end of [ATSCCODEFORMAT]
//
#include "prelude_CATS_atext.hats"
//
val
_thisfilename = atext_strcst"integer_fixed.cats"
val ((*void*)) =
theAtextMap_insert_str ("thisfilename", _thisfilename)
//

(*
integer_fixed.atxt: 323(line=19, offs=2) -- 345(line=19, offs=24)
*)
val __tok1 = atscode_banner_for_C()
val () = theAtextMap_insert_str ("__tok1", __tok1)

(*
integer_fixed.atxt: 347(line=20, offs=2) -- 376(line=20, offs=31)
*)
val __tok2 = atscode_copyright_GPL_for_C()
val () = theAtextMap_insert_str ("__tok2", __tok2)

(*
integer_fixed.atxt: 379(line=22, offs=2) -- 404(line=22, offs=27)
*)
val __tok3 = atscode_separator_for_C()
val () = theAtextMap_insert_str ("__tok3", __tok3)

(*
integer_fixed.atxt: 410(line=25, offs=2) -- 438(line=25, offs=30)
*)
val __tok4 = atscode_author("Hongwei Xi")
val () = theAtextMap_insert_str ("__tok4", __tok4)

(*
integer_fixed.atxt: 440(line=26, offs=2) -- 482(line=26, offs=44)
*)
val __tok5 = atscode_authoremail("gmhwxiATgmailDOTcom")
val () = theAtextMap_insert_str ("__tok5", __tok5)

(*
integer_fixed.atxt: 484(line=27, offs=2) -- 519(line=27, offs=37)
*)
val __tok6 = atscode_start_time("January, 2013")
val () = theAtextMap_insert_str ("__tok6", __tok6)

(*
integer_fixed.atxt: 525(line=30, offs=2) -- 550(line=30, offs=27)
*)
val __tok7 = atscode_separator_for_C()
val () = theAtextMap_insert_str ("__tok7", __tok7)

(*
integer_fixed.atxt: 643(line=35, offs=25) -- 654(line=35, offs=36)
*)
val __tok8 = timestamp()
val () = theAtextMap_insert_str ("__tok8", __tok8)

(*
integer_fixed.atxt: 660(line=38, offs=2) -- 685(line=38, offs=27)
*)
val __tok9 = atscode_separator_for_C()
val () = theAtextMap_insert_str ("__tok9", __tok9)

(*
integer_fixed.atxt: 775(line=43, offs=2) -- 800(line=43, offs=27)
*)
val __tok10 = atscode_separator_for_C()
val () = theAtextMap_insert_str ("__tok10", __tok10)

(*
integer_fixed.atxt: 825(line=47, offs=2) -- 850(line=47, offs=27)
*)
val __tok11 = atscode_separator_for_C()
val () = theAtextMap_insert_str ("__tok11", __tok11)

(*
integer_fixed.atxt: 1115(line=59, offs=2) -- 1140(line=59, offs=27)
*)
val __tok12 = atscode_separator_for_C()
val () = theAtextMap_insert_str ("__tok12", __tok12)

(*
integer_fixed.atxt: 1387(line=70, offs=2) -- 1412(line=70, offs=27)
*)
val __tok13 = atscode_separator_for_C()
val () = theAtextMap_insert_str ("__tok13", __tok13)

(*
integer_fixed.atxt: 1417(line=72, offs=2) -- 1438(line=72, offs=23)
*)
val __tok14 = g0int_implist("int8")
val () = theAtextMap_insert_str ("__tok14", __tok14)

(*
integer_fixed.atxt: 1441(line=73, offs=2) -- 1463(line=73, offs=24)
*)
val __tok15 = g0int_implist("int16")
val () = theAtextMap_insert_str ("__tok15", __tok15)

(*
integer_fixed.atxt: 1466(line=74, offs=2) -- 1488(line=74, offs=24)
*)
val __tok16 = g0int_implist("int32")
val () = theAtextMap_insert_str ("__tok16", __tok16)

(*
integer_fixed.atxt: 1491(line=75, offs=2) -- 1513(line=75, offs=24)
*)
val __tok17 = g0int_implist("int64")
val () = theAtextMap_insert_str ("__tok17", __tok17)

(*
integer_fixed.atxt: 1519(line=77, offs=2) -- 1544(line=77, offs=27)
*)
val __tok18 = atscode_separator_for_C()
val () = theAtextMap_insert_str ("__tok18", __tok18)

(*
integer_fixed.atxt: 2327(line=106, offs=2) -- 2352(line=106, offs=27)
*)
val __tok19 = atscode_separator_for_C()
val () = theAtextMap_insert_str ("__tok19", __tok19)

(*
integer_fixed.atxt: 2357(line=108, offs=2) -- 2380(line=108, offs=25)
*)
val __tok20 = g0uint_implist("uint8")
val () = theAtextMap_insert_str ("__tok20", __tok20)

(*
integer_fixed.atxt: 2383(line=109, offs=2) -- 2407(line=109, offs=26)
*)
val __tok21 = g0uint_implist("uint16")
val () = theAtextMap_insert_str ("__tok21", __tok21)

(*
integer_fixed.atxt: 2410(line=110, offs=2) -- 2434(line=110, offs=26)
*)
val __tok22 = g0uint_implist("uint32")
val () = theAtextMap_insert_str ("__tok22", __tok22)

(*
integer_fixed.atxt: 2437(line=111, offs=2) -- 2461(line=111, offs=26)
*)
val __tok23 = g0uint_implist("uint64")
val () = theAtextMap_insert_str ("__tok23", __tok23)

(*
integer_fixed.atxt: 2467(line=113, offs=2) -- 2492(line=113, offs=27)
*)
val __tok24 = atscode_separator_for_C()
val () = theAtextMap_insert_str ("__tok24", __tok24)

(*
integer_fixed.atxt: 2548(line=117, offs=2) -- 2573(line=117, offs=27)
*)
val __tok25 = atscode_separator_for_C()
val () = theAtextMap_insert_str ("__tok25", __tok25)

(*
integer_fixed.atxt: 2576(line=119, offs=2) -- 2619(line=119, offs=45)
*)
val __tok26 = atscode_eof_strsub_for_C("#thisfilename$")
val () = theAtextMap_insert_str ("__tok26", __tok26)

(*
integer_fixed.atxt: 2622(line=121, offs=1) -- 2710(line=124, offs=3)
*)

implement
main (argc, argv) = fprint_filsub (stdout_ref, "integer_fixed_atxt.txt")

