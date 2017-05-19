<?php
//
$MYPHPDIR = "";
/*
$MYPHPDIR = "SERVER/MYCODE"; // for testing
*/
//
include
"./$MYPHPDIR/libatscc2php_all.php";
//
include "./$MYPHPDIR/basics_cats.php";
//
include "./$MYPHPDIR/basics_dats.php";
include "./$MYPHPDIR/atslangweb_utils_dats.php";
//
$HOME = getenv("HOME");
//
$PATSHOME =
"$HOME/app-root/repo/ats2-lang";
//
$PATSCONTRIB =
"$HOME/app-root/repo/ats2-lang-contrib";
//
putenv("PATSHOME=$PATSHOME");
putenv("PATSCONTRIB=$PATSCONTRIB");
//
$PATH = getenv("PATH");
putenv("PATH=$PATH:$PATSHOME/bin");
//
$mycode =
rawurldecode($_REQUEST["mycode"]);
$mycode_res =
atslangweb_patsopt_atscc2js_code_1_($mycode);
//
echo rawurlencode(json_encode($mycode_res));
//
/* end of [atslangweb_patsopt_atscc2js_1_.php] */
//
?>

