#include <gsl/gsl_math.h>
#include <gsl/gsl_cblas.h>

#include "../../gsl/cblas/cblas.h"

float
cblas_sdot (const int N, const float *X, const int incX, const float *Y,
            const int incY)
{
#define INIT_VAL  0.0
#define ACC_TYPE  float
#define BASE float
#include "../../gsl/cblas/source_dot_r.h"
#undef ACC_TYPE
#undef BASE
#undef INIT_VAL
}
