cmake_minimum_required(VERSION 3.29)
project(poci C)

set(CMAKE_C_STANDARD 11)

add_executable(poci main.c)

# Check for editline headers
find_path(EDITLINE_INCLUDE_DIR NAMES editline/readline.h)
find_library(EDITLINE_LIBRARY NAMES edit)

if(EDITLINE_INCLUDE_DIR AND EDITLINE_LIBRARY)
    message(STATUS "editline library found, including headers")
    target_include_directories(poci PRIVATE ${EDITLINE_INCLUDE_DIR})
    target_link_libraries(poci PRIVATE ${EDITLINE_LIBRARY})
else()
    message(WARNING "editline library not found, excluding editline support")
endif()
