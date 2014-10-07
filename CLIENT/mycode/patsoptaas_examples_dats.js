/*
**
** The JavaScript code is generated by atscc2js
** The starting compilation time is: 2014-10-7: 15h:16m
**
*/

/* ATSextcode_beg() */
// COMMENT_line
var
Patsoptaas_File_examples_hello =
"\
(*\n\
** Hello, world!\n\
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
//\n\
extern\n\
fun\n\
hello(): void = \"mac#\"\n\
implement\n\
hello() = print(\"Hello, world!\")\n\
//\n\
(* ****** ****** *)\n\
//\n\
val () = hello()\n\
//\n\
(* ****** ****** *)\n\
\n\
\045{$\n\
//\n\
ats2jspre_the_print_store_clear();\n\
my_dynload();\n\
alert(ats2jspre_the_print_store_join());\n\
//\n\
\045} // end of [%{$]\n\
" // COMMENT_line
// COMMENT_line
/* ATSextcode_end() */

/* ATSextcode_beg() */
// COMMENT_line
var
Patsoptaas_File_examples_factrec =
"\
(*\n\
** Factorial(rec)\n\
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
//\n\
extern\n\
fun\n\
fact: int -> int = \"mac#\"\n\
implement\n\
fact(n) = if n > 0 then n * fact(n-1) else 1\n\
//\n\
(* ****** ****** *)\n\
//\n\
val N = 10\n\
val () = println! (\"fact(\", N, \") = \", fact(N))\n\
//\n\
(* ****** ****** *)\n\
\n\
\045{$\n\
//\n\
ats2jspre_the_print_store_clear();\n\
my_dynload();\n\
alert(ats2jspre_the_print_store_join());\n\
//\n\
\045} // end of [%{$]\n\
" // COMMENT_line
// COMMENT_line
/* ATSextcode_end() */

/* ATSextcode_beg() */
// COMMENT_line
var
Patsoptaas_File_examples_factiter =
"\
(*\n\
** Factorial(iter)\n\
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
//\n\
extern\n\
fun\n\
fact: int -> int = \"mac#\"\n\
implement\n\
fact(n) = let\n\
//\n\
fun\n\
loop\n\
(\n\
  n: int, res: int\n\
) : int =\n\
  if n > 0 then loop (n-1, n*res) else res\n\
//\n\
in\n\
  loop (n, 1)\n\
end // end of [fact]\n\
//\n\
(* ****** ****** *)\n\
//\n\
val N = 10\n\
val () = println! (\"fact(\", N, \") = \", fact(N))\n\
//\n\
(* ****** ****** *)\n\
\n\
\045{$\n\
//\n\
ats2jspre_the_print_store_clear();\n\
my_dynload();\n\
alert(ats2jspre_the_print_store_join());\n\
//\n\
\045} // end of [%{$]\n\
" // COMMENT_line
// COMMENT_line
/* ATSextcode_end() */

/* ****** ****** */

/* end-of-compilation-unit */
