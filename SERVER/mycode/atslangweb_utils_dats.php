<?php
/*
**
** The PHP code is generated by atscc2php
** The starting compilation time is: 2014-9-20: 22h:21m
**
*/

function
atslangweb__patsopt_tcats_code_0_($arg0)
{
/*
  // $tmpret2
*/
  __patsflab_patsopt_tcats_code_0_:
  $tmpret2 = atslangweb__patsopt_tcats_code__3__1($arg0);
  return $tmpret2;
} // end-of-function


function
atslangweb__patsopt_tcats_code__3__1($arg0)
{
/*
  // $tmpret3__1
  // $tmp4__1
  // $tmp5__1
  // $tmp6__1
*/
  __patsflab_patsopt_tcats_code:
  $tmp4__1 = atslangweb__tmpfile_make_string("patsopt_tcats_", $arg0);
  $tmp5__1 = atslangweb__patsopt_tcats_file__5__1($tmp4__1);
  $tmp6__1 = atslangweb__tmpfile_unlink($tmp4__1);
  $tmpret3__1 = $tmp5__1;
  return $tmpret3__1;
} // end-of-function


function
atslangweb__patsopt_tcats_file__5__1($arg0)
{
/*
  // $tmpret11__1
  // $tmp12__1
  // $tmp13__1
  // $tmp14__1
  // $tmp15__1
  // $tmp16__1
  // $tmp17__1
  // $tmp18__1
*/
  __patsflab_patsopt_tcats_file:
  $tmp12__1 = atslangweb__tmpfile_make_nil("patsopt_tcats_");
  $tmp13__1 = atslangweb__patsopt_tcats_command__7__1($arg0, $tmp12__1);
  $tmp14__1 = atslangweb__exec_retval($tmp13__1);
  $tmp16__1 = ats2phppre_eq_int0_int0($tmp14__1, 0);
  if($tmp16__1) {
    $tmp15__1 = array(0, "Typechecking passed!");
  } else {
    $tmp17__1 = atslangweb__tmpfile2string($tmp12__1);
    $tmp15__1 = array(1, $tmp17__1);
  } // endif
  $tmp18__1 = atslangweb__tmpfile_unlink($tmp12__1);
  $tmpret11__1 = $tmp15__1;
  return $tmpret11__1;
} // end-of-function


function
atslangweb__patsopt_tcats_command__7__1($arg0, $arg1)
{
/*
  // $tmpret27__1
  // $tmp28__1
*/
  __patsflab_patsopt_tcats_command:
  $tmp28__1 = atslangweb__patsopt_command__0__1();
  $tmpret27__1 = sprintf("%s 2>%s --typecheck --dynamic %s", $tmp28__1, $arg1, $arg0);
  return $tmpret27__1;
} // end-of-function


function
atslangweb__patsopt_command__0__1()
{
/*
  // $tmpret0__1
*/
  __patsflab_patsopt_command:
  $tmpret0__1 = "patsopt";
  return $tmpret0__1;
} // end-of-function


function
atslangweb__patsopt_tcats_code_1_($arg0)
{
/*
  // $tmpret32
  // $tmp33
*/
  __patsflab_patsopt_tcats_code_1_:
  $tmp33 = sprintf("%s\n%s\n%s\n", $GLOBALS['atslangweb__patsopt_tcats_preamble'], $arg0, $GLOBALS['atslangweb__patsopt_tcats_postamble']);
  $tmpret32 = atslangweb__patsopt_tcats_code_0_($tmp33);
  return $tmpret32;
} // end-of-function


function
atslangweb__patsopt_ccats_code_0_($arg0)
{
/*
  // $tmpret34
*/
  __patsflab_patsopt_ccats_code_0_:
  $tmpret34 = atslangweb__patsopt_ccats_code__12__1($arg0);
  return $tmpret34;
} // end-of-function


function
atslangweb__patsopt_ccats_code__12__1($arg0)
{
/*
  // $tmpret35__1
  // $tmp36__1
  // $tmp37__1
  // $tmp38__1
*/
  __patsflab_patsopt_ccats_code:
  $tmp36__1 = atslangweb__tmpfile_make_string("patsopt_ccats_", $arg0);
  $tmp37__1 = atslangweb__patsopt_ccats_file__14__1($tmp36__1);
  $tmp38__1 = atslangweb__tmpfile_unlink($tmp36__1);
  $tmpret35__1 = $tmp37__1;
  return $tmpret35__1;
} // end-of-function


function
atslangweb__patsopt_ccats_file__14__1($arg0)
{
/*
  // $tmpret43__1
  // $tmp44__1
  // $tmp45__1
  // $tmp46__1
  // $tmp47__1
  // $tmp48__1
  // $tmp49__1
  // $tmp50__1
  // $tmp51__1
  // $tmp52__1
  // $tmp53__1
  // $tmp54__1
*/
  __patsflab_patsopt_ccats_file:
  $tmp44__1 = atslangweb__tmpfile_make_nil("patsopt_ccats_");
  $tmp45__1 = atslangweb__tmpfile_make_nil("patsopt_ccats_");
  $tmp46__1 = atslangweb__patsopt_ccats_command__16__1($arg0, $tmp44__1, $tmp45__1);
  $tmp47__1 = atslangweb__exec_retval($tmp46__1);
  $tmp49__1 = ats2phppre_eq_int0_int0($tmp47__1, 0);
  if($tmp49__1) {
    $tmp50__1 = atslangweb__patsopt_ccats_cont__19__1($tmp44__1);
    $tmp51__1 = atslangweb__tmpfile_unlink($tmp44__1);
    $tmp48__1 = $tmp50__1;
  } else {
    $tmp52__1 = atslangweb__tmpfile2string($tmp45__1);
    $tmp53__1 = atslangweb__tmpfile_unlink($tmp44__1);
    $tmp48__1 = array(1, $tmp52__1);
  } // endif
  $tmp54__1 = atslangweb__tmpfile_unlink($tmp45__1);
  $tmpret43__1 = $tmp48__1;
  return $tmpret43__1;
} // end-of-function


function
atslangweb__patsopt_ccats_command__16__1($arg0, $arg1, $arg2)
{
/*
  // $tmpret67__1
  // $tmp68__1
*/
  __patsflab_patsopt_ccats_command:
  $tmp68__1 = atslangweb__patsopt_command__0__2();
  $tmpret67__1 = sprintf("%s 2>%s --output %s --dynamic %s", $tmp68__1, $arg2, $arg1, $arg0);
  return $tmpret67__1;
} // end-of-function


function
atslangweb__patsopt_command__0__2()
{
/*
  // $tmpret0__2
*/
  __patsflab_patsopt_command:
  $tmpret0__2 = "patsopt";
  return $tmpret0__2;
} // end-of-function


function
atslangweb__patsopt_ccats_cont__19__1($arg0)
{
/*
  // $tmpret72__1
  // $tmp73__1
*/
  __patsflab_patsopt_ccats_cont:
  $tmp73__1 = atslangweb__tmpfile2string($arg0);
  $tmpret72__1 = array(0, $tmp73__1);
  return $tmpret72__1;
} // end-of-function


function
atslangweb__patsopt_ccats_code_1_($arg0)
{
/*
  // $tmpret76
  // $tmp77
*/
  __patsflab_patsopt_ccats_code_1_:
  $tmp77 = sprintf("%s\n%s\n%s\n", $GLOBALS['atslangweb__patsopt_ccats_preamble'], $arg0, $GLOBALS['atslangweb__patsopt_ccats_postamble']);
  $tmpret76 = atslangweb__patsopt_ccats_code_0_($tmp77);
  return $tmpret76;
} // end-of-function


function
atslangweb__patsopt_atscc2js_code_0_($arg0)
{
/*
  // $tmpret78
*/
  __patsflab_patsopt_atscc2js_code_0_:
  $tmpret78 = atslangweb__patsopt_ccats_code__12__2($arg0);
  return $tmpret78;
} // end-of-function


function
atslangweb__patsopt_ccats_code__12__2($arg0)
{
/*
  // $tmpret35__2
  // $tmp36__2
  // $tmp37__2
  // $tmp38__2
*/
  __patsflab_patsopt_ccats_code:
  $tmp36__2 = atslangweb__tmpfile_make_string("patsopt_ccats_", $arg0);
  $tmp37__2 = atslangweb__patsopt_ccats_file__14__2($tmp36__2);
  $tmp38__2 = atslangweb__tmpfile_unlink($tmp36__2);
  $tmpret35__2 = $tmp37__2;
  return $tmpret35__2;
} // end-of-function


function
atslangweb__patsopt_ccats_file__14__2($arg0)
{
/*
  // $tmpret43__2
  // $tmp44__2
  // $tmp45__2
  // $tmp46__2
  // $tmp47__2
  // $tmp48__2
  // $tmp49__2
  // $tmp50__2
  // $tmp51__2
  // $tmp52__2
  // $tmp53__2
  // $tmp54__2
*/
  __patsflab_patsopt_ccats_file:
  $tmp44__2 = atslangweb__tmpfile_make_nil("patsopt_ccats_");
  $tmp45__2 = atslangweb__tmpfile_make_nil("patsopt_ccats_");
  $tmp46__2 = atslangweb__patsopt_ccats_command__16__2($arg0, $tmp44__2, $tmp45__2);
  $tmp47__2 = atslangweb__exec_retval($tmp46__2);
  $tmp49__2 = ats2phppre_eq_int0_int0($tmp47__2, 0);
  if($tmp49__2) {
    $tmp50__2 = atslangweb__patsopt_ccats_cont__23__1($tmp44__2);
    $tmp51__2 = atslangweb__tmpfile_unlink($tmp44__2);
    $tmp48__2 = $tmp50__2;
  } else {
    $tmp52__2 = atslangweb__tmpfile2string($tmp45__2);
    $tmp53__2 = atslangweb__tmpfile_unlink($tmp44__2);
    $tmp48__2 = array(1, $tmp52__2);
  } // endif
  $tmp54__2 = atslangweb__tmpfile_unlink($tmp45__2);
  $tmpret43__2 = $tmp48__2;
  return $tmpret43__2;
} // end-of-function


function
atslangweb__patsopt_ccats_command__16__2($arg0, $arg1, $arg2)
{
/*
  // $tmpret67__2
  // $tmp68__2
*/
  __patsflab_patsopt_ccats_command:
  $tmp68__2 = atslangweb__patsopt_command__0__3();
  $tmpret67__2 = sprintf("%s 2>%s --output %s --dynamic %s", $tmp68__2, $arg2, $arg1, $arg0);
  return $tmpret67__2;
} // end-of-function


function
atslangweb__patsopt_command__0__3()
{
/*
  // $tmpret0__3
*/
  __patsflab_patsopt_command:
  $tmpret0__3 = "patsopt";
  return $tmpret0__3;
} // end-of-function


function
atslangweb__patsopt_ccats_cont__23__1($arg0)
{
/*
  // $tmpret79__1
*/
  __patsflab_patsopt_ccats_cont:
  $tmpret79__1 = atslangweb__atscc2js_comp_file__29__1($arg0);
  return $tmpret79__1;
} // end-of-function


function
atslangweb__atscc2js_comp_file__29__1($arg0)
{
/*
  // $tmpret100__1
  // $tmp101__1
  // $tmp102__1
  // $tmp103__1
  // $tmp104__1
  // $tmp105__1
  // $tmp106__1
  // $tmp107__1
  // $tmp108__1
  // $tmp109__1
  // $tmp110__1
  // $tmp111__1
*/
  __patsflab_atscc2js_comp_file:
  $tmp101__1 = atslangweb__tmpfile_make_nil("atscc2js_comp_");
  $tmp102__1 = atslangweb__tmpfile_make_nil("atscc2js_comp_");
  $tmp103__1 = atslangweb__atscc2js_comp_command__31__1($arg0, $tmp101__1, $tmp102__1);
  $tmp104__1 = atslangweb__exec_retval($tmp103__1);
  $tmp106__1 = ats2phppre_eq_int0_int0($tmp104__1, 0);
  if($tmp106__1) {
    $tmp107__1 = atslangweb__tmpfile2string($tmp101__1);
    $tmp108__1 = atslangweb__tmpfile_unlink($tmp101__1);
    $tmp105__1 = array(0, $tmp107__1);
  } else {
    $tmp109__1 = atslangweb__tmpfile2string($tmp102__1);
    $tmp110__1 = atslangweb__tmpfile_unlink($tmp101__1);
    $tmp105__1 = array(1, $tmp109__1);
  } // endif
  $tmp111__1 = atslangweb__tmpfile_unlink($tmp102__1);
  $tmpret100__1 = $tmp105__1;
  return $tmpret100__1;
} // end-of-function


function
atslangweb__atscc2js_comp_command__31__1($arg0, $arg1, $arg2)
{
/*
  // $tmpret124__1
  // $tmp125__1
*/
  __patsflab_atscc2js_comp_command:
  $tmp125__1 = atslangweb__atscc2js_command__1__1();
  $tmpret124__1 = sprintf("%s 2>%s --output %s --input %s", $tmp125__1, $arg2, $arg1, $arg0);
  return $tmpret124__1;
} // end-of-function


function
atslangweb__atscc2js_command__1__1()
{
/*
  // $tmpret1__1
*/
  __patsflab_atscc2js_command:
  $tmpret1__1 = "atscc2js";
  return $tmpret1__1;
} // end-of-function


function
atslangweb__patsopt_atscc2js_code_1_($arg0)
{
/*
  // $tmpret129
  // $tmp130
*/
  __patsflab_patsopt_atscc2js_code_1_:
  $tmp130 = sprintf("%s\n%s\n%s\n", $GLOBALS['atslangweb__patsopt_atscc2js_preamble'], $arg0, $GLOBALS['atslangweb__patsopt_atscc2js_postamble']);
  $tmpret129 = atslangweb__patsopt_atscc2js_code_0_($tmp130);
  return $tmpret129;
} // end-of-function

/* ****** ****** */

/* end-of-compilation-unit */
?>
