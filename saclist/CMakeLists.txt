# Minimum CMake
cmake_minimum_required(VERSION 2.8,9)

# Project SourceFiles
file(GLOB PROBLEM_SOURCES "src/*")
file(GLOB TEST_SOURCES "test/*")

include_directories("inc")

add_executable("saclist-test" ${PROBLEM_SOURCES} ${TEST_SOURCES})
target_link_libraries("saclist-test" ${Boost_LIBRARIES})

add_library("saclist" STATIC ${PROBLEM_SOURCES})
