#include "entity.h"
#include "map.h"
#include "renderer.h"
#include <iostream>

Entity::Entity(map& mapa, renderer& rend, int _type, float _speed) : mapa(mapa), rend(rend){
    int x = mapa.getEntityPos(_type).x;
    int y = mapa.getEntityPos(_type).y;
    EntityTile.sprite.setPosition(x * 32 + 8, y * 32 + 8);
    EntityTile.sprite.setScale(0.7, 0.7);
    speed = _speed;
    type = _type;
}

int Entity::getAnimationState(){
    return animationState;
}


void Entity::animation() {
    if (isMoving) {
        if (clockTime.getElapsedTime().asMilliseconds() >= 50) {
            if (type == 1) {
                animationState++;
                if(animationState < 16) animationState = 16;
                if(animationState == 19) animationState = 16;
            }
            if(type == 2){

            }
            // if(direction == 1) EntityTile.sprite.setRotation(180);
            // if(direction == 2) EntityTile.sprite.setRotation(0);
            // if(direction == 3) EntityTile.sprite.setRotation(-90);
            // if(direction == 4) EntityTile.sprite.setRotation(90);

            clockTime.restart();
        }
    }
    else animationState == 16;
    EntityTile.textureID = animationState;
}


void Entity::move()
{
    isMoving = false;
    int x, y;
    x = ((EntityTile.sprite.getPosition().x) / 32);
    y = ((EntityTile.sprite.getPosition().y) / 32);

    sf::FloatRect entityBounds = EntityTile.sprite.getGlobalBounds();

    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left)) {
        float newX = EntityTile.sprite.getPosition().x - speed;
        float centerY = EntityTile.sprite.getPosition().y + entityBounds.height / 2.0f;
        int leftTileX = static_cast<int>((newX + entityBounds.width / 2.0f) / 32); // Uwzględnij szerokość sprite'a
        int topTileY = static_cast<int>((centerY - entityBounds.height / 2.0f) / 32);
        int bottomTileY = static_cast<int>((centerY + entityBounds.height / 2.0f) / 32);

        if (mapa.getMapaAt(topTileY, leftTileX) != '#' &&
            mapa.getMapaAt(bottomTileY, leftTileX) != '#') {
            direction = 1;
            isMoving = true;
            EntityTile.sprite.setPosition(newX, EntityTile.sprite.getPosition().y);
        }
    }

    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right)) {
        float newX = EntityTile.sprite.getPosition().x + speed + entityBounds.width;
        float centerY = EntityTile.sprite.getPosition().y + entityBounds.height / 2.0f;
        int rightTileX = static_cast<int>((newX + entityBounds.width / 2.0f) / 32);
        int topTileY = static_cast<int>((centerY - entityBounds.height / 2.0f) / 32);
        int bottomTileY = static_cast<int>((centerY + entityBounds.height / 2.0f) / 32);

        if (mapa.getMapaAt(topTileY, rightTileX) != '#' &&
            mapa.getMapaAt(bottomTileY, rightTileX) != '#') {
            direction = 2;
            isMoving = true;
            EntityTile.sprite.setPosition(newX - entityBounds.width, EntityTile.sprite.getPosition().y);
        }
    }

    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up)) {
        float newY = EntityTile.sprite.getPosition().y - speed;
        float centerX = EntityTile.sprite.getPosition().x + entityBounds.width / 2.0f;
        int topTileY = static_cast<int>((newY + entityBounds.height / 2.0f) / 32); // Uwzględnij wysokość sprite'a
        int leftTileX = static_cast<int>((centerX - entityBounds.width / 2.0f) / 32);
        int rightTileX = static_cast<int>((centerX + entityBounds.width / 2.0f) / 32);

        if (mapa.getMapaAt(topTileY, leftTileX) != '#' &&
            mapa.getMapaAt(topTileY, rightTileX) != '#') {
            direction = 3;
            isMoving = true;
            EntityTile.sprite.setPosition(EntityTile.sprite.getPosition().x, newY);
        }
    }

    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down)) {
        float newY = EntityTile.sprite.getPosition().y + speed + entityBounds.height;
        float centerX = EntityTile.sprite.getPosition().x + entityBounds.width / 2.0f;
        int bottomTileY = static_cast<int>((newY + entityBounds.height / 2.0f) / 32); // Uwzględnij wysokość sprite'a
        int leftTileX = static_cast<int>((centerX - entityBounds.width / 2.0f) / 32);
        int rightTileX = static_cast<int>((centerX + entityBounds.width / 2.0f) / 32);

        if (mapa.getMapaAt(bottomTileY, leftTileX) != '#' &&
            mapa.getMapaAt(bottomTileY, rightTileX) != '#') {
            direction = 4;
            isMoving = true;
            EntityTile.sprite.setPosition(EntityTile.sprite.getPosition().x, newY - entityBounds.height);
        }
    }
}



void Entity::update(){
    //EntityTile.sprite.setOrigin(EntityTile.sprite.getLocalBounds().width / 2, EntityTile.sprite.getLocalBounds().height / 2);
    move();
    animation();

    EntityTile.isChanging = true;
    EntityTile.textureID = getAnimationState();
    std::vector<renderTiles> temp;
    temp.push_back(EntityTile);

    rend.add(temp);
}