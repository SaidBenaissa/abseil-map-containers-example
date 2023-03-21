cmake_minimum_required(VERSION 3.24)
project(abseil_map_containers)

set(CMAKE_CXX_STANDARD 17)

add_executable(abseil_map_containers main.cpp)

target_link_libraries(abseil_map_containers absl::flat_hash_map)

find_package(absl CONFIG REQUIRED)

target_link_libraries(abseil_map_containers absl::flat_hash_map)

#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fsanitize=address -fno-omit-frame-pointer")
#
#set(CMAKE_LINKER_FLAGS "${CMAKE_LINKER_FLAGS} -fsanitize=address")

