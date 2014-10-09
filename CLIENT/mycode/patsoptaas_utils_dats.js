/*
**
** The JavaScript code is generated by atscc2js
** The starting compilation time is: 2014-10-7: 19h:12m
**
*/

/* ATSextcode_beg() */
// COMMENT_line
function
Patsoptaas_getWelcomeMessage()
{
// COMMENT_line
var
msg = "\
(*\n\
** Welcome to\n\
** Patsopt-as-a-Service(PATSOPTAAS)\n\
*)\n\
" // COMMENT_line
// COMMENT_line
return msg;
} // COMMENT_line
// COMMENT_line
/* ATSextcode_end() */

/* ATSextcode_beg() */
// COMMENT_line
function
Patsoptaas_thePatsopt_editor_get()
{
// COMMENT_line
var
editor =
ace.edit("thePage2RBody1_prop");
return editor.getSession().getValue();
// COMMENT_line
} // COMMENT_line
// COMMENT_line
function
Patsoptaas_thePatsopt_editor_set(code)
{
// COMMENT_line
var
editor =
ace.edit("thePage2RBody1_prop");
return editor.getSession().setValue(code);
// COMMENT_line
} // COMMENT_line
// COMMENT_line
/* ATSextcode_end() */

/* ATSextcode_beg() */
function
Patsoptaas_thePatsopt_stderr_set(msg)
{
// COMMENT_line
document.getElementById("thePage2RBody2_prop").value = msg;
// COMMENT_line
} // COMMENT_line
// COMMENT_line
/* ATSextcode_end() */

/* ATSextcode_beg() */
// COMMENT_line
var
Patsoptaas_thePatsopt_source = "";
// COMMENT_line
function
Patsoptaas_thePatsopt_source_get()
{
  return Patsoptaas_thePatsopt_source;
} // COMMENT_line
// COMMENT_line
function
Patsoptaas_thePatsopt_source_set(str)
{
  Patsoptaas_thePatsopt_source = str; return;
} // COMMENT_line
// COMMENT_line
/* ATSextcode_end() */

/* ATSextcode_beg() */
// COMMENT_line
var
Patsoptaas_thePatsopt_output = "";
// COMMENT_line
function
Patsoptaas_thePatsopt_output_get()
{
// COMMENT_line
return Patsoptaas_thePatsopt_output;
// COMMENT_line
} // COMMENT_line
// COMMENT_line
function
Patsoptaas_thePatsopt_output_set(str)
{

Patsoptaas_thePatsopt_output = str; return;
// COMMENT_line
} // COMMENT_line
// COMMENT_line
/* ATSextcode_end() */

/* ATSextcode_beg() */
// COMMENT_line
var
Patsoptaas_thePatsopt2js_output = "";
// COMMENT_line
function
Patsoptaas_thePatsopt2js_output_get()
{
// COMMENT_line
return Patsoptaas_thePatsopt2js_output;
// COMMENT_line
} // COMMENT_line
// COMMENT_line
function
Patsoptaas_thePatsopt2js_output_set(str)
{

Patsoptaas_thePatsopt2js_output = str; return;
// COMMENT_line
} // COMMENT_line
// COMMENT_line
/* ATSextcode_end() */

/* ATSextcode_beg() */
// COMMENT_line
function
Patsoptaas_Patsopt_tcats_flag()
{
  return document.getElementById("Patsopt-tcats-flag").checked;
}
// COMMENT_line
function
Patsoptaas_Patsopt2js_eval_flag()
{
  return document.getElementById("Patsopt2js-eval-flag").checked;
}
// COMMENT_line
function
Patsoptaas_Compile_stderr_flag()
{
  return document.getElementById("Compile-stderr-flag").checked;
}
// COMMENT_line
/* ATSextcode_end() */

/* ATSextcode_beg() */
// COMMENT_line
function
Patsoptaas_Compile_patsopttc_reply
  (reply)
{
  var comparr =
    JSON.parse(decodeURIComponent(reply));
  // COMMENT_line
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
// COMMENT_line
/* ATSextcode_end() */

/* ATSextcode_beg() */
// COMMENT_line
function
Patsoptaas_Compile_patsoptcc_reply
  (reply)
{
//
  var reply2, reply3;
  alert("Patsoptaas_Compile_patsoptcc_reply:0");
  alert("reply = " + reply);
  reply = reply.replace('%', '\001');
  reply2 = decodeURIComponent(reply);
  alert("reply2 = " + reply2);
  reply3 = JSON.parse(reply2);
  alert("reply3 = " + reply3);
//
  var comparr =
    JSON.parse(decodeURIComponent(reply));
//
  alert("Patsoptaas_Compile_patsoptcc_reply:1");
//
  // COMMENT_line
  var msg0 = "Patsoptaas: [patsopt-ccats] passed!"
  var msg1 = "Patsoptaas: [patsopt-ccats] failed!"
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
  return;
}
// COMMENT_line
/* ATSextcode_end() */

/* ATSextcode_beg() */
// COMMENT_line
function
Patsoptaas_Compile_patsopt2js_reply
  (reply)
{
  var comparr =
    JSON.parse(decodeURIComponent(reply));
  // COMMENT_line
  var msg0 = "Patsoptaas: [patsopt-atscc2js] passed!"
  var msg1 = "Patsoptaas: [patsopt-atscc2js] failed!"
  if(comparr[0]===0)
  {
    Patsoptaas_thePatsopt_stderr_set(msg0);
    Patsoptaas_thePatsopt2js_output_set2(comparr[1]);
    if(!Patsoptaas_Compile_stderr_flag()) alert(msg0);
    if(Patsoptaas_Patsopt2js_eval_flag()) eval(comparr[1]);
  }
  if(comparr[0] > 0)
  {
    Patsoptaas_thePatsopt_stderr_set(comparr[1]);
    if(!Patsoptaas_Compile_stderr_flag()) alert(msg1);
  }
  return;
}
// COMMENT_line
/* ATSextcode_end() */

/* ATSextcode_beg() */
// COMMENT_line
function
Patsoptaas_Evaluate_JS_onclick()
{
// COMMENT_line
  var
  mycode =
  Patsoptaas_thePatsopt2js_output_get2();
// COMMENT_line
  if(mycode)
  {
    eval(mycode);
  } else {
    alert("There is no generated JS code yet!");
  } // COMMENT_line
// COMMENT_line
} // COMMENT_line
// COMMENT_line
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
Patsoptaas_Compile_patsopttc_onclick()
{
//
// knd = 0
  var tmp3
//
  // __patsflab_Compile_patsopttc_onclick
  tmp3 = Patsoptaas_thePatsopt_source_get2();
  atslangweb__patsopt_tcats_rpc__3__1(tmp3);
  return/*_void*/;
} // end-of-function


function
atslangweb__patsopt_tcats_rpc__3__1(arg0)
{
//
// knd = 0
  var tmp5__1
  var tmp10__1
  var tmp13__1
  var tmp14__1
//
  // __patsflab_patsopt_tcats_rpc
  tmp5__1 = ats2js_Ajax_XMLHttpRequest_new();
  ats2js_Ajax_XMLHttpRequest_set_onreadystatechange(tmp5__1, Patsoptaas_patsfun_4__4__1__closurerize(tmp5__1));
  tmp10__1 = atslangweb__patsopt_tcats_rpc__cname__1__1();
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
//
  // __patsflab_Patsoptaas_patsfun_4
  tmp8__1 = ats2js_Ajax_XMLHttpRequest_is_ready_okay(env0);
  if(tmp8__1) {
    tmp9__1 = ats2js_Ajax_XMLHttpRequest_get_responseText(env0);
    atslangweb__patsopt_tcats_rpc__reply__2__1(tmp9__1);
  } else {
    // ATSINSmove_void
  } // endif
  return/*_void*/;
} // end-of-function


function
atslangweb__patsopt_tcats_rpc__reply__2__1(arg0)
{
//
// knd = 0
//
  // __patsflab_patsopt_tcats_rpc__reply
  Patsoptaas_Compile_patsopttc_reply(arg0);
  return/*_void*/;
} // end-of-function


function
atslangweb__patsopt_tcats_rpc__cname__1__1()
{
//
// knd = 0
  var tmpret1__1
//
  // __patsflab_patsopt_tcats_rpc__cname
  tmpret1__1 = "SERVER/mycode/atslangweb_patsopt_tcats_0_.php";
  return tmpret1__1;
} // end-of-function


function
Patsoptaas_Compile_patsoptcc_onclick()
{
//
// knd = 0
  var tmp31
//
  // __patsflab_Compile_patsoptcc_onclick
  tmp31 = Patsoptaas_thePatsopt_source_get2();
  atslangweb__patsopt_ccats_rpc__12__1(tmp31);
  return/*_void*/;
} // end-of-function


function
atslangweb__patsopt_ccats_rpc__12__1(arg0)
{
//
// knd = 0
  var tmp33__1
  var tmp38__1
  var tmp41__1
  var tmp42__1
//
  // __patsflab_patsopt_ccats_rpc
  tmp33__1 = ats2js_Ajax_XMLHttpRequest_new();
  ats2js_Ajax_XMLHttpRequest_set_onreadystatechange(tmp33__1, Patsoptaas_patsfun_13__13__1__closurerize(tmp33__1));
  tmp38__1 = atslangweb__patsopt_ccats_rpc__cname__10__1();
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
//
  // __patsflab_Patsoptaas_patsfun_13
  tmp36__1 = ats2js_Ajax_XMLHttpRequest_is_ready_okay(env0);
  if(tmp36__1) {
    tmp37__1 = ats2js_Ajax_XMLHttpRequest_get_responseText(env0);
    atslangweb__patsopt_ccats_rpc__reply__11__1(tmp37__1);
  } else {
    // ATSINSmove_void
  } // endif
  return/*_void*/;
} // end-of-function


function
atslangweb__patsopt_ccats_rpc__reply__11__1(arg0)
{
//
// knd = 0
//
  // __patsflab_patsopt_ccats_rpc__reply
  Patsoptaas_Compile_patsoptcc_reply(arg0);
  return/*_void*/;
} // end-of-function


function
atslangweb__patsopt_ccats_rpc__cname__10__1()
{
//
// knd = 0
  var tmpret29__1
//
  // __patsflab_patsopt_ccats_rpc__cname
  tmpret29__1 = "SERVER/mycode/atslangweb_patsopt_ccats_0_.php";
  return tmpret29__1;
} // end-of-function


function
Patsoptaas_Compile_patsopt2js_onclick()
{
//
// knd = 0
  var tmp59
//
  // __patsflab_Compile_patsopt2js_onclick
  tmp59 = Patsoptaas_thePatsopt_source_get2();
  atslangweb__patsopt_atscc2js_rpc__21__1(tmp59);
  return/*_void*/;
} // end-of-function


function
atslangweb__patsopt_atscc2js_rpc__21__1(arg0)
{
//
// knd = 0
  var tmp61__1
  var tmp66__1
  var tmp69__1
  var tmp70__1
//
  // __patsflab_patsopt_atscc2js_rpc
  tmp61__1 = ats2js_Ajax_XMLHttpRequest_new();
  ats2js_Ajax_XMLHttpRequest_set_onreadystatechange(tmp61__1, Patsoptaas_patsfun_22__22__1__closurerize(tmp61__1));
  tmp66__1 = atslangweb__patsopt_atscc2js_rpc__cname__19__1();
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
//
  // __patsflab_Patsoptaas_patsfun_22
  tmp64__1 = ats2js_Ajax_XMLHttpRequest_is_ready_okay(env0);
  if(tmp64__1) {
    tmp65__1 = ats2js_Ajax_XMLHttpRequest_get_responseText(env0);
    atslangweb__patsopt_atscc2js_rpc__reply__20__1(tmp65__1);
  } else {
    // ATSINSmove_void
  } // endif
  return/*_void*/;
} // end-of-function


function
atslangweb__patsopt_atscc2js_rpc__reply__20__1(arg0)
{
//
// knd = 0
//
  // __patsflab_patsopt_atscc2js_rpc__reply
  Patsoptaas_Compile_patsopt2js_reply(arg0);
  return/*_void*/;
} // end-of-function


function
atslangweb__patsopt_atscc2js_rpc__cname__19__1()
{
//
// knd = 0
  var tmpret57__1
//
  // __patsflab_patsopt_atscc2js_rpc__cname
  tmpret57__1 = "SERVER/mycode/atslangweb_patsopt_atscc2js_0_.php";
  return tmpret57__1;
} // end-of-function


/* ****** ****** */

/* end-of-compilation-unit */
