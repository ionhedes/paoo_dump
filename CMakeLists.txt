cmake_minimum_required(VERSION 3.2)
project(lab3)
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS_OFF OFF)
add_executable(
    ${PROJECT_NAME}
    header/Complex.hpp
    source/Complex.cpp
    header/Engine.hpp
    source/Engine.cpp
    header/ElectricEngine.hpp
    source/ElectricEngine.cpp
    header/Transmission.hpp
    source/Transmission.cpp
    header/Car.hpp
    source/Car.cpp
    source/main.cpp
)