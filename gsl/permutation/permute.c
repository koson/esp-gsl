#include <config.h>
#include <gsl_errno.h>
#include <gsl_vector.h>
#include <gsl_matrix.h>
#include <gsl_permute.h>
#include <gsl_permute_vector.h>
#include <gsl_permute_matrix.h>

#define BASE_GSL_COMPLEX_LONG
#include "../../gsl/templates_on.h"
#include "../../gsl/permutation/permute_source.c"
#include "../../gsl/templates_off.h"
#undef  BASE_GSL_COMPLEX_LONG

#define BASE_GSL_COMPLEX
#include "../../gsl/templates_on.h"
#include "../../gsl/permutation/permute_source.c"
#include "../../gsl/templates_off.h"
#undef  BASE_GSL_COMPLEX

#define BASE_GSL_COMPLEX_FLOAT
#include "../../gsl/templates_on.h"
#include "../../gsl/permutation/permute_source.c"
#include "../../gsl/templates_off.h"
#undef  BASE_GSL_COMPLEX_FLOAT

#define BASE_LONG_DOUBLE
#include "../../gsl/templates_on.h"
#include "../../gsl/permutation/permute_source.c"
#include "../../gsl/templates_off.h"
#undef  BASE_LONG_DOUBLE

#define BASE_DOUBLE
#include "../../gsl/templates_on.h"
#include "../../gsl/permutation/permute_source.c"
#include "../../gsl/templates_off.h"
#undef  BASE_DOUBLE

#define BASE_FLOAT
#include "../../gsl/templates_on.h"
#include "../../gsl/permutation/permute_source.c"
#include "../../gsl/templates_off.h"
#undef  BASE_FLOAT

#define BASE_ULONG
#include "../../gsl/templates_on.h"
#include "../../gsl/permutation/permute_source.c"
#include "../../gsl/templates_off.h"
#undef  BASE_ULONG

#define BASE_LONG
#include "../../gsl/templates_on.h"
#include "../../gsl/permutation/permute_source.c"
#include "../../gsl/templates_off.h"
#undef  BASE_LONG

#define BASE_UINT
#include "../../gsl/templates_on.h"
#include "../../gsl/permutation/permute_source.c"
#include "../../gsl/templates_off.h"
#undef  BASE_UINT

#define BASE_INT
#include "../../gsl/templates_on.h"
#include "../../gsl/permutation/permute_source.c"
#include "../../gsl/templates_off.h"
#undef  BASE_INT

#define BASE_USHORT
#include "../../gsl/templates_on.h"
#include "../../gsl/permutation/permute_source.c"
#include "../../gsl/templates_off.h"
#undef  BASE_USHORT

#define BASE_SHORT
#include "../../gsl/templates_on.h"
#include "../../gsl/permutation/permute_source.c"
#include "../../gsl/templates_off.h"
#undef  BASE_SHORT

#define BASE_UCHAR
#include "../../gsl/templates_on.h"
#include "../../gsl/permutation/permute_source.c"
#include "../../gsl/templates_off.h"
#undef  BASE_UCHAR

#define BASE_CHAR
#include "../../gsl/templates_on.h"
#include "../../gsl/permutation/permute_source.c"
#include "../../gsl/templates_off.h"
#undef  BASE_CHAR
