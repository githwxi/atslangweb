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
background-color: #7a3f37;
} /* thePageLeft */

#thePageRHeaderTop {
/*
parent: thePageRHeader
children: 
*/
background-color: #56a46a;
} /* thePageRHeaderTop */

#thePageRHeaderSep {
/*
parent: thePageRHeader
children: 
*/
background-color: #e4ec87;
} /* thePageRHeaderSep */

#thePageRHeader {
/*
parent: thePageRight
children: thePageRHeaderTop, thePageRHeaderSep
*/
background-color: #83eff3;
} /* thePageRHeader */

#thePageRBodyLHeader {
/*
parent: thePageRBodyLeft
children: 
*/
background-color: #73f69;
} /* thePageRBodyLHeader */

#thePageRBodyLContent {
/*
parent: thePageRBodyLeft
children: 
*/
background-color: #3383b8;
} /* thePageRBodyLContent */

#thePageRBodyLeft {
/*
parent: thePageRBody
children: thePageRBodyLHeader, thePageRBodyLContent
*/
height: 600px ;
background-color: #c12062;
} /* thePageRBodyLeft */

#thePageRBodyRight {
/*
parent: thePageRBody
children: 
*/
height: 600px ;
background-color: #7f44d9;
} /* thePageRBodyRight */

#thePageRBody {
/*
parent: thePageRight
children: thePageRBodyLeft, thePageRBodyRight
*/
background-color: #2a01f;
} /* thePageRBody */

#thePageRFooterSep {
/*
parent: thePageRFooter
children: 
*/
background-color: #28b0;
} /* thePageRFooterSep */

#thePageRFooterRest {
/*
parent: thePageRFooter
children: 
*/
background-color: #8b8b9f;
} /* thePageRFooterRest */

#thePageRFooter {
/*
parent: thePageRight
children: thePageRFooterSep, thePageRFooterRest
*/
background-color: #cbfef7;
} /* thePageRFooter */

#thePageRight {
/*
parent: thePage
children: thePageRHeader, thePageRBody, thePageRFooter
*/
background-color: #ab889;
} /* thePageRight */

#thePage {
/*
parent: theBodyProp
children: thePageLeft, thePageRight
*/
background-color: #744f98;
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
#thePageRBodyLHeader
{
  text-align: center;
}
#thePageRFooter {
  text-align: center;
}
</style>
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
<td style="vertical-align: top; width: 75%;">
<div id="thePageRBodyLeft">
<div id="thePageRBodyLHeader">
[thePageRBodyLHeader]
</div><!--thePageRBodyLHeader-->

<div id="thePageRBodyLContent">
[thePageRBodyLContent]
</div><!--thePageRBodyLContent-->
</div><!--thePageRBodyLeft-->
</td>

<td style="vertical-align: top; width: 25%;">
<div id="thePageRBodyRight">
[thePageRBodyRight]
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
