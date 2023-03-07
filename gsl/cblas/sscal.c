#include <gsl/gsl_math.h>
#include <gsl/gsl_cblas.h>

#include "../../gsl/cblas/cblas.h"

void
cblas_sscal (const int N, const float alpha, float *X, const int incX)
{
#define BASE float
#include "../../gsl/cblas/source_scal_r.h"
#undef BASE
}
