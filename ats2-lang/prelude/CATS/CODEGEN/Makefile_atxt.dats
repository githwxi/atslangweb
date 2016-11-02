(*
Makefile.atxt: 1(line=1, offs=1) -- 176(line=11, offs=3)
*)

//
staload
STDIO = "libc/SATS/stdio.sats"
staload TIME = "libc/SATS/time.sats"
//
dynload "libatsdoc/dynloadall.dats"
//
staload "libatsdoc/SATS/libatsdoc_atext.sats"
//

(*
Makefile.atxt: 178(line=12, offs=1) -- 684(line=34, offs=3)
*)


fun make_entry
  (nm: string): atext = let
//
val ent = sprintf ("\
all:: %s.cats\n\
%s.cats: %s_atxt.exe ; ./$< > $@\n\
%s_atxt.exe: %s_atxt.dats\n\
	$(ATSCC) $(GCFLAG) -o $@ %s_atxt.dats -latsdoc\n\
%s_atxt.dats: %s.atxt\n\
	$(ATSDOC) --outcode $@ -i %s.atxt > %s_atxt.txt\n\
clean:: ; $(RMF) %s_atxt.exe\n\
cleanall:: ; $(RMF) %s.cats\n\
", @(nm, nm, nm, nm, nm, nm, nm, nm, nm, nm, nm, nm)
) // end of [val]
//
val ent = string_of_strptr (ent)
in
  atext_strcst (ent)
end // end of [make_entry]


(*
Makefile.atxt: 901(line=60, offs=2) -- 921(line=60, offs=22)
*)
val __tok1 = make_entry("basics")
val () = theAtextMap_insert_str ("__tok1", __tok1)

(*
Makefile.atxt: 924(line=62, offs=2) -- 945(line=62, offs=23)
*)
val __tok2 = make_entry("integer")
val () = theAtextMap_insert_str ("__tok2", __tok2)

(*
Makefile.atxt: 947(line=63, offs=2) -- 968(line=63, offs=23)
*)
val __tok3 = make_entry("pointer")
val () = theAtextMap_insert_str ("__tok3", __tok3)

(*
Makefile.atxt: 971(line=65, offs=2) -- 997(line=65, offs=28)
*)
val __tok4 = make_entry("integer_size")
val () = theAtextMap_insert_str ("__tok4", __tok4)

(*
Makefile.atxt: 999(line=66, offs=2) -- 1025(line=66, offs=28)
*)
val __tok5 = make_entry("integer_long")
val () = theAtextMap_insert_str ("__tok5", __tok5)

(*
Makefile.atxt: 1027(line=67, offs=2) -- 1054(line=67, offs=29)
*)
val __tok6 = make_entry("integer_short")
val () = theAtextMap_insert_str ("__tok6", __tok6)

(*
Makefile.atxt: 1057(line=69, offs=2) -- 1075(line=69, offs=20)
*)
val __tok7 = make_entry("bool")
val () = theAtextMap_insert_str ("__tok7", __tok7)

(*
Makefile.atxt: 1077(line=70, offs=2) -- 1095(line=70, offs=20)
*)
val __tok8 = make_entry("char")
val () = theAtextMap_insert_str ("__tok8", __tok8)

(*
Makefile.atxt: 1097(line=71, offs=2) -- 1116(line=71, offs=21)
*)
val __tok9 = make_entry("float")
val () = theAtextMap_insert_str ("__tok9", __tok9)

(*
Makefile.atxt: 1118(line=72, offs=2) -- 1138(line=72, offs=22)
*)
val __tok10 = make_entry("string")
val () = theAtextMap_insert_str ("__tok10", __tok10)

(*
Makefile.atxt: 1140(line=73, offs=2) -- 1160(line=73, offs=22)
*)
val __tok11 = make_entry("strptr")
val () = theAtextMap_insert_str ("__tok11", __tok11)

(*
Makefile.atxt: 1162(line=74, offs=2) -- 1187(line=74, offs=27)
*)
val __tok12 = make_entry("integer_ptr")
val () = theAtextMap_insert_str ("__tok12", __tok12)

(*
Makefile.atxt: 1189(line=75, offs=2) -- 1216(line=75, offs=29)
*)
val __tok13 = make_entry("integer_fixed")
val () = theAtextMap_insert_str ("__tok13", __tok13)

(*
Makefile.atxt: 1219(line=77, offs=2) -- 1239(line=77, offs=22)
*)
val __tok14 = make_entry("memory")
val () = theAtextMap_insert_str ("__tok14", __tok14)

(*
Makefile.atxt: 1242(line=79, offs=2) -- 1263(line=79, offs=23)
*)
val __tok15 = make_entry("fprintf")
val () = theAtextMap_insert_str ("__tok15", __tok15)

(*
Makefile.atxt: 1265(line=80, offs=2) -- 1286(line=80, offs=23)
*)
val __tok16 = make_entry("filebas")
val () = theAtextMap_insert_str ("__tok16", __tok16)

(*
Makefile.atxt: 1289(line=82, offs=2) -- 1307(line=82, offs=20)
*)
val __tok17 = make_entry("list")
val () = theAtextMap_insert_str ("__tok17", __tok17)

(*
Makefile.atxt: 1309(line=83, offs=2) -- 1330(line=83, offs=23)
*)
val __tok18 = make_entry("list_vt")
val () = theAtextMap_insert_str ("__tok18", __tok18)

(*
Makefile.atxt: 1332(line=84, offs=2) -- 1352(line=84, offs=22)
*)
val __tok19 = make_entry("option")
val () = theAtextMap_insert_str ("__tok19", __tok19)

(*
Makefile.atxt: 1354(line=85, offs=2) -- 1373(line=85, offs=21)
*)
val __tok20 = make_entry("array")
val () = theAtextMap_insert_str ("__tok20", __tok20)

(*
Makefile.atxt: 1375(line=86, offs=2) -- 1397(line=86, offs=24)
*)
val __tok21 = make_entry("arrayptr")
val () = theAtextMap_insert_str ("__tok21", __tok21)

(*
Makefile.atxt: 1399(line=87, offs=2) -- 1421(line=87, offs=24)
*)
val __tok22 = make_entry("arrayref")
val () = theAtextMap_insert_str ("__tok22", __tok22)

(*
Makefile.atxt: 1423(line=88, offs=2) -- 1443(line=88, offs=22)
*)
val __tok23 = make_entry("matrix")
val () = theAtextMap_insert_str ("__tok23", __tok23)

(*
Makefile.atxt: 1445(line=89, offs=2) -- 1468(line=89, offs=25)
*)
val __tok24 = make_entry("matrixptr")
val () = theAtextMap_insert_str ("__tok24", __tok24)

(*
Makefile.atxt: 1470(line=90, offs=2) -- 1493(line=90, offs=25)
*)
val __tok25 = make_entry("matrixref")
val () = theAtextMap_insert_str ("__tok25", __tok25)

(*
Makefile.atxt: 1687(line=107, offs=1) -- 1770(line=110, offs=3)
*)

implement
main (argc, argv) = fprint_filsub (stdout_ref, "Makefile_atxt.txt")

