cmake_minimum_required(VERSION 3.2)
project(lab2)
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS_OFF OFF)

add_executable(
    ${PROJECT_NAME}
    header/Uncopyable.hpp
    header/Composed.hpp
    source/Composed.cpp
    header/Context.hpp
    source/Context.cpp
    header/Base.hpp
    source/Base.cpp
    header/Derived.hpp
    source/Derived.cpp
    source/main.cpp
)