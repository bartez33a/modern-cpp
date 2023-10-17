cmake_minimum_required(VERSION 3.1.0)

project("basic features")

# get grandparent path to get /shapes path
cmake_path(GET CMAKE_CURRENT_SOURCE_DIR PARENT_PATH parent_path)
cmake_path(GET parent_path PARENT_PATH grandparent_path)

# get all sources from /shapes
file(GLOB SHAPES_SRC
     "${grandparent_path}/shapes/*.cpp"
)

# exlude main.cpp from /shapes, since we have out main.cpp
file(GLOB SHAPES_MAIN
     "${grandparent_path}/shapes/main.cpp"
)

list(REMOVE_ITEM SHAPES_SRC "${SHAPES_MAIN}")


include_directories("${grandparent_path}/shapes/")

add_executable(static_assert static_assert.cpp ${SHAPES_SRC})


target_include_directories(static_assert PRIVATE "${grandparent_path}/shapes/")

