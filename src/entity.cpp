#include "entity.h"
#include "collisionManager.h"
#include <iostream>
#include "settings.h"


Entity::Entity(map& mapa) : mapa(mapa), manager(mapa){

    structure.isChanging = true;
    structure.textureId = 4;
    structure.size = ENTITY_SIZE;

    for(int i = 0; i < mapa.returnMapData().size(); i++)
    {
        for(int j = 0; j < mapa.returnMapData()[i].length(); j++)
        {
            if(mapa.returnMapData()[i][j] == '0')
            {
                sf::Vector2f pos(j * NORMAL_TILE_SIZE, i * NORMAL_TILE_SIZE);
                structure.pos = pos;
                std::cout << j * NORMAL_TILE_SIZE << std::endl;
                std::cout << i * NORMAL_TILE_SIZE << std::endl;
            }
        }
    }
}

void Entity::Animate()
{
    if(animationClock.getElapsedTime().asMilliseconds() >= ANIMATION_TIME * 2)
    {
        structure.textureId = structure.textureId + 1;
        if(structure.textureId > 4) structure.textureId = 0;
        animationClock.restart();
    }
    
}

void Entity::Move(int x, int y)
{
    int PosX = structure.pos.x / NORMAL_TILE_SIZE + 2;
    int PosY = structure.pos.y / NORMAL_TILE_SIZE + 1;

    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right)) {
        if(!manager.checkCollisionAt(PosY, PosX, structure.pos.x+SPEED, structure.pos.y)) structure.pos.x +=SPEED;
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left)) {
        if(!manager.checkCollisionAt(PosY, PosX, structure.pos.x-SPEED, structure.pos.y)) structure.pos.x -=SPEED;
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up)) {
        if(!manager.checkCollisionAt(PosY, PosX, structure.pos.x, structure.pos.y-SPEED)) structure.pos.y -=SPEED;
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down)) {
        if(!manager.checkCollisionAt(PosY, PosX, structure.pos.x, structure.pos.y+SPEED)) structure.pos.y +=SPEED;
    }

    Animate();

}