cmake_minimum_required(VERSION 3.27)
project(notes_app)

set(CMAKE_CXX_STANDARD 17)

# QT6
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

set(CMAKE_PREFIX_PATH "C:/Qt/6.6.1/mingw_64")

find_package(Qt6 REQUIRED COMPONENTS Widgets Charts QUIET)

add_executable(notes_app main.cpp mainwindow.cpp mainwindow.h)

target_link_libraries(notes_app PRIVATE Qt${QT_VERSION_MAJOR}::Widgets)

file(COPY ${CMAKE_CURRENT_SOURCE_DIR}/res DESTINATION ${CMAKE_CURRENT_BINARY_DIR})