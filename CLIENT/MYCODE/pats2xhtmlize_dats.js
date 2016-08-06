/*
**
** The JavaScript code is generated by atscc2js
** The starting compilation time is: 2016-8-6:  0h: 9m
**
*/

/* ATSextcode_beg() */
//
function
pats2xhtmlize_srcdoc_getsrc
  (srcdoc)
  { return srcdoc.textContent; }
//
function
pats2xhtmlize_srcdoc_update
  (srcdoc, resp)
  { return srcdoc.innerHTML = resp; }
//
/* ATSextcode_end() */

/* ATSextcode_beg() */
//
function
pats2xhtmlize_waiting
  (srcdoc)
{
  var
  prompt = "<pre>Waiting...</pre>";
  return pats2xhtmlize_srcdoc_update(srcdoc, prompt);
} /* pats2xhtmlize_waiting */
//
function
pats2xhtmlize_do_response
(
  srcdoc, mycode, resp
) {
  var
  resparr =
  JSON.parse(decodeURIComponent(resp));
/*
  alert(resparr);
  alert(resparr[0]);
  alert(resparr[1]);
*/
//
  if(resparr[0]>0){
//
// HX-2016-07-25:
// Displaying the original source code in case of error:
//
    resparr[1] = "<pre>"+mycode+"</pre>";
  } /* end of [if] */
//
  return pats2xhtmlize_srcdoc_update(srcdoc, resparr[1]);
//
} /* pats2xhtmlize_do_response */
//
/* ATSextcode_end() */

function
__patsfun_1__closurerize(env0, env1, env2)
{
  return [function(cenv) { return __patsfun_1(cenv[1], cenv[2], cenv[3]); }, env0, env1, env2];
}


function
pats2xhtmlize_eval(arg0, arg1, arg2)
{
//
// knd = 0
  var tmp1
  var tmp3
  var tmp10
  var tmp11
  var tmp12
  var tmp13
  var tmp14
  var tmp15
  var tmplab, tmplab_js
//
  // __patsflab_pats2xhtmlize_eval
  tmp1 = pats2xhtmlize_srcdoc_getsrc(arg1);
  pats2xhtmlize_waiting(arg1, "Waiting...");
  tmp3 = ats2js_Ajax_XMLHttpRequest_new();
  ats2js_Ajax_XMLHttpRequest_set_onreadystatechange(tmp3, __patsfun_1__closurerize(arg1, tmp1, tmp3));
  ats2js_Ajax_XMLHttpRequest_open(tmp3, "POST", "http://www.ats-lang.org/SERVER/MYCODE/atslangweb_pats2xhtml_eval_0_.php", true);
  ats2js_Ajax_XMLHttpRequest_setRequestHeader(tmp3, "Content-type", "application/x-www-form-urlencoded");
  tmp14 = ats2jspre_String(arg0);
  tmp13 = ats2jspre_string_append("stadyn=", tmp14);
  tmp12 = ats2jspre_string_append(tmp13, "&");
  tmp11 = ats2jspre_string_append(tmp12, "mycode=");
  tmp15 = ats2jspre_encodeURIComponent(arg2);
  tmp10 = ats2jspre_string_append(tmp11, tmp15);
  ats2js_Ajax_XMLHttpRequest_send_1(tmp3, tmp10);
  return/*_void*/;
} // end-of-function


function
__patsfun_1(env0, env1, env2)
{
//
// knd = 0
  var tmp6
  var tmp7
  var tmplab, tmplab_js
//
  // __patsflab___patsfun_1
  tmp6 = ats2js_Ajax_XMLHttpRequest_is_ready_okay(env2);
  if(tmp6) {
    tmp7 = ats2js_Ajax_XMLHttpRequest_get_responseText(env2);
    pats2xhtmlize_do_response(env0, env1, tmp7);
  } else {
    // ATSINSmove_void
  } // endif
  return/*_void*/;
} // end-of-function


function
pats2xhtmlize_process_one(arg0, arg1)
{
//
// knd = 0
  var tmp17
  var tmplab, tmplab_js
//
  // __patsflab_pats2xhtmlize_process_one
  tmp17 = pats2xhtmlize_srcdoc_getsrc(arg1);
  pats2xhtmlize_eval(arg0, arg1, tmp17);
  return/*_void*/;
} // end-of-function


function
_057_home_057_hwxi_057_Research_057_ATS_055_Postiats_057_doc_057_PROJECT_057_MEDIUM_057_ats2langweb_057_CLIENT_057_DATS_057_pats2xhtmlize_056_dats__dynload()
{
//
// knd = 0
  var tmplab, tmplab_js
//
  // ATSdynload()
  // ATSdynloadflag_ext(_057_home_057_hwxi_057_Research_057_ATS_055_Postiats_057_doc_057_PROJECT_057_MEDIUM_057_ats2langweb_057_CLIENT_057_DATS_057_pats2xhtmlize_056_dats__dynloadflag(62))
  if(ATSCKiseqz(_057_home_057_hwxi_057_Research_057_ATS_055_Postiats_057_doc_057_PROJECT_057_MEDIUM_057_ats2langweb_057_CLIENT_057_DATS_057_pats2xhtmlize_056_dats__dynloadflag)) {
    _057_home_057_hwxi_057_Research_057_ATS_055_Postiats_057_doc_057_PROJECT_057_MEDIUM_057_ats2langweb_057_CLIENT_057_DATS_057_pats2xhtmlize_056_dats__dynloadflag = 1 ; // flag is set
  } // endif
  return/*_void*/;
} // end-of-function


/* ATSextcode_beg() */
function
pats2xhtmlize_process_all()
{
//
$('*').each(
  function() {
    if(this.tagName==='SATS2XHTML')pats2xhtmlize_process_one(0, this);
    if(this.tagName==='DATS2XHTML')pats2xhtmlize_process_one(1, this);return;
  } /* function */
) /* end of [each] */
//
} /* pats2xhtmlize_process_all */
/* ATSextcode_end() */

/* ****** ****** */

/* end-of-compilation-unit */
