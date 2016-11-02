(*
** A queue of channels
*)
(* ****** ****** *)

#define ATS_DYNLOADFLAG 0

(* ****** ****** *)
//
(*
#define ATS_PACKNAME "queue2"
*)
//
#define ATS_EXTERN_PREFIX "queue2_"
#define ATS_STATIC_PREFIX "_queue2_"
//
(* ****** ****** *)

%{^
%%
-module(queue2_dats).
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
staload
UN = "prelude/SATS/unsafe.sats"
//
(* ****** ****** *)
//
staload "./../SATS/basis.sats"
//
(* ****** ****** *)
//
staload
CHAN0 = "./../DATS/basis_chan0.dats"
//
macdef
chanpos0_send = $CHAN0.chanpos0_send
macdef
chanpos0_recv = $CHAN0.chanpos0_recv
macdef
channeg0_recv = $CHAN0.channeg0_recv
macdef
channeg0_send = $CHAN0.channeg0_send
//
vtypedef chanpos0 = $CHAN0.chanpos()
vtypedef channeg0 = $CHAN0.channeg()
//
(* ****** ****** *)
//
(*
//
datatype
ssque(a:t@ype, int) =
  | ssque_nil(a, 0) of ()
  | {n:pos}
    ssque_deq(a, n) of (snd(a), ssque(a,n-1))
  | {n:pos}
    ssque_top(a, n) of (snd(a), ssque(a,n-0))
  | {n:nat}
    ssque_enq(a, n) of (rcv(a), ssque(a,n+1))
//
*)
abstype ssque(a:t@ype, n:int)
//
(* ****** ****** *)

typedef
ssque(a:t@ype, n:int) = ssconj(ssque(a, n))

(* ****** ****** *)
//
datatype
chanpos_ssque
  (a:t@ype, type, int) =
  | chanpos_ssque_nil(a, chnil, 0) of ()
  | {n:pos}
    chanpos_ssque_deq(a,chsnd(a)::ssque(a,n-1),n) of ()
  | {n:pos}
    chanpos_ssque_top(a,chsnd(a)::ssque(a,n-0),n) of ()
  | {n:nat}
    chanpos_ssque_enq(a,chrcv(a)::ssque(a,n+1),n) of ()
//
(* ****** ****** *)
//
extern
fun
chanpos_ssque
  {a:t@ype}{n:nat}
  (!chanpos(ssque(a,n)) >> chanpos(ss))
: #[ss:type] chanpos_ssque(a, ss, n) = "mac#%"
//
(* ****** ****** *)
//
extern
fun
channeg_ssque_nil
  {a:t@ype}
  (!channeg(ssque(a,0)) >> channeg(chnil)): void = "mac#%"
extern
fun
channeg_ssque_deq
  {a:t@ype}{n:pos}
  (!channeg(ssque(a,n)) >> channeg(chsnd(a)::ssque(a,n-1))): void = "mac#%"
and
channeg_ssque_top
  {a:t@ype}{n:pos}
  (!channeg(ssque(a,n)) >> channeg(chsnd(a)::ssque(a,n-0))): void = "mac#%"
and
channeg_ssque_enq
  {a:t@ype}{n:nat}
  (!channeg(ssque(a,n)) >> channeg(chrcv(a)::ssque(a,n+1))): void = "mac#%"
//
(* ****** ****** *)
  
implement
chanpos_ssque
  {a}{n}(chpos) = let
//
val
chpos0 =
$UN.castvwtp1{chanpos0}(chpos)
//
val tag =
  chanpos0_recv{natLt(4)}(chpos0)
//
prval () = $UN.cast2void(chpos0)
//
in
//
case+ tag of
| 0 => let
    prval () = $UN.prop_assert{n==0}()
    prval () =
    $UN.castview2void(chpos) in chanpos_ssque_nil()
  end // end of [prval]
| 1 => let
    prval () = $UN.prop_assert{n > 0}()
    prval () =
    $UN.castview2void(chpos) in chanpos_ssque_deq()
  end // end of [prval]
| 2 => let
    prval () = $UN.prop_assert{n > 0}()
    prval () =
    $UN.castview2void(chpos) in chanpos_ssque_top()
  end // end of [prval]
| 3 => let
    prval () =
    $UN.castview2void(chpos) in chanpos_ssque_enq()
  end // end of [prval]
//
end // end of [chanpos_ssque]
//
(* ****** ****** *)

implement
channeg_ssque_nil
  (chneg) = () where
{
//
val
chneg0 =
$UN.castvwtp1{channeg0}(chneg)
//
val () =
  channeg0_recv{int}(chneg0, 0)
//
prval () = $UN.cast2void(chneg0)
//
prval () = $UN.castview2void(chneg)
//
} (* end of [channeg_ssque_nil] *)

(* ****** ****** *)

implement
channeg_ssque_deq
  (chneg) = () where
{
//
val
chneg0 =
$UN.castvwtp1{channeg0}(chneg)
//
val () =
  channeg0_recv{int}(chneg0, 1)
//
prval () = $UN.cast2void(chneg0)
//
prval () = $UN.castview2void(chneg)
//
} (* end of [channeg_ssque_deq] *)

(* ****** ****** *)

implement
channeg_ssque_top
  (chneg) = () where
{
//
val
chneg0 =
$UN.castvwtp1{channeg0}(chneg)
//
val () =
  channeg0_recv{int}(chneg0, 2)
//
prval () = $UN.cast2void(chneg0)
//
prval () = $UN.castview2void(chneg)
//
} (* end of [channeg_ssque_top] *)

(* ****** ****** *)

implement
channeg_ssque_enq
  (chneg) = () where
{
//
val
chneg0 =
$UN.castvwtp1{channeg0}(chneg)
//
val () =
  channeg0_recv{int}(chneg0, 3)
//
prval () = $UN.cast2void(chneg0)
//
prval () = $UN.castview2void(chneg)
//
} (* end of [channeg_ssque_enq] *)

(* ****** ****** *)
//
extern
fun
queue_nil{a:t0p}(): channeg(ssque(a, 0)) = "mac#%"
//
extern
fun
queue_free_nil{a:t0p}(channeg(ssque(a, 0))): void = "mac#%"
//
extern
fun
queue_deq
  {a:t0p}{n:pos}
  (que: !channeg(ssque(a,n)) >> channeg(ssque(a,n-1))): (a) = "mac#%"
//
extern
fun
queue_top
  {a:t0p}{n:pos}
  (que: !channeg(ssque(a,n)) >> channeg(ssque(a,n-0))): (a) = "mac#%"
//
extern
fun
queue_enq
  {a:t0p}{n:nat}
  (que: !channeg(ssque(a,n)) >> channeg(ssque(a,n+1)), x0: a): void = "mac#%"
//
(* ****** ****** *)

implement
queue_nil
  {a}((*void*)) = let
//
fun
fserv
(
  chp: chanpos(ssque(a,0))
) : void = let
//
val opt = chanpos_ssque(chp)
//
in
//
case+ opt of
| chanpos_ssque_nil() =>
    chanpos_nil_wait (chp)
| chanpos_ssque_enq() => let
    val
    x_fst = chanpos_recv{a}(chp)
  in
    fserv2 (x_fst, queue_nil(), chp)
  end // end of [chanpos_ssque_enq]
//
end // end of [fserv]
//
and
fserv2
{n:nat}
(
  x: a
, chn: channeg(ssque(a,n))
, chp: chanpos(ssque(a,n+1))
) : void = let
//
val opt = chanpos_ssque(chp)
//
in
//
case+ opt of
| chanpos_ssque_deq() => let
    val () = chanpos_send{a}(chp, x)
  in
    chanposneg_link (chp, chn)
  end // end of [chanpos_ssque_deq]
| chanpos_ssque_top() => let
    val () = chanpos_send{a}(chp, x)
  in
    fserv2 (x, chn, chp)
  end // end of [chanpos_ssque_deq]
| chanpos_ssque_enq() => let
    val y = chanpos_recv{a}(chp)
    val () = channeg_ssque_enq (chn)
    val () = channeg_recv{a}(chn, y)
  in
    fserv2 (x, chn, chp)
  end // end of [chanpos_ssque_enq]
//
end // end of [fserv2]
//
in
  channeg_create(llam (chp) => fserv (chp))
end // end of [queue_nil]

(* ****** ****** *)

implement
queue_free_nil
  {a}(chn) = () where
{
//
val () = channeg_ssque_nil(chn)
val () = channeg_nil_close(chn)
//
} (* end of [queue_free_nil] *)

(* ****** ****** *)

implement
queue_deq
  {a}(chn) =
(
  channeg_ssque_deq(chn); channeg_send{a}(chn)
) (* end of [queue_deq] *)

(* ****** ****** *)

implement
queue_top
  {a}(chn) =
(
  channeg_ssque_top(chn); channeg_send{a}(chn)
) (* end of [queue_top] *)

(* ****** ****** *)

implement
queue_enq
  {a}(chn, x0) =
(
  channeg_ssque_enq(chn); channeg_recv{a}(chn, x0)
) (* end of [queue_enq] *)

(* ****** ****** *)
//
extern
fun
queue_map_cloref
  {a:t0p}{b:t0p}{n:nat}
(
  que: channeg(ssque(a,n)), n: int(n), f: (a) -<cloref1> b
) : channeg(ssque(b,n)) // end-of-function
//
(* ****** ****** *)

implement
queue_map_cloref
  {a}{b}{n}(que, n, f) = let
//
fun
loop{i,j:nat}
(
  que: channeg(ssque(a, i))
, i: int(i), res: channeg(ssque(b, j))
) : channeg(ssque(b, i+j)) =
(
//
if
i > 0
then let
  val x = queue_deq(que)
  val () = queue_enq(res, f(x))
in
  loop(que, i-1, res)
end // end of [then]
else let
  val () = queue_free_nil(que) in res
end // end of [else]
//
) (* end of [loop] *)
//
in
  loop(que, n, queue_nil())
end // end of [queue_map_cloref]

(* ****** ****** *)

extern 
fun
main0_erl
(
// argumentless
) : void = "mac#"
//
implement
main0_erl((*void*)) =
{
//
#define N 100
//
val Q0 = queue_nil{int}()
//
val () = queue_enq (Q0, 0)
val () = queue_enq (Q0, 1)
val () = queue_enq (Q0, 2)
//
val x0 = queue_top (Q0)
val () = println! ("x0(0) = ", x0)
val x0 = queue_deq (Q0)
val () = println! ("x0(0) = ", x0)
val x1 = queue_deq (Q0)
val () = println! ("x1(1) = ", x1)
//
val () = queue_enq (Q0, 3)
val () = queue_enq (Q0, 4)
//
val x2 = queue_top (Q0)
val () = println! ("x2(2) = ", x2)
val x2 = queue_deq (Q0)
val () = println! ("x2(2) = ", x2)
val x3 = queue_deq (Q0)
val () = println! ("x3(3) = ", x3)
//
val () = queue_enq (Q0, 5)
val () = queue_enq (Q0, 6)
val () = queue_enq (Q0, 7)
//
val x4 = queue_top (Q0)
val () = println! ("x4(4) = ", x4)
val x4 = queue_deq (Q0)
val () = println! ("x4(4) = ", x4)
val x5 = queue_top (Q0)
val () = println! ("x5(5) = ", x5)
val x5 = queue_deq (Q0)
val () = println! ("x5(5) = ", x5)
val x6 = queue_deq (Q0)
val () = println! ("x7(6) = ", x6)
//
val () = queue_enq (Q0, 8)
val Q1 = queue_map_cloref{int}{int}(Q0, 2, lam(x) => 2 * x)
//
val x7 = queue_top (Q1)
val () = println! ("x7(2*7) = ", x7)
val x7 = queue_deq (Q1)
val () = println! ("x7(2*7) = ", x7)
val x8 = queue_deq (Q1)
val () = println! ("x8(2*8) = ", x8)
//
val ((*freed*)) = queue_free_nil{int}(Q1)
//
} (* end of [main0] *)

(* ****** ****** *)

(* end of [queue2.dats] *)
