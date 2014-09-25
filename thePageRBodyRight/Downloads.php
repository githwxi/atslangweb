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
ATS/Postiats (ATS2) is implemented in ATS/Anairiats (ATS1),
and ATS1 is implemented in itself. The lastest released version of ATS1 is
<a href="http://sourceforge.net/projects/ats-lang/files/latest/download?source=files">ATS1-0.2.11</a>,
which needs to be installed in order to build ATS2.
A simple shell script for installing ATS1 under Linux can be found
<a href="https://github.com/githwxi/ATS-Postiats/blob/master/travis-ci/setup.sh">on-line</a>.
It is clear based on the script that installing ATS1 is essentially the same as installing ATS2.
</p>

<hr></hr>

<p>
Note that only C code generated from compiling ATS1 source is included in a
released package of ATS2. Such a package can then be readily compiled into
object code by a C compiler (e.g., gcc and clang). In general, it is largely
straightforward to port ATS2 to a platform if the platform runs a Unix-like OS.
</p>

<hr></hr>

<p>
The name
<a href="https://github.com/githwxi/ATS-Postiats">ATS2-github</a>
often refers to the version of ATS2 available at github.com,
which is primarily suited for people who are interested in developing ATS2.
Assume that ATS1 is already installed. Then ATS2-github can be built as
follows:
<pre>
git clone https://github.com/githwxi/ATS-Postiats.git
cd ATS-Postiats
make -f codegen/Makefile_atslib && make -f Makefile_devl
</pre>
</p>

<hr></hr>

</div>
<?php /* end of [Downloads.php] */ ?>
