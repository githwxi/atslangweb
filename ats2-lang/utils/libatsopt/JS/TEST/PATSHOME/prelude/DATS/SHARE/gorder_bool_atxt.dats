(*
gorder_bool.atxt: 1(line=1, offs=1) -- 259(line=8, offs=3)
*)

#define ATSCODEFORMAT "txt"
#if (ATSCODEFORMAT == "txt")
#include "utils/atsdoc/HATS/postiatsatxt.hats"
#endif // end of [ATSCCODEFORMAT]
val _thisfilename = atext_strcst"gorder_bool.dats"
val () = theAtextMap_insert_str ("thisfilename", _thisfilename)

(*
gorder_bool.atxt: 264(line=10, offs=2) -- 280(line=10, offs=18)
*)
val __tok1 = atscode_banner()
val () = theAtextMap_insert_str ("__tok1", __tok1)

(*
gorder_bool.atxt: 282(line=11, offs=2) -- 305(line=11, offs=25)
*)
val __tok2 = atscode_copyright_GPL()
val () = theAtextMap_insert_str ("__tok2", __tok2)

(*
gorder_bool.atxt: 308(line=13, offs=2) -- 327(line=13, offs=21)
*)
val __tok3 = atscode_separator()
val () = theAtextMap_insert_str ("__tok3", __tok3)

(*
gorder_bool.atxt: 418(line=18, offs=25) -- 429(line=18, offs=36)
*)
val __tok4 = timestamp()
val () = theAtextMap_insert_str ("__tok4", __tok4)

(*
gorder_bool.atxt: 435(line=21, offs=2) -- 454(line=21, offs=21)
*)
val __tok5 = atscode_separator()
val () = theAtextMap_insert_str ("__tok5", __tok5)

(*
gorder_bool.atxt: 457(line=23, offs=2) -- 485(line=23, offs=30)
*)
val __tok6 = atscode_author("Hongwei Xi")
val () = theAtextMap_insert_str ("__tok6", __tok6)

(*
gorder_bool.atxt: 487(line=24, offs=2) -- 535(line=24, offs=50)
*)
val __tok7 = atscode_authoremail("hwxi AT cs DOT bu DOT edu")
val () = theAtextMap_insert_str ("__tok7", __tok7)

(*
gorder_bool.atxt: 537(line=25, offs=2) -- 570(line=25, offs=35)
*)
val __tok8 = atscode_start_time("March, 2013")
val () = theAtextMap_insert_str ("__tok8", __tok8)

(*
gorder_bool.atxt: 573(line=27, offs=2) -- 592(line=27, offs=21)
*)
val __tok9 = atscode_separator()
val () = theAtextMap_insert_str ("__tok9", __tok9)

(*
gorder_bool.atxt: 651(line=32, offs=2) -- 688(line=32, offs=39)
*)
val __tok10 = atscode_eof_strsub("#thisfilename$")
val () = theAtextMap_insert_str ("__tok10", __tok10)

(*
gorder_bool.atxt: 691(line=34, offs=1) -- 779(line=38, offs=3)
*)

implement
main (argc, argv) =
  fprint_filsub (stdout_ref, "gorder_bool_atxt.txt")

