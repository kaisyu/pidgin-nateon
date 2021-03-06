/**
 * @file error.h Error functions
 *
 * purple
 *
 * Purple is the legal property of its developers, whose names are too numerous
 * to list here.  Please refer to the COPYRIGHT file distributed with this
 * source distribution.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */
#ifndef _NATEON_ERROR_H_
#define _NATEON_ERROR_H_

#include "session.h"

/**
 * Returns the string representation of an error type.
 *
 * @param type The error type.
 * @param debug Whether this should be treated as a debug log message or a user-visible error
 *
 * @return The string representation of the error type.
 */
const char *nateon_error_get_text(unsigned int type, gboolean *debug);

/**
 * Handles an error.
 *
 * @param session The current session.
 * @param type    The error type.
 */
void nateon_error_handle(NateonSession *session, unsigned int type);

#endif /* _NATEON_ERROR_H_ */
