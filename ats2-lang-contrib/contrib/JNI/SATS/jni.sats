(*
**
** An interface for ATS to interact with JNI
** Contributed by Hongwei Xi (hwxi AT cs DOT bu DOT edu)
** Start Time: September, 2011
**
*)

(* ****** ****** *)
//
// Ported to ATS/Postiats by Hongwei Xi (August, 2013)
//
(* ****** ****** *)

%{#
#include "JNI/CATS/jni.cats"
%} // end of [%{#]

(* ****** ****** *)

#define ATS_PACKNAME "ATSCNTRB.JNI"
#define ATS_EXTERN_PREFIX "atscntrb_JNI_" // prefix for external names

(* ****** ****** *)
//
abst@ype jint = $extype"jint"
//
// HX: mapped to int (instead of size_t)
//
abst@ype jsize = $extype"jsize"
abst@ype jlong = $extype"jlong"
abst@ype jshort = $extype"jshort"
//
abst@ype jboolean = $extype"jboolean"
//
abst@ype jchar = $extype"jchar"
abst@ype jbyte = $extype"jbyte"
//
abst@ype jfloat = $extype"jfloat"
abst@ype jdouble = $extype"jdouble"
//
typedef Void = void
//
(* ****** ****** *)

abst@ype jboxed = ptr // HX: mapped to jlong

(* ****** ****** *)

abstype jstring (l:addr) = ptr(l)
typedef jstring = [l:addr] jstring (l)
typedef jstring0 = [l:agez] jstring (l)
typedef jstring1 = [l:addr | l > null] jstring (l)

(* ****** ****** *)

abstype jclass = ptr

(* ****** ****** *)

abstype jobject (l:addr) = ptr(l)
typedef jobject0 = [l:agez] jobject(l)
typedef jobject1 = [l:addr | l > null] jobject(l)

(* ****** ****** *)

castfn jstring2ptr {l:addr} (jstring(l)):<> ptr(l)
castfn jobject2ptr {l:addr} (jobject(l)):<> ptr(l)

(* ****** ****** *)

abstype JNIEnvPtr = ptr // (JNIEnv *ptr)

(* ****** ****** *)

fun NewStringUTF
  (env: JNIEnvPtr, str: NSH(string)): jstring0 = "mac#%"
// end of [NewStringUTF]

(* ****** ****** *)

absview
GetStringUTFChars_v (src:addr, dst:addr)

fun
GetStringUTFChars{l1:agz}
(
  env: JNIEnvPtr, src: jstring l1
) : [l2:addr | l2 > null]
(
  GetStringUTFChars_v (l1, l2) | strptr (l2)
) = "mac#%" // end of [GetStringUTFChars]

fun
ReleaseStringUTFChars
  {l1,l2:agz} (
  pf: GetStringUTFChars_v (l1, l2)
| env: JNIEnvPtr, src: jstring (l1), dst: strptr (l2)
) : void = "mac#%" // end of [ReleaseStringUTFChars]

(* ****** ****** *)

fun
RaiseExceptionByClassName
(
  env: JNIEnvPtr, clsname: string, exnmsg: string
) : void = "mac#%" // endfun

(* ****** ****** *)

(* end of [jni.sats] *)
