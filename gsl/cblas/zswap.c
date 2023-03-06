#include <gsl/gsl_math.h>
#include <gsl/gsl_cblas.h>

#include "../../gsl/cblas/cblas.h"

void
cblas_zswap (const int N, void *X, const int incX, void *Y, const int incY)
{
#define BASE double
#include "../../gsl/cblas/source_swap_c.h"
#undef BASE
}
