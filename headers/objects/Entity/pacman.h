#ifndef PACMAN
#define PACMAN
#include <SFML/Graphics.hpp>
#include "objects/Entity/entity.h"

class PacMan : public Entity {
    private:
        sf::Clock killerModeClock;
        sf::Clock movementClock;
        bool killerMode;
    public:
        PacMan(sf::Vector2<int> pos, int type, std::string tileMapName) : Entity(pos, type, tileMapName){};
        void Move() override;
        void Animate() override;
        void setChase(bool flag) override;
        void Die() override;
        bool getChase() override;
};

#endif //PACMAN