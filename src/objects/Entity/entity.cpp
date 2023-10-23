#include "objects/Entity/entity.h"

Entity::Entity(sf::Vector2<int> pos, int type, std::string tileMapName){
    sf::Sprite temp;
    structureData.nameOfTileMap = tileMapName;
    temp.setPosition(pos.x * NORMAL_TILE_SIZE + 8, pos.y * NORMAL_TILE_SIZE + 8);
    temp.setScale(0.5, 0.5);
    structureData.sprite = temp;
    structureData.textureId = 0;
}

void Entity::Animate() {
    if(AnimationClock.getElapsedTime().asMilliseconds() >= ANIMATION_SPEED)
    {
        structureData.textureId += 1;
        if(structureData.textureId > ENTITY_ANIMATION_LENGTH) structureData.textureId = 0;
        AnimationClock.restart();
    }
}

renderObjectStructure Entity::getStructure(){
    return structureData;
}

void Entity::Move(){

}