/* GNU Mailutils -- a suite of utilities for electronic mail
   Copyright (C) 2010-2022 Free Software Foundation, Inc.

   This library is free software; you can redistribute it and/or modify
   it under the terms of the GNU Lesser General Public License as published by
   the Free Software Foundation; either version 3, or (at your option)
   any later version.

   This library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public License
   along with GNU Mailutils.  If not, see <http://www.gnu.org/licenses/>. */

#ifndef _MAILUTILS_SYS_STREAMREF_H
#define _MAILUTILS_SYS_STREAMREF_H

#include <mailutils/types.h>
#include <mailutils/sys/stream.h>

struct _mu_streamref
{
  struct _mu_stream stream;      /* Superclass */
  mu_stream_t transport;         /* Transport stream */
  mu_off_t offset;               /* Offset in transport stream */
                            /* For abridged stream references: */
  mu_off_t start;                /* Start offset */
  mu_off_t end;                  /* End offset */
};

#endif

