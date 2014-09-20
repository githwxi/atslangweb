/*
** API in ATS for glib
*/

/* ****** ****** */

/*
(*
** ATS/Postiats - Unleashing the Potential of Types!
** Copyright (C) 2011-2013 Hongwei Xi, ATS Trustful Software, Inc.
** All rights reserved
**
** Permission to use, copy, modify, and distribute this software for any
** purpose with or without fee is hereby granted, provided that the above
** copyright notice and this permission notice appear in all copies.
** 
** THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
** WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
** MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
** ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
** WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
** ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
** OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
*)
*/

/* ****** ****** */
//
// Author: Hongwei Xi
// Authoremail: hwxiATcsDOTbuDOTedu
// Start Time: April, 2010
//
/* ****** ****** */
//
// Author: Hongwei Xi
// Authoremail: gmhwxiATgmailDOTcom
// Start Time: September, 2013
//
/* ****** ****** */

#ifndef ATSCNTRB_GLIB_GLIBOBJ_CATS
#define ATSCNTRB_GLIB_GLIBOBJ_CATS

/* ****** ****** */

#include "glib-object.h"

/* ****** ****** */

#define atscntrb_g_object_ref g_object_ref
#define atscntrb_g_object_unref g_object_unref

/* ****** ****** */

ATSinline()
atstype_int
atscntrb_g_object_ref_count
  (atstype_ptr x) {
  return g_atomic_int_get ((int*)&((GObject*)x)->ref_count) ;
} // end of [atscntrb_g_object_ref_count]

/* ****** ****** */

#define atscntrb_g_object_is_floating g_object_is_floating

/* ****** ****** */

#define atscntrb_g_signal_connect g_signal_connect
#define atscntrb_g_signal_connect_swapped g_signal_connect_swapped

/* ****** ****** */

#endif /* ATSCNTRB_GLIB_GLIBOBJ_CATS */

/* ****** ****** */

/* end of [glib-object.cats] */
