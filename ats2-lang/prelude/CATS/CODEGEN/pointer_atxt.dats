(*
pointer.atxt: 1(line=1, offs=1) -- 255(line=8, offs=3)
*)

#define ATSCODEFORMAT "txt"
#if (ATSCODEFORMAT == "txt")
#include "utils/atsdoc/HATS/postiatsatxt.hats"
#endif // end of [ATSCCODEFORMAT]
val _thisfilename = atext_strcst"pointer.cats"
val () = theAtextMap_insert_str ("thisfilename", _thisfilename)

(*
pointer.atxt: 260(line=10, offs=2) -- 282(line=10, offs=24)
*)
val __tok1 = atscode_banner_for_C()
val () = theAtextMap_insert_str ("__tok1", __tok1)

(*
pointer.atxt: 284(line=11, offs=2) -- 313(line=11, offs=31)
*)
val __tok2 = atscode_copyright_GPL_for_C()
val () = theAtextMap_insert_str ("__tok2", __tok2)

(*
pointer.atxt: 316(line=13, offs=2) -- 341(line=13, offs=27)
*)
val __tok3 = atscode_separator_for_C()
val () = theAtextMap_insert_str ("__tok3", __tok3)

(*
pointer.atxt: 428(line=18, offs=25) -- 439(line=18, offs=36)
*)
val __tok4 = timestamp()
val () = theAtextMap_insert_str ("__tok4", __tok4)

(*
pointer.atxt: 445(line=21, offs=2) -- 470(line=21, offs=27)
*)
val __tok5 = atscode_separator_for_C()
val () = theAtextMap_insert_str ("__tok5", __tok5)

(*
pointer.atxt: 476(line=24, offs=2) -- 504(line=24, offs=30)
*)
val __tok6 = atscode_author("Hongwei Xi")
val () = theAtextMap_insert_str ("__tok6", __tok6)

(*
pointer.atxt: 506(line=25, offs=2) -- 554(line=25, offs=50)
*)
val __tok7 = atscode_authoremail("hwxi AT cs DOT bu DOT edu")
val () = theAtextMap_insert_str ("__tok7", __tok7)

(*
pointer.atxt: 556(line=26, offs=2) -- 592(line=26, offs=38)
*)
val __tok8 = atscode_start_time("February, 2012")
val () = theAtextMap_insert_str ("__tok8", __tok8)

(*
pointer.atxt: 598(line=29, offs=2) -- 623(line=29, offs=27)
*)
val __tok9 = atscode_separator_for_C()
val () = theAtextMap_insert_str ("__tok9", __tok9)

(*
pointer.atxt: 701(line=34, offs=2) -- 726(line=34, offs=27)
*)
val __tok10 = atscode_separator_for_C()
val () = theAtextMap_insert_str ("__tok10", __tok10)

(*
pointer.atxt: 817(line=41, offs=2) -- 842(line=41, offs=27)
*)
val __tok11 = atscode_separator_for_C()
val () = theAtextMap_insert_str ("__tok11", __tok11)

(*
pointer.atxt: 911(line=47, offs=2) -- 936(line=47, offs=27)
*)
val __tok12 = atscode_separator_for_C()
val () = theAtextMap_insert_str ("__tok12", __tok12)

(*
pointer.atxt: 1461(line=67, offs=2) -- 1486(line=67, offs=27)
*)
val __tok13 = atscode_separator_for_C()
val () = theAtextMap_insert_str ("__tok13", __tok13)

(*
pointer.atxt: 1963(line=85, offs=2) -- 1988(line=85, offs=27)
*)
val __tok14 = atscode_separator_for_C()
val () = theAtextMap_insert_str ("__tok14", __tok14)

(*
pointer.atxt: 2238(line=95, offs=2) -- 2263(line=95, offs=27)
*)
val __tok15 = atscode_separator_for_C()
val () = theAtextMap_insert_str ("__tok15", __tok15)

(*
pointer.atxt: 2265(line=97, offs=1) -- 2925(line=128, offs=3)
*)

fun
fun_pointer_cmp0_decl (
  opr: string
) : atext = let
//
val fopr = (
  case+ opr of
  | "lt" => "<" | "lte" => "<="
  | "gt" => ">" | "gte" => ">="
  | "eq" => "==" | "neq" => "!="
  | _ => opr
) : string // end of [val]
//
val ent = sprintf ("\
ATSinline()
atstype_bool
atspre_%s_ptr_ptr
  (atstype_ptr p1, atstype_ptr p2) {
  return (p1 %s p2 ? atsbool_true : atsbool_false) ;
} // end of [atspre_%s_ptr_ptr]
#define atspre_%s_ptr0_ptr0 atspre_%s_ptr_ptr
#define atspre_%s_ptr1_ptr1 atspre_%s_ptr_ptr
", @(
 opr, fopr, opr, opr, opr, opr, opr
)
) // end of [sprintf] // end of [val]
//
in
  atext_strptr (ent)
end // end of [fun_pointer_cmp0_decl]

(*
pointer.atxt: 2930(line=130, offs=2) -- 2957(line=130, offs=29)
*)
val __tok16 = fun_pointer_cmp0_decl("lt")
val () = theAtextMap_insert_str ("__tok16", __tok16)

(*
pointer.atxt: 2959(line=131, offs=2) -- 2987(line=131, offs=30)
*)
val __tok17 = fun_pointer_cmp0_decl("lte")
val () = theAtextMap_insert_str ("__tok17", __tok17)

(*
pointer.atxt: 2989(line=132, offs=2) -- 3016(line=132, offs=29)
*)
val __tok18 = fun_pointer_cmp0_decl("gt")
val () = theAtextMap_insert_str ("__tok18", __tok18)

(*
pointer.atxt: 3018(line=133, offs=2) -- 3046(line=133, offs=30)
*)
val __tok19 = fun_pointer_cmp0_decl("gte")
val () = theAtextMap_insert_str ("__tok19", __tok19)

(*
pointer.atxt: 3048(line=134, offs=2) -- 3075(line=134, offs=29)
*)
val __tok20 = fun_pointer_cmp0_decl("eq")
val () = theAtextMap_insert_str ("__tok20", __tok20)

(*
pointer.atxt: 3077(line=135, offs=2) -- 3105(line=135, offs=30)
*)
val __tok21 = fun_pointer_cmp0_decl("neq")
val () = theAtextMap_insert_str ("__tok21", __tok21)

(*
pointer.atxt: 3431(line=150, offs=2) -- 3456(line=150, offs=27)
*)
val __tok22 = atscode_separator_for_C()
val () = theAtextMap_insert_str ("__tok22", __tok22)

(*
pointer.atxt: 4246(line=182, offs=2) -- 4271(line=182, offs=27)
*)
val __tok23 = atscode_separator_for_C()
val () = theAtextMap_insert_str ("__tok23", __tok23)

(*
pointer.atxt: 4424(line=189, offs=2) -- 4449(line=189, offs=27)
*)
val __tok24 = atscode_separator_for_C()
val () = theAtextMap_insert_str ("__tok24", __tok24)

(*
pointer.atxt: 4602(line=196, offs=2) -- 4627(line=196, offs=27)
*)
val __tok25 = atscode_separator_for_C()
val () = theAtextMap_insert_str ("__tok25", __tok25)

(*
pointer.atxt: 4777(line=202, offs=2) -- 4802(line=202, offs=27)
*)
val __tok26 = atscode_separator_for_C()
val () = theAtextMap_insert_str ("__tok26", __tok26)

(*
pointer.atxt: 4898(line=207, offs=2) -- 4923(line=207, offs=27)
*)
val __tok27 = atscode_separator_for_C()
val () = theAtextMap_insert_str ("__tok27", __tok27)

(*
pointer.atxt: 5094(line=218, offs=2) -- 5119(line=218, offs=27)
*)
val __tok28 = atscode_separator_for_C()
val () = theAtextMap_insert_str ("__tok28", __tok28)

(*
pointer.atxt: 5169(line=222, offs=2) -- 5194(line=222, offs=27)
*)
val __tok29 = atscode_separator_for_C()
val () = theAtextMap_insert_str ("__tok29", __tok29)

(*
pointer.atxt: 5197(line=224, offs=2) -- 5240(line=224, offs=45)
*)
val __tok30 = atscode_eof_strsub_for_C("#thisfilename$")
val () = theAtextMap_insert_str ("__tok30", __tok30)

(*
pointer.atxt: 5243(line=226, offs=1) -- 5325(line=229, offs=3)
*)

implement
main (argc, argv) = fprint_filsub (stdout_ref, "pointer_atxt.txt")

