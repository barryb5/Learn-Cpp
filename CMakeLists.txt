cmake_minimum_required (VERSION 3.1.0)
project (teach)

# Set Configuration specific DEFINES
IF ( CMAKE_BUILD_TYPE STREQUAL "Debug" ) 
  add_definitions ( "-DUSE_PERFORMANCE_DATA")
  add_definitions ( "-DDEBUG " )
  add_definitions ( "-D_DEBUG " )
  add_definitions ( "-std=c++20")
  add_definitions ( "-rdynamic ")
  add_definitions ( "-g ")

  add_definitions ( "-Wno-deprecated ")
  add_definitions ( "-Wno-unknown-pragmas ")

ELSE()
  add_definitions ( "-Wall ")
  add_definitions ( "-DNDEBUG " )
  add_definitions ( "-DUSE_PERFORMANCE_DATA")
  add_definitions ( "-O3 ")
  add_definitions ( "-std=c++20")
  add_definitions ( "-march=native ")
  add_definitions ( "-mtune=native ")
  add_definitions ( "-Wno-deprecated ")
  add_definitions ( "-Wno-unknown-pragmas ")
  add_definitions ( "-rdynamic ")
  add_definitions ( "-g ")
ENDIF()


include_directories (/usr/include)
include_directories (/usr/local/include)

link_directories (/usr/lib)
link_directories (/usr/local/lib)


add_executable (ex01 
    ex01/main.cpp)

add_executable (ex02 
    ex02/main.cpp)

add_executable (ex03 
    ex03/main.cpp)

add_executable (ex04 
    ex04/main.cpp)

add_executable (ex05 
    ex05/main.cpp)

add_executable (ex06 
    ex06/main.cpp)

add_executable (ex07
    ex07/main.cpp)
    
add_executable (ex08
    ex08/main.cpp)

add_executable (ex09
    ex09/main.cpp)
