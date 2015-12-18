cmake_minimum_required(VERSION 3.2.0)
project(LightSequenceStudio)

set(PROJECT_VERSION_MAJOR 0)
set(PROJECT_VERSION_MINOR 1)
set(PROJECT_VERSION_PATCH 0)

find_package(Qt5Widgets REQUIRED)
find_package(Qt5Multimedia REQUIRED)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOMOC ON)

add_subdirectory(src)
