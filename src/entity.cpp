#include "entity.h"

Entity::Entity(){
    structure.isChanging = true;
    sf::Vector2 pos(200, 200);
    structure.pos = pos;
    structure.textureId = 4;
}

void Entity::Animate()
{
    if(animationClock.getElapsedTime().asMilliseconds() >= ANIMATION_TIME)
    {
        structure.textureId = structure.textureId + 1;
        if(structure.textureId > 4) structure.textureId = 0;
        animationClock.restart();
    }
}