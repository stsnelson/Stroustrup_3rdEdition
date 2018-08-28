cmake_minimum_required(VERSION 2.6)

#Locate GTest
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

#Link TESTWhatToTest.cpp
add_executable(runTests TESTWhatToTest.cpp)
target_link_libraries(runTests ${GTEST_LIBRARIES} pthread)
