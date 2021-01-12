cmake_minimum_required(VERSION 3.17.2)
project(Practica4)

set(CMAKE_EXE_LINKER_FLAGS "-static-libgcc -static-libstdc++")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ./../bin/)

find_package(Threads REQUIRED)  

include_directories(include)

file(GLOB SOURCES "src/*.cpp")

add_executable(practica4 ${SOURCES})

target_link_libraries(practica4 Threads::Threads -static)