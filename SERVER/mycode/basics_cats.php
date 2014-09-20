<?php

/* ****** ****** */

/*
// For building TUTORATS
*/

/* ****** ****** */

/*
// Author: Hongwei Xi
// Start time: September, 2014
*/

/* ****** ****** */
//
function
atslangweb__fname_dats_c($fname) { return $fname . "_dats.c"; }
function
atslangweb__fname_dats_js($fname) { return $fname . "_dats.js"; }
function
atslangweb__fname_dats_php($fname) { return $fname . "_dats.php"; }
//
/* ****** ****** */

function
atslangweb__exec_retval
  ($command)
{
  $retval = 0;
  $output = array();
  exec($command, $output, $retval);
  return $retval;
}

/* ****** ****** */
//
$atslangweb__patsopt_tcats_preamble = "
#include
\"share/atspre_define.hats\"
#include
\"share/HATS/atspre_staload_libats_ML.hats\"
" ; // end of [$atslangweb__patsopt_tcats_preamble]
//
$atslangweb__patsopt_tcats_postamble = ""
//
/* ****** ****** */

/* end of [basics_cats.php] */

?>
