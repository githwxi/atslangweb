/*
**
** The JavaScript code is generated by atscc2js
** The starting compilation time is: 2017-5-18: 22h:18m
**
*/

/* ATSextcode_beg() */
//
function
Patsoptaas_getWelcomeMessage()
{
//
var
msg = "\
(*\n\
** Welcome to\n\
** Patsopt-as-a-Service(PATSOPTAAS)\n\
*)\n\
" // end of [msg]
//
return msg;
} // end of [getWelcomeMessage]
//
/* ATSextcode_end() */

/* ATSextcode_beg() */
//
function
Patsoptaas_thePatsopt_editor_get()
{
//
var
editor =
ace.edit("thePage2RBody1_prop");
return editor.getSession().getValue();
//
} // end of [Patsoptaas_thePatsopt_editor_get]
//
function
Patsoptaas_thePatsopt_editor_set(code)
{
//
var
editor =
ace.edit("thePage2RBody1_prop");
return editor.getSession().setValue(code);
//
} // end of [Patsoptaas_thePatsopt_editor_set]
//
/* ATSextcode_end() */

/* ATSextcode_beg() */
function
Patsoptaas_thePatsopt_stderr_set(msg)
{
//
document.getElementById("thePage2RBody2_prop").value = msg;
//
} // end of [Patsoptaas_thePatsopt_stderr_set]
//
/* ATSextcode_end() */

/* ATSextcode_beg() */
//
var
Patsoptaas_thePatsopt_source = "";
//
function
Patsoptaas_thePatsopt_source_get()
{
  return Patsoptaas_thePatsopt_source;
} // end of [Patsoptaas_thePatsopt_source_get]
//
function
Patsoptaas_thePatsopt_source_set(str)
{
  Patsoptaas_thePatsopt_source = str; return;
} // end of [Patsoptaas_thePatsopt_source_set]
//
/* ATSextcode_end() */

/* ATSextcode_beg() */
//
var
Patsoptaas_thePatsopt_output = "";
//
function
Patsoptaas_thePatsopt_output_get()
{
//
return Patsoptaas_thePatsopt_output;
//
} // end of [Patsoptaas_thePatsopt_output_get]
//
function
Patsoptaas_thePatsopt_output_set(str)
{
/*
alert
(
  "Patsoptaas_thePatsopt_output_set:\n" + str
); // end of [alert]
*/
Patsoptaas_thePatsopt_output = str; return;
//
} // end of [Patsoptaas_thePatsopt_output_set]
//
/* ATSextcode_end() */

/* ATSextcode_beg() */
//
var
Patsoptaas_thePatsopt2js_output = "";
//
function
Patsoptaas_thePatsopt2js_output_get()
{
//
return Patsoptaas_thePatsopt2js_output;
//
} // end of [Patsoptaas_thePatsopt2js_output_get]
//
function
Patsoptaas_thePatsopt2js_output_set(str)
{
/*
alert
(
  "Patsoptaas_thePatsopt2js_output_set:\n" + str
); // end of [alert]
*/
Patsoptaas_thePatsopt2js_output = str; return;
//
} // end of [Patsoptaas_thePatsopt2js_output_set]
//
/* ATSextcode_end() */

/* ATSextcode_beg() */
//
function
Patsoptaas_Patsopt_tcats_flag()
{
  return document.getElementById("Patsopt-tcats-flag").checked;
}
//
function
Patsoptaas_Patsopt2js_eval_flag()
{
  return document.getElementById("Patsopt2js-eval-flag").checked;
}
//
function
Patsoptaas_Compile_stderr_flag()
{
  return document.getElementById("Compile-stderr-flag").checked;
}
//
function
Patsoptaas_Evaluate_canvas_flag()
{
  return document.getElementById("Evaluate-canvas-flag").checked;
}
//
/* ATSextcode_end() */

/* ATSextcode_beg() */
//
function
Patsoptaas_Compile_patsopttc_reply
  (reply)
{
//
  var comparr =
    JSON.parse(decodeURIComponent(reply));
  // end of [var]
//
  var msg0 = "Patsoptaas: [patsopt-tcats] passed!"
  var msg1 = "Patsoptaas: [patsopt-tcats] failed!"
  if(comparr[0]===0)
  {
    Patsoptaas_thePatsopt_stderr_set(msg0);
    if(!Patsoptaas_Compile_stderr_flag()) alert(msg0);
  }
  if(comparr[0] > 0)
  {
    Patsoptaas_thePatsopt_stderr_set(comparr[1]);
    if(!Patsoptaas_Compile_stderr_flag()) alert(msg1);
  }
  return;
}
//
/* ATSextcode_end() */

/* ATSextcode_beg() */
//
function
Patsoptaas_Compile_patsoptcc_reply
  (reply)
{
//
  var comparr =
    JSON.parse(decodeURIComponent(reply));
  // end of [var]
//
  var msg0 = "Patsoptaas: [patsopt-ccats] passed!"
  var msg1 = "Patsoptaas: [patsopt-ccats] failed!"
//
  if(comparr[0]===0)
  {
    Patsoptaas_thePatsopt_stderr_set(msg0);
    Patsoptaas_thePatsopt_output_set2(comparr[1]);
    if(!Patsoptaas_Compile_stderr_flag()) alert(msg0);
  }
  if(comparr[0] > 0)
  {
    Patsoptaas_thePatsopt_stderr_set(comparr[1]);
    if(!Patsoptaas_Compile_stderr_flag()) alert(msg1);
  }
//
  return;
//
} // end of [Patsoptaas_Compile_patsoptcc_reply]
//
/* ATSextcode_end() */

/* ATSextcode_beg() */
//
function
Patsoptaas_Compile_patsopt2js_reply
  (reply)
{
//
  var comparr =
    JSON.parse(decodeURIComponent(reply));
  // end of [var]
//
  var msg0 = "Patsoptaas: [patsopt-atscc2js] passed!"
  var msg1 = "Patsoptaas: [patsopt-atscc2js] failed!"
//
  if(comparr[0]===0)
  {
//
    Patsoptaas_thePatsopt_stderr_set(msg0);
    Patsoptaas_thePatsopt2js_output_set2(comparr[1]);
//
    if(
     !Patsoptaas_Compile_stderr_flag()
    ) alert(msg0);
//
    if(Patsoptaas_Patsopt2js_eval_flag())
    {
      try {
        eval(comparr[1]);
      } catch(error) {
        alert("ERROR!!!\n" + String(error));
      } /* end of [try] */
    }
//
  }
  if(comparr[0] > 0)
  {
    Patsoptaas_thePatsopt_stderr_set(comparr[1]);
    if(!Patsoptaas_Compile_stderr_flag()) alert(msg1);
  }
//
  return;
} // end of [Patsoptaas_Compile_patsopt2js_reply]
//
/* ATSextcode_end() */

/* ATSextcode_beg() */
//
function
Patsoptaas_Evaluate_JS_onclick()
{
//
  var
  mycode =
  Patsoptaas_thePatsopt2js_output_get2();
//
  if(mycode)
  {
    try {
      eval(mycode);
    } catch(error) {
      alert("ERROR!!!\n" + String(error));
    } /* end of [try] */
  } else {
    alert("There is no generated JS code yet!");
  } // end of [if]
//
} // end of [Patsoptaas_Evaluate_JS_onclick]
//
/* ATSextcode_end() */

/* ATSextcode_beg() */
//
function
Patsoptaas_Help_about_onclick()
{
//
var
theHelp = "\n\
Patsoptaas is a service for trying ATS on-line.\n\
\n\
Compile/Patsopt: for compiling the ATS source into C.\n\
Compile/Patsopt2js: for compiling the ATS source into JS.\n\
\n\
Evaluate/EvalJS: for evaluating the generated JS code.\n\
\n\
Patsopt-tcats:\n\
  If set, Patsopt does type-checking only;\n\
  If not set, Patsopt translates ATS into C after type-checking\n\
\n\
Patsopt2js-eval:\n\
  If set, Patsopt2js evaluates the generated JS code automatically;\n\
  If not set, Patsopt2js does not try to evaluate the generated JS code.\n\
\n\
Compile-stderr:\n\
  If set, compilation messages output to a designated window.\n\
\n\
Evaluate-canvas:\n\
  If set, a canvas of the id 'Patsoptaas-Evaluate-canvas' is shown.\n\
\n\
" // end of [var]
//
alert(theHelp); return;
//
} // end of [Patsoptaas_Help_about_onclick]
//
/* ATSextcode_end() */

/* ATSextcode_beg() */
//
function
patsoptaas_mycode_trigger
  (mycode)
{
//
var
form =
document.createElement("form");
//
form.setAttribute("method", "POST");
/*
//
// HX: data is already encoded
//
form.setAttribute
( "enctype"
, "application/x-www-form-urlencoded"
); // form.setAttribute
*/
//
form.setAttribute
( "action"
, "http://www.ats-lang.org/SERVER/MYCODE/Patsoptaas_serve.php"
); // form.setAttribute
//
form.setAttribute("target", "_blank");
//
var
input =
document.createElement("input");
//
input.setAttribute("type", "hidden");
input.setAttribute("name", "mycode");
input.setAttribute("value", encodeURIComponent(mycode));
//
form.appendChild(input); document.body.appendChild(form); form.submit(); return;
//
} /* end of [patsoptaas_mycode_trigger] */
//
/* ATSextcode_end() */

function
Patsoptaas_patsfun_4__4__1__closurerize(env0)
{
  return [function(cenv) { return Patsoptaas_patsfun_4__4__1(cenv[1]); }, env0];
}


function
Patsoptaas_patsfun_13__13__1__closurerize(env0)
{
  return [function(cenv) { return Patsoptaas_patsfun_13__13__1(cenv[1]); }, env0];
}


function
Patsoptaas_patsfun_22__22__1__closurerize(env0)
{
  return [function(cenv) { return Patsoptaas_patsfun_22__22__1(cenv[1]); }, env0];
}


function
Patsoptaas_patsfun_31__31__1__closurerize(env0)
{
  return [function(cenv) { return Patsoptaas_patsfun_31__31__1(cenv[1]); }, env0];
}


function
Patsoptaas_Compile_patsopttc_onclick()
{
//
// knd = 0
  var tmp3
  var tmplab, tmplab_js
//
  // __patsflab_Compile_patsopttc_onclick
  tmp3 = Patsoptaas_thePatsopt_source_get2();
  atslangweb_patsopt_tcats_rpc__3__1(tmp3);
  return/*_void*/;
} // end-of-function


function
atslangweb_patsopt_tcats_rpc__3__1(arg0)
{
//
// knd = 0
  var tmp5__1
  var tmp10__1
  var tmp13__1
  var tmp14__1
  var tmplab, tmplab_js
//
  // __patsflab_patsopt_tcats_rpc
  tmp5__1 = ats2js_Ajax_XMLHttpRequest_new();
  ats2js_Ajax_XMLHttpRequest_set_onreadystatechange(tmp5__1, Patsoptaas_patsfun_4__4__1__closurerize(tmp5__1));
  tmp10__1 = atslangweb_patsopt_tcats_rpc__cname__1__1();
  ats2js_Ajax_XMLHttpRequest_open(tmp5__1, "POST", tmp10__1, true);
  ats2js_Ajax_XMLHttpRequest_setRequestHeader(tmp5__1, "Content-type", "application/x-www-form-urlencoded");
  tmp14__1 = ats2jspre_encodeURIComponent(arg0);
  tmp13__1 = ats2jspre_string_append("mycode=", tmp14__1);
  ats2js_Ajax_XMLHttpRequest_send_1(tmp5__1, tmp13__1);
  return/*_void*/;
} // end-of-function


function
Patsoptaas_patsfun_4__4__1(env0)
{
//
// knd = 0
  var tmp8__1
  var tmp9__1
  var tmplab, tmplab_js
//
  // __patsflab_Patsoptaas_patsfun_4
  tmp8__1 = ats2js_Ajax_XMLHttpRequest_is_ready_okay(env0);
  if(tmp8__1) {
    tmp9__1 = ats2js_Ajax_XMLHttpRequest_get_responseText(env0);
    atslangweb_patsopt_tcats_rpc__reply__2__1(tmp9__1);
  } else {
    // ATSINSmove_void
  } // end-of-if
  return/*_void*/;
} // end-of-function


function
atslangweb_patsopt_tcats_rpc__reply__2__1(arg0)
{
//
// knd = 0
  var tmplab, tmplab_js
//
  // __patsflab_patsopt_tcats_rpc__reply
  Patsoptaas_Compile_patsopttc_reply(arg0);
  return/*_void*/;
} // end-of-function


function
atslangweb_patsopt_tcats_rpc__cname__1__1()
{
//
// knd = 0
  var tmpret1__1
  var tmplab, tmplab_js
//
  // __patsflab_patsopt_tcats_rpc__cname
  tmpret1__1 = "SERVER/MYCODE/atslangweb_patsopt_tcats_0_.php";
  return tmpret1__1;
} // end-of-function


function
Patsoptaas_Compile_patsoptcc_onclick()
{
//
// knd = 0
  var tmp31
  var tmplab, tmplab_js
//
  // __patsflab_Compile_patsoptcc_onclick
  tmp31 = Patsoptaas_thePatsopt_source_get2();
  atslangweb_patsopt_ccats_rpc__12__1(tmp31);
  return/*_void*/;
} // end-of-function


function
atslangweb_patsopt_ccats_rpc__12__1(arg0)
{
//
// knd = 0
  var tmp33__1
  var tmp38__1
  var tmp41__1
  var tmp42__1
  var tmplab, tmplab_js
//
  // __patsflab_patsopt_ccats_rpc
  tmp33__1 = ats2js_Ajax_XMLHttpRequest_new();
  ats2js_Ajax_XMLHttpRequest_set_onreadystatechange(tmp33__1, Patsoptaas_patsfun_13__13__1__closurerize(tmp33__1));
  tmp38__1 = atslangweb_patsopt_ccats_rpc__cname__10__1();
  ats2js_Ajax_XMLHttpRequest_open(tmp33__1, "POST", tmp38__1, true);
  ats2js_Ajax_XMLHttpRequest_setRequestHeader(tmp33__1, "Content-type", "application/x-www-form-urlencoded");
  tmp42__1 = ats2jspre_encodeURIComponent(arg0);
  tmp41__1 = ats2jspre_string_append("mycode=", tmp42__1);
  ats2js_Ajax_XMLHttpRequest_send_1(tmp33__1, tmp41__1);
  return/*_void*/;
} // end-of-function


function
Patsoptaas_patsfun_13__13__1(env0)
{
//
// knd = 0
  var tmp36__1
  var tmp37__1
  var tmplab, tmplab_js
//
  // __patsflab_Patsoptaas_patsfun_13
  tmp36__1 = ats2js_Ajax_XMLHttpRequest_is_ready_okay(env0);
  if(tmp36__1) {
    tmp37__1 = ats2js_Ajax_XMLHttpRequest_get_responseText(env0);
    atslangweb_patsopt_ccats_rpc__reply__11__1(tmp37__1);
  } else {
    // ATSINSmove_void
  } // end-of-if
  return/*_void*/;
} // end-of-function


function
atslangweb_patsopt_ccats_rpc__reply__11__1(arg0)
{
//
// knd = 0
  var tmplab, tmplab_js
//
  // __patsflab_patsopt_ccats_rpc__reply
  Patsoptaas_Compile_patsoptcc_reply(arg0);
  return/*_void*/;
} // end-of-function


function
atslangweb_patsopt_ccats_rpc__cname__10__1()
{
//
// knd = 0
  var tmpret29__1
  var tmplab, tmplab_js
//
  // __patsflab_patsopt_ccats_rpc__cname
  tmpret29__1 = "SERVER/MYCODE/atslangweb_patsopt_ccats_0_.php";
  return tmpret29__1;
} // end-of-function


function
Patsoptaas_Compile_patsopt2js_onclick()
{
//
// knd = 0
  var tmp59
  var tmplab, tmplab_js
//
  // __patsflab_Compile_patsopt2js_onclick
  tmp59 = Patsoptaas_thePatsopt_source_get2();
  atslangweb_patsopt_atscc2js_rpc__21__1(tmp59);
  return/*_void*/;
} // end-of-function


function
atslangweb_patsopt_atscc2js_rpc__21__1(arg0)
{
//
// knd = 0
  var tmp61__1
  var tmp66__1
  var tmp69__1
  var tmp70__1
  var tmplab, tmplab_js
//
  // __patsflab_patsopt_atscc2js_rpc
  tmp61__1 = ats2js_Ajax_XMLHttpRequest_new();
  ats2js_Ajax_XMLHttpRequest_set_onreadystatechange(tmp61__1, Patsoptaas_patsfun_22__22__1__closurerize(tmp61__1));
  tmp66__1 = atslangweb_patsopt_atscc2js_rpc__cname__19__1();
  ats2js_Ajax_XMLHttpRequest_open(tmp61__1, "POST", tmp66__1, true);
  ats2js_Ajax_XMLHttpRequest_setRequestHeader(tmp61__1, "Content-type", "application/x-www-form-urlencoded");
  tmp70__1 = ats2jspre_encodeURIComponent(arg0);
  tmp69__1 = ats2jspre_string_append("mycode=", tmp70__1);
  ats2js_Ajax_XMLHttpRequest_send_1(tmp61__1, tmp69__1);
  return/*_void*/;
} // end-of-function


function
Patsoptaas_patsfun_22__22__1(env0)
{
//
// knd = 0
  var tmp64__1
  var tmp65__1
  var tmplab, tmplab_js
//
  // __patsflab_Patsoptaas_patsfun_22
  tmp64__1 = ats2js_Ajax_XMLHttpRequest_is_ready_okay(env0);
  if(tmp64__1) {
    tmp65__1 = ats2js_Ajax_XMLHttpRequest_get_responseText(env0);
    atslangweb_patsopt_atscc2js_rpc__reply__20__1(tmp65__1);
  } else {
    // ATSINSmove_void
  } // end-of-if
  return/*_void*/;
} // end-of-function


function
atslangweb_patsopt_atscc2js_rpc__reply__20__1(arg0)
{
//
// knd = 0
  var tmplab, tmplab_js
//
  // __patsflab_patsopt_atscc2js_rpc__reply
  Patsoptaas_Compile_patsopt2js_reply(arg0);
  return/*_void*/;
} // end-of-function


function
atslangweb_patsopt_atscc2js_rpc__cname__19__1()
{
//
// knd = 0
  var tmpret57__1
  var tmplab, tmplab_js
//
  // __patsflab_patsopt_atscc2js_rpc__cname
  tmpret57__1 = "SERVER/MYCODE/atslangweb_patsopt_atscc2js_0_.php";
  return tmpret57__1;
} // end-of-function


function
Patsoptaas_File_loadurl_input_doWork(arg0)
{
//
// knd = 0
  var tmplab, tmplab_js
//
  // __patsflab_File_loadurl_input_doWork
  atslangweb_file_get_contents_rpc__30__1(arg0);
  return/*_void*/;
} // end-of-function


function
atslangweb_file_get_contents_rpc__30__1(arg0)
{
//
// knd = 0
  var tmp88__1
  var tmp93__1
  var tmp96__1
  var tmp97__1
  var tmplab, tmplab_js
//
  // __patsflab_file_get_contents_rpc
  tmp88__1 = ats2js_Ajax_XMLHttpRequest_new();
  ats2js_Ajax_XMLHttpRequest_set_onreadystatechange(tmp88__1, Patsoptaas_patsfun_31__31__1__closurerize(tmp88__1));
  tmp93__1 = atslangweb_file_get_contents_rpc__cname__28__1();
  ats2js_Ajax_XMLHttpRequest_open(tmp88__1, "POST", tmp93__1, true);
  ats2js_Ajax_XMLHttpRequest_setRequestHeader(tmp88__1, "Content-type", "application/x-www-form-urlencoded");
  tmp97__1 = ats2jspre_encodeURIComponent(arg0);
  tmp96__1 = ats2jspre_string_append("fname=", tmp97__1);
  ats2js_Ajax_XMLHttpRequest_send_1(tmp88__1, tmp96__1);
  return/*_void*/;
} // end-of-function


function
Patsoptaas_patsfun_31__31__1(env0)
{
//
// knd = 0
  var tmp91__1
  var tmp92__1
  var tmplab, tmplab_js
//
  // __patsflab_Patsoptaas_patsfun_31
  tmp91__1 = ats2js_Ajax_XMLHttpRequest_is_ready_okay(env0);
  if(tmp91__1) {
    tmp92__1 = ats2js_Ajax_XMLHttpRequest_get_responseText(env0);
    atslangweb_file_get_contents_rpc__reply__29__1(tmp92__1);
  } else {
    // ATSINSmove_void
  } // end-of-if
  return/*_void*/;
} // end-of-function


function
atslangweb_file_get_contents_rpc__reply__29__1(arg0)
{
//
// knd = 0
  var tmplab, tmplab_js
//
  // __patsflab_file_get_contents_rpc__reply
  Patsoptaas_thePatsopt_editor_set(arg0);
  return/*_void*/;
} // end-of-function


function
atslangweb_file_get_contents_rpc__cname__28__1()
{
//
// knd = 0
  var tmpret85__1
  var tmplab, tmplab_js
//
  // __patsflab_file_get_contents_rpc__cname
  tmpret85__1 = "SERVER/MYCODE/atslangweb_file_get_contents.php";
  return tmpret85__1;
} // end-of-function


/* ****** ****** */

/* end-of-compilation-unit */
