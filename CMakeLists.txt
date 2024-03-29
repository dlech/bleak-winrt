cmake_minimum_required(VERSION 3.16)
project(bleak_winrt)

file(GLOB sources "${CMAKE_CURRENT_SOURCE_DIR}/pywinrt/${CMAKE_PROJECT_NAME}/src/*.cpp")
foreach(file ${sources})
    message(${file})
endforeach()

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_MSVC_RUNTIME_LIBRARY "MultiThreaded$<$<CONFIG:Debug>:Debug>")

# TODO: re-enable /GL and /LTCG when we get a bigger build machine
add_compile_options(/await /bigobj /GR- /permissive-)

# strip suffix to allow support for prerelease version
string(REGEX MATCH "^[0-9]\\.[0-9]+(\\.[0-9]+)?" PYTHON_BASE_VERSION ${PYTHON_VERSION_STRING})

find_package (Python3 ${PYTHON_BASE_VERSION} EXACT COMPONENTS Interpreter Development)

Python3_add_library (_winrt MODULE ${sources})
set_target_properties(_winrt PROPERTIES LIBRARY_OUTPUT_NAME_DEBUG _winrt_d)
target_precompile_headers(_winrt PRIVATE <winrt/base.h> [["pybase.h"]])
target_include_directories(_winrt PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/cppwinrt" "${CMAKE_CURRENT_SOURCE_DIR}/pywinrt/${CMAKE_PROJECT_NAME}/src")
target_link_libraries(_winrt PRIVATE onecore)

string(REGEX REPLACE "/GR" "" CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS}")
# TODO: re-enable /GL and /LTCG when we get a bigger build machine
# string(APPEND CMAKE_MODULE_LINKER_FLAGS " /LTCG:STATUS")

if (CMAKE_CXX_COMPILER_VERSION VERSION_GREATER_EQUAL "19.20.27404.0")
    string(APPEND CMAKE_CXX_FLAGS " /d2FH4")
endif()

install(TARGETS _winrt DESTINATION "pywinrt/${CMAKE_PROJECT_NAME}")
