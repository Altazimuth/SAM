cmake_minimum_required(VERSION 3.5)
project(SAM)

set_property(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR} PROPERTY VS_STARTUP_PROJECT SAM)

add_executable(SAM)

target_sources(SAM PRIVATE
    src/createtransitions.c
    src/debug.c
    src/debug.h
    src/main.c
    src/processframes.c
    src/reciter.c
    src/reciter.h
    src/ReciterTabs.h
    src/render.c
    src/render.h
    src/RenderTabs.h
    src/sam.c
    src/sam.h
    src/SamTabs.h
)
