(*
** source: gtkcontainer.h
*)

(* ****** ****** *)
//
// HX-2014-04-23-checked:
// The refcount of a gobject is increased
// by one after it is added into a gtkcontainer.
//
(* ****** ****** *)

fun gtk_container_add
  (!GtkContainer1, !GtkWidget1): void = "mac#%"
// end of [gtk_container_add]

(* ****** ****** *)

fun gtk_container_remove
  (!GtkContainer1, !GtkWidget1): void = "mac#%"
// end of [gtk_container_remove]

(* ****** ****** *)

fun gtk_container_set_border_width
  (!GtkContainer1, width: guint): void = "mac#%"
// end of [gtk_container_set_border_width]

(* ****** ****** *)

(* end of [gtkcontainer.sats] *)
