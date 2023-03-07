#include <gsl/gsl_math.h>
#include <gsl/gsl_cblas.h>

#include "../../gsl/cblas/cblas.h"
#include "../../gsl/cblas/error_cblas_l3.h"

void
cblas_zherk (const enum CBLAS_ORDER Order, const enum CBLAS_UPLO Uplo,
             const enum CBLAS_TRANSPOSE Trans, const int N, const int K,
             const double alpha, const void *A, const int lda,
             const double beta, void *C, const int ldc)
{
#define BASE double
#include "../../gsl/cblas/source_herk.h"
#undef BASE
}
