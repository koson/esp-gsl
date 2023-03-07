#include <gsl/gsl_math.h>
#include <gsl/gsl_cblas.h>

#include "../../gsl/cblas/cblas.h"

void
cblas_srotg (float *a, float *b, float *c, float *s)
{
#define BASE float
#include "../../gsl/cblas/source_rotg.h"
#undef BASE
}
