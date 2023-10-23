#include "objects/Entity/pacman.h"

void PacMan::Move(){

    if(movementClock.getElapsedTime().asMilliseconds() >= PACMAN_SPEED) {
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left) && Coliderflags.left) {
            structureData.sprite.move(-1, 0);
            moveFlags.left = true;
            moveFlags.Right = false;
        }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right) && Coliderflags.Right) {
            structureData.sprite.move(1, 0);
            moveFlags.Right = true;
            moveFlags.left = false;
        }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up) && Coliderflags.Top) {
            structureData.sprite.move(0, -1);
            moveFlags.Top = true;
            moveFlags.Down = false;
        }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down) && Coliderflags.Down) {
            structureData.sprite.move(0, 1);
            moveFlags.Down = true;
            moveFlags.Top = false;
        }

        movementClock.restart();
    }
}

void PacMan::Animate(){
    if(AnimationClock.getElapsedTime().asMilliseconds() >= ANIMATION_SPEED)
    {
        structureData.textureId += 1;
        if(structureData.textureId > ENTITY_ANIMATION_LENGTH) structureData.textureId = 0;
        AnimationClock.restart();
    }
}