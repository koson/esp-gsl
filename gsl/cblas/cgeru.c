#include <gsl/gsl_math.h>
#include <gsl/gsl_cblas.h>

#include "../../gsl/cblas/cblas.h"
#include "../../gsl/cblas/error_cblas_l2.h"

void
cblas_cgeru (const enum CBLAS_ORDER order, const int M, const int N,
             const void *alpha, const void *X, const int incX, const void *Y,
             const int incY, void *A, const int lda)
{
#define BASE float
#include "../../gsl/cblas/source_geru.h"
#undef BASE
}
