cmake_minimum_required(VERSION 2.8.12)
project(MD5Encrypter)

add_definitions("-std=c++11")

include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
conan_basic_setup()

add_executable(fileMain main.cpp)
target_link_libraries(fileMain ${CONAN_LIBS})