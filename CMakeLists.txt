project(test_cross_platform)
set(SOURCE test_cross_platform/main.cpp)
set(HEADER test_cross_platform/my_class.hpp)
add_executable(test_cross_platform ${SOURCE} ${HEADER})
