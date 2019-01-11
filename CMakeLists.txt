cmake_minimum_required(VERSION 3.2)
project(Lec2b)

# Set compiler flags
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -Wall -Werror -Wextra -pedantic -pedantic-errors")

set(SOURCE_FILES StackBig3.cpp StackBig3Main.cpp)
add_executable(StackBig3 ${SOURCE_FILES})

set(SOURCE_FILES AssignCopy.cpp)
add_executable(AssignCopy ${SOURCE_FILES})
