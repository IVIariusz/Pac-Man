#include "objects/Map/structure.h"


structure::structure(int textureID, sf::Vector2<int> pos) {
    structureData.nameOfTileMap = MAP_TEXTURE;
    sf::Sprite temp;
    temp.setPosition(pos.x * NORMAL_TILE_SIZE, pos.y * NORMAL_TILE_SIZE);
    structureData.sprite = temp;
    structureData.textureId = textureID;
}

renderObjectStructure structure::returnObjectStructure(){
    return structureData;
}