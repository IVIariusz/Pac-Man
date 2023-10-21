cmake_minimum_required(VERSION 3.17)
project(nibbles)

set(CMAKE_CXX_STANDARD 20)

add_executable(nibbles src/main.cpp src/game.cpp src/renderer.cpp src/object.cpp src/entity.cpp src/map.cpp src/collisionManager.cpp
headers/game.h headers/settings.h headers/renderer.h headers/object.h headers/entity.h headers/map.h headers/collisionManager.h)
include_directories(headers /usr/include C:/SFML/include/SFML)

set(SFML_ROOT C:/SFML)
set(CMAKE_MODULE_PATH "${CMAKE_CURRENT_LIST_DIR}/cmake_modules")
find_package(SFML REQUIRED system window graphics)
if (SFML_FOUND)
    include_directories(${SFML_INCLUDE_DIR})
    target_link_libraries(nibbles ${SFML_LIBRARIES})
endif()

# Copy dlls to build directory
if(WIN32)
    file(GLOB BINARY_DEP_DLLS "${SFML_INCLWUDE_DIR}/../bin/*.dll")
    file(COPY ${BINARY_DEP_DLLS} DESTINATION ${CMAKE_BINARY_DIR})
    file(GLOB MINGW_DEP_DLLS "C:/mingw64/bin/*.dll")
    file(COPY ${MINGW_DEP_DLLS} DESTINATION ${CMAKE_BINARY_DIR})
endif()
