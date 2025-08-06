cmake_minimum_required(VERSION 3.20.0)

project(DSPS VERSION 0.0.0 LANGUAGES C CXX)

include(cmake/macro.cmake)

add_subdirectory(DS)
add_subdirectory(PS)
