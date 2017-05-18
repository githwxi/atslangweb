<?php
/*
**
** The PHP code is generated by atscc2php
** The starting compilation time is: 2017-5-18:  9h:10m
**
*/

function
ats2phppre_qlistref_make_nil()
{
//
  $tmpret0 = NULL;
  $tmp1 = NULL;
  $tmp2 = NULL;
  $tmp3 = NULL;
  $tmp4 = NULL;
//
  __patsflab_qlistref_make_nil:
  $tmp2 = NULL;
  $tmp1 = ats2phppre_ref($tmp2);
  $tmp4 = NULL;
  $tmp3 = ats2phppre_ref($tmp4);
  $tmpret0 = array($tmp1, $tmp3);
  return $tmpret0;
} // end-of-function


function
ats2phppre_qlistref_length($arg0)
{
//
  $tmpret5 = NULL;
  $tmp6 = NULL;
  $tmp7 = NULL;
  $tmp8 = NULL;
  $tmp9 = NULL;
  $tmp10 = NULL;
  $tmp11 = NULL;
//
  __patsflab_qlistref_length:
  $tmp6 = $arg0[0];
  $tmp7 = $arg0[1];
  $tmp9 = ats2phppre_ref_get_elt($tmp6);
  $tmp8 = ats2phppre_list_length($tmp9);
  $tmp11 = ats2phppre_ref_get_elt($tmp7);
  $tmp10 = ats2phppre_list_length($tmp11);
  $tmpret5 = ats2phppre_add_int1_int1($tmp8, $tmp10);
  return $tmpret5;
} // end-of-function


function
ats2phppre_qlistref_enqueue($arg0, $arg1)
{
//
  $tmp13 = NULL;
  $tmp14 = NULL;
  $tmp15 = NULL;
  $tmp16 = NULL;
//
  __patsflab_qlistref_enqueue:
  $tmp13 = $arg0[0];
  $tmp14 = $arg0[1];
  $tmp16 = ats2phppre_ref_get_elt($tmp13);
  $tmp15 = array($arg1, $tmp16);
  ats2phppre_ref_set_elt($tmp13, $tmp15);
  return/*_void*/;
} // end-of-function


function
ats2phppre_qlistref_dequeue_opt($arg0)
{
//
  $tmpret17 = NULL;
  $tmp18 = NULL;
  $tmp19 = NULL;
  $tmp20 = NULL;
  $tmp21 = NULL;
  $tmp22 = NULL;
  $tmp23 = NULL;
  $tmp25 = NULL;
  $tmp26 = NULL;
  $tmp27 = NULL;
//
  __patsflab_qlistref_dequeue_opt:
  $tmp18 = $arg0[0];
  $tmp19 = $arg0[1];
  $tmp20 = ats2phppre_ref_get_elt($tmp19);
  // ATScaseofseq_beg
  do {
    // ATSbranchseq_beg
    __atstmplab0:
    if(ATSCKptriscons($tmp20)) goto __atstmplab3;
    __atstmplab1:
    $tmp23 = ats2phppre_ref_get_elt($tmp18);
    $tmp25 = NULL;
    ats2phppre_ref_set_elt($tmp18, $tmp25);
    // ATScaseofseq_beg
    do {
      // ATSbranchseq_beg
      __atstmplab4:
      if(ATSCKptriscons($tmp23)) goto __atstmplab7;
      __atstmplab5:
      $tmpret17 = NULL;
      break;
      // ATSbranchseq_end
      // ATSbranchseq_beg
      __atstmplab6:
      __atstmplab7:
      $tmp26 = $tmp23[0];
      $tmp27 = $tmp23[1];
      ats2phppre_ref_set_elt($tmp19, $tmp27);
      $tmpret17 = array($tmp26);
      break;
      // ATSbranchseq_end
    } while(0);
    // ATScaseofseq_end
    break;
    // ATSbranchseq_end
    // ATSbranchseq_beg
    __atstmplab2:
    __atstmplab3:
    $tmp21 = $tmp20[0];
    $tmp22 = $tmp20[1];
    ats2phppre_ref_set_elt($tmp19, $tmp22);
    $tmpret17 = array($tmp21);
    break;
    // ATSbranchseq_end
  } while(0);
  // ATScaseofseq_end
  return $tmpret17;
} // end-of-function


function
ats2phppre_qlistref_foldleft($arg0, $arg1, $arg2)
{
//
  $tmpret30 = NULL;
  $tmp31 = NULL;
  $tmp32 = NULL;
  $tmp41 = NULL;
  $tmp42 = NULL;
  $tmp43 = NULL;
//
  __patsflab_qlistref_foldleft:
  $tmp31 = $arg0[0];
  $tmp32 = $arg0[1];
  $tmp41 = ats2phppre_ref_get_elt($tmp31);
  $tmp43 = ats2phppre_ref_get_elt($tmp32);
  $tmp42 = _ats2phppre_qlistref_auxl_5($arg2, $arg1, $tmp43);
  $tmpret30 = _ats2phppre_qlistref_auxr_6($arg2, $tmp41, $tmp42);
  return $tmpret30;
} // end-of-function


function
_ats2phppre_qlistref_auxl_5($env0, $arg0, $arg1)
{
//
  $apy0 = NULL;
  $apy1 = NULL;
  $tmpret33 = NULL;
  $tmp34 = NULL;
  $tmp35 = NULL;
  $tmp36 = NULL;
//
  __patsflab__ats2phppre_qlistref_auxl_5:
  // ATScaseofseq_beg
  do {
    // ATSbranchseq_beg
    __atstmplab8:
    if(ATSCKptriscons($arg1)) goto __atstmplab11;
    __atstmplab9:
    $tmpret33 = $arg0;
    break;
    // ATSbranchseq_end
    // ATSbranchseq_beg
    __atstmplab10:
    __atstmplab11:
    $tmp34 = $arg1[0];
    $tmp35 = $arg1[1];
    $tmp36 = $env0[0]($env0, $arg0, $tmp34);
    // ATStailcalseq_beg
    $apy0 = $tmp36;
    $apy1 = $tmp35;
    $arg0 = $apy0;
    $arg1 = $apy1;
    goto __patsflab__ats2phppre_qlistref_auxl_5;
    // ATStailcalseq_end
    break;
    // ATSbranchseq_end
  } while(0);
  // ATScaseofseq_end
  return $tmpret33;
} // end-of-function


function
_ats2phppre_qlistref_auxr_6($env0, $arg0, $arg1)
{
//
  $tmpret37 = NULL;
  $tmp38 = NULL;
  $tmp39 = NULL;
  $tmp40 = NULL;
//
  __patsflab__ats2phppre_qlistref_auxr_6:
  // ATScaseofseq_beg
  do {
    // ATSbranchseq_beg
    __atstmplab12:
    if(ATSCKptriscons($arg0)) goto __atstmplab15;
    __atstmplab13:
    $tmpret37 = $arg1;
    break;
    // ATSbranchseq_end
    // ATSbranchseq_beg
    __atstmplab14:
    __atstmplab15:
    $tmp38 = $arg0[0];
    $tmp39 = $arg0[1];
    $tmp40 = _ats2phppre_qlistref_auxr_6($env0, $tmp39, $arg1);
    $tmpret37 = $env0[0]($env0, $tmp40, $tmp38);
    break;
    // ATSbranchseq_end
  } while(0);
  // ATScaseofseq_end
  return $tmpret37;
} // end-of-function


function
ats2phppre_qlistref_foldright($arg0, $arg1, $arg2)
{
//
  $tmpret44 = NULL;
  $tmp45 = NULL;
  $tmp46 = NULL;
  $tmp55 = NULL;
  $tmp56 = NULL;
  $tmp57 = NULL;
//
  __patsflab_qlistref_foldright:
  $tmp45 = $arg0[0];
  $tmp46 = $arg0[1];
  $tmp55 = ats2phppre_ref_get_elt($tmp46);
  $tmp57 = ats2phppre_ref_get_elt($tmp45);
  $tmp56 = _ats2phppre_qlistref_auxl_8($arg1, $arg2, $tmp57);
  $tmpret44 = _ats2phppre_qlistref_auxr_9($arg1, $tmp55, $tmp56);
  return $tmpret44;
} // end-of-function


function
_ats2phppre_qlistref_auxl_8($env0, $arg0, $arg1)
{
//
  $apy0 = NULL;
  $apy1 = NULL;
  $tmpret47 = NULL;
  $tmp48 = NULL;
  $tmp49 = NULL;
  $tmp50 = NULL;
//
  __patsflab__ats2phppre_qlistref_auxl_8:
  // ATScaseofseq_beg
  do {
    // ATSbranchseq_beg
    __atstmplab16:
    if(ATSCKptriscons($arg1)) goto __atstmplab19;
    __atstmplab17:
    $tmpret47 = $arg0;
    break;
    // ATSbranchseq_end
    // ATSbranchseq_beg
    __atstmplab18:
    __atstmplab19:
    $tmp48 = $arg1[0];
    $tmp49 = $arg1[1];
    $tmp50 = $env0[0]($env0, $tmp48, $arg0);
    // ATStailcalseq_beg
    $apy0 = $tmp50;
    $apy1 = $tmp49;
    $arg0 = $apy0;
    $arg1 = $apy1;
    goto __patsflab__ats2phppre_qlistref_auxl_8;
    // ATStailcalseq_end
    break;
    // ATSbranchseq_end
  } while(0);
  // ATScaseofseq_end
  return $tmpret47;
} // end-of-function


function
_ats2phppre_qlistref_auxr_9($env0, $arg0, $arg1)
{
//
  $tmpret51 = NULL;
  $tmp52 = NULL;
  $tmp53 = NULL;
  $tmp54 = NULL;
//
  __patsflab__ats2phppre_qlistref_auxr_9:
  // ATScaseofseq_beg
  do {
    // ATSbranchseq_beg
    __atstmplab20:
    if(ATSCKptriscons($arg0)) goto __atstmplab23;
    __atstmplab21:
    $tmpret51 = $arg1;
    break;
    // ATSbranchseq_end
    // ATSbranchseq_beg
    __atstmplab22:
    __atstmplab23:
    $tmp52 = $arg0[0];
    $tmp53 = $arg0[1];
    $tmp54 = _ats2phppre_qlistref_auxr_9($env0, $tmp53, $arg1);
    $tmpret51 = $env0[0]($env0, $tmp52, $tmp54);
    break;
    // ATSbranchseq_end
  } while(0);
  // ATScaseofseq_end
  return $tmpret51;
} // end-of-function

/* ****** ****** */

/* end-of-compilation-unit */
?>
