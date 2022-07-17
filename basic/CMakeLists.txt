cmake_minimum_required(VERSION 3.10)

project(example)

include_directories("/usr/include/eigen3")


file(GLOB mains "*.cpp")
foreach(filename IN LISTS mains)
    message("FILENAME " ${filename})
    get_filename_component(name ${filename} NAME_WE)
    add_executable(${name} ${filename})
    
endforeach(filename IN LISTS mains)

#add_executable(matrix_vector_example matrix_vector_example.cpp)
