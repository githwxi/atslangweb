(* ****** ****** *)
//
#define
LIBATSCC2JS_targetloc
"$PATSCONTRIB/contrib\
/libatscc-0.3.2/libatscc2js"
//
staload
"{$LIBATSCC2JS}/SATS/Worker/channel.sats"
//
(* ****** ****** *)
//
typedef
sstest1 =
chrcv(int) ::
chsnd(bool) ::
chnil(*sstest1*)
//
typedef
sstest2 =
chsnd(int) ::
chsnd(int) ::
ssdisj(ssrepeat(sstest1))
//
typedef
sstest3 =
chrcv(int) :: ssdisj(ssrepeat(sstest2))
//
(* ****** ****** *)

(* end of [test3_prot.sats] *)

