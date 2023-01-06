cmake_minimum_required(VERSION 3.0.0)

set(CMAKE_C_COMPILER clang)
set(CMAKE_CXX_COMPILER clang++)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -stdlib=libc++ -lc++abi -fexperimental-library")
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

project(1-6 VERSION 0.1.0)

add_executable(1-6 AirlineTicketTest.cpp AirlineTicket.h AirlineTicket.cpp)
