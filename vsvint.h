/**
 * @file vsvint.h
 * @brief Base include for the internal library, or extensions of the internal library.
 * @details The header file for internal use in the Very Stupid Vectors library.
 * @author Anonymous
 * @date 2026-10-27
 */
/*
   Very Stupid Vectors

    libvsv - the stupid vector library
    Copyright (C) 2026  The libVSV Authors

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Lesser General Public
    License as published by the Free Software Foundation; either
    version 2.1 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public
    License along with this library; if not, see <https://www.gnu.org/licenses/>.
 */

#include <stddef.h>

#define VSV_INTERNAL

/**
 * @struct _vsv_vec
 * @brief Opaque "vector" structure used in pointers
 * @note Refrain from accessing this struct
 *       directly, as it is subject to change.
 */
typedef struct _vsv_vec {
	void* ptr;
	size_t count;
	size_t allocd;
	size_t elem;
} VSV_VEC;
