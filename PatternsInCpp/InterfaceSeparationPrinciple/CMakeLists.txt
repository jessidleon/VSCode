cmake_minimum_required(VERSION 3.0.0)
project(isp VERSION 0.1.0)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED TRUE)
include_directories(include)

include(CTest)
enable_testing()

add_executable(
  isp 
    src/main.cpp
    src/document.cpp
    src/printerScanner.cpp
    src/purePrinter.cpp
)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)