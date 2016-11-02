(*
** Fibonacci numbers
*)

(* ****** ****** *)

#define ATS_DYNLOADFLAG 0

(* ****** ****** *)

#define
ATS_EXTERN_PREFIX "fib_"
#define
ATS_STATIC_PREFIX "_fib_"

(* ****** ****** *)

%{^
%%
-module(fib_dats).
%%
-export([main0_erl/0]).
%%
-compile(nowarn_unused_vars).
-compile(nowarn_unused_function).
%%
-export([ats2erlpre_cloref1_app/2]).
-export([libats2erl_session_chque_server/0]).
-export([libats2erl_session_chanpos_server/2]).
-export([libats2erl_session_channeg_server/2]).
%%
-include("./../../libatscc2erl_all.hrl").
-include("./../../Session/mylibats2erl_all.hrl").
%%
%} // end of [%{]

(* ****** ****** *)
//
#include
"share/atspre_define.hats"
//
#include
"{$LIBATSCC2ERL}/staloadall.hats"
//
(* ****** ****** *)
//
staload "./../SATS/basis.sats"
//
(* ****** ****** *)
//
extern
fun
channeg_fib
  (n:int): channeg(chsnd(int)::chnil)
//
(* ****** ****** *)

implement
channeg_fib(n) = let
//
fun
fserv
(chp: chanpos(chsnd(int)::chnil)): void =
channel_send_close
( chp
, if n >= 2 then let
    val chn1 = channeg_fib(n-1)
    val chn2 = channeg_fib(n-2)
  in
    channel_recv_close(chn1) + channel_recv_close(chn2)
  end else (n) // end of [if]
) (* end of [chanpos_send_close] *)
//
in
  channeg_create(llam(chp) => fserv(chp))
end // end of [channeg_fib]

(* ****** ****** *)

extern
fun
main0_erl
(
// argumentless
) : void = "mac#"
//
implement
main0_erl () =
{
//
val N = 20
//
val chn = channeg_fib(N)
val ans = channeg_send(chn)
val ((*void*)) = channeg_nil_close(chn)
//
val ((*void*)) = println! ("channeg_fib(", N, ") = ", ans)
//
} (* end of [main0_erl] *)

(* ****** ****** *)

(* end of [fib.dats] *)
