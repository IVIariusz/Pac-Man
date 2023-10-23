#include "objects/Entity/pacman.h"

void PacMan::Move(){
    
    if(movementClock.getElapsedTime().asMilliseconds() >= PACMAN_SPEED) {

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left)) {
            structureData.sprite.move(-1, 0);
        }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right)) {
            structureData.sprite.move(1, 0);
        }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up)) {
            structureData.sprite.move(0, -1);
        }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down)) {
            structureData.sprite.move(0, 1);
        }

        movementClock.restart();
    }
}

