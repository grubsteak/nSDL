/*
	SDL - Simple DirectMedia Layer
	Copyright (C) 1997-2012 Sam Lantinga

	This library is free software; you can redistribute it and/or
	modify it under the terms of the GNU Lesser General Public
	License as published by the Free Software Foundation; either
	version 2.1 of the License, or (at your option) any later version.

	This library is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
	Lesser General Public License for more details.

	You should have received a copy of the GNU Lesser General Public
	License along with this library; if not, write to the Free Software
	Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA

	Sam Lantinga
	slouken@libsdl.org
*/

#ifndef _SDL_config_tinspire_h
#define _SDL_config_tinspire_h

#include <os.h>

/* General platform specific identifiers */
#include "SDL_platform.h"

#define NSP_COLOR_LCD	1
#define NSP_DEBUG	1

/* A few convenience macros */
#define NSP_ARRAY_SIZE(array) (sizeof(array) / sizeof(array[0]))
#define NSP_NL_RELOCDATA(ptr, size) nl_relocdata((unsigned int *)ptr, size)
#define NSP_SIZE_BYTES(size) (size << 1)
#ifdef NSP_DEBUG
#define NSP_DPRINT(fmt, args...) fprintf(stderr, "[NSP] %s():%d: " fmt, \
										 __FUNCTION__, __LINE__, ## args)
#else
#define NSP_DPRINT(fmt, ...)
#endif

#define SDL_HAS_64BIT_TYPE	1

/* Endianness */
#define SDL_BYTEORDER	1234

/* Useful headers */
#define HAVE_STDIO_H	1
#define HAVE_STDLIB_H	1
#define HAVE_STDARG_H	1
#define HAVE_STRING_H	1
#define HAVE_CTYPE_H	1
/* #undef HAVE_ALLOCA_H
#undef HAVE_SYS_TYPES_H
#undef STDC_HEADERS
#undef HAVE_MALLOC_H
#undef HAVE_MEMORY_H
#undef HAVE_STRINGS_H
#undef HAVE_INTTYPES_H
#undef HAVE_STDINT_H
#undef HAVE_MATH_H
#undef HAVE_ICONV_H
#undef HAVE_SIGNAL_H
#undef HAVE_ALTIVEC_H */

/* C library functions */
#define HAVE_MALLOC	1
#define HAVE_CALLOC	1
#define HAVE_REALLOC	1
#define HAVE_FREE	1
#define HAVE_MEMSET	1
#define HAVE_MEMCPY	1
#define HAVE_MEMMOVE	1
#define HAVE_MEMCMP	1
#define HAVE_STRLEN	1
#define HAVE_STRCHR	1
#define HAVE_STRSTR	1
#define HAVE_STRTOL	1
#define HAVE_STRTOUL	1
#define HAVE_STRTOD	1
#define HAVE_ATOI	1
#define HAVE_ATOF	1
#define HAVE_STRCMP	1
#define HAVE_STRNCMP	1
/* #undef HAVE_ALLOCA
#ifndef _WIN32
#undef HAVE_GETENV
#undef HAVE_PUTENV
#undef HAVE_UNSETENV
#endif
#undef HAVE_QSORT
#undef HAVE_ABS
#undef HAVE_BCOPY 
#undef HAVE_STRLCPY
#undef HAVE_STRLCAT
#undef HAVE_STRDUP
#undef HAVE__STRREV
#undef HAVE__STRUPR
#undef HAVE__STRLWR
#undef HAVE_INDEX
#undef HAVE_RINDEX
#undef HAVE_STRRCHR
#undef HAVE_ITOA
#undef HAVE__LTOA
#undef HAVE__UITOA
#undef HAVE__ULTOA
#undef HAVE__I64TOA
#undef HAVE__UI64TOA
#undef HAVE_STRTOLL
#undef HAVE_STRTOULL
#undef HAVE__STRICMP
#undef HAVE_STRCASECMP
#undef HAVE__STRNICMP
#undef HAVE_STRNCASECMP
#undef HAVE_SSCANF
#undef HAVE_SNPRINTF
#undef HAVE_VSNPRINTF
#undef HAVE_ICONV
#undef HAVE_SIGACTION
#undef HAVE_SA_SIGACTION
#undef HAVE_SETJMP
#undef HAVE_NANOSLEEP
#undef HAVE_CLOCK_GETTIME
#undef HAVE_GETPAGESIZE
#undef HAVE_MPROTECT
#undef HAVE_SEM_TIMEDWAIT */

/* Allow disabling of core subsystems */
#define SDL_AUDIO_DISABLED	1
#define SDL_CDROM_DISABLED	1
#define SDL_LOADSO_DISABLED	1
#define SDL_THREADS_DISABLED	1

/* Enable various input drivers */
/* #define SDL_JOYSTICK_TINSPIRE	1 */
#define SDL_JOYSTICK_DUMMY	1

/* Enable various timer systems */
#define SDL_TIMER_TINSPIRE	1

/* Enable various video drivers */
#define SDL_VIDEO_DRIVER_TINSPIRE	1

/* Enable assembly routines */
/* #define SDL_ASSEMBLY_ROUTINES	1 */

#endif /* _SDL_config_tinspire_h */