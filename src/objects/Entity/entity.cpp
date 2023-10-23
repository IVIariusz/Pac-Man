#include "objects/Entity/entity.h"

Entity::Entity(sf::Vector2<int> pos, int type, std::string tileMapName){
    sf::Sprite temp;
    structureData.nameOfTileMap = tileMapName;
    temp.setPosition(pos.x * NORMAL_TILE_SIZE + 8, pos.y * NORMAL_TILE_SIZE + 8);
    temp.setScale(0.5, 0.5);
    structureData.sprite = temp;
    structureData.textureId = 0;

    Coliderflags.Top = false;
    Coliderflags.Down = false;
    Coliderflags.Right = false;
    Coliderflags.left = false;
    structureData.sprite.setOrigin(structureData.sprite.getLocalBounds().width / 2 + 16, structureData.sprite.getLocalBounds().height / 2 + 16);
}

void Entity::setFlags(bool top, bool down, bool right, bool left)
{
    Coliderflags.Top = top;
    Coliderflags.Down = down;
    Coliderflags.Right = right;
    Coliderflags.left = left;
}

Flags Entity::getMoveFlags(){
    return moveFlags;
}

void Entity::Animate() {

}

renderObjectStructure Entity::getStructure(){
    return structureData;
}

void Entity::Move(){

}

void Entity::setAnimationType(int n)
{
    animationType = n;
}