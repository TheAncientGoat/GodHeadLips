/* Lips of Suna
 * Copyright© 2007-2011 Lips of Suna development team.
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

#ifndef __RENDER32_UNIFORM_H__
#define __RENDER32_UNIFORM_H__

#include <lipsofsuna/video.h>
#include "render-types.h"

enum
{
	LIREN_LIGHTTYPE_DISABLED,
	LIREN_LIGHTTYPE_DIRECTIONAL,
	LIREN_LIGHTTYPE_POINT,
	LIREN_LIGHTTYPE_SPOT,
	LIREN_LIGHTTYPE_SPOTSHADOW
};

enum
{
	LIREN_SAMPLER_DIFFUSE_TEXTURE_0,
	LIREN_SAMPLER_DIFFUSE_TEXTURE_1,
	LIREN_SAMPLER_DIFFUSE_TEXTURE_2,
	LIREN_SAMPLER_DIFFUSE_TEXTURE_3,
	LIREN_SAMPLER_BUFFER_TEXTURE,
	LIREN_SAMPLER_CUBE_TEXTURE,
	LIREN_SAMPLER_NOISE_TEXTURE,
	LIREN_SAMPLER_SHADOW_TEXTURE
};

enum
{
	LIREN_UNIFORM_CAMERA_POSITION,
	LIREN_UNIFORM_MATERIAL_DIFFUSE,
	LIREN_UNIFORM_MATERIAL_PARAM0,
	LIREN_UNIFORM_MATERIAL_SHININESS,
	LIREN_UNIFORM_MATERIAL_SPECULAR,
	LIREN_UNIFORM_MATRIX_MODEL,
	LIREN_UNIFORM_MATRIX_MODELVIEW,
	LIREN_UNIFORM_MATRIX_MODELVIEW_INVERSE,
	LIREN_UNIFORM_MATRIX_MODELVIEW_PROJECTION,
	LIREN_UNIFORM_MATRIX_NORMAL,
	LIREN_UNIFORM_MATRIX_PROJECTION,
	LIREN_UNIFORM_MATRIX_PROJECTION_INVERSE,
	LIREN_UNIFORM_TIME,
	LIREN_UNIFORM_LIGHT0_AMBIENT,
	LIREN_UNIFORM_LIGHT1_AMBIENT,
	LIREN_UNIFORM_LIGHT2_AMBIENT,
	LIREN_UNIFORM_LIGHT3_AMBIENT,
	LIREN_UNIFORM_LIGHT4_AMBIENT,
	LIREN_UNIFORM_LIGHT0_DIFFUSE,
	LIREN_UNIFORM_LIGHT1_DIFFUSE,
	LIREN_UNIFORM_LIGHT2_DIFFUSE,
	LIREN_UNIFORM_LIGHT3_DIFFUSE,
	LIREN_UNIFORM_LIGHT4_DIFFUSE,
	LIREN_UNIFORM_LIGHT0_EQUATION,
	LIREN_UNIFORM_LIGHT1_EQUATION,
	LIREN_UNIFORM_LIGHT2_EQUATION,
	LIREN_UNIFORM_LIGHT3_EQUATION,
	LIREN_UNIFORM_LIGHT4_EQUATION,
	LIREN_UNIFORM_LIGHT0_POSITION,
	LIREN_UNIFORM_LIGHT1_POSITION,
	LIREN_UNIFORM_LIGHT2_POSITION,
	LIREN_UNIFORM_LIGHT3_POSITION,
	LIREN_UNIFORM_LIGHT4_POSITION,
	LIREN_UNIFORM_LIGHT0_POSITION_PREMULT,
	LIREN_UNIFORM_LIGHT1_POSITION_PREMULT,
	LIREN_UNIFORM_LIGHT2_POSITION_PREMULT,
	LIREN_UNIFORM_LIGHT3_POSITION_PREMULT,
	LIREN_UNIFORM_LIGHT4_POSITION_PREMULT,
	LIREN_UNIFORM_LIGHT0_SPECULAR,
	LIREN_UNIFORM_LIGHT1_SPECULAR,
	LIREN_UNIFORM_LIGHT2_SPECULAR,
	LIREN_UNIFORM_LIGHT3_SPECULAR,
	LIREN_UNIFORM_LIGHT4_SPECULAR,
	LIREN_UNIFORM_COUNT
};

#endif
