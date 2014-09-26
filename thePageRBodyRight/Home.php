<style>
#hello_dats {
  font-size: 9pt;
  font-family: Lucida Console, Courier New, monospace;
  color: #8B0000;
  background-color: #FFFAF0;
}
#listsub_dats {
  font-size: 9pt;
  font-family: Lucida Console, Courier New, monospace;
  color: #8B0000;
  background-color: #FFFAF0;
}
#repeat_f0f1_dats {
  font-size: 9pt;
  font-family: Lucida Console, Courier New, monospace;
  color: #8B0000;
  background-color: #FFFAF0;
}
</style>

<div
style="margin-top:8px;padding-top:8px;padding-left:4px;padding-right:4px"
><!--div-->

<h2 style="display:inline;">Yes, ATS can!</h2>

<hr></hr>

<p>
The core of ATS is a typed call-by-value functional
programming language that is largely based on ML. For instance, the
following tiny ATS program is written in a style of functional programming:
</p>

<div
style="width:96%;margin:auto;"
><!--div-->

<TEXTAREA
 ID="hello_dats" ROWS="14" COLS="36"
>
//
// Yes, you can edit
//
(* Say Hello! once *)
val () = print"Hello!\n"
//
(* Say Hello! 3 times *)
val () =
repeat(3, a) where
{
  val a = $delay(print"Hello!")
} (* end of [where] *)
val () = print_newline((*void*))
//
</TEXTAREA>

<button
 ID="hello_button"
 type="button" onclick="Home_hello_onclick()"
>Try-it-yourself</button>

</div>

<hr></hr>

<p>
ATS is both accurate and expressive in its support for (static)
typechecking.  The following code demonstrates the ability of ATS in
detecting out-of-bounds subscripting at compile-time:
</p>

<div
style="width:96%;margin:auto;"
><!--div-->

<TEXTAREA
 ID="listsub_dats" ROWS="11" COLS="36"
>
//
// Yes, you can edit
//
(* Build a list of 3 *)
val xs = $list(0, 1, 2)
//
val x0 = xs[0] // legal
val x1 = xs[1] // legal
val x2 = xs[2] // legal
val x3 = xs[3] // illegal
//
</TEXTAREA>

<button
 ID="listsub_button"
 type="button" onclick="Home_listsub_onclick()"
>Try-it-yourself</button>

</div>

<hr></hr>

<p>
ATS is highly effective and flexible in its support for a template-based
approach to code reuse. As an example, the following code is likely to
remind someone of higher-order functions but it is actually every bit of a
first-order implementation in ATS:
</p>

<div
width=96% margin=auto
><!--div-->

<table>
<tr>
<td width></td>
<td width>
<textarea
 id="repeat_f0f1_dats" rows="16" cols="36"
><!--textarea-->
//
// Yes, you can edit
//
extern
fun{} f0 (): int
extern
fun{} f1 (int): int
extern
fun{} repeat_f0f1 (int): int
//
implement
{}(*tmp*)
repeat_f0f1(n) =
  if n = 0
    then f0()
    else f1(repeat_f0f1(n-1))
  // end of [if]
//
fun
times (
  m:int, n:int
) : int = // m*n
  repeat_f0f1 (m) where
{
  implement f0<> () = 0
  implement f1<> (x) = x + n
}
//
fun
power (
  m:int, n:int
) : int = // m^n
  repeat_f0f1 (n) where
{
  implement f0<> () = 1
  implement f1<> (x) = m * x
}
//
val () =
println! ("5*5 = ", times(5,5))
val () =
println! ("5^2 = ", power(5,2))
val () =
println! ("2^10 = ", power(2,10))
val () =
println! ("3^10 = ", power(3,10))
//
</textarea>
</td>
<td width="5%"></td>
</tr>
</table>

<button
 ID="repeat_f0f1_button"
 type="button" onclick="Home_repeat_f0f1_onclick()"
>Try-it-yourself</button>

</div>

</div>
<?php /* end of [Home.php] */ ?>
