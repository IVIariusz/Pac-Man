#include "objects/Entity/ghost.h"

Ghost::Ghost(sf::Vector2<int> pos, int type, std::string tileMapName) : Entity(pos, type, tileMapName), _type(type) {
    structureData.textureId = 24 + _type;
}

void Ghost::Move(){
    moveFlags.left = false;
    moveFlags.Right = false;
    moveFlags.Down = false;
    moveFlags.Top = false;
    
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left)) {
        structureData.textureId = 24 + _type;
        moveFlags.left = true;
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right)) {
        structureData.textureId = 0 + _type;
        moveFlags.Right = true;
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up)) {
        structureData.textureId = 48 + _type;
        moveFlags.Top = true;
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down)) {
        structureData.textureId = 72 + _type;
        moveFlags.Down = true;
    }

}

void Ghost::Animate(){
    
}