/*
 Simple DirectMedia Layer
 Copyright (C) 1997-2025 Sam Lantinga <slouken@libsdl.org>

 This software is provided 'as-is', without any express or implied
 warranty.  In no event will the authors be held liable for any damages
 arising from the use of this software.

 Permission is granted to anyone to use this software for any purpose,
 including commercial applications, and to alter it and redistribute it
 freely, subject to the following restrictions:

 1. The origin of this software must not be misrepresented; you must not
    claim that you wrote the original software. If you use this software
    in a product, an acknowledgment in the product documentation would be
    appreciated but is not required.
 2. Altered source versions must be plainly marked as such, and must not be
    misrepresented as being the original software.
 3. This notice may not be removed or altered from any source distribution.
*/

/* WIKI CATEGORY: Version */

/*
 * SDL_revision.h contains the SDL revision, which might be defined on the
 * compiler command line, or generated right into the header itself by the
 * build system.
 */

#ifndef SDL_revision_h_
#define SDL_revision_h_

/* #undef SDL_VENDOR_INFO */

#if defined(SDL_VENDOR_INFO)
#define SDL_REVISION "release-3.2.16-0-gc9a6709bd (" SDL_VENDOR_INFO ")"
#else
#define SDL_REVISION "release-3.2.16-0-gc9a6709bd"
#endif

#endif /* SDL_revision_h_ */
