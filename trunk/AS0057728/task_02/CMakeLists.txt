cmake_minimum_required(VERSION 3.12)

project(task_02_model)

set(CMAKE_CXX_STANDARD 17)

add_executable(task_02 src/main.cpp src/model.cpp)

add_executable(tests test/test.cpp src/model.cpp)