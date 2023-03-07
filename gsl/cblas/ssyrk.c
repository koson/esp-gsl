#include <gsl/gsl_math.h>
#include <gsl/gsl_cblas.h>

#include "../../gsl/cblas/cblas.h"
#include "../../gsl/cblas/error_cblas_l3.h"

void
cblas_ssyrk (const enum CBLAS_ORDER Order, const enum CBLAS_UPLO Uplo,
             const enum CBLAS_TRANSPOSE Trans, const int N, const int K,
             const float alpha, const float *A, const int lda,
             const float beta, float *C, const int ldc)
{
#define BASE float
#include "../../gsl/cblas/source_syrk_r.h"
#undef BASE
}
