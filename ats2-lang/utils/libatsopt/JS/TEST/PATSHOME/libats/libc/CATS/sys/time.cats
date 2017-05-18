/***********************************************************************/
/*                                                                     */
/*                         Applied Type System                         */
/*                                                                     */
/***********************************************************************/

/* (*
** ATS/Postiats - Unleashing the Potential of Types!
** Copyright (C) 2010-2015 Hongwei Xi, ATS Trustful Software, Inc.
** All rights reserved
**
** ATS is free software;  you can  redistribute it and/or modify it under
** the terms of  the GNU GENERAL PUBLIC LICENSE (GPL) as published by the
** Free Software Foundation; either version 3, or (at  your  option)  any
** later version.
**
** ATS is distributed in the hope that it will be useful, but WITHOUT ANY
** WARRANTY; without  even  the  implied  warranty  of MERCHANTABILITY or
** FITNESS FOR A PARTICULAR PURPOSE.  See the  GNU General Public License
** for more details.
**
** You  should  have  received  a  copy of the GNU General Public License
** along  with  ATS;  see the  file COPYING.  If not, please write to the
** Free Software Foundation,  51 Franklin Street, Fifth Floor, Boston, MA
** 02110-1301, USA.
*) */

/* ****** ****** */

/*
(* Author: Hongwei Xi *)
(* Authoremail: gmhwxiATgmailDOTcom *)
(* Start time: August, 2013 *)
*/

/* ****** ****** */

#ifndef \
ATSLIB_LIBATS_LIBC_CATS_SYS_TIME
#define \
ATSLIB_LIBATS_LIBC_CATS_SYS_TIME

/* ****** ****** */

#include <sys/time.h>

/* ****** ****** */
//
typedef
struct timeval
atslib_libats_libc_timeval_type ;
typedef
struct timezone
atslib_libats_libc_timezone_type ;
//
typedef
struct itimerval
atslib_libats_libc_itimerval_type ;
//
/* ****** ****** */

#define \
atslib_libats_libc_gettimeofday_tv(tv) gettimeofday(tv, NULL)
#define \
atslib_libats_libc_gettimeofday_tz(tz) gettimeofday(NULL, tz)

#define \
atslib_libats_libc_settimeofday_tv(tv) settimeofday(tv, NULL)
#define \
atslib_libats_libc_settimeofday_tz(tz) settimeofday(NULL, tz)
#define \
atslib_libats_libc_settimeofday_tvtz(tv, tz) settimeofday(tv, tz)

/* ****** ****** */

#define atslib_libats_libc_utimes utimes
#define atslib_libats_libc_futimes futimes
#define atslib_libats_libc_futimesat futimesat

/* ****** ****** */
//
#define atslib_libats_libc_getitimer getitimer
//
#define atslib_libats_libc_setitimer setitimer
#define \
atslib_libats_libc_setitimer_null(which, itval) setitimer(which, itval, NULL)
//
/* ****** ****** */

#endif // ifndef ATSLIB_LIBATS_LIBC_CATS_SYS_TIME

/* ****** ****** */

/* end of [time.cats] */
