/*
**
** The JavaScript code is generated by atscc2js
** The starting compilation time is: 2014-9-20: 20h:55m
**
*/

/* ATSextcode_beg() */
// COMMENT_line
function
Home_hello_getval()
{
  return document.getElementById("hello_dats").value;
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
Home_listsub_reply(reply)
{
  var comparr =
    JSON.parse(decodeURIComponent(reply));
  // COMMENT_line
  if (comparr[0]===0) alert ("Typechecking passed!");
  if (comparr[0] > 0) alert ("Typechecking failed!");
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
Home_hello_onclick()
{
//
// knd = 0
  var tmp2
//
  // __patsflab_Home_hello_onclick
  tmp2 = Home_hello_getval();
  atslangweb__patsopt_atscc2js_rpc__2__1(tmp2);
  return/*_void*/;
} // end-of-function


function
atslangweb__patsopt_atscc2js_rpc__2__1(arg0)
{
//
// knd = 0
  var tmp4__1
  var tmp11__1
  var tmp12__1
//
  // __patsflab_patsopt_atscc2js_rpc
  tmp4__1 = ats2js_Ajax_XMLHttpRequest_new();
  ats2js_Ajax_XMLHttpRequest_set_onreadystatechange(tmp4__1, atslangweb__patsfun_3__3__1__closurerize(tmp4__1));
  ats2js_Ajax_XMLHttpRequest_open(tmp4__1, "POST", "SERVER/mycode/atslangweb__patsopt_atscc2js_1_.php", true);
  ats2js_Ajax_XMLHttpRequest_setRequestHeader(tmp4__1, "Content-type", "application/x-www-form-urlencoded");
  tmp12__1 = ats2jspre_encodeURIComponent(arg0);
  tmp11__1 = ats2jspre_string_append("mycode=", tmp12__1);
  ats2js_Ajax_XMLHttpRequest_send_1(tmp4__1, tmp11__1);
  return/*_void*/;
} // end-of-function


function
atslangweb__patsfun_3__3__1(env0)
{
//
// knd = 0
  var tmp7__1
  var tmp8__1
//
  // __patsflab_atslangweb__patsfun_3
  tmp7__1 = ats2js_Ajax_XMLHttpRequest_is_ready_okay(env0);
  if(tmp7__1) {
    tmp8__1 = ats2js_Ajax_XMLHttpRequest_get_responseText(env0);
    atslangweb__patsopt_atscc2js_rpc__reply__1__1(tmp8__1);
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
  var tmp26
//
  // __patsflab_Home_listsub_onclick
  tmp26 = Home_listsub_getval();
  atslangweb__patsopt_tcats_rpc__9__1(tmp26);
  return/*_void*/;
} // end-of-function


function
atslangweb__patsopt_tcats_rpc__9__1(arg0)
{
//
// knd = 0
  var tmp28__1
  var tmp35__1
  var tmp36__1
//
  // __patsflab_patsopt_tcats_rpc
  tmp28__1 = ats2js_Ajax_XMLHttpRequest_new();
  ats2js_Ajax_XMLHttpRequest_set_onreadystatechange(tmp28__1, atslangweb__patsfun_10__10__1__closurerize(tmp28__1));
  ats2js_Ajax_XMLHttpRequest_open(tmp28__1, "POST", "SERVER/mycode/atslangweb__patsopt_tcats_1_.php", true);
  ats2js_Ajax_XMLHttpRequest_setRequestHeader(tmp28__1, "Content-type", "application/x-www-form-urlencoded");
  tmp36__1 = ats2jspre_encodeURIComponent(arg0);
  tmp35__1 = ats2jspre_string_append("mycode=", tmp36__1);
  ats2js_Ajax_XMLHttpRequest_send_1(tmp28__1, tmp35__1);
  return/*_void*/;
} // end-of-function


function
atslangweb__patsfun_10__10__1(env0)
{
//
// knd = 0
  var tmp31__1
  var tmp32__1
//
  // __patsflab_atslangweb__patsfun_10
  tmp31__1 = ats2js_Ajax_XMLHttpRequest_is_ready_okay(env0);
  if(tmp31__1) {
    tmp32__1 = ats2js_Ajax_XMLHttpRequest_get_responseText(env0);
    atslangweb__patsopt_tcats_rpc__reply__8__1(tmp32__1);
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


/* ****** ****** */

/* end-of-compilation-unit */
