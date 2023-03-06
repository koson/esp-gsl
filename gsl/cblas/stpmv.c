#include <gsl/gsl_math.h>
#include <gsl/gsl_cblas.h>

#include "../../gsl/cblas/cblas.h"
#include "../../gsl/cblas/error_cblas_l2.h"

void
cblas_stpmv (const enum CBLAS_ORDER order, const enum CBLAS_UPLO Uplo,
             const enum CBLAS_TRANSPOSE TransA, const enum CBLAS_DIAG Diag,
             const int N, const float *Ap, float *X, const int incX)
{
#define BASE float
#include "../../gsl/cblas/source_tpmv_r.h"
#undef BASE
}
