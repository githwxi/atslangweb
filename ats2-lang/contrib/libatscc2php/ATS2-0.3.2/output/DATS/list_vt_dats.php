<?php
/*
**
** The PHP code is generated by atscc2php
** The starting compilation time is: 2017-5-18:  9h:11m
**
*/

function
ats2phppre_list_vt_length($arg0)
{
//
  $tmpret2 = NULL;
//
  __patsflab_list_vt_length:
  $tmpret2 = _ats2phppre_list_vt_loop_3($arg0, 0);
  return $tmpret2;
} // end-of-function


function
_ats2phppre_list_vt_loop_3($arg0, $arg1)
{
//
  $apy0 = NULL;
  $apy1 = NULL;
  $tmpret3 = NULL;
  $tmp5 = NULL;
  $tmp6 = NULL;
//
  __patsflab__ats2phppre_list_vt_loop_3:
  // ATScaseofseq_beg
  do {
    // ATSbranchseq_beg
    __atstmplab8:
    if(ATSCKptriscons($arg0)) goto __atstmplab11;
    __atstmplab9:
    $tmpret3 = $arg1;
    break;
    // ATSbranchseq_end
    // ATSbranchseq_beg
    __atstmplab10:
    __atstmplab11:
    $tmp5 = $arg0[1];
    $tmp6 = ats2phppre_add_int1_int1($arg1, 1);
    // ATStailcalseq_beg
    $apy0 = $tmp5;
    $apy1 = $tmp6;
    $arg0 = $apy0;
    $arg1 = $apy1;
    goto __patsflab__ats2phppre_list_vt_loop_3;
    // ATStailcalseq_end
    break;
    // ATSbranchseq_end
  } while(0);
  // ATScaseofseq_end
  return $tmpret3;
} // end-of-function


function
ats2phppre_list_vt_snoc($arg0, $arg1)
{
//
  $tmpret7 = NULL;
  $tmp8 = NULL;
  $tmp9 = NULL;
//
  __patsflab_list_vt_snoc:
  $tmp9 = NULL;
  $tmp8 = array($arg1, $tmp9);
  $tmpret7 = ats2phppre_list_vt_append($arg0, $tmp8);
  return $tmpret7;
} // end-of-function


function
ats2phppre_list_vt_extend($arg0, $arg1)
{
//
  $tmpret10 = NULL;
  $tmp11 = NULL;
  $tmp12 = NULL;
//
  __patsflab_list_vt_extend:
  $tmp12 = NULL;
  $tmp11 = array($arg1, $tmp12);
  $tmpret10 = ats2phppre_list_vt_append($arg0, $tmp11);
  return $tmpret10;
} // end-of-function


function
ats2phppre_list_vt_append($arg0, $arg1)
{
//
  $tmpret13 = NULL;
//
  __patsflab_list_vt_append:
  $tmpret13 = _ats2phppre_list_vt_aux_7($arg0, $arg1);
  return $tmpret13;
} // end-of-function


function
_ats2phppre_list_vt_aux_7($arg0, $arg1)
{
//
  $tmpret14 = NULL;
  $tmp15 = NULL;
  $tmp16 = NULL;
  $tmp17 = NULL;
//
  __patsflab__ats2phppre_list_vt_aux_7:
  // ATScaseofseq_beg
  do {
    // ATSbranchseq_beg
    __atstmplab12:
    if(ATSCKptriscons($arg0)) goto __atstmplab15;
    __atstmplab13:
    $tmpret14 = $arg1;
    break;
    // ATSbranchseq_end
    // ATSbranchseq_beg
    __atstmplab14:
    __atstmplab15:
    $tmp15 = $arg0[0];
    $tmp16 = $arg0[1];
    // ATSINSfreecon($arg0);
    $tmp17 = _ats2phppre_list_vt_aux_7($tmp16, $arg1);
    $tmpret14 = array($tmp15, $tmp17);
    break;
    // ATSbranchseq_end
  } while(0);
  // ATScaseofseq_end
  return $tmpret14;
} // end-of-function


function
ats2phppre_list_vt_reverse($arg0)
{
//
  $tmpret18 = NULL;
  $tmp19 = NULL;
//
  __patsflab_list_vt_reverse:
  $tmp19 = NULL;
  $tmpret18 = ats2phppre_list_vt_reverse_append($arg0, $tmp19);
  return $tmpret18;
} // end-of-function


function
ats2phppre_list_vt_reverse_append($arg0, $arg1)
{
//
  $tmpret20 = NULL;
//
  __patsflab_list_vt_reverse_append:
  $tmpret20 = _ats2phppre_list_vt_loop_10($arg0, $arg1);
  return $tmpret20;
} // end-of-function


function
_ats2phppre_list_vt_loop_10($arg0, $arg1)
{
//
  $apy0 = NULL;
  $apy1 = NULL;
  $tmpret21 = NULL;
  $tmp22 = NULL;
  $tmp23 = NULL;
  $tmp24 = NULL;
//
  __patsflab__ats2phppre_list_vt_loop_10:
  // ATScaseofseq_beg
  do {
    // ATSbranchseq_beg
    __atstmplab16:
    if(ATSCKptriscons($arg0)) goto __atstmplab19;
    __atstmplab17:
    $tmpret21 = $arg1;
    break;
    // ATSbranchseq_end
    // ATSbranchseq_beg
    __atstmplab18:
    __atstmplab19:
    $tmp22 = $arg0[0];
    $tmp23 = $arg0[1];
    // ATSINSfreecon($arg0);
    $tmp24 = array($tmp22, $arg1);
    // ATStailcalseq_beg
    $apy0 = $tmp23;
    $apy1 = $tmp24;
    $arg0 = $apy0;
    $arg1 = $apy1;
    goto __patsflab__ats2phppre_list_vt_loop_10;
    // ATStailcalseq_end
    break;
    // ATSbranchseq_end
  } while(0);
  // ATScaseofseq_end
  return $tmpret21;
} // end-of-function

/* ****** ****** */

/* end-of-compilation-unit */
?>
