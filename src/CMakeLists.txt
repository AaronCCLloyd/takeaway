find_package(PkgConfig REQUIRED)
pkg_check_modules(LIBTINS REQUIRED libtins)

add_executable(takeaway main.cpp)

target_include_directories(takeaway PRIVATE ${LIBTINS_INCLUDE_DIRS})
target_link_libraries(takeaway ${LIBTINS_LIBRARIES})