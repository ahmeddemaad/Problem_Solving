cmake_minimum_required(VERSION 3.20)
project (Fibonacci)

set(CMAKE_CXX_STANDARD 17)

add_executable(Fibonacci main.cpp stress_test.cpp stress_test_for_pisano_period.cpp)
