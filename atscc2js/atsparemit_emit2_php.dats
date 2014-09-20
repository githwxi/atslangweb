(* ****** ****** *)
//
// ATS-parse-emit-php
//
(* ****** ****** *)
//
// HX-2014-08-28: start
//
(* ****** ****** *)
//
#include
"share/atspre_staload.hats"
//
(* ****** ****** *)
//
staload
UN = "prelude/SATS/unsafe.sats"
//
(* ****** ****** *)
//
staload "./atsparemit.sats"
staload "./atsparemit_syntax.sats"
//
(* ****** ****** *)
//
staload "./atsparemit_emit.sats"
//
(* ****** ****** *)
//
staload "./atsparemit_typedef.dats"
//
(* ****** ****** *)
//
extern
fun
emit_local : emit_type (i0de)
//
implement
emit_local
  (out, name) = (
  emit_DOLLAR (out); emit_i0de (out, name)
) (* end of [emit_local] *)
//
extern
fun
emit_global : emit_type (i0de)
//
implement
emit_global
  (out, name) = (
  emit_text (out, "$GLOBALS['");
  emit_i0de (out, name); emit_text (out, "']")
) (* end of [emit_global] *)
//
(* ****** ****** *)
//
extern
fun
emit_tmpdeclst_initize
(
  out: FILEref, tds: tmpdeclst
) : void // end-of-fun
//
implement
emit_tmpdeclst_initize
  (out, tds) = let
//
fun auxlst
(
  out: FILEref, tds: tmpdeclst
) : void = let
in
//
case+ tds of
| list_nil () => ()
| list_cons (td, tds) =>
  (
    case+ td.tmpdec_node of
    | TMPDECnone
        (tmp) => auxlst (out, tds)
    | TMPDECsome
        (tmp, _) => let
        val () =
        emit_nspc (out, 2(*ind*))
        val () = (
          emit_text (out, "// "); emit_tmpvar (out, tmp); emit_ENDL (out)
        ) (* end of [val] *)
      in
        auxlst (out, tds)
      end // end of [TMPDECsome]
  ) (* end of [list_cons] *)
//
end // end of [auxlist]
//
in
  auxlst (out, tds)
end // end of [emit_tmpdeclst_initize]
//
(* ****** ****** *)
//
extern
fun
the_tmpdeclst_get (): tmpdeclst
extern
fun
the_tmpdeclst_set (tds: tmpdeclst): void
//
(* ****** ****** *)
//
local
//
val
the_tmpdeclst = ref<tmpdeclst> (list_nil)
//
in (* in-of-local *)

implement
the_tmpdeclst_get () = !the_tmpdeclst
implement
the_tmpdeclst_set (xs) = !the_tmpdeclst := xs

end // end of [local]

(* ****** ****** *)
//
extern
fun emit2_instr
  (out: FILEref, ind: int, ins: instr) : void
//
extern
fun emit2_instr_ln
  (out: FILEref, ind: int, ins: instr) : void
//
extern
fun emit2_instrlst
  (out: FILEref, ind: int, inss: instrlst) : void
//
(* ****** ****** *)
//
extern
fun emit2_ATSfunbodyseq
  (out: FILEref, ind: int, ins: instr) : void
//
extern
fun emit2_ATSINSmove_con1
  (out: FILEref, ind: int, ins: instr) : void
//
extern
fun emit2_ATSINSmove_boxrec
  (out: FILEref, ind: int, ins: instr) : void
//
extern
fun emit2_ATSINSmove_delay
  (out: FILEref, ind: int, ins: instr) : void
//
(* ****** ****** *)
//
// HX-2014-08:
// this one should not be used for
// emitting multiple-line instructions
//
implement
emit_instr
  (out, ins) = emit2_instr (out, 0(*ind*), ins)
//
(* ****** ****** *)

implement
emit2_instr
  (out, ind, ins0) = let
in
//
case+
ins0.instr_node of
//
| ATSif
  (
    d0e, inss, inssopt
  ) => let
    val () = emit_nspc (out, ind)
    val () = emit_text (out, "if")
    val () = emit_LPAREN (out)
    val () = emit_d0exp (out, d0e)
    val () = emit_RPAREN (out)
    val () = emit_text (out, " {\n")
    val () = emit2_instrlst (out, ind+2, inss)
  in
    case+ inssopt of
    | None _ =>
      {
        val () = emit_nspc (out, ind)
        val ((*closing*)) = emit_text (out, "} // endif")
      } (* end of [None] *)
    | Some (inss) =>
      {
        val () = emit_nspc (out, ind)
        val () = emit_text (out, "} else {\n")
        val () = emit2_instrlst (out, ind+2, inss)
        val () = emit_nspc (out, ind)
        val ((*closing*)) = emit_text (out, "} // endif")
      } (* end of [Some] *)
  end // end of [ATSif]
//
| ATSifthen (d0e, inss) =>
  {
//
    val-list_cons (ins, _) = inss
//
    val () = emit_nspc (out, ind)
    val () = emit_text (out, "if(")
    val () = emit_d0exp (out, d0e)
    val () = emit_text (out, ") ")
    val () = emit_instr (out, ins)
  }
//
| ATSifnthen (d0e, inss) =>
  {
//
    val-list_cons (ins, _) = inss
//
    val () = emit_nspc (out, ind)
    val () = emit_text (out, "if(!")
    val () = emit_d0exp (out, d0e)
    val ((*closing*)) = emit_text (out, ") ")
    val () = emit_instr (out, ins)
  }
//
| ATSbranchseq (inss) =>
  {
//
    val () = emit_nspc (out, ind)
    val () = emit_text (out, "// ATSbranchseq_beg")
//
    val () = emit_ENDL (out)
    val () = emit2_instrlst (out, ind, inss)
//
    val () = emit_nspc (out, ind)
    val () = emit_text (out, "break;\n")
//
    val () = emit_nspc (out, ind)
    val () = emit_text (out, "// ATSbranchseq_end")
//
  } (* end of [ATSbranchseq] *)
//
| ATScaseofseq (inss) =>
  {
//
    val () = emit_nspc (out, ind)
    val () = emit_text (out, "// ATScaseofseq_beg")
    val () = emit_ENDL (out)
    val () = emit_nspc (out, ind)
    val () = emit_text (out, "do {\n")
//
    val () = emit2_instrlst (out, ind+2, inss)
//
    val () = emit_nspc (out, ind)
    val () = emit_text (out, "} while(0);\n")
    val () = emit_nspc (out, ind)
    val () = emit_text (out, "// ATScaseofseq_end")
//
  } (* end of [ATScaseofseq] *)
//
| ATSreturn (tmp) =>
  {
    val () = emit_nspc (out, ind)
    val () = (
      emit_text (out, "return "); emit_tmpvar (out, tmp)
    ) (* end of [val] *)
    val () = emit_SEMICOLON (out)
  }
| ATSreturn_void (tmp) =>
  {
    val () = emit_nspc (out, ind)
    val () = emit_text (out, "return/*_void*/")
    val () = emit_SEMICOLON (out)
  }
//
| ATSINSlab (lab) =>
  {
    val () = emit_nspc (out, ind)
    val () = (
      emit_label (out, lab); emit_COLON (out)
    ) (* end of [val] *)
  } (* end of [ATSINSlab] *)
//
| ATSINSgoto (lab) =>
  {
    val () = emit_nspc (out, ind)
    val () = (
      emit_text (out, "goto "); emit_label (out, lab)
    ) (* end of [val] *)
    val () = emit_SEMICOLON (out)
  } (* end of [ATSINSgoto] *)
//
| ATSINSflab (flab) =>
  {
    val () = emit_nspc (out, ind)
    val () = (
      emit_label (out, flab); emit_COLON (out)
    ) (* end of [val] *)
  } (* end of [ATSINSflab] *)
//
| ATSINSfgoto (flab) =>
  {
    val () = emit_nspc (out, ind)
    val () = (
      emit_text (out, "goto "); emit_label (out, flab)
    ) (* end of [val] *)
    val () = emit_SEMICOLON (out)
  } (* end of [ATSINSfgoto] *)
//
| ATSINSmove (tmp, d0e) =>
  {
    val () = emit_nspc (out, ind)
    val () = emit_tmpvar (out, tmp)
    val () = emit_text (out, " = ")
    val () = emit_d0exp (out, d0e)
    val () = emit_SEMICOLON (out)
  } (* end of [ATSINSmove] *)
//
| ATSINSmove_void (tmp, d0e) =>
  {
    val () = emit_nspc (out, ind)
    val () = (
      case+ d0e.d0exp_node of
      | ATSempty _ =>
          emit_text (out, "// ATSINSmove_void")
        // end of [ATSempty]
      | _ (*non-ATSempty*) => emit_d0exp (out, d0e)
    ) : void // end of [val]
    val () = emit_SEMICOLON (out)
  } (* end of [ATSINSmove_void] *)
//
| ATSINSmove_nil (tmp) =>
  {
    val () = emit_nspc (out, ind)
    val () = emit_tmpvar (out, tmp)
    val () = emit_text (out, " = ")
    val () = emit_text (out, "null")
    val () = emit_SEMICOLON (out)
  }
| ATSINSmove_con0 (tmp, tag) =>
  {
    val () = emit_nspc (out, ind)
    val () = emit_tmpvar (out, tmp)
    val () = emit_text (out, " = ")
    val () = emit_PMVint (out, tag)
    val () = emit_SEMICOLON (out)
  }
//
| ATSINSmove_con1 _ =>
    emit2_ATSINSmove_con1 (out, ind, ins0)
//
| ATSINSmove_boxrec _ =>
    emit2_ATSINSmove_boxrec (out, ind, ins0)
//
| ATSINSmove_delay _ =>
    emit2_ATSINSmove_delay (out, ind, ins0)
//
| ATStailcalseq (inss) =>
  {
    val () = emit_nspc (out, ind)
    val () = emit_text (out, "// ATStailcalseq_beg")
    val () = emit_ENDL (out)
    val () = emit2_instrlst (out, ind, inss)
    val () = emit_nspc (out, ind)
    val () = emit_text (out, "// ATStailcalseq_end")
  } (* end of [ATStailcalseq] *)
//
| ATSINSmove_tlcal (tmp, d0e) =>
  {
    val () = emit_nspc (out, ind)
    val () = emit_tmpvar (out, tmp)
    val () = emit_text (out, " = ")
    val () = emit_d0exp (out, d0e)  
    val () = emit_SEMICOLON (out)
  } (* end of [ATSINSmove_tlcal] *)
//
| ATSINSargmove_tlcal (tmp1, tmp2) =>
  {
    val () = emit_nspc (out, ind)
    val () = emit_tmpvar (out, tmp1)
    val () = emit_text (out, " = ")
    val () = emit_tmpvar (out, tmp2)
    val () = emit_SEMICOLON (out)
  } (* end of [ATSINSargmove_tlcal] *)
//
| ATSINSextvar_assign (ext, d0e_r) =>
  {
    val () = emit_nspc (out, ind)
    val () = emit_d0exp (out, ext)
    val () = emit_text (out, " = ")
    val () = emit_d0exp (out, d0e_r)
    val () = emit_SEMICOLON (out)
  }
| ATSINSdyncst_valbind (d2c, d0e_r) =>
  {
    val () = emit_nspc (out, ind)
    val () = emit_i0de (out, d2c)
    val () = emit_text (out, " = ")
    val () = emit_d0exp (out, d0e_r)
    val () = emit_SEMICOLON (out)
  }
//
| ATSdynload (dummy) =>
  {
    val () = emit_nspc (out, ind)
    val () = emit_text (out, "// ATSdynload()")
  }
//
| ATSdynloadset (flag) =>
  {
    val () = emit_nspc (out, ind)
    val () =
    (
      emit_global (out, flag); emit_text (out, " = 1 ; // dynflag is set")
    )
  }
//
| ATSdynloadflag_sta (flag) =>
  {
    val () = emit_nspc (out, ind)
    val () = fprint! (out, "// ATSdynloadflag_sta(", flag, ")")
  }
| ATSdynloadflag_ext (flag) =>
  {
    val () = emit_nspc (out, ind)
    val () = fprint! (out, "// ATSdynloadflag_ext(", flag, ")")
  }
//
| _ (*rest-of-instr*) =>
  {
    val () = emit_nspc (out, ind)
    val ((*error*)) = fprint! (out, "UNRECOGNIZED-INSTRUCTION: ", ins0)
  }
//
end // end of [emit2_instr]

(* ****** ****** *)

implement
emit2_instr_ln
  (out, ind, ins) =
(
  emit2_instr (out, ind, ins); emit_ENDL (out)
) (* end of [emit2_instr_ln] *)

(* ****** ****** *)

implement
emit2_instrlst
(
  out, ind, inss
) = (
//
case+ inss of
| list_nil () => ()
| list_cons (ins, inss) =>
  {
    val () = emit2_instr_ln (out, ind, ins)
    val () = emit2_instrlst (out, ind, inss)
  }
//
) (* end of [emit2_instrlst] *)

(* ****** ****** *)

implement
emit2_ATSfunbodyseq
  (out, ind, ins) = let
//
val-ATSfunbodyseq (inss) = ins.instr_node
//
in
  emit2_instrlst (out, ind, inss)
end // end of [emit2_ATS2funbodyseq]

(* ****** ****** *)

implement
emit2_ATSINSmove_con1
  (out, ind, ins0) = let
//
fun
getarglst
(
  inss: instrlst
) : d0explst =
(
case+ inss of
| list_nil () => list_nil ()
| list_cons (ins, inss) => let
    val-ATSINSstore_con1_ofs (_, _, _, d0e) = ins.instr_node
    val d0es = getarglst (inss)
  in
    list_cons (d0e, d0es)
  end // end of [list_cons]
)
//
val-ATSINSmove_con1 (inss) = ins0.instr_node
//
val-list_cons (ins, inss) = inss
val-ATSINSmove_con1_new (tmp, _) = ins.instr_node  
//
var opt: tokenopt = None()
//
val inss =
(
case+ inss of
| list_nil () => inss
| list_cons (ins, inss2) =>
  (
    case+ ins.instr_node of
    | ATSINSstore_con1_tag
        (tmp, tag) => let
        val () = opt := Some(tag) in inss2
      end // end of [ATSINSstore_con1_tag]
    | _ (*non-ATSINSstore_con1_tag*) => inss
  )
) : instrlst
//
val d0es = getarglst (inss)
val () = emit_nspc (out, ind)
val () = emit_tmpvar (out, tmp)
val () = emit_text (out, " = ")
val () = emit_text (out, "array(")
val () =
(
case+ opt of
| None () => ()
| Some (tag) => emit_PMVint (out, tag)
) : void // end of [val]
val () =
(
case+ opt of
| None _ => emit_d0explst (out, d0es)
| Some _ => emit_d0explst_1 (out, d0es)
) : void // end of [val]
//
val ((*closing*)) = emit_text (out, ");")
//
in
  // nothing
end // end of [emit2_ATSINSmove_con1]

(* ****** ****** *)

implement
emit2_ATSINSmove_boxrec
  (out, ind, ins0) = let
//
fun
getarglst
(
  inss: instrlst
) : d0explst =
(
case+ inss of
| list_nil () => list_nil ()
| list_cons (ins, inss) => let
    val-ATSINSstore_boxrec_ofs (_, _, _, d0e) = ins.instr_node
    val d0es = getarglst (inss)
  in
    list_cons (d0e, d0es)
  end // end of [list_cons]
)
//
val-ATSINSmove_boxrec (inss) = ins0.instr_node
//
val-list_cons (ins, inss) = inss
val-ATSINSmove_boxrec_new (tmp, _) = ins.instr_node  
//
val d0es = getarglst (inss)
//
val () = emit_nspc (out, ind)
val () = emit_tmpvar (out, tmp)
val () = emit_text (out, " = ")
val () = emit_text (out, "array(")
val () = emit_d0explst (out, d0es)
val ((*closing*)) = emit_text (out, ");")
//
in
  // nothing
end // end of [emit2_ATSINSmove_boxrec]

(* ****** ****** *)

implement
emit2_ATSINSmove_delay
  (out, ind, ins0) = let
//
val-ATSINSmove_delay(tmp, s0e, thunk) = ins0.instr_node
//
val () = emit_nspc (out, ind)
val () = emit_tmpvar (out, tmp)
val () = emit_text (out, " = ")
val () = emit_text (out, "array(")
val () =
(
  emit_int (out, 0); emit_text (out, ", "); emit_d0exp (out, thunk)
) (* end of [val] *)
val ((*closing*)) = emit_text (out, ");")
//
in
  // nothing
end // end of [emit2_ATSINSmove_delay]

(* ****** ****** *)

#define
ATSEXTCODE_BEG "/* ATSextcode_beg() */"
#define
ATSEXTCODE_END "/* ATSextcode_end() */"

(* ****** ****** *)

implement
emit_d0ecl
  (out, d0c) = let
in
//
case+
d0c.d0ecl_node of
//
| D0Cinclude _ => ()
//
| D0Cifdef _ => ()
| D0Cifndef _ => ()
//
| D0Ctypedef (id, def) =>
    typedef_insert (id.i0de_sym, def)
  // end of [D0Ctypedef]
//
| D0Cassume (id) =>
  {
    val () = emit_ENDL (out)
    val () =
      emit_text (out, "// ATSassume(")
    val () = (
      emit_i0de (out, id); emit_text (out, ")\n")
    ) (* end of [val] *)
  }
//
| D0Cdyncst_mac _ => ()
| D0Cdyncst_extfun _ => ()
//
| D0Cextcode (toks) =>
  {
    val () = emit_ENDL (out)
    val () =
      emit_text (out, ATSEXTCODE_BEG)
    val () = emit_extcode (out, toks) // HX: verbatim output
    val () =
      emit_text (out, ATSEXTCODE_END)
    val ((*void*)) = emit_newline (out)
  } (* end of [D0Cextcode] *)
//
| D0Cstatmp
    (tmp, opt) =>
  {
    val () = emit_ENDL (out)
    val () = (
      case+ opt of
      | Some _ => () | None () => emit_text(out, "/*\n")
    ) (* end of [val] *)
    val () = (
      emit_text (out, "// "); emit_tmpvar (out, tmp); emit_ENDL (out)
    ) (* end of [val] *)
    val () = (
      case+ opt of
      | Some _ => () | None () => emit_text(out, "*/\n")
    ) (* end of [val] *)
  } (* end of [D0Cstatmp] *)
//
| D0Cfundecl
    (fk, f0d) => emit_f0decl (out, f0d)
//
| D0Cclosurerize
  (
    fl, env, arg, res
  ) => emit_closurerize (out, fl, env, arg, res)
//
| D0Cdynloadflag_init (flag) =>
  (
    emit_text (out, "// dynloadflag_init\n");
    emit_global (out, flag); emit_text (out, " = 0;\n")
  )
//
end // end of [emit_d0ecl]

(* ****** ****** *)
//
extern
fun emit_f0arg : emit_type (f0arg)
extern
fun emit_f0marg : emit_type (f0marg)
extern
fun emit_f0head : emit_type (f0head)
//
extern
fun emit_f0body : emit_type (f0body)
extern
fun emit_f0body_0 : emit_type (f0body)
//
(* ****** ****** *)

implement
emit_f0arg
  (out, f0a) = let
in
//
case+
f0a.f0arg_node of
//
| F0ARGnone _ => emit_text (out, "*ERROR**")
| F0ARGsome (arg, s0e) => emit_tmpvar (out, arg)
//
end // end of [emit_f0arg]

(* ****** ****** *)

implement
emit_f0marg
  (out, f0ma) = let
//
fun
loop
(
  out: FILEref, f0as: f0arglst, i: int
) : void =
(
case+ f0as of
| list_nil () => ()
| list_cons (f0a, f0as) => let
    val () =
      if i > 0 then emit_text (out, ", ")
    // end of [val]
  in
    emit_f0arg (out, f0a); loop (out, f0as, i+1)
  end // end of [list_cons]
)
//
in
  loop (out, f0ma.f0marg_node, 0)
end // end of [emit_f0marg]

(* ****** ****** *)

implement
emit_f0head
  (out, fhd) = let
//
val f0as =
  f0head_get_f0arglst (fhd)
//
in
//
case+
fhd.f0head_node of
| F0HEAD
    (fid, f0ma, res) =>
  {
//
    val () = emit_i0de (out, fid)
//
    val () = emit_LPAREN (out)
    val () = emit_f0marg (out, f0ma)
    val () = emit_RPAREN (out)
//
  } (* end of [F0HEAD] *)
//
end // end of [emit_f0head]

(* ****** ****** *)

implement
emit_f0body
  (out, fbody) = let
//
val tmpdecs =
  f0body_get_tmpdeclst (fbody)
val inss_body =
  f0body_get_bdinstrlst (fbody)
//
val () = the_tmpdeclst_set (tmpdecs)
//
val () = emit_text (out, "{\n")
//
val () = emit_text (out, "/*\n")
//
val () =
  emit_tmpdeclst_initize (out, tmpdecs)
//
val () = emit_text (out, "*/\n")
//
val ((*main*)) = emit_f0body_0 (out, fbody)
//
val ((*closing*)) =
  emit_text (out, "} // end-of-function\n")
//
in
  // nothing
end (* end of [emit_f0body] *)

(* ****** ****** *)

implement
emit_f0body_0
  (out, fbody) = let
//
fun
auxlst
(
  out: FILEref, inss: instrlst, i: int
) : void =
(
case+ inss of
//
| list_nil () => ()
//
| list_cons
    (ins0, inss1) => let
    val-list_cons(ins1, inss2) = inss1
    val () = if i > 0 then emit_text (out, "//\n")
    val () = emit2_ATSfunbodyseq (out, 2(*ind*), ins0)
    val ((*return*)) = emit2_instr_ln (out, 2(*ind*), ins1)
  in
    auxlst (out, inss2, i+1)
  end // end of [list_cons]
//
) (* end of [auxlst] *)
//
in
//
case+
fbody.f0body_node of
//
| F0BODY (tds, inss) =>
  {
    val () = auxlst (out, inss, 0(*i*))
  }
//
end // end of [emit_f0body_0]

(* ****** ****** *)

implement
emit_f0decl
  (out, fdec) = let
in
//
case+
fdec.f0decl_node of
| F0DECLnone (fhd) => () 
| F0DECLsome (fhd, fbody) =>
  {
    val () = emit_ENDL (out)
    val () = emit_text (out, "function")
    val () = emit_ENDL (out)
    val () = emit_f0head (out, fhd)
    val () = emit_ENDL (out)
    val () = emit_f0body (out, fbody)
    val () = emit_newline (out)
  } (* end of [F0DECLsome] *)
//
end // end of [emit_f0decl]

(* ****** ****** *)

implement
emit_toplevel
  (out, d0cs) = let
//
fun
loop
(
  out: FILEref, d0cs: d0eclist
) : void =
(
//
case+ d0cs of
| list_nil () => ()
| list_cons
    (d0c, d0cs) => let
    val () =
      emit_d0ecl (out, d0c) in loop (out, d0cs)
    // end of [val]
  end // end of [list_cons]
//
)
//
in
  loop (out, d0cs)
end // end of [emit_toplevel]

(* ****** ****** *)

(* end of [atsparemit_emit2_php.dats] *)
