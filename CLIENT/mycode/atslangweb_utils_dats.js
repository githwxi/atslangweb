/*
**
** The JavaScript code is generated by atscc2js
** The starting compilation time is: 2014-9-20:  2h:44m
**
*/

function
atslangweb__patsfun_3__3__1__closurerize(env0)
{
  return [function(cenv) { return atslangweb__patsfun_3__3__1(cenv[1]); }, env0];
}


function
Home_hello_onclick()
{
//
// knd = 0
//
  // __patsflab_Home_hello_onclick
  atslangweb__patsopt_tcats_rpc__2__1("implement main () = 0");
  return/*_void*/;
} // end-of-function


function
atslangweb__patsopt_tcats_rpc__2__1(arg0)
{
//
// knd = 0
  var tmp3__1
  var tmp10__1
  var tmp11__1
//
  // __patsflab_patsopt_tcats_rpc
  tmp3__1 = ats2js_Ajax_XMLHttpRequest_new();
  ats2js_Ajax_XMLHttpRequest_set_onreadystatechange(tmp3__1, atslangweb__patsfun_3__3__1__closurerize(tmp3__1));
  ats2js_Ajax_XMLHttpRequest_open(tmp3__1, "POST", "SERVER/mycode/atslangweb__patsopt_tcats_1_.php", true);
  ats2js_Ajax_XMLHttpRequest_setRequestHeader(tmp3__1, "Content-type", "application/x-www-form-urlencoded");
  tmp11__1 = ats2jspre_encodeURIComponent(arg0);
  tmp10__1 = ats2jspre_string_append("mycode=", tmp11__1);
  ats2js_Ajax_XMLHttpRequest_send_1(tmp3__1, tmp10__1);
  return/*_void*/;
} // end-of-function


function
atslangweb__patsfun_3__3__1(env0)
{
//
// knd = 0
  var tmp6__1
  var tmp7__1
//
  // __patsflab_atslangweb__patsfun_3
  tmp6__1 = ats2js_Ajax_XMLHttpRequest_is_ready_okay(env0);
  if(tmp6__1) {
    tmp7__1 = ats2js_Ajax_XMLHttpRequest_get_responseText(env0);
    atslangweb__patsopt_tcats_rpc__reply__1__1(tmp7__1);
  } else {
    // ATSINSmove_void
  } // endif
  return/*_void*/;
} // end-of-function


function
atslangweb__patsopt_tcats_rpc__reply__1__1(arg0)
{
//
// knd = 0
//
  // __patsflab_patsopt_tcats_rpc__reply
  ats2jspre_alert(arg0);
  return/*_void*/;
} // end-of-function


/* ****** ****** */

/* end-of-compilation-unit */
