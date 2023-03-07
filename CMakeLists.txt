set(COMPONENT_SRCDIRS 
	"gsl/blas"
	"gsl/specfunc"
	"gsl/err"
                      )

set(COMPONENT_ADD_INCLUDEDIRS
	"."
	"gsl"
    )

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -WWerror=unused-but-set-parameter")

idf_component_register(
  SRC_DIRS "${COMPONENT_SRCDIRS}"
  INCLUDE_DIRS "${COMPONENT_ADD_INCLUDEDIRS}"
  EXCLUDE_SRCS 
	"specfunc/legendre_source.c"
)