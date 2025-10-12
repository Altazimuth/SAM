cmake_minimum_required(VERSION 3.5)
project(SAM)

set_property(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR} PROPERTY VS_STARTUP_PROJECT SAM)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(SAM)

target_sources(SAM PRIVATE
    src/createtransitions.cpp
    src/debug.cpp
    src/debug.h
    src/main.cpp
    src/processframes.cpp
    src/reciter.cpp
    src/reciter.h
    src/ReciterTabs.h
    src/render.cpp
    src/render.h
    src/RenderTabs.h
    src/sam.cpp
    src/sam.h
    src/SamTabs.h
)

if(MSVC)
    target_compile_options(SAM PUBLIC "/permissive-")
endif()