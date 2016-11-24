(*
integer_ptr.atxt: 1(line=1, offs=1) -- 316(line=17, offs=3)
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
_thisfilename = atext_strcst"integer_ptr.cats"
val ((*void*)) =
theAtextMap_insert_str ("thisfilename", _thisfilename)
//

(*
integer_ptr.atxt: 321(line=19, offs=2) -- 343(line=19, offs=24)
*)
val __tok1 = atscode_banner_for_C()
val () = theAtextMap_insert_str ("__tok1", __tok1)

(*
integer_ptr.atxt: 345(line=20, offs=2) -- 374(line=20, offs=31)
*)
val __tok2 = atscode_copyright_GPL_for_C()
val () = theAtextMap_insert_str ("__tok2", __tok2)

(*
integer_ptr.atxt: 377(line=22, offs=2) -- 402(line=22, offs=27)
*)
val __tok3 = atscode_separator_for_C()
val () = theAtextMap_insert_str ("__tok3", __tok3)

(*
integer_ptr.atxt: 408(line=25, offs=2) -- 436(line=25, offs=30)
*)
val __tok4 = atscode_author("Hongwei Xi")
val () = theAtextMap_insert_str ("__tok4", __tok4)

(*
integer_ptr.atxt: 438(line=26, offs=2) -- 480(line=26, offs=44)
*)
val __tok5 = atscode_authoremail("gmhwxiATgmailDOTcom")
val () = theAtextMap_insert_str ("__tok5", __tok5)

(*
integer_ptr.atxt: 482(line=27, offs=2) -- 517(line=27, offs=37)
*)
val __tok6 = atscode_start_time("January, 2013")
val () = theAtextMap_insert_str ("__tok6", __tok6)

(*
integer_ptr.atxt: 523(line=30, offs=2) -- 548(line=30, offs=27)
*)
val __tok7 = atscode_separator_for_C()
val () = theAtextMap_insert_str ("__tok7", __tok7)

(*
integer_ptr.atxt: 639(line=35, offs=25) -- 650(line=35, offs=36)
*)
val __tok8 = timestamp()
val () = theAtextMap_insert_str ("__tok8", __tok8)

(*
integer_ptr.atxt: 656(line=38, offs=2) -- 681(line=38, offs=27)
*)
val __tok9 = atscode_separator_for_C()
val () = theAtextMap_insert_str ("__tok9", __tok9)

(*
integer_ptr.atxt: 767(line=43, offs=2) -- 792(line=43, offs=27)
*)
val __tok10 = atscode_separator_for_C()
val () = theAtextMap_insert_str ("__tok10", __tok10)

(*
integer_ptr.atxt: 817(line=47, offs=2) -- 842(line=47, offs=27)
*)
val __tok11 = atscode_separator_for_C()
val () = theAtextMap_insert_str ("__tok11", __tok11)

(*
integer_ptr.atxt: 916(line=52, offs=2) -- 941(line=52, offs=27)
*)
val __tok12 = atscode_separator_for_C()
val () = theAtextMap_insert_str ("__tok12", __tok12)

(*
integer_ptr.atxt: 1295(line=67, offs=2) -- 1320(line=67, offs=27)
*)
val __tok13 = atscode_separator_for_C()
val () = theAtextMap_insert_str ("__tok13", __tok13)

(*
integer_ptr.atxt: 1698(line=82, offs=2) -- 1723(line=82, offs=27)
*)
val __tok14 = atscode_separator_for_C()
val () = theAtextMap_insert_str ("__tok14", __tok14)

(*
integer_ptr.atxt: 1728(line=84, offs=2) -- 1751(line=84, offs=25)
*)
val __tok15 = g0int_implist("intptr")
val () = theAtextMap_insert_str ("__tok15", __tok15)

(*
integer_ptr.atxt: 1757(line=86, offs=2) -- 1780(line=86, offs=25)
*)
val __tok16 = g1int_implist("intptr")
val () = theAtextMap_insert_str ("__tok16", __tok16)

(*
integer_ptr.atxt: 1786(line=88, offs=2) -- 1811(line=88, offs=27)
*)
val __tok17 = atscode_separator_for_C()
val () = theAtextMap_insert_str ("__tok17", __tok17)

(*
integer_ptr.atxt: 1816(line=90, offs=2) -- 1841(line=90, offs=27)
*)
val __tok18 = g0uint_implist("uintptr")
val () = theAtextMap_insert_str ("__tok18", __tok18)

(*
integer_ptr.atxt: 1847(line=92, offs=2) -- 1872(line=92, offs=27)
*)
val __tok19 = g1uint_implist("uintptr")
val () = theAtextMap_insert_str ("__tok19", __tok19)

(*
integer_ptr.atxt: 1878(line=94, offs=2) -- 1903(line=94, offs=27)
*)
val __tok20 = atscode_separator_for_C()
val () = theAtextMap_insert_str ("__tok20", __tok20)

(*
integer_ptr.atxt: 1957(line=98, offs=2) -- 1982(line=98, offs=27)
*)
val __tok21 = atscode_separator_for_C()
val () = theAtextMap_insert_str ("__tok21", __tok21)

(*
integer_ptr.atxt: 1985(line=100, offs=2) -- 2028(line=100, offs=45)
*)
val __tok22 = atscode_eof_strsub_for_C("#thisfilename$")
val () = theAtextMap_insert_str ("__tok22", __tok22)

(*
integer_ptr.atxt: 2031(line=102, offs=1) -- 2117(line=105, offs=3)
*)

implement
main (argc, argv) = fprint_filsub (stdout_ref, "integer_ptr_atxt.txt")

