cmake_minimum_required(VERSION 3.21)

project(KYZA)

add_subdirectory(Source)
add_subdirectory(KyzaEngine)

target_link_libraries(${PROJECT_NAME} PRIVATE KyzaEngine)
