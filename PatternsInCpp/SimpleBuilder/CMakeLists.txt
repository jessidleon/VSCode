cmake_minimum_required(VERSION 3.0.0)
project(SimpleBuilder VERSION 0.1.0)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED TRUE)

include(CTest)
enable_testing()

include_directories(src/include)

add_executable(
  SimpleBuilder 
    src/main.cpp
    src/htmlElement.cpp
  )

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
