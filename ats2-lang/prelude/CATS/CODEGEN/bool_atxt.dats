(*
bool.atxt: 1(line=1, offs=1) -- 252(line=8, offs=3)
*)

#define ATSCODEFORMAT "txt"
#if (ATSCODEFORMAT == "txt")
#include "utils/atsdoc/HATS/postiatsatxt.hats"
#endif // end of [ATSCCODEFORMAT]
val _thisfilename = atext_strcst"bool.cats"
val () = theAtextMap_insert_str ("thisfilename", _thisfilename)

(*
bool.atxt: 257(line=10, offs=2) -- 279(line=10, offs=24)
*)
val __tok1 = atscode_banner_for_C()
val () = theAtextMap_insert_str ("__tok1", __tok1)

(*
bool.atxt: 281(line=11, offs=2) -- 310(line=11, offs=31)
*)
val __tok2 = atscode_copyright_GPL_for_C()
val () = theAtextMap_insert_str ("__tok2", __tok2)

(*
bool.atxt: 313(line=13, offs=2) -- 338(line=13, offs=27)
*)
val __tok3 = atscode_separator_for_C()
val () = theAtextMap_insert_str ("__tok3", __tok3)

(*
bool.atxt: 422(line=18, offs=25) -- 433(line=18, offs=36)
*)
val __tok4 = timestamp()
val () = theAtextMap_insert_str ("__tok4", __tok4)

(*
bool.atxt: 439(line=21, offs=2) -- 464(line=21, offs=27)
*)
val __tok5 = atscode_separator_for_C()
val () = theAtextMap_insert_str ("__tok5", __tok5)

(*
bool.atxt: 470(line=24, offs=2) -- 498(line=24, offs=30)
*)
val __tok6 = atscode_author("Hongwei Xi")
val () = theAtextMap_insert_str ("__tok6", __tok6)

(*
bool.atxt: 500(line=25, offs=2) -- 548(line=25, offs=50)
*)
val __tok7 = atscode_authoremail("hwxi AT cs DOT bu DOT edu")
val () = theAtextMap_insert_str ("__tok7", __tok7)

(*
bool.atxt: 550(line=26, offs=2) -- 586(line=26, offs=38)
*)
val __tok8 = atscode_start_time("February, 2012")
val () = theAtextMap_insert_str ("__tok8", __tok8)

(*
bool.atxt: 592(line=29, offs=2) -- 617(line=29, offs=27)
*)
val __tok9 = atscode_separator_for_C()
val () = theAtextMap_insert_str ("__tok9", __tok9)

(*
bool.atxt: 689(line=34, offs=2) -- 714(line=34, offs=27)
*)
val __tok10 = atscode_separator_for_C()
val () = theAtextMap_insert_str ("__tok10", __tok10)

(*
bool.atxt: 914(line=45, offs=2) -- 939(line=45, offs=27)
*)
val __tok11 = atscode_separator_for_C()
val () = theAtextMap_insert_str ("__tok11", __tok11)

(*
bool.atxt: 1005(line=50, offs=2) -- 1030(line=50, offs=27)
*)
val __tok12 = atscode_separator_for_C()
val () = theAtextMap_insert_str ("__tok12", __tok12)

(*
bool.atxt: 2003(line=85, offs=2) -- 2028(line=85, offs=27)
*)
val __tok13 = atscode_separator_for_C()
val () = theAtextMap_insert_str ("__tok13", __tok13)

(*
bool.atxt: 2291(line=97, offs=2) -- 2316(line=97, offs=27)
*)
val __tok14 = atscode_separator_for_C()
val () = theAtextMap_insert_str ("__tok14", __tok14)

(*
bool.atxt: 3870(line=156, offs=2) -- 3895(line=156, offs=27)
*)
val __tok15 = atscode_separator_for_C()
val () = theAtextMap_insert_str ("__tok15", __tok15)

(*
bool.atxt: 4171(line=168, offs=2) -- 4196(line=168, offs=27)
*)
val __tok16 = atscode_separator_for_C()
val () = theAtextMap_insert_str ("__tok16", __tok16)

(*
bool.atxt: 4336(line=178, offs=2) -- 4361(line=178, offs=27)
*)
val __tok17 = atscode_separator_for_C()
val () = theAtextMap_insert_str ("__tok17", __tok17)

(*
bool.atxt: 4408(line=182, offs=2) -- 4433(line=182, offs=27)
*)
val __tok18 = atscode_separator_for_C()
val () = theAtextMap_insert_str ("__tok18", __tok18)

(*
bool.atxt: 4436(line=184, offs=2) -- 4479(line=184, offs=45)
*)
val __tok19 = atscode_eof_strsub_for_C("#thisfilename$")
val () = theAtextMap_insert_str ("__tok19", __tok19)

(*
bool.atxt: 4482(line=186, offs=1) -- 4561(line=189, offs=3)
*)

implement
main (argc, argv) = fprint_filsub (stdout_ref, "bool_atxt.txt")

