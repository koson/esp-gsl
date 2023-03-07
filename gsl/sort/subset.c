/* sort/subset.c  
 *
 * Copyright (C) 2001, 2007 Brian Gough
 *
 * This is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation; either version 3, or (at your option) any
 * later version.
 *
 * This source is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
 * for more details.
 */

#include <config.h>
#include <gsl/gsl_errno.h>
#include <gsl/gsl_vector.h>
#include <gsl/gsl_sort.h>
#include <gsl/gsl_sort_vector.h>

#define BASE_LONG_DOUBLE
#include "../../gsl/templates_on.h"
#include "../../gsl/sort/subset_source.c"
#include "../../gsl/templates_off.h"
#undef  BASE_LONG_DOUBLE

#define BASE_DOUBLE
#include "../../gsl/templates_on.h"
#include "../../gsl/sort/subset_source.c"
#include "../../gsl/templates_off.h"
#undef  BASE_DOUBLE

#define BASE_FLOAT
#include "../../gsl/templates_on.h"
#include "../../gsl/sort/subset_source.c"
#include "../../gsl/templates_off.h"
#undef  BASE_FLOAT

#define BASE_ULONG
#include "../../gsl/templates_on.h"
#include "../../gsl/sort/subset_source.c"
#include "../../gsl/templates_off.h"
#undef  BASE_ULONG

#define BASE_LONG
#include "../../gsl/templates_on.h"
#include "../../gsl/sort/subset_source.c"
#include "../../gsl/templates_off.h"
#undef  BASE_LONG

#define BASE_UINT
#include "../../gsl/templates_on.h"
#include "../../gsl/sort/subset_source.c"
#include "../../gsl/templates_off.h"
#undef  BASE_UINT

#define BASE_INT
#include "../../gsl/templates_on.h"
#include "../../gsl/sort/subset_source.c"
#include "../../gsl/templates_off.h"
#undef  BASE_INT

#define BASE_USHORT
#include "../../gsl/templates_on.h"
#include "../../gsl/sort/subset_source.c"
#include "../../gsl/templates_off.h"
#undef  BASE_USHORT

#define BASE_SHORT
#include "../../gsl/templates_on.h"
#include "../../gsl/sort/subset_source.c"
#include "../../gsl/templates_off.h"
#undef  BASE_SHORT

#define BASE_UCHAR
#include "../../gsl/templates_on.h"
#include "../../gsl/sort/subset_source.c"
#include "../../gsl/templates_off.h"
#undef  BASE_UCHAR

#define BASE_CHAR
#include "../../gsl/templates_on.h"
#include "../../gsl/sort/subset_source.c"
#include "../../gsl/templates_off.h"
#undef  BASE_CHAR
