(*
strptr.atxt: 1(line=1, offs=1) -- 272(line=16, offs=3)
*)

#define
ATSCODEFORMAT "txt"
//
#if(ATSCODEFORMAT == "txt")
//
#include
"utils/atsdoc/HATS/postiatsatxt.hats"
//
#endif // end of [ATSCCODEFORMAT]
//
val
_thisfilename = atext_strcst"strptr.cats"
val ((*void*)) =
theAtextMap_insert_str("thisfilename", _thisfilename)

(*
strptr.atxt: 277(line=18, offs=2) -- 299(line=18, offs=24)
*)
val __tok1 = atscode_banner_for_C()
val () = theAtextMap_insert_str ("__tok1", __tok1)

(*
strptr.atxt: 301(line=19, offs=2) -- 330(line=19, offs=31)
*)
val __tok2 = atscode_copyright_GPL_for_C()
val () = theAtextMap_insert_str ("__tok2", __tok2)

(*
strptr.atxt: 333(line=21, offs=2) -- 358(line=21, offs=27)
*)
val __tok3 = atscode_separator_for_C()
val () = theAtextMap_insert_str ("__tok3", __tok3)

(*
strptr.atxt: 364(line=24, offs=2) -- 392(line=24, offs=30)
*)
val __tok4 = atscode_author("Hongwei Xi")
val () = theAtextMap_insert_str ("__tok4", __tok4)

(*
strptr.atxt: 394(line=25, offs=2) -- 436(line=25, offs=44)
*)
val __tok5 = atscode_authoremail("gmhwxiATgmailDOTcom")
val () = theAtextMap_insert_str ("__tok5", __tok5)

(*
strptr.atxt: 438(line=26, offs=2) -- 471(line=26, offs=35)
*)
val __tok6 = atscode_start_time("March, 2013")
val () = theAtextMap_insert_str ("__tok6", __tok6)

(*
strptr.atxt: 477(line=29, offs=2) -- 502(line=29, offs=27)
*)
val __tok7 = atscode_separator_for_C()
val () = theAtextMap_insert_str ("__tok7", __tok7)

(*
strptr.atxt: 588(line=34, offs=25) -- 599(line=34, offs=36)
*)
val __tok8 = timestamp()
val () = theAtextMap_insert_str ("__tok8", __tok8)

(*
strptr.atxt: 605(line=37, offs=2) -- 630(line=37, offs=27)
*)
val __tok9 = atscode_separator_for_C()
val () = theAtextMap_insert_str ("__tok9", __tok9)

(*
strptr.atxt: 706(line=42, offs=2) -- 731(line=42, offs=27)
*)
val __tok10 = atscode_separator_for_C()
val () = theAtextMap_insert_str ("__tok10", __tok10)

(*
strptr.atxt: 816(line=50, offs=2) -- 841(line=50, offs=27)
*)
val __tok11 = atscode_separator_for_C()
val () = theAtextMap_insert_str ("__tok11", __tok11)

(*
strptr.atxt: 887(line=54, offs=2) -- 912(line=54, offs=27)
*)
val __tok12 = atscode_separator_for_C()
val () = theAtextMap_insert_str ("__tok12", __tok12)

(*
strptr.atxt: 1005(line=59, offs=2) -- 1030(line=59, offs=27)
*)
val __tok13 = atscode_separator_for_C()
val () = theAtextMap_insert_str ("__tok13", __tok13)

(*
strptr.atxt: 1315(line=75, offs=2) -- 1340(line=75, offs=27)
*)
val __tok14 = atscode_separator_for_C()
val () = theAtextMap_insert_str ("__tok14", __tok14)

(*
strptr.atxt: 1530(line=81, offs=2) -- 1555(line=81, offs=27)
*)
val __tok15 = atscode_separator_for_C()
val () = theAtextMap_insert_str ("__tok15", __tok15)

(*
strptr.atxt: 1604(line=85, offs=2) -- 1629(line=85, offs=27)
*)
val __tok16 = atscode_separator_for_C()
val () = theAtextMap_insert_str ("__tok16", __tok16)

(*
strptr.atxt: 1632(line=87, offs=2) -- 1675(line=87, offs=45)
*)
val __tok17 = atscode_eof_strsub_for_C("#thisfilename$")
val () = theAtextMap_insert_str ("__tok17", __tok17)

(*
strptr.atxt: 1678(line=89, offs=1) -- 1759(line=92, offs=3)
*)

implement
main (argc, argv) = fprint_filsub (stdout_ref, "strptr_atxt.txt")

