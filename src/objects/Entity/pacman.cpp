#include "objects/Entity/pacman.h"

void PacMan::Move() {
    if (movementClock.getElapsedTime().asMilliseconds() >= PACMAN_SPEED) {
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left) && Coliderflags.left) {
            structureData.sprite.move(-PACMAN_SPEED, 0);
            structureData.sprite.setRotation(180); // Obróć sprite
            moveFlags.left = true;
            moveFlags.Right = false;
        }
        else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right) && Coliderflags.Right) {
            structureData.sprite.move(PACMAN_SPEED, 0);
            structureData.sprite.setRotation(0); // Obróć sprite
            moveFlags.Right = true;
            moveFlags.left = false;
        }
        else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up) && Coliderflags.Top) {
            structureData.sprite.move(0, - PACMAN_SPEED);
            structureData.sprite.setRotation(270); // Obróć sprite
            moveFlags.Top = true;
            moveFlags.Down = false;
        }
        else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down) && Coliderflags.Down) {
            structureData.sprite.move(0, PACMAN_SPEED);
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
        if(animationType == 1)
        {
            structureData.nameOfTileMap = PACMAN_MOVEMENT;   
            structureData.textureId += 1;
            if(structureData.textureId > ENTITY_ANIMATION_LENGTH) structureData.textureId = 0;
        }
        if(animationType == 2)
        {
            structureData.nameOfTileMap = PACMAN_DEATH;   
            structureData.textureId += 1;
            if(structureData.textureId > 2){
                die = true;
                structureData.textureId = 0;
            }
        }
        AnimationClock.restart();
    }

    if(killerModeClock.getElapsedTime().asMilliseconds() >= KILLING_TIME * 1000) setChase(false);
}

void PacMan::setChase(bool flag){
    killerMode = flag;
    killerModeClock.restart();
}

void PacMan::Die() {
    animationType = 2;
}