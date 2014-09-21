<h2>What is ATS?</h2>

<p>
ATS is a statically typed programming language that unifies
implementation with formal specification. It is equipped with a highly
expressive type system rooted in the framework <em>Applied Type
System</em>, which gives the language its name.  In particular, both
dependent types and linear types are available in ATS.
</p>

<p>
The current implementation of ATS2 (ATS/Postiats) is written in ATS1
(ATS/Anairiats), consisting of more than 150K lines of code. ATS can be as
efficient as C/C++ both time-wise and memory-wise and supports a variety of
programming paradigms that include:
</p>

<ul>
<li>
<strong>Functional programming</strong>.
The core of ATS is a functional language based on eager
(aka. call-by-value) evaluation, which can also accommodate lazy
(aka. call-by-need) evaluation. The availability of linear types in ATS
often makes functional programs written in it run not only with
surprisingly high efficiency (when compared to C) but also with
surprisingly small (memory) footprint (when compared to C as well).
</li>

<li>
<strong>Imperative programming</strong>.
The novel and unique approach to imperative programming in ATS is firmly
rooted in the paradigm of <em>programming with theorem-proving</em>. The
type system of ATS allows many features considered dangerous in other
languages (e.g., explicit pointer arithmetic and explicit memory
allocation/deallocation) to be safely supported in ATS, making ATS a viable
programming language for low-level systems programming.
</li>

<li>
<strong>Concurrent programming</strong>.
ATS, equipped with a multicore-safe implementation of garbage collection,
can support multithreaded programming through the use of pthreads. The
availability of linear types for tracking and safely manipulating resources
provides an effective means to constructing reliable programs that can take
advantage of multicore architectures.
</li>

<li>
<strong>Modular programming</strong>.
The module system of ATS is largely infuenced by that of Modula-3, which is
both simple and general as well as effective in supporting large scale
programming.
</li>

</ul>

<h2>What is ATS good for?</h2>

<ul>

<li>
ATS can greatly enforce precision in practical programming.
</li>

<li>
ATS can greatly facilitate refinement-based software development.
</li>

<li>
ATS allows the programmer to write efficient functional programs that
directly manipulate native unboxed data representation.
</li>

<li>
ATS allows the programmer to reduce the memory footprint of a program
by making use of linear types.
</li>

<li>
ATS allows the programmer to enhance the safety (and efficiency) of a
program by making use of theorem-proving.
</li>

<li>
ATS allows the programmer to write safe low-level code that runs in OS
kernels.
</li>

<li>
ATS can help teach type theory, demonstrating both convincingly and
concretely the power and potential of types in constructing high-quality
software.
</li>

</ul>

<h2>Acknowledgments</h2>

The development of ATS has been funded in part by <a
href="http://www.nsf.gov">National Science Foundation</a> (NSF) under the
grants no. CCR-0081316/CCR-0224244, no. CCR-0092703/0229480,
no. CNS-0202067, no. CCF-0702665 and no CCF-1018601.
As always, <em>any opinions, findings, and conclusions or recommendations
expressed here are those of the author(s) and do not necessarily reflect
the views of the NSF.</em>

<?php /* end of [Home.php] */ ?>
