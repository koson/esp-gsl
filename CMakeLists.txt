set(COMPONENT_SRCDIRS 
	"gsl/blas"
	"gsl/specfunc"
                      )

set(COMPONENT_ADD_INCLUDEDIRS
	"."
	"gsl"
    )
    
set(COMPONENT_SRCEXCLUDE_1
	"specfunc/legendre_source.c"
    )

idf_component_register(
  SRC_DIRS "${COMPONENT_SRCDIRS}"
  INCLUDE_DIRS "${COMPONENT_ADD_INCLUDEDIRS}"
  EXCLUDE_SRCS "${COMPONENT_SRCEXCLUDE_1}"
)