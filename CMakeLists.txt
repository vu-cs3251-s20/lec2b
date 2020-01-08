cmake_minimum_required(VERSION 3.12)
project(Lec2b)

# Set compiler flags
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Werror -Wextra -pedantic -pedantic-errors -g")

set(SOURCE_FILES StackBig3.cpp StackBig3Main.cpp)
add_executable(StackBig3 ${SOURCE_FILES})

set(SOURCE_FILES AssignCopy.cpp)
add_executable(AssignCopy ${SOURCE_FILES})
