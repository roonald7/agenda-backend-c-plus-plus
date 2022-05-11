cmake_minimum_required(VERSION 3.10)

project(
    Agenda
    VERSION 0.0.1
    DESCRIPTION "Agenda backend"
    LANGUAGES CXX
)

# add_subdirectory(tests)

add_library(
    ${PROJECT_NAME}SRCS

    SHARED

    src/agenda.cpp
    src/contact.cpp
)

add_executable(
    ${PROJECT_NAME} 
    
    src/main.cpp
)

target_include_directories(
    ${PROJECT_NAME}SRCS

    PRIVATE
    
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)

target_compile_features(
    ${PROJECT_NAME}SRCS
    
    PRIVATE 
    
    cxx_std_17
)

target_compile_options(
    ${PROJECT_NAME}SRCS 
    
    PUBLIC
        $<$<CXX_COMPILER_ID:MSVC>:/utf-8>
)

target_link_libraries(
    ${PROJECT_NAME}

    PUBLIC
        ${PROJECT_NAME}SRCS
)

add_custom_target(
    run

    COMMAND
        ${PROJECT_NAME} 1212

    USES_TERMINAL
)

add_dependencies(run ${PROJECT_NAME})