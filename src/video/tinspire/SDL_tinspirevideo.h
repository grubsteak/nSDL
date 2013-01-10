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

#include <os.h>

#include "SDL_config.h"

#ifndef _SDL_tinspirevideo_h
#define _SDL_tinspirevideo_h

#include "../SDL_sysvideo.h"

/* Hidden "this" pointer for the video functions */
#define _THIS	SDL_VideoDevice *this

#define NSP_BUF_SIZE	512

#define NSP_RMASK16 0xF800
#define NSP_GMASK16 0x07E0
#define NSP_BMASK16 0x001F

/* Private display data */

struct SDL_PrivateVideoData {
	int w, h;
	int offset;
	int win_x;
	void *buffer;
	int cx;
};

#endif /* _SDL_tinspirevideo_h */
