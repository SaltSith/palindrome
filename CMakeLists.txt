cmake_minimum_required(VERSION 3.0)

project(palindrom
        VERSION 1.0.0
        LANGUAGES C)

add_executable(${CMAKE_PROJECT_NAME} main.c)

add_subdirectory(palindrome)
target_link_libraries(${CMAKE_PROJECT_NAME} palindrome)
