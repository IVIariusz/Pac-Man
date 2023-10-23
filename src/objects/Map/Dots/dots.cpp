#include "objects/Map/Dots/dots.h"
#include "settings.h"

Dots::Dots(sf::Vector2<int> pos, int type) {
    isTaken = false;
    sf::Sprite temp;
    switch (type)
    {
    case 2:
        structureData.nameOfTileMap = POWER_PILL_TEXTURE;
        temp.setPosition(pos.x * NORMAL_TILE_SIZE + 12, pos.y * NORMAL_TILE_SIZE + 12);
        temp.setScale(0.5, 0.5);
        break;
    case 3:
        structureData.nameOfTileMap = POWER_PILL_TEXTURE;
        temp.setPosition(pos.x * NORMAL_TILE_SIZE + 12, pos.y * NORMAL_TILE_SIZE + 12);
        temp.setScale(0, 0);
        isTaken = true;
        break;
    default:
        structureData.nameOfTileMap = PILL_TEXTURE;
        temp.setPosition(pos.x * NORMAL_TILE_SIZE + 16, pos.y * NORMAL_TILE_SIZE + 16);
        temp.setScale(0.5, 0.5);
        break;
    }

    structureData.sprite = temp;
    structureData.textureId = 0;
}

renderObjectStructure Dots::returnStructure(){
    return structureData;
}

bool Dots::getTakenState(){
    return isTaken;
}

void Dots::setTaken(){
    isTaken = true;
    structureData.sprite.setScale(0, 0);
}
