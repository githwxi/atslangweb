/*
**
** The JavaScript code is generated by atscc2js
** The starting compilation time is: 2014-10-7: 12h:42m
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
  if (comparr[0]===0) alert("Typechecking passed!");
  if (comparr[0] > 0) alert("Typechecking failed!");
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
  Home_repeat_f0f1_button_set("Try-it-yourself"); // COMMENT_line
  return;
}
// COMMENT_line
/* ATSextcode_end() */

function
atslangweb_patsfun_4__4__1__closurerize(env0)
{
  return [function(cenv) { return atslangweb_patsfun_4__4__1(cenv[1]); }, env0];
}


function
atslangweb_patsfun_13__13__1__closurerize(env0)
{
  return [function(cenv) { return atslangweb_patsfun_13__13__1(cenv[1]); }, env0];
}


function
atslangweb_patsfun_4__4__2__closurerize(env0)
{
  return [function(cenv) { return atslangweb_patsfun_4__4__2(cenv[1]); }, env0];
}


function
Home_hello_onclick()
{
//
// knd = 0
  var tmp3
//
  // __patsflab_Home_hello_onclick
  tmp3 = Home_hello_getval();
  Home_hello_button_set("Wait...");
  atslangweb__patsopt_atscc2js_rpc__3__1(tmp3);
  return/*_void*/;
} // end-of-function


function
atslangweb__patsopt_atscc2js_rpc__3__1(arg0)
{
//
// knd = 0
  var tmp6__1
  var tmp11__1
  var tmp14__1
  var tmp15__1
//
  // __patsflab_patsopt_atscc2js_rpc
  tmp6__1 = ats2js_Ajax_XMLHttpRequest_new();
  ats2js_Ajax_XMLHttpRequest_set_onreadystatechange(tmp6__1, atslangweb_patsfun_4__4__1__closurerize(tmp6__1));
  tmp11__1 = atslangweb__patsopt_atscc2js_rpc__cname__1__1();
  ats2js_Ajax_XMLHttpRequest_open(tmp6__1, "POST", tmp11__1, true);
  ats2js_Ajax_XMLHttpRequest_setRequestHeader(tmp6__1, "Content-type", "application/x-www-form-urlencoded");
  tmp15__1 = ats2jspre_encodeURIComponent(arg0);
  tmp14__1 = ats2jspre_string_append("mycode=", tmp15__1);
  ats2js_Ajax_XMLHttpRequest_send_1(tmp6__1, tmp14__1);
  return/*_void*/;
} // end-of-function


function
atslangweb_patsfun_4__4__1(env0)
{
//
// knd = 0
  var tmp9__1
  var tmp10__1
//
  // __patsflab_atslangweb_patsfun_4
  tmp9__1 = ats2js_Ajax_XMLHttpRequest_is_ready_okay(env0);
  if(tmp9__1) {
    tmp10__1 = ats2js_Ajax_XMLHttpRequest_get_responseText(env0);
    atslangweb__patsopt_atscc2js_rpc__reply__2__1(tmp10__1);
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
  Home_hello_reply(arg0);
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
  tmpret1__1 = "SERVER/mycode/atslangweb_patsopt_atscc2js_1_.php";
  return tmpret1__1;
} // end-of-function


function
Home_listsub_onclick()
{
//
// knd = 0
  var tmp32
//
  // __patsflab_Home_listsub_onclick
  tmp32 = Home_listsub_getval();
  Home_listsub_button_set("Wait...");
  atslangweb__patsopt_tcats_rpc__12__1(tmp32);
  return/*_void*/;
} // end-of-function


function
atslangweb__patsopt_tcats_rpc__12__1(arg0)
{
//
// knd = 0
  var tmp35__1
  var tmp40__1
  var tmp43__1
  var tmp44__1
//
  // __patsflab_patsopt_tcats_rpc
  tmp35__1 = ats2js_Ajax_XMLHttpRequest_new();
  ats2js_Ajax_XMLHttpRequest_set_onreadystatechange(tmp35__1, atslangweb_patsfun_13__13__1__closurerize(tmp35__1));
  tmp40__1 = atslangweb__patsopt_tcats_rpc__cname__10__1();
  ats2js_Ajax_XMLHttpRequest_open(tmp35__1, "POST", tmp40__1, true);
  ats2js_Ajax_XMLHttpRequest_setRequestHeader(tmp35__1, "Content-type", "application/x-www-form-urlencoded");
  tmp44__1 = ats2jspre_encodeURIComponent(arg0);
  tmp43__1 = ats2jspre_string_append("mycode=", tmp44__1);
  ats2js_Ajax_XMLHttpRequest_send_1(tmp35__1, tmp43__1);
  return/*_void*/;
} // end-of-function


function
atslangweb_patsfun_13__13__1(env0)
{
//
// knd = 0
  var tmp38__1
  var tmp39__1
//
  // __patsflab_atslangweb_patsfun_13
  tmp38__1 = ats2js_Ajax_XMLHttpRequest_is_ready_okay(env0);
  if(tmp38__1) {
    tmp39__1 = ats2js_Ajax_XMLHttpRequest_get_responseText(env0);
    atslangweb__patsopt_tcats_rpc__reply__11__1(tmp39__1);
  } else {
    // ATSINSmove_void
  } // endif
  return/*_void*/;
} // end-of-function


function
atslangweb__patsopt_tcats_rpc__reply__11__1(arg0)
{
//
// knd = 0
//
  // __patsflab_patsopt_tcats_rpc__reply
  Home_listsub_reply(arg0);
  return/*_void*/;
} // end-of-function


function
atslangweb__patsopt_tcats_rpc__cname__10__1()
{
//
// knd = 0
  var tmpret30__1
//
  // __patsflab_patsopt_tcats_rpc__cname
  tmpret30__1 = "SERVER/mycode/atslangweb_patsopt_tcats_1_.php";
  return tmpret30__1;
} // end-of-function


function
Home_repeat_f0f1_onclick()
{
//
// knd = 0
  var tmp61
//
  // __patsflab_Home_repeat_f0f1_onclick
  tmp61 = Home_repeat_f0f1_getval();
  Home_repeat_f0f1_button_set("Wait...");
  atslangweb__patsopt_atscc2js_rpc__3__2(tmp61);
  return/*_void*/;
} // end-of-function


function
atslangweb__patsopt_atscc2js_rpc__3__2(arg0)
{
//
// knd = 0
  var tmp6__2
  var tmp11__2
  var tmp14__2
  var tmp15__2
//
  // __patsflab_patsopt_atscc2js_rpc
  tmp6__2 = ats2js_Ajax_XMLHttpRequest_new();
  ats2js_Ajax_XMLHttpRequest_set_onreadystatechange(tmp6__2, atslangweb_patsfun_4__4__2__closurerize(tmp6__2));
  tmp11__2 = atslangweb__patsopt_atscc2js_rpc__cname__19__1();
  ats2js_Ajax_XMLHttpRequest_open(tmp6__2, "POST", tmp11__2, true);
  ats2js_Ajax_XMLHttpRequest_setRequestHeader(tmp6__2, "Content-type", "application/x-www-form-urlencoded");
  tmp15__2 = ats2jspre_encodeURIComponent(arg0);
  tmp14__2 = ats2jspre_string_append("mycode=", tmp15__2);
  ats2js_Ajax_XMLHttpRequest_send_1(tmp6__2, tmp14__2);
  return/*_void*/;
} // end-of-function


function
atslangweb_patsfun_4__4__2(env0)
{
//
// knd = 0
  var tmp9__2
  var tmp10__2
//
  // __patsflab_atslangweb_patsfun_4
  tmp9__2 = ats2js_Ajax_XMLHttpRequest_is_ready_okay(env0);
  if(tmp9__2) {
    tmp10__2 = ats2js_Ajax_XMLHttpRequest_get_responseText(env0);
    atslangweb__patsopt_atscc2js_rpc__reply__20__1(tmp10__2);
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
  Home_repeat_f0f1_reply(arg0);
  return/*_void*/;
} // end-of-function


function
atslangweb__patsopt_atscc2js_rpc__cname__19__1()
{
//
// knd = 0
  var tmpret59__1
//
  // __patsflab_patsopt_atscc2js_rpc__cname
  tmpret59__1 = "SERVER/mycode/atslangweb_patsopt_atscc2js_1_.php";
  return tmpret59__1;
} // end-of-function


/* ****** ****** */

/* end-of-compilation-unit */
