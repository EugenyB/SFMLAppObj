cmake_minimum_required(VERSION 3.15)
project(SFMLApp)

set(CMAKE_CXX_STANDARD 14)

set(SFML_INCLUDE_DIR "d:/libs/SFML-2.5.1/include")
set(SFML_LIBRARY_DIR "d:/libs/SFML-2.5.1/lib")
set(SFML_DIR "d:/libs/SFML-2.5.1/lib/cmake/SFML")

include_directories(SFML_INCLUDE_DIR)

find_package(SFML 2.5.1 COMPONENTS system window graphics network audio)

if(SFML_FOUND)
    message(STATUS "SFML_INCLUDE_DIR: ${SFML_INCLUDE_DIR}")
    message(STATUS "SFML_LIBRARIES: ${SFML_LIBRARIES}")
    message(STATUS "SFML_VERSION: ${SFML_VERSION}")
endif()

add_executable(SFMLApp main.cpp Figure.cpp Figure.h)
target_link_libraries (SFMLApp sfml-graphics sfml-window sfml-system)