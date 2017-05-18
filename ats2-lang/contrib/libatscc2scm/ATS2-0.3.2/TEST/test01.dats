(* ****** ****** *)
//
// For testing libatscc2clj
//
(* ****** ****** *)
//
#define
ATS_MAINATSFLAG 1
#define
ATS_DYNLOADNAME "test01_dynload"
//
#define ATS_STATIC_PREFIX "_test01_"
//
(* ****** ****** *)
//
#include "./../staloadall.hats"
//
(* ****** ****** *)
//
val () =
repeat(3, $delay(println!("Hello, world!")))
//
val () =
(3).repeat()(lam() => println!("Hello, world!"))
//
val () =
(3).foreach()(lam(i) => println!(i, ": Hello, world!"))
//
(* ****** ****** *)

%{$
;;
(test01_dynload);
;;
%} (* end of [%{$] *)

(* ****** ****** *)

(* end of [test01.dats] *)
