/* permutation/gsl_permute_matrix_uint.h
 * 
 * Copyright (C) 2016 Patrick Alken
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or (at
 * your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
 */

#ifndef __GSL_PERMUTE_MATRIX_UINT_H__
#define __GSL_PERMUTE_MATRIX_UINT_H__

#include <stdlib.h>
#include <gsl_errno.h>
#include <gsl_permutation.h>
#include <gsl_matrix_uint.h>

#undef __BEGIN_DECLS
#undef __END_DECLS
#ifdef __cplusplus
# define __BEGIN_DECLS extern "C" {
# define __END_DECLS }
#else
# define __BEGIN_DECLS /* empty */
# define __END_DECLS /* empty */
#endif

__BEGIN_DECLS

int gsl_permute_matrix_uint (const gsl_permutation * p, gsl_matrix_uint * A);

__END_DECLS

#endif /* __GSL_PERMUTE_MATRIX_UINT_H__ */
