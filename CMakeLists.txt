cmake_minimum_required(VERSION 3.10.0)
project(image-processing-cpp VERSION 0.1.0 LANGUAGES C CXX)

find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})

add_executable(image-processing-cpp main.cpp)

target_link_libraries(${PROJECT_NAME} ${OpenCV_LIBS})

include(CTest)
enable_testing()

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
