<style>
#thePageRBodyRight
{
  font-size: 11pt;
  background: #d1d360;
  border-top-left-radius:12px;
  border-bottom-left-radius:12px;
}
</style>

<div
style="margin-top:8px;padding-top:8px;padding-left:4px;padding-right:4px"
><!--div-->

<h2 style="display:inline;">More on ATS packages</h2>

<hr></hr>

<p>
ATS/Postiats (ATS2) is implemented in ATS/Anairiats (ATS1).
The lastest released version of ATS1 is
<a href="http://sourceforge.net/projects/ats-lang/files/latest/download?source=files">ATS1-0.2.11</a>,
which we need in order to compile ATS2.
ATS1 can be bootstrapped, that is, it is capable of compiling itself.
A simple shell script for installing ATS1 under Linux can be found
<a href="https://github.com/githwxi/ATS-Postiats/blob/master/travis-ci/setup.sh">on-line</a>.
It is clear from the script that installing ATS1 is essentially the same as installing ATS2.
</p>

<hr></hr>

<p>
Note that only C code generated from compiling ATS1 source is included in a
released package of ATS2. Such a package can then be readily compiled into
object code by a C compiler such as gcc and clang. In general, it is largely
straightforward to port ATS2 to a platform running a Unix-like OS.
</p>

<hr></hr>

<p>
The name
<a href="https://github.com/githwxi/ATS-Postiats">ATS2-github</a>
is often used to refer to the version of ATS2 available at github.com,
which is primarily suited for people who are interested in developing ATS2.
As can be expected, ATS1 needs to be installed in order to compile ATS2-github.
</p>

<hr></hr>

</div>
<?php /* end of [Downloads.php] */ ?>
