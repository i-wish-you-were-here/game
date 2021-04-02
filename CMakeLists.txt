cmake_minimum_required(VERSION 3.17)
project(${PROJECT_NAME} i_wish_you_were_here)

set(CMAKE_C_STANDARD 99)

find_package(raylib 3.5 QUIET)
if (NOT raylib_FOUND)
    include(FetchContent)

    FetchContent_Declare(
            raylib
            URL https://github.com/raysan5/raylib/archive/master.tar.gz
    )

    FetchContent_GetProperties(raylib)
    if (NOT raylib_POPULATED)
        set(FETCHCONTENT_QUIET NO)
        FetchContent_Populate(raylib)

        set(BUILD_EXAMPLES OFF CACHE BOOL "" FORCE)
        set(BUILD_GAMES    OFF CACHE BOOL "" FORCE)

        add_subdirectory(${raylib_SOURCE_DIR} ${raylib_BINARY_DIR})

    endif()

endif()

#update this EVERYTIME a C class is created
add_executable(${PROJECT_NAME} stay.c screens/title_screen.c)

target_link_libraries(${PROJECT_NAME} raylib)