cmake_minimum_required(VERSION 3.30)
project(My_C_header)

set(CMAKE_CXX_STANDARD 20)

add_executable(My_C_header
        My_C_header.h
		My_C_header.c
)

target_include_directories(${PROJECT_NAME} PRIVATE
    Own_headers
 #"C:\\Users\\tuuli\\CLionProjects\\Own_headers"
        "C:/Users/tuuli/CLionProjects/Own_headers"
	"C:/Users/tuuli/CLionProjects/My_C_header"
)