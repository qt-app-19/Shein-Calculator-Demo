cmake_minimum_required(VERSION 3.13)
project(Calculator)

set(CMAKE_CXX_STANDARD 14)


set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)



set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_PREFIX_PATH "/usr/local/Cellar/qt/5.12.1/lib/cmake")
find_package(Qt5Core REQUIRED)
find_package(Qt5Widgets REQUIRED)
find_package(Qt5Quick REQUIRED)

add_executable(Calculator
        calculator.cpp
        calculator.h
        Calculator.pro
        main.cpp
        calculator.ui)
target_link_libraries(Calculator Qt5::Widgets)
target_link_libraries(Calculator Qt5::Core)
target_link_libraries(Calculator Qt5::Widgets)
target_link_libraries(Calculator Qt5::Quick)