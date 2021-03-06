FIND_LIBRARY(SWIFTEN_LIBRARY NAMES Swiften)
FIND_PATH(SWIFTEN_INCLUDE_DIR NAMES "Swiften.h" PATH_SUFFIXES libSwiften )


if( SWIFTEN_LIBRARY AND SWIFTEN_INCLUDE_DIR )
    set( SWIFTEN_INCLUDE_DIR ${SWIFTEN_INCLUDE_DIR}/.. )
    message( STATUS "Found libSwiften: ${SWIFTEN_LIBRARY}, ${SWIFTEN_INCLUDE_DIR}")
    set( SWIFTEN_FOUND 1 )
else( SWIFTEN_LIBRARY AND SWIFTEN_INCLUDE_DIR )
    message( FATAL_ERROR "Could NOT find libSwiften" )
endif( SWIFTEN_LIBRARY AND SWIFTEN_INCLUDE_DIR )
