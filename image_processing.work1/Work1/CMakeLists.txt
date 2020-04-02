cmake_minimum_required(VERSION 3.16)



project(Work11)



find_package(OpenCV REQUIRED)

include_directories(Work1 ${OpenCV_INCLUDE_DIRS})



add_executable(Work1 work1.cpp)

target_link_libraries(Work1 ${OpenCV_LIBS})