cmake_minimum_required(VERSION 3.4.1)
project(Awesomelibrary)

set (CMAKE_VERBOSE_MAKEFILE ON)
set (CMAKE_CXX_STANDARD 11)

add_library(react-native-awesomelibrary            SHARED
            ../cpp/react-native-awesomelibrary.cpp
            cpp-adapter.cpp
)

# Specifies a path to native header files.
include_directories(
            ../cpp
)
