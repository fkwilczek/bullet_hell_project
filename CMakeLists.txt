cmake_minimum_required(VERSION "3.14")
project("bullet_hell_project" VERSION 0.1.0)

set(CMAKE_CXX_STANDARD 11)
set(SFML_STATIC_LIBRARIES TRUE)

set(SFML_DIR "./libs/SFML-2.5.1/lib/cmake/SFML")
find_package(SFML COMPONENTS system window graphics network audio REQUIRED)

file(GLOB_RECURSE SRC_FILES ${PROJECT_SOURCE_DIR}/src/*.cpp CMAKE_CONFIGURE_DEPENDS)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/../bin)


if (CMAKE_BUILD_TYPE STREQUAL "Debug")
    add_executable(${CMAKE_PROJECT_NAME}_${CMAKE_PROJECT_VERSION} "${SRC_FILES}")
    target_link_libraries(${CMAKE_PROJECT_NAME}_${CMAKE_PROJECT_VERSION} sfml-system sfml-window sfml-graphics sfml-network sfml-audio)
else()
    add_executable(Release_${CMAKE_PROJECT_NAME}_${CMAKE_PROJECT_VERSION} WIN32 "${SRC_FILES}")
    target_link_libraries(Release_${CMAKE_PROJECT_NAME}_${CMAKE_PROJECT_VERSION} sfml-system sfml-window sfml-graphics sfml-network sfml-audio)
endif()
set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -static -static-libgcc -static-libstdc++")