<style>
#thePageRHeaderSep
{
  color: #FFFFF0;
}

#thePageRHeaderSepL
{
  text-align: left;
}

#thePageRHeaderSepL ul
{
  margin: 0px;
  padding: 0px;
  list-style-type: none;
}
#thePageRHeaderSepL ul li
{
  display: inline;
}

#thePageRHeaderSepL a:link
{
  color: #FFFFF0;
}
#thePageRHeaderSepL a:hover
{
  color: #BFBFB0;
}
#thePageRHeaderSepL a:visited
{
  color: #8F8F80;
}

#thePageRHeaderSepR
{
  float: right;
}
#thePageRHeaderSepR_input
{
  height: 100%;
  font-size: 12pt;
  border-radius: 6px;
  background: #FFFFF0 url(//www.google.com/coop/intl/en/images/google_custom_search_watermark.gif) left no-repeat;
}
</style>

<table width="100%" border="0" cellspacing="0" cellpadding="0">
<tr>

<td width="75%">
<div id="thePageRHeaderSepL">
<ul>
<li><a href="Home.php">Home</a></li>
<li><a href="Downloads.php">Downloads</a></li>
<li><a href="Documents.php">Documents</a></li>
<li><a href="Libraries.php">Libraries</a></li>
<li><a href="Communities.php">Communities</a></li>
</ul>
</div>
</td>

<td width="25%">
<div
id="thePageRHeaderSepR"
style="margin-top:6px;margin-bottom:6px;"
>
<form
id="search-form"
action="https://www.google.com/cse"
>
<table>
<tr>
<td>
<input
id="thePageRHeaderSepR_input"
type="text" name="q" size="22"
onblur="if (/^\s*$/.test(this.value)) this.style.background='#FFFFF0 url(//www.google.com/coop/intl/en/images/google_custom_search_watermark.gif) left no-repeat'"
onfocus="this.style.background='#FFFFF0'"
/>
</td>
<td>
<input type="hidden" name="ie" value="UTF-8" />
<input type="hidden" name="cx" value="007881927213964201908:gqahxj364ly" />
<!--
<input class="button" type="submit" name="sa" value="Search" />
-->
</td>
</tr>
</table>
</form>
</div>
</td>

</tr>
</table>

<?php /* end of [Home.php] */ ?>
