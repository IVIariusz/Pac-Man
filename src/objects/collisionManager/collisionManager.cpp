#include "objects/CollisionManager/collisionManager.h"

CollisionManager::CollisionManager(EntityManager& entities, MapManager& map) : entities(entities), map(map){

}

void CollisionManager::updateFlags(){

    bool top, bottom, right, left;

    for (int i = 0; i < entities.getEntities().size(); i++) {
        top = true, bottom = true, right = true, left = true;
        Entity* entity = entities.getEntities()[i]; 

        int x = (entity->getStructure().sprite.getPosition().x) / NORMAL_TILE_SIZE;
        int y = (entity->getStructure().sprite.getPosition().y) / NORMAL_TILE_SIZE;

        if(entity->getMoveFlags().left)
        {
            x = (entity->getStructure().sprite.getPosition().x - 8) / NORMAL_TILE_SIZE + 1;
        }
        if(entity->getMoveFlags().Right)
        {
            x = (entity->getStructure().sprite.getPosition().x) / NORMAL_TILE_SIZE;
        }
        if(entity->getMoveFlags().Top)
        {
            y = (entity->getStructure().sprite.getPosition().y + 16) / NORMAL_TILE_SIZE;
        }
        if(entity->getMoveFlags().Down)
        {
            y = (entity->getStructure().sprite.getPosition().y) / NORMAL_TILE_SIZE;
        }


        if(map.getMapDataStructure()[y - 1].at(x).returnObjectStructure().textureId == 15) top = false;
        if(map.getMapDataStructure()[y + 1].at(x).returnObjectStructure().textureId == 15) bottom = false;
        if(map.getMapDataStructure()[y].at(x + 1).returnObjectStructure().textureId == 15) right = false;
        if(map.getMapDataStructure()[y].at(x - 1).returnObjectStructure().textureId == 15) left = false;


        entity->setFlags(top, bottom, right, left);
    }
}