(*
integer_short.atxt: 1(line=1, offs=1) -- 318(line=17, offs=3)
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
_thisfilename = atext_strcst"integer_short.cats"
val ((*void*)) =
theAtextMap_insert_str ("thisfilename", _thisfilename)
//

(*
integer_short.atxt: 323(line=19, offs=2) -- 345(line=19, offs=24)
*)
val __tok1 = atscode_banner_for_C()
val () = theAtextMap_insert_str ("__tok1", __tok1)

(*
integer_short.atxt: 347(line=20, offs=2) -- 376(line=20, offs=31)
*)
val __tok2 = atscode_copyright_GPL_for_C()
val () = theAtextMap_insert_str ("__tok2", __tok2)

(*
integer_short.atxt: 379(line=22, offs=2) -- 404(line=22, offs=27)
*)
val __tok3 = atscode_separator_for_C()
val () = theAtextMap_insert_str ("__tok3", __tok3)

(*
integer_short.atxt: 410(line=25, offs=2) -- 438(line=25, offs=30)
*)
val __tok4 = atscode_author("Hongwei Xi")
val () = theAtextMap_insert_str ("__tok4", __tok4)

(*
integer_short.atxt: 440(line=26, offs=2) -- 482(line=26, offs=44)
*)
val __tok5 = atscode_authoremail("gmhwxiATgmailDOTcom")
val () = theAtextMap_insert_str ("__tok5", __tok5)

(*
integer_short.atxt: 484(line=27, offs=2) -- 519(line=27, offs=37)
*)
val __tok6 = atscode_start_time("January, 2013")
val () = theAtextMap_insert_str ("__tok6", __tok6)

(*
integer_short.atxt: 525(line=30, offs=2) -- 550(line=30, offs=27)
*)
val __tok7 = atscode_separator_for_C()
val () = theAtextMap_insert_str ("__tok7", __tok7)

(*
integer_short.atxt: 643(line=35, offs=25) -- 654(line=35, offs=36)
*)
val __tok8 = timestamp()
val () = theAtextMap_insert_str ("__tok8", __tok8)

(*
integer_short.atxt: 660(line=38, offs=2) -- 685(line=38, offs=27)
*)
val __tok9 = atscode_separator_for_C()
val () = theAtextMap_insert_str ("__tok9", __tok9)

(*
integer_short.atxt: 775(line=43, offs=2) -- 800(line=43, offs=27)
*)
val __tok10 = atscode_separator_for_C()
val () = theAtextMap_insert_str ("__tok10", __tok10)

(*
integer_short.atxt: 1361(line=63, offs=2) -- 1386(line=63, offs=27)
*)
val __tok11 = atscode_separator_for_C()
val () = theAtextMap_insert_str ("__tok11", __tok11)

(*
integer_short.atxt: 1676(line=74, offs=2) -- 1701(line=74, offs=27)
*)
val __tok12 = atscode_separator_for_C()
val () = theAtextMap_insert_str ("__tok12", __tok12)

(*
integer_short.atxt: 1985(line=86, offs=2) -- 2010(line=86, offs=27)
*)
val __tok13 = atscode_separator_for_C()
val () = theAtextMap_insert_str ("__tok13", __tok13)

(*
integer_short.atxt: 2015(line=88, offs=2) -- 2036(line=88, offs=23)
*)
val __tok14 = g0int_implist("sint")
val () = theAtextMap_insert_str ("__tok14", __tok14)

(*
integer_short.atxt: 2042(line=90, offs=2) -- 2063(line=90, offs=23)
*)
val __tok15 = g1int_implist("sint")
val () = theAtextMap_insert_str ("__tok15", __tok15)

(*
integer_short.atxt: 2069(line=92, offs=2) -- 2094(line=92, offs=27)
*)
val __tok16 = atscode_separator_for_C()
val () = theAtextMap_insert_str ("__tok16", __tok16)

(*
integer_short.atxt: 2099(line=94, offs=2) -- 2122(line=94, offs=25)
*)
val __tok17 = g0uint_implist("usint")
val () = theAtextMap_insert_str ("__tok17", __tok17)

(*
integer_short.atxt: 2128(line=96, offs=2) -- 2151(line=96, offs=25)
*)
val __tok18 = g1uint_implist("usint")
val () = theAtextMap_insert_str ("__tok18", __tok18)

(*
integer_short.atxt: 2157(line=98, offs=2) -- 2182(line=98, offs=27)
*)
val __tok19 = atscode_separator_for_C()
val () = theAtextMap_insert_str ("__tok19", __tok19)

(*
integer_short.atxt: 2238(line=102, offs=2) -- 2263(line=102, offs=27)
*)
val __tok20 = atscode_separator_for_C()
val () = theAtextMap_insert_str ("__tok20", __tok20)

(*
integer_short.atxt: 2266(line=104, offs=2) -- 2309(line=104, offs=45)
*)
val __tok21 = atscode_eof_strsub_for_C("#thisfilename$")
val () = theAtextMap_insert_str ("__tok21", __tok21)

(*
integer_short.atxt: 2312(line=106, offs=1) -- 2400(line=109, offs=3)
*)

implement
main (argc, argv) = fprint_filsub (stdout_ref, "integer_short_atxt.txt")

