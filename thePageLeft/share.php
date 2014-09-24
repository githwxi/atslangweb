<?php

function
thePageLeft_menu()
{
//
  thePageLeft_menuitem('Home');
  thePageLeft_menuitem('Downloads');
  thePageLeft_menuitem('Documents');
  thePageLeft_menuitem('Libraries');
  thePageLeft_menuitem('Communities');
  thePageLeft_menuitem('Papers');
  thePageLeft_menuitem('Examples');
  thePageLeft_menuitem('Implementations');
//
  return;
//
} /* end of [thePageLeft_menu] */

function
thePageLeft_menuitem($name)
{
//
  if(atslangweb__get_pgname()===$name)
  {
    echo "<tr><td name=\"$name\" class=\"self\">$name</td></tr>\n";
  } else {
    echo "<tr><td name=\"$name\" class=\"other\"><a href=\"$name.php\">$name</a></td></tr>\n";
  }
//
  return;
//
} /* end of [thePageLeft_menuitem] */

?>

<?php /* end of [share.php] */ ?>
