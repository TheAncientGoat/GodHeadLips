/* Lips of Suna
 * Copyright© 2007-2010 Lips of Suna development team.
 *
 * Lips of Suna is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as
 * published by the Free Software Foundation, either version 3 of the
 * License, or (at your option) any later version.
 *
 * Lips of Suna is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with Lips of Suna. If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef __MAIN_EXTENSION_H__
#define __MAIN_EXTENSION_H__

#include <lipsofsuna/system.h>

#define LIMAI_EXTENSION_VERSION 0xFFFFFFFF

typedef struct _LIMaiExtensionInfo LIMaiExtensionInfo;
struct _LIMaiExtensionInfo
{
	int version;
	const char* name;
	void* init;
	void* free;
};

typedef struct _LIMaiExtension LIMaiExtension;
struct _LIMaiExtension
{
	LIMaiExtensionInfo* info;
	LIMaiExtension* next;
	LISysModule* module;
	char name[64];
	void* object;
};

LIAPICALL (LIMaiExtensionInfo*, limai_extension_get_builtin, (
	const char* name));

#endif
