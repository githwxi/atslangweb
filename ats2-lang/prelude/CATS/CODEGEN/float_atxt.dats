(*
float.atxt: 1(line=1, offs=1) -- 253(line=8, offs=3)
*)

#define ATSCODEFORMAT "txt"
#if (ATSCODEFORMAT == "txt")
#include "utils/atsdoc/HATS/postiatsatxt.hats"
#endif // end of [ATSCCODEFORMAT]
val _thisfilename = atext_strcst"float.cats"
val () = theAtextMap_insert_str ("thisfilename", _thisfilename)

(*
float.atxt: 258(line=10, offs=2) -- 280(line=10, offs=24)
*)
val __tok1 = atscode_banner_for_C()
val () = theAtextMap_insert_str ("__tok1", __tok1)

(*
float.atxt: 282(line=11, offs=2) -- 311(line=11, offs=31)
*)
val __tok2 = atscode_copyright_GPL_for_C()
val () = theAtextMap_insert_str ("__tok2", __tok2)

(*
float.atxt: 314(line=13, offs=2) -- 339(line=13, offs=27)
*)
val __tok3 = atscode_separator_for_C()
val () = theAtextMap_insert_str ("__tok3", __tok3)

(*
float.atxt: 424(line=18, offs=25) -- 435(line=18, offs=36)
*)
val __tok4 = timestamp()
val () = theAtextMap_insert_str ("__tok4", __tok4)

(*
float.atxt: 441(line=21, offs=2) -- 466(line=21, offs=27)
*)
val __tok5 = atscode_separator_for_C()
val () = theAtextMap_insert_str ("__tok5", __tok5)

(*
float.atxt: 472(line=24, offs=2) -- 500(line=24, offs=30)
*)
val __tok6 = atscode_author("Hongwei Xi")
val () = theAtextMap_insert_str ("__tok6", __tok6)

(*
float.atxt: 502(line=25, offs=2) -- 550(line=25, offs=50)
*)
val __tok7 = atscode_authoremail("hwxi AT cs DOT bu DOT edu")
val () = theAtextMap_insert_str ("__tok7", __tok7)

(*
float.atxt: 552(line=26, offs=2) -- 585(line=26, offs=35)
*)
val __tok8 = atscode_start_time("April, 2012")
val () = theAtextMap_insert_str ("__tok8", __tok8)

(*
float.atxt: 591(line=29, offs=2) -- 616(line=29, offs=27)
*)
val __tok9 = atscode_separator_for_C()
val () = theAtextMap_insert_str ("__tok9", __tok9)

(*
float.atxt: 690(line=34, offs=2) -- 715(line=34, offs=27)
*)
val __tok10 = atscode_separator_for_C()
val () = theAtextMap_insert_str ("__tok10", __tok10)

(*
float.atxt: 1170(line=54, offs=2) -- 1195(line=54, offs=27)
*)
val __tok11 = atscode_separator_for_C()
val () = theAtextMap_insert_str ("__tok11", __tok11)

(*
float.atxt: 1842(line=82, offs=2) -- 1867(line=82, offs=27)
*)
val __tok12 = atscode_separator_for_C()
val () = theAtextMap_insert_str ("__tok12", __tok12)

(*
float.atxt: 2295(line=112, offs=2) -- 2320(line=112, offs=27)
*)
val __tok13 = atscode_separator_for_C()
val () = theAtextMap_insert_str ("__tok13", __tok13)

(*
float.atxt: 2476(line=121, offs=2) -- 2501(line=121, offs=27)
*)
val __tok14 = atscode_separator_for_C()
val () = theAtextMap_insert_str ("__tok14", __tok14)

(*
float.atxt: 3639(line=163, offs=2) -- 3664(line=163, offs=27)
*)
val __tok15 = atscode_separator_for_C()
val () = theAtextMap_insert_str ("__tok15", __tok15)

(*
float.atxt: 3666(line=165, offs=1) -- 4202(line=195, offs=3)
*)

fun
fun_g0float_aop_decl (
  opr: string, knd: string
) : atext = let
//
val fopr = (
  case+ opr of
  | "add" => "+"
  | "sub" => "-"
  | "mul" => "*"
  | "div" => "/"
  | _(*rest*) => opr
) : string // end of [val]
//
val ent = sprintf
("\
ATSinline()
atstype_%s
atspre_g0float_%s_%s
  (atstype_%s f1, atstype_%s f2) { return (f1 %s f2) ; }
// end of [atspre_g0float_%s_%s]\n\
", @(
  knd, opr, knd, knd, knd, fopr, opr, knd
)
) // end of [sprintf] // end of [val]
//
in
  atext_strptr (ent)
end // end of [fun_g0float_aop_decl]

(*
float.atxt: 4208(line=197, offs=2) -- 4244(line=197, offs=38)
*)
val __tok16 = fun_g0float_aop_decl("add", "float")
val () = theAtextMap_insert_str ("__tok16", __tok16)

(*
float.atxt: 4247(line=198, offs=2) -- 4283(line=198, offs=38)
*)
val __tok17 = fun_g0float_aop_decl("sub", "float")
val () = theAtextMap_insert_str ("__tok17", __tok17)

(*
float.atxt: 4286(line=199, offs=2) -- 4322(line=199, offs=38)
*)
val __tok18 = fun_g0float_aop_decl("mul", "float")
val () = theAtextMap_insert_str ("__tok18", __tok18)

(*
float.atxt: 4325(line=200, offs=2) -- 4361(line=200, offs=38)
*)
val __tok19 = fun_g0float_aop_decl("div", "float")
val () = theAtextMap_insert_str ("__tok19", __tok19)

(*
float.atxt: 4367(line=202, offs=2) -- 4404(line=202, offs=39)
*)
val __tok20 = fun_g0float_aop_decl("add", "double")
val () = theAtextMap_insert_str ("__tok20", __tok20)

(*
float.atxt: 4407(line=203, offs=2) -- 4444(line=203, offs=39)
*)
val __tok21 = fun_g0float_aop_decl("sub", "double")
val () = theAtextMap_insert_str ("__tok21", __tok21)

(*
float.atxt: 4447(line=204, offs=2) -- 4484(line=204, offs=39)
*)
val __tok22 = fun_g0float_aop_decl("mul", "double")
val () = theAtextMap_insert_str ("__tok22", __tok22)

(*
float.atxt: 4487(line=205, offs=2) -- 4524(line=205, offs=39)
*)
val __tok23 = fun_g0float_aop_decl("div", "double")
val () = theAtextMap_insert_str ("__tok23", __tok23)

(*
float.atxt: 4530(line=207, offs=2) -- 4568(line=207, offs=40)
*)
val __tok24 = fun_g0float_aop_decl("add", "ldouble")
val () = theAtextMap_insert_str ("__tok24", __tok24)

(*
float.atxt: 4571(line=208, offs=2) -- 4609(line=208, offs=40)
*)
val __tok25 = fun_g0float_aop_decl("sub", "ldouble")
val () = theAtextMap_insert_str ("__tok25", __tok25)

(*
float.atxt: 4612(line=209, offs=2) -- 4650(line=209, offs=40)
*)
val __tok26 = fun_g0float_aop_decl("mul", "ldouble")
val () = theAtextMap_insert_str ("__tok26", __tok26)

(*
float.atxt: 4653(line=210, offs=2) -- 4691(line=210, offs=40)
*)
val __tok27 = fun_g0float_aop_decl("div", "ldouble")
val () = theAtextMap_insert_str ("__tok27", __tok27)

(*
float.atxt: 5253(line=229, offs=2) -- 5278(line=229, offs=27)
*)
val __tok28 = atscode_separator_for_C()
val () = theAtextMap_insert_str ("__tok28", __tok28)

(*
float.atxt: 5280(line=231, offs=1) -- 5867(line=261, offs=3)
*)

fun
fun_g0float_cmp_decl (
  opr: string, knd: string
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
val ent = sprintf
("\
ATSinline()
atstype_bool
atspre_g0float_%s_%s
  (atstype_%s f1, atstype_%s f2) {
  return (f1 %s f2 ? atsbool_true : atsbool_false) ;
} // end of [atspre_g0float_%s_%s]\n\
", @(
  opr, knd, knd, knd, fopr, opr, knd
)
) // end of [sprintf] // end of [val]
//
in
  atext_strptr (ent)
end // end of [fun_g0float_cmp_decl]

(*
float.atxt: 5873(line=263, offs=2) -- 5908(line=263, offs=37)
*)
val __tok29 = fun_g0float_cmp_decl("lt", "float")
val () = theAtextMap_insert_str ("__tok29", __tok29)

(*
float.atxt: 5911(line=264, offs=2) -- 5947(line=264, offs=38)
*)
val __tok30 = fun_g0float_cmp_decl("lte", "float")
val () = theAtextMap_insert_str ("__tok30", __tok30)

(*
float.atxt: 5950(line=265, offs=2) -- 5985(line=265, offs=37)
*)
val __tok31 = fun_g0float_cmp_decl("gt", "float")
val () = theAtextMap_insert_str ("__tok31", __tok31)

(*
float.atxt: 5988(line=266, offs=2) -- 6024(line=266, offs=38)
*)
val __tok32 = fun_g0float_cmp_decl("gte", "float")
val () = theAtextMap_insert_str ("__tok32", __tok32)

(*
float.atxt: 6027(line=267, offs=2) -- 6062(line=267, offs=37)
*)
val __tok33 = fun_g0float_cmp_decl("eq", "float")
val () = theAtextMap_insert_str ("__tok33", __tok33)

(*
float.atxt: 6065(line=268, offs=2) -- 6101(line=268, offs=38)
*)
val __tok34 = fun_g0float_cmp_decl("neq", "float")
val () = theAtextMap_insert_str ("__tok34", __tok34)

(*
float.atxt: 6107(line=270, offs=2) -- 6143(line=270, offs=38)
*)
val __tok35 = fun_g0float_cmp_decl("lt", "double")
val () = theAtextMap_insert_str ("__tok35", __tok35)

(*
float.atxt: 6146(line=271, offs=2) -- 6183(line=271, offs=39)
*)
val __tok36 = fun_g0float_cmp_decl("lte", "double")
val () = theAtextMap_insert_str ("__tok36", __tok36)

(*
float.atxt: 6186(line=272, offs=2) -- 6222(line=272, offs=38)
*)
val __tok37 = fun_g0float_cmp_decl("gt", "double")
val () = theAtextMap_insert_str ("__tok37", __tok37)

(*
float.atxt: 6225(line=273, offs=2) -- 6262(line=273, offs=39)
*)
val __tok38 = fun_g0float_cmp_decl("gte", "double")
val () = theAtextMap_insert_str ("__tok38", __tok38)

(*
float.atxt: 6265(line=274, offs=2) -- 6301(line=274, offs=38)
*)
val __tok39 = fun_g0float_cmp_decl("eq", "double")
val () = theAtextMap_insert_str ("__tok39", __tok39)

(*
float.atxt: 6304(line=275, offs=2) -- 6341(line=275, offs=39)
*)
val __tok40 = fun_g0float_cmp_decl("neq", "double")
val () = theAtextMap_insert_str ("__tok40", __tok40)

(*
float.atxt: 6347(line=277, offs=2) -- 6384(line=277, offs=39)
*)
val __tok41 = fun_g0float_cmp_decl("lt", "ldouble")
val () = theAtextMap_insert_str ("__tok41", __tok41)

(*
float.atxt: 6387(line=278, offs=2) -- 6425(line=278, offs=40)
*)
val __tok42 = fun_g0float_cmp_decl("lte", "ldouble")
val () = theAtextMap_insert_str ("__tok42", __tok42)

(*
float.atxt: 6428(line=279, offs=2) -- 6465(line=279, offs=39)
*)
val __tok43 = fun_g0float_cmp_decl("gt", "ldouble")
val () = theAtextMap_insert_str ("__tok43", __tok43)

(*
float.atxt: 6468(line=280, offs=2) -- 6506(line=280, offs=40)
*)
val __tok44 = fun_g0float_cmp_decl("gte", "ldouble")
val () = theAtextMap_insert_str ("__tok44", __tok44)

(*
float.atxt: 6509(line=281, offs=2) -- 6546(line=281, offs=39)
*)
val __tok45 = fun_g0float_cmp_decl("eq", "ldouble")
val () = theAtextMap_insert_str ("__tok45", __tok45)

(*
float.atxt: 6549(line=282, offs=2) -- 6587(line=282, offs=40)
*)
val __tok46 = fun_g0float_cmp_decl("neq", "ldouble")
val () = theAtextMap_insert_str ("__tok46", __tok46)

(*
float.atxt: 6593(line=284, offs=2) -- 6618(line=284, offs=27)
*)
val __tok47 = atscode_separator_for_C()
val () = theAtextMap_insert_str ("__tok47", __tok47)

(*
float.atxt: 7269(line=316, offs=2) -- 7294(line=316, offs=27)
*)
val __tok48 = atscode_separator_for_C()
val () = theAtextMap_insert_str ("__tok48", __tok48)

(*
float.atxt: 8295(line=350, offs=2) -- 8320(line=350, offs=27)
*)
val __tok49 = atscode_separator_for_C()
val () = theAtextMap_insert_str ("__tok49", __tok49)

(*
float.atxt: 8322(line=352, offs=1) -- 8861(line=380, offs=3)
*)

fun
fun_aop_int_g0float_decl (
  opr: string, knd: string
) : atext = let
//
val fopr = (
  case+ opr of
  | "add" => "+" | "sub" => "-"
  | "mul" => "*" | "div" => "/"
  | _ => opr
) : string // end of [val]
//
val ent = sprintf
("\
ATSinline()
atstype_%s
atspre_%s_int_%s
  (atstype_int i1, atstype_%s f2) { return (((atstype_%s)i1) %s f2) ; }
// end of [atspre_%s_int_%s]\n\
", @(
  knd, opr, knd, knd, knd, fopr, opr, knd
)
) // end of [sprintf] // end of [val]
//
in
  atext_strptr (ent)
end // end of [fun_aop_int_g0float_decl]

(*
float.atxt: 8867(line=382, offs=2) -- 8907(line=382, offs=42)
*)
val __tok50 = fun_aop_int_g0float_decl("add", "float")
val () = theAtextMap_insert_str ("__tok50", __tok50)

(*
float.atxt: 8910(line=383, offs=2) -- 8950(line=383, offs=42)
*)
val __tok51 = fun_aop_int_g0float_decl("sub", "float")
val () = theAtextMap_insert_str ("__tok51", __tok51)

(*
float.atxt: 8953(line=384, offs=2) -- 8993(line=384, offs=42)
*)
val __tok52 = fun_aop_int_g0float_decl("mul", "float")
val () = theAtextMap_insert_str ("__tok52", __tok52)

(*
float.atxt: 8996(line=385, offs=2) -- 9036(line=385, offs=42)
*)
val __tok53 = fun_aop_int_g0float_decl("div", "float")
val () = theAtextMap_insert_str ("__tok53", __tok53)

(*
float.atxt: 9042(line=387, offs=2) -- 9083(line=387, offs=43)
*)
val __tok54 = fun_aop_int_g0float_decl("add", "double")
val () = theAtextMap_insert_str ("__tok54", __tok54)

(*
float.atxt: 9086(line=388, offs=2) -- 9127(line=388, offs=43)
*)
val __tok55 = fun_aop_int_g0float_decl("sub", "double")
val () = theAtextMap_insert_str ("__tok55", __tok55)

(*
float.atxt: 9130(line=389, offs=2) -- 9171(line=389, offs=43)
*)
val __tok56 = fun_aop_int_g0float_decl("mul", "double")
val () = theAtextMap_insert_str ("__tok56", __tok56)

(*
float.atxt: 9174(line=390, offs=2) -- 9215(line=390, offs=43)
*)
val __tok57 = fun_aop_int_g0float_decl("div", "double")
val () = theAtextMap_insert_str ("__tok57", __tok57)

(*
float.atxt: 9221(line=392, offs=2) -- 9263(line=392, offs=44)
*)
val __tok58 = fun_aop_int_g0float_decl("add", "ldouble")
val () = theAtextMap_insert_str ("__tok58", __tok58)

(*
float.atxt: 9266(line=393, offs=2) -- 9308(line=393, offs=44)
*)
val __tok59 = fun_aop_int_g0float_decl("sub", "ldouble")
val () = theAtextMap_insert_str ("__tok59", __tok59)

(*
float.atxt: 9311(line=394, offs=2) -- 9353(line=394, offs=44)
*)
val __tok60 = fun_aop_int_g0float_decl("mul", "ldouble")
val () = theAtextMap_insert_str ("__tok60", __tok60)

(*
float.atxt: 9356(line=395, offs=2) -- 9398(line=395, offs=44)
*)
val __tok61 = fun_aop_int_g0float_decl("div", "ldouble")
val () = theAtextMap_insert_str ("__tok61", __tok61)

(*
float.atxt: 9404(line=397, offs=2) -- 9429(line=397, offs=27)
*)
val __tok62 = atscode_separator_for_C()
val () = theAtextMap_insert_str ("__tok62", __tok62)

(*
float.atxt: 9431(line=399, offs=1) -- 9970(line=427, offs=3)
*)

fun
fun_aop_g0float_int_decl (
  opr: string, knd: string
) : atext = let
//
val fopr = (
  case+ opr of
  | "add" => "+" | "sub" => "-"
  | "mul" => "*" | "div" => "/"
  | _ => opr
) : string // end of [val]
//
val ent = sprintf
("\
ATSinline()
atstype_%s
atspre_%s_%s_int
  (atstype_%s f1, atstype_int i2) { return (f1 %s ((atstype_%s)i2)) ; }
// end of [atspre_%s_%s_int]\n\
", @(
  knd, opr, knd, knd, fopr, knd, opr, knd
)
) // end of [sprintf] // end of [val]
//
in
  atext_strptr (ent)
end // end of [fun_aop_g0float_int_decl]

(*
float.atxt: 9976(line=429, offs=2) -- 10016(line=429, offs=42)
*)
val __tok63 = fun_aop_g0float_int_decl("add", "float")
val () = theAtextMap_insert_str ("__tok63", __tok63)

(*
float.atxt: 10019(line=430, offs=2) -- 10059(line=430, offs=42)
*)
val __tok64 = fun_aop_g0float_int_decl("sub", "float")
val () = theAtextMap_insert_str ("__tok64", __tok64)

(*
float.atxt: 10062(line=431, offs=2) -- 10102(line=431, offs=42)
*)
val __tok65 = fun_aop_g0float_int_decl("mul", "float")
val () = theAtextMap_insert_str ("__tok65", __tok65)

(*
float.atxt: 10105(line=432, offs=2) -- 10145(line=432, offs=42)
*)
val __tok66 = fun_aop_g0float_int_decl("div", "float")
val () = theAtextMap_insert_str ("__tok66", __tok66)

(*
float.atxt: 10151(line=434, offs=2) -- 10192(line=434, offs=43)
*)
val __tok67 = fun_aop_g0float_int_decl("add", "double")
val () = theAtextMap_insert_str ("__tok67", __tok67)

(*
float.atxt: 10195(line=435, offs=2) -- 10236(line=435, offs=43)
*)
val __tok68 = fun_aop_g0float_int_decl("sub", "double")
val () = theAtextMap_insert_str ("__tok68", __tok68)

(*
float.atxt: 10239(line=436, offs=2) -- 10280(line=436, offs=43)
*)
val __tok69 = fun_aop_g0float_int_decl("mul", "double")
val () = theAtextMap_insert_str ("__tok69", __tok69)

(*
float.atxt: 10283(line=437, offs=2) -- 10324(line=437, offs=43)
*)
val __tok70 = fun_aop_g0float_int_decl("div", "double")
val () = theAtextMap_insert_str ("__tok70", __tok70)

(*
float.atxt: 10330(line=439, offs=2) -- 10372(line=439, offs=44)
*)
val __tok71 = fun_aop_g0float_int_decl("add", "ldouble")
val () = theAtextMap_insert_str ("__tok71", __tok71)

(*
float.atxt: 10375(line=440, offs=2) -- 10417(line=440, offs=44)
*)
val __tok72 = fun_aop_g0float_int_decl("sub", "ldouble")
val () = theAtextMap_insert_str ("__tok72", __tok72)

(*
float.atxt: 10420(line=441, offs=2) -- 10462(line=441, offs=44)
*)
val __tok73 = fun_aop_g0float_int_decl("mul", "ldouble")
val () = theAtextMap_insert_str ("__tok73", __tok73)

(*
float.atxt: 10465(line=442, offs=2) -- 10507(line=442, offs=44)
*)
val __tok74 = fun_aop_g0float_int_decl("div", "ldouble")
val () = theAtextMap_insert_str ("__tok74", __tok74)

(*
float.atxt: 10513(line=444, offs=2) -- 10538(line=444, offs=27)
*)
val __tok75 = atscode_separator_for_C()
val () = theAtextMap_insert_str ("__tok75", __tok75)

(*
float.atxt: 10586(line=448, offs=2) -- 10611(line=448, offs=27)
*)
val __tok76 = atscode_separator_for_C()
val () = theAtextMap_insert_str ("__tok76", __tok76)

(*
float.atxt: 10614(line=450, offs=2) -- 10657(line=450, offs=45)
*)
val __tok77 = atscode_eof_strsub_for_C("#thisfilename$")
val () = theAtextMap_insert_str ("__tok77", __tok77)

(*
float.atxt: 10659(line=452, offs=1) -- 10739(line=455, offs=3)
*)

implement
main (argc, argv) = fprint_filsub (stdout_ref, "float_atxt.txt")

