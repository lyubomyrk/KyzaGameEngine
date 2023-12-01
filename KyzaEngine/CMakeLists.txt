add_library(KyzaEngine Engine.cpp)

target_include_directories(KyzaEngine PRIVATE Deps/fmt/include/)

target_include_directories(${PROJECT_NAME} PRIVATE .)