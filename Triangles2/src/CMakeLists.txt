cmake_minimum_required(VERSION 3.0)

file(GLOB PROJECT_SOURCES ${CMAKE_CURRENT_LIST_DIR}/*)

# set(SFML_DIR "${PROJECT_SOURCE_DIR}/SFML-2.6.1/lib/cmake/SFML")
# message(${SFML_DIR})
# find_package(SFML 2.6.1 COMPONENTS graphics audio REQUIRED)
add_executable(triangle ${PROJECT_SOURCES})

# target_link_libraries(triangles lsfml-graphics lsfml-window lsfml-system lwinmm lopengl32 lfreetype lgdi32)
# target_compile_options(triangle PUBLIC -Wno-class-conversion)