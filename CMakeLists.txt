cmake_minimum_required(VERSION 2.8)
project(SeriesTemporelles CXX)

# Prefix
if (NOT PREFIX)
    set(PREFIX ${CMAKE_CURRENT_BINARY_DIR})
endif (NOT PREFIX)
set(CMAKE_INSTALL_PREFIX ${PREFIX} CACHE STRING "Installation prefix." FORCE)

if (CXX)
    set(CMAKE_CXX_COMPILER ${CXX})
endif (CXX)

# Release or Debug
if (NOT CMAKE_BUILD_TYPE)
    message(STATUS "Setting build type to 'Debug' as none was specified.")
    set(CMAKE_BUILD_TYPE Debug CACHE STRING "Choose the type of build." FORCE)
endif ()

find_package(GSL REQUIRED) # imports GSL::gsl
# set(SOURCES MonteCarlo.cpp main.cpp BSCall.cpp Exo1.cpp)
# set(HEADERS MonteCarlo.hpp BSCall.hpp Exo1.hpp)

set(GSL_INC -I/usr/include)
set(GSL_LIB -L/usr/lib/x86_64-linux-gnu -lgsl -lgslcblas -lm)


add_executable(bruitBlanc ${GSL_INC} src/testBruitBlanc.cpp src/cEpsilonGaussian.hpp src/cEpsilonGaussian.cpp  ${GSL_LIB})
target_link_libraries(bruitBlanc)

# Print compiler flags
get_directory_property(DirDefs COMPILE_DEFINITIONS)
message(STATUS "COMPILE_DEFINITIONS = ${DirDefs}")
if (${CMAKE_BUILD_TYPE} STREQUAL "Release")
    message(STATUS "C++ Flags: ${CMAKE_CXX_FLAGS} ${CMAKE_CXX_FLAGS_RELEASE} ${CMAKE_LINKER_EXE_FLAGS}" )
else()
    message(STATUS "C++ Flags: ${CMAKE_CXX_FLAGS} ${CMAKE_CXX_FLAGS_DEBUG} ${CMAKE_LINKER_EXE_FLAGS}" )
endif()

