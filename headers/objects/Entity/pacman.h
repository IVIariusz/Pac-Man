#ifndef PACMAN
#define PACMAN
#include <SFML/Graphics.hpp>
#include "objects/Entity/entity.h"

class PacMan : public Entity {
    private:
        sf::Clock movementClock;
    public:
        PacMan(sf::Vector2<int> pos, int type, std::string tileMapName) : Entity(pos, type, tileMapName){};
        void Move() override;
        void Animate() override;
};

#endif //PACMAN