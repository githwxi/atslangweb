(* ****** ****** *)
//
// RPC based on WebWorker
//
(* ****** ****** *)
//
#define
ATS_MAINATSFLAG 1
#define
ATS_DYNLOADNAME "theWorker_start"
//
(* ****** ****** *)
//  
#include
"share/atspre_define.hats"
#include
"{$LIBATSCC2JS}/staloadall.hats"
//
(* ****** ****** *)

staload
UN = "prelude/SATS/unsafe.sats"

(* ****** ****** *)
//
staload
"./../../SATS/Worker/channel.sats"
staload
"./../../DATS/Worker/channel.dats"
#include
"./../../DATS/Worker/chanpos.dats"
//
(* ****** ****** *)
//
staload
PROTOCOL = "./test_prot.sats"
//
typedef sstest1 = $PROTOCOL.sstest1
typedef sstest2 = $PROTOCOL.sstest2
typedef sstest3 = $PROTOCOL.sstest3
//
(* ****** ****** *)

val () =
{
//
val chp =
$UN.castvwtp0{chanpos(sstest3)}(0)
//
val ((*void*)) =
chanpos1_recv
(
chp
,
lam(chp, _) => let
  val a1 = double2int(100*JSmath_random())
  val a2 = double2int(100*JSmath_random())
in
  chanpos1_send
  ( chp, a1
  , lam(chp) =>
    chanpos1_send
    ( chp, a2
    , lam(chp) =>
      chanpos1_recv
      ( chp
      , lam(chp, res) =>
        chanpos1_send
        ( chp, (chmsg_parse(res) = a1 * a2), lam(chp) => chanpos1_close(chp))
      )
    )
  )
end // end of [lam]
) (* end of [chanpos1_recv] *)
//
} (* end of [val] *)

(* ****** ****** *)

%{$
//
theWorker_start();
//
%} // end of [%{$]

(* ****** ****** *)

(* end of [test_server.dats] *)
