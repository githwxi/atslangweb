/*
**
** The JavaScript code is generated by atscc2js
** The starting compilation time is: 2014-10-9: 21h:20m
**
*/

/* ATSextcode_beg() */
// COMMENT_line

var
Patsoptaas_File_newfile_blank = ""
var
Patsoptaas_File_newfile_template1 =
"\
(*\n\
** Template-1 for Patsoptaas\n\
*)\n\
\n\
(* ****** ****** *)\n\
\n\
#include\n\
\"share/atspre_define.hats\"\n\
#include\n\
\"{$LIBATSCC2JS}/staloadall.hats\"\n\
\n\
(* ****** ****** *)\n\
\n\
staload\n\
\"{$LIBATSCC2JS}/SATS/print.sats\"\n\
\n\
(* ****** ****** *)\n\
\n\
#define ATS_MAINATSFLAG 1\n\
#define ATS_DYNLOADNAME \"my_dynload\"\n\
\n\
(* ****** ****** *)\n\
\n\
\045{$\n\
//\n\
ats2jspre_the_print_store_clear();\n\
my_dynload();\n\
alert(ats2jspre_the_print_store_join());\n\
//\n\
\045} // end of [%{$]\n\
\n\
(* ****** ****** *)\n\
//\n\
// Please write your code below:\n\
//\n\
(* ****** ****** *)\n\
\n\
\n\
\n\
\n\
\n\
\n\
" // COMMENT_line

// COMMENT_line

/* ATSextcode_end() */

/* ****** ****** */

/* end-of-compilation-unit */
