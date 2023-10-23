#ifndef GHOST
#define GHOST
#include <SFML/Graphics.hpp>
#include "objects/Entity/entity.h"

class Ghost : public Entity {
    private:
        sf::Clock movementClock;
    public:
        Ghost(sf::Vector2<int> pos, int type, std::string tileMapName) : Entity(pos, type, tileMapName){};
        void Move() override;
};

#endif //GHOST