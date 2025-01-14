cmake_minimum_required( VERSION 3.31 )
project(MathLib)
set( CMAKE_CXX_STANDARD 20 )

add_library( MathLib STATIC )
target_sources(MathLib 
   PUBLIC
   FILE_SET CXX_MODULES
   FILES
   MathLib.cpp
)

target_compile_options( MathLib PUBLIC /fp:precise /sdl)