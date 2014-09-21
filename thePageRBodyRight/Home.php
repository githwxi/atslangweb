<style>
#hello_dats {
  font-size: 8pt;
  font-family: monospace;
  background-color: #c0c0c0;
}
#listsub_dats {
  font-size: 8pt;
  font-family: monospace;
  background-color: #c0c0c0;
}
#thePageRBodyRight
{
  font-size: 11pt;
}
</style>

ATS is versatile in its support for programming syntax.
For example, a tiny program in ATS of functional style is given as
follows:<br>

<TEXTAREA
 ID="hello_dats"
 ROWS="14" COLS="38">
//
// Say Hello! once
//
val () = print"Hello!\n"
//
// Say Hello! 3 times
//
val () =
repeat(3, a) where
{
  val a = $delay(print"Hello!")
} (* end of [where] *)
val () = print_newline((*void*))
//
</TEXTAREA>

<button type="button" onclick="Home_hello_onclick()">Try-it-yourself</button>

<p>

ATS can support typechecking with great precision. The following code
demonstrates the ability of ATS in detecting out-of-bounds subscripting at
compile-time:<br>

<TEXTAREA
 ID="listsub_dats"
 ROWS="10" COLS="38">
//
// Build a list of 3
//
val xs = $list(0,1,2)
//
val x0 = xs[0] // legal
val x1 = xs[1] // legal
val x2 = xs[2] // legal
val x3 = xs[3] // illegal
//
</TEXTAREA>

<button type="button" onclick="Home_listsub_onclick()">Try-it-yourself</button>

<p>

<TEXTAREA
 ID="repeat_f0f1_dats"
 ROWS="38" COLS="38">
//
extern
fun{} f0 (): int
extern
fun{} f1 (n: int): int
extern
fun{}
repeat_f0f1 (n: int): int
//
implement{}
repeat_f0f1(n) =
  if n = 0
    then f0()
    else f1(repeat_f0f1(n-1))
  // end of [if]
//
fun
times2 (n) =
  repeat_f0f1(n) where
{
  implement f0<> () = 0
  implement f1<> (n) = n + 2
}
//
fun
power2 (n) =
  repeat_f0f1(n) where
{
  implement f0<> () = 1
  implement f1<> (n) = 2 * n
}
//
val () =
println! ("2*10 = ", times2(10))
val () =
println! ("2^10 = ", power2(10))
//
</TEXTAREA>

<button type="button" onclick="Home_repeat_f0f1_onclick()">Try-it-yourself</button>

<?php /* end of [Home.php] */ ?>
