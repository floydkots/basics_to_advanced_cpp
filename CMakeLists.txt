cmake_minimum_required(VERSION 3.9)
project(basics_to_advanced_c++)

set(CMAKE_CXX_STANDARD 11)

add_subdirectory(lib/googletest)
include_directories(lib/googletest/googletest/include)
include_directories(lib/googletest/googlemock/include)

add_executable(basics_to_advanced_c++ main.cpp tests/ppa_01_test.cpp src/basics/topic_2/ppa_01.cpp src/basics/topic_2/ppa_01.h src/basics/topic_3/ppa_02.cpp src/basics/topic_3/ppa_02.h tests/ppa_02_test.cpp src/basics/topic_3/ppa_03.cpp src/basics/topic_3/ppa_03.h tests/ppa_03_test.cpp src/basics/topic_3/gpa_01.cpp src/basics/topic_3/gpa_01.h tests/gpa_01_test.cpp)

target_link_libraries(basics_to_advanced_c++ gtest gtest_main)
