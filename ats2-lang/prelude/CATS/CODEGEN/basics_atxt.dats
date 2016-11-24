(*
basics.atxt: 1(line=1, offs=1) -- 273(line=16, offs=3)
*)

//
#define
ATSCODEFORMAT "txt"
//
#if(ATSCODEFORMAT == "txt")
//
#include
"utils/atsdoc/HATS/postiatsatxt.hats"
//
#endif // end of [ATSCCODEFORMAT]
val
_thisfilename = atext_strcst"basics.cats"
val ((*void*)) =
theAtextMap_insert_str ("thisfilename", _thisfilename)

(*
basics.atxt: 278(line=18, offs=2) -- 300(line=18, offs=24)
*)
val __tok1 = atscode_banner_for_C()
val () = theAtextMap_insert_str ("__tok1", __tok1)

(*
basics.atxt: 302(line=19, offs=2) -- 331(line=19, offs=31)
*)
val __tok2 = atscode_copyright_GPL_for_C()
val () = theAtextMap_insert_str ("__tok2", __tok2)

(*
basics.atxt: 334(line=21, offs=2) -- 359(line=21, offs=27)
*)
val __tok3 = atscode_separator_for_C()
val () = theAtextMap_insert_str ("__tok3", __tok3)

(*
basics.atxt: 445(line=26, offs=25) -- 456(line=26, offs=36)
*)
val __tok4 = timestamp()
val () = theAtextMap_insert_str ("__tok4", __tok4)

(*
basics.atxt: 462(line=29, offs=2) -- 487(line=29, offs=27)
*)
val __tok5 = atscode_separator_for_C()
val () = theAtextMap_insert_str ("__tok5", __tok5)

(*
basics.atxt: 493(line=32, offs=2) -- 521(line=32, offs=30)
*)
val __tok6 = atscode_author("Hongwei Xi")
val () = theAtextMap_insert_str ("__tok6", __tok6)

(*
basics.atxt: 523(line=33, offs=2) -- 571(line=33, offs=50)
*)
val __tok7 = atscode_authoremail("hwxi AT cs DOT bu DOT edu")
val () = theAtextMap_insert_str ("__tok7", __tok7)

(*
basics.atxt: 573(line=34, offs=2) -- 608(line=34, offs=37)
*)
val __tok8 = atscode_start_time("January, 2013")
val () = theAtextMap_insert_str ("__tok8", __tok8)

(*
basics.atxt: 614(line=37, offs=2) -- 639(line=37, offs=27)
*)
val __tok9 = atscode_separator_for_C()
val () = theAtextMap_insert_str ("__tok9", __tok9)

(*
basics.atxt: 715(line=42, offs=2) -- 740(line=42, offs=27)
*)
val __tok10 = atscode_separator_for_C()
val () = theAtextMap_insert_str ("__tok10", __tok10)

(*
basics.atxt: 785(line=47, offs=2) -- 810(line=47, offs=27)
*)
val __tok11 = atscode_separator_for_C()
val () = theAtextMap_insert_str ("__tok11", __tok11)

(*
basics.atxt: 1225(line=79, offs=2) -- 1250(line=79, offs=27)
*)
val __tok12 = atscode_separator_for_C()
val () = theAtextMap_insert_str ("__tok12", __tok12)

(*
basics.atxt: 1384(line=89, offs=2) -- 1409(line=89, offs=27)
*)
val __tok13 = atscode_separator_for_C()
val () = theAtextMap_insert_str ("__tok13", __tok13)

(*
basics.atxt: 1545(line=100, offs=2) -- 1570(line=100, offs=27)
*)
val __tok14 = atscode_separator_for_C()
val () = theAtextMap_insert_str ("__tok14", __tok14)

(*
basics.atxt: 1927(line=123, offs=2) -- 1952(line=123, offs=27)
*)
val __tok15 = atscode_separator_for_C()
val () = theAtextMap_insert_str ("__tok15", __tok15)

(*
basics.atxt: 2260(line=141, offs=2) -- 2285(line=141, offs=27)
*)
val __tok16 = atscode_separator_for_C()
val () = theAtextMap_insert_str ("__tok16", __tok16)

(*
basics.atxt: 2379(line=146, offs=2) -- 2404(line=146, offs=27)
*)
val __tok17 = atscode_separator_for_C()
val () = theAtextMap_insert_str ("__tok17", __tok17)

(*
basics.atxt: 2621(line=159, offs=2) -- 2646(line=159, offs=27)
*)
val __tok18 = atscode_separator_for_C()
val () = theAtextMap_insert_str ("__tok18", __tok18)

(*
basics.atxt: 2983(line=177, offs=2) -- 3008(line=177, offs=27)
*)
val __tok19 = atscode_separator_for_C()
val () = theAtextMap_insert_str ("__tok19", __tok19)

(*
basics.atxt: 3389(line=196, offs=2) -- 3414(line=196, offs=27)
*)
val __tok20 = atscode_separator_for_C()
val () = theAtextMap_insert_str ("__tok20", __tok20)

(*
basics.atxt: 3853(line=216, offs=2) -- 3878(line=216, offs=27)
*)
val __tok21 = atscode_separator_for_C()
val () = theAtextMap_insert_str ("__tok21", __tok21)

(*
basics.atxt: 3927(line=220, offs=2) -- 3952(line=220, offs=27)
*)
val __tok22 = atscode_separator_for_C()
val () = theAtextMap_insert_str ("__tok22", __tok22)

(*
basics.atxt: 3955(line=222, offs=2) -- 3998(line=222, offs=45)
*)
val __tok23 = atscode_eof_strsub_for_C("#thisfilename$")
val () = theAtextMap_insert_str ("__tok23", __tok23)

(*
basics.atxt: 4001(line=224, offs=1) -- 4082(line=227, offs=3)
*)

implement
main (argc, argv) = fprint_filsub (stdout_ref, "basics_atxt.txt")

