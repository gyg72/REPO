cmake_minimum_required(VERSION 3.10)
project(C_QC_Project C)

set(CMAKE_C_STANDARD 11)

# Включение флагов покрытия кода для этапа тестов
if(ENABLE_COVERAGE)
    set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} --coverage -O0 -g")
endif()

# Описание библиотек и исполняемых файлов
add_library(math_functions src/math_functions.c)
add_executable(main_app src/main.c)
target_link_libraries(main_app math_functions)

# Регистрация тестов для CTest
enable_testing()
add_executable(test_runner tests/test_main.c)
target_link_libraries(test_runner math_functions)
add_test(NAME CoreFunctionsTest COMMAND test_runner)
