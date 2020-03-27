cmake_minimum_required(VERSION 3.10)
PROJECT(SORT CXX)


SET(CMAKE_BUILD_TYPE "Debug")
SET(CMAKE_CXX_FLAGS_DEBUG "$ENV{CXXFLAGS} -O0 -Wall -g2 -ggdb")
SET(CMAKE_CXX_FLAGS_RELEASE "$ENV{CXXFLAGS} -O3 -Wall")



#SET(SRC_LIST hello.cpp)
include_directories(src/)
include_directories(include/)

file(GLOB _srcFiles "src/*.cpp")

#AUX_SOURCE_DIRECTORY(_srcFiles SRC_LIST)

MESSAGE(STATUS "This is BINARY dir: " ${SORT_BINARY_DIR})
MESSAGE(STATUS "This is SOURCE dir: " ${SORT_BINARY_DIR})
#MESSAGE(STATUS "This is message" ${SRC_LIST})
MESSAGE(STATUS "This is message: " ${_srcFiles})

SET(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)

#ADD_EXECUTABLE(sort ${SRC_LIST})
ADD_EXECUTABLE(sort  rb_main.cpp ${_srcFiles})
#ADD_SUBDIRECTORY(src bin)

