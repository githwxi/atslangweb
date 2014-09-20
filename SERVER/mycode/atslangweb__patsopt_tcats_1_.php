<?php
//
$MYPHPDIR = "SERVER/mycode";
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
$PATSHOME = "$HOME/app-root/repo/ats2-lang";
putenv("PATSHOME=$PATSHOME");
$PATSHOMERELOC = "$HOME/app-root/repo/ats2-lang-contrib";
putenv("PATSHOMERELOC=$PATSHOMERELOC");
//
putenv("PATH=$PATH:$PATSHOME/bin");
//
$mycode =
rawurldecode($_REQUEST["mycode"]);
$mycode_res = atslangweb__patsopt_tcats_code_1_($mycode);
echo rawurldecode(json_encode($mycode_res));
//
?>
