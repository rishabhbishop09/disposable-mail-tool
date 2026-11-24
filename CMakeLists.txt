cmake_minimum_required(VERSION 3.16)
project(disposable-mail-tool CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(disposablemailtool
    src/main.cpp
    src/mailbox.cpp
    src/api.cpp
    src/parser.cpp
)

target_include_directories(disposablemailtool PRIVATE include)

if(WIN32)
    target_link_libraries(disposablemailtool PRIVATE userenv)
endif()
