set(COMPONENT_SRCDIRS 
	"gsl/blas"
	"gsl/specfunc"
                      )

set(COMPONENT_ADD_INCLUDEDIRS
	"."
	"gsl"
    )


idf_component_register(
  SRC_DIRS "${COMPONENT_SRCDIRS}"
  INCLUDE_DIRS "${COMPONENT_ADD_INCLUDEDIRS}"
  EXCLUDE_SRCS 
	"specfunc/legendre_source.c"
)