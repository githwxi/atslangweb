<?php

function
thePageRHeaderSep_menu()
{
  echo '<ul>'; echo "\n";
  thePageRHeaderSep_menuitem('Home');
  thePageRHeaderSep_menuitem('Downloads');
  thePageRHeaderSep_menuitem('Documents');
  thePageRHeaderSep_menuitem('Libraries');
  thePageRHeaderSep_menuitem('Communities');
  echo '</ul>'; echo "\n";
}

function
thePageRHeaderSep_menuitem($name)
{
  if (atslangweb_get_pgname()===$name)
  {
    echo "<li>$name</li>\n";
  } else {
    echo "<li><a href=\"$name.php\">$name</a></li>\n";
  }
  return;
}

?>

<?php /* end of [share.php] */ ?>
