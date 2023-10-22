#include "objects/Map/Dots/dots.h"
#include "settings.h"

Dots::Dots(sf::Vector2<int> pos, int type) {
    sf::Sprite temp;
    switch (type)
    {
    case 2:
        structureData.nameOfTileMap = POWER_PILL_TEXTURE;
        temp.setPosition(pos.x * NORMAL_TILE_SIZE + 8, pos.y * NORMAL_TILE_SIZE + 8);
        break;
    default:
        structureData.nameOfTileMap = PILL_TEXTURE;
        temp.setPosition(pos.x * NORMAL_TILE_SIZE + 12, pos.y * NORMAL_TILE_SIZE + 12);
        break;
    }
    structureData.sprite = temp;
    structureData.textureId = 0;
}

renderObjectStructure Dots::returnStructure(){
    return structureData;
}