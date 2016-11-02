<?php
/*
** Time of Generation:
** Sat Oct  8 10:20:45 EDT 2016
*/
?>
<?php

/*
******
*
* HX-2014-08:
* for PHP code
* translated from ATS
*
******
*/

/*
******
* beg of [basics_cats.php]
******
*/

/* ****** ****** */

function
ATSCKiseqz($x) { return ($x === 0); }
function
ATSCKisneqz($x) { return ($x !== 0); }

/* ****** ****** */

function
ATSCKptrisnull($xs) { return ($xs === NULL) ; }
function
ATSCKptriscons($xs) { return ($xs !== NULL) ; }

/* ****** ****** */

function
ATSCKpat_int($tmp, $given) { return ($tmp === $given) ; }
function
ATSCKpat_bool($tmp, $given) { return ($tmp === $given) ; }
function
ATSCKpat_char($tmp, $given) { return ($tmp === $given) ; }
function
ATSCKpat_float($tmp, $given) { return ($tmp === $given) ; }

/* ****** ****** */

function
ATSCKpat_con0($con, $tag) { return ($con === $tag) ; }
function
ATSCKpat_con1($con, $tag) { return ($con[0] === $tag) ; }

/* ****** ****** */
//
function
ATSINScaseof_fail($errmsg)
{
  fprintf(STDERR, "ATSINScaseof_fail:%s", $errmsg); exit(1);
  return;
}
//
function
ATSINSdeadcode_fail()
  { fprintf(STDERR, "ATSINSdeadcode_fail"); exit(1); return; }
//
/* ****** ****** */

function
ATSPMVempty() { return; }

/* ****** ****** */

function
ATSPMVlazyval
  ($thunk)
{
  return array(0, $thunk);
}

/* ****** ****** */

function
ATSPMVlazyval_eval
  (&$lazyval)
{
//
  $flag = $lazyval[0];
//
  if($flag===0)
  {
    $lazyval[0] = 1;
    $mythunk = $lazyval[1];
    $lazyval[1] = $mythunk[0]($mythunk);
  } else {
    $lazyval[0] = $flag + 1;
  } // end of [if]
//
  return ($lazyval[1]);
//
} // end of [ATSPMVlazyval_eval]

/* ****** ****** */
//
function
ATSPMVllazyval($thunk){ return $thunk; }
//
/* ****** ****** */
//
function
ATSPMVllazyval_eval($llazyval)
  { return $llazyval[0]($llazyval, TRUE); }
function
atspre_lazy_vt_free($llazyval)
  { return $llazyval[0]($llazyval, FALSE); }
//
/* ****** ****** */

function
ats2phppre_echo_obj($x) { echo($x); return; }

/* ****** ****** */
/*
//
function
ats2phppre_echo0_obj() { return; }
function
ats2phppre_echo1_obj($x1) { echo($x1); return; }
function
ats2phppre_echo2_obj($x1, $x2) { echo $x1, $x2; return; }
//
function
ats2phppre_echo3_obj
  ($x1, $x2, $x3) { echo $x1, $x2, $x3; return; }
function
ats2phppre_echo4_obj
  ($x1, $x2, $x3, $x4) { echo $x1, $x2, $x3, $x4; return; }
function
ats2phppre_echo5_obj
  ($x1, $x2, $x3, $x4, $x5) { echo $x1, $x2, $x3, $x4, $x5; return; }
function
ats2phppre_echo6_obj
  ($x1, $x2, $x3, $x4, $x5, $x6) { echo $x1, $x2, $x3, $x4, $x5, $x6; return; }
//
function
ats2phppre_echo7_obj
  ($x1, $x2, $x3, $x4, $x5, $x6, $x7)
  { echo $x1, $x2, $x3, $x4, $x5, $x6, $x7; return; }
function
ats2phppre_echo8_obj
  ($x1, $x2, $x3, $x4, $x5, $x6, $x7, $x8)
  { echo $x1, $x2, $x3, $x4, $x5, $x6, $x7, $x8; return; }
//
*/
/* ****** ****** */

function
ats2phppre_print_newline() { ats2phppre_fprint_newline(STDOUT); }
function
ats2phppre_prerr_newline() { ats2phppre_fprint_newline(STDERR); }
function
ats2phppre_fprint_newline($out) { fprintf($out, "\n"); fflush($out); return; }

/* ****** ****** */

function
ats2phppre_lazy2cloref($lazyval) { return $lazyval[1]; }

/* ****** ****** */
//
function
ats2phppre_assert_bool0($tfv) { if (!$tfv) exit("**EXIT**"); return; }
function
ats2phppre_assert_bool1($tfv) { if (!$tfv) exit("**EXIT**"); return; }
//
/* ****** ****** */
//
function
ats2phppre_assert_errmsg_bool0($tfv, $errmsg)
{
  if (!$tfv) { fprintf(STDERR, "%s", $errmsg); exit(errmsg); }; return;
}
function
ats2phppre_assert_errmsg_bool1($tfv, $errmsg)
{
  if (!$tfv) { fprintf(STDERR, "%s", $errmsg); exit(errmsg); }; return;
}
//
/* ****** ****** */

/* end of [basics_cats.php] */

?>
<?php

/*
******
*
* HX-2014-08:
* for PHP code
* translated from ATS
*
******
*/

/*
******
* beg of [integer_cats.php]
******
*/

/* ****** ****** */

function
ats2phppre_abs_int0($x) { return abs($x); }
function
ats2phppre_neg_int0($x) { return ( -$x ); }

/* ****** ****** */

function
ats2phppre_succ_int0($x) { return ($x + 1); }
function
ats2phppre_pred_int0($x) { return ($x - 1); }

/* ****** ****** */

function
ats2phppre_add_int0_int0($x, $y) { return ($x + $y); }
function
ats2phppre_sub_int0_int0($x, $y) { return ($x - $y); }
function
ats2phppre_mul_int0_int0($x, $y) { return ($x * $y); }
function
ats2phppre_div_int0_int0($x, $y) { return intval($x / $y); }
function
ats2phppre_mod_int0_int0($x, $y) { return ($x % $y); }

/* ****** ****** */

function
ats2phppre_add_int1_int1($x, $y) { return ($x + $y); }
function
ats2phppre_sub_int1_int1($x, $y) { return ($x - $y); }
function
ats2phppre_mul_int1_int1($x, $y) { return ($x * $y); }
function
ats2phppre_div_int1_int1($x, $y) { return intval($x / $y); }

/* ****** ****** */
//
function
ats2phppre_mod_int1_int1($x, $y) { return ($x % $y); }
function
ats2phppre_nmod_int1_int1($x, $y) { return ($x % $y); }
//
/* ****** ****** */

function
ats2phppre_lt_int0_int0($x, $y) { return ($x < $y); }
function
ats2phppre_lte_int0_int0($x, $y) { return ($x <= $y); }
function
ats2phppre_gt_int0_int0($x, $y) { return ($x > $y); }
function
ats2phppre_gte_int0_int0($x, $y) { return ($x >= $y); }
function
ats2phppre_eq_int0_int0($x, $y) { return ($x === $y); }
function
ats2phppre_neq_int0_int0($x, $y) { return ($x !== $y); }

/* ****** ****** */

function
ats2phppre_lt_int1_int1($x, $y) { return ($x < $y); }
function
ats2phppre_lte_int1_int1($x, $y) { return ($x <= $y); }
function
ats2phppre_gt_int1_int1($x, $y) { return ($x > $y); }
function
ats2phppre_gte_int1_int1($x, $y) { return ($x >= $y); }
function
ats2phppre_eq_int1_int1($x, $y) { return ($x === $y); }
function
ats2phppre_neq_int1_int1($x, $y) { return ($x !== $y); }

/* ****** ****** */

/* end of [integer_cats.php] */

?>
<?php

/*
******
*
* HX-2014-11:
* for PHP code
* translated from ATS
*
******
*/

/*
******
* beg of [bool_cats.php]
******
*/

/* ****** ****** */

/* end of [bool_cats.php] */

?>
<?php

/*
******
*
* HX-2014-08:
* for PHP code
* translated from ATS
*
******
*/

/*
******
* beg of [float_cats.php]
******
*/

/* ****** ****** */
//
function
ats2phppre_double2int($x) { return intval($x); }
function
ats2phppre_int_of_double($x) { return intval($x); }
//
/* ****** ****** */
//
function
ats2phppre_int2double($x) { return floatval($x); }
function
ats2phppre_double_of_int($x) { return floatval($x); }
//
/* ****** ****** */

function
ats2phppre_abs_double($x) { return abs($x); }
function
ats2phppre_neg_double($x) { return ( -$x ); }

/* ****** ****** */

function
ats2phppre_succ_double($x) { return ($x + 1); }
function
ats2phppre_pred_double($x) { return ($x - 1); }

/* ****** ****** */

function
ats2phppre_add_double_double($x, $y) { return ($x + $y); }
function
ats2phppre_sub_double_double($x, $y) { return ($x - $y); }
function
ats2phppre_mul_double_double($x, $y) { return ($x * $y); }
function
ats2phppre_div_double_double($x, $y) { return ($x / $y); }

/* ****** ****** */

function
ats2phppre_lt_double_double($x, $y) { return ($x < $y); }
function
ats2phppre_lte_double_double($x, $y) { return ($x <= $y); }
function
ats2phppre_gt_double_double($x, $y) { return ($x > $y); }
function
ats2phppre_gte_double_double($x, $y) { return ($x >= $y); }
function
ats2phppre_eq_double_double($x, $y) { return ($x === $y); }
function
ats2phppre_neq_double_double($x, $y) { return ($x !== $y); }

/* ****** ****** */

/* end of [float_cats.php] */

?>
<?php

/*
******
*
* HX-2014-08:
* for PHP code
* translated from ATS
*
******
*/

/*
******
* beg of [string_cats.php]
******
*/

/* ****** ****** */

function
ats2phppre_strval($x) { return strval($x); }

/* ****** ****** */

function
ats2phppre_strlen($x) { return strlen($x); }
function
ats2phppre_string_length($x) { return strlen($x); }

/* ****** ****** */

/* end of [string_cats.php] */

?>
<?php

/*
******
*
* HX-2014-08:
* for PHP code
* translated from ATS
*
******
*/

/*
******
* beg of [print_cats.php]
******
*/

/* ****** ****** */
//
function
ats2phppre_print_int($x)
  { fprintf(STDOUT, "%d", $x); return; }
function
ats2phppre_prerr_int($x)
  { fprintf(STDERR, "%d", $x); return; }
function
ats2phppre_fprint_int
  ($out, $x) { fprintf($out, "%d", $x); return; }
//
/* ****** ****** */
//
function
ats2phppre_print_bool($x)
{
  ats2phppre_fprint_bool(STDOUT, $x); return;
}
function
ats2phppre_prerr_bool($x)
{
  ats2phppre_fprint_bool(STDERR, $x); return;
}
function
ats2phppre_fprint_bool
  ($out, $x)
{
  if($x) {
    fprintf($out, "true"); return;
  } else {
    fprintf($out, "false"); return;
  } // end of [if]
}
//
/* ****** ****** */
//
function
ats2phppre_print_double($x)
  { fprintf(STDOUT, "%f", $x); return; }
function
ats2phppre_prerr_double($x)
  { fprintf(STDERR, "%f", $x); return; }
function
ats2phppre_fprint_double
  ($out, $x) { fprintf($out, "%f", $x); return; }
//
/* ****** ****** */
//
function
ats2phppre_print_string($x)
  { fprintf(STDOUT, "%s", $x); return ; }
function
ats2phppre_prerr_string($x)
  { fprintf(STDERR, "%s", $x); return ; }
function
ats2phppre_fprint_string
 ($out, $x) { fprintf($out, "%s", $x); return ; }
//
/* ****** ****** */
//
function
ats2phppre_print_obj($x) { print($x); return; }
function
ats2phppre_print_r_obj($x) { print_r($x); return; }
//
/* ****** ****** */

/* end of [print_cats.php] */

?>
<?php

/*
******
*
* HX-2014-09:
* for PHP code
* translated from ATS
*
******
*/

/*
******
* beg of [filebas_cats.php]
******
*/

/* ****** ****** */
//
/*
$ats2phppre_stdin = STDIN;
$ats2phppre_stdout = STDOUT;
$ats2phppre_stderr = STDERR;
*/
//
/* ****** ****** */

/* end of [filebas_cats.php] */

?>
<?php

/*
******
*
* HX-2014-08:
* for PHP code
* translated from ATS
*
******
*/

/*
******
* beg of [PHPref_cats.php]
******
*/

/* ****** ****** */

class
PHPref {
  public $value ; // this is the payload
} /* end of [class] */

/* ****** ****** */
//
function
PHPref_new($x0) {
  $res = new PHPref;
  $res->value = $x0; return $res;
}
function
PHPref_make_elt($x0) { return PHPref_new($x0); }
//
/* ****** ****** */
//
function
PHPref_get_elt($A) { return $A->value ; }
//
function
PHPref_set_elt($A, $x) { $A->value = $x; return ; }
//
/* ****** ****** */

/* end of [PHPref_cats.php] */

?>
<?php

/*
******
*
* HX-2014-08:
* for PHP code
* translated from ATS
*
******
*/

/*
******
* beg of [PHParref_cats.php]
******
*/

/* ****** ****** */
//
function
PHParray_nil() { return array(); }
function
PHParray_sing($x) { return array($x); }
function
PHParray_pair($x1, $x2) { return array($x1, $x2); }
//
/* ****** ****** */

/* end of [PHParray_cats.php] */

?>
<?php

/*
******
*
* HX-2014-08:
* for PHP code
* translated from ATS
*
******
*/

/*
******
* beg of [PHParref_cats.php]
******
*/

/* ****** ****** */

class
PHParref {
  public $array ; // this is a PHParray
} /* end of [class] */

/* ****** ****** */
//
function
PHParref_nil() {
  $res = new PHParref; $res->array = array(); return $res;
}
//
function
PHParref_sing($x) {
  $res = new PHParref; $res->array = array($x); return $res;
}
//
function
PHParref_pair($x1, $x2) {
  $res = new PHParref; $res->array = array($x1, x2); return $res;
}
//
/* ****** ****** */

function
PHParref_size($A) { return count($A->array) ; }
function
PHParref_length($A) { return count($A->array) ; }

/* ****** ****** */
//
function
PHParref_get_at($A, $i)
{
  return $A->array[$i] ;
}
//
function
PHParref_set_at($A, $i, $x)
{
  $A->array[$i] = $x; return ;
}
//
/* ****** ****** */
//
function
PHParref_unset($A, $k)
  { unset($A->array[$k]); return; }
//
/* ****** ****** */
//
function
PHParref_extend($A, $x) { $A->array[] = $x; return; }
//
/* ****** ****** */

function
PHParref_copy ($A)
{
  $A2 = new PHParref;
  $A2->array = $A->array; return $A2;
}

/* ****** ****** */

function
PHParref_values($A)
{
  $A2 = new PHParref;
  $A2->array = array_values($A->array); return $A2;
}

/* ****** ****** */

/* end of [PHParref_cats.php] */

?>
<?php
/*
**
** The PHP code is generated by atscc2php
** The starting compilation time is: 2016-10-8: 10h:20m
**
*/
function
_ats2phppre_list_patsfun_29__closurerize($env0)
{
  return array(function($cenv, $arg0) { return _ats2phppre_list_patsfun_29($cenv[1], $arg0); }, $env0);
}

function
_ats2phppre_list_patsfun_33__closurerize($env0)
{
  return array(function($cenv, $arg0) { return _ats2phppre_list_patsfun_33($cenv[1], $arg0); }, $env0);
}

function
_ats2phppre_list_patsfun_36__closurerize($env0)
{
  return array(function($cenv, $arg0) { return _ats2phppre_list_patsfun_36($cenv[1], $arg0); }, $env0);
}

function
_ats2phppre_list_patsfun_40__closurerize($env0)
{
  return array(function($cenv, $arg0) { return _ats2phppre_list_patsfun_40($cenv[1], $arg0); }, $env0);
}

function
_ats2phppre_list_patsfun_44__closurerize($env0)
{
  return array(function($cenv, $arg0) { return _ats2phppre_list_patsfun_44($cenv[1], $arg0); }, $env0);
}

function
_ats2phppre_list_patsfun_48__closurerize($env0)
{
  return array(function($cenv, $arg0) { return _ats2phppre_list_patsfun_48($cenv[1], $arg0); }, $env0);
}

function
_ats2phppre_list_patsfun_51__closurerize($env0)
{
  return array(function($cenv, $arg0) { return _ats2phppre_list_patsfun_51($cenv[1], $arg0); }, $env0);
}

function
_ats2phppre_list_patsfun_55__closurerize($env0)
{
  return array(function($cenv, $arg0) { return _ats2phppre_list_patsfun_55($cenv[1], $arg0); }, $env0);
}

function
_ats2phppre_list_patsfun_59__closurerize($env0)
{
  return array(function($cenv, $arg0) { return _ats2phppre_list_patsfun_59($cenv[1], $arg0); }, $env0);
}

function
_ats2phppre_list_patsfun_63__closurerize($env0, $env1)
{
  return array(function($cenv, $arg0) { return _ats2phppre_list_patsfun_63($cenv[1], $cenv[2], $arg0); }, $env0, $env1);
}

function
_ats2phppre_list_patsfun_67__closurerize($env0, $env1)
{
  return array(function($cenv, $arg0) { return _ats2phppre_list_patsfun_67($cenv[1], $cenv[2], $arg0); }, $env0, $env1);
}

function
_ats2phppre_list_patsfun_71__closurerize($env0, $env1)
{
  return array(function($cenv, $arg0) { return _ats2phppre_list_patsfun_71($cenv[1], $cenv[2], $arg0); }, $env0, $env1);
}

function
_ats2phppre_list_patsfun_75__closurerize($env0, $env1)
{
  return array(function($cenv, $arg0) { return _ats2phppre_list_patsfun_75($cenv[1], $cenv[2], $arg0); }, $env0, $env1);
}


function
ats2phppre_list_make_intrange_2($arg0, $arg1)
{
//
  $tmpret2 = NULL;
//
  __patsflab_list_make_intrange_2:
  $tmpret2 = ats2phppre_list_make_intrange_3($arg0, $arg1, 1);
  return $tmpret2;
} // end-of-function


function
ats2phppre_list_make_intrange_3($arg0, $arg1, $arg2)
{
//
  $tmpret3 = NULL;
  $tmp14 = NULL;
  $tmp15 = NULL;
  $tmp16 = NULL;
  $tmp17 = NULL;
  $tmp18 = NULL;
  $tmp19 = NULL;
  $tmp20 = NULL;
  $tmp21 = NULL;
  $tmp22 = NULL;
  $tmp23 = NULL;
  $tmp24 = NULL;
  $tmp25 = NULL;
  $tmp26 = NULL;
  $tmp27 = NULL;
  $tmp28 = NULL;
  $tmp29 = NULL;
  $tmp30 = NULL;
  $tmp31 = NULL;
  $tmp32 = NULL;
  $tmp33 = NULL;
  $tmp34 = NULL;
//
  __patsflab_list_make_intrange_3:
  // ATScaseofseq_beg
  do {
    // ATSbranchseq_beg
    __atstmplab6:
    $tmp14 = ats2phppre_gt_int0_int0($arg2, 0);
    if(!ATSCKpat_bool($tmp14, true)) goto __atstmplab7;
    $tmp15 = ats2phppre_lt_int0_int0($arg0, $arg1);
    if($tmp15) {
      $tmp19 = ats2phppre_sub_int0_int0($arg1, $arg0);
      $tmp18 = ats2phppre_add_int0_int0($tmp19, $arg2);
      $tmp17 = ats2phppre_sub_int0_int0($tmp18, 1);
      $tmp16 = ats2phppre_div_int0_int0($tmp17, $arg2);
      $tmp22 = ats2phppre_sub_int0_int0($tmp16, 1);
      $tmp21 = ats2phppre_mul_int0_int0($tmp22, $arg2);
      $tmp20 = ats2phppre_add_int0_int0($arg0, $tmp21);
      $tmp23 = NULL;
      $tmpret3 = _ats2phppre_list_loop1_4($tmp16, $tmp20, $arg2, $tmp23);
    } else {
      $tmpret3 = NULL;
    } // endif
    break;
    // ATSbranchseq_end
    // ATSbranchseq_beg
    __atstmplab7:
    $tmp24 = ats2phppre_lt_int0_int0($arg2, 0);
    if(!ATSCKpat_bool($tmp24, true)) goto __atstmplab8;
    $tmp25 = ats2phppre_gt_int0_int0($arg0, $arg1);
    if($tmp25) {
      $tmp26 = ats2phppre_neg_int0($arg2);
      $tmp30 = ats2phppre_sub_int0_int0($arg0, $arg1);
      $tmp29 = ats2phppre_add_int0_int0($tmp30, $tmp26);
      $tmp28 = ats2phppre_sub_int0_int0($tmp29, 1);
      $tmp27 = ats2phppre_div_int0_int0($tmp28, $tmp26);
      $tmp33 = ats2phppre_sub_int0_int0($tmp27, 1);
      $tmp32 = ats2phppre_mul_int0_int0($tmp33, $tmp26);
      $tmp31 = ats2phppre_sub_int0_int0($arg0, $tmp32);
      $tmp34 = NULL;
      $tmpret3 = _ats2phppre_list_loop2_5($tmp27, $tmp31, $tmp26, $tmp34);
    } else {
      $tmpret3 = NULL;
    } // endif
    break;
    // ATSbranchseq_end
    // ATSbranchseq_beg
    __atstmplab8:
    $tmpret3 = NULL;
    break;
    // ATSbranchseq_end
  } while(0);
  // ATScaseofseq_end
  return $tmpret3;
} // end-of-function


function
_ats2phppre_list_loop1_4($arg0, $arg1, $arg2, $arg3)
{
//
  $apy0 = NULL;
  $apy1 = NULL;
  $apy2 = NULL;
  $apy3 = NULL;
  $tmpret4 = NULL;
  $tmp5 = NULL;
  $tmp6 = NULL;
  $tmp7 = NULL;
  $tmp8 = NULL;
//
  __patsflab__ats2phppre_list_loop1_4:
  $tmp5 = ats2phppre_gt_int0_int0($arg0, 0);
  if($tmp5) {
    $tmp6 = ats2phppre_sub_int0_int0($arg0, 1);
    $tmp7 = ats2phppre_sub_int0_int0($arg1, $arg2);
    $tmp8 = array($arg1, $arg3);
    // ATStailcalseq_beg
    $apy0 = $tmp6;
    $apy1 = $tmp7;
    $apy2 = $arg2;
    $apy3 = $tmp8;
    $arg0 = $apy0;
    $arg1 = $apy1;
    $arg2 = $apy2;
    $arg3 = $apy3;
    goto __patsflab__ats2phppre_list_loop1_4;
    // ATStailcalseq_end
  } else {
    $tmpret4 = $arg3;
  } // endif
  return $tmpret4;
} // end-of-function


function
_ats2phppre_list_loop2_5($arg0, $arg1, $arg2, $arg3)
{
//
  $apy0 = NULL;
  $apy1 = NULL;
  $apy2 = NULL;
  $apy3 = NULL;
  $tmpret9 = NULL;
  $tmp10 = NULL;
  $tmp11 = NULL;
  $tmp12 = NULL;
  $tmp13 = NULL;
//
  __patsflab__ats2phppre_list_loop2_5:
  $tmp10 = ats2phppre_gt_int0_int0($arg0, 0);
  if($tmp10) {
    $tmp11 = ats2phppre_sub_int0_int0($arg0, 1);
    $tmp12 = ats2phppre_add_int0_int0($arg1, $arg2);
    $tmp13 = array($arg1, $arg3);
    // ATStailcalseq_beg
    $apy0 = $tmp11;
    $apy1 = $tmp12;
    $apy2 = $arg2;
    $apy3 = $tmp13;
    $arg0 = $apy0;
    $arg1 = $apy1;
    $arg2 = $apy2;
    $arg3 = $apy3;
    goto __patsflab__ats2phppre_list_loop2_5;
    // ATStailcalseq_end
  } else {
    $tmpret9 = $arg3;
  } // endif
  return $tmpret9;
} // end-of-function


function
ats2phppre_list_length($arg0)
{
//
  $tmpret46 = NULL;
//
  __patsflab_list_length:
  $tmpret46 = _ats2phppre_list_loop_12($arg0, 0);
  return $tmpret46;
} // end-of-function


function
_ats2phppre_list_loop_12($arg0, $arg1)
{
//
  $apy0 = NULL;
  $apy1 = NULL;
  $tmpret47 = NULL;
  $tmp49 = NULL;
  $tmp50 = NULL;
//
  __patsflab__ats2phppre_list_loop_12:
  // ATScaseofseq_beg
  do {
    // ATSbranchseq_beg
    __atstmplab13:
    if(ATSCKptriscons($arg0)) goto __atstmplab16;
    __atstmplab14:
    $tmpret47 = $arg1;
    break;
    // ATSbranchseq_end
    // ATSbranchseq_beg
    __atstmplab15:
    __atstmplab16:
    $tmp49 = $arg0[1];
    $tmp50 = ats2phppre_add_int1_int1($arg1, 1);
    // ATStailcalseq_beg
    $apy0 = $tmp49;
    $apy1 = $tmp50;
    $arg0 = $apy0;
    $arg1 = $apy1;
    goto __patsflab__ats2phppre_list_loop_12;
    // ATStailcalseq_end
    break;
    // ATSbranchseq_end
  } while(0);
  // ATScaseofseq_end
  return $tmpret47;
} // end-of-function


function
ats2phppre_list_last($arg0)
{
//
  $apy0 = NULL;
  $tmpret51 = NULL;
  $tmp52 = NULL;
  $tmp53 = NULL;
//
  __patsflab_list_last:
  $tmp52 = $arg0[0];
  $tmp53 = $arg0[1];
  // ATScaseofseq_beg
  do {
    // ATSbranchseq_beg
    __atstmplab17:
    if(ATSCKptriscons($tmp53)) goto __atstmplab20;
    __atstmplab18:
    $tmpret51 = $tmp52;
    break;
    // ATSbranchseq_end
    // ATSbranchseq_beg
    __atstmplab19:
    __atstmplab20:
    // ATStailcalseq_beg
    $apy0 = $tmp53;
    $arg0 = $apy0;
    goto __patsflab_list_last;
    // ATStailcalseq_end
    break;
    // ATSbranchseq_end
  } while(0);
  // ATScaseofseq_end
  return $tmpret51;
} // end-of-function


function
ats2phppre_list_get_at($arg0, $arg1)
{
//
  $apy0 = NULL;
  $apy1 = NULL;
  $tmpret54 = NULL;
  $tmp55 = NULL;
  $tmp56 = NULL;
  $tmp57 = NULL;
  $tmp58 = NULL;
//
  __patsflab_list_get_at:
  $tmp55 = ats2phppre_eq_int1_int1($arg1, 0);
  if($tmp55) {
    $tmp56 = $arg0[0];
    $tmpret54 = $tmp56;
  } else {
    $tmp57 = $arg0[1];
    $tmp58 = ats2phppre_sub_int1_int1($arg1, 1);
    // ATStailcalseq_beg
    $apy0 = $tmp57;
    $apy1 = $tmp58;
    $arg0 = $apy0;
    $arg1 = $apy1;
    goto __patsflab_list_get_at;
    // ATStailcalseq_end
  } // endif
  return $tmpret54;
} // end-of-function


function
ats2phppre_list_snoc($arg0, $arg1)
{
//
  $tmpret59 = NULL;
  $tmp60 = NULL;
  $tmp61 = NULL;
//
  __patsflab_list_snoc:
  $tmp61 = NULL;
  $tmp60 = array($arg1, $tmp61);
  $tmpret59 = ats2phppre_list_append($arg0, $tmp60);
  return $tmpret59;
} // end-of-function


function
ats2phppre_list_extend($arg0, $arg1)
{
//
  $tmpret62 = NULL;
  $tmp63 = NULL;
  $tmp64 = NULL;
//
  __patsflab_list_extend:
  $tmp64 = NULL;
  $tmp63 = array($arg1, $tmp64);
  $tmpret62 = ats2phppre_list_append($arg0, $tmp63);
  return $tmpret62;
} // end-of-function


function
ats2phppre_list_append($arg0, $arg1)
{
//
  $tmpret65 = NULL;
  $tmp66 = NULL;
  $tmp67 = NULL;
  $tmp68 = NULL;
//
  __patsflab_list_append:
  // ATScaseofseq_beg
  do {
    // ATSbranchseq_beg
    __atstmplab21:
    if(ATSCKptriscons($arg0)) goto __atstmplab24;
    __atstmplab22:
    $tmpret65 = $arg1;
    break;
    // ATSbranchseq_end
    // ATSbranchseq_beg
    __atstmplab23:
    __atstmplab24:
    $tmp66 = $arg0[0];
    $tmp67 = $arg0[1];
    $tmp68 = ats2phppre_list_append($tmp67, $arg1);
    $tmpret65 = array($tmp66, $tmp68);
    break;
    // ATSbranchseq_end
  } while(0);
  // ATScaseofseq_end
  return $tmpret65;
} // end-of-function


function
ats2phppre_list_reverse($arg0)
{
//
  $tmpret69 = NULL;
  $tmp70 = NULL;
//
  __patsflab_list_reverse:
  $tmp70 = NULL;
  $tmpret69 = ats2phppre_list_reverse_append($arg0, $tmp70);
  return $tmpret69;
} // end-of-function


function
ats2phppre_list_reverse_append($arg0, $arg1)
{
//
  $tmpret71 = NULL;
//
  __patsflab_list_reverse_append:
  $tmpret71 = _ats2phppre_list_loop_20($arg0, $arg1);
  return $tmpret71;
} // end-of-function


function
_ats2phppre_list_loop_20($arg0, $arg1)
{
//
  $apy0 = NULL;
  $apy1 = NULL;
  $tmpret72 = NULL;
  $tmp73 = NULL;
  $tmp74 = NULL;
  $tmp75 = NULL;
//
  __patsflab__ats2phppre_list_loop_20:
  // ATScaseofseq_beg
  do {
    // ATSbranchseq_beg
    __atstmplab25:
    if(ATSCKptriscons($arg0)) goto __atstmplab28;
    __atstmplab26:
    $tmpret72 = $arg1;
    break;
    // ATSbranchseq_end
    // ATSbranchseq_beg
    __atstmplab27:
    __atstmplab28:
    $tmp73 = $arg0[0];
    $tmp74 = $arg0[1];
    $tmp75 = array($tmp73, $arg1);
    // ATStailcalseq_beg
    $apy0 = $tmp74;
    $apy1 = $tmp75;
    $arg0 = $apy0;
    $arg1 = $apy1;
    goto __patsflab__ats2phppre_list_loop_20;
    // ATStailcalseq_end
    break;
    // ATSbranchseq_end
  } while(0);
  // ATScaseofseq_end
  return $tmpret72;
} // end-of-function


function
ats2phppre_list_take($arg0, $arg1)
{
//
  $tmpret76 = NULL;
  $tmp77 = NULL;
  $tmp78 = NULL;
  $tmp79 = NULL;
  $tmp80 = NULL;
  $tmp81 = NULL;
//
  __patsflab_list_take:
  $tmp77 = ats2phppre_gt_int1_int1($arg1, 0);
  if($tmp77) {
    $tmp78 = $arg0[0];
    $tmp79 = $arg0[1];
    $tmp81 = ats2phppre_sub_int1_int1($arg1, 1);
    $tmp80 = ats2phppre_list_take($tmp79, $tmp81);
    $tmpret76 = array($tmp78, $tmp80);
  } else {
    $tmpret76 = NULL;
  } // endif
  return $tmpret76;
} // end-of-function


function
ats2phppre_list_drop($arg0, $arg1)
{
//
  $apy0 = NULL;
  $apy1 = NULL;
  $tmpret82 = NULL;
  $tmp83 = NULL;
  $tmp84 = NULL;
  $tmp85 = NULL;
//
  __patsflab_list_drop:
  $tmp83 = ats2phppre_gt_int1_int1($arg1, 0);
  if($tmp83) {
    $tmp84 = $arg0[1];
    $tmp85 = ats2phppre_sub_int1_int1($arg1, 1);
    // ATStailcalseq_beg
    $apy0 = $tmp84;
    $apy1 = $tmp85;
    $arg0 = $apy0;
    $arg1 = $apy1;
    goto __patsflab_list_drop;
    // ATStailcalseq_end
  } else {
    $tmpret82 = $arg0;
  } // endif
  return $tmpret82;
} // end-of-function


function
ats2phppre_list_split_at($arg0, $arg1)
{
//
  $tmpret86 = NULL;
  $tmp87 = NULL;
  $tmp88 = NULL;
//
  __patsflab_list_split_at:
  $tmp87 = ats2phppre_list_take($arg0, $arg1);
  $tmp88 = ats2phppre_list_drop($arg0, $arg1);
  $tmpret86 = array($tmp87, $tmp88);
  return $tmpret86;
} // end-of-function


function
ats2phppre_list_insert_at($arg0, $arg1, $arg2)
{
//
  $tmpret89 = NULL;
  $tmp90 = NULL;
  $tmp91 = NULL;
  $tmp92 = NULL;
  $tmp93 = NULL;
  $tmp94 = NULL;
//
  __patsflab_list_insert_at:
  $tmp90 = ats2phppre_gt_int1_int1($arg1, 0);
  if($tmp90) {
    $tmp91 = $arg0[0];
    $tmp92 = $arg0[1];
    $tmp94 = ats2phppre_sub_int1_int1($arg1, 1);
    $tmp93 = ats2phppre_list_insert_at($tmp92, $tmp94, $arg2);
    $tmpret89 = array($tmp91, $tmp93);
  } else {
    $tmpret89 = array($arg2, $arg0);
  } // endif
  return $tmpret89;
} // end-of-function


function
ats2phppre_list_remove_at($arg0, $arg1)
{
//
  $tmpret95 = NULL;
  $tmp96 = NULL;
  $tmp97 = NULL;
  $tmp98 = NULL;
  $tmp99 = NULL;
  $tmp100 = NULL;
//
  __patsflab_list_remove_at:
  $tmp96 = $arg0[0];
  $tmp97 = $arg0[1];
  $tmp98 = ats2phppre_gt_int1_int1($arg1, 0);
  if($tmp98) {
    $tmp100 = ats2phppre_sub_int1_int1($arg1, 1);
    $tmp99 = ats2phppre_list_remove_at($tmp97, $tmp100);
    $tmpret95 = array($tmp96, $tmp99);
  } else {
    $tmpret95 = $tmp97;
  } // endif
  return $tmpret95;
} // end-of-function


function
ats2phppre_list_takeout_at($arg0, $arg1)
{
//
  $tmpret101 = NULL;
  $tmp102 = NULL;
  $tmp103 = NULL;
  $tmp104 = NULL;
  $tmp105 = NULL;
  $tmp106 = NULL;
  $tmp107 = NULL;
  $tmp108 = NULL;
  $tmp109 = NULL;
//
  __patsflab_list_takeout_at:
  $tmp102 = $arg0[0];
  $tmp103 = $arg0[1];
  $tmp104 = ats2phppre_gt_int1_int1($arg1, 0);
  if($tmp104) {
    $tmp106 = ats2phppre_sub_int1_int1($arg1, 1);
    $tmp105 = ats2phppre_list_takeout_at($tmp103, $tmp106);
    $tmp107 = $tmp105[0];
    $tmp108 = $tmp105[1];
    $tmp109 = array($tmp102, $tmp108);
    $tmpret101 = array($tmp107, $tmp109);
  } else {
    $tmpret101 = array($tmp102, $tmp103);
  } // endif
  return $tmpret101;
} // end-of-function


function
ats2phppre_list_exists($arg0, $arg1)
{
//
  $apy0 = NULL;
  $apy1 = NULL;
  $tmpret110 = NULL;
  $tmp111 = NULL;
  $tmp112 = NULL;
  $tmp113 = NULL;
//
  __patsflab_list_exists:
  // ATScaseofseq_beg
  do {
    // ATSbranchseq_beg
    __atstmplab29:
    if(ATSCKptriscons($arg0)) goto __atstmplab32;
    __atstmplab30:
    $tmpret110 = false;
    break;
    // ATSbranchseq_end
    // ATSbranchseq_beg
    __atstmplab31:
    __atstmplab32:
    $tmp111 = $arg0[0];
    $tmp112 = $arg0[1];
    $tmp113 = $arg1[0]($arg1, $tmp111);
    if($tmp113) {
      $tmpret110 = true;
    } else {
      // ATStailcalseq_beg
      $apy0 = $tmp112;
      $apy1 = $arg1;
      $arg0 = $apy0;
      $arg1 = $apy1;
      goto __patsflab_list_exists;
      // ATStailcalseq_end
    } // endif
    break;
    // ATSbranchseq_end
  } while(0);
  // ATScaseofseq_end
  return $tmpret110;
} // end-of-function


function
ats2phppre_list_exists_method($arg0)
{
//
  $tmpret114 = NULL;
//
  __patsflab_list_exists_method:
  $tmpret114 = _ats2phppre_list_patsfun_29__closurerize($arg0);
  return $tmpret114;
} // end-of-function


function
_ats2phppre_list_patsfun_29($env0, $arg0)
{
//
  $tmpret115 = NULL;
//
  __patsflab__ats2phppre_list_patsfun_29:
  $tmpret115 = ats2phppre_list_exists($env0, $arg0);
  return $tmpret115;
} // end-of-function


function
ats2phppre_list_iexists($arg0, $arg1)
{
//
  $tmpret116 = NULL;
//
  __patsflab_list_iexists:
  $tmpret116 = _ats2phppre_list_loop_31($arg1, 0, $arg0);
  return $tmpret116;
} // end-of-function


function
_ats2phppre_list_loop_31($env0, $arg0, $arg1)
{
//
  $apy0 = NULL;
  $apy1 = NULL;
  $tmpret117 = NULL;
  $tmp118 = NULL;
  $tmp119 = NULL;
  $tmp120 = NULL;
  $tmp121 = NULL;
//
  __patsflab__ats2phppre_list_loop_31:
  // ATScaseofseq_beg
  do {
    // ATSbranchseq_beg
    __atstmplab33:
    if(ATSCKptriscons($arg1)) goto __atstmplab36;
    __atstmplab34:
    $tmpret117 = false;
    break;
    // ATSbranchseq_end
    // ATSbranchseq_beg
    __atstmplab35:
    __atstmplab36:
    $tmp118 = $arg1[0];
    $tmp119 = $arg1[1];
    $tmp120 = $env0[0]($env0, $arg0, $tmp118);
    if($tmp120) {
      $tmpret117 = true;
    } else {
      $tmp121 = ats2phppre_add_int1_int1($arg0, 1);
      // ATStailcalseq_beg
      $apy0 = $tmp121;
      $apy1 = $tmp119;
      $arg0 = $apy0;
      $arg1 = $apy1;
      goto __patsflab__ats2phppre_list_loop_31;
      // ATStailcalseq_end
    } // endif
    break;
    // ATSbranchseq_end
  } while(0);
  // ATScaseofseq_end
  return $tmpret117;
} // end-of-function


function
ats2phppre_list_iexists_method($arg0)
{
//
  $tmpret122 = NULL;
//
  __patsflab_list_iexists_method:
  $tmpret122 = _ats2phppre_list_patsfun_33__closurerize($arg0);
  return $tmpret122;
} // end-of-function


function
_ats2phppre_list_patsfun_33($env0, $arg0)
{
//
  $tmpret123 = NULL;
//
  __patsflab__ats2phppre_list_patsfun_33:
  $tmpret123 = ats2phppre_list_iexists($env0, $arg0);
  return $tmpret123;
} // end-of-function


function
ats2phppre_list_forall($arg0, $arg1)
{
//
  $apy0 = NULL;
  $apy1 = NULL;
  $tmpret124 = NULL;
  $tmp125 = NULL;
  $tmp126 = NULL;
  $tmp127 = NULL;
//
  __patsflab_list_forall:
  // ATScaseofseq_beg
  do {
    // ATSbranchseq_beg
    __atstmplab37:
    if(ATSCKptriscons($arg0)) goto __atstmplab40;
    __atstmplab38:
    $tmpret124 = true;
    break;
    // ATSbranchseq_end
    // ATSbranchseq_beg
    __atstmplab39:
    __atstmplab40:
    $tmp125 = $arg0[0];
    $tmp126 = $arg0[1];
    $tmp127 = $arg1[0]($arg1, $tmp125);
    if($tmp127) {
      // ATStailcalseq_beg
      $apy0 = $tmp126;
      $apy1 = $arg1;
      $arg0 = $apy0;
      $arg1 = $apy1;
      goto __patsflab_list_forall;
      // ATStailcalseq_end
    } else {
      $tmpret124 = false;
    } // endif
    break;
    // ATSbranchseq_end
  } while(0);
  // ATScaseofseq_end
  return $tmpret124;
} // end-of-function


function
ats2phppre_list_forall_method($arg0)
{
//
  $tmpret128 = NULL;
//
  __patsflab_list_forall_method:
  $tmpret128 = _ats2phppre_list_patsfun_36__closurerize($arg0);
  return $tmpret128;
} // end-of-function


function
_ats2phppre_list_patsfun_36($env0, $arg0)
{
//
  $tmpret129 = NULL;
//
  __patsflab__ats2phppre_list_patsfun_36:
  $tmpret129 = ats2phppre_list_forall($env0, $arg0);
  return $tmpret129;
} // end-of-function


function
ats2phppre_list_iforall($arg0, $arg1)
{
//
  $tmpret130 = NULL;
//
  __patsflab_list_iforall:
  $tmpret130 = _ats2phppre_list_loop_38($arg1, 0, $arg0);
  return $tmpret130;
} // end-of-function


function
_ats2phppre_list_loop_38($env0, $arg0, $arg1)
{
//
  $apy0 = NULL;
  $apy1 = NULL;
  $tmpret131 = NULL;
  $tmp132 = NULL;
  $tmp133 = NULL;
  $tmp134 = NULL;
  $tmp135 = NULL;
//
  __patsflab__ats2phppre_list_loop_38:
  // ATScaseofseq_beg
  do {
    // ATSbranchseq_beg
    __atstmplab41:
    if(ATSCKptriscons($arg1)) goto __atstmplab44;
    __atstmplab42:
    $tmpret131 = true;
    break;
    // ATSbranchseq_end
    // ATSbranchseq_beg
    __atstmplab43:
    __atstmplab44:
    $tmp132 = $arg1[0];
    $tmp133 = $arg1[1];
    $tmp134 = $env0[0]($env0, $arg0, $tmp132);
    if($tmp134) {
      $tmp135 = ats2phppre_add_int1_int1($arg0, 1);
      // ATStailcalseq_beg
      $apy0 = $tmp135;
      $apy1 = $tmp133;
      $arg0 = $apy0;
      $arg1 = $apy1;
      goto __patsflab__ats2phppre_list_loop_38;
      // ATStailcalseq_end
    } else {
      $tmpret131 = false;
    } // endif
    break;
    // ATSbranchseq_end
  } while(0);
  // ATScaseofseq_end
  return $tmpret131;
} // end-of-function


function
ats2phppre_list_iforall_method($arg0)
{
//
  $tmpret136 = NULL;
//
  __patsflab_list_iforall_method:
  $tmpret136 = _ats2phppre_list_patsfun_40__closurerize($arg0);
  return $tmpret136;
} // end-of-function


function
_ats2phppre_list_patsfun_40($env0, $arg0)
{
//
  $tmpret137 = NULL;
//
  __patsflab__ats2phppre_list_patsfun_40:
  $tmpret137 = ats2phppre_list_iforall($env0, $arg0);
  return $tmpret137;
} // end-of-function


function
ats2phppre_list_app($arg0, $arg1)
{
//
//
  __patsflab_list_app:
  ats2phppre_list_foreach($arg0, $arg1);
  return/*_void*/;
} // end-of-function


function
ats2phppre_list_foreach($arg0, $arg1)
{
//
  $apy0 = NULL;
  $apy1 = NULL;
  $tmp140 = NULL;
  $tmp141 = NULL;
//
  __patsflab_list_foreach:
  // ATScaseofseq_beg
  do {
    // ATSbranchseq_beg
    __atstmplab45:
    if(ATSCKptriscons($arg0)) goto __atstmplab48;
    __atstmplab46:
    // ATSINSmove_void;
    break;
    // ATSbranchseq_end
    // ATSbranchseq_beg
    __atstmplab47:
    __atstmplab48:
    $tmp140 = $arg0[0];
    $tmp141 = $arg0[1];
    $arg1[0]($arg1, $tmp140);
    // ATStailcalseq_beg
    $apy0 = $tmp141;
    $apy1 = $arg1;
    $arg0 = $apy0;
    $arg1 = $apy1;
    goto __patsflab_list_foreach;
    // ATStailcalseq_end
    break;
    // ATSbranchseq_end
  } while(0);
  // ATScaseofseq_end
  return/*_void*/;
} // end-of-function


function
ats2phppre_list_foreach_method($arg0)
{
//
  $tmpret143 = NULL;
//
  __patsflab_list_foreach_method:
  $tmpret143 = _ats2phppre_list_patsfun_44__closurerize($arg0);
  return $tmpret143;
} // end-of-function


function
_ats2phppre_list_patsfun_44($env0, $arg0)
{
//
//
  __patsflab__ats2phppre_list_patsfun_44:
  ats2phppre_list_foreach($env0, $arg0);
  return/*_void*/;
} // end-of-function


function
ats2phppre_list_iforeach($arg0, $arg1)
{
//
//
  __patsflab_list_iforeach:
  _ats2phppre_list_aux_46($arg1, 0, $arg0);
  return/*_void*/;
} // end-of-function


function
_ats2phppre_list_aux_46($env0, $arg0, $arg1)
{
//
  $apy0 = NULL;
  $apy1 = NULL;
  $tmp147 = NULL;
  $tmp148 = NULL;
  $tmp150 = NULL;
//
  __patsflab__ats2phppre_list_aux_46:
  // ATScaseofseq_beg
  do {
    // ATSbranchseq_beg
    __atstmplab49:
    if(ATSCKptriscons($arg1)) goto __atstmplab52;
    __atstmplab50:
    // ATSINSmove_void;
    break;
    // ATSbranchseq_end
    // ATSbranchseq_beg
    __atstmplab51:
    __atstmplab52:
    $tmp147 = $arg1[0];
    $tmp148 = $arg1[1];
    $env0[0]($env0, $arg0, $tmp147);
    $tmp150 = ats2phppre_add_int0_int0($arg0, 1);
    // ATStailcalseq_beg
    $apy0 = $tmp150;
    $apy1 = $tmp148;
    $arg0 = $apy0;
    $arg1 = $apy1;
    goto __patsflab__ats2phppre_list_aux_46;
    // ATStailcalseq_end
    break;
    // ATSbranchseq_end
  } while(0);
  // ATScaseofseq_end
  return/*_void*/;
} // end-of-function


function
ats2phppre_list_iforeach_method($arg0)
{
//
  $tmpret151 = NULL;
//
  __patsflab_list_iforeach_method:
  $tmpret151 = _ats2phppre_list_patsfun_48__closurerize($arg0);
  return $tmpret151;
} // end-of-function


function
_ats2phppre_list_patsfun_48($env0, $arg0)
{
//
//
  __patsflab__ats2phppre_list_patsfun_48:
  ats2phppre_list_iforeach($env0, $arg0);
  return/*_void*/;
} // end-of-function


function
ats2phppre_list_rforeach($arg0, $arg1)
{
//
  $tmp154 = NULL;
  $tmp155 = NULL;
//
  __patsflab_list_rforeach:
  // ATScaseofseq_beg
  do {
    // ATSbranchseq_beg
    __atstmplab53:
    if(ATSCKptriscons($arg0)) goto __atstmplab56;
    __atstmplab54:
    // ATSINSmove_void;
    break;
    // ATSbranchseq_end
    // ATSbranchseq_beg
    __atstmplab55:
    __atstmplab56:
    $tmp154 = $arg0[0];
    $tmp155 = $arg0[1];
    ats2phppre_list_rforeach($tmp155, $arg1);
    $arg1[0]($arg1, $tmp154);
    break;
    // ATSbranchseq_end
  } while(0);
  // ATScaseofseq_end
  return/*_void*/;
} // end-of-function


function
ats2phppre_list_rforeach_method($arg0)
{
//
  $tmpret157 = NULL;
//
  __patsflab_list_rforeach_method:
  $tmpret157 = _ats2phppre_list_patsfun_51__closurerize($arg0);
  return $tmpret157;
} // end-of-function


function
_ats2phppre_list_patsfun_51($env0, $arg0)
{
//
//
  __patsflab__ats2phppre_list_patsfun_51:
  ats2phppre_list_rforeach($env0, $arg0);
  return/*_void*/;
} // end-of-function


function
ats2phppre_list_filter($arg0, $arg1)
{
//
  $tmpret159 = NULL;
//
  __patsflab_list_filter:
  $tmpret159 = _ats2phppre_list_aux_53($arg1, $arg0);
  return $tmpret159;
} // end-of-function


function
_ats2phppre_list_aux_53($env0, $arg0)
{
//
  $apy0 = NULL;
  $tmpret160 = NULL;
  $tmp161 = NULL;
  $tmp162 = NULL;
  $tmp163 = NULL;
  $tmp164 = NULL;
//
  __patsflab__ats2phppre_list_aux_53:
  // ATScaseofseq_beg
  do {
    // ATSbranchseq_beg
    __atstmplab57:
    if(ATSCKptriscons($arg0)) goto __atstmplab60;
    __atstmplab58:
    $tmpret160 = NULL;
    break;
    // ATSbranchseq_end
    // ATSbranchseq_beg
    __atstmplab59:
    __atstmplab60:
    $tmp161 = $arg0[0];
    $tmp162 = $arg0[1];
    $tmp163 = $env0[0]($env0, $tmp161);
    if($tmp163) {
      $tmp164 = _ats2phppre_list_aux_53($env0, $tmp162);
      $tmpret160 = array($tmp161, $tmp164);
    } else {
      // ATStailcalseq_beg
      $apy0 = $tmp162;
      $arg0 = $apy0;
      goto __patsflab__ats2phppre_list_aux_53;
      // ATStailcalseq_end
    } // endif
    break;
    // ATSbranchseq_end
  } while(0);
  // ATScaseofseq_end
  return $tmpret160;
} // end-of-function


function
ats2phppre_list_filter_method($arg0)
{
//
  $tmpret165 = NULL;
//
  __patsflab_list_filter_method:
  $tmpret165 = _ats2phppre_list_patsfun_55__closurerize($arg0);
  return $tmpret165;
} // end-of-function


function
_ats2phppre_list_patsfun_55($env0, $arg0)
{
//
  $tmpret166 = NULL;
//
  __patsflab__ats2phppre_list_patsfun_55:
  $tmpret166 = ats2phppre_list_filter($env0, $arg0);
  return $tmpret166;
} // end-of-function


function
ats2phppre_list_map($arg0, $arg1)
{
//
  $tmpret167 = NULL;
//
  __patsflab_list_map:
  $tmpret167 = _ats2phppre_list_aux_57($arg1, $arg0);
  return $tmpret167;
} // end-of-function


function
_ats2phppre_list_aux_57($env0, $arg0)
{
//
  $tmpret168 = NULL;
  $tmp169 = NULL;
  $tmp170 = NULL;
  $tmp171 = NULL;
  $tmp172 = NULL;
//
  __patsflab__ats2phppre_list_aux_57:
  // ATScaseofseq_beg
  do {
    // ATSbranchseq_beg
    __atstmplab61:
    if(ATSCKptriscons($arg0)) goto __atstmplab64;
    __atstmplab62:
    $tmpret168 = NULL;
    break;
    // ATSbranchseq_end
    // ATSbranchseq_beg
    __atstmplab63:
    __atstmplab64:
    $tmp169 = $arg0[0];
    $tmp170 = $arg0[1];
    $tmp171 = $env0[0]($env0, $tmp169);
    $tmp172 = _ats2phppre_list_aux_57($env0, $tmp170);
    $tmpret168 = array($tmp171, $tmp172);
    break;
    // ATSbranchseq_end
  } while(0);
  // ATScaseofseq_end
  return $tmpret168;
} // end-of-function


function
ats2phppre_list_map_method($arg0, $arg1)
{
//
  $tmpret173 = NULL;
//
  __patsflab_list_map_method:
  $tmpret173 = _ats2phppre_list_patsfun_59__closurerize($arg0);
  return $tmpret173;
} // end-of-function


function
_ats2phppre_list_patsfun_59($env0, $arg0)
{
//
  $tmpret174 = NULL;
//
  __patsflab__ats2phppre_list_patsfun_59:
  $tmpret174 = ats2phppre_list_map($env0, $arg0);
  return $tmpret174;
} // end-of-function


function
ats2phppre_list_foldleft($arg0, $arg1, $arg2)
{
//
  $tmpret175 = NULL;
//
  __patsflab_list_foldleft:
  $tmpret175 = _ats2phppre_list_loop_61($arg2, $arg1, $arg0);
  return $tmpret175;
} // end-of-function


function
_ats2phppre_list_loop_61($env0, $arg0, $arg1)
{
//
  $apy0 = NULL;
  $apy1 = NULL;
  $tmpret176 = NULL;
  $tmp177 = NULL;
  $tmp178 = NULL;
  $tmp179 = NULL;
//
  __patsflab__ats2phppre_list_loop_61:
  // ATScaseofseq_beg
  do {
    // ATSbranchseq_beg
    __atstmplab65:
    if(ATSCKptriscons($arg1)) goto __atstmplab68;
    __atstmplab66:
    $tmpret176 = $arg0;
    break;
    // ATSbranchseq_end
    // ATSbranchseq_beg
    __atstmplab67:
    __atstmplab68:
    $tmp177 = $arg1[0];
    $tmp178 = $arg1[1];
    $tmp179 = $env0[0]($env0, $arg0, $tmp177);
    // ATStailcalseq_beg
    $apy0 = $tmp179;
    $apy1 = $tmp178;
    $arg0 = $apy0;
    $arg1 = $apy1;
    goto __patsflab__ats2phppre_list_loop_61;
    // ATStailcalseq_end
    break;
    // ATSbranchseq_end
  } while(0);
  // ATScaseofseq_end
  return $tmpret176;
} // end-of-function


function
ats2phppre_list_foldleft_method($arg0, $arg1)
{
//
  $tmpret180 = NULL;
//
  __patsflab_list_foldleft_method:
  $tmpret180 = _ats2phppre_list_patsfun_63__closurerize($arg0, $arg1);
  return $tmpret180;
} // end-of-function


function
_ats2phppre_list_patsfun_63($env0, $env1, $arg0)
{
//
  $tmpret181 = NULL;
//
  __patsflab__ats2phppre_list_patsfun_63:
  $tmpret181 = ats2phppre_list_foldleft($env0, $env1, $arg0);
  return $tmpret181;
} // end-of-function


function
ats2phppre_list_ifoldleft($arg0, $arg1, $arg2)
{
//
  $tmpret182 = NULL;
//
  __patsflab_list_ifoldleft:
  $tmpret182 = _ats2phppre_list_loop_65($arg2, 0, $arg1, $arg0);
  return $tmpret182;
} // end-of-function


function
_ats2phppre_list_loop_65($env0, $arg0, $arg1, $arg2)
{
//
  $apy0 = NULL;
  $apy1 = NULL;
  $apy2 = NULL;
  $tmpret183 = NULL;
  $tmp184 = NULL;
  $tmp185 = NULL;
  $tmp186 = NULL;
  $tmp187 = NULL;
//
  __patsflab__ats2phppre_list_loop_65:
  // ATScaseofseq_beg
  do {
    // ATSbranchseq_beg
    __atstmplab69:
    if(ATSCKptriscons($arg2)) goto __atstmplab72;
    __atstmplab70:
    $tmpret183 = $arg1;
    break;
    // ATSbranchseq_end
    // ATSbranchseq_beg
    __atstmplab71:
    __atstmplab72:
    $tmp184 = $arg2[0];
    $tmp185 = $arg2[1];
    $tmp186 = ats2phppre_add_int1_int1($arg0, 1);
    $tmp187 = $env0[0]($env0, $arg0, $arg1, $tmp184);
    // ATStailcalseq_beg
    $apy0 = $tmp186;
    $apy1 = $tmp187;
    $apy2 = $tmp185;
    $arg0 = $apy0;
    $arg1 = $apy1;
    $arg2 = $apy2;
    goto __patsflab__ats2phppre_list_loop_65;
    // ATStailcalseq_end
    break;
    // ATSbranchseq_end
  } while(0);
  // ATScaseofseq_end
  return $tmpret183;
} // end-of-function


function
ats2phppre_list_ifoldleft_method($arg0, $arg1)
{
//
  $tmpret188 = NULL;
//
  __patsflab_list_ifoldleft_method:
  $tmpret188 = _ats2phppre_list_patsfun_67__closurerize($arg0, $arg1);
  return $tmpret188;
} // end-of-function


function
_ats2phppre_list_patsfun_67($env0, $env1, $arg0)
{
//
  $tmpret189 = NULL;
//
  __patsflab__ats2phppre_list_patsfun_67:
  $tmpret189 = ats2phppre_list_ifoldleft($env0, $env1, $arg0);
  return $tmpret189;
} // end-of-function


function
ats2phppre_list_foldright($arg0, $arg1, $arg2)
{
//
  $tmpret190 = NULL;
//
  __patsflab_list_foldright:
  $tmpret190 = _ats2phppre_list_aux_69($arg1, $arg0, $arg2);
  return $tmpret190;
} // end-of-function


function
_ats2phppre_list_aux_69($env0, $arg0, $arg1)
{
//
  $tmpret191 = NULL;
  $tmp192 = NULL;
  $tmp193 = NULL;
  $tmp194 = NULL;
//
  __patsflab__ats2phppre_list_aux_69:
  // ATScaseofseq_beg
  do {
    // ATSbranchseq_beg
    __atstmplab73:
    if(ATSCKptriscons($arg0)) goto __atstmplab76;
    __atstmplab74:
    $tmpret191 = $arg1;
    break;
    // ATSbranchseq_end
    // ATSbranchseq_beg
    __atstmplab75:
    __atstmplab76:
    $tmp192 = $arg0[0];
    $tmp193 = $arg0[1];
    $tmp194 = _ats2phppre_list_aux_69($env0, $tmp193, $arg1);
    $tmpret191 = $env0[0]($env0, $tmp192, $tmp194);
    break;
    // ATSbranchseq_end
  } while(0);
  // ATScaseofseq_end
  return $tmpret191;
} // end-of-function


function
ats2phppre_list_foldright_method($arg0, $arg1)
{
//
  $tmpret195 = NULL;
//
  __patsflab_list_foldright_method:
  $tmpret195 = _ats2phppre_list_patsfun_71__closurerize($arg0, $arg1);
  return $tmpret195;
} // end-of-function


function
_ats2phppre_list_patsfun_71($env0, $env1, $arg0)
{
//
  $tmpret196 = NULL;
//
  __patsflab__ats2phppre_list_patsfun_71:
  $tmpret196 = ats2phppre_list_foldright($env0, $arg0, $env1);
  return $tmpret196;
} // end-of-function


function
ats2phppre_list_ifoldright($arg0, $arg1, $arg2)
{
//
  $tmpret197 = NULL;
//
  __patsflab_list_ifoldright:
  $tmpret197 = _ats2phppre_list_aux_73($arg1, 0, $arg0, $arg2);
  return $tmpret197;
} // end-of-function


function
_ats2phppre_list_aux_73($env0, $arg0, $arg1, $arg2)
{
//
  $tmpret198 = NULL;
  $tmp199 = NULL;
  $tmp200 = NULL;
  $tmp201 = NULL;
  $tmp202 = NULL;
//
  __patsflab__ats2phppre_list_aux_73:
  // ATScaseofseq_beg
  do {
    // ATSbranchseq_beg
    __atstmplab77:
    if(ATSCKptriscons($arg1)) goto __atstmplab80;
    __atstmplab78:
    $tmpret198 = $arg2;
    break;
    // ATSbranchseq_end
    // ATSbranchseq_beg
    __atstmplab79:
    __atstmplab80:
    $tmp199 = $arg1[0];
    $tmp200 = $arg1[1];
    $tmp202 = ats2phppre_add_int1_int1($arg0, 1);
    $tmp201 = _ats2phppre_list_aux_73($env0, $tmp202, $tmp200, $arg2);
    $tmpret198 = $env0[0]($env0, $arg0, $tmp199, $tmp201);
    break;
    // ATSbranchseq_end
  } while(0);
  // ATScaseofseq_end
  return $tmpret198;
} // end-of-function


function
ats2phppre_list_ifoldright_method($arg0, $arg1)
{
//
  $tmpret203 = NULL;
//
  __patsflab_list_ifoldright_method:
  $tmpret203 = _ats2phppre_list_patsfun_75__closurerize($arg0, $arg1);
  return $tmpret203;
} // end-of-function


function
_ats2phppre_list_patsfun_75($env0, $env1, $arg0)
{
//
  $tmpret204 = NULL;
//
  __patsflab__ats2phppre_list_patsfun_75:
  $tmpret204 = ats2phppre_list_ifoldright($env0, $arg0, $env1);
  return $tmpret204;
} // end-of-function

/* ****** ****** */

/* end-of-compilation-unit */
?>
<?php
/*
**
** The PHP code is generated by atscc2php
** The starting compilation time is: 2016-10-8: 10h:20m
**
*/

function
ats2phppre_option_some($arg0)
{
//
  $tmpret0 = NULL;
//
  __patsflab_option_some:
  $tmpret0 = array($arg0);
  return $tmpret0;
} // end-of-function


function
ats2phppre_option_none()
{
//
  $tmpret1 = NULL;
//
  __patsflab_option_none:
  $tmpret1 = NULL;
  return $tmpret1;
} // end-of-function


function
ats2phppre_option_is_some($arg0)
{
//
  $tmpret2 = NULL;
//
  __patsflab_option_is_some:
  // ATScaseofseq_beg
  do {
    // ATSbranchseq_beg
    __atstmplab0:
    if(ATSCKptrisnull($arg0)) goto __atstmplab3;
    __atstmplab1:
    $tmpret2 = true;
    break;
    // ATSbranchseq_end
    // ATSbranchseq_beg
    __atstmplab2:
    __atstmplab3:
    $tmpret2 = false;
    break;
    // ATSbranchseq_end
  } while(0);
  // ATScaseofseq_end
  return $tmpret2;
} // end-of-function


function
ats2phppre_option_is_none($arg0)
{
//
  $tmpret3 = NULL;
//
  __patsflab_option_is_none:
  // ATScaseofseq_beg
  do {
    // ATSbranchseq_beg
    __atstmplab4:
    if(ATSCKptriscons($arg0)) goto __atstmplab7;
    __atstmplab5:
    $tmpret3 = true;
    break;
    // ATSbranchseq_end
    // ATSbranchseq_beg
    __atstmplab6:
    __atstmplab7:
    $tmpret3 = false;
    break;
    // ATSbranchseq_end
  } while(0);
  // ATScaseofseq_end
  return $tmpret3;
} // end-of-function

/* ****** ****** */

/* end-of-compilation-unit */
?>
<?php
/*
**
** The PHP code is generated by atscc2php
** The starting compilation time is: 2016-10-8: 10h:20m
**
*/
function
_ats2jspre_stream_patsfun_5__closurerize($env0)
{
  return array(function($cenv) { return _ats2jspre_stream_patsfun_5($cenv[1]); }, $env0);
}

function
_ats2jspre_stream_patsfun_12__closurerize($env0, $env1)
{
  return array(function($cenv) { return _ats2jspre_stream_patsfun_12($cenv[1], $cenv[2]); }, $env0, $env1);
}

function
_ats2jspre_stream_patsfun_14__closurerize($env0, $env1)
{
  return array(function($cenv) { return _ats2jspre_stream_patsfun_14($cenv[1], $cenv[2]); }, $env0, $env1);
}

function
_ats2jspre_stream_patsfun_20__closurerize($env0, $env1)
{
  return array(function($cenv) { return _ats2jspre_stream_patsfun_20($cenv[1], $cenv[2]); }, $env0, $env1);
}

function
_ats2jspre_stream_patsfun_22__closurerize($env0)
{
  return array(function($cenv) { return _ats2jspre_stream_patsfun_22($cenv[1]); }, $env0);
}

function
_ats2jspre_stream_patsfun_24__closurerize($env0, $env1)
{
  return array(function($cenv) { return _ats2jspre_stream_patsfun_24($cenv[1], $cenv[2]); }, $env0, $env1);
}

function
_ats2jspre_stream_patsfun_26__closurerize($env0)
{
  return array(function($cenv, $arg0) { return _ats2jspre_stream_patsfun_26($cenv[1], $arg0); }, $env0);
}

function
_ats2jspre_stream_patsfun_28__closurerize($env0, $env1)
{
  return array(function($cenv) { return _ats2jspre_stream_patsfun_28($cenv[1], $cenv[2]); }, $env0, $env1);
}

function
_ats2jspre_stream_patsfun_30__closurerize($env0)
{
  return array(function($cenv, $arg0) { return _ats2jspre_stream_patsfun_30($cenv[1], $arg0); }, $env0);
}

function
_ats2jspre_stream_patsfun_33__closurerize($env0)
{
  return array(function($cenv, $arg0) { return _ats2jspre_stream_patsfun_33($cenv[1], $arg0); }, $env0);
}

function
_ats2jspre_stream_patsfun_36__closurerize($env0)
{
  return array(function($cenv, $arg0) { return _ats2jspre_stream_patsfun_36($cenv[1], $arg0); }, $env0);
}

function
_ats2jspre_stream_patsfun_39__closurerize($env0)
{
  return array(function($cenv, $arg0) { return _ats2jspre_stream_patsfun_39($cenv[1], $arg0); }, $env0);
}

function
_ats2jspre_stream_patsfun_43__closurerize($env0)
{
  return array(function($cenv, $arg0) { return _ats2jspre_stream_patsfun_43($cenv[1], $arg0); }, $env0);
}

function
_ats2jspre_stream_patsfun_46__closurerize($env0, $env1)
{
  return array(function($cenv) { return _ats2jspre_stream_patsfun_46($cenv[1], $cenv[2]); }, $env0, $env1);
}

function
_ats2jspre_stream_patsfun_49__closurerize($env0, $env1, $env2, $env3)
{
  return array(function($cenv) { return _ats2jspre_stream_patsfun_49($cenv[1], $cenv[2], $cenv[3], $cenv[4]); }, $env0, $env1, $env2, $env3);
}

function
_ats2jspre_stream_patsfun_50__closurerize($env0, $env1)
{
  return array(function($cenv) { return _ats2jspre_stream_patsfun_50($cenv[1], $cenv[2]); }, $env0, $env1);
}

function
_ats2jspre_stream_patsfun_53__closurerize($env0)
{
  return array(function($cenv) { return _ats2jspre_stream_patsfun_53($cenv[1]); }, $env0);
}

function
_ats2jspre_stream_patsfun_55__closurerize($env0)
{
  return array(function($cenv) { return _ats2jspre_stream_patsfun_55($cenv[1]); }, $env0);
}

function
_ats2jspre_stream_patsfun_57__closurerize($env0, $env1)
{
  return array(function($cenv) { return _ats2jspre_stream_patsfun_57($cenv[1], $cenv[2]); }, $env0, $env1);
}

function
_ats2jspre_stream_patsfun_62__closurerize($env0)
{
  return array(function($cenv, $arg0, $arg1) { return _ats2jspre_stream_patsfun_62($cenv[1], $arg0, $arg1); }, $env0);
}

function
_ats2jspre_stream_patsfun_64__closurerize($env0)
{
  return array(function($cenv, $arg0, $arg1) { return _ats2jspre_stream_patsfun_64($cenv[1], $arg0, $arg1); }, $env0);
}

function
_ats2jspre_stream_patsfun_67__closurerize($env0, $env1)
{
  return array(function($cenv) { return _ats2jspre_stream_patsfun_67($cenv[1], $cenv[2]); }, $env0, $env1);
}

function
_ats2jspre_stream_patsfun_69__closurerize($env0, $env1)
{
  return array(function($cenv) { return _ats2jspre_stream_patsfun_69($cenv[1], $cenv[2]); }, $env0, $env1);
}


function
ats2phppre_stream_make_list($arg0)
{
//
  $tmpret5 = NULL;
//
  __patsflab_stream_make_list:
  $tmpret5 = ATSPMVlazyval(_ats2jspre_stream_patsfun_5__closurerize($arg0));
  return $tmpret5;
} // end-of-function


function
_ats2jspre_stream_patsfun_5($env0)
{
//
  $tmpret6 = NULL;
  $tmp7 = NULL;
  $tmp8 = NULL;
  $tmp9 = NULL;
//
  __patsflab__ats2jspre_stream_patsfun_5:
  // ATScaseofseq_beg
  do {
    // ATSbranchseq_beg
    __atstmplab0:
    if(ATSCKptriscons($env0)) goto __atstmplab3;
    __atstmplab1:
    $tmpret6 = NULL;
    break;
    // ATSbranchseq_end
    // ATSbranchseq_beg
    __atstmplab2:
    __atstmplab3:
    $tmp7 = $env0[0];
    $tmp8 = $env0[1];
    $tmp9 = ats2phppre_stream_make_list($tmp8);
    $tmpret6 = array($tmp7, $tmp9);
    break;
    // ATSbranchseq_end
  } while(0);
  // ATScaseofseq_end
  return $tmpret6;
} // end-of-function


function
ats2phppre_stream_make_list0($arg0)
{
//
  $tmpret10 = NULL;
//
  __patsflab_stream_make_list0:
  $tmpret10 = ats2phppre_stream_make_list($arg0);
  return $tmpret10;
} // end-of-function


function
ats2phppre_stream_nth_opt($arg0, $arg1)
{
//
  $tmpret11 = NULL;
//
  __patsflab_stream_nth_opt:
  $tmpret11 = _ats2jspre_stream_loop_8($arg0, $arg1);
  return $tmpret11;
} // end-of-function


function
_ats2jspre_stream_loop_8($arg0, $arg1)
{
//
  $apy0 = NULL;
  $apy1 = NULL;
  $tmpret12 = NULL;
  $tmp13 = NULL;
  $tmp14 = NULL;
  $tmp15 = NULL;
  $tmp16 = NULL;
  $tmp17 = NULL;
//
  __patsflab__ats2jspre_stream_loop_8:
  $tmp13 = ATSPMVlazyval_eval($arg0); 
  // ATScaseofseq_beg
  do {
    // ATSbranchseq_beg
    __atstmplab4:
    if(ATSCKptriscons($tmp13)) goto __atstmplab7;
    __atstmplab5:
    $tmpret12 = NULL;
    break;
    // ATSbranchseq_end
    // ATSbranchseq_beg
    __atstmplab6:
    __atstmplab7:
    $tmp14 = $tmp13[0];
    $tmp15 = $tmp13[1];
    $tmp16 = ats2phppre_gt_int1_int1($arg1, 0);
    if($tmp16) {
      $tmp17 = ats2phppre_pred_int1($arg1);
      // ATStailcalseq_beg
      $apy0 = $tmp15;
      $apy1 = $tmp17;
      $arg0 = $apy0;
      $arg1 = $apy1;
      goto __patsflab__ats2jspre_stream_loop_8;
      // ATStailcalseq_end
    } else {
      $tmpret12 = array($tmp14);
    } // endif
    break;
    // ATSbranchseq_end
  } while(0);
  // ATScaseofseq_end
  return $tmpret12;
} // end-of-function


function
ats2phppre_stream_length($arg0)
{
//
  $tmpret18 = NULL;
//
  __patsflab_stream_length:
  $tmpret18 = _ats2jspre_stream_loop_10($arg0, 0);
  return $tmpret18;
} // end-of-function


function
_ats2jspre_stream_loop_10($arg0, $arg1)
{
//
  $apy0 = NULL;
  $apy1 = NULL;
  $tmpret19 = NULL;
  $tmp20 = NULL;
  $tmp22 = NULL;
  $tmp23 = NULL;
//
  __patsflab__ats2jspre_stream_loop_10:
  $tmp20 = ATSPMVlazyval_eval($arg0); 
  // ATScaseofseq_beg
  do {
    // ATSbranchseq_beg
    __atstmplab8:
    if(ATSCKptriscons($tmp20)) goto __atstmplab11;
    __atstmplab9:
    $tmpret19 = $arg1;
    break;
    // ATSbranchseq_end
    // ATSbranchseq_beg
    __atstmplab10:
    __atstmplab11:
    $tmp22 = $tmp20[1];
    $tmp23 = ats2phppre_add_int1_int1($arg1, 1);
    // ATStailcalseq_beg
    $apy0 = $tmp22;
    $apy1 = $tmp23;
    $arg0 = $apy0;
    $arg1 = $apy1;
    goto __patsflab__ats2jspre_stream_loop_10;
    // ATStailcalseq_end
    break;
    // ATSbranchseq_end
  } while(0);
  // ATScaseofseq_end
  return $tmpret19;
} // end-of-function


function
ats2phppre_stream_takeLte($arg0, $arg1)
{
//
  $tmpret24 = NULL;
//
  __patsflab_stream_takeLte:
  $tmpret24 = ATSPMVlazyval(_ats2jspre_stream_patsfun_12__closurerize($arg0, $arg1));
  return $tmpret24;
} // end-of-function


function
_ats2jspre_stream_patsfun_12($env0, $env1)
{
//
  $tmpret25 = NULL;
  $tmp26 = NULL;
  $tmp27 = NULL;
  $tmp28 = NULL;
  $tmp29 = NULL;
  $tmp30 = NULL;
  $tmp31 = NULL;
//
  __patsflab__ats2jspre_stream_patsfun_12:
  $tmp26 = ats2phppre_gt_int1_int1($env1, 0);
  if($tmp26) {
    $tmp27 = ATSPMVlazyval_eval($env0); 
    // ATScaseofseq_beg
    do {
      // ATSbranchseq_beg
      __atstmplab12:
      if(ATSCKptriscons($tmp27)) goto __atstmplab15;
      __atstmplab13:
      $tmpret25 = NULL;
      break;
      // ATSbranchseq_end
      // ATSbranchseq_beg
      __atstmplab14:
      __atstmplab15:
      $tmp28 = $tmp27[0];
      $tmp29 = $tmp27[1];
      $tmp31 = ats2phppre_sub_int1_int1($env1, 1);
      $tmp30 = ats2phppre_stream_takeLte($tmp29, $tmp31);
      $tmpret25 = array($tmp28, $tmp30);
      break;
      // ATSbranchseq_end
    } while(0);
    // ATScaseofseq_end
  } else {
    $tmpret25 = NULL;
  } // endif
  return $tmpret25;
} // end-of-function


function
ats2phppre_stream_dropLte($arg0, $arg1)
{
//
  $tmpret32 = NULL;
//
  __patsflab_stream_dropLte:
  $tmpret32 = ATSPMVlazyval(_ats2jspre_stream_patsfun_14__closurerize($arg0, $arg1));
  return $tmpret32;
} // end-of-function


function
_ats2jspre_stream_patsfun_14($env0, $env1)
{
//
  $tmpret33 = NULL;
  $tmp34 = NULL;
  $tmp35 = NULL;
  $tmp37 = NULL;
  $tmp38 = NULL;
  $tmp39 = NULL;
//
  __patsflab__ats2jspre_stream_patsfun_14:
  $tmp34 = ats2phppre_gt_int1_int1($env1, 0);
  if($tmp34) {
    $tmp35 = ATSPMVlazyval_eval($env0); 
    // ATScaseofseq_beg
    do {
      // ATSbranchseq_beg
      __atstmplab16:
      if(ATSCKptriscons($tmp35)) goto __atstmplab19;
      __atstmplab17:
      $tmpret33 = NULL;
      break;
      // ATSbranchseq_end
      // ATSbranchseq_beg
      __atstmplab18:
      __atstmplab19:
      $tmp37 = $tmp35[1];
      $tmp39 = ats2phppre_sub_int1_int1($env1, 1);
      $tmp38 = ats2phppre_stream_dropLte($tmp37, $tmp39);
      $tmpret33 = ATSPMVlazyval_eval($tmp38); 
      break;
      // ATSbranchseq_end
    } while(0);
    // ATScaseofseq_end
  } else {
    $tmpret33 = ATSPMVlazyval_eval($env0); 
  } // endif
  return $tmpret33;
} // end-of-function


function
ats2phppre_stream_take_opt($arg0, $arg1)
{
//
  $tmpret40 = NULL;
  $tmp49 = NULL;
//
  __patsflab_stream_take_opt:
  $tmp49 = NULL;
  $tmpret40 = _ats2jspre_stream_auxmain_16($arg1, $arg0, 0, $tmp49);
  return $tmpret40;
} // end-of-function


function
_ats2jspre_stream_auxmain_16($env0, $arg0, $arg1, $arg2)
{
//
  $apy0 = NULL;
  $apy1 = NULL;
  $apy2 = NULL;
  $tmpret41 = NULL;
  $tmp42 = NULL;
  $tmp43 = NULL;
  $tmp44 = NULL;
  $tmp45 = NULL;
  $tmp46 = NULL;
  $tmp47 = NULL;
  $tmp48 = NULL;
//
  __patsflab__ats2jspre_stream_auxmain_16:
  $tmp42 = ats2phppre_lt_int1_int1($arg1, $env0);
  if($tmp42) {
    $tmp43 = ATSPMVlazyval_eval($arg0); 
    // ATScaseofseq_beg
    do {
      // ATSbranchseq_beg
      __atstmplab20:
      if(ATSCKptriscons($tmp43)) goto __atstmplab23;
      __atstmplab21:
      $tmpret41 = NULL;
      break;
      // ATSbranchseq_end
      // ATSbranchseq_beg
      __atstmplab22:
      __atstmplab23:
      $tmp44 = $tmp43[0];
      $tmp45 = $tmp43[1];
      $tmp46 = ats2phppre_add_int1_int1($arg1, 1);
      $tmp47 = array($tmp44, $arg2);
      // ATStailcalseq_beg
      $apy0 = $tmp45;
      $apy1 = $tmp46;
      $apy2 = $tmp47;
      $arg0 = $apy0;
      $arg1 = $apy1;
      $arg2 = $apy2;
      goto __patsflab__ats2jspre_stream_auxmain_16;
      // ATStailcalseq_end
      break;
      // ATSbranchseq_end
    } while(0);
    // ATScaseofseq_end
  } else {
    $tmp48 = ats2phppre_list_reverse($arg2);
    $tmpret41 = array($tmp48);
  } // endif
  return $tmpret41;
} // end-of-function


function
ats2phppre_stream_drop_opt($arg0, $arg1)
{
//
  $tmpret50 = NULL;
//
  __patsflab_stream_drop_opt:
  $tmpret50 = _ats2jspre_stream_auxmain_18($arg1, $arg0, 0);
  return $tmpret50;
} // end-of-function


function
_ats2jspre_stream_auxmain_18($env0, $arg0, $arg1)
{
//
  $apy0 = NULL;
  $apy1 = NULL;
  $tmpret51 = NULL;
  $tmp52 = NULL;
  $tmp53 = NULL;
  $tmp55 = NULL;
  $tmp56 = NULL;
//
  __patsflab__ats2jspre_stream_auxmain_18:
  $tmp52 = ats2phppre_lt_int1_int1($arg1, $env0);
  if($tmp52) {
    $tmp53 = ATSPMVlazyval_eval($arg0); 
    // ATScaseofseq_beg
    do {
      // ATSbranchseq_beg
      __atstmplab24:
      if(ATSCKptriscons($tmp53)) goto __atstmplab27;
      __atstmplab25:
      $tmpret51 = NULL;
      break;
      // ATSbranchseq_end
      // ATSbranchseq_beg
      __atstmplab26:
      __atstmplab27:
      $tmp55 = $tmp53[1];
      $tmp56 = ats2phppre_add_int1_int1($arg1, 1);
      // ATStailcalseq_beg
      $apy0 = $tmp55;
      $apy1 = $tmp56;
      $arg0 = $apy0;
      $arg1 = $apy1;
      goto __patsflab__ats2jspre_stream_auxmain_18;
      // ATStailcalseq_end
      break;
      // ATSbranchseq_end
    } while(0);
    // ATScaseofseq_end
  } else {
    $tmpret51 = array($arg0);
  } // endif
  return $tmpret51;
} // end-of-function


function
ats2phppre_stream_append($arg0, $arg1)
{
//
  $tmpret57 = NULL;
//
  __patsflab_stream_append:
  $tmpret57 = ATSPMVlazyval(_ats2jspre_stream_patsfun_20__closurerize($arg0, $arg1));
  return $tmpret57;
} // end-of-function


function
_ats2jspre_stream_patsfun_20($env0, $env1)
{
//
  $tmpret58 = NULL;
  $tmp59 = NULL;
  $tmp60 = NULL;
  $tmp61 = NULL;
  $tmp62 = NULL;
//
  __patsflab__ats2jspre_stream_patsfun_20:
  $tmp59 = ATSPMVlazyval_eval($env0); 
  // ATScaseofseq_beg
  do {
    // ATSbranchseq_beg
    __atstmplab28:
    if(ATSCKptriscons($tmp59)) goto __atstmplab31;
    __atstmplab29:
    $tmpret58 = ATSPMVlazyval_eval($env1); 
    break;
    // ATSbranchseq_end
    // ATSbranchseq_beg
    __atstmplab30:
    __atstmplab31:
    $tmp60 = $tmp59[0];
    $tmp61 = $tmp59[1];
    $tmp62 = ats2phppre_stream_append($tmp61, $env1);
    $tmpret58 = array($tmp60, $tmp62);
    break;
    // ATSbranchseq_end
  } while(0);
  // ATScaseofseq_end
  return $tmpret58;
} // end-of-function


function
ats2phppre_stream_concat($arg0)
{
//
  $tmpret63 = NULL;
//
  __patsflab_stream_concat:
  $tmpret63 = ATSPMVlazyval(_ats2jspre_stream_patsfun_22__closurerize($arg0));
  return $tmpret63;
} // end-of-function


function
_ats2jspre_stream_patsfun_22($env0)
{
//
  $tmpret64 = NULL;
  $tmp65 = NULL;
  $tmp66 = NULL;
  $tmp67 = NULL;
  $tmp68 = NULL;
  $tmp69 = NULL;
//
  __patsflab__ats2jspre_stream_patsfun_22:
  $tmp65 = ATSPMVlazyval_eval($env0); 
  // ATScaseofseq_beg
  do {
    // ATSbranchseq_beg
    __atstmplab32:
    if(ATSCKptriscons($tmp65)) goto __atstmplab35;
    __atstmplab33:
    $tmpret64 = NULL;
    break;
    // ATSbranchseq_end
    // ATSbranchseq_beg
    __atstmplab34:
    __atstmplab35:
    $tmp66 = $tmp65[0];
    $tmp67 = $tmp65[1];
    $tmp69 = ats2phppre_stream_concat($tmp67);
    $tmp68 = ats2phppre_stream_append($tmp66, $tmp69);
    $tmpret64 = ATSPMVlazyval_eval($tmp68); 
    break;
    // ATSbranchseq_end
  } while(0);
  // ATScaseofseq_end
  return $tmpret64;
} // end-of-function


function
ats2phppre_stream_map_cloref($arg0, $arg1)
{
//
  $tmpret70 = NULL;
//
  __patsflab_stream_map_cloref:
  $tmpret70 = ATSPMVlazyval(_ats2jspre_stream_patsfun_24__closurerize($arg0, $arg1));
  return $tmpret70;
} // end-of-function


function
_ats2jspre_stream_patsfun_24($env0, $env1)
{
//
  $tmpret71 = NULL;
  $tmp72 = NULL;
  $tmp73 = NULL;
  $tmp74 = NULL;
  $tmp75 = NULL;
  $tmp76 = NULL;
//
  __patsflab__ats2jspre_stream_patsfun_24:
  $tmp72 = ATSPMVlazyval_eval($env0); 
  // ATScaseofseq_beg
  do {
    // ATSbranchseq_beg
    __atstmplab36:
    if(ATSCKptriscons($tmp72)) goto __atstmplab39;
    __atstmplab37:
    $tmpret71 = NULL;
    break;
    // ATSbranchseq_end
    // ATSbranchseq_beg
    __atstmplab38:
    __atstmplab39:
    $tmp73 = $tmp72[0];
    $tmp74 = $tmp72[1];
    $tmp75 = $env1[0]($env1, $tmp73);
    $tmp76 = ats2phppre_stream_map_cloref($tmp74, $env1);
    $tmpret71 = array($tmp75, $tmp76);
    break;
    // ATSbranchseq_end
  } while(0);
  // ATScaseofseq_end
  return $tmpret71;
} // end-of-function


function
ats2phppre_stream_map_method($arg0, $arg1)
{
//
  $tmpret77 = NULL;
//
  __patsflab_stream_map_method:
  $tmpret77 = _ats2jspre_stream_patsfun_26__closurerize($arg0);
  return $tmpret77;
} // end-of-function


function
_ats2jspre_stream_patsfun_26($env0, $arg0)
{
//
  $tmpret78 = NULL;
//
  __patsflab__ats2jspre_stream_patsfun_26:
  $tmpret78 = ats2phppre_stream_map_cloref($env0, $arg0);
  return $tmpret78;
} // end-of-function


function
ats2phppre_stream_filter_cloref($arg0, $arg1)
{
//
  $tmpret79 = NULL;
//
  __patsflab_stream_filter_cloref:
  $tmpret79 = ATSPMVlazyval(_ats2jspre_stream_patsfun_28__closurerize($arg0, $arg1));
  return $tmpret79;
} // end-of-function


function
_ats2jspre_stream_patsfun_28($env0, $env1)
{
//
  $tmpret80 = NULL;
  $tmp81 = NULL;
  $tmp82 = NULL;
  $tmp83 = NULL;
  $tmp84 = NULL;
  $tmp85 = NULL;
  $tmp86 = NULL;
//
  __patsflab__ats2jspre_stream_patsfun_28:
  $tmp81 = ATSPMVlazyval_eval($env0); 
  // ATScaseofseq_beg
  do {
    // ATSbranchseq_beg
    __atstmplab40:
    if(ATSCKptriscons($tmp81)) goto __atstmplab43;
    __atstmplab41:
    $tmpret80 = NULL;
    break;
    // ATSbranchseq_end
    // ATSbranchseq_beg
    __atstmplab42:
    __atstmplab43:
    $tmp82 = $tmp81[0];
    $tmp83 = $tmp81[1];
    $tmp84 = $env1[0]($env1, $tmp82);
    if($tmp84) {
      $tmp85 = ats2phppre_stream_filter_cloref($tmp83, $env1);
      $tmpret80 = array($tmp82, $tmp85);
    } else {
      $tmp86 = ats2phppre_stream_filter_cloref($tmp83, $env1);
      $tmpret80 = ATSPMVlazyval_eval($tmp86); 
    } // endif
    break;
    // ATSbranchseq_end
  } while(0);
  // ATScaseofseq_end
  return $tmpret80;
} // end-of-function


function
ats2phppre_stream_filter_method($arg0)
{
//
  $tmpret87 = NULL;
//
  __patsflab_stream_filter_method:
  $tmpret87 = _ats2jspre_stream_patsfun_30__closurerize($arg0);
  return $tmpret87;
} // end-of-function


function
_ats2jspre_stream_patsfun_30($env0, $arg0)
{
//
  $tmpret88 = NULL;
//
  __patsflab__ats2jspre_stream_patsfun_30:
  $tmpret88 = ats2phppre_stream_filter_cloref($env0, $arg0);
  return $tmpret88;
} // end-of-function


function
ats2phppre_stream_forall_cloref($arg0, $arg1)
{
//
  $apy0 = NULL;
  $apy1 = NULL;
  $tmpret89 = NULL;
  $tmp90 = NULL;
  $tmp91 = NULL;
  $tmp92 = NULL;
  $tmp93 = NULL;
//
  __patsflab_stream_forall_cloref:
  $tmp90 = ATSPMVlazyval_eval($arg0); 
  // ATScaseofseq_beg
  do {
    // ATSbranchseq_beg
    __atstmplab44:
    if(ATSCKptriscons($tmp90)) goto __atstmplab47;
    __atstmplab45:
    $tmpret89 = true;
    break;
    // ATSbranchseq_end
    // ATSbranchseq_beg
    __atstmplab46:
    __atstmplab47:
    $tmp91 = $tmp90[0];
    $tmp92 = $tmp90[1];
    $tmp93 = $arg1[0]($arg1, $tmp91);
    if($tmp93) {
      // ATStailcalseq_beg
      $apy0 = $tmp92;
      $apy1 = $arg1;
      $arg0 = $apy0;
      $arg1 = $apy1;
      goto __patsflab_stream_forall_cloref;
      // ATStailcalseq_end
    } else {
      $tmpret89 = false;
    } // endif
    break;
    // ATSbranchseq_end
  } while(0);
  // ATScaseofseq_end
  return $tmpret89;
} // end-of-function


function
ats2phppre_stream_forall_method($arg0)
{
//
  $tmpret94 = NULL;
//
  __patsflab_stream_forall_method:
  $tmpret94 = _ats2jspre_stream_patsfun_33__closurerize($arg0);
  return $tmpret94;
} // end-of-function


function
_ats2jspre_stream_patsfun_33($env0, $arg0)
{
//
  $tmpret95 = NULL;
//
  __patsflab__ats2jspre_stream_patsfun_33:
  $tmpret95 = ats2phppre_stream_forall_cloref($env0, $arg0);
  return $tmpret95;
} // end-of-function


function
ats2phppre_stream_exists_cloref($arg0, $arg1)
{
//
  $apy0 = NULL;
  $apy1 = NULL;
  $tmpret96 = NULL;
  $tmp97 = NULL;
  $tmp98 = NULL;
  $tmp99 = NULL;
  $tmp100 = NULL;
//
  __patsflab_stream_exists_cloref:
  $tmp97 = ATSPMVlazyval_eval($arg0); 
  // ATScaseofseq_beg
  do {
    // ATSbranchseq_beg
    __atstmplab48:
    if(ATSCKptriscons($tmp97)) goto __atstmplab51;
    __atstmplab49:
    $tmpret96 = false;
    break;
    // ATSbranchseq_end
    // ATSbranchseq_beg
    __atstmplab50:
    __atstmplab51:
    $tmp98 = $tmp97[0];
    $tmp99 = $tmp97[1];
    $tmp100 = $arg1[0]($arg1, $tmp98);
    if($tmp100) {
      $tmpret96 = true;
    } else {
      // ATStailcalseq_beg
      $apy0 = $tmp99;
      $apy1 = $arg1;
      $arg0 = $apy0;
      $arg1 = $apy1;
      goto __patsflab_stream_exists_cloref;
      // ATStailcalseq_end
    } // endif
    break;
    // ATSbranchseq_end
  } while(0);
  // ATScaseofseq_end
  return $tmpret96;
} // end-of-function


function
ats2phppre_stream_exists_method($arg0)
{
//
  $tmpret101 = NULL;
//
  __patsflab_stream_exists_method:
  $tmpret101 = _ats2jspre_stream_patsfun_36__closurerize($arg0);
  return $tmpret101;
} // end-of-function


function
_ats2jspre_stream_patsfun_36($env0, $arg0)
{
//
  $tmpret102 = NULL;
//
  __patsflab__ats2jspre_stream_patsfun_36:
  $tmpret102 = ats2phppre_stream_exists_cloref($env0, $arg0);
  return $tmpret102;
} // end-of-function


function
ats2phppre_stream_foreach_cloref($arg0, $arg1)
{
//
  $apy0 = NULL;
  $apy1 = NULL;
  $tmp104 = NULL;
  $tmp105 = NULL;
  $tmp106 = NULL;
//
  __patsflab_stream_foreach_cloref:
  $tmp104 = ATSPMVlazyval_eval($arg0); 
  // ATScaseofseq_beg
  do {
    // ATSbranchseq_beg
    __atstmplab52:
    if(ATSCKptriscons($tmp104)) goto __atstmplab55;
    __atstmplab53:
    // ATSINSmove_void;
    break;
    // ATSbranchseq_end
    // ATSbranchseq_beg
    __atstmplab54:
    __atstmplab55:
    $tmp105 = $tmp104[0];
    $tmp106 = $tmp104[1];
    $arg1[0]($arg1, $tmp105);
    // ATStailcalseq_beg
    $apy0 = $tmp106;
    $apy1 = $arg1;
    $arg0 = $apy0;
    $arg1 = $apy1;
    goto __patsflab_stream_foreach_cloref;
    // ATStailcalseq_end
    break;
    // ATSbranchseq_end
  } while(0);
  // ATScaseofseq_end
  return/*_void*/;
} // end-of-function


function
ats2phppre_stream_foreach_method($arg0)
{
//
  $tmpret108 = NULL;
//
  __patsflab_stream_foreach_method:
  $tmpret108 = _ats2jspre_stream_patsfun_39__closurerize($arg0);
  return $tmpret108;
} // end-of-function


function
_ats2jspre_stream_patsfun_39($env0, $arg0)
{
//
//
  __patsflab__ats2jspre_stream_patsfun_39:
  ats2phppre_stream_foreach_cloref($env0, $arg0);
  return/*_void*/;
} // end-of-function


function
ats2phppre_stream_iforeach_cloref($arg0, $arg1)
{
//
//
  __patsflab_stream_iforeach_cloref:
  _ats2jspre_stream_loop_41($arg1, 0, $arg0);
  return/*_void*/;
} // end-of-function


function
_ats2jspre_stream_loop_41($env0, $arg0, $arg1)
{
//
  $apy0 = NULL;
  $apy1 = NULL;
  $tmp112 = NULL;
  $tmp113 = NULL;
  $tmp114 = NULL;
  $tmp116 = NULL;
//
  __patsflab__ats2jspre_stream_loop_41:
  $tmp112 = ATSPMVlazyval_eval($arg1); 
  // ATScaseofseq_beg
  do {
    // ATSbranchseq_beg
    __atstmplab56:
    if(ATSCKptriscons($tmp112)) goto __atstmplab59;
    __atstmplab57:
    // ATSINSmove_void;
    break;
    // ATSbranchseq_end
    // ATSbranchseq_beg
    __atstmplab58:
    __atstmplab59:
    $tmp113 = $tmp112[0];
    $tmp114 = $tmp112[1];
    $env0[0]($env0, $arg0, $tmp113);
    $tmp116 = ats2phppre_add_int1_int1($arg0, 1);
    // ATStailcalseq_beg
    $apy0 = $tmp116;
    $apy1 = $tmp114;
    $arg0 = $apy0;
    $arg1 = $apy1;
    goto __patsflab__ats2jspre_stream_loop_41;
    // ATStailcalseq_end
    break;
    // ATSbranchseq_end
  } while(0);
  // ATScaseofseq_end
  return/*_void*/;
} // end-of-function


function
ats2phppre_stream_iforeach_method($arg0)
{
//
  $tmpret117 = NULL;
//
  __patsflab_stream_iforeach_method:
  $tmpret117 = _ats2jspre_stream_patsfun_43__closurerize($arg0);
  return $tmpret117;
} // end-of-function


function
_ats2jspre_stream_patsfun_43($env0, $arg0)
{
//
//
  __patsflab__ats2jspre_stream_patsfun_43:
  ats2phppre_stream_iforeach_cloref($env0, $arg0);
  return/*_void*/;
} // end-of-function


function
ats2phppre_stream_tabulate_cloref($arg0)
{
//
  $tmpret119 = NULL;
//
  __patsflab_stream_tabulate_cloref:
  $tmpret119 = _ats2jspre_stream_auxmain_45($arg0, 0);
  return $tmpret119;
} // end-of-function


function
_ats2jspre_stream_auxmain_45($env0, $arg0)
{
//
  $tmpret120 = NULL;
//
  __patsflab__ats2jspre_stream_auxmain_45:
  $tmpret120 = ATSPMVlazyval(_ats2jspre_stream_patsfun_46__closurerize($env0, $arg0));
  return $tmpret120;
} // end-of-function


function
_ats2jspre_stream_patsfun_46($env0, $env1)
{
//
  $tmpret121 = NULL;
  $tmp122 = NULL;
  $tmp123 = NULL;
  $tmp124 = NULL;
//
  __patsflab__ats2jspre_stream_patsfun_46:
  $tmp122 = $env0[0]($env0, $env1);
  $tmp124 = ats2phppre_add_int1_int1($env1, 1);
  $tmp123 = _ats2jspre_stream_auxmain_45($env0, $tmp124);
  $tmpret121 = array($tmp122, $tmp123);
  return $tmpret121;
} // end-of-function


function
ats2phppre_cross_stream_list($arg0, $arg1)
{
//
  $tmpret125 = NULL;
//
  __patsflab_cross_stream_list:
  $tmpret125 = ATSPMVlazyval(_ats2jspre_stream_patsfun_50__closurerize($arg0, $arg1));
  return $tmpret125;
} // end-of-function


function
_ats2jspre_stream_auxmain_48($arg0, $arg1, $arg2, $arg3)
{
//
  $tmpret126 = NULL;
//
  __patsflab__ats2jspre_stream_auxmain_48:
  $tmpret126 = ATSPMVlazyval(_ats2jspre_stream_patsfun_49__closurerize($arg0, $arg1, $arg2, $arg3));
  return $tmpret126;
} // end-of-function


function
_ats2jspre_stream_patsfun_49($env0, $env1, $env2, $env3)
{
//
  $tmpret127 = NULL;
  $tmp128 = NULL;
  $tmp129 = NULL;
  $tmp130 = NULL;
  $tmp131 = NULL;
  $tmp132 = NULL;
//
  __patsflab__ats2jspre_stream_patsfun_49:
  // ATScaseofseq_beg
  do {
    // ATSbranchseq_beg
    __atstmplab60:
    if(ATSCKptriscons($env3)) goto __atstmplab63;
    __atstmplab61:
    $tmp130 = ats2phppre_cross_stream_list($env1, $env2);
    $tmpret127 = ATSPMVlazyval_eval($tmp130); 
    break;
    // ATSbranchseq_end
    // ATSbranchseq_beg
    __atstmplab62:
    __atstmplab63:
    $tmp128 = $env3[0];
    $tmp129 = $env3[1];
    $tmp131 = array($env0, $tmp128);
    $tmp132 = _ats2jspre_stream_auxmain_48($env0, $env1, $env2, $tmp129);
    $tmpret127 = array($tmp131, $tmp132);
    break;
    // ATSbranchseq_end
  } while(0);
  // ATScaseofseq_end
  return $tmpret127;
} // end-of-function


function
_ats2jspre_stream_patsfun_50($env0, $env1)
{
//
  $tmpret133 = NULL;
  $tmp134 = NULL;
  $tmp135 = NULL;
  $tmp136 = NULL;
  $tmp137 = NULL;
//
  __patsflab__ats2jspre_stream_patsfun_50:
  $tmp134 = ATSPMVlazyval_eval($env0); 
  // ATScaseofseq_beg
  do {
    // ATSbranchseq_beg
    __atstmplab64:
    if(ATSCKptriscons($tmp134)) goto __atstmplab67;
    __atstmplab65:
    $tmpret133 = NULL;
    break;
    // ATSbranchseq_end
    // ATSbranchseq_beg
    __atstmplab66:
    if(ATSCKptrisnull($tmp134)) ATSINScaseof_fail("/home/hwxi/Research/ATS-Postiats-contrib/contrib/libatscc/DATS/stream.dats: 6587(line=420, offs=1) -- 6679(line=422, offs=50)");
    __atstmplab67:
    $tmp135 = $tmp134[0];
    $tmp136 = $tmp134[1];
    $tmp137 = _ats2jspre_stream_auxmain_48($tmp135, $tmp136, $env1, $env1);
    $tmpret133 = ATSPMVlazyval_eval($tmp137); 
    break;
    // ATSbranchseq_end
  } while(0);
  // ATScaseofseq_end
  return $tmpret133;
} // end-of-function


function
ats2phppre_cross_stream_list0($arg0, $arg1)
{
//
  $tmpret138 = NULL;
//
  __patsflab_cross_stream_list0:
  $tmpret138 = ats2phppre_cross_stream_list($arg0, $arg1);
  return $tmpret138;
} // end-of-function


function
ats2phppre_stream2cloref_exn($arg0)
{
//
  $tmpret139 = NULL;
  $tmp140 = NULL;
//
  __patsflab_stream2cloref_exn:
  $tmp140 = ats2phppre_ref($arg0);
  $tmpret139 = _ats2jspre_stream_patsfun_53__closurerize($tmp140);
  return $tmpret139;
} // end-of-function


function
_ats2jspre_stream_patsfun_53($env0)
{
//
  $tmpret141 = NULL;
  $tmp142 = NULL;
  $tmp143 = NULL;
  $tmp144 = NULL;
  $tmp145 = NULL;
//
  __patsflab__ats2jspre_stream_patsfun_53:
  $tmp142 = ats2phppre_ref_get_elt($env0);
  $tmp143 = ATSPMVlazyval_eval($tmp142); 
  if(ATSCKptrisnull($tmp143)) ATSINScaseof_fail("/home/hwxi/Research/ATS-Postiats-contrib/contrib/libatscc/DATS/stream.dats: 6980(line=448, offs=5) -- 7004(line=448, offs=29)");
  $tmp144 = $tmp143[0];
  $tmp145 = $tmp143[1];
  ats2phppre_ref_set_elt($env0, $tmp145);
  $tmpret141 = $tmp144;
  return $tmpret141;
} // end-of-function


function
ats2phppre_stream2cloref_opt($arg0)
{
//
  $tmpret147 = NULL;
  $tmp148 = NULL;
//
  __patsflab_stream2cloref_opt:
  $tmp148 = ats2phppre_ref($arg0);
  $tmpret147 = _ats2jspre_stream_patsfun_55__closurerize($tmp148);
  return $tmpret147;
} // end-of-function


function
_ats2jspre_stream_patsfun_55($env0)
{
//
  $tmpret149 = NULL;
  $tmp150 = NULL;
  $tmp151 = NULL;
  $tmp152 = NULL;
  $tmp153 = NULL;
//
  __patsflab__ats2jspre_stream_patsfun_55:
  $tmp150 = ats2phppre_ref_get_elt($env0);
  $tmp151 = ATSPMVlazyval_eval($tmp150); 
  // ATScaseofseq_beg
  do {
    // ATSbranchseq_beg
    __atstmplab68:
    if(ATSCKptriscons($tmp151)) goto __atstmplab71;
    __atstmplab69:
    $tmpret149 = NULL;
    break;
    // ATSbranchseq_end
    // ATSbranchseq_beg
    __atstmplab70:
    __atstmplab71:
    $tmp152 = $tmp151[0];
    $tmp153 = $tmp151[1];
    ats2phppre_ref_set_elt($env0, $tmp153);
    $tmpret149 = array($tmp152);
    break;
    // ATSbranchseq_end
  } while(0);
  // ATScaseofseq_end
  return $tmpret149;
} // end-of-function


function
ats2phppre_stream2cloref_last($arg0, $arg1)
{
//
  $tmpret155 = NULL;
  $tmp156 = NULL;
  $tmp157 = NULL;
//
  __patsflab_stream2cloref_last:
  $tmp156 = ats2phppre_ref($arg0);
  $tmp157 = ats2phppre_ref($arg1);
  $tmpret155 = _ats2jspre_stream_patsfun_57__closurerize($tmp156, $tmp157);
  return $tmpret155;
} // end-of-function


function
_ats2jspre_stream_patsfun_57($env0, $env1)
{
//
  $tmpret158 = NULL;
  $tmp159 = NULL;
  $tmp160 = NULL;
  $tmp161 = NULL;
  $tmp162 = NULL;
//
  __patsflab__ats2jspre_stream_patsfun_57:
  $tmp159 = ats2phppre_ref_get_elt($env0);
  $tmp160 = ATSPMVlazyval_eval($tmp159); 
  // ATScaseofseq_beg
  do {
    // ATSbranchseq_beg
    __atstmplab72:
    if(ATSCKptriscons($tmp160)) goto __atstmplab75;
    __atstmplab73:
    $tmpret158 = ats2phppre_ref_get_elt($env1);
    break;
    // ATSbranchseq_end
    // ATSbranchseq_beg
    __atstmplab74:
    __atstmplab75:
    $tmp161 = $tmp160[0];
    $tmp162 = $tmp160[1];
    ats2phppre_ref_set_elt($env0, $tmp162);
    ats2phppre_ref_set_elt($env1, $tmp161);
    $tmpret158 = $tmp161;
    break;
    // ATSbranchseq_end
  } while(0);
  // ATScaseofseq_end
  return $tmpret158;
} // end-of-function


function
ats2phppre_stream_take_while_cloref($arg0, $arg1)
{
//
  $tmpret165 = NULL;
  $tmp166 = NULL;
  $tmp167 = NULL;
  $tmp168 = NULL;
  $tmp169 = NULL;
//
  __patsflab_stream_take_while_cloref:
  $tmp166 = ats2phppre_stream_rtake_while_cloref($arg0, $arg1);
  $tmp167 = $tmp166[0];
  $tmp168 = $tmp166[1];
  $tmp169 = ats2phppre_list_reverse($tmp168);
  $tmpret165 = array($tmp167, $tmp169);
  return $tmpret165;
} // end-of-function


function
ats2phppre_stream_rtake_while_cloref($arg0, $arg1)
{
//
  $tmpret170 = NULL;
  $tmp178 = NULL;
//
  __patsflab_stream_rtake_while_cloref:
  $tmp178 = NULL;
  $tmpret170 = _ats2jspre_stream_loop_60($arg1, $arg0, 0, $tmp178);
  return $tmpret170;
} // end-of-function


function
_ats2jspre_stream_loop_60($env0, $arg0, $arg1, $arg2)
{
//
  $apy0 = NULL;
  $apy1 = NULL;
  $apy2 = NULL;
  $tmpret171 = NULL;
  $tmp172 = NULL;
  $tmp173 = NULL;
  $tmp174 = NULL;
  $tmp175 = NULL;
  $tmp176 = NULL;
  $tmp177 = NULL;
//
  __patsflab__ats2jspre_stream_loop_60:
  $tmp172 = ATSPMVlazyval_eval($arg0); 
  // ATScaseofseq_beg
  do {
    // ATSbranchseq_beg
    __atstmplab76:
    if(ATSCKptriscons($tmp172)) goto __atstmplab79;
    __atstmplab77:
    $tmpret171 = array($arg0, $arg2);
    break;
    // ATSbranchseq_end
    // ATSbranchseq_beg
    __atstmplab78:
    __atstmplab79:
    $tmp173 = $tmp172[0];
    $tmp174 = $tmp172[1];
    $tmp175 = $env0[0]($env0, $arg1, $tmp173);
    if($tmp175) {
      $tmp176 = ats2phppre_add_int1_int1($arg1, 1);
      $tmp177 = array($tmp173, $arg2);
      // ATStailcalseq_beg
      $apy0 = $tmp174;
      $apy1 = $tmp176;
      $apy2 = $tmp177;
      $arg0 = $apy0;
      $arg1 = $apy1;
      $arg2 = $apy2;
      goto __patsflab__ats2jspre_stream_loop_60;
      // ATStailcalseq_end
    } else {
      $tmpret171 = array($arg0, $arg2);
    } // endif
    break;
    // ATSbranchseq_end
  } while(0);
  // ATScaseofseq_end
  return $tmpret171;
} // end-of-function


function
ats2phppre_stream_take_until_cloref($arg0, $arg1)
{
//
  $tmpret179 = NULL;
//
  __patsflab_stream_take_until_cloref:
  $tmpret179 = ats2phppre_stream_take_while_cloref($arg0, _ats2jspre_stream_patsfun_62__closurerize($arg1));
  return $tmpret179;
} // end-of-function


function
_ats2jspre_stream_patsfun_62($env0, $arg0, $arg1)
{
//
  $tmpret180 = NULL;
  $tmp181 = NULL;
//
  __patsflab__ats2jspre_stream_patsfun_62:
  $tmp181 = $env0[0]($env0, $arg0, $arg1);
  $tmpret180 = atspre_neg_bool0($tmp181);
  return $tmpret180;
} // end-of-function


function
ats2phppre_stream_rtake_until_cloref($arg0, $arg1)
{
//
  $tmpret182 = NULL;
//
  __patsflab_stream_rtake_until_cloref:
  $tmpret182 = ats2phppre_stream_rtake_while_cloref($arg0, _ats2jspre_stream_patsfun_64__closurerize($arg1));
  return $tmpret182;
} // end-of-function


function
_ats2jspre_stream_patsfun_64($env0, $arg0, $arg1)
{
//
  $tmpret183 = NULL;
  $tmp184 = NULL;
//
  __patsflab__ats2jspre_stream_patsfun_64:
  $tmp184 = $env0[0]($env0, $arg0, $arg1);
  $tmpret183 = atspre_neg_bool0($tmp184);
  return $tmpret183;
} // end-of-function


function
ats2phppre_stream_list_xprod2($arg0, $arg1)
{
//
  $tmpret185 = NULL;
//
  __patsflab_stream_list_xprod2:
  $tmpret185 = _ats2jspre_stream_auxlst_68($arg0, $arg1);
  return $tmpret185;
} // end-of-function


function
_ats2jspre_stream_aux_66($arg0, $arg1)
{
//
  $tmpret186 = NULL;
//
  __patsflab__ats2jspre_stream_aux_66:
  $tmpret186 = ATSPMVlazyval(_ats2jspre_stream_patsfun_67__closurerize($arg0, $arg1));
  return $tmpret186;
} // end-of-function


function
_ats2jspre_stream_patsfun_67($env0, $env1)
{
//
  $tmpret187 = NULL;
  $tmp188 = NULL;
  $tmp189 = NULL;
  $tmp190 = NULL;
  $tmp191 = NULL;
//
  __patsflab__ats2jspre_stream_patsfun_67:
  // ATScaseofseq_beg
  do {
    // ATSbranchseq_beg
    __atstmplab80:
    if(ATSCKptriscons($env1)) goto __atstmplab83;
    __atstmplab81:
    $tmpret187 = NULL;
    break;
    // ATSbranchseq_end
    // ATSbranchseq_beg
    __atstmplab82:
    __atstmplab83:
    $tmp188 = $env1[0];
    $tmp189 = $env1[1];
    $tmp190 = array($env0, $tmp188);
    $tmp191 = _ats2jspre_stream_aux_66($env0, $tmp189);
    $tmpret187 = array($tmp190, $tmp191);
    break;
    // ATSbranchseq_end
  } while(0);
  // ATScaseofseq_end
  return $tmpret187;
} // end-of-function


function
_ats2jspre_stream_auxlst_68($arg0, $arg1)
{
//
  $tmpret192 = NULL;
//
  __patsflab__ats2jspre_stream_auxlst_68:
  $tmpret192 = ATSPMVlazyval(_ats2jspre_stream_patsfun_69__closurerize($arg0, $arg1));
  return $tmpret192;
} // end-of-function


function
_ats2jspre_stream_patsfun_69($env0, $env1)
{
//
  $tmpret193 = NULL;
  $tmp194 = NULL;
  $tmp195 = NULL;
  $tmp196 = NULL;
  $tmp197 = NULL;
  $tmp198 = NULL;
//
  __patsflab__ats2jspre_stream_patsfun_69:
  // ATScaseofseq_beg
  do {
    // ATSbranchseq_beg
    __atstmplab84:
    if(ATSCKptriscons($env0)) goto __atstmplab87;
    __atstmplab85:
    $tmpret193 = NULL;
    break;
    // ATSbranchseq_end
    // ATSbranchseq_beg
    __atstmplab86:
    __atstmplab87:
    $tmp194 = $env0[0];
    $tmp195 = $env0[1];
    $tmp197 = _ats2jspre_stream_aux_66($tmp194, $env1);
    $tmp198 = _ats2jspre_stream_auxlst_68($tmp195, $env1);
    $tmp196 = ats2phppre_stream_append($tmp197, $tmp198);
    $tmpret193 = ATSPMVlazyval_eval($tmp196); 
    break;
    // ATSbranchseq_end
  } while(0);
  // ATScaseofseq_end
  return $tmpret193;
} // end-of-function

/* ****** ****** */

/* end-of-compilation-unit */
?>
<?php
/*
**
** The PHP code is generated by atscc2php
** The starting compilation time is: 2016-10-8: 10h:20m
**
*/
function
_ats2phppre_stream_vt_patsfun_6__closurerize($env0, $env1)
{
  return array(function($cenv, $arg0) { return _ats2phppre_stream_vt_patsfun_6($cenv[1], $cenv[2], $arg0); }, $env0, $env1);
}

function
_ats2phppre_stream_vt_patsfun_8__closurerize($env0)
{
  return array(function($cenv, $arg0) { return _ats2phppre_stream_vt_patsfun_8($cenv[1], $arg0); }, $env0);
}

function
_ats2phppre_stream_vt_patsfun_11__closurerize($env0, $env1)
{
  return array(function($cenv, $arg0) { return _ats2phppre_stream_vt_patsfun_11($cenv[1], $cenv[2], $arg0); }, $env0, $env1);
}

function
_ats2phppre_stream_vt_patsfun_13__closurerize($env0)
{
  return array(function($cenv, $arg0) { return _ats2phppre_stream_vt_patsfun_13($cenv[1], $arg0); }, $env0);
}

function
_ats2phppre_stream_vt_patsfun_17__closurerize($env0)
{
  return array(function($cenv, $arg0) { return _ats2phppre_stream_vt_patsfun_17($cenv[1], $arg0); }, $env0);
}

function
_ats2phppre_stream_vt_patsfun_21__closurerize($env0)
{
  return array(function($cenv, $arg0) { return _ats2phppre_stream_vt_patsfun_21($cenv[1], $arg0); }, $env0);
}

function
_ats2phppre_stream_vt_patsfun_24__closurerize($env0, $env1)
{
  return array(function($cenv, $arg0) { return _ats2phppre_stream_vt_patsfun_24($cenv[1], $cenv[2], $arg0); }, $env0, $env1);
}


function
ats2phppre_stream_vt_map_cloref($arg0, $arg1)
{
//
  $tmpret5 = NULL;
//
  __patsflab_stream_vt_map_cloref:
  $tmpret5 = _ats2phppre_stream_vt_auxmain_5($arg1, $arg0);
  return $tmpret5;
} // end-of-function


function
_ats2phppre_stream_vt_auxmain_5($env0, $arg0)
{
//
  $tmpret6 = NULL;
//
  __patsflab__ats2phppre_stream_vt_auxmain_5:
  $tmpret6 = ATSPMVllazyval(_ats2phppre_stream_vt_patsfun_6__closurerize($env0, $arg0));
  return $tmpret6;
} // end-of-function


function
_ats2phppre_stream_vt_patsfun_6($env0, $env1, $arg0)
{
//
  $tmpret7 = NULL;
  $tmp8 = NULL;
  $tmp9 = NULL;
  $tmp10 = NULL;
  $tmp11 = NULL;
  $tmp12 = NULL;
//
  __patsflab__ats2phppre_stream_vt_patsfun_6:
  if($arg0) {
    $tmp8 = ATSPMVllazyval_eval($env1);
    // ATScaseofseq_beg
    do {
      // ATSbranchseq_beg
      __atstmplab0:
      if(ATSCKptriscons($tmp8)) goto __atstmplab3;
      __atstmplab1:
      $tmpret7 = NULL;
      break;
      // ATSbranchseq_end
      // ATSbranchseq_beg
      __atstmplab2:
      __atstmplab3:
      $tmp9 = $tmp8[0];
      $tmp10 = $tmp8[1];
      // ATSINSfreecon($tmp8);
      $tmp11 = $env0[0]($env0, $tmp9);
      $tmp12 = _ats2phppre_stream_vt_auxmain_5($env0, $tmp10);
      $tmpret7 = array($tmp11, $tmp12);
      break;
      // ATSbranchseq_end
    } while(0);
    // ATScaseofseq_end
  } else {
    atspre_lazy_vt_free($env1);
  } // endif
  return $tmpret7;
} // end-of-function


function
ats2phppre_stream_vt_map_method($arg0)
{
//
  $tmpret14 = NULL;
//
  __patsflab_stream_vt_map_method:
  $tmpret14 = _ats2phppre_stream_vt_patsfun_8__closurerize($arg0);
  return $tmpret14;
} // end-of-function


function
_ats2phppre_stream_vt_patsfun_8($env0, $arg0)
{
//
  $tmpret15 = NULL;
//
  __patsflab__ats2phppre_stream_vt_patsfun_8:
  $tmpret15 = ats2phppre_stream_vt_map_cloref($env0, $arg0);
  return $tmpret15;
} // end-of-function


function
ats2phppre_stream_vt_filter_cloref($arg0, $arg1)
{
//
  $tmpret16 = NULL;
//
  __patsflab_stream_vt_filter_cloref:
  $tmpret16 = _ats2phppre_stream_vt_auxmain_10($arg1, $arg0);
  return $tmpret16;
} // end-of-function


function
_ats2phppre_stream_vt_auxmain_10($env0, $arg0)
{
//
  $tmpret17 = NULL;
//
  __patsflab__ats2phppre_stream_vt_auxmain_10:
  $tmpret17 = ATSPMVllazyval(_ats2phppre_stream_vt_patsfun_11__closurerize($env0, $arg0));
  return $tmpret17;
} // end-of-function


function
_ats2phppre_stream_vt_patsfun_11($env0, $env1, $arg0)
{
//
  $tmpret18 = NULL;
  $tmp19 = NULL;
  $tmp20 = NULL;
  $tmp21 = NULL;
  $tmp22 = NULL;
  $tmp23 = NULL;
  $tmp24 = NULL;
//
  __patsflab__ats2phppre_stream_vt_patsfun_11:
  if($arg0) {
    $tmp19 = ATSPMVllazyval_eval($env1);
    // ATScaseofseq_beg
    do {
      // ATSbranchseq_beg
      __atstmplab4:
      if(ATSCKptriscons($tmp19)) goto __atstmplab7;
      __atstmplab5:
      $tmpret18 = NULL;
      break;
      // ATSbranchseq_end
      // ATSbranchseq_beg
      __atstmplab6:
      __atstmplab7:
      $tmp20 = $tmp19[0];
      $tmp21 = $tmp19[1];
      // ATSINSfreecon($tmp19);
      $tmp22 = $env0[0]($env0, $tmp20);
      if($tmp22) {
        $tmp23 = _ats2phppre_stream_vt_auxmain_10($env0, $tmp21);
        $tmpret18 = array($tmp20, $tmp23);
      } else {
        $tmp24 = _ats2phppre_stream_vt_auxmain_10($env0, $tmp21);
        $tmpret18 = ATSPMVllazyval_eval($tmp24);
      } // endif
      break;
      // ATSbranchseq_end
    } while(0);
    // ATScaseofseq_end
  } else {
    atspre_lazy_vt_free($env1);
  } // endif
  return $tmpret18;
} // end-of-function


function
ats2phppre_stream_vt_filter_method($arg0)
{
//
  $tmpret26 = NULL;
//
  __patsflab_stream_vt_filter_method:
  $tmpret26 = _ats2phppre_stream_vt_patsfun_13__closurerize($arg0);
  return $tmpret26;
} // end-of-function


function
_ats2phppre_stream_vt_patsfun_13($env0, $arg0)
{
//
  $tmpret27 = NULL;
//
  __patsflab__ats2phppre_stream_vt_patsfun_13:
  $tmpret27 = ats2phppre_stream_vt_filter_cloref($env0, $arg0);
  return $tmpret27;
} // end-of-function


function
ats2phppre_stream_vt_foreach_cloref($arg0, $arg1)
{
//
//
  __patsflab_stream_vt_foreach_cloref:
  _ats2phppre_stream_vt_loop_15($arg1, $arg0);
  return/*_void*/;
} // end-of-function


function
_ats2phppre_stream_vt_loop_15($env0, $arg0)
{
//
  $apy0 = NULL;
  $tmp30 = NULL;
  $tmp31 = NULL;
  $tmp32 = NULL;
//
  __patsflab__ats2phppre_stream_vt_loop_15:
  $tmp30 = ATSPMVllazyval_eval($arg0);
  // ATScaseofseq_beg
  do {
    // ATSbranchseq_beg
    __atstmplab8:
    if(ATSCKptriscons($tmp30)) goto __atstmplab11;
    __atstmplab9:
    // ATSINSmove_void;
    break;
    // ATSbranchseq_end
    // ATSbranchseq_beg
    __atstmplab10:
    __atstmplab11:
    $tmp31 = $tmp30[0];
    $tmp32 = $tmp30[1];
    // ATSINSfreecon($tmp30);
    $env0[0]($env0, $tmp31);
    // ATStailcalseq_beg
    $apy0 = $tmp32;
    $arg0 = $apy0;
    goto __patsflab__ats2phppre_stream_vt_loop_15;
    // ATStailcalseq_end
    break;
    // ATSbranchseq_end
  } while(0);
  // ATScaseofseq_end
  return/*_void*/;
} // end-of-function


function
ats2phppre_stream_vt_foreach_method($arg0)
{
//
  $tmpret34 = NULL;
//
  __patsflab_stream_vt_foreach_method:
  $tmpret34 = _ats2phppre_stream_vt_patsfun_17__closurerize($arg0);
  return $tmpret34;
} // end-of-function


function
_ats2phppre_stream_vt_patsfun_17($env0, $arg0)
{
//
//
  __patsflab__ats2phppre_stream_vt_patsfun_17:
  ats2phppre_stream_vt_foreach_cloref($env0, $arg0);
  return/*_void*/;
} // end-of-function


function
ats2phppre_stream_vt_iforeach_cloref($arg0, $arg1)
{
//
//
  __patsflab_stream_vt_iforeach_cloref:
  _ats2phppre_stream_vt_loop_19($arg1, 0, $arg0);
  return/*_void*/;
} // end-of-function


function
_ats2phppre_stream_vt_loop_19($env0, $arg0, $arg1)
{
//
  $apy0 = NULL;
  $apy1 = NULL;
  $tmp38 = NULL;
  $tmp39 = NULL;
  $tmp40 = NULL;
  $tmp42 = NULL;
//
  __patsflab__ats2phppre_stream_vt_loop_19:
  $tmp38 = ATSPMVllazyval_eval($arg1);
  // ATScaseofseq_beg
  do {
    // ATSbranchseq_beg
    __atstmplab12:
    if(ATSCKptriscons($tmp38)) goto __atstmplab15;
    __atstmplab13:
    // ATSINSmove_void;
    break;
    // ATSbranchseq_end
    // ATSbranchseq_beg
    __atstmplab14:
    __atstmplab15:
    $tmp39 = $tmp38[0];
    $tmp40 = $tmp38[1];
    // ATSINSfreecon($tmp38);
    $env0[0]($env0, $arg0, $tmp39);
    $tmp42 = ats2phppre_add_int1_int1($arg0, 1);
    // ATStailcalseq_beg
    $apy0 = $tmp42;
    $apy1 = $tmp40;
    $arg0 = $apy0;
    $arg1 = $apy1;
    goto __patsflab__ats2phppre_stream_vt_loop_19;
    // ATStailcalseq_end
    break;
    // ATSbranchseq_end
  } while(0);
  // ATScaseofseq_end
  return/*_void*/;
} // end-of-function


function
ats2phppre_stream_vt_iforeach_method($arg0)
{
//
  $tmpret43 = NULL;
//
  __patsflab_stream_vt_iforeach_method:
  $tmpret43 = _ats2phppre_stream_vt_patsfun_21__closurerize($arg0);
  return $tmpret43;
} // end-of-function


function
_ats2phppre_stream_vt_patsfun_21($env0, $arg0)
{
//
//
  __patsflab__ats2phppre_stream_vt_patsfun_21:
  ats2phppre_stream_vt_iforeach_cloref($env0, $arg0);
  return/*_void*/;
} // end-of-function


function
ats2phppre_stream_vt_tabulate_cloref($arg0)
{
//
  $tmpret45 = NULL;
//
  __patsflab_stream_vt_tabulate_cloref:
  $tmpret45 = _ats2phppre_stream_vt_auxmain_23($arg0, 0);
  return $tmpret45;
} // end-of-function


function
_ats2phppre_stream_vt_auxmain_23($env0, $arg0)
{
//
  $tmpret46 = NULL;
//
  __patsflab__ats2phppre_stream_vt_auxmain_23:
  $tmpret46 = ATSPMVllazyval(_ats2phppre_stream_vt_patsfun_24__closurerize($env0, $arg0));
  return $tmpret46;
} // end-of-function


function
_ats2phppre_stream_vt_patsfun_24($env0, $env1, $arg0)
{
//
  $tmpret47 = NULL;
  $tmp48 = NULL;
  $tmp49 = NULL;
  $tmp50 = NULL;
//
  __patsflab__ats2phppre_stream_vt_patsfun_24:
  if($arg0) {
    $tmp48 = $env0[0]($env0, $env1);
    $tmp50 = ats2phppre_add_int1_int1($env1, 1);
    $tmp49 = _ats2phppre_stream_vt_auxmain_23($env0, $tmp50);
    $tmpret47 = array($tmp48, $tmp49);
  } else {
  } // endif
  return $tmpret47;
} // end-of-function

/* ****** ****** */

/* end-of-compilation-unit */
?>
<?php
/*
**
** The PHP code is generated by atscc2php
** The starting compilation time is: 2016-10-8: 10h:20m
**
*/
function
_ats2phppre_intrange_patsfun_7__closurerize($env0)
{
  return array(function($cenv, $arg0) { return _ats2phppre_intrange_patsfun_7($cenv[1], $arg0); }, $env0);
}

function
_ats2phppre_intrange_patsfun_9__closurerize($env0)
{
  return array(function($cenv, $arg0) { return _ats2phppre_intrange_patsfun_9($cenv[1], $arg0); }, $env0);
}

function
_ats2phppre_intrange_patsfun_11__closurerize($env0)
{
  return array(function($cenv, $arg0) { return _ats2phppre_intrange_patsfun_11($cenv[1], $arg0); }, $env0);
}

function
_ats2phppre_intrange_patsfun_14__closurerize($env0, $env1)
{
  return array(function($cenv, $arg0) { return _ats2phppre_intrange_patsfun_14($cenv[1], $cenv[2], $arg0); }, $env0, $env1);
}

function
_ats2phppre_intrange_patsfun_18__closurerize($env0)
{
  return array(function($cenv, $arg0) { return _ats2phppre_intrange_patsfun_18($cenv[1], $arg0); }, $env0);
}

function
_ats2phppre_intrange_patsfun_21__closurerize($env0, $env1, $env2)
{
  return array(function($cenv) { return _ats2phppre_intrange_patsfun_21($cenv[1], $cenv[2], $cenv[3]); }, $env0, $env1, $env2);
}

function
_ats2phppre_intrange_patsfun_23__closurerize($env0)
{
  return array(function($cenv, $arg0) { return _ats2phppre_intrange_patsfun_23($cenv[1], $arg0); }, $env0);
}

function
_ats2phppre_intrange_patsfun_26__closurerize($env0, $env1, $env2)
{
  return array(function($cenv, $arg0) { return _ats2phppre_intrange_patsfun_26($cenv[1], $cenv[2], $cenv[3], $arg0); }, $env0, $env1, $env2);
}

function
_ats2phppre_intrange_patsfun_28__closurerize($env0)
{
  return array(function($cenv, $arg0) { return _ats2phppre_intrange_patsfun_28($cenv[1], $arg0); }, $env0);
}

function
_ats2phppre_intrange_patsfun_35__closurerize($env0)
{
  return array(function($cenv, $arg0) { return _ats2phppre_intrange_patsfun_35($cenv[1], $arg0); }, $env0);
}

function
_ats2phppre_intrange_patsfun_39__closurerize($env0)
{
  return array(function($cenv, $arg0) { return _ats2phppre_intrange_patsfun_39($cenv[1], $arg0); }, $env0);
}

function
_ats2phppre_intrange_patsfun_43__closurerize($env0)
{
  return array(function($cenv, $arg0) { return _ats2phppre_intrange_patsfun_43($cenv[1], $arg0); }, $env0);
}

function
_ats2phppre_intrange_patsfun_47__closurerize($env0, $env1, $env2)
{
  return array(function($cenv, $arg0) { return _ats2phppre_intrange_patsfun_47($cenv[1], $cenv[2], $cenv[3], $arg0); }, $env0, $env1, $env2);
}


function
ats2phppre_int_repeat_lazy($arg0, $arg1)
{
//
  $tmp1 = NULL;
//
  __patsflab_int_repeat_lazy:
  $tmp1 = ats2phppre_lazy2cloref($arg1);
  ats2phppre_int_repeat_cloref($arg0, $tmp1);
  return/*_void*/;
} // end-of-function


function
ats2phppre_int_repeat_cloref($arg0, $arg1)
{
//
//
  __patsflab_int_repeat_cloref:
  _ats2phppre_intrange_loop_2($arg0, $arg1);
  return/*_void*/;
} // end-of-function


function
_ats2phppre_intrange_loop_2($arg0, $arg1)
{
//
  $apy0 = NULL;
  $apy1 = NULL;
  $tmp4 = NULL;
  $tmp6 = NULL;
//
  __patsflab__ats2phppre_intrange_loop_2:
  $tmp4 = ats2phppre_gt_int0_int0($arg0, 0);
  if($tmp4) {
    $arg1[0]($arg1);
    $tmp6 = ats2phppre_sub_int0_int0($arg0, 1);
    // ATStailcalseq_beg
    $apy0 = $tmp6;
    $apy1 = $arg1;
    $arg0 = $apy0;
    $arg1 = $apy1;
    goto __patsflab__ats2phppre_intrange_loop_2;
    // ATStailcalseq_end
  } else {
    // ATSINSmove_void;
  } // endif
  return/*_void*/;
} // end-of-function


function
ats2phppre_int_exists_cloref($arg0, $arg1)
{
//
  $tmpret7 = NULL;
//
  __patsflab_int_exists_cloref:
  $tmpret7 = ats2phppre_intrange_exists_cloref(0, $arg0, $arg1);
  return $tmpret7;
} // end-of-function


function
ats2phppre_int_forall_cloref($arg0, $arg1)
{
//
  $tmpret8 = NULL;
//
  __patsflab_int_forall_cloref:
  $tmpret8 = ats2phppre_intrange_forall_cloref(0, $arg0, $arg1);
  return $tmpret8;
} // end-of-function


function
ats2phppre_int_foreach_cloref($arg0, $arg1)
{
//
//
  __patsflab_int_foreach_cloref:
  ats2phppre_intrange_foreach_cloref(0, $arg0, $arg1);
  return/*_void*/;
} // end-of-function


function
ats2phppre_int_exists_method($arg0)
{
//
  $tmpret10 = NULL;
//
  __patsflab_int_exists_method:
  $tmpret10 = _ats2phppre_intrange_patsfun_7__closurerize($arg0);
  return $tmpret10;
} // end-of-function


function
_ats2phppre_intrange_patsfun_7($env0, $arg0)
{
//
  $tmpret11 = NULL;
//
  __patsflab__ats2phppre_intrange_patsfun_7:
  $tmpret11 = ats2phppre_int_exists_cloref($env0, $arg0);
  return $tmpret11;
} // end-of-function


function
ats2phppre_int_forall_method($arg0)
{
//
  $tmpret12 = NULL;
//
  __patsflab_int_forall_method:
  $tmpret12 = _ats2phppre_intrange_patsfun_9__closurerize($arg0);
  return $tmpret12;
} // end-of-function


function
_ats2phppre_intrange_patsfun_9($env0, $arg0)
{
//
  $tmpret13 = NULL;
//
  __patsflab__ats2phppre_intrange_patsfun_9:
  $tmpret13 = ats2phppre_int_forall_cloref($env0, $arg0);
  return $tmpret13;
} // end-of-function


function
ats2phppre_int_foreach_method($arg0)
{
//
  $tmpret14 = NULL;
//
  __patsflab_int_foreach_method:
  $tmpret14 = _ats2phppre_intrange_patsfun_11__closurerize($arg0);
  return $tmpret14;
} // end-of-function


function
_ats2phppre_intrange_patsfun_11($env0, $arg0)
{
//
//
  __patsflab__ats2phppre_intrange_patsfun_11:
  ats2phppre_int_foreach_cloref($env0, $arg0);
  return/*_void*/;
} // end-of-function


function
ats2phppre_int_foldleft_cloref($arg0, $arg1, $arg2)
{
//
  $tmpret16 = NULL;
//
  __patsflab_int_foldleft_cloref:
  $tmpret16 = ats2phppre_intrange_foldleft_cloref(0, $arg0, $arg1, $arg2);
  return $tmpret16;
} // end-of-function


function
ats2phppre_int_foldleft_method($arg0, $arg1)
{
//
  $tmpret17 = NULL;
//
  __patsflab_int_foldleft_method:
  $tmpret17 = _ats2phppre_intrange_patsfun_14__closurerize($arg0, $arg1);
  return $tmpret17;
} // end-of-function


function
_ats2phppre_intrange_patsfun_14($env0, $env1, $arg0)
{
//
  $tmpret18 = NULL;
//
  __patsflab__ats2phppre_intrange_patsfun_14:
  $tmpret18 = ats2phppre_int_foldleft_cloref($env0, $env1, $arg0);
  return $tmpret18;
} // end-of-function


function
ats2phppre_int_list_map_cloref($arg0, $arg1)
{
//
  $tmpret19 = NULL;
//
  __patsflab_int_list_map_cloref:
  $tmpret19 = _ats2phppre_intrange_aux_16($arg0, $arg1, 0);
  return $tmpret19;
} // end-of-function


function
_ats2phppre_intrange_aux_16($env0, $env1, $arg0)
{
//
  $tmpret20 = NULL;
  $tmp21 = NULL;
  $tmp22 = NULL;
  $tmp23 = NULL;
  $tmp24 = NULL;
//
  __patsflab__ats2phppre_intrange_aux_16:
  $tmp21 = ats2phppre_lt_int1_int1($arg0, $env0);
  if($tmp21) {
    $tmp22 = $env1[0]($env1, $arg0);
    $tmp24 = ats2phppre_add_int1_int1($arg0, 1);
    $tmp23 = _ats2phppre_intrange_aux_16($env0, $env1, $tmp24);
    $tmpret20 = array($tmp22, $tmp23);
  } else {
    $tmpret20 = NULL;
  } // endif
  return $tmpret20;
} // end-of-function


function
ats2phppre_int_list_map_method($arg0, $arg1)
{
//
  $tmpret25 = NULL;
//
  __patsflab_int_list_map_method:
  $tmpret25 = _ats2phppre_intrange_patsfun_18__closurerize($arg0);
  return $tmpret25;
} // end-of-function


function
_ats2phppre_intrange_patsfun_18($env0, $arg0)
{
//
  $tmpret26 = NULL;
//
  __patsflab__ats2phppre_intrange_patsfun_18:
  $tmpret26 = ats2phppre_int_list_map_cloref($env0, $arg0);
  return $tmpret26;
} // end-of-function


function
ats2phppre_int_stream_map_cloref($arg0, $arg1)
{
//
  $tmpret27 = NULL;
//
  __patsflab_int_stream_map_cloref:
  $tmpret27 = _ats2phppre_intrange_aux_20($arg0, $arg1, 0);
  return $tmpret27;
} // end-of-function


function
_ats2phppre_intrange_aux_20($env0, $env1, $arg0)
{
//
  $tmpret28 = NULL;
//
  __patsflab__ats2phppre_intrange_aux_20:
  $tmpret28 = ATSPMVlazyval(_ats2phppre_intrange_patsfun_21__closurerize($env0, $env1, $arg0));
  return $tmpret28;
} // end-of-function


function
_ats2phppre_intrange_patsfun_21($env0, $env1, $env2)
{
//
  $tmpret29 = NULL;
  $tmp30 = NULL;
  $tmp31 = NULL;
  $tmp32 = NULL;
  $tmp33 = NULL;
//
  __patsflab__ats2phppre_intrange_patsfun_21:
  $tmp30 = ats2phppre_lt_int1_int1($env2, $env0);
  if($tmp30) {
    $tmp31 = $env1[0]($env1, $env2);
    $tmp33 = ats2phppre_add_int1_int1($env2, 1);
    $tmp32 = _ats2phppre_intrange_aux_20($env0, $env1, $tmp33);
    $tmpret29 = array($tmp31, $tmp32);
  } else {
    $tmpret29 = NULL;
  } // endif
  return $tmpret29;
} // end-of-function


function
ats2phppre_int_stream_map_method($arg0, $arg1)
{
//
  $tmpret34 = NULL;
//
  __patsflab_int_stream_map_method:
  $tmpret34 = _ats2phppre_intrange_patsfun_23__closurerize($arg0);
  return $tmpret34;
} // end-of-function


function
_ats2phppre_intrange_patsfun_23($env0, $arg0)
{
//
  $tmpret35 = NULL;
//
  __patsflab__ats2phppre_intrange_patsfun_23:
  $tmpret35 = ats2phppre_int_stream_map_cloref($env0, $arg0);
  return $tmpret35;
} // end-of-function


function
ats2phppre_int_stream_vt_map_cloref($arg0, $arg1)
{
//
  $tmpret36 = NULL;
//
  __patsflab_int_stream_vt_map_cloref:
  $tmpret36 = _ats2phppre_intrange_aux_25($arg0, $arg1, 0);
  return $tmpret36;
} // end-of-function


function
_ats2phppre_intrange_aux_25($env0, $env1, $arg0)
{
//
  $tmpret37 = NULL;
//
  __patsflab__ats2phppre_intrange_aux_25:
  $tmpret37 = ATSPMVllazyval(_ats2phppre_intrange_patsfun_26__closurerize($env0, $env1, $arg0));
  return $tmpret37;
} // end-of-function


function
_ats2phppre_intrange_patsfun_26($env0, $env1, $env2, $arg0)
{
//
  $tmpret38 = NULL;
  $tmp39 = NULL;
  $tmp40 = NULL;
  $tmp41 = NULL;
  $tmp42 = NULL;
//
  __patsflab__ats2phppre_intrange_patsfun_26:
  if($arg0) {
    $tmp39 = ats2phppre_lt_int1_int1($env2, $env0);
    if($tmp39) {
      $tmp40 = $env1[0]($env1, $env2);
      $tmp42 = ats2phppre_add_int1_int1($env2, 1);
      $tmp41 = _ats2phppre_intrange_aux_25($env0, $env1, $tmp42);
      $tmpret38 = array($tmp40, $tmp41);
    } else {
      $tmpret38 = NULL;
    } // endif
  } else {
  } // endif
  return $tmpret38;
} // end-of-function


function
ats2phppre_int_stream_vt_map_method($arg0, $arg1)
{
//
  $tmpret43 = NULL;
//
  __patsflab_int_stream_vt_map_method:
  $tmpret43 = _ats2phppre_intrange_patsfun_28__closurerize($arg0);
  return $tmpret43;
} // end-of-function


function
_ats2phppre_intrange_patsfun_28($env0, $arg0)
{
//
  $tmpret44 = NULL;
//
  __patsflab__ats2phppre_intrange_patsfun_28:
  $tmpret44 = ats2phppre_int_stream_vt_map_cloref($env0, $arg0);
  return $tmpret44;
} // end-of-function


function
ats2phppre_int2_exists_cloref($arg0, $arg1, $arg2)
{
//
  $tmpret45 = NULL;
//
  __patsflab_int2_exists_cloref:
  $tmpret45 = ats2phppre_intrange2_exists_cloref(0, $arg0, 0, $arg1, $arg2);
  return $tmpret45;
} // end-of-function


function
ats2phppre_int2_forall_cloref($arg0, $arg1, $arg2)
{
//
  $tmpret46 = NULL;
//
  __patsflab_int2_forall_cloref:
  $tmpret46 = ats2phppre_intrange2_forall_cloref(0, $arg0, 0, $arg1, $arg2);
  return $tmpret46;
} // end-of-function


function
ats2phppre_int2_foreach_cloref($arg0, $arg1, $arg2)
{
//
//
  __patsflab_int2_foreach_cloref:
  ats2phppre_intrange2_foreach_cloref(0, $arg0, 0, $arg1, $arg2);
  return/*_void*/;
} // end-of-function


function
ats2phppre_intrange_exists_cloref($arg0, $arg1, $arg2)
{
//
  $tmpret48 = NULL;
//
  __patsflab_intrange_exists_cloref:
  $tmpret48 = _ats2phppre_intrange_loop_33($arg0, $arg1, $arg2);
  return $tmpret48;
} // end-of-function


function
_ats2phppre_intrange_loop_33($arg0, $arg1, $arg2)
{
//
  $apy0 = NULL;
  $apy1 = NULL;
  $apy2 = NULL;
  $tmpret49 = NULL;
  $tmp50 = NULL;
  $tmp51 = NULL;
  $tmp52 = NULL;
//
  __patsflab__ats2phppre_intrange_loop_33:
  $tmp50 = ats2phppre_lt_int0_int0($arg0, $arg1);
  if($tmp50) {
    $tmp51 = $arg2[0]($arg2, $arg0);
    if($tmp51) {
      $tmpret49 = true;
    } else {
      $tmp52 = ats2phppre_add_int0_int0($arg0, 1);
      // ATStailcalseq_beg
      $apy0 = $tmp52;
      $apy1 = $arg1;
      $apy2 = $arg2;
      $arg0 = $apy0;
      $arg1 = $apy1;
      $arg2 = $apy2;
      goto __patsflab__ats2phppre_intrange_loop_33;
      // ATStailcalseq_end
    } // endif
  } else {
    $tmpret49 = false;
  } // endif
  return $tmpret49;
} // end-of-function


function
ats2phppre_intrange_exists_method($arg0)
{
//
  $tmpret53 = NULL;
//
  __patsflab_intrange_exists_method:
  $tmpret53 = _ats2phppre_intrange_patsfun_35__closurerize($arg0);
  return $tmpret53;
} // end-of-function


function
_ats2phppre_intrange_patsfun_35($env0, $arg0)
{
//
  $tmpret54 = NULL;
//
  __patsflab__ats2phppre_intrange_patsfun_35:
  $tmpret54 = ats2phppre_intrange_exists_cloref($env0[0], $env0[1], $arg0);
  return $tmpret54;
} // end-of-function


function
ats2phppre_intrange_forall_cloref($arg0, $arg1, $arg2)
{
//
  $tmpret55 = NULL;
//
  __patsflab_intrange_forall_cloref:
  $tmpret55 = _ats2phppre_intrange_loop_37($arg0, $arg1, $arg2);
  return $tmpret55;
} // end-of-function


function
_ats2phppre_intrange_loop_37($arg0, $arg1, $arg2)
{
//
  $apy0 = NULL;
  $apy1 = NULL;
  $apy2 = NULL;
  $tmpret56 = NULL;
  $tmp57 = NULL;
  $tmp58 = NULL;
  $tmp59 = NULL;
//
  __patsflab__ats2phppre_intrange_loop_37:
  $tmp57 = ats2phppre_lt_int0_int0($arg0, $arg1);
  if($tmp57) {
    $tmp58 = $arg2[0]($arg2, $arg0);
    if($tmp58) {
      $tmp59 = ats2phppre_add_int0_int0($arg0, 1);
      // ATStailcalseq_beg
      $apy0 = $tmp59;
      $apy1 = $arg1;
      $apy2 = $arg2;
      $arg0 = $apy0;
      $arg1 = $apy1;
      $arg2 = $apy2;
      goto __patsflab__ats2phppre_intrange_loop_37;
      // ATStailcalseq_end
    } else {
      $tmpret56 = false;
    } // endif
  } else {
    $tmpret56 = true;
  } // endif
  return $tmpret56;
} // end-of-function


function
ats2phppre_intrange_forall_method($arg0)
{
//
  $tmpret60 = NULL;
//
  __patsflab_intrange_forall_method:
  $tmpret60 = _ats2phppre_intrange_patsfun_39__closurerize($arg0);
  return $tmpret60;
} // end-of-function


function
_ats2phppre_intrange_patsfun_39($env0, $arg0)
{
//
  $tmpret61 = NULL;
//
  __patsflab__ats2phppre_intrange_patsfun_39:
  $tmpret61 = ats2phppre_intrange_forall_cloref($env0[0], $env0[1], $arg0);
  return $tmpret61;
} // end-of-function


function
ats2phppre_intrange_foreach_cloref($arg0, $arg1, $arg2)
{
//
//
  __patsflab_intrange_foreach_cloref:
  _ats2phppre_intrange_loop_41($arg0, $arg1, $arg2);
  return/*_void*/;
} // end-of-function


function
_ats2phppre_intrange_loop_41($arg0, $arg1, $arg2)
{
//
  $apy0 = NULL;
  $apy1 = NULL;
  $apy2 = NULL;
  $tmp64 = NULL;
  $tmp66 = NULL;
//
  __patsflab__ats2phppre_intrange_loop_41:
  $tmp64 = ats2phppre_lt_int0_int0($arg0, $arg1);
  if($tmp64) {
    $arg2[0]($arg2, $arg0);
    $tmp66 = ats2phppre_add_int0_int0($arg0, 1);
    // ATStailcalseq_beg
    $apy0 = $tmp66;
    $apy1 = $arg1;
    $apy2 = $arg2;
    $arg0 = $apy0;
    $arg1 = $apy1;
    $arg2 = $apy2;
    goto __patsflab__ats2phppre_intrange_loop_41;
    // ATStailcalseq_end
  } else {
    // ATSINSmove_void;
  } // endif
  return/*_void*/;
} // end-of-function


function
ats2phppre_intrange_foreach_method($arg0)
{
//
  $tmpret67 = NULL;
//
  __patsflab_intrange_foreach_method:
  $tmpret67 = _ats2phppre_intrange_patsfun_43__closurerize($arg0);
  return $tmpret67;
} // end-of-function


function
_ats2phppre_intrange_patsfun_43($env0, $arg0)
{
//
//
  __patsflab__ats2phppre_intrange_patsfun_43:
  ats2phppre_intrange_foreach_cloref($env0[0], $env0[1], $arg0);
  return/*_void*/;
} // end-of-function


function
ats2phppre_intrange_foldleft_cloref($arg0, $arg1, $arg2, $arg3)
{
//
  $tmpret69 = NULL;
//
  __patsflab_intrange_foldleft_cloref:
  $tmpret69 = _ats2phppre_intrange_loop_45($arg3, $arg0, $arg1, $arg2, $arg3);
  return $tmpret69;
} // end-of-function


function
_ats2phppre_intrange_loop_45($env0, $arg0, $arg1, $arg2, $arg3)
{
//
  $apy0 = NULL;
  $apy1 = NULL;
  $apy2 = NULL;
  $apy3 = NULL;
  $tmpret70 = NULL;
  $tmp71 = NULL;
  $tmp72 = NULL;
  $tmp73 = NULL;
//
  __patsflab__ats2phppre_intrange_loop_45:
  $tmp71 = ats2phppre_lt_int0_int0($arg0, $arg1);
  if($tmp71) {
    $tmp72 = ats2phppre_add_int0_int0($arg0, 1);
    $tmp73 = $arg3[0]($arg3, $arg2, $arg0);
    // ATStailcalseq_beg
    $apy0 = $tmp72;
    $apy1 = $arg1;
    $apy2 = $tmp73;
    $apy3 = $env0;
    $arg0 = $apy0;
    $arg1 = $apy1;
    $arg2 = $apy2;
    $arg3 = $apy3;
    goto __patsflab__ats2phppre_intrange_loop_45;
    // ATStailcalseq_end
  } else {
    $tmpret70 = $arg2;
  } // endif
  return $tmpret70;
} // end-of-function


function
ats2phppre_intrange_foldleft_method($arg0, $arg1)
{
//
  $tmp74 = NULL;
  $tmp75 = NULL;
  $tmpret76 = NULL;
//
  __patsflab_intrange_foldleft_method:
  $tmp74 = $arg0[0];
  $tmp75 = $arg0[1];
  $tmpret76 = _ats2phppre_intrange_patsfun_47__closurerize($tmp74, $tmp75, $arg1);
  return $tmpret76;
} // end-of-function


function
_ats2phppre_intrange_patsfun_47($env0, $env1, $env2, $arg0)
{
//
  $tmpret77 = NULL;
//
  __patsflab__ats2phppre_intrange_patsfun_47:
  $tmpret77 = ats2phppre_intrange_foldleft_cloref($env0, $env1, $env2, $arg0);
  return $tmpret77;
} // end-of-function


function
ats2phppre_intrange2_exists_cloref($arg0, $arg1, $arg2, $arg3, $arg4)
{
//
  $tmpret78 = NULL;
//
  __patsflab_intrange2_exists_cloref:
  $tmpret78 = _ats2phppre_intrange_loop1_49($arg2, $arg3, $arg4, $arg0, $arg1, $arg2, $arg3, $arg4);
  return $tmpret78;
} // end-of-function


function
_ats2phppre_intrange_loop1_49($env0, $env1, $env2, $arg0, $arg1, $arg2, $arg3, $arg4)
{
//
  $apy0 = NULL;
  $apy1 = NULL;
  $apy2 = NULL;
  $apy3 = NULL;
  $apy4 = NULL;
  $tmpret79 = NULL;
  $tmp80 = NULL;
  $a2rg0 = NULL;
  $a2rg1 = NULL;
  $a2rg2 = NULL;
  $a2rg3 = NULL;
  $a2rg4 = NULL;
  $a2py0 = NULL;
  $a2py1 = NULL;
  $a2py2 = NULL;
  $a2py3 = NULL;
  $a2py4 = NULL;
  $tmpret81 = NULL;
  $tmp82 = NULL;
  $tmp83 = NULL;
  $tmp84 = NULL;
  $tmp85 = NULL;
//
  __patsflab__ats2phppre_intrange_loop1_49:
  $tmp80 = ats2phppre_lt_int0_int0($arg0, $arg1);
  if($tmp80) {
    // ATStailcalseq_beg
    $a2py0 = $arg0;
    $a2py1 = $arg1;
    $a2py2 = $arg2;
    $a2py3 = $arg3;
    $a2py4 = $env2;
    $a2rg0 = $a2py0;
    $a2rg1 = $a2py1;
    $a2rg2 = $a2py2;
    $a2rg3 = $a2py3;
    $a2rg4 = $a2py4;
    goto __patsflab__ats2phppre_intrange_loop2_50;
    // ATStailcalseq_end
  } else {
    $tmpret79 = false;
  } // endif
  return $tmpret79;
//
  __patsflab__ats2phppre_intrange_loop2_50:
  $tmp82 = ats2phppre_lt_int0_int0($a2rg2, $a2rg3);
  if($tmp82) {
    $tmp83 = $a2rg4[0]($a2rg4, $a2rg0, $a2rg2);
    if($tmp83) {
      $tmpret81 = true;
    } else {
      $tmp84 = ats2phppre_add_int0_int0($a2rg2, 1);
      // ATStailcalseq_beg
      $a2py0 = $a2rg0;
      $a2py1 = $a2rg1;
      $a2py2 = $tmp84;
      $a2py3 = $a2rg3;
      $a2py4 = $a2rg4;
      $a2rg0 = $a2py0;
      $a2rg1 = $a2py1;
      $a2rg2 = $a2py2;
      $a2rg3 = $a2py3;
      $a2rg4 = $a2py4;
      goto __patsflab__ats2phppre_intrange_loop2_50;
      // ATStailcalseq_end
    } // endif
  } else {
    $tmp85 = ats2phppre_add_int0_int0($a2rg0, 1);
    // ATStailcalseq_beg
    $apy0 = $tmp85;
    $apy1 = $a2rg1;
    $apy2 = $env0;
    $apy3 = $env1;
    $apy4 = $a2rg4;
    $arg0 = $apy0;
    $arg1 = $apy1;
    $arg2 = $apy2;
    $arg3 = $apy3;
    $arg4 = $apy4;
    goto __patsflab__ats2phppre_intrange_loop1_49;
    // ATStailcalseq_end
  } // endif
  return $tmpret81;
} // end-of-function


function
ats2phppre_intrange2_forall_cloref($arg0, $arg1, $arg2, $arg3, $arg4)
{
//
  $tmpret86 = NULL;
//
  __patsflab_intrange2_forall_cloref:
  $tmpret86 = _ats2phppre_intrange_loop1_52($arg2, $arg3, $arg0, $arg1, $arg2, $arg3, $arg4);
  return $tmpret86;
} // end-of-function


function
_ats2phppre_intrange_loop1_52($env0, $env1, $arg0, $arg1, $arg2, $arg3, $arg4)
{
//
  $apy0 = NULL;
  $apy1 = NULL;
  $apy2 = NULL;
  $apy3 = NULL;
  $apy4 = NULL;
  $tmpret87 = NULL;
  $tmp88 = NULL;
  $a2rg0 = NULL;
  $a2rg1 = NULL;
  $a2rg2 = NULL;
  $a2rg3 = NULL;
  $a2rg4 = NULL;
  $a2py0 = NULL;
  $a2py1 = NULL;
  $a2py2 = NULL;
  $a2py3 = NULL;
  $a2py4 = NULL;
  $tmpret89 = NULL;
  $tmp90 = NULL;
  $tmp91 = NULL;
  $tmp92 = NULL;
  $tmp93 = NULL;
//
  __patsflab__ats2phppre_intrange_loop1_52:
  $tmp88 = ats2phppre_lt_int0_int0($arg0, $arg1);
  if($tmp88) {
    // ATStailcalseq_beg
    $a2py0 = $arg0;
    $a2py1 = $arg1;
    $a2py2 = $arg2;
    $a2py3 = $arg3;
    $a2py4 = $arg4;
    $a2rg0 = $a2py0;
    $a2rg1 = $a2py1;
    $a2rg2 = $a2py2;
    $a2rg3 = $a2py3;
    $a2rg4 = $a2py4;
    goto __patsflab__ats2phppre_intrange_loop2_53;
    // ATStailcalseq_end
  } else {
    $tmpret87 = true;
  } // endif
  return $tmpret87;
//
  __patsflab__ats2phppre_intrange_loop2_53:
  $tmp90 = ats2phppre_lt_int0_int0($a2rg2, $a2rg3);
  if($tmp90) {
    $tmp91 = $a2rg4[0]($a2rg4, $a2rg0, $a2rg2);
    if($tmp91) {
      $tmp92 = ats2phppre_add_int0_int0($a2rg2, 1);
      // ATStailcalseq_beg
      $a2py0 = $a2rg0;
      $a2py1 = $a2rg1;
      $a2py2 = $tmp92;
      $a2py3 = $a2rg3;
      $a2py4 = $a2rg4;
      $a2rg0 = $a2py0;
      $a2rg1 = $a2py1;
      $a2rg2 = $a2py2;
      $a2rg3 = $a2py3;
      $a2rg4 = $a2py4;
      goto __patsflab__ats2phppre_intrange_loop2_53;
      // ATStailcalseq_end
    } else {
      $tmpret89 = false;
    } // endif
  } else {
    $tmp93 = ats2phppre_add_int0_int0($a2rg0, 1);
    // ATStailcalseq_beg
    $apy0 = $tmp93;
    $apy1 = $a2rg1;
    $apy2 = $env0;
    $apy3 = $env1;
    $apy4 = $a2rg4;
    $arg0 = $apy0;
    $arg1 = $apy1;
    $arg2 = $apy2;
    $arg3 = $apy3;
    $arg4 = $apy4;
    goto __patsflab__ats2phppre_intrange_loop1_52;
    // ATStailcalseq_end
  } // endif
  return $tmpret89;
} // end-of-function


function
ats2phppre_intrange2_foreach_cloref($arg0, $arg1, $arg2, $arg3, $arg4)
{
//
//
  __patsflab_intrange2_foreach_cloref:
  _ats2phppre_intrange_loop1_55($arg2, $arg3, $arg0, $arg1, $arg2, $arg3, $arg4);
  return/*_void*/;
} // end-of-function


function
_ats2phppre_intrange_loop1_55($env0, $env1, $arg0, $arg1, $arg2, $arg3, $arg4)
{
//
  $apy0 = NULL;
  $apy1 = NULL;
  $apy2 = NULL;
  $apy3 = NULL;
  $apy4 = NULL;
  $tmp96 = NULL;
  $a2rg0 = NULL;
  $a2rg1 = NULL;
  $a2rg2 = NULL;
  $a2rg3 = NULL;
  $a2rg4 = NULL;
  $a2py0 = NULL;
  $a2py1 = NULL;
  $a2py2 = NULL;
  $a2py3 = NULL;
  $a2py4 = NULL;
  $tmp98 = NULL;
  $tmp100 = NULL;
  $tmp101 = NULL;
//
  __patsflab__ats2phppre_intrange_loop1_55:
  $tmp96 = ats2phppre_lt_int0_int0($arg0, $arg1);
  if($tmp96) {
    // ATStailcalseq_beg
    $a2py0 = $arg0;
    $a2py1 = $arg1;
    $a2py2 = $arg2;
    $a2py3 = $arg3;
    $a2py4 = $arg4;
    $a2rg0 = $a2py0;
    $a2rg1 = $a2py1;
    $a2rg2 = $a2py2;
    $a2rg3 = $a2py3;
    $a2rg4 = $a2py4;
    goto __patsflab__ats2phppre_intrange_loop2_56;
    // ATStailcalseq_end
  } else {
    // ATSINSmove_void;
  } // endif
  return/*_void*/;
//
  __patsflab__ats2phppre_intrange_loop2_56:
  $tmp98 = ats2phppre_lt_int0_int0($a2rg2, $a2rg3);
  if($tmp98) {
    $a2rg4[0]($a2rg4, $a2rg0, $a2rg2);
    $tmp100 = ats2phppre_add_int0_int0($a2rg2, 1);
    // ATStailcalseq_beg
    $a2py0 = $a2rg0;
    $a2py1 = $a2rg1;
    $a2py2 = $tmp100;
    $a2py3 = $a2rg3;
    $a2py4 = $a2rg4;
    $a2rg0 = $a2py0;
    $a2rg1 = $a2py1;
    $a2rg2 = $a2py2;
    $a2rg3 = $a2py3;
    $a2rg4 = $a2py4;
    goto __patsflab__ats2phppre_intrange_loop2_56;
    // ATStailcalseq_end
  } else {
    $tmp101 = ats2phppre_succ_int0($a2rg0);
    // ATStailcalseq_beg
    $apy0 = $tmp101;
    $apy1 = $a2rg1;
    $apy2 = $env0;
    $apy3 = $env1;
    $apy4 = $a2rg4;
    $arg0 = $apy0;
    $arg1 = $apy1;
    $arg2 = $apy2;
    $arg3 = $apy3;
    $arg4 = $apy4;
    goto __patsflab__ats2phppre_intrange_loop1_55;
    // ATStailcalseq_end
  } // endif
  return/*_void*/;
} // end-of-function

/* ****** ****** */

/* end-of-compilation-unit */
?>
<?php
/*
**
** The PHP code is generated by atscc2php
** The starting compilation time is: 2016-10-8: 10h:20m
**
*/
function
_ats2phppre_arrayref_patsfun_8__closurerize($env0)
{
  return array(function($cenv, $arg0) { return _ats2phppre_arrayref_patsfun_8($cenv[1], $arg0); }, $env0);
}


function
ats2phppre_arrayref_exists_cloref($arg0, $arg1, $arg2)
{
//
  $tmpret0 = NULL;
//
  __patsflab_arrayref_exists_cloref:
  $tmpret0 = ats2phppre_int_exists_cloref($arg1, $arg2);
  return $tmpret0;
} // end-of-function


function
ats2phppre_arrayref_forall_cloref($arg0, $arg1, $arg2)
{
//
  $tmpret1 = NULL;
//
  __patsflab_arrayref_forall_cloref:
  $tmpret1 = ats2phppre_int_forall_cloref($arg1, $arg2);
  return $tmpret1;
} // end-of-function


function
ats2phppre_arrayref_foreach_cloref($arg0, $arg1, $arg2)
{
//
//
  __patsflab_arrayref_foreach_cloref:
  ats2phppre_int_foreach_cloref($arg1, $arg2);
  return/*_void*/;
} // end-of-function


function
ats2phppre_arrszref_make_elt($arg0, $arg1)
{
//
  $tmpret3 = NULL;
  $tmp4 = NULL;
//
  __patsflab_arrszref_make_elt:
  $tmp4 = ats2phppre_arrayref_make_elt($arg0, $arg1);
  $tmpret3 = ats2phppre_arrszref_make_arrayref($tmp4, $arg0);
  return $tmpret3;
} // end-of-function


function
ats2phppre_arrszref_exists_cloref($arg0, $arg1)
{
//
  $tmpret5 = NULL;
  $tmp6 = NULL;
//
  __patsflab_arrszref_exists_cloref:
  $tmp6 = ats2phppre_arrszref_size($arg0);
  $tmpret5 = ats2phppre_int_exists_cloref($tmp6, $arg1);
  return $tmpret5;
} // end-of-function


function
ats2phppre_arrszref_forall_cloref($arg0, $arg1)
{
//
  $tmpret7 = NULL;
  $tmp8 = NULL;
//
  __patsflab_arrszref_forall_cloref:
  $tmp8 = ats2phppre_arrszref_size($arg0);
  $tmpret7 = ats2phppre_int_forall_cloref($tmp8, $arg1);
  return $tmpret7;
} // end-of-function


function
ats2phppre_arrszref_foreach_cloref($arg0, $arg1)
{
//
  $tmp10 = NULL;
//
  __patsflab_arrszref_foreach_cloref:
  $tmp10 = ats2phppre_arrszref_size($arg0);
  ats2phppre_int_foreach_cloref($tmp10, $arg1);
  return/*_void*/;
} // end-of-function


function
ats2phppre_arrszref_foreach_method($arg0)
{
//
  $tmpret11 = NULL;
//
  __patsflab_arrszref_foreach_method:
  $tmpret11 = _ats2phppre_arrayref_patsfun_8__closurerize($arg0);
  return $tmpret11;
} // end-of-function


function
_ats2phppre_arrayref_patsfun_8($env0, $arg0)
{
//
//
  __patsflab__ats2phppre_arrayref_patsfun_8:
  ats2phppre_arrszref_foreach_cloref($env0, $arg0);
  return/*_void*/;
} // end-of-function


function
ats2phppre_arrayref_make_elt($arg0, $arg1)
{
//
  $tmpret13 = NULL;
  $tmp14 = NULL;
//
  __patsflab_arrayref_make_elt:
  $tmp14 = ats2phppre_PHParref_make_elt($arg0, $arg1);
  $tmpret13 = $tmp14;
  return $tmpret13;
} // end-of-function


function
ats2phppre_arrayref_get_at($arg0, $arg1)
{
//
  $tmpret15 = NULL;
//
  __patsflab_arrayref_get_at:
  $tmpret15 = ats2phppre_PHParref_get_at($arg0, $arg1);
  return $tmpret15;
} // end-of-function


function
ats2phppre_arrayref_set_at($arg0, $arg1, $arg2)
{
//
//
  __patsflab_arrayref_set_at:
  ats2phppre_PHParref_set_at($arg0, $arg1, $arg2);
  return/*_void*/;
} // end-of-function


function
ats2phppre_arrszref_make_arrayref($arg0, $arg1)
{
//
  $tmpret17 = NULL;
//
  __patsflab_arrszref_make_arrayref:
  $tmpret17 = $arg0;
  return $tmpret17;
} // end-of-function


function
ats2phppre_arrszref_size($arg0)
{
//
  $tmpret18 = NULL;
//
  __patsflab_arrszref_size:
  $tmpret18 = ats2phppre_PHParref_length($arg0);
  return $tmpret18;
} // end-of-function


function
ats2phppre_arrszref_get_at($arg0, $arg1)
{
//
  $tmpret19 = NULL;
//
  __patsflab_arrszref_get_at:
  $tmpret19 = ats2phppre_PHParref_get_at($arg0, $arg1);
  return $tmpret19;
} // end-of-function


function
ats2phppre_arrszref_set_at($arg0, $arg1, $arg2)
{
//
//
  __patsflab_arrszref_set_at:
  ats2phppre_PHParref_set_at($arg0, $arg1, $arg2);
  return/*_void*/;
} // end-of-function

/* ****** ****** */

/* end-of-compilation-unit */
?>
<?php
/*
**
** The PHP code is generated by atscc2php
** The starting compilation time is: 2016-10-8: 10h:20m
**
*/

function
ats2phppre_ref($arg0)
{
//
  $tmpret0 = NULL;
//
  __patsflab_ref:
  $tmpret0 = ats2phppre_ref_make_elt($arg0);
  return $tmpret0;
} // end-of-function


function
ats2phppre_ref_make_elt($arg0)
{
//
  $tmpret1 = NULL;
  $tmp2 = NULL;
//
  __patsflab_ref_make_elt:
  $tmp2 = PHPref_new($arg0);
  $tmpret1 = $tmp2;
  return $tmpret1;
} // end-of-function


function
ats2phppre_ref_get_elt($arg0)
{
//
  $tmpret3 = NULL;
//
  __patsflab_ref_get_elt:
  $tmpret3 = PHPref_get_elt($arg0);
  return $tmpret3;
} // end-of-function


function
ats2phppre_ref_set_elt($arg0, $arg1)
{
//
//
  __patsflab_ref_set_elt:
  PHPref_set_elt($arg0, $arg1);
  return/*_void*/;
} // end-of-function

/* ****** ****** */

/* end-of-compilation-unit */
?>
<?php
/*
**
** The PHP code is generated by atscc2php
** The starting compilation time is: 2016-10-8: 10h:20m
**
*/
function
_ats2phppre_ML_list0_patsfun_22__closurerize($env0)
{
  return array(function($cenv, $arg0) { return _ats2phppre_ML_list0_patsfun_22($cenv[1], $arg0); }, $env0);
}

function
_ats2phppre_ML_list0_patsfun_25__closurerize($env0)
{
  return array(function($cenv, $arg0) { return _ats2phppre_ML_list0_patsfun_25($cenv[1], $arg0); }, $env0);
}

function
_ats2phppre_ML_list0_patsfun_28__closurerize($env0)
{
  return array(function($cenv, $arg0) { return _ats2phppre_ML_list0_patsfun_28($cenv[1], $arg0); }, $env0);
}

function
_ats2phppre_ML_list0_patsfun_31__closurerize($env0)
{
  return array(function($cenv, $arg0) { return _ats2phppre_ML_list0_patsfun_31($cenv[1], $arg0); }, $env0);
}

function
_ats2phppre_ML_list0_patsfun_35__closurerize($env0)
{
  return array(function($cenv, $arg0) { return _ats2phppre_ML_list0_patsfun_35($cenv[1], $arg0); }, $env0);
}

function
_ats2phppre_ML_list0_patsfun_38__closurerize($env0)
{
  return array(function($cenv, $arg0) { return _ats2phppre_ML_list0_patsfun_38($cenv[1], $arg0); }, $env0);
}

function
_ats2phppre_ML_list0_patsfun_41__closurerize($env0)
{
  return array(function($cenv, $arg0) { return _ats2phppre_ML_list0_patsfun_41($cenv[1], $arg0); }, $env0);
}

function
_ats2phppre_ML_list0_patsfun_44__closurerize($env0)
{
  return array(function($cenv, $arg0) { return _ats2phppre_ML_list0_patsfun_44($cenv[1], $arg0); }, $env0);
}

function
_ats2phppre_ML_list0_patsfun_47__closurerize($env0)
{
  return array(function($cenv, $arg0) { return _ats2phppre_ML_list0_patsfun_47($cenv[1], $arg0); }, $env0);
}


function
ats2phppre_ML_list0_head_opt($arg0)
{
//
  $tmpret2 = NULL;
  $tmp3 = NULL;
//
  __patsflab_list0_head_opt:
  // ATScaseofseq_beg
  do {
    // ATSbranchseq_beg
    __atstmplab6:
    if(ATSCKptriscons($arg0)) goto __atstmplab9;
    __atstmplab7:
    $tmpret2 = NULL;
    break;
    // ATSbranchseq_end
    // ATSbranchseq_beg
    __atstmplab8:
    __atstmplab9:
    $tmp3 = $arg0[0];
    $tmpret2 = array($tmp3);
    break;
    // ATSbranchseq_end
  } while(0);
  // ATScaseofseq_end
  return $tmpret2;
} // end-of-function


function
ats2phppre_ML_list0_tail_opt($arg0)
{
//
  $tmpret5 = NULL;
  $tmp7 = NULL;
//
  __patsflab_list0_tail_opt:
  // ATScaseofseq_beg
  do {
    // ATSbranchseq_beg
    __atstmplab10:
    if(ATSCKptriscons($arg0)) goto __atstmplab13;
    __atstmplab11:
    $tmpret5 = NULL;
    break;
    // ATSbranchseq_end
    // ATSbranchseq_beg
    __atstmplab12:
    __atstmplab13:
    $tmp7 = $arg0[1];
    $tmpret5 = array($tmp7);
    break;
    // ATSbranchseq_end
  } while(0);
  // ATScaseofseq_end
  return $tmpret5;
} // end-of-function


function
ats2phppre_ML_list0_length($arg0)
{
//
  $tmpret8 = NULL;
//
  __patsflab_list0_length:
  $tmpret8 = ats2phppre_list_length($arg0);
  return $tmpret8;
} // end-of-function


function
ats2phppre_ML_list0_last_opt($arg0)
{
//
  $tmpret9 = NULL;
  $tmp13 = NULL;
  $tmp14 = NULL;
  $tmp15 = NULL;
//
  __patsflab_list0_last_opt:
  // ATScaseofseq_beg
  do {
    // ATSbranchseq_beg
    __atstmplab18:
    if(ATSCKptriscons($arg0)) goto __atstmplab21;
    __atstmplab19:
    $tmpret9 = NULL;
    break;
    // ATSbranchseq_end
    // ATSbranchseq_beg
    __atstmplab20:
    __atstmplab21:
    $tmp13 = $arg0[0];
    $tmp14 = $arg0[1];
    $tmp15 = _ats2phppre_ML_list0_loop_6($tmp13, $tmp14);
    $tmpret9 = array($tmp15);
    break;
    // ATSbranchseq_end
  } while(0);
  // ATScaseofseq_end
  return $tmpret9;
} // end-of-function


function
_ats2phppre_ML_list0_loop_6($arg0, $arg1)
{
//
  $apy0 = NULL;
  $apy1 = NULL;
  $tmpret10 = NULL;
  $tmp11 = NULL;
  $tmp12 = NULL;
//
  __patsflab__ats2phppre_ML_list0_loop_6:
  // ATScaseofseq_beg
  do {
    // ATSbranchseq_beg
    __atstmplab14:
    if(ATSCKptriscons($arg1)) goto __atstmplab17;
    __atstmplab15:
    $tmpret10 = $arg0;
    break;
    // ATSbranchseq_end
    // ATSbranchseq_beg
    __atstmplab16:
    __atstmplab17:
    $tmp11 = $arg1[0];
    $tmp12 = $arg1[1];
    // ATStailcalseq_beg
    $apy0 = $tmp11;
    $apy1 = $tmp12;
    $arg0 = $apy0;
    $arg1 = $apy1;
    goto __patsflab__ats2phppre_ML_list0_loop_6;
    // ATStailcalseq_end
    break;
    // ATSbranchseq_end
  } while(0);
  // ATScaseofseq_end
  return $tmpret10;
} // end-of-function


function
ats2phppre_ML_list0_get_at_opt($arg0, $arg1)
{
//
  $apy0 = NULL;
  $apy1 = NULL;
  $tmpret16 = NULL;
  $tmp17 = NULL;
  $tmp18 = NULL;
  $tmp19 = NULL;
  $tmp20 = NULL;
//
  __patsflab_list0_get_at_opt:
  // ATScaseofseq_beg
  do {
    // ATSbranchseq_beg
    __atstmplab22:
    if(ATSCKptriscons($arg0)) goto __atstmplab25;
    __atstmplab23:
    $tmpret16 = NULL;
    break;
    // ATSbranchseq_end
    // ATSbranchseq_beg
    __atstmplab24:
    __atstmplab25:
    $tmp17 = $arg0[0];
    $tmp18 = $arg0[1];
    $tmp19 = ats2phppre_gt_int1_int1($arg1, 0);
    if($tmp19) {
      $tmp20 = ats2phppre_sub_int1_int1($arg1, 1);
      // ATStailcalseq_beg
      $apy0 = $tmp18;
      $apy1 = $tmp20;
      $arg0 = $apy0;
      $arg1 = $apy1;
      goto __patsflab_list0_get_at_opt;
      // ATStailcalseq_end
    } else {
      $tmpret16 = array($tmp17);
    } // endif
    break;
    // ATSbranchseq_end
  } while(0);
  // ATScaseofseq_end
  return $tmpret16;
} // end-of-function


function
ats2phppre_ML_list0_make_intrange_2($arg0, $arg1)
{
//
  $tmpret21 = NULL;
  $tmp22 = NULL;
//
  __patsflab_list0_make_intrange_2:
  $tmp22 = ats2phppre_list_make_intrange_2($arg0, $arg1);
  $tmpret21 = $tmp22;
  return $tmpret21;
} // end-of-function


function
ats2phppre_ML_list0_make_intrange_3($arg0, $arg1, $arg2)
{
//
  $tmpret23 = NULL;
  $tmp24 = NULL;
//
  __patsflab_list0_make_intrange_3:
  $tmp24 = ats2phppre_list_make_intrange_3($arg0, $arg1, $arg2);
  $tmpret23 = $tmp24;
  return $tmpret23;
} // end-of-function


function
ats2phppre_ML_list0_snoc($arg0, $arg1)
{
//
  $tmpret36 = NULL;
  $tmp37 = NULL;
//
  __patsflab_list0_snoc:
  $tmp37 = ats2phppre_list_snoc($arg0, $arg1);
  $tmpret36 = $tmp37;
  return $tmpret36;
} // end-of-function


function
ats2phppre_ML_list0_extend($arg0, $arg1)
{
//
  $tmpret38 = NULL;
  $tmp39 = NULL;
//
  __patsflab_list0_extend:
  $tmp39 = ats2phppre_list_extend($arg0, $arg1);
  $tmpret38 = $tmp39;
  return $tmpret38;
} // end-of-function


function
ats2phppre_ML_list0_append($arg0, $arg1)
{
//
  $tmpret40 = NULL;
  $tmp41 = NULL;
//
  __patsflab_list0_append:
  $tmp41 = ats2phppre_list_append($arg0, $arg1);
  $tmpret40 = $tmp41;
  return $tmpret40;
} // end-of-function


function
ats2phppre_ML_list0_reverse($arg0)
{
//
  $tmpret42 = NULL;
  $tmp43 = NULL;
//
  __patsflab_list0_reverse:
  $tmp43 = ats2phppre_list_reverse($arg0);
  $tmpret42 = $tmp43;
  return $tmpret42;
} // end-of-function


function
ats2phppre_ML_list0_reverse_append($arg0, $arg1)
{
//
  $tmpret44 = NULL;
  $tmp45 = NULL;
//
  __patsflab_list0_reverse_append:
  $tmp45 = ats2phppre_list_reverse_append($arg0, $arg1);
  $tmpret44 = $tmp45;
  return $tmpret44;
} // end-of-function


function
ats2phppre_ML_list0_exists($arg0, $arg1)
{
//
  $tmpret46 = NULL;
//
  __patsflab_list0_exists:
  $tmpret46 = ats2phppre_list_exists($arg0, $arg1);
  return $tmpret46;
} // end-of-function


function
ats2phppre_ML_list0_exists_method($arg0)
{
//
  $tmpret47 = NULL;
//
  __patsflab_list0_exists_method:
  $tmpret47 = _ats2phppre_ML_list0_patsfun_22__closurerize($arg0);
  return $tmpret47;
} // end-of-function


function
_ats2phppre_ML_list0_patsfun_22($env0, $arg0)
{
//
  $tmpret48 = NULL;
//
  __patsflab__ats2phppre_ML_list0_patsfun_22:
  $tmpret48 = ats2phppre_ML_list0_exists($env0, $arg0);
  return $tmpret48;
} // end-of-function


function
ats2phppre_ML_list0_iexists($arg0, $arg1)
{
//
  $tmpret49 = NULL;
//
  __patsflab_list0_iexists:
  $tmpret49 = ats2phppre_list_iexists($arg0, $arg1);
  return $tmpret49;
} // end-of-function


function
ats2phppre_ML_list0_iexists_method($arg0)
{
//
  $tmpret50 = NULL;
//
  __patsflab_list0_iexists_method:
  $tmpret50 = _ats2phppre_ML_list0_patsfun_25__closurerize($arg0);
  return $tmpret50;
} // end-of-function


function
_ats2phppre_ML_list0_patsfun_25($env0, $arg0)
{
//
  $tmpret51 = NULL;
//
  __patsflab__ats2phppre_ML_list0_patsfun_25:
  $tmpret51 = ats2phppre_ML_list0_iexists($env0, $arg0);
  return $tmpret51;
} // end-of-function


function
ats2phppre_ML_list0_forall($arg0, $arg1)
{
//
  $tmpret52 = NULL;
//
  __patsflab_list0_forall:
  $tmpret52 = ats2phppre_list_forall($arg0, $arg1);
  return $tmpret52;
} // end-of-function


function
ats2phppre_ML_list0_forall_method($arg0)
{
//
  $tmpret53 = NULL;
//
  __patsflab_list0_forall_method:
  $tmpret53 = _ats2phppre_ML_list0_patsfun_28__closurerize($arg0);
  return $tmpret53;
} // end-of-function


function
_ats2phppre_ML_list0_patsfun_28($env0, $arg0)
{
//
  $tmpret54 = NULL;
//
  __patsflab__ats2phppre_ML_list0_patsfun_28:
  $tmpret54 = ats2phppre_ML_list0_forall($env0, $arg0);
  return $tmpret54;
} // end-of-function


function
ats2phppre_ML_list0_iforall($arg0, $arg1)
{
//
  $tmpret55 = NULL;
//
  __patsflab_list0_iforall:
  $tmpret55 = ats2phppre_list_iforall($arg0, $arg1);
  return $tmpret55;
} // end-of-function


function
ats2phppre_ML_list0_iforall_method($arg0)
{
//
  $tmpret56 = NULL;
//
  __patsflab_list0_iforall_method:
  $tmpret56 = _ats2phppre_ML_list0_patsfun_31__closurerize($arg0);
  return $tmpret56;
} // end-of-function


function
_ats2phppre_ML_list0_patsfun_31($env0, $arg0)
{
//
  $tmpret57 = NULL;
//
  __patsflab__ats2phppre_ML_list0_patsfun_31:
  $tmpret57 = ats2phppre_ML_list0_iforall($env0, $arg0);
  return $tmpret57;
} // end-of-function


function
ats2phppre_ML_list0_app($arg0, $arg1)
{
//
//
  __patsflab_list0_app:
  ats2phppre_ML_list0_foreach($arg0, $arg1);
  return/*_void*/;
} // end-of-function


function
ats2phppre_ML_list0_foreach($arg0, $arg1)
{
//
//
  __patsflab_list0_foreach:
  ats2phppre_list_foreach($arg0, $arg1);
  return/*_void*/;
} // end-of-function


function
ats2phppre_ML_list0_foreach_method($arg0)
{
//
  $tmpret60 = NULL;
//
  __patsflab_list0_foreach_method:
  $tmpret60 = _ats2phppre_ML_list0_patsfun_35__closurerize($arg0);
  return $tmpret60;
} // end-of-function


function
_ats2phppre_ML_list0_patsfun_35($env0, $arg0)
{
//
//
  __patsflab__ats2phppre_ML_list0_patsfun_35:
  ats2phppre_ML_list0_foreach($env0, $arg0);
  return/*_void*/;
} // end-of-function


function
ats2phppre_ML_list0_iforeach($arg0, $arg1)
{
//
//
  __patsflab_list0_iforeach:
  ats2phppre_list_iforeach($arg0, $arg1);
  return/*_void*/;
} // end-of-function


function
ats2phppre_ML_list0_iforeach_method($arg0)
{
//
  $tmpret63 = NULL;
//
  __patsflab_list0_iforeach_method:
  $tmpret63 = _ats2phppre_ML_list0_patsfun_38__closurerize($arg0);
  return $tmpret63;
} // end-of-function


function
_ats2phppre_ML_list0_patsfun_38($env0, $arg0)
{
//
//
  __patsflab__ats2phppre_ML_list0_patsfun_38:
  ats2phppre_ML_list0_iforeach($env0, $arg0);
  return/*_void*/;
} // end-of-function


function
ats2phppre_ML_list0_rforeach($arg0, $arg1)
{
//
//
  __patsflab_list0_rforeach:
  ats2phppre_list_rforeach($arg0, $arg1);
  return/*_void*/;
} // end-of-function


function
ats2phppre_ML_list0_rforeach_method($arg0)
{
//
  $tmpret66 = NULL;
//
  __patsflab_list0_rforeach_method:
  $tmpret66 = _ats2phppre_ML_list0_patsfun_41__closurerize($arg0);
  return $tmpret66;
} // end-of-function


function
_ats2phppre_ML_list0_patsfun_41($env0, $arg0)
{
//
//
  __patsflab__ats2phppre_ML_list0_patsfun_41:
  ats2phppre_ML_list0_rforeach($env0, $arg0);
  return/*_void*/;
} // end-of-function


function
ats2phppre_ML_list0_filter($arg0, $arg1)
{
//
  $tmpret68 = NULL;
  $tmp69 = NULL;
//
  __patsflab_list0_filter:
  $tmp69 = ats2phppre_list_filter($arg0, $arg1);
  $tmpret68 = $tmp69;
  return $tmpret68;
} // end-of-function


function
ats2phppre_ML_list0_filter_method($arg0)
{
//
  $tmpret70 = NULL;
//
  __patsflab_list0_filter_method:
  $tmpret70 = _ats2phppre_ML_list0_patsfun_44__closurerize($arg0);
  return $tmpret70;
} // end-of-function


function
_ats2phppre_ML_list0_patsfun_44($env0, $arg0)
{
//
  $tmpret71 = NULL;
//
  __patsflab__ats2phppre_ML_list0_patsfun_44:
  $tmpret71 = ats2phppre_ML_list0_filter($env0, $arg0);
  return $tmpret71;
} // end-of-function


function
ats2phppre_ML_list0_map($arg0, $arg1)
{
//
  $tmpret72 = NULL;
  $tmp73 = NULL;
//
  __patsflab_list0_map:
  $tmp73 = ats2phppre_list_map($arg0, $arg1);
  $tmpret72 = $tmp73;
  return $tmpret72;
} // end-of-function


function
ats2phppre_ML_list0_map_method($arg0, $arg1)
{
//
  $tmpret74 = NULL;
//
  __patsflab_list0_map_method:
  $tmpret74 = _ats2phppre_ML_list0_patsfun_47__closurerize($arg0);
  return $tmpret74;
} // end-of-function


function
_ats2phppre_ML_list0_patsfun_47($env0, $arg0)
{
//
  $tmpret75 = NULL;
//
  __patsflab__ats2phppre_ML_list0_patsfun_47:
  $tmpret75 = ats2phppre_ML_list0_map($env0, $arg0);
  return $tmpret75;
} // end-of-function


function
ats2phppre_ML_list0_foldleft($arg0, $arg1, $arg2)
{
//
  $tmpret76 = NULL;
//
  __patsflab_list0_foldleft:
  $tmpret76 = _ats2phppre_ML_list0_aux_49($arg2, $arg1, $arg0);
  return $tmpret76;
} // end-of-function


function
_ats2phppre_ML_list0_aux_49($env0, $arg0, $arg1)
{
//
  $apy0 = NULL;
  $apy1 = NULL;
  $tmpret77 = NULL;
  $tmp78 = NULL;
  $tmp79 = NULL;
  $tmp80 = NULL;
//
  __patsflab__ats2phppre_ML_list0_aux_49:
  // ATScaseofseq_beg
  do {
    // ATSbranchseq_beg
    __atstmplab30:
    if(ATSCKptriscons($arg1)) goto __atstmplab33;
    __atstmplab31:
    $tmpret77 = $arg0;
    break;
    // ATSbranchseq_end
    // ATSbranchseq_beg
    __atstmplab32:
    __atstmplab33:
    $tmp78 = $arg1[0];
    $tmp79 = $arg1[1];
    $tmp80 = $env0[0]($env0, $arg0, $tmp78);
    // ATStailcalseq_beg
    $apy0 = $tmp80;
    $apy1 = $tmp79;
    $arg0 = $apy0;
    $arg1 = $apy1;
    goto __patsflab__ats2phppre_ML_list0_aux_49;
    // ATStailcalseq_end
    break;
    // ATSbranchseq_end
  } while(0);
  // ATScaseofseq_end
  return $tmpret77;
} // end-of-function


function
ats2phppre_ML_list0_foldright($arg0, $arg1, $arg2)
{
//
  $tmpret81 = NULL;
//
  __patsflab_list0_foldright:
  $tmpret81 = _ats2phppre_ML_list0_aux_51($arg1, $arg2, $arg0, $arg2);
  return $tmpret81;
} // end-of-function


function
_ats2phppre_ML_list0_aux_51($env0, $env1, $arg0, $arg1)
{
//
  $tmpret82 = NULL;
  $tmp83 = NULL;
  $tmp84 = NULL;
  $tmp85 = NULL;
//
  __patsflab__ats2phppre_ML_list0_aux_51:
  // ATScaseofseq_beg
  do {
    // ATSbranchseq_beg
    __atstmplab34:
    if(ATSCKptriscons($arg0)) goto __atstmplab37;
    __atstmplab35:
    $tmpret82 = $arg1;
    break;
    // ATSbranchseq_end
    // ATSbranchseq_beg
    __atstmplab36:
    __atstmplab37:
    $tmp83 = $arg0[0];
    $tmp84 = $arg0[1];
    $tmp85 = _ats2phppre_ML_list0_aux_51($env0, $env1, $tmp84, $env1);
    $tmpret82 = $env0[0]($env0, $tmp83, $tmp85);
    break;
    // ATSbranchseq_end
  } while(0);
  // ATScaseofseq_end
  return $tmpret82;
} // end-of-function


function
ats2phppre_ML_list0_sort_2($arg0, $arg1)
{
//
  $tmpret88 = NULL;
  $tmp89 = NULL;
//
  __patsflab_list0_sort_2:
  $tmp89 = ats2phppre_list_sort_2($arg0, $arg1);
  $tmpret88 = $tmp89;
  return $tmpret88;
} // end-of-function

/* ****** ****** */

/* end-of-compilation-unit */
?>
<?php
/*
**
** The PHP code is generated by atscc2php
** The starting compilation time is: 2016-10-8: 10h:20m
**
*/

// ATSassume(_057_home_057_hwxi_057_Research_057_ATS_055_Postiats_055_contrib_057_contrib_057_libatscc_057_libatscc2php_057_basics_php_056_sats__array0_vt0ype_type)

function
ats2phppre_ML_array0_make_elt($arg0, $arg1)
{
//
  $tmpret0 = NULL;
//
  __patsflab_array0_make_elt:
  $tmpret0 = ats2phppre_arrszref_make_elt($arg0, $arg1);
  return $tmpret0;
} // end-of-function


function
ats2phppre_ML_array0_size($arg0)
{
//
  $tmpret1 = NULL;
//
  __patsflab_array0_size:
  $tmpret1 = ats2phppre_arrszref_size($arg0);
  return $tmpret1;
} // end-of-function


function
ats2phppre_ML_array0_get_at($arg0, $arg1)
{
//
  $tmpret2 = NULL;
//
  __patsflab_array0_get_at:
  $tmpret2 = ats2phppre_arrszref_get_at($arg0, $arg1);
  return $tmpret2;
} // end-of-function


function
ats2phppre_ML_array0_set_at($arg0, $arg1, $arg2)
{
//
//
  __patsflab_array0_set_at:
  ats2phppre_arrszref_set_at($arg0, $arg1, $arg2);
  return/*_void*/;
} // end-of-function


function
ats2phppre_ML_array0_exch_at($arg0, $arg1, $arg2)
{
//
  $tmpret4 = NULL;
//
  __patsflab_array0_exch_at:
  $tmpret4 = ats2phppre_arrszref_exch_at($arg0, $arg1, $arg2);
  return $tmpret4;
} // end-of-function

/* ****** ****** */

/* end-of-compilation-unit */
?>
<?php
/*
** end of [libatscc2php_all.php]
*/
?>
