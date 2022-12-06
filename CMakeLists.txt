cmake_minimum_required(VERSION 3.2)
project(lab4)
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS_OFF OFF)
add_executable(
    ${PROJECT_NAME}
    header/Uncopyable.hpp
    header/Resource.hpp
    header/ResourceFactory.hpp
    header/LocalResource.hpp
    header/RemoteResource.hpp
    header/LocalResourceFactory.hpp
    header/RemoteResourceFactory.hpp
    header/ResourceManager.hpp
    source/Resource.cpp
    source/LocalResource.cpp
    source/RemoteResource.cpp
    source/LocalResourceFactory.cpp
    source/RemoteResourceFactory.cpp
    source/ResourceManager.cpp
    source/main.cpp
)