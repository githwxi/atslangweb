/*
** source: gtkwindow.h
*/

/* ****** ****** */

#define atscntrb_GTK_IS_WINDOW(x) GTK_IS_WINDOW(x)

/* ****** ****** */
/*
** There is no floating reference for GtkWindows
*/
#define atscntrb_gtk_window_new(type) \
  g_object_ref_sink(G_OBJECT(gtk_window_new(type)))

/* ****** ****** */

#define atscntrb_gtk_window_get_title gtk_window_get_title
#define atscntrb_gtk_window_set_title gtk_window_set_title

/* ****** ****** */

#define atscntrb_gtk_window_set_position gtk_window_set_position

/* ****** ****** */

#define atscntrb_gtk_window_resize gtk_window_resize

/* ****** ****** */

#define atscntrb_gtk_window_get_default_size gtk_window_get_default_size
#define atscntrb_gtk_window_set_default_size gtk_window_set_default_size

/* ****** ****** */

#define atscntrb_gtk_window_get_resizable gtk_window_get_resizable
#define atscntrb_gtk_window_set_resizable gtk_window_set_resizable

/* ****** ****** */

#define atscntrb_gtk_window_set_transient_for gtk_window_set_transient_for

/* ****** ****** */

/* end of [gtkwindow.cats] */
