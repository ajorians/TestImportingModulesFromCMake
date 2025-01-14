cmake_minimum_required( VERSION 3.31 )
project(MathLib)
set( CMAKE_CXX_STANDARD 20 )

add_library( MathLib STATIC )
target_sources(MathLib PUBLIC
   MathLib.cpp
   PUBLIC
   FILE_SET HEADERS
   BASE_DIRS include
   FILES
   include/MathLib/MathLib.h
)