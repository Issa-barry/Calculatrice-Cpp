cmake_minimum_required(VERSION 3.1.0)
project(calc CXX)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED on)
set(CMAKE_CXX_EXTENSIONS off)

find_package(Qt5Widgets REQUIRED)
set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)

if(CMAKE_CXX_COMPILER_ID MATCHES "GNU")
    add_compile_options(-Wall -Wpedantic)
endif()

add_executable(calc traducteur.cpp calc.cpp vue.cpp main.cpp)
target_link_libraries(calc Qt5::Widgets)
