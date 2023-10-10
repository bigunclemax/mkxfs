cmake_minimum_required(VERSION 3.21)
project(mkxfs C)

set(CMAKE_C_STANDARD 99)

include_directories(/usr/local/include/)
link_directories(/usr/local/lib/)

include(mkxfs/CMakeLists.txt)
include(dumpifs/CMakeLists.txt)
