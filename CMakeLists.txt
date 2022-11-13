cmake_minimum_required(VERSION 3.0)

project(palindrom
        VERSION 1.0.0
        LANGUAGES C)

add_executable(${CMAKE_PROJECT_NAME} main.c)

add_subdirectory(palindrome)
target_link_libraries(${CMAKE_PROJECT_NAME} palindrome)
include_directories ("${PROJECT_SOURCE_DIR}")

# testing 
enable_testing()

#tesing palindrome
add_executable(test_palindrome palindrome/test/test.c)
target_link_libraries(test_palindrome palindrome)
target_include_directories(test_palindrome PRIVATE palindrome)
add_test(NAME test_palindrome COMMAND test_palindrome)

