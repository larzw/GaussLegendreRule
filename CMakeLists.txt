
cmake_minimum_required(VERSION 2.8)
project(GaussLegendreRule)

set(src src/GaussLegendreRule.cpp)
set(test test/TestGaussLegendreRule.cpp)
set(include include/GaussLegendreRule.hpp)
include_directories(include)

set(Boost_USE_STATIC_LIBS on)
find_package(Boost COMPONENTS unit_test_framework REQUIRED)
include_directories(${Boost_INCLUDE_DIR})

if ("${CMAKE_CXX_COMPILER_ID}" STREQUAL "Clang")
	add_definitions(-std=c++11 -stdlib=libc++ -O3 -Wall)
elseif ("${CMAKE_CXX_COMPILER_ID}" STREQUAL "GNU")
	add_definitions(-std=c++11 -O3 -Wall)
endif()

add_executable(exe ${src} ${test} ${include})
target_link_libraries(exe ${Boost_UNIT_TEST_FRAMEWORK_LIBRARY})

enable_testing()
add_test(TestGaussLegendreRule exe)
