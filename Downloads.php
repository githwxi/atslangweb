<!DOCTYPE html>
<html>
<head>
<style>
.center {
  margin-left: auto;
  margin-right: auto;
}
#thePageLeft {
/*
parent: thePage
children: 
*/
background-color: #e2ea;
} /* thePageLeft */

#thePageRHeaderTop {
/*
parent: thePageRHeader
children: 
*/
background-color: #7bcf6;
} /* thePageRHeaderTop */

#thePageRHeaderSep {
/*
parent: thePageRHeader
children: 
*/
background-color: #36e7f9;
} /* thePageRHeaderSep */

#thePageRHeader {
/*
parent: thePageRight
children: thePageRHeaderTop, thePageRHeaderSep
*/
background-color: #ca769e;
} /* thePageRHeader */

#thePageRBodyLHeader {
/*
parent: thePageRBodyLeft
children: 
*/
background-color: #d741de;
} /* thePageRBodyLHeader */

#thePageRBodyLContent {
/*
parent: thePageRBodyLeft
children: 
*/
background-color: #2675ad;
} /* thePageRBodyLContent */

#thePageRBodyLeft {
/*
parent: thePageRBody
children: thePageRBodyLHeader, thePageRBodyLContent
*/
background-color: #bb7672;
} /* thePageRBodyLeft */

#thePageRBodyRight {
/*
parent: thePageRBody
children: 
*/
background-color: #821148;
} /* thePageRBodyRight */

#thePageRBody {
/*
parent: thePageRight
children: thePageRBodyLeft, thePageRBodyRight
*/
background-color: #d89494;
} /* thePageRBody */

#thePageRFooterSep {
/*
parent: thePageRFooter
children: 
*/
background-color: #1bc3b9;
} /* thePageRFooterSep */

#thePageRFooterRest {
/*
parent: thePageRFooter
children: 
*/
background-color: #638d2f;
} /* thePageRFooterRest */

#thePageRFooter {
/*
parent: thePageRight
children: thePageRFooterSep, thePageRFooterRest
*/
background-color: #1157bc;
} /* thePageRFooter */

#thePageRight {
/*
parent: thePage
children: thePageRHeader, thePageRBody, thePageRFooter
*/
background-color: #6bfd47;
} /* thePageRight */

#thePage {
/*
parent: theBodyProp
children: thePageLeft, thePageRight
*/
background-color: #34cfeb;
} /* thePage */

#theBodyProp {
/*
parent: 
children: thePage
*/
} /* theBodyProp */
body {
font-family: sans-serif;
background-color: #213449; /* dark blue */
}
#thePage {
  width: 85%;
  margin-left: auto;
  margin-right: auto;
}
#thePageRHeader {
  text-align: center;
}
#thePageRFooter {
  text-align: center;
}
</style>
<script src="./CLIENT/mycode/libatscc2js_all.js"></script>
<script src="./CLIENT/mycode/libatscc2js_print_store.js"></script>
<script src="./CLIENT/mycode/atslangweb_utils_dats.js"></script>
</head>
<body>
<div id="theBodyProp">
<div id="thePage">
<table width="100%" border="0" cellspacing="0" cellpadding="0">
<tr>
<td style="vertical-align: top; width: 15%;">
<div id="thePageLeft">
<?php
include './thePageLeft/main.php';
?>
</div><!--thePageLeft-->
</td>

<td style="vertical-align: top;">
<div id="thePageRight">
<div id="thePageRHeader">
<div id="thePageRHeaderTop">
<?php
include './thePageRHeaderTop/main.php';
?>
</div><!--thePageRHeaderTop-->

<div id="thePageRHeaderSep">
<?php
include './thePageRHeaderSep/main.php';
?>
</div><!--thePageRHeaderSep-->
</div><!--thePageRHeader-->

<div id="thePageRBody">
<table width="100%" border="0" cellspacing="0" cellpadding="0">
<tr>
<td style="vertical-align: top; width: 72%;">
<div id="thePageRBodyLeft">
<div id="thePageRBodyLHeader">
<?php
include './thePageRBodyLHeader/Downloads.php';
?>
</div><!--thePageRBodyLHeader-->

<div id="thePageRBodyLContent">
<?php
include './thePageRBodyLContent/Downloads.php';
?>
</div><!--thePageRBodyLContent-->
</div><!--thePageRBodyLeft-->
</td>

<td style="vertical-align: top; width: 28%;">
<div id="thePageRBodyRight">
<?php
include './thePageRBodyRight/Downloads.php';
?>
</div><!--thePageRBodyRight-->
</td>
</tr>
</table>
</div><!--thePageRBody-->

<div id="thePageRFooter">
<div id="thePageRFooterSep">
[thePageRFooterSep]
</div><!--thePageRFooterSep-->

<div id="thePageRFooterRest">
This page is created with help from ATS/weboxy</div><!--thePageRFooterRest-->
</div><!--thePageRFooter-->
</div><!--thePageRight-->
</td>
</tr>
</table>
</div><!--thePage-->
</div><!--theBodyProp-->
</body>
</html>
