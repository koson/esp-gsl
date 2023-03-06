#include <gsl/gsl_math.h>
#include <gsl/gsl_cblas.h>

#include "../../gsl/cblas/cblas.h"

void
cblas_caxpy (const int N, const void *alpha, const void *X, const int incX,
             void *Y, const int incY)
{
#define BASE float
#include "../../gsl/cblas/source_axpy_c.h"
#undef BASE
}
