#include "objects/CollisionManager/collisionManager.h"

CollisionManager::CollisionManager(EntityManager& entities, MapManager& map, DotsManager& dots, UIManger& ui) : entities(entities), map(map), dots(dots), ui(ui){

}

void CollisionManager::updateFlags(){
    bool top, bottom, right, left;
    int x = entities.getEntities()[0]->getStructure().sprite.getPosition().x;
    int y = entities.getEntities()[0]->getStructure().sprite.getPosition().y;
    int PacManPosX = x / 32;
    int PacManPosY = y / 32;
    bool kill =  entities.getEntities()[0]->getChase();

    for (int i = 0; i < entities.getEntities().size(); i++) {
        top = true, bottom = true, right = true, left = true;
        Entity* entity = entities.getEntities()[i]; 

        int x = (entity->getStructure().sprite.getPosition().x) / NORMAL_TILE_SIZE;
        int y = (entity->getStructure().sprite.getPosition().y) / NORMAL_TILE_SIZE;

        if(entity->getMoveFlags().left)
        {   
            x = (entity->getStructure().sprite.getPosition().x + 8) / NORMAL_TILE_SIZE;
            y = (entity->getStructure().sprite.getPosition().y + 8) / NORMAL_TILE_SIZE;
            if(map.getMapDataStructure()[y].at(x - 1).returnObjectStructure().textureId == 15) left = false;
            y = (entity->getStructure().sprite.getPosition().y - 8) / NORMAL_TILE_SIZE;
            if(map.getMapDataStructure()[y].at(x - 1).returnObjectStructure().textureId == 15) left = false;
        }
        if(entity->getMoveFlags().Right)
        {
            x = (entity->getStructure().sprite.getPosition().x - 8) / NORMAL_TILE_SIZE;
            y = (entity->getStructure().sprite.getPosition().y + 8) / NORMAL_TILE_SIZE;
            if(map.getMapDataStructure()[y].at(x + 1).returnObjectStructure().textureId == 15) right = false;
            y = (entity->getStructure().sprite.getPosition().y - 8) / NORMAL_TILE_SIZE;
            if(map.getMapDataStructure()[y].at(x + 1).returnObjectStructure().textureId == 15) right = false;
            
        }
        if(entity->getMoveFlags().Top)
        {
            y = (entity->getStructure().sprite.getPosition().y + 8) / NORMAL_TILE_SIZE;
            x = (entity->getStructure().sprite.getPosition().x - 8) / NORMAL_TILE_SIZE;
            if(map.getMapDataStructure()[y - 1].at(x).returnObjectStructure().textureId == 15) top = false;
            x = (entity->getStructure().sprite.getPosition().x + 8) / NORMAL_TILE_SIZE;
            if(map.getMapDataStructure()[y - 1].at(x).returnObjectStructure().textureId == 15) top = false;
        }
        if(entity->getMoveFlags().Down)
        {
            y = (entity->getStructure().sprite.getPosition().y - 8) / NORMAL_TILE_SIZE;
            x = (entity->getStructure().sprite.getPosition().x - 8) / NORMAL_TILE_SIZE;
            if(map.getMapDataStructure()[y + 1].at(x).returnObjectStructure().textureId == 15) bottom = false;
            x = (entity->getStructure().sprite.getPosition().x + 8) / NORMAL_TILE_SIZE;
            if(map.getMapDataStructure()[y +1].at(x).returnObjectStructure().textureId == 15) bottom = false;
        }
        entity->setFlags(top, bottom, right, left);

        if(PacManPosX == x && PacManPosY == y && i != 0)
        {
            if(!kill) entities.getEntities()[0]->Die();
            else 
            {
                entities.getEntities()[i]->Die();
            }
        } 


    }


}

void CollisionManager::checkDotsCollision(){
    std::vector<std::vector<Dots>> DotsData = dots.getDotStructure();

    Entity* entity = entities.getEntities()[0]; 
    int x = (entity->getStructure().sprite.getPosition().x) / NORMAL_TILE_SIZE;
    int y = (entity->getStructure().sprite.getPosition().y) / NORMAL_TILE_SIZE;

    if(!DotsData[y].at(x).getTakenState()) {
        if(DotsData[y].at(x).returnStructure().nameOfTileMap == POWER_PILL_TEXTURE)
        {
            ui.addScore(20);
            entities.getEntities()[0]->setChase(true);
        } 
        else {
            ui.addScore(10);
        } 
        dots.upDateDotAt(x, y);
    } 

}