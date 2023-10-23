#include "objects/Entity/pacman.h"

void PacMan::Move() {
    if (movementClock.getElapsedTime().asMilliseconds() >= PACMAN_SPEED) {
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left) && Coliderflags.left) {
            structureData.sprite.move(-1, 0);
            structureData.sprite.setRotation(180); // Obróć sprite
            moveFlags.left = true;
            moveFlags.Right = false;
        }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right) && Coliderflags.Right) {
            structureData.sprite.move(1, 0);
            structureData.sprite.setRotation(0); // Obróć sprite
            moveFlags.Right = true;
            moveFlags.left = false;
        }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up) && Coliderflags.Top) {
            structureData.sprite.move(0, -1);
            structureData.sprite.setRotation(270); // Obróć sprite
            moveFlags.Top = true;
            moveFlags.Down = false;
        }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down) && Coliderflags.Down) {
            structureData.sprite.move(0, 1);
            structureData.sprite.setRotation(90); // Obróć sprite
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