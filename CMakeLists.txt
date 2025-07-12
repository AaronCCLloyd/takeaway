cmake_minimum_required(VERSION 3.10.0)
project(takeaway VERSION 0.1.0 LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(PkgConfig REQUIRED)
pkg_check_modules(LIBTINS REQUIRED libtins)

add_executable(takeaway main.cpp)

target_include_directories(takeaway PRIVATE ${LIBTINS_INCLUDE_DIRS})
target_link_libraries(takeaway ${LIBTINS_LIBRARIES})

include(CTest)
enable_testing()

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
