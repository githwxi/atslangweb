(*
char.atxt: 1(line=1, offs=1) -- 252(line=8, offs=3)
*)

#define ATSCODEFORMAT "txt"
#if (ATSCODEFORMAT == "txt")
#include "utils/atsdoc/HATS/postiatsatxt.hats"
#endif // end of [ATSCCODEFORMAT]
val _thisfilename = atext_strcst"char.cats"
val () = theAtextMap_insert_str ("thisfilename", _thisfilename)

(*
char.atxt: 257(line=10, offs=2) -- 279(line=10, offs=24)
*)
val __tok1 = atscode_banner_for_C()
val () = theAtextMap_insert_str ("__tok1", __tok1)

(*
char.atxt: 281(line=11, offs=2) -- 310(line=11, offs=31)
*)
val __tok2 = atscode_copyright_GPL_for_C()
val () = theAtextMap_insert_str ("__tok2", __tok2)

(*
char.atxt: 313(line=13, offs=2) -- 338(line=13, offs=27)
*)
val __tok3 = atscode_separator_for_C()
val () = theAtextMap_insert_str ("__tok3", __tok3)

(*
char.atxt: 422(line=18, offs=25) -- 433(line=18, offs=36)
*)
val __tok4 = timestamp()
val () = theAtextMap_insert_str ("__tok4", __tok4)

(*
char.atxt: 439(line=21, offs=2) -- 464(line=21, offs=27)
*)
val __tok5 = atscode_separator_for_C()
val () = theAtextMap_insert_str ("__tok5", __tok5)

(*
char.atxt: 470(line=24, offs=2) -- 498(line=24, offs=30)
*)
val __tok6 = atscode_author("Hongwei Xi")
val () = theAtextMap_insert_str ("__tok6", __tok6)

(*
char.atxt: 500(line=25, offs=2) -- 548(line=25, offs=50)
*)
val __tok7 = atscode_authoremail("hwxi AT cs DOT bu DOT edu")
val () = theAtextMap_insert_str ("__tok7", __tok7)

(*
char.atxt: 550(line=26, offs=2) -- 586(line=26, offs=38)
*)
val __tok8 = atscode_start_time("February, 2012")
val () = theAtextMap_insert_str ("__tok8", __tok8)

(*
char.atxt: 592(line=29, offs=2) -- 617(line=29, offs=27)
*)
val __tok9 = atscode_separator_for_C()
val () = theAtextMap_insert_str ("__tok9", __tok9)

(*
char.atxt: 689(line=34, offs=2) -- 714(line=34, offs=27)
*)
val __tok10 = atscode_separator_for_C()
val () = theAtextMap_insert_str ("__tok10", __tok10)

(*
char.atxt: 738(line=38, offs=2) -- 763(line=38, offs=27)
*)
val __tok11 = atscode_separator_for_C()
val () = theAtextMap_insert_str ("__tok11", __tok11)

(*
char.atxt: 1114(line=56, offs=2) -- 1139(line=56, offs=27)
*)
val __tok12 = atscode_separator_for_C()
val () = theAtextMap_insert_str ("__tok12", __tok12)

(*
char.atxt: 1556(line=75, offs=2) -- 1581(line=75, offs=27)
*)
val __tok13 = atscode_separator_for_C()
val () = theAtextMap_insert_str ("__tok13", __tok13)

(*
char.atxt: 2126(line=98, offs=2) -- 2151(line=98, offs=27)
*)
val __tok14 = atscode_separator_for_C()
val () = theAtextMap_insert_str ("__tok14", __tok14)

(*
char.atxt: 2578(line=117, offs=2) -- 2603(line=117, offs=27)
*)
val __tok15 = atscode_separator_for_C()
val () = theAtextMap_insert_str ("__tok15", __tok15)

(*
char.atxt: 2931(line=133, offs=2) -- 2956(line=133, offs=27)
*)
val __tok16 = atscode_separator_for_C()
val () = theAtextMap_insert_str ("__tok16", __tok16)

(*
char.atxt: 3477(line=155, offs=2) -- 3502(line=155, offs=27)
*)
val __tok17 = atscode_separator_for_C()
val () = theAtextMap_insert_str ("__tok17", __tok17)

(*
char.atxt: 3670(line=166, offs=2) -- 3695(line=166, offs=27)
*)
val __tok18 = atscode_separator_for_C()
val () = theAtextMap_insert_str ("__tok18", __tok18)

(*
char.atxt: 3863(line=177, offs=2) -- 3888(line=177, offs=27)
*)
val __tok19 = atscode_separator_for_C()
val () = theAtextMap_insert_str ("__tok19", __tok19)

(*
char.atxt: 4059(line=188, offs=2) -- 4084(line=188, offs=27)
*)
val __tok20 = atscode_separator_for_C()
val () = theAtextMap_insert_str ("__tok20", __tok20)

(*
char.atxt: 4086(line=190, offs=1) -- 4747(line=223, offs=3)
*)

fun
fun_char_cmp0_decl (
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
val ent = sprintf
("\
ATSinline()
atstype_bool
atspre_%s_int_int
  (atstype_int i1, atstype_int i2) {
  return (i1 %s i2 ? atsbool_true : atsbool_false) ;
} // end of [atspre_%s_int_int]\n\
#define atspre_%s_char0_char0 atspre_%s_int_int
#define atspre_%s_char1_char1 atspre_%s_int_int
",
@(
 opr, fopr, opr, opr, opr, opr, opr
)
) // end of [sprintf] // end of [val]
//
in
  atext_strptr (ent)
end // end of [fun_char_cmp0_decl]

(*
char.atxt: 4752(line=225, offs=2) -- 4776(line=225, offs=26)
*)
val __tok21 = fun_char_cmp0_decl("lt")
val () = theAtextMap_insert_str ("__tok21", __tok21)

(*
char.atxt: 4778(line=226, offs=2) -- 4803(line=226, offs=27)
*)
val __tok22 = fun_char_cmp0_decl("lte")
val () = theAtextMap_insert_str ("__tok22", __tok22)

(*
char.atxt: 4805(line=227, offs=2) -- 4829(line=227, offs=26)
*)
val __tok23 = fun_char_cmp0_decl("gt")
val () = theAtextMap_insert_str ("__tok23", __tok23)

(*
char.atxt: 4831(line=228, offs=2) -- 4856(line=228, offs=27)
*)
val __tok24 = fun_char_cmp0_decl("gte")
val () = theAtextMap_insert_str ("__tok24", __tok24)

(*
char.atxt: 4858(line=229, offs=2) -- 4882(line=229, offs=26)
*)
val __tok25 = fun_char_cmp0_decl("eq")
val () = theAtextMap_insert_str ("__tok25", __tok25)

(*
char.atxt: 4884(line=230, offs=2) -- 4909(line=230, offs=27)
*)
val __tok26 = fun_char_cmp0_decl("neq")
val () = theAtextMap_insert_str ("__tok26", __tok26)

(*
char.atxt: 4912(line=232, offs=2) -- 4937(line=232, offs=27)
*)
val __tok27 = atscode_separator_for_C()
val () = theAtextMap_insert_str ("__tok27", __tok27)

(*
char.atxt: 5233(line=244, offs=2) -- 5258(line=244, offs=27)
*)
val __tok28 = atscode_separator_for_C()
val () = theAtextMap_insert_str ("__tok28", __tok28)

(*
char.atxt: 5506(line=251, offs=2) -- 5531(line=251, offs=27)
*)
val __tok29 = atscode_separator_for_C()
val () = theAtextMap_insert_str ("__tok29", __tok29)

(*
char.atxt: 5675(line=256, offs=2) -- 5700(line=256, offs=27)
*)
val __tok30 = atscode_separator_for_C()
val () = theAtextMap_insert_str ("__tok30", __tok30)

(*
char.atxt: 5731(line=260, offs=2) -- 5756(line=260, offs=27)
*)
val __tok31 = atscode_separator_for_C()
val () = theAtextMap_insert_str ("__tok31", __tok31)

(*
char.atxt: 5758(line=262, offs=1) -- 6445(line=294, offs=3)
*)

fun
fun_uchar_cmp0_decl (
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
val ent = sprintf
("\
ATSinline()
atstype_bool
atspre_%s_uchar_uchar
  (atstype_uchar c1, atstype_uchar c2) {
  return (c1 %s c2 ? atsbool_true : atsbool_false) ;
} // end of [atspre_%s_uchar_uchar]\n\
#define atspre_%s_uchar0_uchar0 atspre_%s_uchar_uchar
#define atspre_%s_uchar1_uchar1 atspre_%s_uchar_uchar
", @(
 opr, fopr, opr, opr, opr, opr, opr
)
) // end of [sprintf] // end of [val]
//
in
  atext_strptr (ent)
end // end of [fun_uchar_cmp0_decl]

(*
char.atxt: 6450(line=296, offs=2) -- 6475(line=296, offs=27)
*)
val __tok32 = fun_uchar_cmp0_decl("lt")
val () = theAtextMap_insert_str ("__tok32", __tok32)

(*
char.atxt: 6477(line=297, offs=2) -- 6503(line=297, offs=28)
*)
val __tok33 = fun_uchar_cmp0_decl("lte")
val () = theAtextMap_insert_str ("__tok33", __tok33)

(*
char.atxt: 6505(line=298, offs=2) -- 6530(line=298, offs=27)
*)
val __tok34 = fun_uchar_cmp0_decl("gt")
val () = theAtextMap_insert_str ("__tok34", __tok34)

(*
char.atxt: 6532(line=299, offs=2) -- 6558(line=299, offs=28)
*)
val __tok35 = fun_uchar_cmp0_decl("gte")
val () = theAtextMap_insert_str ("__tok35", __tok35)

(*
char.atxt: 6560(line=300, offs=2) -- 6585(line=300, offs=27)
*)
val __tok36 = fun_uchar_cmp0_decl("eq")
val () = theAtextMap_insert_str ("__tok36", __tok36)

(*
char.atxt: 6587(line=301, offs=2) -- 6613(line=301, offs=28)
*)
val __tok37 = fun_uchar_cmp0_decl("neq")
val () = theAtextMap_insert_str ("__tok37", __tok37)

(*
char.atxt: 6616(line=303, offs=2) -- 6641(line=303, offs=27)
*)
val __tok38 = atscode_separator_for_C()
val () = theAtextMap_insert_str ("__tok38", __tok38)

(*
char.atxt: 6955(line=314, offs=2) -- 6980(line=314, offs=27)
*)
val __tok39 = atscode_separator_for_C()
val () = theAtextMap_insert_str ("__tok39", __tok39)

(*
char.atxt: 6982(line=316, offs=1) -- 7387(line=339, offs=3)
*)

fun
fun_isX_decl (
  isX: string
) : atext = let
//
val ent = sprintf
("\
ATSinline()
atstype_bool
atspre_%s_int
  (atstype_int c) {
  return (%s(c) ? atsbool_true : atsbool_false) ;
} // end of [atspre_%s_int]\n\
#define atspre_%s_char(c) atspre_%s_int((atstype_int)(c))\
", @(
 isX, isX, isX, isX, isX
)
) // end of [sprintf] // end of [val]
//
in
  atext_strptr (ent)
end // end of [fun_isX_decl]

(*
char.atxt: 7392(line=341, offs=2) -- 7415(line=341, offs=25)
*)
val __tok40 = fun_isX_decl("isalpha")
val () = theAtextMap_insert_str ("__tok40", __tok40)

(*
char.atxt: 7417(line=342, offs=2) -- 7440(line=342, offs=25)
*)
val __tok41 = fun_isX_decl("isalnum")
val () = theAtextMap_insert_str ("__tok41", __tok41)

(*
char.atxt: 7443(line=344, offs=2) -- 7466(line=344, offs=25)
*)
val __tok42 = fun_isX_decl("isascii")
val () = theAtextMap_insert_str ("__tok42", __tok42)

(*
char.atxt: 7469(line=346, offs=2) -- 7492(line=346, offs=25)
*)
val __tok43 = fun_isX_decl("isblank")
val () = theAtextMap_insert_str ("__tok43", __tok43)

(*
char.atxt: 7494(line=347, offs=2) -- 7517(line=347, offs=25)
*)
val __tok44 = fun_isX_decl("isspace")
val () = theAtextMap_insert_str ("__tok44", __tok44)

(*
char.atxt: 7520(line=349, offs=2) -- 7543(line=349, offs=25)
*)
val __tok45 = fun_isX_decl("iscntrl")
val () = theAtextMap_insert_str ("__tok45", __tok45)

(*
char.atxt: 7546(line=351, offs=2) -- 7569(line=351, offs=25)
*)
val __tok46 = fun_isX_decl("isdigit")
val () = theAtextMap_insert_str ("__tok46", __tok46)

(*
char.atxt: 7571(line=352, offs=2) -- 7595(line=352, offs=26)
*)
val __tok47 = fun_isX_decl("isxdigit")
val () = theAtextMap_insert_str ("__tok47", __tok47)

(*
char.atxt: 7598(line=354, offs=2) -- 7621(line=354, offs=25)
*)
val __tok48 = fun_isX_decl("isgraph")
val () = theAtextMap_insert_str ("__tok48", __tok48)

(*
char.atxt: 7623(line=355, offs=2) -- 7646(line=355, offs=25)
*)
val __tok49 = fun_isX_decl("isprint")
val () = theAtextMap_insert_str ("__tok49", __tok49)

(*
char.atxt: 7648(line=356, offs=2) -- 7671(line=356, offs=25)
*)
val __tok50 = fun_isX_decl("ispunct")
val () = theAtextMap_insert_str ("__tok50", __tok50)

(*
char.atxt: 7674(line=358, offs=2) -- 7697(line=358, offs=25)
*)
val __tok51 = fun_isX_decl("islower")
val () = theAtextMap_insert_str ("__tok51", __tok51)

(*
char.atxt: 7699(line=359, offs=2) -- 7722(line=359, offs=25)
*)
val __tok52 = fun_isX_decl("isupper")
val () = theAtextMap_insert_str ("__tok52", __tok52)

(*
char.atxt: 7725(line=361, offs=2) -- 7750(line=361, offs=27)
*)
val __tok53 = atscode_separator_for_C()
val () = theAtextMap_insert_str ("__tok53", __tok53)

(*
char.atxt: 7786(line=365, offs=2) -- 7811(line=365, offs=27)
*)
val __tok54 = atscode_separator_for_C()
val () = theAtextMap_insert_str ("__tok54", __tok54)

(*
char.atxt: 8166(line=385, offs=2) -- 8191(line=385, offs=27)
*)
val __tok55 = atscode_separator_for_C()
val () = theAtextMap_insert_str ("__tok55", __tok55)

(*
char.atxt: 8601(line=405, offs=2) -- 8626(line=405, offs=27)
*)
val __tok56 = atscode_separator_for_C()
val () = theAtextMap_insert_str ("__tok56", __tok56)

(*
char.atxt: 8986(line=421, offs=2) -- 9011(line=421, offs=27)
*)
val __tok57 = atscode_separator_for_C()
val () = theAtextMap_insert_str ("__tok57", __tok57)

(*
char.atxt: 9187(line=428, offs=2) -- 9212(line=428, offs=27)
*)
val __tok58 = atscode_separator_for_C()
val () = theAtextMap_insert_str ("__tok58", __tok58)

(*
char.atxt: 9259(line=432, offs=2) -- 9284(line=432, offs=27)
*)
val __tok59 = atscode_separator_for_C()
val () = theAtextMap_insert_str ("__tok59", __tok59)

(*
char.atxt: 9287(line=434, offs=2) -- 9330(line=434, offs=45)
*)
val __tok60 = atscode_eof_strsub_for_C("#thisfilename$")
val () = theAtextMap_insert_str ("__tok60", __tok60)

(*
char.atxt: 9333(line=436, offs=1) -- 9412(line=439, offs=3)
*)

implement
main (argc, argv) = fprint_filsub (stdout_ref, "char_atxt.txt")

