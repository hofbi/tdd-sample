cmake_minimum_required(VERSION 3.11)
project(tdd_sample)

set(CMAKE_MODULE_PATH ${PROJECT_SOURCE_DIR}/cmake)

include(FetchContent)
include(UnitTesting)

# Task
add_executable(unittests fizzbuzz_test.cpp)

target_link_libraries(unittests PRIVATE gtest gtest_main)

gtest_add_tests(TARGET unittests)

# Solution
add_executable(unittests_solution fizzbuzz_solution.cpp)

target_link_libraries(unittests_solution PRIVATE gtest gtest_main)

gtest_add_tests(TARGET unittests_solution)
