#include "collisionManager.h"

CollisionManager::CollisionManager(map& mapa) : mapa(mapa)
{
    mapData = mapa.returnToRender();
}

bool CollisionManager::checkCollisionAt(int posX, int posY, float EntityPosX, float EntityPosY) {
    int center = NORMAL_TILE_SIZE * ENTITY_SIZE / 2;
    
    int mapX = mapData.at((posY - 2) * MAPSIZE + (posX - 1)).getStructure().pos.x;
    int mapY = mapData.at((posY - 2) * MAPSIZE + (posX - 1)).getStructure().pos.y;

    sf::FloatRect bounds(mapX, mapY, NORMAL_TILE_SIZE, NORMAL_TILE_SIZE);
    sf::FloatRect entityBounds(EntityPosY, EntityPosX, NORMAL_TILE_SIZE * ENTITY_SIZE, NORMAL_TILE_SIZE * ENTITY_SIZE);
    std::cout << mapY << " " << mapX << std::endl; 
    std::cout << EntityPosX << " " << EntityPosY << std::endl; 

    if (bounds.intersects(entityBounds)) {
        if(mapData.at((posY - 2) * MAPSIZE + (posX - 1)).getStructure().textureId == 15) return true;
    }
    return false;
}
