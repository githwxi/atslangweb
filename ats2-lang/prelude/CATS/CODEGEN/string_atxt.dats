(*
string.atxt: 1(line=1, offs=1) -- 275(line=17, offs=3)
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
//
val
_thisfilename = atext_strcst"string.cats"
val ((*void*)) =
theAtextMap_insert_str("thisfilename", _thisfilename)

(*
string.atxt: 280(line=19, offs=2) -- 302(line=19, offs=24)
*)
val __tok1 = atscode_banner_for_C()
val () = theAtextMap_insert_str ("__tok1", __tok1)

(*
string.atxt: 304(line=20, offs=2) -- 333(line=20, offs=31)
*)
val __tok2 = atscode_copyright_GPL_for_C()
val () = theAtextMap_insert_str ("__tok2", __tok2)

(*
string.atxt: 336(line=22, offs=2) -- 361(line=22, offs=27)
*)
val __tok3 = atscode_separator_for_C()
val () = theAtextMap_insert_str ("__tok3", __tok3)

(*
string.atxt: 367(line=25, offs=2) -- 395(line=25, offs=30)
*)
val __tok4 = atscode_author("Hongwei Xi")
val () = theAtextMap_insert_str ("__tok4", __tok4)

(*
string.atxt: 397(line=26, offs=2) -- 439(line=26, offs=44)
*)
val __tok5 = atscode_authoremail("gmhwxiATgmailDOTcom")
val () = theAtextMap_insert_str ("__tok5", __tok5)

(*
string.atxt: 441(line=27, offs=2) -- 474(line=27, offs=35)
*)
val __tok6 = atscode_start_time("April, 2012")
val () = theAtextMap_insert_str ("__tok6", __tok6)

(*
string.atxt: 480(line=30, offs=2) -- 505(line=30, offs=27)
*)
val __tok7 = atscode_separator_for_C()
val () = theAtextMap_insert_str ("__tok7", __tok7)

(*
string.atxt: 591(line=35, offs=25) -- 602(line=35, offs=36)
*)
val __tok8 = timestamp()
val () = theAtextMap_insert_str ("__tok8", __tok8)

(*
string.atxt: 608(line=38, offs=2) -- 633(line=38, offs=27)
*)
val __tok9 = atscode_separator_for_C()
val () = theAtextMap_insert_str ("__tok9", __tok9)

(*
string.atxt: 709(line=43, offs=2) -- 734(line=43, offs=27)
*)
val __tok10 = atscode_separator_for_C()
val () = theAtextMap_insert_str ("__tok10", __tok10)

(*
string.atxt: 1243(line=70, offs=2) -- 1268(line=70, offs=27)
*)
val __tok11 = atscode_separator_for_C()
val () = theAtextMap_insert_str ("__tok11", __tok11)

(*
string.atxt: 1314(line=74, offs=2) -- 1339(line=74, offs=27)
*)
val __tok12 = atscode_separator_for_C()
val () = theAtextMap_insert_str ("__tok12", __tok12)

(*
string.atxt: 2678(line=136, offs=2) -- 2703(line=136, offs=27)
*)
val __tok13 = atscode_separator_for_C()
val () = theAtextMap_insert_str ("__tok13", __tok13)

(*
string.atxt: 2814(line=141, offs=2) -- 2839(line=141, offs=27)
*)
val __tok14 = atscode_separator_for_C()
val () = theAtextMap_insert_str ("__tok14", __tok14)

(*
string.atxt: 3033(line=152, offs=2) -- 3058(line=152, offs=27)
*)
val __tok15 = atscode_separator_for_C()
val () = theAtextMap_insert_str ("__tok15", __tok15)

(*
string.atxt: 3314(line=164, offs=2) -- 3339(line=164, offs=27)
*)
val __tok16 = atscode_separator_for_C()
val () = theAtextMap_insert_str ("__tok16", __tok16)

(*
string.atxt: 3504(line=173, offs=2) -- 3529(line=173, offs=27)
*)
val __tok17 = atscode_separator_for_C()
val () = theAtextMap_insert_str ("__tok17", __tok17)

(*
string.atxt: 4560(line=235, offs=2) -- 4585(line=235, offs=27)
*)
val __tok18 = atscode_separator_for_C()
val () = theAtextMap_insert_str ("__tok18", __tok18)

(*
string.atxt: 4884(line=250, offs=2) -- 4909(line=250, offs=27)
*)
val __tok19 = atscode_separator_for_C()
val () = theAtextMap_insert_str ("__tok19", __tok19)

(*
string.atxt: 4958(line=254, offs=2) -- 4983(line=254, offs=27)
*)
val __tok20 = atscode_separator_for_C()
val () = theAtextMap_insert_str ("__tok20", __tok20)

(*
string.atxt: 4986(line=256, offs=2) -- 5029(line=256, offs=45)
*)
val __tok21 = atscode_eof_strsub_for_C("#thisfilename$")
val () = theAtextMap_insert_str ("__tok21", __tok21)

(*
string.atxt: 5032(line=258, offs=1) -- 5113(line=261, offs=3)
*)

implement
main (argc, argv) = fprint_filsub (stdout_ref, "string_atxt.txt")

