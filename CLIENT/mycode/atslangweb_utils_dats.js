/*
**
** The JavaScript code is generated by atscc2js
** The starting compilation time is: 2014-9-22:  0h:23m
**
*/

/* ATSextcode_beg() */
// COMMENT_line
function
Home_hello_getval()
{
  return document.getElementById("hello_dats").value;
}
function
Home_hello_button_set(name)
{
  document.getElementById("hello_button").innerHTML = name; return;
}
// COMMENT_line
function
Home_hello_reply(reply)
{
  var comparr =
    JSON.parse(decodeURIComponent(reply));
  // COMMENT_line
  if (comparr[0]===0) eval(comparr[1]);
  if (comparr[0] > 0) alert("Compilation failed!");
  Home_hello_button_set("Try-it-yourself"); // COMMENT_line
  return;
}
// COMMENT_line
/* ATSextcode_end() */

/* ATSextcode_beg() */
// COMMENT_line
function
Home_listsub_getval()
{
  return document.getElementById("listsub_dats").value;
}
// COMMENT_line
function
Home_listsub_button_set(name)
{
  document.getElementById("listsub_button").innerHTML = name; return;
}
// COMMENT_line
function
Home_listsub_reply(reply)
{
  var comparr =
    JSON.parse(decodeURIComponent(reply));
  // COMMENT_line
  if (comparr[0]===0) alert ("Typechecking passed!");
  if (comparr[0] > 0) alert ("Typechecking failed!");
  Home_listsub_button_set("Try-it-yourself"); // COMMENT_line
  return;
}
// COMMENT_line
/* ATSextcode_end() */

/* ATSextcode_beg() */
// COMMENT_line
function
Home_repeat_f0f1_getval()
{
  return document.getElementById("repeat_f0f1_dats").value;
}
// COMMENT_line
function
Home_repeat_f0f1_button_set(name)
{
  document.getElementById("repeat_f0f1_button").innerHTML = name; return;
}
// COMMENT_line
function
Home_repeat_f0f1_reply(reply)
{
  var comparr =
    JSON.parse(decodeURIComponent(reply));
  // COMMENT_line
  if (comparr[0]===0) eval(comparr[1]);
  if (comparr[0] > 0) alert("Compilation failed!");
  return;
}
// COMMENT_line
/* ATSextcode_end() */

function
atslangweb__patsfun_3__3__1__closurerize(env0)
{
  return [function(cenv) { return atslangweb__patsfun_3__3__1(cenv[1]); }, env0];
}


function
atslangweb__patsfun_10__10__1__closurerize(env0)
{
  return [function(cenv) { return atslangweb__patsfun_10__10__1(cenv[1]); }, env0];
}


function
atslangweb__patsfun_3__3__2__closurerize(env0)
{
  return [function(cenv) { return atslangweb__patsfun_3__3__2(cenv[1]); }, env0];
}


function
Home_hello_onclick()
{
//
// knd = 0
  var tmp2
//
  // __patsflab_Home_hello_onclick
  tmp2 = Home_hello_getval();
  Home_hello_button_set("Wait...");
  atslangweb__patsopt_atscc2js_rpc__2__1(tmp2);
  return/*_void*/;
} // end-of-function


function
atslangweb__patsopt_atscc2js_rpc__2__1(arg0)
{
//
// knd = 0
  var tmp5__1
  var tmp12__1
  var tmp13__1
//
  // __patsflab_patsopt_atscc2js_rpc
  tmp5__1 = ats2js_Ajax_XMLHttpRequest_new();
  ats2js_Ajax_XMLHttpRequest_set_onreadystatechange(tmp5__1, atslangweb__patsfun_3__3__1__closurerize(tmp5__1));
  ats2js_Ajax_XMLHttpRequest_open(tmp5__1, "POST", "SERVER/mycode/atslangweb__patsopt_atscc2js_1_.php", true);
  ats2js_Ajax_XMLHttpRequest_setRequestHeader(tmp5__1, "Content-type", "application/x-www-form-urlencoded");
  tmp13__1 = ats2jspre_encodeURIComponent(arg0);
  tmp12__1 = ats2jspre_string_append("mycode=", tmp13__1);
  ats2js_Ajax_XMLHttpRequest_send_1(tmp5__1, tmp12__1);
  return/*_void*/;
} // end-of-function


function
atslangweb__patsfun_3__3__1(env0)
{
//
// knd = 0
  var tmp8__1
  var tmp9__1
//
  // __patsflab_atslangweb__patsfun_3
  tmp8__1 = ats2js_Ajax_XMLHttpRequest_is_ready_okay(env0);
  if(tmp8__1) {
    tmp9__1 = ats2js_Ajax_XMLHttpRequest_get_responseText(env0);
    atslangweb__patsopt_atscc2js_rpc__reply__1__1(tmp9__1);
  } else {
    // ATSINSmove_void
  } // endif
  return/*_void*/;
} // end-of-function


function
atslangweb__patsopt_atscc2js_rpc__reply__1__1(arg0)
{
//
// knd = 0
//
  // __patsflab_patsopt_atscc2js_rpc__reply
  Home_hello_reply(arg0);
  return/*_void*/;
} // end-of-function


function
Home_listsub_onclick()
{
//
// knd = 0
  var tmp27
//
  // __patsflab_Home_listsub_onclick
  tmp27 = Home_listsub_getval();
  Home_listsub_button_set("Wait...");
  atslangweb__patsopt_tcats_rpc__9__1(tmp27);
  return/*_void*/;
} // end-of-function


function
atslangweb__patsopt_tcats_rpc__9__1(arg0)
{
//
// knd = 0
  var tmp30__1
  var tmp37__1
  var tmp38__1
//
  // __patsflab_patsopt_tcats_rpc
  tmp30__1 = ats2js_Ajax_XMLHttpRequest_new();
  ats2js_Ajax_XMLHttpRequest_set_onreadystatechange(tmp30__1, atslangweb__patsfun_10__10__1__closurerize(tmp30__1));
  ats2js_Ajax_XMLHttpRequest_open(tmp30__1, "POST", "SERVER/mycode/atslangweb__patsopt_tcats_1_.php", true);
  ats2js_Ajax_XMLHttpRequest_setRequestHeader(tmp30__1, "Content-type", "application/x-www-form-urlencoded");
  tmp38__1 = ats2jspre_encodeURIComponent(arg0);
  tmp37__1 = ats2jspre_string_append("mycode=", tmp38__1);
  ats2js_Ajax_XMLHttpRequest_send_1(tmp30__1, tmp37__1);
  return/*_void*/;
} // end-of-function


function
atslangweb__patsfun_10__10__1(env0)
{
//
// knd = 0
  var tmp33__1
  var tmp34__1
//
  // __patsflab_atslangweb__patsfun_10
  tmp33__1 = ats2js_Ajax_XMLHttpRequest_is_ready_okay(env0);
  if(tmp33__1) {
    tmp34__1 = ats2js_Ajax_XMLHttpRequest_get_responseText(env0);
    atslangweb__patsopt_tcats_rpc__reply__8__1(tmp34__1);
  } else {
    // ATSINSmove_void
  } // endif
  return/*_void*/;
} // end-of-function


function
atslangweb__patsopt_tcats_rpc__reply__8__1(arg0)
{
//
// knd = 0
//
  // __patsflab_patsopt_tcats_rpc__reply
  Home_listsub_reply(arg0);
  return/*_void*/;
} // end-of-function


function
Home_repeat_f0f1_onclick()
{
//
// knd = 0
  var tmp52
//
  // __patsflab_Home_repeat_f0f1_onclick
  tmp52 = Home_repeat_f0f1_getval();
  Home_repeat_f0f1_button_set("Wait...");
  atslangweb__patsopt_atscc2js_rpc__2__2(tmp52);
  return/*_void*/;
} // end-of-function


function
atslangweb__patsopt_atscc2js_rpc__2__2(arg0)
{
//
// knd = 0
  var tmp5__2
  var tmp12__2
  var tmp13__2
//
  // __patsflab_patsopt_atscc2js_rpc
  tmp5__2 = ats2js_Ajax_XMLHttpRequest_new();
  ats2js_Ajax_XMLHttpRequest_set_onreadystatechange(tmp5__2, atslangweb__patsfun_3__3__2__closurerize(tmp5__2));
  ats2js_Ajax_XMLHttpRequest_open(tmp5__2, "POST", "SERVER/mycode/atslangweb__patsopt_atscc2js_1_.php", true);
  ats2js_Ajax_XMLHttpRequest_setRequestHeader(tmp5__2, "Content-type", "application/x-www-form-urlencoded");
  tmp13__2 = ats2jspre_encodeURIComponent(arg0);
  tmp12__2 = ats2jspre_string_append("mycode=", tmp13__2);
  ats2js_Ajax_XMLHttpRequest_send_1(tmp5__2, tmp12__2);
  return/*_void*/;
} // end-of-function


function
atslangweb__patsfun_3__3__2(env0)
{
//
// knd = 0
  var tmp8__2
  var tmp9__2
//
  // __patsflab_atslangweb__patsfun_3
  tmp8__2 = ats2js_Ajax_XMLHttpRequest_is_ready_okay(env0);
  if(tmp8__2) {
    tmp9__2 = ats2js_Ajax_XMLHttpRequest_get_responseText(env0);
    atslangweb__patsopt_atscc2js_rpc__reply__15__1(tmp9__2);
  } else {
    // ATSINSmove_void
  } // endif
  return/*_void*/;
} // end-of-function


function
atslangweb__patsopt_atscc2js_rpc__reply__15__1(arg0)
{
//
// knd = 0
//
  // __patsflab_patsopt_atscc2js_rpc__reply
  Home_repeat_f0f1_reply(arg0);
  return/*_void*/;
} // end-of-function


/* ****** ****** */

/* end-of-compilation-unit */
