<?php
/*
**
** The PHP code is generated by atscc2php
** The starting compilation time is: 2014-9-20: 14h:26m
**
*/

function
atslangweb__tmpfile_unlink($arg0)
{
/*
  // $tmpret0
*/
  __patsflab_tmpfile_unlink:
  $tmpret0 = unlink($arg0);
  return $tmpret0;
} // end-of-function


function
atslangweb__tmpfile2string($arg0)
{
/*
  // $tmpret1
*/
  __patsflab_tmpfile2string:
  $tmpret1 = file_get_contents($arg0);
  return $tmpret1;
} // end-of-function


function
atslangweb__tmpfile_make_nil($arg0)
{
/*
  // $tmpret2
  // $tmp3
  // $tmp4
*/
  __patsflab_tmpfile_make_nil:
  $tmp3 = sys_get_temp_dir();
  $tmp4 = tempnam($tmp3, $arg0);
  $tmpret2 = $tmp4;
  return $tmpret2;
} // end-of-function


function
atslangweb__tmpfile_make_string($arg0, $arg1)
{
/*
  // $tmpret5
  // $tmp6
  // $tmp7
  // $tmp8
  // $tmp9
  // $tmp10
*/
  __patsflab_tmpfile_make_string:
  $tmp6 = sys_get_temp_dir();
  $tmp7 = tempnam($tmp6, $arg0);
  $tmp8 = fopen($tmp7, "w");
  $tmp9 = fwrite($tmp8, $arg1);
  $tmp10 = fclose($tmp8);
  $tmpret5 = $tmp7;
  return $tmpret5;
} // end-of-function

/* ****** ****** */

/* end-of-compilation-unit */
?>
