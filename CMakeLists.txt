cmake_minimum_required(VERSION 3.5.0)
project(HelloGL VERSION 0.1.0 LANGUAGES C CXX)

find_package(glad CONFIG REQUIRED)
find_package(glfw3 CONFIG REQUIRED)

add_executable(HelloGL src/main.cpp)

target_link_libraries(HelloGL PRIVATE glfw)
target_link_libraries(HelloGL PRIVATE glad::glad)
