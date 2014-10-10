<?php

$fname = $_REQUEST["fname"];
/*
$fname = "http://www.ats-lang.org";
*/
if(!parse_url($fname))
{
  $fname = "http://www.ats-lang.org/$fname";
}
$contents = file_get_contents($fname);
if($contents)
{
  echo $contents;
} else {
  echo "ERROR(atslangweb): file_get_contents($fname) failed!";
} // end of [if]

?>
