/*
**
** The JavaScript code is generated by atscc2js
** The starting compilation time is: 2014-10-4: 18h:54m
**
*/

/* ATSextcode_beg() */
// COMMENT_line
var
Patsoptaas_thePatsopt2jsFlag_eval = 1
// COMMENT_line
/* ATSextcode_end() */

/* ATSextcode_beg() */
function
Patsoptaas_thePatsopt_source_get()
{
// COMMENT_line
return ace.edit("thePage2RBody").getSession().getValue();
// COMMENT_line
} // COMMENT_line
// COMMENT_line
/* ATSextcode_end() */

/* ATSextcode_beg() */
// COMMENT_line
var
Patsoptaas_thePatsopt_output_var = "**EMPTY**";
// COMMENT_line
function
Patsoptaas_thePatsopt_output_get()
{
// COMMENT_line
return Patsoptaas_thePatsopt_output_var;
// COMMENT_line
} // COMMENT_line
// COMMENT_line
function
Patsoptaas_thePatsopt_output_set(str)
{
// COMMENT_line

// COMMENT_line
Patsoptaas_thePatsopt_output_var = str; return;
// COMMENT_line
} // COMMENT_line
// COMMENT_line
/* ATSextcode_end() */

/* ATSextcode_beg() */
// COMMENT_line
var
Patsoptaas_thePatsopt2js_output_var = "**EMPTY**";
// COMMENT_line
function
Patsoptaas_thePatsopt2js_output_get()
{
// COMMENT_line
return Patsoptaas_thePatsopt2js_output_var;
// COMMENT_line
} // COMMENT_line
// COMMENT_line
function
Patsoptaas_thePatsopt2js_output_set(str)
{
// COMMENT_line
alert
(
  "Patsoptaas_thePatsopt2js_output_set:\n" + str
); // COMMENT_line
// COMMENT_line
Patsoptaas_thePatsopt2js_output_var = str; return;
// COMMENT_line
} // COMMENT_line
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
  if (comparr[0]===0)
  {
    Patsoptaas_thePatsopt2js_output_set(comparr[1]);
    if (Patsoptaas_thePatsopt2jsFlag_eval > 0) eval(comparr[1]);
  }
  if (comparr[0] > 0)
  {
    alert("Patsoptaas: [Compile_patsopt2js] failed!");
  }
  return;
}
// COMMENT_line
/* ATSextcode_end() */

function
Patsoptaas_patsfun_4__4__1__closurerize(env0)
{
  return [function(cenv) { return Patsoptaas_patsfun_4__4__1(cenv[1]); }, env0];
}


function
Patsoptaas_Compile_patsopt2js_onclick()
{
//
// knd = 0
  var tmp3
//
  // __patsflab_Compile_patsopt2js_onclick
  tmp3 = Patsoptaas_thePatsopt_source_get();
  atslangweb__patsopt_atscc2js_rpc__3__1(tmp3);
  return/*_void*/;
} // end-of-function


function
atslangweb__patsopt_atscc2js_rpc__3__1(arg0)
{
//
// knd = 0
  var tmp5__1
  var tmp10__1
  var tmp13__1
  var tmp14__1
//
  // __patsflab_patsopt_atscc2js_rpc
  tmp5__1 = ats2js_Ajax_XMLHttpRequest_new();
  ats2js_Ajax_XMLHttpRequest_set_onreadystatechange(tmp5__1, Patsoptaas_patsfun_4__4__1__closurerize(tmp5__1));
  tmp10__1 = atslangweb__patsopt_atscc2js_rpc__cname__1__1();
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
    atslangweb__patsopt_atscc2js_rpc__reply__2__1(tmp9__1);
  } else {
    // ATSINSmove_void
  } // endif
  return/*_void*/;
} // end-of-function


function
atslangweb__patsopt_atscc2js_rpc__reply__2__1(arg0)
{
//
// knd = 0
//
  // __patsflab_patsopt_atscc2js_rpc__reply
  Patsoptaas_Compile_patsopt2js_reply(arg0);
  return/*_void*/;
} // end-of-function


function
atslangweb__patsopt_atscc2js_rpc__cname__1__1()
{
//
// knd = 0
  var tmpret1__1
//
  // __patsflab_patsopt_atscc2js_rpc__cname
  tmpret1__1 = "SERVER/mycode/atslangweb_patsopt_atscc2js_0_.php";
  return tmpret1__1;
} // end-of-function


/* ****** ****** */

/* end-of-compilation-unit */
