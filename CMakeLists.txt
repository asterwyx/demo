cmake_minimum_required(VERSION 3.16)
project(demo LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_INCLUDE_CURRENT_DIR ON)
find_package(Qt5 REQUIRED COMPONENTS Widgets)
add_executable(demo
    main.cpp
    mainwindow.cpp
    mainwindow.h
    images.qrc
)
target_link_libraries(demo PRIVATE Qt5::Widgets)
