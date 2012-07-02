/* vim: set sw=4 sts=4 : */

/* Copyright (c) 2007-2008, David B. Cortarello
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 *   * Redistributions of source code must retain the above copyright notice
 *     and the following disclaimer.
 *   * Redistributions in binary form must reproduce the above copyright notice
 *     and the following disclaimer in the documentation and/or other materials
 *     provided with the distribution.
 *   * Neither the name of Kwort nor the names of its contributors may be used
 *     to endorse or promote products derived from this software without
 *     specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDERS OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
*/

#include "config.h"
#include <locale.h>
#include <libintl.h>

#define gettext_noop(String) String

enum {
	ERR_SUCCESS,
	ERR_WRONG_USER_OR_PASSWD,
	ERR_COMMAND_NOT_FOUND,
	ERR_PERMISSION_DENIED,
	ERR_MISSING_COMMAND,
	ERR_MISSING_USER_AND_COMMAND,
	ERR_MISSING_MESSAGE_AND_COMMAND,
	ERR_CALLING_SU,
	ERR_INVALID_COMMAND
};

static const char *KTS_ERRORS[] = {
	gettext_noop("Success"),
	gettext_noop("Invalid username or password"),
	gettext_noop("Command not found"),
	gettext_noop("Permission denied"),
	gettext_noop("No command given"),
	gettext_noop("No user and command specified"),
	gettext_noop("No message and command specified"),
	gettext_noop("Unknown error calling the su command"),
	gettext_noop("Command passed is invalid")
};
