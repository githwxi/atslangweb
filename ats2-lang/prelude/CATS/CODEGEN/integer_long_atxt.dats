(*
integer_long.atxt: 1(line=1, offs=1) -- 323(line=20, offs=3)
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
#include "prelude_CATS_atext.hats"
//
val
_thisfilename = atext_strcst"integer_long.cats"
val ((*void*)) =
theAtextMap_insert_str ("thisfilename", _thisfilename)
//

(*
integer_long.atxt: 328(line=22, offs=2) -- 350(line=22, offs=24)
*)
val __tok1 = atscode_banner_for_C()
val () = theAtextMap_insert_str ("__tok1", __tok1)

(*
integer_long.atxt: 352(line=23, offs=2) -- 381(line=23, offs=31)
*)
val __tok2 = atscode_copyright_GPL_for_C()
val () = theAtextMap_insert_str ("__tok2", __tok2)

(*
integer_long.atxt: 384(line=25, offs=2) -- 409(line=25, offs=27)
*)
val __tok3 = atscode_separator_for_C()
val () = theAtextMap_insert_str ("__tok3", __tok3)

(*
integer_long.atxt: 415(line=28, offs=2) -- 443(line=28, offs=30)
*)
val __tok4 = atscode_author("Hongwei Xi")
val () = theAtextMap_insert_str ("__tok4", __tok4)

(*
integer_long.atxt: 445(line=29, offs=2) -- 487(line=29, offs=44)
*)
val __tok5 = atscode_authoremail("gmhwxiATgmailDOTcom")
val () = theAtextMap_insert_str ("__tok5", __tok5)

(*
integer_long.atxt: 489(line=30, offs=2) -- 524(line=30, offs=37)
*)
val __tok6 = atscode_start_time("January, 2013")
val () = theAtextMap_insert_str ("__tok6", __tok6)

(*
integer_long.atxt: 530(line=33, offs=2) -- 555(line=33, offs=27)
*)
val __tok7 = atscode_separator_for_C()
val () = theAtextMap_insert_str ("__tok7", __tok7)

(*
integer_long.atxt: 647(line=38, offs=25) -- 658(line=38, offs=36)
*)
val __tok8 = timestamp()
val () = theAtextMap_insert_str ("__tok8", __tok8)

(*
integer_long.atxt: 664(line=41, offs=2) -- 689(line=41, offs=27)
*)
val __tok9 = atscode_separator_for_C()
val () = theAtextMap_insert_str ("__tok9", __tok9)

(*
integer_long.atxt: 777(line=46, offs=2) -- 802(line=46, offs=27)
*)
val __tok10 = atscode_separator_for_C()
val () = theAtextMap_insert_str ("__tok10", __tok10)

(*
integer_long.atxt: 1079(line=58, offs=2) -- 1104(line=58, offs=27)
*)
val __tok11 = atscode_separator_for_C()
val () = theAtextMap_insert_str ("__tok11", __tok11)

(*
integer_long.atxt: 1520(line=75, offs=2) -- 1545(line=75, offs=27)
*)
val __tok12 = atscode_separator_for_C()
val () = theAtextMap_insert_str ("__tok12", __tok12)

(*
integer_long.atxt: 2279(line=102, offs=2) -- 2304(line=102, offs=27)
*)
val __tok13 = atscode_separator_for_C()
val () = theAtextMap_insert_str ("__tok13", __tok13)

(*
integer_long.atxt: 2893(line=114, offs=2) -- 2918(line=114, offs=27)
*)
val __tok14 = atscode_separator_for_C()
val () = theAtextMap_insert_str ("__tok14", __tok14)

(*
integer_long.atxt: 2973(line=118, offs=2) -- 2998(line=118, offs=27)
*)
val __tok15 = atscode_separator_for_C()
val () = theAtextMap_insert_str ("__tok15", __tok15)

(*
integer_long.atxt: 3001(line=120, offs=2) -- 3044(line=120, offs=45)
*)
val __tok16 = atscode_eof_strsub_for_C("#thisfilename$")
val () = theAtextMap_insert_str ("__tok16", __tok16)

(*
integer_long.atxt: 3047(line=122, offs=1) -- 3132(line=126, offs=3)
*)

implement
main(argc, argv) =
fprint_filsub(stdout_ref, "integer_long_atxt.txt")

