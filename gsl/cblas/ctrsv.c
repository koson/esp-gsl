#include <gsl/gsl_math.h>
#include <gsl/gsl_cblas.h>
#include "hypot.c"

#include "../../gsl/cblas/cblas.h"
#include "../../gsl/cblas/error_cblas_l2.h"
#include "../../gsl/cblas/hypot.c"

void
cblas_ctrsv (const enum CBLAS_ORDER order, const enum CBLAS_UPLO Uplo,
             const enum CBLAS_TRANSPOSE TransA, const enum CBLAS_DIAG Diag,
             const int N, const void *A, const int lda, void *X,
             const int incX)
{
#define BASE float
#include "../../gsl/cblas/source_trsv_c.h"
#undef BASE
}
