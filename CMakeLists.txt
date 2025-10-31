cmake_minimum_required(VERSION 3.20)

project(Preset3)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Опциональная настройка для тестирования
option(ENABLE_TESTING "Enable testing configuration" OFF)

# Основное приложение
add_executable(main_app main.cpp)

# Условная компиляция для тестирования
if(ENABLE_TESTING)
    target_compile_definitions(main_app PRIVATE MY_ISTESTING=1)
endif()

# Установка политики для CMAKE_BUILD_TYPE
if(NOT CMAKE_BUILD_TYPE AND NOT CMAKE_CONFIGURATION_TYPES)
    set(CMAKE_BUILD_TYPE Release CACHE STRING "Build type" FORCE)
    set_property(CACHE CMAKE_BUILD_TYPE PROPERTY STRINGS "Debug" "Release" "RelWithDebInfo" "MinSizeRel")
endif()