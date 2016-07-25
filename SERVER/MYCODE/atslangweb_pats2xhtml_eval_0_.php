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
$PATSHOMERELOC =
"$HOME/app-root/repo/ats2-lang-contrib";
//
putenv("PATSHOME=$PATSHOME");
putenv("PATSHOMERELOC=$PATSHOMERELOC");
//
$PATH = getenv("PATH");
putenv("PATH=$PATH:$PATSHOME/bin");
//
$stadyn =
rawurldecode($_REQUEST["stadyn"]);
$mycode =
rawurldecode($_REQUEST["mycode"]);
$mycode_res =
atslangweb_pats2xhtml_eval_code_0_(0, $mycode);
//
header(
"Access-Control-Allow-Origin: *"
); /* header */
echo json_encode($mycode_res);
//
/* end of [atslangweb_pats2xhtml_eval_0_.php] */
//
?>
