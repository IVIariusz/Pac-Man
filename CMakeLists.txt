cmake_minimum_required(VERSION 3.17)
project(nibbles)

set(CMAKE_CXX_STANDARD 20)

add_executable(nibbles src/main.cpp src/game.cpp src/texture/textureManager.cpp src/texture/textureLoader.cpp 
src/renderer/renderer.cpp src/objects/objectManager.cpp src/objects/Entity/entityManager.cpp src/objects/map/mapManager.cpp
src/objects/map/structure.cpp src/objects/map/dots/dotsManager.cpp src/objects/map/dots/dots.cpp
src/objects/entity/entity.cpp src/objects/entity/pacman.cpp src/objects/entity/ghost.cpp src/objects/collisionManager/collisionManager.cpp
src/objects/UI/UI.cpp src/objects/UI/UIObject.cpp

headers/game.h headers/settings.h headers/texture/textureManager.h headers/texture/textureLoader.h 
headers/renderer/renderer.h headers/objects/objectManager.h headers/objects/Entity/entityManager.h headers/objects/map/mapManager.h
headers/objects/map/structure.h headers/renderer/renderObjectStructure.h headers/objects/map/dots/dotsManager.h
headers/objects/map/dots/dots.h headers/objects/entity/entity.h headers/objects/entity/pacman.h headers/objects/entity/ghost.h
headers//objects/collisionManager/collisionManager.h headers/Objects/UI/UI.h headers/objects/UI/UIObject.h)
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
