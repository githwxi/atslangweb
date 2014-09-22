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
background-color: #88b3e3;
} /* thePageLeft */

#thePageRHeaderTop {
/*
parent: thePageRHeader
children: 
*/
background-color: #6064ac;
} /* thePageRHeaderTop */

#thePageRHeaderSep {
/*
parent: thePageRHeader
children: 
*/
background-color: #cb3cbf;
} /* thePageRHeaderSep */

#thePageRHeader {
/*
parent: thePageRight
children: thePageRHeaderTop, thePageRHeaderSep
*/
background-color: #ca7da8;
} /* thePageRHeader */

#thePageRBodyLHeader {
/*
parent: thePageRBodyLeft
children: 
*/
background-color: #dc57b;
} /* thePageRBodyLHeader */

#thePageRBodyLContent {
/*
parent: thePageRBodyLeft
children: 
*/
background-color: #f0d58;
} /* thePageRBodyLContent */

#thePageRBodyLeft {
/*
parent: thePageRBody
children: thePageRBodyLHeader, thePageRBodyLContent
*/
background-color: #36fd7;
} /* thePageRBodyLeft */

#thePageRBodyRight {
/*
parent: thePageRBody
children: 
*/
background-color: #47561;
} /* thePageRBodyRight */

#thePageRBody {
/*
parent: thePageRight
children: thePageRBodyLeft, thePageRBodyRight
*/
background-color: #52b050;
} /* thePageRBody */

#thePageRFooterSep {
/*
parent: thePageRFooter
children: 
*/
background-color: #faf23b;
} /* thePageRFooterSep */

#thePageRFooterRest {
/*
parent: thePageRFooter
children: 
*/
background-color: #8dbcb8;
} /* thePageRFooterRest */

#thePageRFooter {
/*
parent: thePageRight
children: thePageRFooterSep, thePageRFooterRest
*/
background-color: #175ebc;
} /* thePageRFooter */

#thePageRight {
/*
parent: thePage
children: thePageRHeader, thePageRBody, thePageRFooter
*/
background-color: #947f92;
} /* thePageRight */

#thePage {
/*
parent: theBodyProp
children: thePageLeft, thePageRight
*/
background-color: #d08d26;
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
<table width="100%" height="100%" border="0" cellspacing="0" cellpadding="0">
<tr height="100%">
<td style="vertical-align:top;width:15%;">
<div id="thePageLeft">
<?php
include './thePageLeft/Home.php';
?>
</div><!--thePageLeft-->
</td>

<td style="vertical-align:top;">
<div id="thePageRight">
<div id="thePageRHeader">
<div id="thePageRHeaderTop">
<?php
include './thePageRHeaderTop/Home.php';
?>
</div><!--thePageRHeaderTop-->

<div id="thePageRHeaderSep">
<?php
include './thePageRHeaderSep/Home.php';
?>
</div><!--thePageRHeaderSep-->
</div><!--thePageRHeader-->

<div id="thePageRBody">
<table width="100%" height="100%" border="0" cellspacing="0" cellpadding="0">
<tr height="100%">
<td style="vertical-align:top;width:72%;">
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

<td style="vertical-align:top;width:28%;">
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
