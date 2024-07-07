cmake_minimum_required(VERSION 3.29)
project(poci C)

set(CMAKE_C_STANDARD 11)

find_path(EDITLINE_INCLUDE_DIR editline/readline.h)
find_library(EDITLINE_LIBRARY editline)

# Ubuntu needs libeditline and editline/history.h, Arch does not
if(EDITLINE_INCLUDE_DIR AND EDITLINE_LIBRARY)
    include_directories(${EDITLINE_INCLUDE_DIR})
    target_link_libraries(poci ${EDITLINE_LIBRARY})
    add_definitions(-DHAVE_EDITLINE)
endif()

add_executable(poci main.c)
